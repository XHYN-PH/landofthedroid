#include "recomp.h"
#include "rec_mod.h"

void f_f4b0f0(void) {
  LOAD_REGS();
L_f4b0f0: /* f4b0f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f4b0f1: mov ebp, esp */
  ebp = esp;
/* f4b0f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f4b0f5: push 0xf510b0 */
  { uint32_t v = 0xf510b0u; esp -= 4; W32(esp, v); }
/* f4b0fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f4b100: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4b101: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f4b108: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f4b10b: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* f4b10e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4b10f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4b110: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4b111: mov edi, dword ptr [0xf602e0] */
  edi = R32((uint32_t)(0xf602e0u));
/* f4b117: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f4b11a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4b11b: mov esi, ecx */
  esi = ecx;
/* f4b11d: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f4b124: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xf4b126u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f4b126: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* f4b129: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4b12c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f4b12d: mov ebx, eax */
  ebx = eax;
/* f4b12f: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xf4b131u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f4b131: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* f4b134: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4b137: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f4b138: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4b139: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4b13a: mov ecx, esi */
  ecx = esi;
/* f4b13c: call 0xf41168 */
  esp -= 4; W32(esp, 0xf4b141u); SPILL(); f_f41168(); if (g_unwind) return; RELOAD();
/* f4b141: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* f4b144: call 0xf4fab0 */
  esp -= 4; W32(esp, 0xf4b149u); SPILL(); f_f4fab0(); if (g_unwind) return; RELOAD();
/* f4b149: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* f4b14c: mov edi, dword ptr [esi + 0x40] */
  edi = R32((uint32_t)(esi + 0x40u));
/* f4b14f: imul edi, eax */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(eax);
  edi = (uint32_t)r;
  }
/* f4b152: mov eax, dword ptr [esi + 0xac] */
  eax = R32((uint32_t)(esi + 0xacu));
/* f4b158: add edi, dword ptr [eax + 0x1c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x1cu)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* f4b15b: call 0xf4fab0 */
  esp -= 4; W32(esp, 0xf4b160u); SPILL(); f_f4fab0(); if (g_unwind) return; RELOAD();
/* f4b160: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f4b163: mov byte ptr [edi + eax], 0xff */
  W8((uint32_t)(edi + eax), 0xffu);
/* f4b167: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f4b168: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4b169: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f4b170: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f4b171: mov esp, ebp */
  esp = ebp;
/* f4b173: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f4b174: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_f4b177(void) {
  LOAD_REGS();
L_f4b177: /* f4b177: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f4b17a: push 0xf56aa4 */
  { uint32_t v = 0xf56aa4u; esp -= 4; W32(esp, v); }
/* f4b17f: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* f4b182: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f4b183: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* f4b186: call 0xf4fa48 */
  esp -= 4; W32(esp, 0xf4b18bu); SPILL(); f_f4fa48(); if (g_unwind) return; RELOAD();
  SPILL(); f_f4b18b(); return;
}

void f_f4b18b(void) {
  LOAD_REGS();
L_f4b18b: /* f4b18b: push 0xf55ae8 */
  { uint32_t v = 0xf55ae8u; esp -= 4; W32(esp, v); }
/* f4b190: push 0xf5b988 */
  { uint32_t v = 0xf5b988u; esp -= 4; W32(esp, v); }
/* f4b195: call dword ptr [0xf602d8] */
  esp -= 4; W32(esp, 0xf4b19bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f4b19b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4b19e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f4b1a0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f4b1a2: call 0xf4fa48 */
  esp -= 4; W32(esp, 0xf4b1a7u); SPILL(); f_f4fa48(); if (g_unwind) return; RELOAD();
L_f4b1a7: guest_badaddr(0xf4b1a7); return;
}

void f_f4b1e0(void) {
  LOAD_REGS();
L_f4b1e0: /* f4b1e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f4b1e2: push 0xf510c8 */
  { uint32_t v = 0xf510c8u; esp -= 4; W32(esp, v); }
/* f4b1e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f4b1ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4b1ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f4b1f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f4b1f6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4b1f7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f4b1f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4b1f9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4b1fa: mov ebp, ecx */
  ebp = ecx;
/* f4b1fc: call 0xf411c7 */
  esp -= 4; W32(esp, 0xf4b201u); SPILL(); f_f411c7(); if (g_unwind) return; RELOAD();
/* f4b201: mov ecx, 0xfffff108 */
  ecx = 0xfffff108u;
/* f4b206: xor esi, esi */
  esi = 0;
/* f4b208: mov dword ptr [ebp], 0xf55380 */
  W32((uint32_t)(ebp), 0xf55380u);
/* f4b20f: lea edi, [ebp + 0xcf8] */
  edi = (uint32_t)(ebp + 0xcf8u);
/* f4b215: sub ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* f4b217: jmp 0xf4b220 */
  goto L_f4b220;
L_f4b220: /* f4b220: xor ebx, ebx */
  ebx = 0;
/* f4b222: lea eax, [ecx + edi] */
  eax = (uint32_t)(ecx + edi);
/* f4b225: cmp eax, 0x100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4b22a: setl bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(((sf != of)) ? 1 : 0) & 0xffu);
/* f4b22d: mov eax, esi */
  eax = esi;
/* f4b22f: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* f4b230: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f4b232: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* f4b234: lea eax, [ebx + eax - 0x100] */
  eax = (uint32_t)(ebx + eax + 0xffffff00u);
/* f4b23b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f4b23d: jge 0xf4b243 */
  if ((sf == of)) goto L_f4b243;
L_f4b23f: /* f4b23f: xor eax, eax */
  eax = 0;
/* f4b241: jmp 0xf4b24f */
  goto L_f4b24f;
L_f4b243: /* f4b243: cmp eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4b248: jl 0xf4b24f */
  if ((sf != of)) goto L_f4b24f;
L_f4b24a: /* f4b24a: mov eax, 0xff */
  eax = 0xffu;
L_f4b24f: /* f4b24f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* f4b250: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* f4b252: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* f4b253: cmp esi, 0x600 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x600u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4b259: jl 0xf4b220 */
  if ((sf != of)) goto L_f4b220;
L_f4b25b: /* f4b25b: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* f4b25f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f4b260: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4b261: mov dword ptr [ebp + 0x12fc], 0xffffffff */
  W32((uint32_t)(ebp + 0x12fcu), 0xffffffffu);
/* f4b26b: mov byte ptr [ebp + 0x12f8], 0 */
  W8((uint32_t)(ebp + 0x12f8u), 0x0u);
/* f4b272: mov eax, ebp */
  eax = ebp;
/* f4b274: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f4b275: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f4b276: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f4b27d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4b280: ret  */
  esp += 4; SPILL(); return;
}

void f_f4b219(void) {
  LOAD_REGS();
L_f4b219: /* f4b219: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_f4b220: /* f4b220: xor ebx, ebx */
  ebx = 0;
/* f4b222: lea eax, [ecx + edi] */
  eax = (uint32_t)(ecx + edi);
/* f4b225: cmp eax, 0x100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4b22a: setl bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(((sf != of)) ? 1 : 0) & 0xffu);
/* f4b22d: mov eax, esi */
  eax = esi;
/* f4b22f: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* f4b230: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f4b232: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* f4b234: lea eax, [ebx + eax - 0x100] */
  eax = (uint32_t)(ebx + eax + 0xffffff00u);
/* f4b23b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f4b23d: jge 0xf4b243 */
  if ((sf == of)) goto L_f4b243;
L_f4b23f: /* f4b23f: xor eax, eax */
  eax = 0;
/* f4b241: jmp 0xf4b24f */
  goto L_f4b24f;
L_f4b243: /* f4b243: cmp eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4b248: jl 0xf4b24f */
  if ((sf != of)) goto L_f4b24f;
L_f4b24a: /* f4b24a: mov eax, 0xff */
  eax = 0xffu;
L_f4b24f: /* f4b24f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* f4b250: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* f4b252: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* f4b253: cmp esi, 0x600 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x600u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4b259: jl 0xf4b220 */
  if ((sf != of)) goto L_f4b220;
L_f4b25b: /* f4b25b: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* f4b25f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f4b260: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4b261: mov dword ptr [ebp + 0x12fc], 0xffffffff */
  W32((uint32_t)(ebp + 0x12fcu), 0xffffffffu);
/* f4b26b: mov byte ptr [ebp + 0x12f8], 0 */
  W8((uint32_t)(ebp + 0x12f8u), 0x0u);
/* f4b272: mov eax, ebp */
  eax = ebp;
/* f4b274: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f4b275: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f4b276: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f4b27d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4b280: ret  */
  esp += 4; SPILL(); return;
}

void f_f4b2c0(void) {
  LOAD_REGS();
L_f4b2c0: /* f4b2c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f4b2c1: mov ebp, esp */
  ebp = esp;
/* f4b2c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f4b2c5: push 0xf510e0 */
  { uint32_t v = 0xf510e0u; esp -= 4; W32(esp, v); }
/* f4b2ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f4b2d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4b2d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f4b2d8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f4b2db: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* f4b2de: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4b2df: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* f4b2e2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4b2e3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4b2e4: mov edi, dword ptr [0xf5f3f0] */
  edi = R32((uint32_t)(0xf5f3f0u));
/* f4b2ea: mov edx, 1 */
  edx = 0x1u;
/* f4b2ef: mov esi, ecx */
  esi = ecx;
/* f4b2f1: xor ecx, ecx */
  ecx = 0;
/* f4b2f3: and eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f4b2f5: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4b2f7: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f4b2fa: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* f4b2fd: jne 0xf4b30d */
  if (!zf) goto L_f4b30d;
L_f4b2ff: /* f4b2ff: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* f4b302: cmp dword ptr [0xf5f3ec], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xf5f3ecu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4b308: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* f4b30b: je 0xf4b310 */
  if (zf) goto L_f4b310;
L_f4b30d: /* f4b30d: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
L_f4b310: /* f4b310: mov edi, dword ptr [0xf5f3e8] */
  edi = R32((uint32_t)(0xf5f3e8u));
/* f4b316: xor ecx, ecx */
  ecx = 0;
/* f4b318: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4b31a: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* f4b31d: mov edi, ecx */
  edi = ecx;
/* f4b31f: mov cl, byte ptr [esi + 0xe0] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xe0u))) & 0xffu);
/* f4b325: cmp cl, 8 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* f4b328: jb 0xf4b336 */
  if (cf) goto L_f4b336;
L_f4b32a: /* f4b32a: cmp cl, 0xf */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* f4b32d: jbe 0xf4b334 */
  if ((cf | zf)) goto L_f4b334;
L_f4b32f: /* f4b32f: cmp cl, 0x11 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x11u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f4b332: jne 0xf4b336 */
  if (!zf) goto L_f4b336;
L_f4b334: /* f4b334: xor edx, edx */
  edx = 0;
L_f4b336: /* f4b336: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4b338: je 0xf4b355 */
  if (zf) goto L_f4b355;
L_f4b33a: /* f4b33a: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4b33c: je 0xf4b355 */
  if (zf) goto L_f4b355;
L_f4b33e: /* f4b33e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f4b341: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4b343: jne 0xf4b349 */
  if (!zf) goto L_f4b349;
L_f4b345: /* f4b345: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4b347: je 0xf4b355 */
  if (zf) goto L_f4b355;
L_f4b349: /* f4b349: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* f4b34c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f4b34d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4b34e: mov ecx, esi */
  ecx = esi;
/* f4b350: call 0xf4124e */
  esp -= 4; W32(esp, 0xf4b355u); SPILL(); f_f4124e(); if (g_unwind) return; RELOAD();
L_f4b355: /* f4b355: test byte ptr [ebp + 0x10], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x10u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f4b359: je 0xf4b369 */
  if (zf) goto L_f4b369;
L_f4b35b: /* f4b35b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* f4b35e: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* f4b360: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4b361: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4b362: mov ecx, esi */
  ecx = esi;
/* f4b364: call 0xf411d6 */
  esp -= 4; W32(esp, 0xf4b369u); SPILL(); f_f411d6(); if (g_unwind) return; RELOAD();
L_f4b369: /* f4b369: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f4b36c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f4b36d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4b36e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f4b375: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f4b376: mov esp, ebp */
  esp = ebp;
/* f4b378: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f4b379: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_f4b37c(void) {
  LOAD_REGS();
L_f4b37c: /* f4b37c: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f4b37f: push 0xf56aa4 */
  { uint32_t v = 0xf56aa4u; esp -= 4; W32(esp, v); }
/* f4b384: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* f4b387: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f4b388: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* f4b38b: call 0xf4fa48 */
  esp -= 4; W32(esp, 0xf4b390u); SPILL(); f_f4fa48(); if (g_unwind) return; RELOAD();
  SPILL(); f_f4b390(); return;
}

void f_f4b390(void) {
  LOAD_REGS();
L_f4b390: /* f4b390: push 0xf55b18 */
  { uint32_t v = 0xf55b18u; esp -= 4; W32(esp, v); }
/* f4b395: push 0xf5baa4 */
  { uint32_t v = 0xf5baa4u; esp -= 4; W32(esp, v); }
/* f4b39a: call dword ptr [0xf602d8] */
  esp -= 4; W32(esp, 0xf4b3a0u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f4b3a0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4b3a3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f4b3a5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f4b3a7: call 0xf4fa48 */
  esp -= 4; W32(esp, 0xf4b3acu); SPILL(); f_f4fa48(); if (g_unwind) return; RELOAD();
L_f4b3ac: guest_badaddr(0xf4b3ac); return;
}

void f_f4b3f0(void) {
  LOAD_REGS();
L_f4b3f0: /* f4b3f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f4b3f1: mov ebp, esp */
  ebp = esp;
/* f4b3f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f4b3f5: push 0xf510f0 */
  { uint32_t v = 0xf510f0u; esp -= 4; W32(esp, v); }
/* f4b3fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f4b400: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4b401: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f4b408: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f4b40b: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* f4b40e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4b40f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4b410: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4b411: mov edi, dword ptr [0xf602e0] */
  edi = R32((uint32_t)(0xf602e0u));
/* f4b417: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f4b41a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4b41b: mov esi, ecx */
  esi = ecx;
/* f4b41d: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f4b424: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xf4b426u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f4b426: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* f4b429: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4b42c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f4b42d: mov ebx, eax */
  ebx = eax;
/* f4b42f: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xf4b431u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f4b431: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* f4b434: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4b437: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f4b438: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4b439: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4b43a: mov ecx, esi */
  ecx = esi;
/* f4b43c: call 0xf4128f */
  esp -= 4; W32(esp, 0xf4b441u); SPILL(); f_f4128f(); if (g_unwind) return; RELOAD();
/* f4b441: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f4b444: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f4b445: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4b446: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f4b44d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f4b44e: mov esp, ebp */
  esp = ebp;
/* f4b450: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f4b451: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_f4b454(void) {
  LOAD_REGS();
L_f4b454: /* f4b454: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* f4b457: push 0xf56aa4 */
  { uint32_t v = 0xf56aa4u; esp -= 4; W32(esp, v); }
/* f4b45c: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* f4b45f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f4b460: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* f4b463: call 0xf4fa48 */
  esp -= 4; W32(esp, 0xf4b468u); SPILL(); f_f4fa48(); if (g_unwind) return; RELOAD();
  SPILL(); f_f4b468(); return;
}

void f_f4b468(void) {
  LOAD_REGS();
L_f4b468: /* f4b468: push 0xf55b58 */
  { uint32_t v = 0xf55b58u; esp -= 4; W32(esp, v); }
/* f4b46d: push 0xf5baac */
  { uint32_t v = 0xf5baacu; esp -= 4; W32(esp, v); }
/* f4b472: call dword ptr [0xf602d8] */
  esp -= 4; W32(esp, 0xf4b478u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f4b478: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4b47b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f4b47d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f4b47f: call 0xf4fa48 */
  esp -= 4; W32(esp, 0xf4b484u); SPILL(); f_f4fa48(); if (g_unwind) return; RELOAD();
L_f4b484: guest_badaddr(0xf4b484); return;
}

void f_f4b4c0(void) {
  LOAD_REGS();
L_f4b4c0: /* f4b4c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f4b4c1: mov ebp, esp */
  ebp = esp;
/* f4b4c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f4b4c5: push 0xf51100 */
  { uint32_t v = 0xf51100u; esp -= 4; W32(esp, v); }
/* f4b4ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f4b4d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4b4d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f4b4d8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f4b4db: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* f4b4de: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4b4df: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4b4e0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4b4e1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f4b4e4: mov esi, ecx */
  esi = ecx;
/* f4b4e6: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f4b4ed: call 0xf4fab0 */
  esp -= 4; W32(esp, 0xf4b4f2u); SPILL(); f_f4fab0(); if (g_unwind) return; RELOAD();
/* f4b4f2: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* f4b4f5: mov edi, eax */
  edi = eax;
/* f4b4f7: call 0xf4fab0 */
  esp -= 4; W32(esp, 0xf4b4fcu); SPILL(); f_f4fab0(); if (g_unwind) return; RELOAD();
/* f4b4fc: mov ebx, eax */
  ebx = eax;
/* f4b4fe: test byte ptr [ebp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f4b502: je 0xf4b50d */
  if (zf) goto L_f4b50d;
L_f4b504: /* f4b504: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4b505: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4b506: mov ecx, esi */
  ecx = esi;
/* f4b508: call 0xf4124e */
  esp -= 4; W32(esp, 0xf4b50du); SPILL(); f_f4124e(); if (g_unwind) return; RELOAD();
L_f4b50d: /* f4b50d: test byte ptr [ebp + 8], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x8u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f4b511: je 0xf4b51e */
  if (zf) goto L_f4b51e;
L_f4b513: /* f4b513: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* f4b515: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4b516: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4b517: mov ecx, esi */
  ecx = esi;
/* f4b519: call 0xf411d6 */
  esp -= 4; W32(esp, 0xf4b51eu); SPILL(); f_f411d6(); if (g_unwind) return; RELOAD();
L_f4b51e: /* f4b51e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f4b521: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f4b522: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4b523: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f4b52a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f4b52b: mov esp, ebp */
  esp = ebp;
/* f4b52d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f4b52e: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_f4b531(void) {
  LOAD_REGS();
L_f4b531: /* f4b531: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* f4b534: push 0xf56aa4 */
  { uint32_t v = 0xf56aa4u; esp -= 4; W32(esp, v); }
/* f4b539: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* f4b53c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f4b53d: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* f4b540: call 0xf4fa48 */
  esp -= 4; W32(esp, 0xf4b545u); SPILL(); f_f4fa48(); if (g_unwind) return; RELOAD();
  SPILL(); f_f4b545(); return;
}

void f_f4b545(void) {
  LOAD_REGS();
L_f4b545: /* f4b545: push 0xf55ba0 */
  { uint32_t v = 0xf55ba0u; esp -= 4; W32(esp, v); }
/* f4b54a: push 0xf5bab4 */
  { uint32_t v = 0xf5bab4u; esp -= 4; W32(esp, v); }
/* f4b54f: call dword ptr [0xf602d8] */
  esp -= 4; W32(esp, 0xf4b555u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f4b555: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4b558: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f4b55a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f4b55c: call 0xf4fa48 */
  esp -= 4; W32(esp, 0xf4b561u); SPILL(); f_f4fa48(); if (g_unwind) return; RELOAD();
L_f4b561: guest_badaddr(0xf4b561); return;
}

void f_f4b5a0(void) {
  LOAD_REGS();
L_f4b5a0: /* f4b5a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f4b5a2: push 0xf51118 */
  { uint32_t v = 0xf51118u; esp -= 4; W32(esp, v); }
/* f4b5a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f4b5ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4b5ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f4b5b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f4b5b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4b5b7: mov esi, ecx */
  esi = ecx;
/* f4b5b9: call 0xf41343 */
  esp -= 4; W32(esp, 0xf4b5beu); SPILL(); f_f41343(); if (g_unwind) return; RELOAD();
/* f4b5be: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f4b5c2: mov dword ptr [esi], 0xf55478 */
  W32((uint32_t)(esi), 0xf55478u);
/* f4b5c8: mov eax, esi */
  eax = esi;
/* f4b5ca: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4b5cb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f4b5d2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4b5d5: ret  */
  esp += 4; SPILL(); return;
}

void f_f4b5f0(void) {
  LOAD_REGS();
L_f4b5f0: /* f4b5f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f4b5f1: mov ebp, esp */
  ebp = esp;
/* f4b5f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f4b5f5: push 0xf51130 */
  { uint32_t v = 0xf51130u; esp -= 4; W32(esp, v); }
/* f4b5fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f4b600: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4b601: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f4b608: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f4b60b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4b60c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4b60d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4b60e: xor edi, edi */
  edi = 0;
/* f4b610: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f4b613: mov ebx, ecx */
  ebx = ecx;
/* f4b615: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* f4b618: call 0xf41046 */
  esp -= 4; W32(esp, 0xf4b61du); SPILL(); f_f41046(); if (g_unwind) return; RELOAD();
/* f4b61d: mov eax, dword ptr [ebx + 0x50] */
  eax = R32((uint32_t)(ebx + 0x50u));
/* f4b620: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4b622: je 0xf4b6e1 */
  if (zf) goto L_f4b6e1;
L_f4b628: /* f4b628: mov esi, dword ptr [ebx + 0x18] */
  esi = R32((uint32_t)(ebx + 0x18u));
/* f4b62b: cmp esi, dword ptr [eax + 0x18] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4b62e: je 0xf4b6e1 */
  if (zf) goto L_f4b6e1;
L_f4b634: /* f4b634: mov ecx, ebx */
  ecx = ebx;
/* f4b636: call dword ptr [0xf60378] */
  esp -= 4; W32(esp, 0xf4b63cu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* f4b63c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f4b63e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4b63f: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* f4b642: call dword ptr [0xf60374] */
  esp -= 4; W32(esp, 0xf4b648u); SPILL(); f_4e36a7(); if (g_unwind) return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */ RELOAD();
/* f4b648: mov eax, dword ptr [0xf602fc] */
  eax = R32((uint32_t)(0xf602fcu));
/* f4b64d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* f4b64f: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f4b652: mov eax, dword ptr [0xf60490] */
  eax = R32((uint32_t)(0xf60490u));
/* f4b657: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4b658: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4b659: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f4b65a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4b65b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4b65c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f4b65d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4b65e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4b65f: call dword ptr [0xf602f8] */
  esp -= 4; W32(esp, 0xf4b665u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* f4b665: mov esi, eax */
  esi = eax;
/* f4b667: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4b66a: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4b66c: je 0xf4b681 */
  if (zf) goto L_f4b681;
L_f4b66e: /* f4b66e: mov ecx, esi */
  ecx = esi;
/* f4b670: call dword ptr [0xf6048c] */
  esp -= 4; W32(esp, 0xf4b676u); SPILL(); f_6c39c2(); if (g_unwind) return; /* Engine!??0UPalette@@QAE@XZ */ RELOAD();
/* f4b676: mov dword ptr [esi], 0xf55c10 */
  W32((uint32_t)(esi), 0xf55c10u);
/* f4b67c: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* f4b67f: jmp 0xf4b684 */
  goto L_f4b684;
L_f4b681: /* f4b681: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
L_f4b684: /* f4b684: cmp edi, 0x100 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4b68a: jge 0xf4b6b5 */
  if ((sf == of)) goto L_f4b6b5;
L_f4b68c: /* f4b68c: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* f4b68f: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f4b691: add esi, 0x28 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* f4b694: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f4b696: mov ecx, esi */
  ecx = esi;
/* f4b698: call dword ptr [0xf602e8] */
  esp -= 4; W32(esp, 0xf4b69eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* f4b69e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* f4b6a0: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* f4b6a3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4b6a5: je 0xf4b6b2 */
  if (zf) goto L_f4b6b2;
L_f4b6a7: /* f4b6a7: mov edx, dword ptr [ebx + 0x50] */
  edx = R32((uint32_t)(ebx + 0x50u));
/* f4b6aa: mov ecx, dword ptr [edx + 0x28] */
  ecx = R32((uint32_t)(edx + 0x28u));
/* f4b6ad: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* f4b6b0: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
L_f4b6b2: /* f4b6b2: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* f4b6b3: jmp 0xf4b684 */
  goto L_f4b684;
L_f4b6b5: /* f4b6b5: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f4b6b8: call dword ptr [0xf60488] */
  esp -= 4; W32(esp, 0xf4b6beu); SPILL(); f_6c61b3(); if (g_unwind) return; /* Engine!?ReplaceWithExisting@UPalette@@QAEPAV1@XZ */ RELOAD();
/* f4b6be: mov dword ptr [ebx + 0x50], eax */
  W32((uint32_t)(ebx + 0x50u), eax);
/* f4b6c1: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* f4b6c4: mov ecx, dword ptr [eax + 0x200] */
  ecx = R32((uint32_t)(eax + 0x200u));
/* f4b6ca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f4b6cc: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f4b6ce: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f4b6d0: mov dword ptr [ebx + 0x5c], ecx */
  W32((uint32_t)(ebx + 0x5cu), ecx);
/* f4b6d3: mov ecx, dword ptr [0xf60484] */
  ecx = R32((uint32_t)(0xf60484u));
/* f4b6d9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f4b6db: call dword ptr [0xf60370] */
  esp -= 4; W32(esp, 0xf4b6e1u); SPILL(); f_4e2725(); if (g_unwind) return; /* Core!?Flush@FMemCache@@QAEX_KKH@Z */ RELOAD();
L_f4b6e1: /* f4b6e1: mov ecx, ebx */
  ecx = ebx;
/* f4b6e3: call 0xf41389 */
  esp -= 4; W32(esp, 0xf4b6e8u); SPILL(); f_f41389(); if (g_unwind) return; RELOAD();
/* f4b6e8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f4b6eb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f4b6ec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4b6ed: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f4b6f4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f4b6f5: mov esp, ebp */
  esp = ebp;
/* f4b6f7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f4b6f8: ret  */
  esp += 4; SPILL(); return;
}

void f_f4b6f9(void) {
  LOAD_REGS();
L_f4b6f9: /* f4b6f9: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* f4b6fc: push 0xf56aa4 */
  { uint32_t v = 0xf56aa4u; esp -= 4; W32(esp, v); }
/* f4b701: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* f4b704: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4b705: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* f4b708: call 0xf4fa48 */
  esp -= 4; W32(esp, 0xf4b70du); SPILL(); f_f4fa48(); if (g_unwind) return; RELOAD();
  SPILL(); f_f4b70d(); return;
}

void f_f4b70d(void) {
  LOAD_REGS();
L_f4b70d: /* f4b70d: push 0xf55bd4 */
  { uint32_t v = 0xf55bd4u; esp -= 4; W32(esp, v); }
/* f4b712: push 0xf5bbac */
  { uint32_t v = 0xf5bbacu; esp -= 4; W32(esp, v); }
/* f4b717: call dword ptr [0xf602d8] */
  esp -= 4; W32(esp, 0xf4b71du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f4b71d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4b720: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f4b722: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f4b724: call 0xf4fa48 */
  esp -= 4; W32(esp, 0xf4b729u); SPILL(); f_f4fa48(); if (g_unwind) return; RELOAD();
L_f4b729: guest_badaddr(0xf4b729); return;
}

void f_f4b780(void) {
  LOAD_REGS();
L_f4b780: /* f4b780: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4b781: mov esi, ecx */
  esi = ecx;
/* f4b783: call dword ptr [0xf60494] */
  esp -= 4; W32(esp, 0xf4b789u); SPILL(); f_6c3314(); if (g_unwind) return; /* Engine!??1UPalette@@UAE@XZ */ RELOAD();
/* f4b789: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f4b78e: je 0xf4b79c */
  if (zf) goto L_f4b79c;
L_f4b790: /* f4b790: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* f4b792: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4b793: call dword ptr [0xf60358] */
  esp -= 4; W32(esp, 0xf4b799u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f4b799: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f4b79c: /* f4b79c: mov eax, esi */
  eax = esi;
/* f4b79e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4b79f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f4b7c0(void) {
  LOAD_REGS();
L_f4b7c0: /* f4b7c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f4b7c1: mov ebp, esp */
  ebp = esp;
/* f4b7c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f4b7c5: push 0xf51140 */
  { uint32_t v = 0xf51140u; esp -= 4; W32(esp, v); }
/* f4b7ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f4b7d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4b7d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f4b7d8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f4b7db: mov eax, dword ptr [0xf6047c] */
  eax = R32((uint32_t)(0xf6047cu));
/* f4b7e0: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* f4b7e2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4b7e4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4b7e5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4b7e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4b7e7: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f4b7ea: mov esi, ecx */
  esi = ecx;
/* f4b7ec: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f4b7f3: je 0xf4b81b */
  if (zf) goto L_f4b81b;
L_f4b7f5: /* f4b7f5: mov ecx, dword ptr [eax + 0x4c] */
  ecx = R32((uint32_t)(eax + 0x4cu));
/* f4b7f8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4b7fa: jne 0xf4b81b */
  if (!zf) goto L_f4b81b;
L_f4b7fc: /* f4b7fc: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* f4b7ff: mov eax, 8 */
  eax = 0x8u;
/* f4b804: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4b806: jl 0xf4b81b */
  if ((sf != of)) goto L_f4b81b;
L_f4b808: /* f4b808: cmp dword ptr [esi + 0x44], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x44u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4b80b: jl 0xf4b81b */
  if ((sf != of)) goto L_f4b81b;
L_f4b80d: /* f4b80d: mov ecx, esi */
  ecx = esi;
/* f4b80f: call 0xf41249 */
  esp -= 4; W32(esp, 0xf4b814u); SPILL(); f_f41249(); if (g_unwind) return; RELOAD();
/* f4b814: mov ecx, esi */
  ecx = esi;
/* f4b816: call 0xf41136 */
  esp -= 4; W32(esp, 0xf4b81bu); SPILL(); f_f41136(); if (g_unwind) return; RELOAD();
L_f4b81b: /* f4b81b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f4b81e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f4b81f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4b820: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f4b827: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f4b828: mov esp, ebp */
  esp = ebp;
/* f4b82a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f4b82b: ret  */
  esp += 4; SPILL(); return;
}

void f_f4b82c(void) {
  LOAD_REGS();
L_f4b82c: /* f4b82c: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f4b82f: push 0xf56aa4 */
  { uint32_t v = 0xf56aa4u; esp -= 4; W32(esp, v); }
/* f4b834: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* f4b837: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f4b838: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* f4b83b: call 0xf4fa48 */
  esp -= 4; W32(esp, 0xf4b840u); SPILL(); f_f4fa48(); if (g_unwind) return; RELOAD();
  SPILL(); f_f4b840(); return;
}

void f_f4b840(void) {
  LOAD_REGS();
L_f4b840: /* f4b840: push 0xf55c8c */
  { uint32_t v = 0xf55c8cu; esp -= 4; W32(esp, v); }
/* f4b845: push 0xf5bbbc */
  { uint32_t v = 0xf5bbbcu; esp -= 4; W32(esp, v); }
/* f4b84a: call dword ptr [0xf602d8] */
  esp -= 4; W32(esp, 0xf4b850u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f4b850: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4b853: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f4b855: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f4b857: call 0xf4fa48 */
  esp -= 4; W32(esp, 0xf4b85cu); SPILL(); f_f4fa48(); if (g_unwind) return; RELOAD();
L_f4b85c: guest_badaddr(0xf4b85c); return;
}

void f_f4b890(void) {
  LOAD_REGS();
L_f4b890: /* f4b890: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f4b892: push 0xf51158 */
  { uint32_t v = 0xf51158u; esp -= 4; W32(esp, v); }
/* f4b897: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f4b89d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4b89e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f4b8a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f4b8a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4b8a7: mov esi, ecx */
  esi = ecx;
/* f4b8a9: call 0xf41343 */
  esp -= 4; W32(esp, 0xf4b8aeu); SPILL(); f_f41343(); if (g_unwind) return; RELOAD();
/* f4b8ae: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f4b8b2: mov dword ptr [esi], 0xf55570 */
  W32((uint32_t)(esi), 0xf55570u);
/* f4b8b8: mov eax, esi */
  eax = esi;
/* f4b8ba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4b8bb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f4b8c2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4b8c5: ret  */
  esp += 4; SPILL(); return;
}

void f_f4b8e0(void) {
  LOAD_REGS();
L_f4b8e0: /* f4b8e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f4b8e1: mov ebp, esp */
  ebp = esp;
/* f4b8e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f4b8e5: push 0xf51170 */
  { uint32_t v = 0xf51170u; esp -= 4; W32(esp, v); }
/* f4b8ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f4b8f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4b8f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f4b8f8: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f4b8fb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4b8fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4b8fd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4b8fe: xor edi, edi */
  edi = 0;
/* f4b900: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f4b903: mov ebx, ecx */
  ebx = ecx;
/* f4b905: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* f4b908: call 0xf41046 */
  esp -= 4; W32(esp, 0xf4b90du); SPILL(); f_f41046(); if (g_unwind) return; RELOAD();
/* f4b90d: mov eax, dword ptr [ebx + 0x50] */
  eax = R32((uint32_t)(ebx + 0x50u));
/* f4b910: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4b912: je 0xf4b9d1 */
  if (zf) goto L_f4b9d1;
L_f4b918: /* f4b918: mov esi, dword ptr [ebx + 0x18] */
  esi = R32((uint32_t)(ebx + 0x18u));
/* f4b91b: cmp esi, dword ptr [eax + 0x18] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4b91e: je 0xf4b9d1 */
  if (zf) goto L_f4b9d1;
L_f4b924: /* f4b924: mov ecx, ebx */
  ecx = ebx;
/* f4b926: call dword ptr [0xf60378] */
  esp -= 4; W32(esp, 0xf4b92cu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* f4b92c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f4b92e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4b92f: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* f4b932: call dword ptr [0xf60374] */
  esp -= 4; W32(esp, 0xf4b938u); SPILL(); f_4e36a7(); if (g_unwind) return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */ RELOAD();
/* f4b938: mov eax, dword ptr [0xf602fc] */
  eax = R32((uint32_t)(0xf602fcu));
/* f4b93d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* f4b93f: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f4b942: mov eax, dword ptr [0xf60490] */
  eax = R32((uint32_t)(0xf60490u));
/* f4b947: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4b948: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4b949: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f4b94a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4b94b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4b94c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f4b94d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4b94e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4b94f: call dword ptr [0xf602f8] */
  esp -= 4; W32(esp, 0xf4b955u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* f4b955: mov esi, eax */
  esi = eax;
/* f4b957: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4b95a: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4b95c: je 0xf4b971 */
  if (zf) goto L_f4b971;
L_f4b95e: /* f4b95e: mov ecx, esi */
  ecx = esi;
/* f4b960: call dword ptr [0xf6048c] */
  esp -= 4; W32(esp, 0xf4b966u); SPILL(); f_6c39c2(); if (g_unwind) return; /* Engine!??0UPalette@@QAE@XZ */ RELOAD();
/* f4b966: mov dword ptr [esi], 0xf55c10 */
  W32((uint32_t)(esi), 0xf55c10u);
/* f4b96c: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* f4b96f: jmp 0xf4b974 */
  goto L_f4b974;
L_f4b971: /* f4b971: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
L_f4b974: /* f4b974: cmp edi, 0x100 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4b97a: jge 0xf4b9a5 */
  if ((sf == of)) goto L_f4b9a5;
L_f4b97c: /* f4b97c: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* f4b97f: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f4b981: add esi, 0x28 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* f4b984: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f4b986: mov ecx, esi */
  ecx = esi;
/* f4b988: call dword ptr [0xf602e8] */
  esp -= 4; W32(esp, 0xf4b98eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* f4b98e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* f4b990: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* f4b993: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4b995: je 0xf4b9a2 */
  if (zf) goto L_f4b9a2;
L_f4b997: /* f4b997: mov edx, dword ptr [ebx + 0x50] */
  edx = R32((uint32_t)(ebx + 0x50u));
/* f4b99a: mov ecx, dword ptr [edx + 0x28] */
  ecx = R32((uint32_t)(edx + 0x28u));
/* f4b99d: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* f4b9a0: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
L_f4b9a2: /* f4b9a2: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* f4b9a3: jmp 0xf4b974 */
  goto L_f4b974;
L_f4b9a5: /* f4b9a5: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f4b9a8: call dword ptr [0xf60488] */
  esp -= 4; W32(esp, 0xf4b9aeu); SPILL(); f_6c61b3(); if (g_unwind) return; /* Engine!?ReplaceWithExisting@UPalette@@QAEPAV1@XZ */ RELOAD();
/* f4b9ae: mov dword ptr [ebx + 0x50], eax */
  W32((uint32_t)(ebx + 0x50u), eax);
/* f4b9b1: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* f4b9b4: mov ecx, dword ptr [eax + 0x200] */
  ecx = R32((uint32_t)(eax + 0x200u));
/* f4b9ba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f4b9bc: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f4b9be: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f4b9c0: mov dword ptr [ebx + 0x5c], ecx */
  W32((uint32_t)(ebx + 0x5cu), ecx);
/* f4b9c3: mov ecx, dword ptr [0xf60484] */
  ecx = R32((uint32_t)(0xf60484u));
/* f4b9c9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f4b9cb: call dword ptr [0xf60370] */
  esp -= 4; W32(esp, 0xf4b9d1u); SPILL(); f_4e2725(); if (g_unwind) return; /* Core!?Flush@FMemCache@@QAEX_KKH@Z */ RELOAD();
L_f4b9d1: /* f4b9d1: xor eax, eax */
  eax = 0;
L_f4b9d3: /* f4b9d3: cmp eax, 0x400 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4b9d8: jge 0xf4ba19 */
  if ((sf == of)) goto L_f4ba19;
L_f4b9da: /* f4b9da: mov edx, eax */
  edx = eax;
/* f4b9dc: sar edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* f4b9df: mov byte ptr [eax + ebx + 0x8f4], dl */
  W8((uint32_t)(eax + ebx + 0x8f4u), (edx & 0xffu));
/* f4b9e6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f4b9e7: jmp 0xf4b9d3 */
  goto L_f4b9d3;
L_f4ba19: /* f4ba19: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f4ba1c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f4ba1d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4ba1e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f4ba25: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f4ba26: mov esp, ebp */
  esp = ebp;
/* f4ba28: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f4ba29: ret  */
  esp += 4; SPILL(); return;
}

void f_f4b9e9(void) {
  LOAD_REGS();
L_f4b9e9: /* f4b9e9: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* f4b9ec: push 0xf56aa4 */
  { uint32_t v = 0xf56aa4u; esp -= 4; W32(esp, v); }
/* f4b9f1: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* f4b9f4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f4b9f5: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* f4b9f8: call 0xf4fa48 */
  esp -= 4; W32(esp, 0xf4b9fdu); SPILL(); f_f4fa48(); if (g_unwind) return; RELOAD();
  SPILL(); f_f4b9fd(); return;
}

void f_f4b9fd(void) {
  LOAD_REGS();
L_f4b9fd: /* f4b9fd: push 0xf55cd8 */
  { uint32_t v = 0xf55cd8u; esp -= 4; W32(esp, v); }
/* f4ba02: push 0xf5bcbc */
  { uint32_t v = 0xf5bcbcu; esp -= 4; W32(esp, v); }
/* f4ba07: call dword ptr [0xf602d8] */
  esp -= 4; W32(esp, 0xf4ba0du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f4ba0d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4ba10: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f4ba12: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f4ba14: call 0xf4fa48 */
  esp -= 4; W32(esp, 0xf4ba19u); SPILL(); f_f4fa48(); if (g_unwind) return; RELOAD();
/* f4ba19: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f4ba1c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f4ba1d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4ba1e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f4ba25: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f4ba26: mov esp, ebp */
  esp = ebp;
/* f4ba28: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f4ba29: ret  */
  esp += 4; SPILL(); return;
}

void f_f4ba90(void) {
  LOAD_REGS();
L_f4ba90: /* f4ba90: sub esp, 0x68 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f4ba93: mov eax, dword ptr [ecx + 0xac] */
  eax = R32((uint32_t)(ecx + 0xacu));
/* f4ba99: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4ba9a: mov ebx, dword ptr [eax + 0x1c] */
  ebx = R32((uint32_t)(eax + 0x1cu));
/* f4ba9d: mov eax, dword ptr [ecx + 0x40] */
  eax = R32((uint32_t)(ecx + 0x40u));
/* f4baa0: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* f4baa1: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f4baa3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f4baa4: mov ebp, dword ptr [ecx + 0x8f0] */
  ebp = R32((uint32_t)(ecx + 0x8f0u));
/* f4baaa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4baab: mov esi, eax */
  esi = eax;
/* f4baad: mov eax, dword ptr [ecx + 0x44] */
  eax = R32((uint32_t)(ecx + 0x44u));
/* f4bab0: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* f4bab1: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f4bab3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4bab4: mov edi, eax */
  edi = eax;
/* f4bab6: mov al, byte ptr [ecx + 0x12f8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x12f8u))) & 0xffu);
/* f4babc: sar edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edi = r;
  }
/* f4babe: sar esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* f4bac0: mov edx, edi */
  edx = edi;
/* f4bac2: imul edx, esi */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(esi);
  edx = (uint32_t)r;
  }
/* f4bac5: inc al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a + 1);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f4bac7: shl edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* f4bac9: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f4bacb: mov dword ptr [esp + 0x24], edi */
  W32((uint32_t)(esp + 0x24u), edi);
/* f4bacf: mov dword ptr [esp + 0x4c], ebp */
  W32((uint32_t)(esp + 0x4cu), ebp);
/* f4bad3: mov byte ptr [ecx + 0x12f8], al */
  W8((uint32_t)(ecx + 0x12f8u), (eax & 0xffu));
/* f4bad9: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* f4badd: jne 0xf4c333 */
  if (!zf) goto L_f4c333;
L_f4bae3: /* f4bae3: movzx edi, byte ptr [ebp] */
  edi = (uint32_t)(R8((uint32_t)(ebp)));
/* f4bae7: mov eax, edx */
  eax = edx;
/* f4bae9: movzx edx, byte ptr [edx + ebp - 1] */
  edx = (uint32_t)(R8((uint32_t)(edx + ebp + 0xffffffffu)));
/* f4baee: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f4baf0: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4baf2: mov dword ptr [esp + 0x50], eax */
  W32((uint32_t)(esp + 0x50u), eax);
/* f4baf6: movzx eax, byte ptr [eax] */
  eax = (uint32_t)(R8((uint32_t)(eax)));
/* f4baf9: shl edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* f4bafb: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f4bafd: movzx edi, byte ptr [ebp + esi*2 - 1] */
  edi = (uint32_t)(R8((uint32_t)(ebp + esi*2 + 0xffffffffu)));
/* f4bb02: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4bb04: movzx edi, byte ptr [esi + ebp] */
  edi = (uint32_t)(R8((uint32_t)(esi + ebp)));
/* f4bb08: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* f4bb0a: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* f4bb0c: mov al, byte ptr [edx + edi + 0xef8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + edi + 0xef8u))) & 0xffu);
/* f4bb13: mov byte ptr [ebp], al */
  W8((uint32_t)(ebp), (eax & 0xffu));
/* f4bb16: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* f4bb1a: movzx edi, byte ptr [eax + ebp - 1] */
  edi = (uint32_t)(R8((uint32_t)(eax + ebp + 0xffffffffu)));
/* f4bb1f: movzx edx, byte ptr [eax + ebp - 3] */
  edx = (uint32_t)(R8((uint32_t)(eax + ebp + 0xfffffffdu)));
/* f4bb24: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4bb26: movzx edi, byte ptr [ebp + esi*2 - 1] */
  edi = (uint32_t)(R8((uint32_t)(ebp + esi*2 + 0xffffffffu)));
/* f4bb2b: mov dword ptr [esp + 0x48], edx */
  W32((uint32_t)(esp + 0x48u), edx);
/* f4bb2f: movzx edx, byte ptr [ebp + esi*2 - 3] */
  edx = (uint32_t)(R8((uint32_t)(ebp + esi*2 + 0xfffffffdu)));
/* f4bb34: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4bb36: mov edi, dword ptr [esp + 0x50] */
  edi = R32((uint32_t)(esp + 0x50u));
/* f4bb3a: movzx edi, byte ptr [edi] */
  edi = (uint32_t)(R8((uint32_t)(edi)));
/* f4bb3d: mov dword ptr [esp + 0x38], edx */
  W32((uint32_t)(esp + 0x38u), edx);
/* f4bb41: movzx edx, byte ptr [eax + ebp - 2] */
  edx = (uint32_t)(R8((uint32_t)(eax + ebp + 0xfffffffeu)));
/* f4bb46: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4bb48: movzx edi, byte ptr [ebp + esi*2 - 2] */
  edi = (uint32_t)(R8((uint32_t)(ebp + esi*2 + 0xfffffffeu)));
/* f4bb4d: mov dword ptr [esp + 0x50], edx */
  W32((uint32_t)(esp + 0x50u), edx);
/* f4bb51: movzx edx, byte ptr [esi + ebp] */
  edx = (uint32_t)(R8((uint32_t)(esi + ebp)));
/* f4bb55: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* f4bb57: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* f4bb5b: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4bb5d: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f4bb5f: mov dword ptr [esp + 0x50], edx */
  W32((uint32_t)(esp + 0x50u), edx);
/* f4bb63: mov dl, byte ptr [edx + ecx + 0x8f4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + ecx + 0x8f4u))) & 0xffu);
/* f4bb6a: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* f4bb6c: mov byte ptr [eax + ebx], dl */
  W8((uint32_t)(eax + ebx), (edx & 0xffu));
/* f4bb6f: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* f4bb73: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* f4bb77: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4bb79: mov dl, byte ptr [edx + ecx + 0x8f4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + ecx + 0x8f4u))) & 0xffu);
/* f4bb80: mov byte ptr [ebx + esi*2 - 1], dl */
  W8((uint32_t)(ebx + esi*2 + 0xffffffffu), (edx & 0xffu));
/* f4bb84: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* f4bb88: lea eax, [ebx + esi*2 - 1] */
  eax = (uint32_t)(ebx + esi*2 + 0xffffffffu);
/* f4bb8c: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* f4bb90: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* f4bb94: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4bb96: add eax, dword ptr [esp + 0x48] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x48u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4bb9a: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* f4bb9b: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f4bb9d: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* f4bba1: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* f4bba3: mov al, byte ptr [eax + ecx + 0x8f4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0x8f4u))) & 0xffu);
/* f4bbaa: mov byte ptr [ebx + edx*2 - 1], al */
  W8((uint32_t)(ebx + edx*2 + 0xffffffffu), (eax & 0xffu));
/* f4bbae: mov al, byte ptr [ecx + edi*2 + 0x8f4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + edi*2 + 0x8f4u))) & 0xffu);
/* f4bbb5: mov byte ptr [ebx], al */
  W8((uint32_t)(ebx), (eax & 0xffu));
/* f4bbb7: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* f4bbbb: lea edi, [ebp + 1] */
  edi = (uint32_t)(ebp + 0x1u);
/* f4bbbe: movzx ebp, byte ptr [edi + esi - 1] */
  ebp = (uint32_t)(R8((uint32_t)(edi + esi + 0xffffffffu)));
/* f4bbc3: mov edx, edi */
  edx = edi;
/* f4bbc5: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f4bbc7: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4bbc9: movzx edx, byte ptr [edi] */
  edx = (uint32_t)(R8((uint32_t)(edi)));
/* f4bbcc: shl edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* f4bbce: sub ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* f4bbd0: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* f4bbd3: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* f4bbd7: movzx eax, byte ptr [eax - 1] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0xffffffffu)));
/* f4bbdb: add ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f4bbdd: movzx edx, byte ptr [edi + esi] */
  edx = (uint32_t)(R8((uint32_t)(edi + esi)));
/* f4bbe1: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4bbe3: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4bbe5: mov al, byte ptr [edx + eax + 0xef8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + eax + 0xef8u))) & 0xffu);
/* f4bbec: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* f4bbf0: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* f4bbf2: movzx eax, byte ptr [edi + edx - 3] */
  eax = (uint32_t)(R8((uint32_t)(edi + edx + 0xfffffffdu)));
/* f4bbf7: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* f4bbfb: movzx ebp, byte ptr [edx - 1] */
  ebp = (uint32_t)(R8((uint32_t)(edx + 0xffffffffu)));
/* f4bbff: movzx edx, byte ptr [edx] */
  edx = (uint32_t)(R8((uint32_t)(edx)));
/* f4bc02: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4bc04: movzx ebp, byte ptr [edi + esi - 1] */
  ebp = (uint32_t)(R8((uint32_t)(edi + esi + 0xffffffffu)));
/* f4bc09: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* f4bc0d: movzx eax, byte ptr [edi + esi*2 - 3] */
  eax = (uint32_t)(R8((uint32_t)(edi + esi*2 + 0xfffffffdu)));
/* f4bc12: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4bc14: movzx ebp, byte ptr [edi + esi*2 - 2] */
  ebp = (uint32_t)(R8((uint32_t)(edi + esi*2 + 0xfffffffeu)));
/* f4bc19: mov dword ptr [esp + 0x50], eax */
  W32((uint32_t)(esp + 0x50u), eax);
/* f4bc1d: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* f4bc21: movzx eax, byte ptr [edi + eax - 2] */
  eax = (uint32_t)(R8((uint32_t)(edi + eax + 0xfffffffeu)));
/* f4bc26: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4bc28: movzx edx, byte ptr [edi + esi] */
  edx = (uint32_t)(R8((uint32_t)(edi + esi)));
/* f4bc2c: add ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f4bc2e: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4bc30: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* f4bc34: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* f4bc38: mov al, byte ptr [eax + ecx + 0x8f4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0x8f4u))) & 0xffu);
/* f4bc3f: mov byte ptr [edx + ebx + 2], al */
  W8((uint32_t)(edx + ebx + 0x2u), (eax & 0xffu));
/* f4bc43: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* f4bc47: lea edx, [eax + ebp] */
  edx = (uint32_t)(eax + ebp);
/* f4bc4a: mov dl, byte ptr [edx + ecx + 0x8f4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + ecx + 0x8f4u))) & 0xffu);
/* f4bc51: mov byte ptr [ebx + 1], dl */
  W8((uint32_t)(ebx + 0x1u), (edx & 0xffu));
/* f4bc54: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* f4bc58: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4bc5a: add eax, dword ptr [esp + 0x44] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x44u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4bc5e: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* f4bc5f: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f4bc61: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* f4bc65: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* f4bc67: mov al, byte ptr [eax + ecx + 0x8f4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0x8f4u))) & 0xffu);
/* f4bc6e: mov byte ptr [edx + ebx + 1], al */
  W8((uint32_t)(edx + ebx + 0x1u), (eax & 0xffu));
/* f4bc72: mov al, byte ptr [ecx + ebp*2 + 0x8f4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + ebp*2 + 0x8f4u))) & 0xffu);
/* f4bc79: mov byte ptr [ebx + 2], al */
  W8((uint32_t)(ebx + 0x2u), (eax & 0xffu));
/* f4bc7c: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* f4bc80: movzx ebp, byte ptr [edi + esi] */
  ebp = (uint32_t)(R8((uint32_t)(edi + esi)));
/* f4bc84: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* f4bc85: mov edx, edi */
  edx = edi;
/* f4bc87: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f4bc89: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4bc8b: lea edx, [eax - 1] */
  edx = (uint32_t)(eax + 0xffffffffu);
/* f4bc8e: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* f4bc92: movzx eax, byte ptr [eax] */
  eax = (uint32_t)(R8((uint32_t)(eax)));
/* f4bc95: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
/* f4bc99: movzx edx, byte ptr [edi] */
  edx = (uint32_t)(R8((uint32_t)(edi)));
/* f4bc9c: shl edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* f4bc9e: sub ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* f4bca0: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* f4bca4: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f4bca6: movzx eax, byte ptr [edx] */
  eax = (uint32_t)(R8((uint32_t)(edx)));
/* f4bca9: movzx edx, byte ptr [edi + esi] */
  edx = (uint32_t)(R8((uint32_t)(edi + esi)));
/* f4bcad: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4bcaf: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4bcb1: mov al, byte ptr [edx + eax + 0xef8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + eax + 0xef8u))) & 0xffu);
/* f4bcb8: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* f4bcbc: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* f4bcbe: movzx eax, byte ptr [edi + edx - 3] */
  eax = (uint32_t)(R8((uint32_t)(edi + edx + 0xfffffffdu)));
/* f4bcc3: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* f4bcc7: lea ebp, [edx - 1] */
  ebp = (uint32_t)(edx + 0xffffffffu);
/* f4bcca: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* f4bcce: movzx ebp, byte ptr [ebp] */
  ebp = (uint32_t)(R8((uint32_t)(ebp)));
/* f4bcd2: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4bcd4: movzx ebp, byte ptr [edi + esi - 1] */
  ebp = (uint32_t)(R8((uint32_t)(edi + esi + 0xffffffffu)));
/* f4bcd9: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* f4bcdd: movzx eax, byte ptr [edi + esi*2 - 3] */
  eax = (uint32_t)(R8((uint32_t)(edi + esi*2 + 0xfffffffdu)));
/* f4bce2: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4bce4: movzx ebp, byte ptr [edi + esi - 2] */
  ebp = (uint32_t)(R8((uint32_t)(edi + esi + 0xfffffffeu)));
/* f4bce9: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* f4bced: movzx eax, byte ptr [edx - 2] */
  eax = (uint32_t)(R8((uint32_t)(edx + 0xfffffffeu)));
/* f4bcf1: movzx edx, byte ptr [edx] */
  edx = (uint32_t)(R8((uint32_t)(edx)));
/* f4bcf4: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4bcf6: movzx edx, byte ptr [edi + esi] */
  edx = (uint32_t)(R8((uint32_t)(edi + esi)));
/* f4bcfa: add ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f4bcfc: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* f4bd00: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4bd02: mov dword ptr [esp + 0x50], eax */
  W32((uint32_t)(esp + 0x50u), eax);
/* f4bd06: mov al, byte ptr [eax + ecx + 0x8f4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0x8f4u))) & 0xffu);
/* f4bd0d: mov byte ptr [edx + ebx + 4], al */
  W8((uint32_t)(edx + ebx + 0x4u), (eax & 0xffu));
/* f4bd11: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* f4bd15: lea edx, [eax + ebp] */
  edx = (uint32_t)(eax + ebp);
/* f4bd18: mov al, byte ptr [edx + ecx + 0x8f4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + ecx + 0x8f4u))) & 0xffu);
/* f4bd1f: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* f4bd23: mov byte ptr [ebx + 3], al */
  W8((uint32_t)(ebx + 0x3u), (eax & 0xffu));
/* f4bd26: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* f4bd2a: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4bd2c: add eax, dword ptr [esp + 0x48] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x48u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4bd30: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* f4bd31: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f4bd33: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* f4bd35: cmp esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4bd38: mov dl, byte ptr [eax + ecx + 0x8f4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0x8f4u))) & 0xffu);
/* f4bd3f: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* f4bd43: mov byte ptr [eax + ebx + 3], dl */
  W8((uint32_t)(eax + ebx + 0x3u), (edx & 0xffu));
/* f4bd47: mov dl, byte ptr [ecx + ebp*2 + 0x8f4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + ebp*2 + 0x8f4u))) & 0xffu);
/* f4bd4e: lea ebp, [ebx + 4] */
  ebp = (uint32_t)(ebx + 0x4u);
/* f4bd51: mov byte ptr [ebp], dl */
  W8((uint32_t)(ebp), (edx & 0xffu));
/* f4bd54: mov edx, 2 */
  edx = 0x2u;
/* f4bd59: jle 0xf4be66 */
  if ((zf || sf != of)) goto L_f4be66;
L_f4bd5f: /* f4bd5f: lea eax, [eax + ebx + 3] */
  eax = (uint32_t)(eax + ebx + 0x3u);
/* f4bd63: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* f4bd67: lea eax, [esi - 3] */
  eax = (uint32_t)(esi + 0xfffffffdu);
/* f4bd6a: mov dword ptr [esp + 0x1c], ebp */
  W32((uint32_t)(esp + 0x1cu), ebp);
/* f4bd6e: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* f4bd72: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* f4bd76: jmp 0xf4bd80 */
  goto L_f4bd80;
L_f4bd78: /* f4bd78: mov edx, 2 */
  edx = 0x2u;
/* f4bd7d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_f4bd80: /* f4bd80: add dword ptr [esp + 0x20], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x20u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x20u), r);
  }
/* f4bd84: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* f4bd88: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4bd8a: movzx edx, byte ptr [edi + 1] */
  edx = (uint32_t)(R8((uint32_t)(edi + 0x1u)));
/* f4bd8e: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* f4bd92: movzx eax, byte ptr [esi + edi + 1] */
  eax = (uint32_t)(R8((uint32_t)(esi + edi + 0x1u)));
/* f4bd97: shl edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* f4bd99: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f4bd9b: movzx edx, byte ptr [ebp + 2] */
  edx = (uint32_t)(R8((uint32_t)(ebp + 0x2u)));
/* f4bd9f: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4bda1: movzx edx, byte ptr [esi + edi] */
  edx = (uint32_t)(R8((uint32_t)(esi + edi)));
/* f4bda5: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* f4bda6: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* f4bda7: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4bda9: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4bdab: mov dword ptr [esp + 0x50], ebp */
  W32((uint32_t)(esp + 0x50u), ebp);
/* f4bdaf: movzx ebp, byte ptr [ebp] */
  ebp = (uint32_t)(R8((uint32_t)(ebp)));
/* f4bdb3: mov al, byte ptr [edx + ebp + 0xef8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + ebp + 0xef8u))) & 0xffu);
/* f4bdba: mov ebp, dword ptr [esp + 0x50] */
  ebp = R32((uint32_t)(esp + 0x50u));
/* f4bdbe: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* f4bdc0: movzx edx, byte ptr [ebp] */
  edx = (uint32_t)(R8((uint32_t)(ebp)));
/* f4bdc4: movzx eax, byte ptr [ebp - 2] */
  eax = (uint32_t)(R8((uint32_t)(ebp + 0xfffffffeu)));
/* f4bdc8: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4bdca: movzx edx, byte ptr [esi + edi - 1] */
  edx = (uint32_t)(R8((uint32_t)(esi + edi + 0xffffffffu)));
/* f4bdcf: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* f4bdd3: movzx eax, byte ptr [esi + edi - 3] */
  eax = (uint32_t)(R8((uint32_t)(esi + edi + 0xfffffffdu)));
/* f4bdd8: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4bdda: movzx edx, byte ptr [ebp + 1] */
  edx = (uint32_t)(R8((uint32_t)(ebp + 0x1u)));
/* f4bdde: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* f4bde2: movzx eax, byte ptr [ebp - 1] */
  eax = (uint32_t)(R8((uint32_t)(ebp + 0xffffffffu)));
/* f4bde6: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4bde8: movzx edx, byte ptr [esi + edi] */
  edx = (uint32_t)(R8((uint32_t)(esi + edi)));
/* f4bdec: mov dword ptr [esp + 0x50], eax */
  W32((uint32_t)(esp + 0x50u), eax);
/* f4bdf0: movzx eax, byte ptr [esi + edi - 2] */
  eax = (uint32_t)(R8((uint32_t)(esi + edi + 0xfffffffeu)));
/* f4bdf5: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4bdf7: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* f4bdfb: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* f4bdff: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4be01: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* f4be05: mov dword ptr [esp + 0x50], eax */
  W32((uint32_t)(esp + 0x50u), eax);
/* f4be09: mov al, byte ptr [eax + ecx + 0x8f4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0x8f4u))) & 0xffu);
/* f4be10: mov byte ptr [edx + 1], al */
  W8((uint32_t)(edx + 0x1u), (eax & 0xffu));
/* f4be13: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* f4be17: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* f4be1b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4be1d: mov al, byte ptr [eax + ecx + 0x8f4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0x8f4u))) & 0xffu);
/* f4be24: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* f4be28: mov byte ptr [edx - 1], al */
  W8((uint32_t)(edx + 0xffffffffu), (eax & 0xffu));
/* f4be2b: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* f4be2f: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* f4be33: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4be35: add eax, dword ptr [esp + 0x48] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x48u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4be39: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* f4be3a: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f4be3c: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* f4be40: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* f4be42: mov al, byte ptr [eax + ecx + 0x8f4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0x8f4u))) & 0xffu);
/* f4be49: mov byte ptr [edx], al */
  W8((uint32_t)(edx), (eax & 0xffu));
/* f4be4b: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* f4be4f: mov dl, byte ptr [ecx + eax*2 + 0x8f4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + eax*2 + 0x8f4u))) & 0xffu);
/* f4be56: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* f4be5a: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* f4be5c: dec dword ptr [esp + 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x30u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x30u), r);
  }
/* f4be60: jne 0xf4bd78 */
  if (!zf) goto L_f4bd78;
L_f4be66: /* f4be66: cmp dword ptr [esp + 0x24], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x24u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4be6b: jle 0xf4cbba */
  if ((zf || sf != of)) goto L_f4cbba;
L_f4be71: /* f4be71: lea edi, [ebx - 1] */
  edi = (uint32_t)(ebx + 0xffffffffu);
/* f4be74: lea edi, [edi + esi*4] */
  edi = (uint32_t)(edi + esi*4);
/* f4be77: lea ebp, [esi + esi - 1] */
  ebp = (uint32_t)(esi + esi + 0xffffffffu);
/* f4be7b: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* f4be7f: lea ebp, [ebp + esi*2] */
  ebp = (uint32_t)(ebp + esi*2);
/* f4be83: lea edx, [esi + esi - 2] */
  edx = (uint32_t)(esi + esi + 0xfffffffeu);
/* f4be87: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* f4be8b: lea eax, [esi - 1] */
  eax = (uint32_t)(esi + 0xffffffffu);
/* f4be8e: mov dword ptr [esp + 0x30], edi */
  W32((uint32_t)(esp + 0x30u), edi);
/* f4be92: mov edi, dword ptr [esp + 0x4c] */
  edi = R32((uint32_t)(esp + 0x4cu));
/* f4be96: add ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f4be98: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* f4be9c: lea ebp, [ebx + esi*4 + 4] */
  ebp = (uint32_t)(ebx + esi*4 + 0x4u);
/* f4bea0: lea edx, [esi + esi - 3] */
  edx = (uint32_t)(esi + esi + 0xfffffffdu);
/* f4bea4: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* f4bea8: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f4beaa: mov dword ptr [esp + 0x64], edx */
  W32((uint32_t)(esp + 0x64u), edx);
/* f4beae: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* f4beb2: lea ebp, [edi + esi*2] */
  ebp = (uint32_t)(edi + esi*2);
/* f4beb5: lea ebp, [esi + ebp + 1] */
  ebp = (uint32_t)(esi + ebp + 0x1u);
/* f4beb9: lea edx, [esi - 2] */
  edx = (uint32_t)(esi + 0xfffffffeu);
/* f4bebc: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f4bebe: mov dword ptr [esp + 0x68], edx */
  W32((uint32_t)(esp + 0x68u), edx);
/* f4bec2: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* f4bec6: lea ebp, [ebx + esi*2 + 4] */
  ebp = (uint32_t)(ebx + esi*2 + 0x4u);
/* f4beca: mov edx, esi */
  edx = esi;
/* f4becc: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f4bece: mov dword ptr [esp + 0x3c], edx */
  W32((uint32_t)(esp + 0x3cu), edx);
/* f4bed2: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* f4bed6: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* f4beda: lea ebp, [eax + esi*2] */
  ebp = (uint32_t)(eax + esi*2);
/* f4bedd: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* f4bee1: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f4bee3: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f4bee5: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* f4bee9: mov dword ptr [esp + 0x58], edx */
  W32((uint32_t)(esp + 0x58u), edx);
/* f4beed: mov eax, 1 */
  eax = 0x1u;
/* f4bef2: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f4bef4: mov dword ptr [esp + 0x60], eax */
  W32((uint32_t)(esp + 0x60u), eax);
/* f4bef8: lea edx, [esi + esi] */
  edx = (uint32_t)(esi + esi);
/* f4befb: mov eax, 0xfffffffe */
  eax = 0xfffffffeu;
/* f4bf00: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f4bf02: mov dword ptr [esp + 0x5c], eax */
  W32((uint32_t)(esp + 0x5cu), eax);
/* f4bf06: lea eax, [ebx - 1] */
  eax = (uint32_t)(ebx + 0xffffffffu);
/* f4bf09: mov edx, eax */
  edx = eax;
/* f4bf0b: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f4bf0d: mov dword ptr [esp + 0x6c], edx */
  W32((uint32_t)(esp + 0x6cu), edx);
/* f4bf11: lea ebx, [esi + esi] */
  ebx = (uint32_t)(esi + esi);
/* f4bf14: mov edx, 0xfffffffc */
  edx = 0xfffffffcu;
/* f4bf19: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f4bf1b: mov ebx, dword ptr [esp + 0x34] */
  ebx = R32((uint32_t)(esp + 0x34u));
/* f4bf1f: mov dword ptr [esp + 0x4c], edx */
  W32((uint32_t)(esp + 0x4cu), edx);
/* f4bf23: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* f4bf27: sub ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* f4bf29: mov dword ptr [esp + 0x50], ebx */
  W32((uint32_t)(esp + 0x50u), ebx);
/* f4bf2d: mov ebx, dword ptr [esp + 0x28] */
  ebx = R32((uint32_t)(esp + 0x28u));
/* f4bf31: sub ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* f4bf33: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* f4bf37: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f4bf39: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* f4bf3d: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* f4bf3e: lea ebp, [edi + ebp + 2] */
  ebp = (uint32_t)(edi + ebp + 0x2u);
/* f4bf42: lea edi, [edi + esi + 1] */
  edi = (uint32_t)(edi + esi + 0x1u);
/* f4bf46: mov dword ptr [esp + 0x34], ebx */
  W32((uint32_t)(esp + 0x34u), ebx);
/* f4bf4a: mov dword ptr [esp + 0x54], edx */
  W32((uint32_t)(esp + 0x54u), edx);
/* f4bf4e: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
L_f4bf52: /* f4bf52: movzx edx, byte ptr [edi + esi - 1] */
  edx = (uint32_t)(R8((uint32_t)(edi + esi + 0xffffffffu)));
/* f4bf57: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* f4bf5b: movzx ebx, byte ptr [ebx - 1] */
  ebx = (uint32_t)(R8((uint32_t)(ebx + 0xffffffffu)));
/* f4bf5f: movzx eax, byte ptr [esi + edi - 2] */
  eax = (uint32_t)(R8((uint32_t)(esi + edi + 0xfffffffeu)));
/* f4bf64: shl edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* f4bf66: sub ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* f4bf68: movzx edx, byte ptr [edi - 1] */
  edx = (uint32_t)(R8((uint32_t)(edi + 0xffffffffu)));
/* f4bf6c: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4bf6e: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* f4bf72: movzx eax, byte ptr [eax] */
  eax = (uint32_t)(R8((uint32_t)(eax)));
/* f4bf75: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4bf77: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4bf79: mov dl, byte ptr [eax + ecx + 0xef8] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0xef8u))) & 0xffu);
/* f4bf80: movzx eax, byte ptr [esi + edi - 4] */
  eax = (uint32_t)(R8((uint32_t)(esi + edi + 0xfffffffcu)));
/* f4bf85: mov byte ptr [edi + esi - 1], dl */
  W8((uint32_t)(edi + esi + 0xffffffffu), (edx & 0xffu));
/* f4bf89: movzx edx, byte ptr [esi + edi - 2] */
  edx = (uint32_t)(R8((uint32_t)(esi + edi + 0xfffffffeu)));
/* f4bf8e: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4bf90: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* f4bf94: movzx ebx, byte ptr [edx] */
  ebx = (uint32_t)(R8((uint32_t)(edx)));
/* f4bf97: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* f4bf9b: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* f4bf9f: movzx eax, byte ptr [eax + edx] */
  eax = (uint32_t)(R8((uint32_t)(eax + edx)));
/* f4bfa3: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4bfa5: movzx ebx, byte ptr [esi + edi - 3] */
  ebx = (uint32_t)(R8((uint32_t)(esi + edi + 0xfffffffdu)));
/* f4bfaa: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* f4bfae: movzx eax, byte ptr [edi - 1] */
  eax = (uint32_t)(R8((uint32_t)(edi + 0xffffffffu)));
/* f4bfb2: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4bfb4: mov ebx, dword ptr [esp + 0x34] */
  ebx = R32((uint32_t)(esp + 0x34u));
/* f4bfb8: movzx edx, byte ptr [ebx + edx] */
  edx = (uint32_t)(R8((uint32_t)(ebx + edx)));
/* f4bfbc: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* f4bfc0: movzx ebx, byte ptr [ebx - 1] */
  ebx = (uint32_t)(R8((uint32_t)(ebx + 0xffffffffu)));
/* f4bfc4: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4bfc6: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4bfc8: mov ebx, dword ptr [esp + 0x4c] */
  ebx = R32((uint32_t)(esp + 0x4cu));
/* f4bfcc: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* f4bfd0: mov dl, byte ptr [eax + ecx + 0x8f4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0x8f4u))) & 0xffu);
/* f4bfd7: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* f4bfdb: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* f4bfdf: mov byte ptr [eax + ebx], dl */
  W8((uint32_t)(eax + ebx), (edx & 0xffu));
/* f4bfe2: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* f4bfe6: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* f4bfea: mov ebx, dword ptr [esp + 0x30] */
  ebx = R32((uint32_t)(esp + 0x30u));
/* f4bfee: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4bff0: mov dl, byte ptr [edx + ecx + 0x8f4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + ecx + 0x8f4u))) & 0xffu);
/* f4bff7: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* f4bffb: mov byte ptr [ebx + eax], dl */
  W8((uint32_t)(ebx + eax), (edx & 0xffu));
/* f4bffe: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* f4c002: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* f4c006: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4c008: add eax, dword ptr [esp + 0x40] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x40u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4c00c: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* f4c00d: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f4c00f: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* f4c011: mov dl, byte ptr [eax + ecx + 0x8f4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0x8f4u))) & 0xffu);
/* f4c018: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* f4c01c: mov byte ptr [ebx], dl */
  W8((uint32_t)(ebx), (edx & 0xffu));
/* f4c01e: mov dl, byte ptr [ecx + eax*2 + 0x8f4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + eax*2 + 0x8f4u))) & 0xffu);
/* f4c025: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* f4c029: mov byte ptr [eax - 4], dl */
  W8((uint32_t)(eax + 0xfffffffcu), (edx & 0xffu));
/* f4c02c: movzx edx, byte ptr [edi + esi] */
  edx = (uint32_t)(R8((uint32_t)(edi + esi)));
/* f4c030: movzx eax, byte ptr [edi - 1] */
  eax = (uint32_t)(R8((uint32_t)(edi + 0xffffffffu)));
/* f4c034: movzx ebx, byte ptr [ebp - 1] */
  ebx = (uint32_t)(R8((uint32_t)(ebp + 0xffffffffu)));
/* f4c038: shl edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* f4c03a: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f4c03c: movzx edx, byte ptr [edi] */
  edx = (uint32_t)(R8((uint32_t)(edi)));
/* f4c03f: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4c041: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* f4c045: movzx edx, byte ptr [edx] */
  edx = (uint32_t)(R8((uint32_t)(edx)));
/* f4c048: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4c04a: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4c04c: mov al, byte ptr [ebx + edx + 0xef8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + edx + 0xef8u))) & 0xffu);
/* f4c053: movzx edx, byte ptr [esi + edi - 3] */
  edx = (uint32_t)(R8((uint32_t)(esi + edi + 0xfffffffdu)));
/* f4c058: mov byte ptr [edi + esi], al */
  W8((uint32_t)(edi + esi), (eax & 0xffu));
/* f4c05b: movzx eax, byte ptr [edi - 1] */
  eax = (uint32_t)(R8((uint32_t)(edi + 0xffffffffu)));
/* f4c05f: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4c061: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* f4c065: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* f4c069: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* f4c06d: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4c06f: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* f4c073: movzx eax, byte ptr [edx + eax] */
  eax = (uint32_t)(R8((uint32_t)(edx + eax)));
/* f4c077: movzx edx, byte ptr [edx] */
  edx = (uint32_t)(R8((uint32_t)(edx)));
/* f4c07a: movzx ebx, byte ptr [ebp - 1] */
  ebx = (uint32_t)(R8((uint32_t)(ebp + 0xffffffffu)));
/* f4c07e: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4c080: movzx ebx, byte ptr [edi] */
  ebx = (uint32_t)(R8((uint32_t)(edi)));
/* f4c083: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* f4c087: movzx eax, byte ptr [esi + edi - 2] */
  eax = (uint32_t)(R8((uint32_t)(esi + edi + 0xfffffffeu)));
/* f4c08c: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4c08e: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* f4c092: movzx ebx, byte ptr [ebx] */
  ebx = (uint32_t)(R8((uint32_t)(ebx)));
/* f4c095: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4c097: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4c099: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* f4c09d: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* f4c0a1: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* f4c0a5: mov dl, byte ptr [eax + ecx + 0x8f4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0x8f4u))) & 0xffu);
/* f4c0ac: mov eax, dword ptr [esp + 0x5c] */
  eax = R32((uint32_t)(esp + 0x5cu));
/* f4c0b0: mov byte ptr [ebx + eax], dl */
  W8((uint32_t)(ebx + eax), (edx & 0xffu));
/* f4c0b3: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* f4c0b7: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* f4c0bb: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4c0bd: mov dl, byte ptr [edx + ecx + 0x8f4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + ecx + 0x8f4u))) & 0xffu);
/* f4c0c4: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* f4c0c8: mov byte ptr [eax + 2], dl */
  W8((uint32_t)(eax + 0x2u), (edx & 0xffu));
/* f4c0cb: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* f4c0cf: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* f4c0d3: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4c0d5: add eax, dword ptr [esp + 0x40] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x40u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4c0d9: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* f4c0da: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f4c0dc: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* f4c0de: mov dl, byte ptr [eax + ecx + 0x8f4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0x8f4u))) & 0xffu);
/* f4c0e5: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* f4c0e9: mov byte ptr [eax - 3], dl */
  W8((uint32_t)(eax + 0xfffffffdu), (edx & 0xffu));
/* f4c0ec: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* f4c0f0: mov al, byte ptr [ecx + edx*2 + 0x8f4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + edx*2 + 0x8f4u))) & 0xffu);
/* f4c0f7: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* f4c0fb: mov byte ptr [ebx - 2], al */
  W8((uint32_t)(ebx + 0xfffffffeu), (eax & 0xffu));
/* f4c0fe: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
/* f4c102: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4c104: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* f4c107: mov ebx, dword ptr [esp + 0x3c] */
  ebx = R32((uint32_t)(esp + 0x3cu));
/* f4c10b: movzx ebx, byte ptr [ebx + ebp] */
  ebx = (uint32_t)(R8((uint32_t)(ebx + ebp)));
/* f4c10f: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* f4c113: movzx eax, byte ptr [edi + 1] */
  eax = (uint32_t)(R8((uint32_t)(edi + 0x1u)));
/* f4c117: shl edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* f4c119: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f4c11b: movzx edx, byte ptr [edi] */
  edx = (uint32_t)(R8((uint32_t)(edi)));
/* f4c11e: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4c120: movzx edx, byte ptr [ebp] */
  edx = (uint32_t)(R8((uint32_t)(ebp)));
/* f4c124: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4c126: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4c128: mov al, byte ptr [ebx + edx + 0xef8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + edx + 0xef8u))) & 0xffu);
/* f4c12f: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* f4c133: mov byte ptr [edx], al */
  W8((uint32_t)(edx), (eax & 0xffu));
/* f4c135: movzx edx, byte ptr [edi] */
  edx = (uint32_t)(R8((uint32_t)(edi)));
/* f4c138: movzx eax, byte ptr [esi + edi - 2] */
  eax = (uint32_t)(R8((uint32_t)(esi + edi + 0xfffffffeu)));
/* f4c13d: mov ebx, dword ptr [esp + 0x3c] */
  ebx = R32((uint32_t)(esp + 0x3cu));
/* f4c141: movzx ebx, byte ptr [ebx + ebp] */
  ebx = (uint32_t)(R8((uint32_t)(ebx + ebp)));
/* f4c145: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4c147: movzx edx, byte ptr [ebp] */
  edx = (uint32_t)(R8((uint32_t)(ebp)));
/* f4c14b: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* f4c14f: mov eax, dword ptr [esp + 0x64] */
  eax = R32((uint32_t)(esp + 0x64u));
/* f4c153: movzx eax, byte ptr [eax + ebp] */
  eax = (uint32_t)(R8((uint32_t)(eax + ebp)));
/* f4c157: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4c159: movzx edx, byte ptr [edi - 1] */
  edx = (uint32_t)(R8((uint32_t)(edi + 0xffffffffu)));
/* f4c15d: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* f4c161: movzx eax, byte ptr [edi + 1] */
  eax = (uint32_t)(R8((uint32_t)(edi + 0x1u)));
/* f4c165: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4c167: mov eax, dword ptr [esp + 0x68] */
  eax = R32((uint32_t)(esp + 0x68u));
/* f4c16b: movzx eax, byte ptr [eax + ebp] */
  eax = (uint32_t)(R8((uint32_t)(eax + ebp)));
/* f4c16f: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4c171: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* f4c175: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4c177: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
/* f4c17b: mov dl, byte ptr [edx + ecx + 0x8f4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + ecx + 0x8f4u))) & 0xffu);
/* f4c182: mov byte ptr [ebx], dl */
  W8((uint32_t)(ebx), (edx & 0xffu));
/* f4c184: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* f4c188: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* f4c18c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4c18e: mov al, byte ptr [eax + ecx + 0x8f4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0x8f4u))) & 0xffu);
/* f4c195: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* f4c199: mov edx, dword ptr [esp + 0x6c] */
  edx = R32((uint32_t)(esp + 0x6cu));
/* f4c19d: mov byte ptr [ebx + edx], al */
  W8((uint32_t)(ebx + edx), (eax & 0xffu));
/* f4c1a0: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* f4c1a4: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* f4c1a8: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4c1aa: add eax, dword ptr [esp + 0x40] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x40u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4c1ae: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* f4c1af: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f4c1b1: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* f4c1b3: cmp esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4c1b6: mov dl, byte ptr [eax + ecx + 0x8f4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0x8f4u))) & 0xffu);
/* f4c1bd: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* f4c1c1: mov byte ptr [eax - 1], dl */
  W8((uint32_t)(eax + 0xffffffffu), (edx & 0xffu));
/* f4c1c4: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* f4c1c8: mov dl, byte ptr [ecx + edx*2 + 0x8f4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + edx*2 + 0x8f4u))) & 0xffu);
/* f4c1cf: mov byte ptr [ebx], dl */
  W8((uint32_t)(ebx), (edx & 0xffu));
/* f4c1d1: jle 0xf4c2e6 */
  if ((zf || sf != of)) goto L_f4c2e6;
L_f4c1d7: /* f4c1d7: lea edx, [esi - 3] */
  edx = (uint32_t)(esi + 0xfffffffdu);
/* f4c1da: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
/* f4c1de: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* f4c1e2: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* f4c1e6: mov eax, edi */
  eax = edi;
/* f4c1e8: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
/* f4c1ec: jmp 0xf4c1f2 */
  goto L_f4c1f2;
L_f4c1ee: /* f4c1ee: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_f4c1f2: /* f4c1f2: add dword ptr [esp + 0x24], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x24u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x24u), r);
  }
/* f4c1f7: add dword ptr [esp + 0x28], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x28u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x28u), r);
  }
/* f4c1fc: movzx edx, byte ptr [ebx + 1] */
  edx = (uint32_t)(R8((uint32_t)(ebx + 0x1u)));
/* f4c200: shl edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* f4c202: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* f4c203: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f4c204: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* f4c208: movzx eax, byte ptr [eax + 1] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* f4c20c: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f4c20e: movzx edx, byte ptr [esi + ebx - 1] */
  edx = (uint32_t)(R8((uint32_t)(esi + ebx + 0xffffffffu)));
/* f4c213: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4c215: movzx edx, byte ptr [esi + ebx] */
  edx = (uint32_t)(R8((uint32_t)(esi + ebx)));
/* f4c219: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4c21b: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4c21d: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* f4c221: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* f4c225: movzx ebx, byte ptr [ebx] */
  ebx = (uint32_t)(R8((uint32_t)(ebx)));
/* f4c228: mov al, byte ptr [ebx + edx + 0xef8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + edx + 0xef8u))) & 0xffu);
/* f4c22f: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* f4c233: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* f4c237: mov byte ptr [ebx], al */
  W8((uint32_t)(ebx), (eax & 0xffu));
/* f4c239: movzx eax, byte ptr [edx - 2] */
  eax = (uint32_t)(R8((uint32_t)(edx + 0xfffffffeu)));
/* f4c23d: movzx edx, byte ptr [edx] */
  edx = (uint32_t)(R8((uint32_t)(edx)));
/* f4c240: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4c242: movzx edx, byte ptr [esi + ebx - 1] */
  edx = (uint32_t)(R8((uint32_t)(esi + ebx + 0xffffffffu)));
/* f4c247: mov dword ptr [esp + 0x74], eax */
  W32((uint32_t)(esp + 0x74u), eax);
/* f4c24b: movzx eax, byte ptr [esi + ebx - 3] */
  eax = (uint32_t)(R8((uint32_t)(esi + ebx + 0xfffffffdu)));
/* f4c250: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4c252: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* f4c256: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* f4c25a: movzx eax, byte ptr [edx - 1] */
  eax = (uint32_t)(R8((uint32_t)(edx + 0xffffffffu)));
/* f4c25e: movzx edx, byte ptr [edx + 1] */
  edx = (uint32_t)(R8((uint32_t)(edx + 0x1u)));
/* f4c262: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4c264: movzx edx, byte ptr [esi + ebx] */
  edx = (uint32_t)(R8((uint32_t)(esi + ebx)));
/* f4c268: mov dword ptr [esp + 0x70], eax */
  W32((uint32_t)(esp + 0x70u), eax);
/* f4c26c: movzx eax, byte ptr [esi + ebx - 2] */
  eax = (uint32_t)(R8((uint32_t)(esi + ebx + 0xfffffffeu)));
/* f4c271: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4c273: mov edx, dword ptr [esp + 0x70] */
  edx = R32((uint32_t)(esp + 0x70u));
/* f4c277: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* f4c27b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4c27d: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* f4c281: mov dword ptr [esp + 0x70], eax */
  W32((uint32_t)(esp + 0x70u), eax);
/* f4c285: mov al, byte ptr [eax + ecx + 0x8f4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0x8f4u))) & 0xffu);
/* f4c28c: mov byte ptr [edx], al */
  W8((uint32_t)(edx), (eax & 0xffu));
/* f4c28e: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* f4c292: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* f4c296: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4c298: mov al, byte ptr [eax + ecx + 0x8f4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0x8f4u))) & 0xffu);
/* f4c29f: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* f4c2a3: mov byte ptr [edx - 1], al */
  W8((uint32_t)(edx + 0xffffffffu), (eax & 0xffu));
/* f4c2a6: mov edx, dword ptr [esp + 0x74] */
  edx = R32((uint32_t)(esp + 0x74u));
/* f4c2aa: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* f4c2ae: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4c2b0: add eax, dword ptr [esp + 0x70] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x70u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4c2b4: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* f4c2b5: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f4c2b7: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* f4c2bb: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* f4c2bd: mov al, byte ptr [eax + ecx + 0x8f4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0x8f4u))) & 0xffu);
/* f4c2c4: mov byte ptr [edx - 1], al */
  W8((uint32_t)(edx + 0xffffffffu), (eax & 0xffu));
/* f4c2c7: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* f4c2cb: mov dl, byte ptr [ecx + eax*2 + 0x8f4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + eax*2 + 0x8f4u))) & 0xffu);
/* f4c2d2: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* f4c2d6: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* f4c2d8: dec dword ptr [esp + 0x44] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x44u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x44u), r);
  }
/* f4c2dc: jne 0xf4c1ee */
  if (!zf) goto L_f4c1ee;
L_f4c2e2: /* f4c2e2: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
L_f4c2e6: /* f4c2e6: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* f4c2ea: lea eax, [esi + esi] */
  eax = (uint32_t)(esi + esi);
/* f4c2ed: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4c2ef: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
/* f4c2f3: add dword ptr [esp + 0x18], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x18u), r);
  }
/* f4c2f7: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* f4c2fb: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f4c2fd: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* f4c2ff: lea eax, [esi*4] */
  eax = (uint32_t)(esi*4);
/* f4c306: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4c308: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* f4c30c: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* f4c310: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* f4c312: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4c314: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* f4c318: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* f4c319: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* f4c31d: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* f4c321: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* f4c325: jne 0xf4bf52 */
  if (!zf) goto L_f4bf52;
L_f4c32b: /* f4c32b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f4c32c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4c32d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f4c32e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f4c32f: add esp, 0x68 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4c332: ret  */
  esp += 4; SPILL(); return;
L_f4c333: /* f4c333: lea eax, [edi - 1] */
  eax = (uint32_t)(edi + 0xffffffffu);
/* f4c336: lea edi, [eax + eax + 1] */
  edi = (uint32_t)(eax + eax + 0x1u);
/* f4c33a: mov dword ptr [esp + 0x50], eax */
  W32((uint32_t)(esp + 0x50u), eax);
/* f4c33e: imul edi, esi */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(esi);
  edi = (uint32_t)r;
  }
/* f4c341: lea eax, [eax*4 + 2] */
  eax = (uint32_t)(eax*4 + 0x2u);
/* f4c348: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* f4c34b: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* f4c34d: movzx ebp, byte ptr [edi] */
  ebp = (uint32_t)(R8((uint32_t)(edi)));
/* f4c350: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f4c351: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* f4c355: shl ebp, 1 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebp = r;
  }
/* f4c357: mov eax, edi */
  eax = edi;
/* f4c359: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f4c35b: lea edx, [eax + esi] */
  edx = (uint32_t)(eax + esi);
/* f4c35e: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* f4c362: movzx edx, byte ptr [edx + 1] */
  edx = (uint32_t)(R8((uint32_t)(edx + 0x1u)));
/* f4c366: sub edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f4c368: mov eax, edi */
  eax = edi;
/* f4c36a: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f4c36c: movzx ebp, byte ptr [eax + 1] */
  ebp = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* f4c370: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4c372: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* f4c376: movzx ebp, byte ptr [ebp] */
  ebp = (uint32_t)(R8((uint32_t)(ebp)));
/* f4c37a: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* f4c37e: movzx eax, byte ptr [eax] */
  eax = (uint32_t)(R8((uint32_t)(eax)));
/* f4c381: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4c383: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4c385: mov dl, byte ptr [eax + ebp + 0xef8] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ebp + 0xef8u))) & 0xffu);
/* f4c38c: movzx eax, byte ptr [edi - 2] */
  eax = (uint32_t)(R8((uint32_t)(edi + 0xfffffffeu)));
/* f4c390: mov byte ptr [edi], dl */
  W8((uint32_t)(edi), (edx & 0xffu));
/* f4c392: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* f4c396: movzx edx, byte ptr [edx] */
  edx = (uint32_t)(R8((uint32_t)(edx)));
/* f4c399: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4c39b: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* f4c39f: mov dword ptr [esp + 0x74], eax */
  W32((uint32_t)(esp + 0x74u), eax);
/* f4c3a3: lea eax, [esi + esi] */
  eax = (uint32_t)(esi + esi);
/* f4c3a6: sub eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f4c3a8: movzx edx, byte ptr [eax + edi - 2] */
  edx = (uint32_t)(R8((uint32_t)(eax + edi + 0xfffffffeu)));
/* f4c3ad: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* f4c3b1: movzx ebp, byte ptr [ebp] */
  ebp = (uint32_t)(R8((uint32_t)(ebp)));
/* f4c3b5: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4c3b7: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* f4c3bb: movzx ebp, byte ptr [ebp + 1] */
  ebp = (uint32_t)(R8((uint32_t)(ebp + 0x1u)));
/* f4c3bf: mov dword ptr [esp + 0x48], edx */
  W32((uint32_t)(esp + 0x48u), edx);
/* f4c3c3: movzx edx, byte ptr [edi - 1] */
  edx = (uint32_t)(R8((uint32_t)(edi + 0xffffffffu)));
/* f4c3c7: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4c3c9: movzx ebp, byte ptr [eax + edi - 1] */
  ebp = (uint32_t)(R8((uint32_t)(eax + edi + 0xffffffffu)));
/* f4c3ce: mov dword ptr [esp + 0x70], eax */
  W32((uint32_t)(esp + 0x70u), eax);
/* f4c3d2: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* f4c3d6: movzx eax, byte ptr [eax + 1] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* f4c3da: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f4c3dc: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4c3de: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
/* f4c3e2: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* f4c3e6: lea eax, [esi + esi] */
  eax = (uint32_t)(esi + esi);
/* f4c3e9: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f4c3eb: lea eax, [edx + ebx] */
  eax = (uint32_t)(edx + ebx);
/* f4c3ee: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* f4c3f2: mov dl, byte ptr [edx + ecx + 0x8f4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + ecx + 0x8f4u))) & 0xffu);
/* f4c3f9: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* f4c3fb: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* f4c3ff: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* f4c403: lea edx, [eax + ebp] */
  edx = (uint32_t)(eax + ebp);
/* f4c406: mov al, byte ptr [edx + ecx + 0x8f4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + ecx + 0x8f4u))) & 0xffu);
/* f4c40d: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* f4c411: mov byte ptr [edx + ebx - 1], al */
  W8((uint32_t)(edx + ebx + 0xffffffffu), (eax & 0xffu));
/* f4c415: mov edx, dword ptr [esp + 0x74] */
  edx = R32((uint32_t)(esp + 0x74u));
/* f4c419: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* f4c41d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4c41f: add eax, dword ptr [esp + 0x44] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x44u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4c423: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* f4c424: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f4c426: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* f4c42a: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* f4c42c: mov al, byte ptr [eax + ecx + 0x8f4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0x8f4u))) & 0xffu);
/* f4c433: mov byte ptr [edx - 1], al */
  W8((uint32_t)(edx + 0xffffffffu), (eax & 0xffu));
/* f4c436: mov al, byte ptr [ecx + ebp*2 + 0x8f4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + ebp*2 + 0x8f4u))) & 0xffu);
/* f4c43d: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* f4c441: mov byte ptr [ebx + ebp], al */
  W8((uint32_t)(ebx + ebp), (eax & 0xffu));
/* f4c444: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* f4c445: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* f4c449: add ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f4c44c: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* f4c450: mov edx, edi */
  edx = edi;
/* f4c452: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f4c454: lea eax, [edx + esi] */
  eax = (uint32_t)(edx + esi);
/* f4c457: lea edx, [eax + 1] */
  edx = (uint32_t)(eax + 0x1u);
/* f4c45a: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* f4c45e: mov dword ptr [esp + 0x3c], edx */
  W32((uint32_t)(esp + 0x3cu), edx);
/* f4c462: movzx edx, byte ptr [edx] */
  edx = (uint32_t)(R8((uint32_t)(edx)));
/* f4c465: mov eax, edi */
  eax = edi;
/* f4c467: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f4c469: lea ebp, [eax + 1] */
  ebp = (uint32_t)(eax + 0x1u);
/* f4c46c: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* f4c470: movzx eax, byte ptr [eax] */
  eax = (uint32_t)(R8((uint32_t)(eax)));
/* f4c473: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* f4c477: movzx ebp, byte ptr [edi] */
  ebp = (uint32_t)(R8((uint32_t)(edi)));
/* f4c47a: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4c47c: shl ebp, 1 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebp = r;
  }
/* f4c47e: sub edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f4c480: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* f4c484: movzx ebp, byte ptr [ebp] */
  ebp = (uint32_t)(R8((uint32_t)(ebp)));
/* f4c488: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4c48a: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4c48c: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* f4c490: movzx ebp, byte ptr [ebp] */
  ebp = (uint32_t)(R8((uint32_t)(ebp)));
/* f4c494: mov dl, byte ptr [eax + ebp + 0xef8] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ebp + 0xef8u))) & 0xffu);
/* f4c49b: movzx eax, byte ptr [edi - 2] */
  eax = (uint32_t)(R8((uint32_t)(edi + 0xfffffffeu)));
/* f4c49f: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* f4c4a3: mov byte ptr [edi], dl */
  W8((uint32_t)(edi), (edx & 0xffu));
/* f4c4a5: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* f4c4a9: movzx edx, byte ptr [edx] */
  edx = (uint32_t)(R8((uint32_t)(edx)));
/* f4c4ac: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4c4ae: movzx edx, byte ptr [ebp] */
  edx = (uint32_t)(R8((uint32_t)(ebp)));
/* f4c4b2: mov dword ptr [esp + 0x74], eax */
  W32((uint32_t)(esp + 0x74u), eax);
/* f4c4b6: mov eax, dword ptr [esp + 0x70] */
  eax = R32((uint32_t)(esp + 0x70u));
/* f4c4ba: movzx eax, byte ptr [eax + edi - 2] */
  eax = (uint32_t)(R8((uint32_t)(eax + edi + 0xfffffffeu)));
/* f4c4bf: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4c4c1: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* f4c4c5: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* f4c4c9: movzx edx, byte ptr [eax - 1] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0xffffffffu)));
/* f4c4cd: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* f4c4d1: movzx eax, byte ptr [eax] */
  eax = (uint32_t)(R8((uint32_t)(eax)));
/* f4c4d4: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4c4d6: movzx eax, byte ptr [ebp - 1] */
  eax = (uint32_t)(R8((uint32_t)(ebp + 0xffffffffu)));
/* f4c4da: mov ebp, dword ptr [esp + 0x3c] */
  ebp = R32((uint32_t)(esp + 0x3cu));
/* f4c4de: movzx ebp, byte ptr [ebp] */
  ebp = (uint32_t)(R8((uint32_t)(ebp)));
/* f4c4e2: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4c4e4: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* f4c4e8: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* f4c4ec: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4c4ee: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* f4c4f2: lea eax, [esi + esi] */
  eax = (uint32_t)(esi + esi);
/* f4c4f5: mov edx, ebp */
  edx = ebp;
/* f4c4f7: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f4c4f9: lea eax, [edx + ebx] */
  eax = (uint32_t)(edx + ebx);
/* f4c4fc: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* f4c500: mov dl, byte ptr [edx + ecx + 0x8f4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + ecx + 0x8f4u))) & 0xffu);
/* f4c507: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* f4c509: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* f4c50d: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* f4c511: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* f4c515: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4c517: mov al, byte ptr [eax + ecx + 0x8f4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0x8f4u))) & 0xffu);
/* f4c51e: mov byte ptr [ebx + ebp - 1], al */
  W8((uint32_t)(ebx + ebp + 0xffffffffu), (eax & 0xffu));
/* f4c522: mov eax, dword ptr [esp + 0x74] */
  eax = R32((uint32_t)(esp + 0x74u));
/* f4c526: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4c528: add eax, dword ptr [esp + 0x44] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x44u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4c52c: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* f4c52d: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f4c52f: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* f4c533: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* f4c535: mov al, byte ptr [eax + ecx + 0x8f4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0x8f4u))) & 0xffu);
/* f4c53c: mov byte ptr [edx - 1], al */
  W8((uint32_t)(edx + 0xffffffffu), (eax & 0xffu));
/* f4c53f: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* f4c543: mov al, byte ptr [ecx + eax*2 + 0x8f4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + eax*2 + 0x8f4u))) & 0xffu);
/* f4c54a: mov byte ptr [ebx + ebp], al */
  W8((uint32_t)(ebx + ebp), (eax & 0xffu));
/* f4c54d: lea eax, [esi - 1] */
  eax = (uint32_t)(esi + 0xffffffffu);
/* f4c550: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4c553: jle 0xf4c659 */
  if ((zf || sf != of)) goto L_f4c659;
L_f4c559: /* f4c559: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* f4c55d: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* f4c561: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* f4c565: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* f4c569: lea edx, [esi - 3] */
  edx = (uint32_t)(esi + 0xfffffffdu);
/* f4c56c: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
/* f4c570: jmp 0xf4c576 */
  goto L_f4c576;
L_f4c572: /* f4c572: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
L_f4c576: /* f4c576: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* f4c57a: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* f4c57b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f4c57c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* f4c57d: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* f4c581: add dword ptr [esp + 0x30], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x30u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x30u), r);
  }
/* f4c586: movzx edx, byte ptr [edi] */
  edx = (uint32_t)(R8((uint32_t)(edi)));
/* f4c589: shl edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* f4c58b: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* f4c58f: add ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f4c592: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* f4c596: movzx ebp, byte ptr [eax] */
  ebp = (uint32_t)(R8((uint32_t)(eax)));
/* f4c599: movzx eax, byte ptr [eax - 1] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0xffffffffu)));
/* f4c59d: sub ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* f4c59f: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f4c5a1: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* f4c5a5: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* f4c5a8: movzx eax, byte ptr [eax - 1] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0xffffffffu)));
/* f4c5ac: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4c5ae: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4c5b0: mov dl, byte ptr [eax + edx + 0xef8] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + edx + 0xef8u))) & 0xffu);
/* f4c5b7: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* f4c5bb: mov byte ptr [edi], dl */
  W8((uint32_t)(edi), (edx & 0xffu));
/* f4c5bd: movzx ebp, byte ptr [eax - 1] */
  ebp = (uint32_t)(R8((uint32_t)(eax + 0xffffffffu)));
/* f4c5c1: movzx edx, byte ptr [eax - 3] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0xfffffffdu)));
/* f4c5c5: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4c5c7: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* f4c5cb: mov dword ptr [esp + 0x70], edx */
  W32((uint32_t)(esp + 0x70u), edx);
/* f4c5cf: movzx edx, byte ptr [ebp - 3] */
  edx = (uint32_t)(R8((uint32_t)(ebp + 0xfffffffdu)));
/* f4c5d3: movzx ebp, byte ptr [ebp - 1] */
  ebp = (uint32_t)(R8((uint32_t)(ebp + 0xffffffffu)));
/* f4c5d7: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4c5d9: mov dword ptr [esp + 0x74], edx */
  W32((uint32_t)(esp + 0x74u), edx);
/* f4c5dd: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* f4c5e0: movzx eax, byte ptr [eax - 2] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0xfffffffeu)));
/* f4c5e4: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4c5e6: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* f4c5ea: movzx ebp, byte ptr [eax - 2] */
  ebp = (uint32_t)(R8((uint32_t)(eax + 0xfffffffeu)));
/* f4c5ee: movzx eax, byte ptr [eax] */
  eax = (uint32_t)(R8((uint32_t)(eax)));
/* f4c5f1: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f4c5f3: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* f4c5f7: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4c5f9: mov dword ptr [esp + 0x6c], edx */
  W32((uint32_t)(esp + 0x6cu), edx);
/* f4c5fd: mov dl, byte ptr [edx + ecx + 0x8f4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + ecx + 0x8f4u))) & 0xffu);
/* f4c604: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* f4c606: mov eax, dword ptr [esp + 0x74] */
  eax = R32((uint32_t)(esp + 0x74u));
/* f4c60a: mov dword ptr [esp + 0x68], ebp */
  W32((uint32_t)(esp + 0x68u), ebp);
/* f4c60e: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f4c610: mov dl, byte ptr [ecx + ebp + 0x8f4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + ebp + 0x8f4u))) & 0xffu);
/* f4c617: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* f4c61b: mov byte ptr [ebx + ebp - 1], dl */
  W8((uint32_t)(ebx + ebp + 0xffffffffu), (edx & 0xffu));
/* f4c61f: mov edx, dword ptr [esp + 0x70] */
  edx = R32((uint32_t)(esp + 0x70u));
/* f4c623: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4c625: add eax, dword ptr [esp + 0x6c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x6cu)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4c629: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* f4c62a: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f4c62c: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* f4c630: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* f4c632: mov al, byte ptr [eax + ecx + 0x8f4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0x8f4u))) & 0xffu);
/* f4c639: mov byte ptr [edx - 1], al */
  W8((uint32_t)(edx + 0xffffffffu), (eax & 0xffu));
/* f4c63c: mov eax, dword ptr [esp + 0x68] */
  eax = R32((uint32_t)(esp + 0x68u));
/* f4c640: mov dl, byte ptr [ecx + eax*2 + 0x8f4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + eax*2 + 0x8f4u))) & 0xffu);
/* f4c647: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* f4c64b: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* f4c64c: mov byte ptr [ebx + ebp], dl */
  W8((uint32_t)(ebx + ebp), (edx & 0xffu));
/* f4c64f: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* f4c653: jne 0xf4c572 */
  if (!zf) goto L_f4c572;
L_f4c659: /* f4c659: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* f4c65a: mov edx, edi */
  edx = edi;
/* f4c65c: add ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f4c65f: lea eax, [esi + esi] */
  eax = (uint32_t)(esi + esi);
/* f4c662: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f4c664: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* f4c665: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* f4c669: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* f4c66d: mov eax, edi */
  eax = edi;
/* f4c66f: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f4c671: mov edx, edi */
  edx = edi;
/* f4c673: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f4c675: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* f4c679: movzx edx, byte ptr [edi] */
  edx = (uint32_t)(R8((uint32_t)(edi)));
/* f4c67c: shl edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* f4c67e: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* f4c682: movzx ebp, byte ptr [eax + 1] */
  ebp = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* f4c686: sub ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* f4c688: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* f4c68c: movzx edx, byte ptr [edx] */
  edx = (uint32_t)(R8((uint32_t)(edx)));
/* f4c68f: add ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f4c691: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* f4c695: movzx edx, byte ptr [edx] */
  edx = (uint32_t)(R8((uint32_t)(edx)));
/* f4c698: mov dword ptr [esp + 0x74], eax */
  W32((uint32_t)(esp + 0x74u), eax);
/* f4c69c: movzx eax, byte ptr [eax + esi] */
  eax = (uint32_t)(R8((uint32_t)(eax + esi)));
/* f4c6a0: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4c6a2: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4c6a4: mov dl, byte ptr [eax + edx + 0xef8] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + edx + 0xef8u))) & 0xffu);
/* f4c6ab: mov byte ptr [edi], dl */
  W8((uint32_t)(edi), (edx & 0xffu));
/* f4c6ad: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* f4c6b1: movzx edi, byte ptr [edx] */
  edi = (uint32_t)(R8((uint32_t)(edx)));
/* f4c6b4: movzx eax, byte ptr [edx - 2] */
  eax = (uint32_t)(R8((uint32_t)(edx + 0xfffffffeu)));
/* f4c6b8: movzx edx, byte ptr [edx - 1] */
  edx = (uint32_t)(R8((uint32_t)(edx + 0xffffffffu)));
/* f4c6bc: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4c6be: mov dword ptr [esp + 0x70], eax */
  W32((uint32_t)(esp + 0x70u), eax);
/* f4c6c2: mov eax, dword ptr [esp + 0x74] */
  eax = R32((uint32_t)(esp + 0x74u));
/* f4c6c6: movzx ebp, byte ptr [eax + esi] */
  ebp = (uint32_t)(R8((uint32_t)(eax + esi)));
/* f4c6ca: movzx edi, byte ptr [eax + esi - 2] */
  edi = (uint32_t)(R8((uint32_t)(eax + esi + 0xfffffffeu)));
/* f4c6cf: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* f4c6d1: movzx ebp, byte ptr [eax + esi - 1] */
  ebp = (uint32_t)(R8((uint32_t)(eax + esi + 0xffffffffu)));
/* f4c6d6: movzx eax, byte ptr [eax + 1] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* f4c6da: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f4c6dc: mov dword ptr [esp + 0x48], edi */
  W32((uint32_t)(esp + 0x48u), edi);
/* f4c6e0: mov edi, dword ptr [esp + 0x30] */
  edi = R32((uint32_t)(esp + 0x30u));
/* f4c6e4: movzx edi, byte ptr [edi] */
  edi = (uint32_t)(R8((uint32_t)(edi)));
/* f4c6e7: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4c6e9: lea eax, [edx + ebp] */
  eax = (uint32_t)(edx + ebp);
/* f4c6ec: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* f4c6f0: mov dword ptr [esp + 0x74], eax */
  W32((uint32_t)(esp + 0x74u), eax);
/* f4c6f4: mov al, byte ptr [eax + ecx + 0x8f4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0x8f4u))) & 0xffu);
/* f4c6fb: lea edi, [esi + esi] */
  edi = (uint32_t)(esi + esi);
/* f4c6fe: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f4c700: mov byte ptr [edx + ebx], al */
  W8((uint32_t)(edx + ebx), (eax & 0xffu));
/* f4c703: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* f4c707: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4c709: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* f4c70d: lea edx, [eax + ebp] */
  edx = (uint32_t)(eax + ebp);
/* f4c710: mov al, byte ptr [edx + ecx + 0x8f4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + ecx + 0x8f4u))) & 0xffu);
/* f4c717: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* f4c71b: mov byte ptr [edx + ebx - 1], al */
  W8((uint32_t)(edx + ebx + 0xffffffffu), (eax & 0xffu));
/* f4c71f: mov edx, dword ptr [esp + 0x70] */
  edx = R32((uint32_t)(esp + 0x70u));
/* f4c723: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* f4c727: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4c729: add eax, dword ptr [esp + 0x74] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x74u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4c72d: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* f4c72e: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f4c730: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* f4c734: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* f4c736: mov al, byte ptr [eax + ecx + 0x8f4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0x8f4u))) & 0xffu);
/* f4c73d: mov byte ptr [edx - 1], al */
  W8((uint32_t)(edx + 0xffffffffu), (eax & 0xffu));
/* f4c740: mov al, byte ptr [ecx + ebp*2 + 0x8f4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + ebp*2 + 0x8f4u))) & 0xffu);
/* f4c747: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* f4c74b: mov byte ptr [edx + ebx], al */
  W8((uint32_t)(edx + ebx), (eax & 0xffu));
/* f4c74e: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* f4c752: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f4c754: jle 0xf4cbba */
  if ((zf || sf != of)) goto L_f4cbba;
L_f4c75a: /* f4c75a: mov ebp, dword ptr [esp + 0x4c] */
  ebp = R32((uint32_t)(esp + 0x4cu));
/* f4c75e: lea edx, [ebx + edi] */
  edx = (uint32_t)(ebx + edi);
/* f4c761: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* f4c765: lea edx, [edi + ebp + 1] */
  edx = (uint32_t)(edi + ebp + 0x1u);
/* f4c769: lea eax, [edi - 1] */
  eax = (uint32_t)(edi + 0xffffffffu);
/* f4c76c: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* f4c770: lea edx, [ebx + 3] */
  edx = (uint32_t)(ebx + 0x3u);
/* f4c773: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* f4c777: lea edx, [edi - 2] */
  edx = (uint32_t)(edi + 0xfffffffeu);
/* f4c77a: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* f4c77c: mov dword ptr [esp + 0x68], edi */
  W32((uint32_t)(esp + 0x68u), edi);
/* f4c780: mov edi, edx */
  edi = edx;
/* f4c782: sub edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* f4c784: mov dword ptr [esp + 0x38], edi */
  W32((uint32_t)(esp + 0x38u), edi);
/* f4c788: lea edi, [esi - 1] */
  edi = (uint32_t)(esi + 0xffffffffu);
/* f4c78b: sub edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* f4c78d: mov dword ptr [esp + 0x64], edi */
  W32((uint32_t)(esp + 0x64u), edi);
/* f4c791: lea edi, [esi + 1] */
  edi = (uint32_t)(esi + 0x1u);
/* f4c794: sub edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* f4c796: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* f4c79a: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* f4c79e: mov dword ptr [esp + 0x4c], edi */
  W32((uint32_t)(esp + 0x4cu), edi);
/* f4c7a2: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* f4c7a6: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f4c7a8: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* f4c7ac: lea eax, [esi + ebp + 1] */
  eax = (uint32_t)(esi + ebp + 0x1u);
/* f4c7b0: mov edx, edi */
  edx = edi;
/* f4c7b2: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4c7b4: add ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f4c7b7: lea edi, [esi + 1] */
  edi = (uint32_t)(esi + 0x1u);
/* f4c7ba: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f4c7bc: mov dword ptr [esp + 0x74], edx */
  W32((uint32_t)(esp + 0x74u), edx);
/* f4c7c0: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* f4c7c4: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* f4c7c8: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* f4c7cc: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
L_f4c7d0: /* f4c7d0: movzx eax, byte ptr [eax] */
  eax = (uint32_t)(R8((uint32_t)(eax)));
/* f4c7d3: movzx edx, byte ptr [esi + ebp - 2] */
  edx = (uint32_t)(R8((uint32_t)(esi + ebp + 0xfffffffeu)));
/* f4c7d8: movzx edi, byte ptr [ebp - 1] */
  edi = (uint32_t)(R8((uint32_t)(ebp + 0xffffffffu)));
/* f4c7dc: shl edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* f4c7de: sub edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* f4c7e0: movzx edx, byte ptr [ebp - 2] */
  edx = (uint32_t)(R8((uint32_t)(ebp + 0xfffffffeu)));
/* f4c7e4: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* f4c7e6: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* f4c7ea: movzx edx, byte ptr [edx - 1] */
  edx = (uint32_t)(R8((uint32_t)(edx + 0xffffffffu)));
/* f4c7ee: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4c7f0: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4c7f2: mov al, byte ptr [edx + eax + 0xef8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + eax + 0xef8u))) & 0xffu);
/* f4c7f9: mov byte ptr [esi + ebp - 2], al */
  W8((uint32_t)(esi + ebp + 0xfffffffeu), (eax & 0xffu));
/* f4c7fd: movzx edx, byte ptr [ebp - 2] */
  edx = (uint32_t)(R8((uint32_t)(ebp + 0xfffffffeu)));
/* f4c801: movzx eax, byte ptr [esi + ebp - 4] */
  eax = (uint32_t)(R8((uint32_t)(esi + ebp + 0xfffffffcu)));
/* f4c806: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4c808: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* f4c80c: mov dword ptr [esp + 0x6c], eax */
  W32((uint32_t)(esp + 0x6cu), eax);
/* f4c810: mov eax, dword ptr [esp + 0x74] */
  eax = R32((uint32_t)(esp + 0x74u));
/* f4c814: lea edi, [eax + edx] */
  edi = (uint32_t)(eax + edx);
/* f4c817: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* f4c81b: movzx eax, byte ptr [eax + edi] */
  eax = (uint32_t)(R8((uint32_t)(eax + edi)));
/* f4c81f: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* f4c823: movzx edx, byte ptr [edx - 1] */
  edx = (uint32_t)(R8((uint32_t)(edx + 0xffffffffu)));
/* f4c827: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4c829: movzx edx, byte ptr [esi + ebp - 3] */
  edx = (uint32_t)(R8((uint32_t)(esi + ebp + 0xfffffffdu)));
/* f4c82e: movzx edi, byte ptr [edi] */
  edi = (uint32_t)(R8((uint32_t)(edi)));
/* f4c831: mov dword ptr [esp + 0x50], eax */
  W32((uint32_t)(esp + 0x50u), eax);
/* f4c835: movzx eax, byte ptr [ebp - 1] */
  eax = (uint32_t)(R8((uint32_t)(ebp + 0xffffffffu)));
/* f4c839: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4c83b: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* f4c83f: movzx edx, byte ptr [edx] */
  edx = (uint32_t)(R8((uint32_t)(edx)));
/* f4c842: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* f4c844: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* f4c848: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4c84a: mov dword ptr [esp + 0x70], eax */
  W32((uint32_t)(esp + 0x70u), eax);
/* f4c84e: mov al, byte ptr [eax + ecx + 0x8f4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0x8f4u))) & 0xffu);
/* f4c855: mov byte ptr [edx - 2], al */
  W8((uint32_t)(edx + 0xfffffffeu), (eax & 0xffu));
/* f4c858: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* f4c85c: lea edx, [edi + eax] */
  edx = (uint32_t)(edi + eax);
/* f4c85f: mov al, byte ptr [edx + ecx + 0x8f4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + ecx + 0x8f4u))) & 0xffu);
/* f4c866: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* f4c86a: mov byte ptr [edx], al */
  W8((uint32_t)(edx), (eax & 0xffu));
/* f4c86c: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* f4c870: mov eax, dword ptr [esp + 0x70] */
  eax = R32((uint32_t)(esp + 0x70u));
/* f4c874: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4c876: add eax, dword ptr [esp + 0x6c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x6cu)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4c87a: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* f4c87b: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f4c87d: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* f4c87f: mov dl, byte ptr [eax + ecx + 0x8f4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0x8f4u))) & 0xffu);
/* f4c886: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* f4c88a: mov byte ptr [eax - 3], dl */
  W8((uint32_t)(eax + 0xfffffffdu), (edx & 0xffu));
/* f4c88d: mov dl, byte ptr [ecx + edi*2 + 0x8f4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + edi*2 + 0x8f4u))) & 0xffu);
/* f4c894: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* f4c898: mov byte ptr [edi + eax], dl */
  W8((uint32_t)(edi + eax), (edx & 0xffu));
/* f4c89b: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* f4c89f: mov eax, dword ptr [esp + 0x68] */
  eax = R32((uint32_t)(esp + 0x68u));
/* f4c8a3: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4c8a5: movzx edx, byte ptr [ebp - 1] */
  edx = (uint32_t)(R8((uint32_t)(ebp + 0xffffffffu)));
/* f4c8a9: lea edi, [esi + ebp - 1] */
  edi = (uint32_t)(esi + ebp + 0xffffffffu);
/* f4c8ad: mov ebp, dword ptr [esp + 0x4c] */
  ebp = R32((uint32_t)(esp + 0x4cu));
/* f4c8b1: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* f4c8b5: movzx eax, byte ptr [edi] */
  eax = (uint32_t)(R8((uint32_t)(edi)));
/* f4c8b8: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* f4c8ba: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f4c8bc: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* f4c8c0: movzx ebp, byte ptr [eax + ebp] */
  ebp = (uint32_t)(R8((uint32_t)(eax + ebp)));
/* f4c8c4: movzx eax, byte ptr [eax] */
  eax = (uint32_t)(R8((uint32_t)(eax)));
/* f4c8c7: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4c8c9: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* f4c8cd: movzx ebp, byte ptr [ebp] */
  ebp = (uint32_t)(R8((uint32_t)(ebp)));
/* f4c8d1: add ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f4c8d3: add ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f4c8d5: mov dl, byte ptr [eax + ebp + 0xef8] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ebp + 0xef8u))) & 0xffu);
/* f4c8dc: mov byte ptr [edi], dl */
  W8((uint32_t)(edi), (edx & 0xffu));
/* f4c8de: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* f4c8e2: movzx eax, byte ptr [edx - 1] */
  eax = (uint32_t)(R8((uint32_t)(edx + 0xffffffffu)));
/* f4c8e6: movzx edx, byte ptr [edx + esi - 3] */
  edx = (uint32_t)(R8((uint32_t)(edx + esi + 0xfffffffdu)));
/* f4c8eb: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4c8ed: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* f4c8f1: mov dword ptr [esp + 0x6c], eax */
  W32((uint32_t)(esp + 0x6cu), eax);
/* f4c8f5: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* f4c8f9: movzx edx, byte ptr [eax + edx] */
  edx = (uint32_t)(R8((uint32_t)(eax + edx)));
/* f4c8fd: movzx ebp, byte ptr [eax] */
  ebp = (uint32_t)(R8((uint32_t)(eax)));
/* f4c900: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4c902: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* f4c906: mov dword ptr [esp + 0x50], edx */
  W32((uint32_t)(esp + 0x50u), edx);
/* f4c90a: movzx edx, byte ptr [ebp - 2] */
  edx = (uint32_t)(R8((uint32_t)(ebp + 0xfffffffeu)));
/* f4c90e: movzx ebp, byte ptr [ebp] */
  ebp = (uint32_t)(R8((uint32_t)(ebp)));
/* f4c912: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4c914: mov dword ptr [esp + 0x70], edx */
  W32((uint32_t)(esp + 0x70u), edx);
/* f4c918: mov edx, dword ptr [esp + 0x64] */
  edx = R32((uint32_t)(esp + 0x64u));
/* f4c91c: movzx ebp, byte ptr [eax + edx] */
  ebp = (uint32_t)(R8((uint32_t)(eax + edx)));
/* f4c920: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* f4c924: movzx eax, byte ptr [eax + edx] */
  eax = (uint32_t)(R8((uint32_t)(eax + edx)));
/* f4c928: mov edx, dword ptr [esp + 0x70] */
  edx = R32((uint32_t)(esp + 0x70u));
/* f4c92c: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f4c92e: lea eax, [edx + ebp] */
  eax = (uint32_t)(edx + ebp);
/* f4c931: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* f4c935: mov dword ptr [esp + 0x70], eax */
  W32((uint32_t)(esp + 0x70u), eax);
/* f4c939: mov al, byte ptr [eax + ecx + 0x8f4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0x8f4u))) & 0xffu);
/* f4c940: mov byte ptr [edx], al */
  W8((uint32_t)(edx), (eax & 0xffu));
/* f4c942: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* f4c946: lea edx, [eax + ebp] */
  edx = (uint32_t)(eax + ebp);
/* f4c949: mov al, byte ptr [edx + ecx + 0x8f4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + ecx + 0x8f4u))) & 0xffu);
/* f4c950: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* f4c954: mov byte ptr [edx + 2], al */
  W8((uint32_t)(edx + 0x2u), (eax & 0xffu));
/* f4c957: mov edx, dword ptr [esp + 0x6c] */
  edx = R32((uint32_t)(esp + 0x6cu));
/* f4c95b: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* f4c95f: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4c961: add eax, dword ptr [esp + 0x70] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x70u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4c965: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* f4c966: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f4c968: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* f4c96c: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* f4c96e: mov al, byte ptr [eax + ecx + 0x8f4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0x8f4u))) & 0xffu);
/* f4c975: mov byte ptr [edx - 1], al */
  W8((uint32_t)(edx + 0xffffffffu), (eax & 0xffu));
/* f4c978: mov al, byte ptr [ecx + ebp*2 + 0x8f4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + ebp*2 + 0x8f4u))) & 0xffu);
/* f4c97f: mov byte ptr [edx + esi*2], al */
  W8((uint32_t)(edx + esi*2), (eax & 0xffu));
/* f4c982: lea eax, [esi - 1] */
  eax = (uint32_t)(esi + 0xffffffffu);
/* f4c985: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4c988: jle 0xf4ca92 */
  if ((zf || sf != of)) goto L_f4ca92;
L_f4c98e: /* f4c98e: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* f4c992: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* f4c996: lea edx, [esi - 3] */
  edx = (uint32_t)(esi + 0xfffffffdu);
/* f4c999: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
/* f4c99d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_f4c9a0: /* f4c9a0: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* f4c9a4: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* f4c9a5: mov eax, 2 */
  eax = 0x2u;
/* f4c9aa: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4c9ac: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* f4c9b0: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* f4c9b4: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4c9b6: movzx eax, byte ptr [edi] */
  eax = (uint32_t)(R8((uint32_t)(edi)));
/* f4c9b9: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* f4c9bb: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* f4c9bf: movzx edx, byte ptr [ebp + 1] */
  edx = (uint32_t)(R8((uint32_t)(ebp + 0x1u)));
/* f4c9c3: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f4c9c5: movzx eax, byte ptr [ebp] */
  eax = (uint32_t)(R8((uint32_t)(ebp)));
/* f4c9c9: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4c9cb: movzx eax, byte ptr [esi + edi + 1] */
  eax = (uint32_t)(R8((uint32_t)(esi + edi + 0x1u)));
/* f4c9d0: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4c9d2: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4c9d4: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* f4c9d5: mov dword ptr [esp + 0x70], ebp */
  W32((uint32_t)(esp + 0x70u), ebp);
/* f4c9d9: movzx ebp, byte ptr [edi + esi] */
  ebp = (uint32_t)(R8((uint32_t)(edi + esi)));
/* f4c9dd: mov dl, byte ptr [eax + ebp + 0xef8] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ebp + 0xef8u))) & 0xffu);
/* f4c9e4: mov ebp, dword ptr [esp + 0x70] */
  ebp = R32((uint32_t)(esp + 0x70u));
/* f4c9e8: mov byte ptr [edi], dl */
  W8((uint32_t)(edi), (edx & 0xffu));
/* f4c9ea: movzx edx, byte ptr [ebp - 1] */
  edx = (uint32_t)(R8((uint32_t)(ebp + 0xffffffffu)));
/* f4c9ee: movzx eax, byte ptr [ebp - 3] */
  eax = (uint32_t)(R8((uint32_t)(ebp + 0xfffffffdu)));
/* f4c9f2: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4c9f4: movzx edx, byte ptr [edi + esi] */
  edx = (uint32_t)(R8((uint32_t)(edi + esi)));
/* f4c9f8: mov dword ptr [esp + 0x6c], eax */
  W32((uint32_t)(esp + 0x6cu), eax);
/* f4c9fc: movzx eax, byte ptr [esi + edi - 2] */
  eax = (uint32_t)(R8((uint32_t)(esi + edi + 0xfffffffeu)));
/* f4ca01: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4ca03: movzx edx, byte ptr [ebp - 2] */
  edx = (uint32_t)(R8((uint32_t)(ebp + 0xfffffffeu)));
/* f4ca07: mov dword ptr [esp + 0x50], eax */
  W32((uint32_t)(esp + 0x50u), eax);
/* f4ca0b: movzx eax, byte ptr [ebp] */
  eax = (uint32_t)(R8((uint32_t)(ebp)));
/* f4ca0f: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4ca11: movzx edx, byte ptr [esi + edi + 1] */
  edx = (uint32_t)(R8((uint32_t)(esi + edi + 0x1u)));
/* f4ca16: mov dword ptr [esp + 0x70], eax */
  W32((uint32_t)(esp + 0x70u), eax);
/* f4ca1a: movzx eax, byte ptr [esi + edi - 1] */
  eax = (uint32_t)(R8((uint32_t)(esi + edi + 0xffffffffu)));
/* f4ca1f: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4ca21: mov edx, dword ptr [esp + 0x70] */
  edx = R32((uint32_t)(esp + 0x70u));
/* f4ca25: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* f4ca29: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4ca2b: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* f4ca2f: mov dword ptr [esp + 0x70], eax */
  W32((uint32_t)(esp + 0x70u), eax);
/* f4ca33: mov al, byte ptr [eax + ecx + 0x8f4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0x8f4u))) & 0xffu);
/* f4ca3a: mov byte ptr [edx], al */
  W8((uint32_t)(edx), (eax & 0xffu));
/* f4ca3c: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* f4ca40: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* f4ca44: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4ca46: mov al, byte ptr [eax + ecx + 0x8f4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0x8f4u))) & 0xffu);
/* f4ca4d: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* f4ca51: mov byte ptr [ebx + edx - 1], al */
  W8((uint32_t)(ebx + edx + 0xffffffffu), (eax & 0xffu));
/* f4ca55: mov edx, dword ptr [esp + 0x6c] */
  edx = R32((uint32_t)(esp + 0x6cu));
/* f4ca59: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* f4ca5d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4ca5f: add eax, dword ptr [esp + 0x70] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x70u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4ca63: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* f4ca64: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f4ca66: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* f4ca6a: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* f4ca6c: mov al, byte ptr [eax + ecx + 0x8f4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0x8f4u))) & 0xffu);
/* f4ca73: mov byte ptr [edx - 1], al */
  W8((uint32_t)(edx + 0xffffffffu), (eax & 0xffu));
/* f4ca76: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* f4ca7a: mov dl, byte ptr [ecx + eax*2 + 0x8f4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + eax*2 + 0x8f4u))) & 0xffu);
/* f4ca81: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* f4ca85: mov byte ptr [eax + ebx], dl */
  W8((uint32_t)(eax + ebx), (edx & 0xffu));
/* f4ca88: dec dword ptr [esp + 0x44] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x44u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x44u), r);
  }
/* f4ca8c: jne 0xf4c9a0 */
  if (!zf) goto L_f4c9a0;
L_f4ca92: /* f4ca92: movzx ebp, byte ptr [edi + 2] */
  ebp = (uint32_t)(R8((uint32_t)(edi + 0x2u)));
/* f4ca96: add dword ptr [esp + 0x10], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x10u), r);
  }
/* f4ca9b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* f4ca9c: mov dword ptr [esp + 0x50], ebp */
  W32((uint32_t)(esp + 0x50u), ebp);
/* f4caa0: movzx ebp, byte ptr [edi] */
  ebp = (uint32_t)(R8((uint32_t)(edi)));
/* f4caa3: mov edx, edi */
  edx = edi;
/* f4caa5: lea eax, [esi + esi] */
  eax = (uint32_t)(esi + esi);
/* f4caa8: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f4caaa: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* f4caab: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* f4caaf: movzx edx, byte ptr [edx] */
  edx = (uint32_t)(R8((uint32_t)(edx)));
/* f4cab2: shl ebp, 1 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebp = r;
  }
/* f4cab4: mov eax, edi */
  eax = edi;
/* f4cab6: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f4cab8: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* f4cabc: movzx eax, byte ptr [eax] */
  eax = (uint32_t)(R8((uint32_t)(eax)));
/* f4cabf: sub eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f4cac1: add edx, dword ptr [esp + 0x50] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x50u)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4cac5: movzx ebp, byte ptr [edi + esi] */
  ebp = (uint32_t)(R8((uint32_t)(edi + esi)));
/* f4cac9: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4cacb: add ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f4cacd: mov al, byte ptr [ecx + ebp + 0xef8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + ebp + 0xef8u))) & 0xffu);
/* f4cad4: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* f4cad6: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* f4cada: movzx ebp, byte ptr [eax] */
  ebp = (uint32_t)(R8((uint32_t)(eax)));
/* f4cadd: movzx edx, byte ptr [eax - 2] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0xfffffffeu)));
/* f4cae1: movzx eax, byte ptr [eax - 1] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0xffffffffu)));
/* f4cae5: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4cae7: movzx ebp, byte ptr [edi + esi] */
  ebp = (uint32_t)(R8((uint32_t)(edi + esi)));
/* f4caeb: mov dword ptr [esp + 0x70], edx */
  W32((uint32_t)(esp + 0x70u), edx);
/* f4caef: movzx edx, byte ptr [esi + edi - 2] */
  edx = (uint32_t)(R8((uint32_t)(esi + edi + 0xfffffffeu)));
/* f4caf4: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4caf6: movzx ebp, byte ptr [esi + edi - 1] */
  ebp = (uint32_t)(R8((uint32_t)(esi + edi + 0xffffffffu)));
/* f4cafb: mov edi, dword ptr [esp + 0x50] */
  edi = R32((uint32_t)(esp + 0x50u));
/* f4caff: mov dword ptr [esp + 0x48], edx */
  W32((uint32_t)(esp + 0x48u), edx);
/* f4cb03: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* f4cb07: movzx edx, byte ptr [edx] */
  edx = (uint32_t)(R8((uint32_t)(edx)));
/* f4cb0a: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4cb0c: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* f4cb10: add ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f4cb12: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4cb14: mov dword ptr [esp + 0x6c], eax */
  W32((uint32_t)(esp + 0x6cu), eax);
/* f4cb18: mov al, byte ptr [eax + ecx + 0x8f4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0x8f4u))) & 0xffu);
/* f4cb1f: lea edi, [esi + esi] */
  edi = (uint32_t)(esi + esi);
/* f4cb22: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f4cb24: mov byte ptr [edx + ebx], al */
  W8((uint32_t)(edx + ebx), (eax & 0xffu));
/* f4cb27: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* f4cb2b: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f4cb2d: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* f4cb31: lea edx, [eax + ebp] */
  edx = (uint32_t)(eax + ebp);
/* f4cb34: mov al, byte ptr [edx + ecx + 0x8f4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + ecx + 0x8f4u))) & 0xffu);
/* f4cb3b: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* f4cb3f: mov byte ptr [ebx + edx - 1], al */
  W8((uint32_t)(ebx + edx + 0xffffffffu), (eax & 0xffu));
/* f4cb43: mov edx, dword ptr [esp + 0x70] */
  edx = R32((uint32_t)(esp + 0x70u));
/* f4cb47: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* f4cb4b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4cb4d: add eax, dword ptr [esp + 0x6c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x6cu)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4cb51: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* f4cb52: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f4cb54: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* f4cb58: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* f4cb5a: mov al, byte ptr [eax + ecx + 0x8f4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0x8f4u))) & 0xffu);
/* f4cb61: mov byte ptr [edx - 1], al */
  W8((uint32_t)(edx + 0xffffffffu), (eax & 0xffu));
/* f4cb64: mov al, byte ptr [ecx + ebp*2 + 0x8f4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + ebp*2 + 0x8f4u))) & 0xffu);
/* f4cb6b: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* f4cb6f: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* f4cb73: add ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f4cb75: mov byte ptr [edx + ebx], al */
  W8((uint32_t)(edx + ebx), (eax & 0xffu));
/* f4cb78: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* f4cb7c: mov dword ptr [esp + 0x1c], ebp */
  W32((uint32_t)(esp + 0x1cu), ebp);
/* f4cb80: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* f4cb84: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4cb86: add ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f4cb88: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* f4cb8c: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* f4cb90: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* f4cb94: lea edx, [esi*4] */
  edx = (uint32_t)(esi*4);
/* f4cb9b: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* f4cb9d: mov dword ptr [esp + 0x24], edi */
  W32((uint32_t)(esp + 0x24u), edi);
/* f4cba1: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* f4cba5: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* f4cba7: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* f4cbab: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* f4cbac: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* f4cbb0: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* f4cbb4: jne 0xf4c7d0 */
  if (!zf) goto L_f4c7d0;
L_f4cbba: /* f4cbba: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f4cbbb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4cbbc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f4cbbd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f4cbbe: add esp, 0x68 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4cbc1: ret  */
  esp += 4; SPILL(); return;
}

void f_f4d020(void) {
  LOAD_REGS();
L_f4d020: /* f4d020: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f4d021: mov ebp, esp */
  ebp = esp;
/* f4d023: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f4d025: push 0xf51180 */
  { uint32_t v = 0xf51180u; esp -= 4; W32(esp, v); }
/* f4d02a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f4d030: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4d031: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f4d038: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f4d03b: mov eax, dword ptr [0xf6047c] */
  eax = R32((uint32_t)(0xf6047cu));
/* f4d040: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* f4d042: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4d044: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4d045: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4d046: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4d047: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f4d04a: mov esi, ecx */
  esi = ecx;
/* f4d04c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f4d053: je 0xf4d07b */
  if (zf) goto L_f4d07b;
L_f4d055: /* f4d055: mov ecx, dword ptr [eax + 0x4c] */
  ecx = R32((uint32_t)(eax + 0x4cu));
/* f4d058: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4d05a: jne 0xf4d07b */
  if (!zf) goto L_f4d07b;
L_f4d05c: /* f4d05c: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* f4d05f: mov eax, 8 */
  eax = 0x8u;
/* f4d064: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4d066: jl 0xf4d07b */
  if ((sf != of)) goto L_f4d07b;
L_f4d068: /* f4d068: cmp dword ptr [esi + 0x44], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x44u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4d06b: jl 0xf4d07b */
  if ((sf != of)) goto L_f4d07b;
L_f4d06d: /* f4d06d: mov ecx, esi */
  ecx = esi;
/* f4d06f: call 0xf41249 */
  esp -= 4; W32(esp, 0xf4d074u); SPILL(); f_f41249(); if (g_unwind) return; RELOAD();
/* f4d074: mov ecx, esi */
  ecx = esi;
/* f4d076: call 0xf411cc */
  esp -= 4; W32(esp, 0xf4d07bu); SPILL(); f_f411cc(); if (g_unwind) return; RELOAD();
L_f4d07b: /* f4d07b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f4d07e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f4d07f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4d080: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f4d087: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f4d088: mov esp, ebp */
  esp = ebp;
/* f4d08a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f4d08b: ret  */
  esp += 4; SPILL(); return;
}

void f_f4d08c(void) {
  LOAD_REGS();
L_f4d08c: /* f4d08c: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f4d08f: push 0xf56aa4 */
  { uint32_t v = 0xf56aa4u; esp -= 4; W32(esp, v); }
/* f4d094: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* f4d097: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f4d098: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* f4d09b: call 0xf4fa48 */
  esp -= 4; W32(esp, 0xf4d0a0u); SPILL(); f_f4fa48(); if (g_unwind) return; RELOAD();
  SPILL(); f_f4d0a0(); return;
}

void f_f4d0a0(void) {
  LOAD_REGS();
L_f4d0a0: /* f4d0a0: push 0xf55d18 */
  { uint32_t v = 0xf55d18u; esp -= 4; W32(esp, v); }
/* f4d0a5: push 0xf5bcd4 */
  { uint32_t v = 0xf5bcd4u; esp -= 4; W32(esp, v); }
/* f4d0aa: call dword ptr [0xf602d8] */
  esp -= 4; W32(esp, 0xf4d0b0u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f4d0b0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4d0b3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f4d0b5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f4d0b7: call 0xf4fa48 */
  esp -= 4; W32(esp, 0xf4d0bcu); SPILL(); f_f4fa48(); if (g_unwind) return; RELOAD();
L_f4d0bc: guest_badaddr(0xf4d0bc); return;
}

void f_f4d0f0(void) {
  LOAD_REGS();
L_f4d0f0: /* f4d0f0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f4d0f2: push 0xf51198 */
  { uint32_t v = 0xf51198u; esp -= 4; W32(esp, v); }
/* f4d0f7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f4d0fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4d0fe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f4d105: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f4d106: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4d107: mov esi, ecx */
  esi = ecx;
/* f4d109: call 0xf41343 */
  esp -= 4; W32(esp, 0xf4d10eu); SPILL(); f_f41343(); if (g_unwind) return; RELOAD();
/* f4d10e: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f4d112: xor eax, eax */
  eax = 0;
/* f4d114: mov dword ptr [esi + 0x1304], eax */
  W32((uint32_t)(esi + 0x1304u), eax);
/* f4d11a: mov dword ptr [esi + 0x1308], eax */
  W32((uint32_t)(esi + 0x1308u), eax);
/* f4d120: mov dword ptr [esi], 0xf55668 */
  W32((uint32_t)(esi), 0xf55668u);
/* f4d126: mov eax, esi */
  eax = esi;
/* f4d128: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4d129: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f4d130: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4d133: ret  */
  esp += 4; SPILL(); return;
}

void f_f4d160(void) {
  LOAD_REGS();
L_f4d160: /* f4d160: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f4d161: mov ebp, esp */
  ebp = esp;
/* f4d163: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f4d165: push 0xf511b0 */
  { uint32_t v = 0xf511b0u; esp -= 4; W32(esp, v); }
/* f4d16a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f4d170: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4d171: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f4d178: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f4d17b: mov eax, dword ptr [0xf6047c] */
  eax = R32((uint32_t)(0xf6047cu));
/* f4d180: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* f4d182: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4d184: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4d185: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4d186: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4d187: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f4d18a: mov esi, ecx */
  esi = ecx;
/* f4d18c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f4d193: je 0xf4d1ca */
  if (zf) goto L_f4d1ca;
L_f4d195: /* f4d195: mov ecx, dword ptr [eax + 0x4c] */
  ecx = R32((uint32_t)(eax + 0x4cu));
/* f4d198: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4d19a: jne 0xf4d1ca */
  if (!zf) goto L_f4d1ca;
L_f4d19c: /* f4d19c: mov eax, dword ptr [esi + 0x1300] */
  eax = R32((uint32_t)(esi + 0x1300u));
/* f4d1a2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4d1a4: je 0xf4d1ca */
  if (zf) goto L_f4d1ca;
L_f4d1a6: /* f4d1a6: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* f4d1a9: mov eax, 8 */
  eax = 0x8u;
/* f4d1ae: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4d1b0: jl 0xf4d1ca */
  if ((sf != of)) goto L_f4d1ca;
L_f4d1b2: /* f4d1b2: cmp dword ptr [esi + 0x44], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x44u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4d1b5: jl 0xf4d1ca */
  if ((sf != of)) goto L_f4d1ca;
L_f4d1b7: /* f4d1b7: mov ecx, esi */
  ecx = esi;
/* f4d1b9: call 0xf41249 */
  esp -= 4; W32(esp, 0xf4d1beu); SPILL(); f_f41249(); if (g_unwind) return; RELOAD();
/* f4d1be: mov ecx, esi */
  ecx = esi;
/* f4d1c0: call 0xf41136 */
  esp -= 4; W32(esp, 0xf4d1c5u); SPILL(); f_f41136(); if (g_unwind) return; RELOAD();
/* f4d1c5: call 0xf41357 */
  esp -= 4; W32(esp, 0xf4d1cau); SPILL(); f_f41357(); if (g_unwind) return; RELOAD();
L_f4d1ca: /* f4d1ca: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f4d1cd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f4d1ce: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4d1cf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f4d1d6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f4d1d7: mov esp, ebp */
  esp = ebp;
/* f4d1d9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f4d1da: ret  */
  esp += 4; SPILL(); return;
}

void f_f4d1db(void) {
  LOAD_REGS();
L_f4d1db: /* f4d1db: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f4d1de: push 0xf56aa4 */
  { uint32_t v = 0xf56aa4u; esp -= 4; W32(esp, v); }
/* f4d1e3: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* f4d1e6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f4d1e7: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* f4d1ea: call 0xf4fa48 */
  esp -= 4; W32(esp, 0xf4d1efu); SPILL(); f_f4fa48(); if (g_unwind) return; RELOAD();
  SPILL(); f_f4d1ef(); return;
}

void f_f4d1ef(void) {
  LOAD_REGS();
L_f4d1ef: /* f4d1ef: push 0xf55d64 */
  { uint32_t v = 0xf55d64u; esp -= 4; W32(esp, v); }
/* f4d1f4: push 0xf5bd18 */
  { uint32_t v = 0xf5bd18u; esp -= 4; W32(esp, v); }
/* f4d1f9: call dword ptr [0xf602d8] */
  esp -= 4; W32(esp, 0xf4d1ffu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f4d1ff: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4d202: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f4d204: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f4d206: call 0xf4fa48 */
  esp -= 4; W32(esp, 0xf4d20bu); SPILL(); f_f4fa48(); if (g_unwind) return; RELOAD();
L_f4d20b: guest_badaddr(0xf4d20b); return;
}

void f_f4d240(void) {
  LOAD_REGS();
L_f4d240: /* f4d240: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f4d241: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4d242: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f4d243: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4d244: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4d245: mov edi, ecx */
  edi = ecx;
/* f4d247: mov ebx, 0xfffff50d */
  ebx = 0xfffff50du;
/* f4d24c: lea esi, [edi + 0x8f4] */
  esi = (uint32_t)(edi + 0x8f4u);
/* f4d252: sub ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* f4d254: mov ebp, 0x400 */
  ebp = 0x400u;
/* f4d259: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_f4d260: /* f4d260: movzx ecx, byte ptr [edi + 0xe1] */
  ecx = (uint32_t)(R8((uint32_t)(edi + 0xe1u)));
/* f4d267: lea eax, [ebx + esi] */
  eax = (uint32_t)(ebx + esi);
/* f4d26a: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* f4d26e: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* f4d272: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* f4d276: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* f4d27a: fmul dword ptr [0xf55dac] */
  ST0 = ST0 * (F32((uint32_t)(0xf55dacu)));
/* f4d280: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* f4d282: call 0xf4fab0 */
  esp -= 4; W32(esp, 0xf4d287u); SPILL(); f_f4fab0(); if (g_unwind) return; RELOAD();
/* f4d287: cmp eax, -0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffff80u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4d28a: jge 0xf4d293 */
  if ((sf == of)) goto L_f4d293;
L_f4d28c: /* f4d28c: mov eax, 0xffffff80 */
  eax = 0xffffff80u;
/* f4d291: jmp 0xf4d29d */
  goto L_f4d29d;
L_f4d293: /* f4d293: cmp eax, 0x7f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4d296: jl 0xf4d29d */
  if ((sf != of)) goto L_f4d29d;
L_f4d298: /* f4d298: mov eax, 0x7f */
  eax = 0x7fu;
L_f4d29d: /* f4d29d: mov byte ptr [esi], al */
  W8((uint32_t)(esi), (eax & 0xffu));
/* f4d29f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* f4d2a0: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* f4d2a1: jne 0xf4d260 */
  if (!zf) goto L_f4d260;
L_f4d2a3: /* f4d2a3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f4d2a4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4d2a5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f4d2a6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f4d2a7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* f4d2a8: ret  */
  esp += 4; SPILL(); return;
}

void f_f4d2d0(void) {
  LOAD_REGS();
L_f4d2d0: /* f4d2d0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f4d2d2: push 0xf511c8 */
  { uint32_t v = 0xf511c8u; esp -= 4; W32(esp, v); }
/* f4d2d7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f4d2dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4d2de: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f4d2e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f4d2e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4d2e7: mov esi, ecx */
  esi = ecx;
/* f4d2e9: call 0xf411c7 */
  esp -= 4; W32(esp, 0xf4d2eeu); SPILL(); f_f411c7(); if (g_unwind) return; RELOAD();
/* f4d2ee: xor eax, eax */
  eax = 0;
/* f4d2f0: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* f4d2f3: mov dword ptr [esi + 0x10c], ecx */
  W32((uint32_t)(esi + 0x10cu), ecx);
/* f4d2f9: mov dword ptr [esi + 0x110], ecx */
  W32((uint32_t)(esi + 0x110u), ecx);
/* f4d2ff: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f4d303: mov dword ptr [esi + 0xf4], eax */
  W32((uint32_t)(esi + 0xf4u), eax);
/* f4d309: mov dword ptr [esi + 0x118], eax */
  W32((uint32_t)(esi + 0x118u), eax);
/* f4d30f: mov dword ptr [esi + 0x114], eax */
  W32((uint32_t)(esi + 0x114u), eax);
/* f4d315: mov dword ptr [esi + 0x11c], eax */
  W32((uint32_t)(esi + 0x11cu), eax);
/* f4d31b: mov dword ptr [esi], 0xf55760 */
  W32((uint32_t)(esi), 0xf55760u);
/* f4d321: mov dword ptr [esi + 0x120], 1 */
  W32((uint32_t)(esi + 0x120u), 0x1u);
/* f4d32b: mov eax, esi */
  eax = esi;
/* f4d32d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4d32e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f4d335: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4d338: ret  */
  esp += 4; SPILL(); return;
}

void f_f4d360(void) {
  LOAD_REGS();
L_f4d360: /* f4d360: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f4d361: mov ebp, esp */
  ebp = esp;
/* f4d363: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f4d365: push 0xf511e0 */
  { uint32_t v = 0xf511e0u; esp -= 4; W32(esp, v); }
/* f4d36a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f4d370: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4d371: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f4d378: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f4d37b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4d37c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4d37d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4d37e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f4d381: mov esi, ecx */
  esi = ecx;
/* f4d383: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f4d38a: call dword ptr [0xf60404] */
  esp -= 4; W32(esp, 0xf4d390u); SPILL(); f_6c85cb(); if (g_unwind) return; /* Engine!?PostLoad@UTexture@@UAEXXZ */ RELOAD();
/* f4d390: mov ebx, dword ptr [esi + 0x40] */
  ebx = R32((uint32_t)(esi + 0x40u));
/* f4d393: mov edi, dword ptr [esi + 0x44] */
  edi = R32((uint32_t)(esi + 0x44u));
/* f4d396: lea eax, [ebx - 1] */
  eax = (uint32_t)(ebx + 0xffffffffu);
/* f4d399: lea ecx, [edi - 1] */
  ecx = (uint32_t)(edi + 0xffffffffu);
/* f4d39c: mov dword ptr [esi + 0xc8], eax */
  W32((uint32_t)(esi + 0xc8u), eax);
/* f4d3a2: mov dword ptr [esi + 0xcc], ecx */
  W32((uint32_t)(esi + 0xccu), ecx);
/* f4d3a8: mov ecx, dword ptr [esi + 0xe4] */
  ecx = R32((uint32_t)(esi + 0xe4u));
/* f4d3ae: xor eax, eax */
  eax = 0;
/* f4d3b0: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4d3b2: je 0xf4d4e7 */
  if (zf) goto L_f4d4e7;
L_f4d3b8: /* f4d3b8: cmp ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4d3bb: jl 0xf4d4db */
  if ((sf != of)) goto L_f4d4db;
L_f4d3c1: /* f4d3c1: cmp edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4d3c4: jl 0xf4d4db */
  if ((sf != of)) goto L_f4d4db;
L_f4d3ca: /* f4d3ca: cmp dword ptr [ecx + 0x40], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x40u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4d3cd: jne 0xf4d3d7 */
  if (!zf) goto L_f4d3d7;
L_f4d3cf: /* f4d3cf: cmp dword ptr [ecx + 0x44], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x44u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4d3d2: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* f4d3d5: je 0xf4d3de */
  if (zf) goto L_f4d3de;
L_f4d3d7: /* f4d3d7: mov dword ptr [ebp - 0x14], 1 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x1u);
L_f4d3de: /* f4d3de: mov eax, dword ptr [esi + 0xe0] */
  eax = R32((uint32_t)(esi + 0xe0u));
/* f4d3e4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4d3e6: mov edx, 1 */
  edx = 0x1u;
/* f4d3eb: je 0xf4d40a */
  if (zf) goto L_f4d40a;
L_f4d3ed: /* f4d3ed: cmp dword ptr [eax + 0x40], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x40u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4d3f0: jne 0xf4d3fb */
  if (!zf) goto L_f4d3fb;
L_f4d3f2: /* f4d3f2: cmp dword ptr [eax + 0x44], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x44u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4d3f5: jne 0xf4d3fb */
  if (!zf) goto L_f4d3fb;
L_f4d3f7: /* f4d3f7: xor edx, edx */
  edx = 0;
/* f4d3f9: jmp 0xf4d40a */
  goto L_f4d40a;
L_f4d3fb: /* f4d3fb: mov edx, 1 */
  edx = 0x1u;
/* f4d400: mov dword ptr [esi + 0xe0], 0 */
  W32((uint32_t)(esi + 0xe0u), 0x0u);
L_f4d40a: /* f4d40a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f4d40d: xor edi, edi */
  edi = 0;
/* f4d40f: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4d411: jne 0xf4d422 */
  if (!zf) goto L_f4d422;
L_f4d413: /* f4d413: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4d415: jne 0xf4d422 */
  if (!zf) goto L_f4d422;
L_f4d417: /* f4d417: mov dword ptr [esi + 0x11c], edi */
  W32((uint32_t)(esi + 0x11cu), edi);
/* f4d41d: jmp 0xf4d4e7 */
  goto L_f4d4e7;
L_f4d422: /* f4d422: movzx edx, byte ptr [ecx + 0x3b] */
  edx = (uint32_t)(R8((uint32_t)(ecx + 0x3bu)));
/* f4d426: movzx eax, byte ptr [esi + 0x3b] */
  eax = (uint32_t)(R8((uint32_t)(esi + 0x3bu)));
/* f4d42a: movzx ebx, byte ptr [esi + 0x3c] */
  ebx = (uint32_t)(R8((uint32_t)(esi + 0x3cu)));
/* f4d42e: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f4d430: movzx edx, byte ptr [ecx + 0x3c] */
  edx = (uint32_t)(R8((uint32_t)(ecx + 0x3cu)));
/* f4d434: sub ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* f4d436: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4d438: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* f4d43b: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* f4d43e: jl 0xf4d4d3 */
  if ((sf != of)) goto L_f4d4d3;
L_f4d444: /* f4d444: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4d446: jl 0xf4d4d3 */
  if ((sf != of)) goto L_f4d4d3;
L_f4d44c: /* f4d44c: test byte ptr [ecx + 0x7c], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x7cu))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f4d450: jne 0xf4d460 */
  if (!zf) goto L_f4d460;
L_f4d452: /* f4d452: mov ecx, dword ptr [ecx + 0xac] */
  ecx = R32((uint32_t)(ecx + 0xacu));
/* f4d458: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* f4d45b: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f4d45e: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0xf4d460u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f4d460: /* f4d460: mov ecx, dword ptr [esi + 0xac] */
  ecx = R32((uint32_t)(esi + 0xacu));
/* f4d466: mov edx, dword ptr [ecx + 0x1c] */
  edx = R32((uint32_t)(ecx + 0x1cu));
/* f4d469: mov eax, dword ptr [esi + 0xe4] */
  eax = R32((uint32_t)(esi + 0xe4u));
/* f4d46f: mov dword ptr [esi + 0x11c], edx */
  W32((uint32_t)(esi + 0x11cu), edx);
/* f4d475: mov ecx, dword ptr [eax + 0xac] */
  ecx = R32((uint32_t)(eax + 0xacu));
/* f4d47b: mov edx, dword ptr [ecx + 0x1c] */
  edx = R32((uint32_t)(ecx + 0x1cu));
/* f4d47e: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
L_f4d481: /* f4d481: cmp edi, dword ptr [esi + 0x44] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x44u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4d484: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* f4d487: jge 0xf4d4e7 */
  if ((sf == of)) goto L_f4d4e7;
L_f4d489: /* f4d489: xor edx, edx */
  edx = 0;
/* f4d48b: jmp 0xf4d490 */
  goto L_f4d490;
L_f4d490: /* f4d490: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* f4d493: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4d495: jge 0xf4d4d0 */
  if ((sf == of)) goto L_f4d4d0;
L_f4d497: /* f4d497: mov ecx, dword ptr [esi + 0xe4] */
  ecx = R32((uint32_t)(esi + 0xe4u));
/* f4d49d: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* f4d4a0: mov ecx, ebx */
  ecx = ebx;
/* f4d4a2: sar edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  cf = ((int32_t)(int32_t)a >> (c - 1)) & 1;
  of = 0;
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  edi = r;
  }
  }
/* f4d4a4: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f4d4a7: mov cl, byte ptr [ecx + 0x3b] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x3bu))) & 0xffu);
/* f4d4aa: mov ebx, edx */
  ebx = edx;
/* f4d4ac: shl edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  cf = (c <= 32) ? (((uint32_t)a >> (32 - c)) & 1) : 0;
  of = ((r >> 31) & 1) ^ (((uint32_t)a >> (32 - c)) & 1);
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  edi = r;
  }
  }
/* f4d4ae: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* f4d4b1: sar ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebx = r;
  }
  }
/* f4d4b3: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* f4d4b6: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f4d4b8: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* f4d4bb: mov cl, byte ptr [ebx + ecx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + ecx))) & 0xffu);
/* f4d4be: imul eax, edi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edi);
  eax = (uint32_t)r;
  }
/* f4d4c1: add eax, dword ptr [esi + 0x11c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x11cu)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4d4c7: mov ebx, dword ptr [ebp - 0x24] */
  ebx = R32((uint32_t)(ebp + 0xffffffdcu));
/* f4d4ca: mov byte ptr [eax + edx], cl */
  W8((uint32_t)(eax + edx), (ecx & 0xffu));
/* f4d4cd: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* f4d4ce: jmp 0xf4d490 */
  goto L_f4d490;
L_f4d4d0: /* f4d4d0: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* f4d4d1: jmp 0xf4d481 */
  goto L_f4d481;
L_f4d4d3: /* f4d4d3: mov dword ptr [esi + 0xe4], edi */
  W32((uint32_t)(esi + 0xe4u), edi);
/* f4d4d9: jmp 0xf4d4e7 */
  goto L_f4d4e7;
L_f4d4db: /* f4d4db: mov dword ptr [esi + 0xe4], eax */
  W32((uint32_t)(esi + 0xe4u), eax);
/* f4d4e1: mov dword ptr [esi + 0xe0], eax */
  W32((uint32_t)(esi + 0xe0u), eax);
L_f4d4e7: /* f4d4e7: mov eax, dword ptr [esi + 0xe4] */
  eax = R32((uint32_t)(esi + 0xe4u));
/* f4d4ed: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4d4ef: je 0xf4d509 */
  if (zf) goto L_f4d509;
L_f4d4f1: /* f4d4f1: cmp eax, dword ptr [esi + 0x118] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x118u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4d4f7: je 0xf4d509 */
  if (zf) goto L_f4d509;
L_f4d4f9: /* f4d4f9: mov edx, dword ptr [eax + 0x50] */
  edx = R32((uint32_t)(eax + 0x50u));
/* f4d4fc: mov dword ptr [esi + 0x50], edx */
  W32((uint32_t)(esi + 0x50u), edx);
/* f4d4ff: mov dword ptr [esi + 0x120], 1 */
  W32((uint32_t)(esi + 0x120u), 0x1u);
L_f4d509: /* f4d509: mov ecx, dword ptr [esi + 0x114] */
  ecx = R32((uint32_t)(esi + 0x114u));
/* f4d50f: mov dword ptr [esi + 0x118], eax */
  W32((uint32_t)(esi + 0x118u), eax);
/* f4d515: mov eax, dword ptr [esi + 0xe0] */
  eax = R32((uint32_t)(esi + 0xe0u));
/* f4d51b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4d51d: je 0xf4d529 */
  if (zf) goto L_f4d529;
L_f4d51f: /* f4d51f: mov dword ptr [esi + 0x120], 1 */
  W32((uint32_t)(esi + 0x120u), 0x1u);
L_f4d529: /* f4d529: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f4d52c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f4d52d: mov dword ptr [esi + 0x114], eax */
  W32((uint32_t)(esi + 0x114u), eax);
/* f4d533: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4d534: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f4d53b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f4d53c: mov esp, ebp */
  esp = ebp;
/* f4d53e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f4d53f: ret  */
  esp += 4; SPILL(); return;
}

void f_f4d48d(void) {
  LOAD_REGS();
  goto L_f4d48d;
L_f4d481: /* f4d481: cmp edi, dword ptr [esi + 0x44] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x44u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4d484: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* f4d487: jge 0xf4d4e7 */
  if ((sf == of)) goto L_f4d4e7;
L_f4d489: /* f4d489: xor edx, edx */
  edx = 0;
/* f4d48b: jmp 0xf4d490 */
  goto L_f4d490;
L_f4d48d: /* f4d48d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_f4d490: /* f4d490: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* f4d493: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4d495: jge 0xf4d4d0 */
  if ((sf == of)) goto L_f4d4d0;
L_f4d497: /* f4d497: mov ecx, dword ptr [esi + 0xe4] */
  ecx = R32((uint32_t)(esi + 0xe4u));
/* f4d49d: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* f4d4a0: mov ecx, ebx */
  ecx = ebx;
/* f4d4a2: sar edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  cf = ((int32_t)(int32_t)a >> (c - 1)) & 1;
  of = 0;
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  edi = r;
  }
  }
/* f4d4a4: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f4d4a7: mov cl, byte ptr [ecx + 0x3b] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x3bu))) & 0xffu);
/* f4d4aa: mov ebx, edx */
  ebx = edx;
/* f4d4ac: shl edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  cf = (c <= 32) ? (((uint32_t)a >> (32 - c)) & 1) : 0;
  of = ((r >> 31) & 1) ^ (((uint32_t)a >> (32 - c)) & 1);
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  edi = r;
  }
  }
/* f4d4ae: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* f4d4b1: sar ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebx = r;
  }
  }
/* f4d4b3: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* f4d4b6: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f4d4b8: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* f4d4bb: mov cl, byte ptr [ebx + ecx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + ecx))) & 0xffu);
/* f4d4be: imul eax, edi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edi);
  eax = (uint32_t)r;
  }
/* f4d4c1: add eax, dword ptr [esi + 0x11c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x11cu)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4d4c7: mov ebx, dword ptr [ebp - 0x24] */
  ebx = R32((uint32_t)(ebp + 0xffffffdcu));
/* f4d4ca: mov byte ptr [eax + edx], cl */
  W8((uint32_t)(eax + edx), (ecx & 0xffu));
/* f4d4cd: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* f4d4ce: jmp 0xf4d490 */
  goto L_f4d490;
L_f4d4d0: /* f4d4d0: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* f4d4d1: jmp 0xf4d481 */
  goto L_f4d481;
L_f4d4e7: /* f4d4e7: mov eax, dword ptr [esi + 0xe4] */
  eax = R32((uint32_t)(esi + 0xe4u));
/* f4d4ed: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4d4ef: je 0xf4d509 */
  if (zf) goto L_f4d509;
L_f4d4f1: /* f4d4f1: cmp eax, dword ptr [esi + 0x118] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x118u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4d4f7: je 0xf4d509 */
  if (zf) goto L_f4d509;
L_f4d4f9: /* f4d4f9: mov edx, dword ptr [eax + 0x50] */
  edx = R32((uint32_t)(eax + 0x50u));
/* f4d4fc: mov dword ptr [esi + 0x50], edx */
  W32((uint32_t)(esi + 0x50u), edx);
/* f4d4ff: mov dword ptr [esi + 0x120], 1 */
  W32((uint32_t)(esi + 0x120u), 0x1u);
L_f4d509: /* f4d509: mov ecx, dword ptr [esi + 0x114] */
  ecx = R32((uint32_t)(esi + 0x114u));
/* f4d50f: mov dword ptr [esi + 0x118], eax */
  W32((uint32_t)(esi + 0x118u), eax);
/* f4d515: mov eax, dword ptr [esi + 0xe0] */
  eax = R32((uint32_t)(esi + 0xe0u));
/* f4d51b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4d51d: je 0xf4d529 */
  if (zf) goto L_f4d529;
L_f4d51f: /* f4d51f: mov dword ptr [esi + 0x120], 1 */
  W32((uint32_t)(esi + 0x120u), 0x1u);
L_f4d529: /* f4d529: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f4d52c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f4d52d: mov dword ptr [esi + 0x114], eax */
  W32((uint32_t)(esi + 0x114u), eax);
/* f4d533: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4d534: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f4d53b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f4d53c: mov esp, ebp */
  esp = ebp;
/* f4d53e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f4d53f: ret  */
  esp += 4; SPILL(); return;
}

void f_f4d540(void) {
  LOAD_REGS();
L_f4d540: /* f4d540: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* f4d543: push 0xf56aa4 */
  { uint32_t v = 0xf56aa4u; esp -= 4; W32(esp, v); }
/* f4d548: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* f4d54b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f4d54c: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* f4d54f: call 0xf4fa48 */
  esp -= 4; W32(esp, 0xf4d554u); SPILL(); f_f4fa48(); if (g_unwind) return; RELOAD();
  SPILL(); f_f4d554(); return;
}

void f_f4d554(void) {
  LOAD_REGS();
L_f4d554: /* f4d554: push 0xf55db0 */
  { uint32_t v = 0xf55db0u; esp -= 4; W32(esp, v); }
/* f4d559: push 0xf5bd50 */
  { uint32_t v = 0xf5bd50u; esp -= 4; W32(esp, v); }
/* f4d55e: call dword ptr [0xf602d8] */
  esp -= 4; W32(esp, 0xf4d564u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f4d564: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4d567: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f4d569: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f4d56b: call 0xf4fa48 */
  esp -= 4; W32(esp, 0xf4d570u); SPILL(); f_f4fa48(); if (g_unwind) return; RELOAD();
L_f4d570: guest_badaddr(0xf4d570); return;
}

void f_f4d610(void) {
  LOAD_REGS();
L_f4d610: /* f4d610: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f4d611: mov ebp, esp */
  ebp = esp;
/* f4d613: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f4d615: push 0xf511f0 */
  { uint32_t v = 0xf511f0u; esp -= 4; W32(esp, v); }
/* f4d61a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f4d620: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4d621: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f4d628: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f4d62b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4d62c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4d62d: mov esi, ecx */
  esi = ecx;
/* f4d62f: mov eax, dword ptr [esi + 0xe0] */
  eax = R32((uint32_t)(esi + 0xe0u));
/* f4d635: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4d637: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4d638: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f4d63b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f4d642: je 0xf4d6e1 */
  if (zf) goto L_f4d6e1;
L_f4d648: /* f4d648: mov eax, dword ptr [esi + 0xe4] */
  eax = R32((uint32_t)(esi + 0xe4u));
/* f4d64e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4d650: je 0xf4d6e1 */
  if (zf) goto L_f4d6e1;
L_f4d656: /* f4d656: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f4d659: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4d65a: call 0xf4111d */
  esp -= 4; W32(esp, 0xf4d65fu); SPILL(); f_f4111d(); if (g_unwind) return; RELOAD();
/* f4d65f: mov ecx, dword ptr [esi + 0x100] */
  ecx = R32((uint32_t)(esi + 0x100u));
/* f4d665: mov edi, dword ptr [0xf602e0] */
  edi = R32((uint32_t)(0xf602e0u));
/* f4d66b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f4d66c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xf4d66eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f4d66e: mov ecx, dword ptr [esi + 0x10c] */
  ecx = R32((uint32_t)(esi + 0x10cu));
/* f4d674: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4d677: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4d679: jne 0xf4d69b */
  if (!zf) goto L_f4d69b;
L_f4d67b: /* f4d67b: mov edx, dword ptr [esi + 0x104] */
  edx = R32((uint32_t)(esi + 0x104u));
/* f4d681: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f4d682: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xf4d684u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f4d684: mov ecx, dword ptr [esi + 0x110] */
  ecx = R32((uint32_t)(esi + 0x110u));
/* f4d68a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4d68d: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4d68f: jne 0xf4d69b */
  if (!zf) goto L_f4d69b;
L_f4d691: /* f4d691: mov eax, dword ptr [esi + 0x120] */
  eax = R32((uint32_t)(esi + 0x120u));
/* f4d697: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4d699: je 0xf4d6e1 */
  if (zf) goto L_f4d6e1;
L_f4d69b: /* f4d69b: mov eax, dword ptr [esi + 0x100] */
  eax = R32((uint32_t)(esi + 0x100u));
/* f4d6a1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4d6a2: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xf4d6a4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f4d6a4: mov ecx, dword ptr [esi + 0x104] */
  ecx = R32((uint32_t)(esi + 0x104u));
/* f4d6aa: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4d6ad: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f4d6ae: mov dword ptr [esi + 0x10c], eax */
  W32((uint32_t)(esi + 0x10cu), eax);
/* f4d6b4: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xf4d6b6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f4d6b6: mov dword ptr [esi + 0x110], eax */
  W32((uint32_t)(esi + 0x110u), eax);
/* f4d6bc: mov al, byte ptr [esi + 0xf0] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xf0u))) & 0xffu);
/* f4d6c2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4d6c5: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f4d6c7: mov ecx, esi */
  ecx = esi;
/* f4d6c9: jne 0xf4d6d2 */
  if (!zf) goto L_f4d6d2;
L_f4d6cb: /* f4d6cb: call 0xf411a4 */
  esp -= 4; W32(esp, 0xf4d6d0u); SPILL(); f_f411a4(); if (g_unwind) return; RELOAD();
/* f4d6d0: jmp 0xf4d6d7 */
  goto L_f4d6d7;
L_f4d6d2: /* f4d6d2: call 0xf41212 */
  esp -= 4; W32(esp, 0xf4d6d7u); SPILL(); f_f41212(); if (g_unwind) return; RELOAD();
L_f4d6d7: /* f4d6d7: mov dword ptr [esi + 0x120], 0 */
  W32((uint32_t)(esi + 0x120u), 0x0u);
L_f4d6e1: /* f4d6e1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f4d6e4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f4d6e5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4d6e6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f4d6ed: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f4d6ee: mov esp, ebp */
  esp = ebp;
/* f4d6f0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f4d6f1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f4d6f4(void) {
  LOAD_REGS();
L_f4d6f4: /* f4d6f4: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f4d6f7: push 0xf56aa4 */
  { uint32_t v = 0xf56aa4u; esp -= 4; W32(esp, v); }
/* f4d6fc: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* f4d6ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4d700: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* f4d703: call 0xf4fa48 */
  esp -= 4; W32(esp, 0xf4d708u); SPILL(); f_f4fa48(); if (g_unwind) return; RELOAD();
  SPILL(); f_f4d708(); return;
}

void f_f4d708(void) {
  LOAD_REGS();
L_f4d708: /* f4d708: push 0xf55de4 */
  { uint32_t v = 0xf55de4u; esp -= 4; W32(esp, v); }
/* f4d70d: push 0xf5bd78 */
  { uint32_t v = 0xf5bd78u; esp -= 4; W32(esp, v); }
/* f4d712: call dword ptr [0xf602d8] */
  esp -= 4; W32(esp, 0xf4d718u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f4d718: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4d71b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f4d71d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f4d71f: call 0xf4fa48 */
  esp -= 4; W32(esp, 0xf4d724u); SPILL(); f_f4fa48(); if (g_unwind) return; RELOAD();
L_f4d724: guest_badaddr(0xf4d724); return;
}

void f_f4d780(void) {
  LOAD_REGS();
L_f4d780: /* f4d780: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* f4d784: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4d786: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4d787: mov esi, ecx */
  esi = ecx;
/* f4d789: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* f4d78b: je 0xf4d79e */
  if (zf) goto L_f4d79e;
L_f4d78d: /* f4d78d: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* f4d790: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* f4d793: call 0xf41285 */
  esp -= 4; W32(esp, 0xf4d798u); SPILL(); f_f41285(); if (g_unwind) return; RELOAD();
/* f4d798: mov eax, esi */
  eax = esi;
/* f4d79a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4d79b: ret 4 */
  esp += 8; SPILL(); return;
L_f4d79e: /* f4d79e: xor eax, eax */
  eax = 0;
/* f4d7a0: mov ecx, esi */
  ecx = esi;
/* f4d7a2: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* f4d7a5: call 0xf41285 */
  esp -= 4; W32(esp, 0xf4d7aau); SPILL(); f_f41285(); if (g_unwind) return; RELOAD();
/* f4d7aa: mov eax, esi */
  eax = esi;
/* f4d7ac: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4d7ad: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f4d7c0(void) {
  LOAD_REGS();
L_f4d7c0: /* f4d7c0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* f4d7c3: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* f4d7c6: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* f4d7c9: jmp 0xf41285 */
  SPILL(); f_f41285(); return;
}

void f_f4d7e0(void) {
  LOAD_REGS();
L_f4d7e0: /* f4d7e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f4d7e2: push 0xf51209 */
  { uint32_t v = 0xf51209u; esp -= 4; W32(esp, v); }
/* f4d7e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f4d7ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4d7ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f4d7f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f4d7f6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4d7f7: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* f4d7fb: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* f4d7fe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4d7ff: mov esi, ecx */
  esi = ecx;
/* f4d801: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4d802: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* f4d804: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* f4d808: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* f4d80e: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* f4d811: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* f4d814: call dword ptr [0xf60380] */
  esp -= 4; W32(esp, 0xf4d81au); SPILL(); f_4e4502(); if (g_unwind) return; /* Core!?Realloc@FArray@@IAEXH@Z */ RELOAD();
/* f4d81a: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* f4d821: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* f4d824: xor edi, edi */
  edi = 0;
/* f4d826: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f4d828: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* f4d830: jle 0xf4d85d */
  if ((zf || sf != of)) goto L_f4d85d;
L_f4d832: /* f4d832: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* f4d834: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f4d836: mov ecx, esi */
  ecx = esi;
/* f4d838: call dword ptr [0xf602e8] */
  esp -= 4; W32(esp, 0xf4d83eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* f4d83e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* f4d840: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* f4d843: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4d845: je 0xf4d855 */
  if (zf) goto L_f4d855;
L_f4d847: /* f4d847: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* f4d849: mov ecx, dword ptr [edx + edi*8] */
  ecx = R32((uint32_t)(edx + edi*8));
/* f4d84c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* f4d84e: mov edx, dword ptr [edx + edi*8 + 4] */
  edx = R32((uint32_t)(edx + edi*8 + 0x4u));
/* f4d852: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
L_f4d855: /* f4d855: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* f4d858: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* f4d859: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4d85b: jl 0xf4d832 */
  if ((sf != of)) goto L_f4d832;
L_f4d85d: /* f4d85d: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* f4d861: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f4d862: mov eax, esi */
  eax = esi;
/* f4d864: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4d865: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f4d866: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f4d86d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4d870: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f4d8b0(void) {
  LOAD_REGS();
L_f4d8b0: /* f4d8b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4d8b1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f4d8b2: mov ebp, dword ptr [0xf60388] */
  ebp = R32((uint32_t)(0xf60388u));
/* f4d8b8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4d8b9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4d8ba: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* f4d8be: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f4d8c0: mov esi, ecx */
  esi = ecx;
/* f4d8c2: jge 0xf4d8d8 */
  if ((sf == of)) goto L_f4d8d8;
L_f4d8c4: /* f4d8c4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* f4d8c9: push 0xf5c010 */
  { uint32_t v = 0xf5c010u; esp -= 4; W32(esp, v); }
/* f4d8ce: push 0xf5c000 */
  { uint32_t v = 0xf5c000u; esp -= 4; W32(esp, v); }
/* f4d8d3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xf4d8d5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f4d8d5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f4d8d8: /* f4d8d8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4d8db: jle 0xf4d8f1 */
  if ((zf || sf != of)) goto L_f4d8f1;
L_f4d8dd: /* f4d8dd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* f4d8e2: push 0xf5c010 */
  { uint32_t v = 0xf5c010u; esp -= 4; W32(esp, v); }
/* f4d8e7: push 0xf5bfec */
  { uint32_t v = 0xf5bfecu; esp -= 4; W32(esp, v); }
/* f4d8ec: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xf4d8eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f4d8ee: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f4d8f1: /* f4d8f1: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* f4d8f5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* f4d8f8: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* f4d8fb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4d8fd: jle 0xf4d913 */
  if ((zf || sf != of)) goto L_f4d913;
L_f4d8ff: /* f4d8ff: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* f4d904: push 0xf5c010 */
  { uint32_t v = 0xf5c010u; esp -= 4; W32(esp, v); }
/* f4d909: push 0xf5bfd0 */
  { uint32_t v = 0xf5bfd0u; esp -= 4; W32(esp, v); }
/* f4d90e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xf4d910u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f4d910: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f4d913: /* f4d913: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* f4d915: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4d916: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4d917: mov ecx, esi */
  ecx = esi;
/* f4d919: call dword ptr [0xf60384] */
  esp -= 4; W32(esp, 0xf4d91fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* f4d91f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f4d920: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4d921: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f4d922: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f4d923: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f4d950(void) {
  LOAD_REGS();
L_f4d950: /* f4d950: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* f4d954: mov dword ptr [ecx + 4], 0 */
  W32((uint32_t)(ecx + 0x4u), 0x0u);
/* f4d95b: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* f4d95e: mov dword ptr [esp + 4], 8 */
  W32((uint32_t)(esp + 0x4u), 0x8u);
/* f4d966: jmp dword ptr [0xf60380] */
  SPILL(); f_4e4502(); return; /* Core!?Realloc@FArray@@IAEXH@Z */
}

void f_f4d980(void) {
  LOAD_REGS();
L_f4d980: /* f4d980: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* f4d984: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4d986: je 0xf4d98d */
  if (zf) goto L_f4d98d;
L_f4d988: /* f4d988: jmp 0xf4125d */
  SPILL(); f_f4125d(); return;
L_f4d98d: /* f4d98d: ret  */
  esp += 4; SPILL(); return;
}

void f_f4d9a0(void) {
  LOAD_REGS();
L_f4d9a0: /* f4d9a0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* f4d9a4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4d9a6: je 0xf4d9ad */
  if (zf) goto L_f4d9ad;
L_f4d9a8: /* f4d9a8: jmp 0xf41082 */
  SPILL(); f_f41082(); return;
L_f4d9ad: /* f4d9ad: ret  */
  esp += 4; SPILL(); return;
}

void f_f4d9c0(void) {
  LOAD_REGS();
L_f4d9c0: /* f4d9c0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* f4d9c4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4d9c6: je 0xf4d9cd */
  if (zf) goto L_f4d9cd;
L_f4d9c8: /* f4d9c8: jmp 0xf41019 */
  SPILL(); f_f41019(); return;
L_f4d9cd: /* f4d9cd: ret  */
  esp += 4; SPILL(); return;
}

void f_f4d9e0(void) {
  LOAD_REGS();
L_f4d9e0: /* f4d9e0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* f4d9e4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4d9e6: je 0xf4d9ed */
  if (zf) goto L_f4d9ed;
L_f4d9e8: /* f4d9e8: jmp 0xf41032 */
  SPILL(); f_f41032(); return;
L_f4d9ed: /* f4d9ed: ret  */
  esp += 4; SPILL(); return;
}

void f_f4da00(void) {
  LOAD_REGS();
L_f4da00: /* f4da00: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f4da01: mov ebp, esp */
  ebp = esp;
/* f4da03: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f4da05: push 0xf51220 */
  { uint32_t v = 0xf51220u; esp -= 4; W32(esp, v); }
/* f4da0a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f4da10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4da11: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f4da18: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f4da1b: mov eax, dword ptr [0xf5d6c0] */
  eax = R32((uint32_t)(0xf5d6c0u));
/* f4da20: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4da21: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4da22: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4da23: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f4da26: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f4da28: push 0xf5b5f4 */
  { uint32_t v = 0xf5b5f4u; esp -= 4; W32(esp, v); }
/* f4da2d: mov ebx, ecx */
  ebx = ecx;
/* f4da2f: mov ecx, dword ptr [0xf602f4] */
  ecx = R32((uint32_t)(0xf602f4u));
/* f4da35: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4da36: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f4da37: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f4da3e: call dword ptr [0xf602f0] */
  esp -= 4; W32(esp, 0xf4da44u); SPILL(); f_4e2252(); if (g_unwind) return; /* Core!?StaticFindObjectChecked@UObject@@SAPAV1@PAVUClass@@PAV1@PBGH@Z */ RELOAD();
/* f4da44: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4da47: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4da49: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* f4da4c: je 0xf4da56 */
  if (zf) goto L_f4da56;
L_f4da4e: /* f4da4e: mov edx, dword ptr [eax + 0x3c] */
  edx = R32((uint32_t)(eax + 0x3cu));
/* f4da51: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* f4da54: jmp 0xf4da5d */
  goto L_f4da5d;
L_f4da56: /* f4da56: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
L_f4da5d: /* f4da5d: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* f4da60: call 0xf41285 */
  esp -= 4; W32(esp, 0xf4da65u); SPILL(); f_f41285(); if (g_unwind) return; RELOAD();
/* f4da65: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* f4da68: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4da6a: je 0xf4dabf */
  if (zf) goto L_f4dabf;
L_f4da6c: /* f4da6c: mov ecx, esi */
  ecx = esi;
/* f4da6e: call dword ptr [0xf60378] */
  esp -= 4; W32(esp, 0xf4da74u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* f4da74: push 0xf5b614 */
  { uint32_t v = 0xf5b614u; esp -= 4; W32(esp, v); }
/* f4da79: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4da7a: call dword ptr [0xf60390] */
  esp -= 4; W32(esp, 0xf4da80u); SPILL(); f_4e26df(); if (g_unwind) return; /* Core!?appStricmp@@YAHPBG0@Z */ RELOAD();
/* f4da80: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4da83: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4da85: jne 0xf4dab7 */
  if (!zf) goto L_f4dab7;
L_f4da87: /* f4da87: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* f4da8a: cmp eax, 0xc8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4da8f: je 0xf4dab7 */
  if (zf) goto L_f4dab7;
L_f4da91: /* f4da91: push 0xc8 */
  { uint32_t v = 0xc8u; esp -= 4; W32(esp, v); }
/* f4da96: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4da97: mov eax, dword ptr [0xf602fc] */
  eax = R32((uint32_t)(0xf602fcu));
/* f4da9c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* f4da9e: push 0xf5b620 */
  { uint32_t v = 0xf5b620u; esp -= 4; W32(esp, v); }
/* f4daa3: push 0xf5b62c */
  { uint32_t v = 0xf5b62cu; esp -= 4; W32(esp, v); }
/* f4daa8: push 0xf5b650 */
  { uint32_t v = 0xf5b650u; esp -= 4; W32(esp, v); }
/* f4daad: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f4daae: call dword ptr [0xf6038c] */
  esp -= 4; W32(esp, 0xf4dab4u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* f4dab4: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f4dab7: /* f4dab7: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* f4daba: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* f4dabd: jmp 0xf4da5d */
  goto L_f4da5d;
L_f4dabf: /* f4dabf: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* f4dac2: lea eax, [edi - 1] */
  eax = (uint32_t)(edi + 0xffffffffu);
/* f4dac5: test edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4dac7: je 0xf4dae1 */
  if (zf) goto L_f4dae1;
L_f4dac9: /* f4dac9: push 0xf83 */
  { uint32_t v = 0xf83u; esp -= 4; W32(esp, v); }
/* f4dace: push 0xf5b6ac */
  { uint32_t v = 0xf5b6acu; esp -= 4; W32(esp, v); }
/* f4dad3: push 0xf5b6bc */
  { uint32_t v = 0xf5b6bcu; esp -= 4; W32(esp, v); }
/* f4dad8: call dword ptr [0xf60388] */
  esp -= 4; W32(esp, 0xf4dadeu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* f4dade: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f4dae1: /* f4dae1: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* f4dae4: lea ecx, [esi - 1] */
  ecx = (uint32_t)(esi + 0xffffffffu);
/* f4dae7: test esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4dae9: je 0xf4db03 */
  if (zf) goto L_f4db03;
L_f4daeb: /* f4daeb: push 0xf84 */
  { uint32_t v = 0xf84u; esp -= 4; W32(esp, v); }
/* f4daf0: push 0xf5b6d8 */
  { uint32_t v = 0xf5b6d8u; esp -= 4; W32(esp, v); }
/* f4daf5: push 0xf5b6e8 */
  { uint32_t v = 0xf5b6e8u; esp -= 4; W32(esp, v); }
/* f4dafa: call dword ptr [0xf60388] */
  esp -= 4; W32(esp, 0xf4db00u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* f4db00: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f4db03: /* f4db03: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4db04: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4db05: mov ecx, ebx */
  ecx = ebx;
/* f4db07: call dword ptr [0xf60498] */
  esp -= 4; W32(esp, 0xf4db0du); SPILL(); f_6c4066(); if (g_unwind) return; /* Engine!?Init@UTexture@@UAEXHH@Z */ RELOAD();
/* f4db0d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f4db10: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f4db11: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4db12: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f4db19: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f4db1a: mov esp, ebp */
  esp = ebp;
/* f4db1c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f4db1d: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f4db20(void) {
  LOAD_REGS();
L_f4db20: /* f4db20: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f4db23: push 0xf56aa4 */
  { uint32_t v = 0xf56aa4u; esp -= 4; W32(esp, v); }
/* f4db28: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* f4db2b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4db2c: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* f4db2f: call 0xf4fa48 */
  esp -= 4; W32(esp, 0xf4db34u); SPILL(); f_f4fa48(); if (g_unwind) return; RELOAD();
  SPILL(); f_f4db34(); return;
}

void f_f4db34(void) {
  LOAD_REGS();
L_f4db34: /* f4db34: push 0xf55e1c */
  { uint32_t v = 0xf55e1cu; esp -= 4; W32(esp, v); }
/* f4db39: push 0xf5b704 */
  { uint32_t v = 0xf5b704u; esp -= 4; W32(esp, v); }
/* f4db3e: call dword ptr [0xf602d8] */
  esp -= 4; W32(esp, 0xf4db44u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f4db44: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4db47: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f4db49: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f4db4b: call 0xf4fa48 */
  esp -= 4; W32(esp, 0xf4db50u); SPILL(); f_f4fa48(); if (g_unwind) return; RELOAD();
L_f4db50: guest_badaddr(0xf4db50); return;
}

void f_f4dbc0(void) {
  LOAD_REGS();
L_f4dbc0: /* f4dbc0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f4dbc1: mov ebp, esp */
  ebp = esp;
/* f4dbc3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f4dbc5: push 0xf51230 */
  { uint32_t v = 0xf51230u; esp -= 4; W32(esp, v); }
/* f4dbca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f4dbd0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4dbd1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f4dbd8: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f4dbdb: mov eax, dword ptr [0xf5c730] */
  eax = R32((uint32_t)(0xf5c730u));
/* f4dbe0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4dbe1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4dbe2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4dbe3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f4dbe6: xor ebx, ebx */
  ebx = 0;
/* f4dbe8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4dbe9: push 0xf5b734 */
  { uint32_t v = 0xf5b734u; esp -= 4; W32(esp, v); }
/* f4dbee: mov edi, ecx */
  edi = ecx;
/* f4dbf0: mov ecx, dword ptr [0xf602f4] */
  ecx = R32((uint32_t)(0xf602f4u));
/* f4dbf6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4dbf7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f4dbf8: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* f4dbfb: call dword ptr [0xf602f0] */
  esp -= 4; W32(esp, 0xf4dc01u); SPILL(); f_4e2252(); if (g_unwind) return; /* Core!?StaticFindObjectChecked@UObject@@SAPAV1@PAVUClass@@PAV1@PBGH@Z */ RELOAD();
/* f4dc01: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4dc04: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4dc06: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* f4dc09: je 0xf4dc13 */
  if (zf) goto L_f4dc13;
L_f4dc0b: /* f4dc0b: mov edx, dword ptr [eax + 0x3c] */
  edx = R32((uint32_t)(eax + 0x3cu));
/* f4dc0e: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* f4dc11: jmp 0xf4dc16 */
  goto L_f4dc16;
L_f4dc13: /* f4dc13: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
L_f4dc16: /* f4dc16: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* f4dc19: call 0xf41285 */
  esp -= 4; W32(esp, 0xf4dc1eu); SPILL(); f_f41285(); if (g_unwind) return; RELOAD();
/* f4dc1e: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* f4dc21: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4dc23: je 0xf4dc78 */
  if (zf) goto L_f4dc78;
L_f4dc25: /* f4dc25: mov ecx, esi */
  ecx = esi;
/* f4dc27: call dword ptr [0xf60378] */
  esp -= 4; W32(esp, 0xf4dc2du); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* f4dc2d: push 0xf5b74c */
  { uint32_t v = 0xf5b74cu; esp -= 4; W32(esp, v); }
/* f4dc32: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4dc33: call dword ptr [0xf60390] */
  esp -= 4; W32(esp, 0xf4dc39u); SPILL(); f_4e26df(); if (g_unwind) return; /* Core!?appStricmp@@YAHPBG0@Z */ RELOAD();
/* f4dc39: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4dc3c: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4dc3e: jne 0xf4dc70 */
  if (!zf) goto L_f4dc70;
L_f4dc40: /* f4dc40: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* f4dc43: cmp eax, 0xe0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4dc48: je 0xf4dc70 */
  if (zf) goto L_f4dc70;
L_f4dc4a: /* f4dc4a: push 0xe0 */
  { uint32_t v = 0xe0u; esp -= 4; W32(esp, v); }
/* f4dc4f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4dc50: mov eax, dword ptr [0xf602fc] */
  eax = R32((uint32_t)(0xf602fcu));
/* f4dc55: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* f4dc57: push 0xf5b760 */
  { uint32_t v = 0xf5b760u; esp -= 4; W32(esp, v); }
/* f4dc5c: push 0xf5b774 */
  { uint32_t v = 0xf5b774u; esp -= 4; W32(esp, v); }
/* f4dc61: push 0xf5b790 */
  { uint32_t v = 0xf5b790u; esp -= 4; W32(esp, v); }
/* f4dc66: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f4dc67: call dword ptr [0xf6038c] */
  esp -= 4; W32(esp, 0xf4dc6du); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* f4dc6d: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f4dc70: /* f4dc70: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* f4dc73: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* f4dc76: jmp 0xf4dc16 */
  goto L_f4dc16;
L_f4dc78: /* f4dc78: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* f4dc7b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f4dc7e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4dc7f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f4dc80: mov ecx, edi */
  ecx = edi;
/* f4dc82: call 0xf411bd */
  esp -= 4; W32(esp, 0xf4dc87u); SPILL(); f_f411bd(); if (g_unwind) return; RELOAD();
/* f4dc87: mov edx, dword ptr [0xf602fc] */
  edx = R32((uint32_t)(0xf602fcu));
/* f4dc8d: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* f4dc8f: mov ecx, dword ptr [edi + 0x18] */
  ecx = R32((uint32_t)(edi + 0x18u));
/* f4dc92: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4dc93: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4dc94: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f4dc95: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4dc96: xor eax, eax */
  eax = 0;
/* f4dc98: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4dc99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4dc9a: mov eax, dword ptr [0xf60490] */
  eax = R32((uint32_t)(0xf60490u));
/* f4dc9f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f4dca0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4dca1: call dword ptr [0xf602f8] */
  esp -= 4; W32(esp, 0xf4dca7u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* f4dca7: mov esi, eax */
  esi = eax;
/* f4dca9: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4dcac: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4dcae: je 0xf4dcc2 */
  if (zf) goto L_f4dcc2;
L_f4dcb0: /* f4dcb0: mov ecx, esi */
  ecx = esi;
/* f4dcb2: call dword ptr [0xf6048c] */
  esp -= 4; W32(esp, 0xf4dcb8u); SPILL(); f_6c39c2(); if (g_unwind) return; /* Engine!??0UPalette@@QAE@XZ */ RELOAD();
/* f4dcb8: mov dword ptr [esi], 0xf55c10 */
  W32((uint32_t)(esi), 0xf55c10u);
/* f4dcbe: mov eax, esi */
  eax = esi;
/* f4dcc0: jmp 0xf4dcc4 */
  goto L_f4dcc4;
L_f4dcc2: /* f4dcc2: xor eax, eax */
  eax = 0;
L_f4dcc4: /* f4dcc4: mov dword ptr [edi + 0x50], eax */
  W32((uint32_t)(edi + 0x50u), eax);
L_f4dcc7: /* f4dcc7: cmp ebx, 0x100 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4dccd: jge 0xf4dcfa */
  if ((sf == of)) goto L_f4dcfa;
L_f4dccf: /* f4dccf: mov esi, dword ptr [edi + 0x50] */
  esi = R32((uint32_t)(edi + 0x50u));
/* f4dcd2: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f4dcd4: add esi, 0x28 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* f4dcd7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f4dcd9: mov ecx, esi */
  ecx = esi;
/* f4dcdb: call dword ptr [0xf602e8] */
  esp -= 4; W32(esp, 0xf4dce1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* f4dce1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* f4dce3: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* f4dce6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4dce8: je 0xf4dcf7 */
  if (zf) goto L_f4dcf7;
L_f4dcea: /* f4dcea: mov byte ptr [eax], 0 */
  W8((uint32_t)(eax), 0x0u);
/* f4dced: mov byte ptr [eax + 1], bl */
  W8((uint32_t)(eax + 0x1u), (ebx & 0xffu));
/* f4dcf0: mov byte ptr [eax + 2], bl */
  W8((uint32_t)(eax + 0x2u), (ebx & 0xffu));
/* f4dcf3: mov byte ptr [eax + 3], 0xff */
  W8((uint32_t)(eax + 0x3u), 0xffu);
L_f4dcf7: /* f4dcf7: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* f4dcf8: jmp 0xf4dcc7 */
  goto L_f4dcc7;
L_f4dcfa: /* f4dcfa: mov edx, dword ptr [edi + 0x50] */
  edx = R32((uint32_t)(edi + 0x50u));
/* f4dcfd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f4dcfe: call 0xf410fa */
  esp -= 4; W32(esp, 0xf4dd03u); SPILL(); f_f410fa(); if (g_unwind) return; RELOAD();
/* f4dd03: mov eax, dword ptr [edi + 0x50] */
  eax = R32((uint32_t)(edi + 0x50u));
/* f4dd06: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* f4dd09: mov edx, dword ptr [ecx + 0x200] */
  edx = R32((uint32_t)(ecx + 0x200u));
/* f4dd0f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4dd12: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* f4dd14: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* f4dd19: lea ecx, [edi + 0xfc] */
  ecx = (uint32_t)(edi + 0xfcu);
/* f4dd1f: mov dword ptr [edi + 0x5c], edx */
  W32((uint32_t)(edi + 0x5cu), edx);
/* f4dd22: mov byte ptr [edi + 0xe1], 0xdc */
  W8((uint32_t)(edi + 0xe1u), 0xdcu);
/* f4dd29: mov dword ptr [edi + 0xf8], 0 */
  W32((uint32_t)(edi + 0xf8u), 0x0u);
/* f4dd33: mov byte ptr [edi + 0xe0], 4 */
  W8((uint32_t)(edi + 0xe0u), 0x4u);
/* f4dd3a: mov dword ptr [edi + 0xf4], 0x400 */
  W32((uint32_t)(edi + 0xf4u), 0x400u);
/* f4dd44: call dword ptr [0xf602e8] */
  esp -= 4; W32(esp, 0xf4dd4au); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* f4dd4a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f4dd4d: mov al, 0x10 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x10u) & 0xffu);
/* f4dd4f: mov byte ptr [edi + 0xec], al */
  W8((uint32_t)(edi + 0xecu), (eax & 0xffu));
/* f4dd55: mov byte ptr [edi + 0xed], al */
  W8((uint32_t)(edi + 0xedu), (eax & 0xffu));
/* f4dd5b: mov byte ptr [edi + 0xe8], 0xff */
  W8((uint32_t)(edi + 0xe8u), 0xffu);
/* f4dd62: mov byte ptr [edi + 0xe9], 0x60 */
  W8((uint32_t)(edi + 0xe9u), 0x60u);
/* f4dd69: mov byte ptr [edi + 0xeb], 0x18 */
  W8((uint32_t)(edi + 0xebu), 0x18u);
/* f4dd70: mov byte ptr [edi + 0xee], 0x82 */
  W8((uint32_t)(edi + 0xeeu), 0x82u);
/* f4dd77: mov byte ptr [edi + 0xef], 0x8e */
  W8((uint32_t)(edi + 0xefu), 0x8eu);
/* f4dd7e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f4dd7f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4dd80: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f4dd87: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f4dd88: mov esp, ebp */
  esp = ebp;
/* f4dd8a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f4dd8b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f4dd8e(void) {
  LOAD_REGS();
L_f4dd8e: /* f4dd8e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* f4dd91: push 0xf56aa4 */
  { uint32_t v = 0xf56aa4u; esp -= 4; W32(esp, v); }
/* f4dd96: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* f4dd99: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f4dd9a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* f4dd9d: call 0xf4fa48 */
  esp -= 4; W32(esp, 0xf4dda2u); SPILL(); f_f4fa48(); if (g_unwind) return; RELOAD();
  SPILL(); f_f4dda2(); return;
}

void f_f4dda2(void) {
  LOAD_REGS();
L_f4dda2: /* f4dda2: push 0xf55e50 */
  { uint32_t v = 0xf55e50u; esp -= 4; W32(esp, v); }
/* f4dda7: push 0xf5b7ec */
  { uint32_t v = 0xf5b7ecu; esp -= 4; W32(esp, v); }
/* f4ddac: call dword ptr [0xf602d8] */
  esp -= 4; W32(esp, 0xf4ddb2u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f4ddb2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4ddb5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f4ddb7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f4ddb9: call 0xf4fa48 */
  esp -= 4; W32(esp, 0xf4ddbeu); SPILL(); f_f4fa48(); if (g_unwind) return; RELOAD();
L_f4ddbe: guest_badaddr(0xf4ddbe); return;
}

void f_f4de40(void) {
  LOAD_REGS();
L_f4de40: /* f4de40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f4de41: mov ebp, esp */
  ebp = esp;
/* f4de43: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f4de45: push 0xf51240 */
  { uint32_t v = 0xf51240u; esp -= 4; W32(esp, v); }
/* f4de4a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f4de50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4de51: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f4de58: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f4de5b: mov eax, dword ptr [0xf5c718] */
  eax = R32((uint32_t)(0xf5c718u));
/* f4de60: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4de61: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4de62: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4de63: mov esi, ecx */
  esi = ecx;
/* f4de65: xor ebx, ebx */
  ebx = 0;
/* f4de67: mov ecx, 0xf5c718 */
  ecx = 0xf5c718u;
/* f4de6c: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f4de6f: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* f4de72: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0xf4de75u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f4de75: cmp eax, 0x514 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x514u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4de7a: mov edi, dword ptr [0xf60388] */
  edi = R32((uint32_t)(0xf60388u));
/* f4de80: je 0xf4de96 */
  if (zf) goto L_f4de96;
L_f4de82: /* f4de82: push 0x1008 */
  { uint32_t v = 0x1008u; esp -= 4; W32(esp, v); }
/* f4de87: push 0xf5b7fc */
  { uint32_t v = 0xf5b7fcu; esp -= 4; W32(esp, v); }
/* f4de8c: push 0xf5b810 */
  { uint32_t v = 0xf5b810u; esp -= 4; W32(esp, v); }
/* f4de91: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xf4de93u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f4de93: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f4de96: /* f4de96: mov edx, dword ptr [0xf5d178] */
  edx = R32((uint32_t)(0xf5d178u));
/* f4de9c: mov ecx, 0xf5d178 */
  ecx = 0xf5d178u;
/* f4dea1: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xf4dea4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f4dea4: cmp eax, 0x130c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x130cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4dea9: je 0xf4debf */
  if (zf) goto L_f4debf;
L_f4deab: /* f4deab: push 0x1009 */
  { uint32_t v = 0x1009u; esp -= 4; W32(esp, v); }
/* f4deb0: push 0xf5b858 */
  { uint32_t v = 0xf5b858u; esp -= 4; W32(esp, v); }
/* f4deb5: push 0xf5b868 */
  { uint32_t v = 0xf5b868u; esp -= 4; W32(esp, v); }
/* f4deba: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xf4debcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f4debc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f4debf: /* f4debf: mov eax, dword ptr [0xf5e108] */
  eax = R32((uint32_t)(0xf5e108u));
/* f4dec4: mov ecx, 0xf5e108 */
  ecx = 0xf5e108u;
/* f4dec9: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0xf4deccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f4decc: cmp eax, 0x1304 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1304u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4ded1: je 0xf4dee7 */
  if (zf) goto L_f4dee7;
L_f4ded3: /* f4ded3: push 0x100a */
  { uint32_t v = 0x100au; esp -= 4; W32(esp, v); }
/* f4ded8: push 0xf5b8b0 */
  { uint32_t v = 0xf5b8b0u; esp -= 4; W32(esp, v); }
/* f4dedd: push 0xf5b8c0 */
  { uint32_t v = 0xf5b8c0u; esp -= 4; W32(esp, v); }
/* f4dee2: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xf4dee4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f4dee4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f4dee7: /* f4dee7: mov edx, dword ptr [0xf5d6a8] */
  edx = R32((uint32_t)(0xf5d6a8u));
/* f4deed: mov ecx, 0xf5d6a8 */
  ecx = 0xf5d6a8u;
/* f4def2: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xf4def5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f4def5: cmp eax, 0xe0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4defa: je 0xf4df10 */
  if (zf) goto L_f4df10;
L_f4defc: /* f4defc: push 0x100b */
  { uint32_t v = 0x100bu; esp -= 4; W32(esp, v); }
/* f4df01: push 0xf5b908 */
  { uint32_t v = 0xf5b908u; esp -= 4; W32(esp, v); }
/* f4df06: push 0xf5b918 */
  { uint32_t v = 0xf5b918u; esp -= 4; W32(esp, v); }
/* f4df0b: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xf4df0du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f4df0d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f4df10: /* f4df10: mov ecx, esi */
  ecx = esi;
/* f4df12: call dword ptr [0xf60404] */
  esp -= 4; W32(esp, 0xf4df18u); SPILL(); f_6c85cb(); if (g_unwind) return; /* Engine!?PostLoad@UTexture@@UAEXXZ */ RELOAD();
/* f4df18: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* f4df1b: mov edx, dword ptr [esi + 0x7c] */
  edx = R32((uint32_t)(esi + 0x7cu));
/* f4df1e: mov ecx, dword ptr [esi + 0x44] */
  ecx = R32((uint32_t)(esi + 0x44u));
/* f4df21: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* f4df22: mov dword ptr [esi + 0xc8], eax */
  W32((uint32_t)(esi + 0xc8u), eax);
/* f4df28: mov eax, dword ptr [esi + 0x50] */
  eax = R32((uint32_t)(esi + 0x50u));
/* f4df2b: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* f4df2c: and edx, 0xfffffffe */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f4df2f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4df31: mov dword ptr [esi + 0xcc], ecx */
  W32((uint32_t)(esi + 0xccu), ecx);
/* f4df37: mov dword ptr [esi + 0x7c], edx */
  W32((uint32_t)(esi + 0x7cu), edx);
/* f4df3a: je 0xf4dffd */
  if (zf) goto L_f4dffd;
L_f4df40: /* f4df40: mov edi, dword ptr [esi + 0x18] */
  edi = R32((uint32_t)(esi + 0x18u));
/* f4df43: cmp edi, dword ptr [eax + 0x18] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4df46: je 0xf4dffd */
  if (zf) goto L_f4dffd;
L_f4df4c: /* f4df4c: mov ecx, esi */
  ecx = esi;
/* f4df4e: call dword ptr [0xf60378] */
  esp -= 4; W32(esp, 0xf4df54u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* f4df54: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f4df56: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4df57: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* f4df5a: call dword ptr [0xf60374] */
  esp -= 4; W32(esp, 0xf4df60u); SPILL(); f_4e36a7(); if (g_unwind) return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */ RELOAD();
/* f4df60: mov edx, dword ptr [0xf602fc] */
  edx = R32((uint32_t)(0xf602fcu));
/* f4df66: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* f4df68: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f4df6b: mov edx, dword ptr [0xf60490] */
  edx = R32((uint32_t)(0xf60490u));
/* f4df71: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4df72: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4df73: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4df74: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4df75: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4df76: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f4df77: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4df78: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f4df79: call dword ptr [0xf602f8] */
  esp -= 4; W32(esp, 0xf4df7fu); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* f4df7f: mov edi, eax */
  edi = eax;
/* f4df81: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4df84: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4df86: je 0xf4df9b */
  if (zf) goto L_f4df9b;
L_f4df88: /* f4df88: mov ecx, edi */
  ecx = edi;
/* f4df8a: call dword ptr [0xf6048c] */
  esp -= 4; W32(esp, 0xf4df90u); SPILL(); f_6c39c2(); if (g_unwind) return; /* Engine!??0UPalette@@QAE@XZ */ RELOAD();
/* f4df90: mov dword ptr [edi], 0xf55c10 */
  W32((uint32_t)(edi), 0xf55c10u);
/* f4df96: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* f4df99: jmp 0xf4dfa0 */
  goto L_f4dfa0;
L_f4df9b: /* f4df9b: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* f4df9e: mov edi, edi */
  edi = edi;
L_f4dfa0: /* f4dfa0: cmp ebx, 0x100 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4dfa6: jge 0xf4dfd1 */
  if ((sf == of)) goto L_f4dfd1;
L_f4dfa8: /* f4dfa8: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* f4dfab: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f4dfad: add edi, 0x28 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* f4dfb0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f4dfb2: mov ecx, edi */
  ecx = edi;
/* f4dfb4: call dword ptr [0xf602e8] */
  esp -= 4; W32(esp, 0xf4dfbau); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* f4dfba: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* f4dfbc: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* f4dfbf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4dfc1: je 0xf4dfce */
  if (zf) goto L_f4dfce;
L_f4dfc3: /* f4dfc3: mov edx, dword ptr [esi + 0x50] */
  edx = R32((uint32_t)(esi + 0x50u));
/* f4dfc6: mov ecx, dword ptr [edx + 0x28] */
  ecx = R32((uint32_t)(edx + 0x28u));
/* f4dfc9: mov edx, dword ptr [ecx + ebx*4] */
  edx = R32((uint32_t)(ecx + ebx*4));
/* f4dfcc: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
L_f4dfce: /* f4dfce: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* f4dfcf: jmp 0xf4dfa0 */
  goto L_f4dfa0;
L_f4dfd1: /* f4dfd1: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f4dfd4: call dword ptr [0xf60488] */
  esp -= 4; W32(esp, 0xf4dfdau); SPILL(); f_6c61b3(); if (g_unwind) return; /* Engine!?ReplaceWithExisting@UPalette@@QAEPAV1@XZ */ RELOAD();
/* f4dfda: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* f4dfdd: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* f4dfe0: mov ecx, dword ptr [eax + 0x200] */
  ecx = R32((uint32_t)(eax + 0x200u));
/* f4dfe6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f4dfe8: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f4dfea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f4dfec: mov dword ptr [esi + 0x5c], ecx */
  W32((uint32_t)(esi + 0x5cu), ecx);
/* f4dfef: mov ecx, dword ptr [0xf60484] */
  ecx = R32((uint32_t)(0xf60484u));
/* f4dff5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f4dff7: call dword ptr [0xf60370] */
  esp -= 4; W32(esp, 0xf4dffdu); SPILL(); f_4e2725(); if (g_unwind) return; /* Core!?Flush@FMemCache@@QAEX_KKH@Z */ RELOAD();
L_f4dffd: /* f4dffd: movzx edx, byte ptr [esi + 0xe1] */
  edx = (uint32_t)(R8((uint32_t)(esi + 0xe1u)));
/* f4e004: cmp dword ptr [esi + 0x108], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x108u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4e00a: je 0xf4e09d */
  if (zf) goto L_f4e09d;
L_f4e010: /* f4e010: xor edi, edi */
  edi = 0;
L_f4e012: /* f4e012: cmp edi, 0x400 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4e018: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* f4e01b: jge 0xf4e090 */
  if ((sf == of)) goto L_f4e090;
L_f4e01d: /* f4e01d: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* f4e020: movzx eax, byte ptr [esi + 0xe1] */
  eax = (uint32_t)(R8((uint32_t)(esi + 0xe1u)));
/* f4e027: mov ecx, 0xff */
  ecx = 0xffu;
/* f4e02c: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* f4e02e: fmul qword ptr [0xf55ef8] */
  ST0 = ST0 * (F64((uint32_t)(0xf55ef8u)));
/* f4e034: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* f4e037: fadd qword ptr [0xf55ee8] */
  ST0 = ST0 + (F64((uint32_t)(0xf55ee8u)));
/* f4e03d: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* f4e040: fmul qword ptr [0xf55ed8] */
  ST0 = ST0 * (F64((uint32_t)(0xf55ed8u)));
/* f4e046: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* f4e048: fcom qword ptr [0xf55ec8] */
  fpu_com(ST0, F64((uint32_t)(0xf55ec8u)));
/* f4e04e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f4e050: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f4e053: jp 0xf4e06c */
  if (pf) goto L_f4e06c;
L_f4e055: /* f4e055: fstp st(0) */
  STI(0) = ST0; FPOP();
/* f4e057: fld qword ptr [0xf55ec8] */
  { double v = F64((uint32_t)(0xf55ec8u)); FPUSH(v); }
/* f4e05d: call 0xf4fab0 */
  esp -= 4; W32(esp, 0xf4e062u); SPILL(); f_f4fab0(); if (g_unwind) return; RELOAD();
/* f4e062: mov byte ptr [edi + esi + 0x10c], al */
  W8((uint32_t)(edi + esi + 0x10cu), (eax & 0xffu));
/* f4e069: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* f4e06a: jmp 0xf4e012 */
  goto L_f4e012;
L_f4e06c: /* f4e06c: fcom qword ptr [0xf55eb8] */
  fpu_com(ST0, F64((uint32_t)(0xf55eb8u)));
/* f4e072: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f4e074: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f4e077: jnp 0xf4e081 */
  if (!pf) goto L_f4e081;
L_f4e079: /* f4e079: fstp st(0) */
  STI(0) = ST0; FPOP();
/* f4e07b: fld qword ptr [0xf55eb8] */
  { double v = F64((uint32_t)(0xf55eb8u)); FPUSH(v); }
L_f4e081: /* f4e081: call 0xf4fab0 */
  esp -= 4; W32(esp, 0xf4e086u); SPILL(); f_f4fab0(); if (g_unwind) return; RELOAD();
/* f4e086: mov byte ptr [edi + esi + 0x10c], al */
  W8((uint32_t)(edi + esi + 0x10cu), (eax & 0xffu));
/* f4e08d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* f4e08e: jmp 0xf4e012 */
  goto L_f4e012;
L_f4e090: /* f4e090: movzx edx, byte ptr [esi + 0xe1] */
  edx = (uint32_t)(R8((uint32_t)(esi + 0xe1u)));
/* f4e097: mov dword ptr [esi + 0x108], edx */
  W32((uint32_t)(esi + 0x108u), edx);
L_f4e09d: /* f4e09d: mov ecx, dword ptr [esi + 0x100] */
  ecx = R32((uint32_t)(esi + 0x100u));
/* f4e0a3: mov eax, dword ptr [esi + 0xf4] */
  eax = R32((uint32_t)(esi + 0xf4u));
/* f4e0a9: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4e0ab: je 0xf4e154 */
  if (zf) goto L_f4e154;
L_f4e0b1: /* f4e0b1: cmp eax, 0x2000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4e0b6: jle 0xf4e0c4 */
  if ((zf || sf != of)) goto L_f4e0c4;
L_f4e0b8: /* f4e0b8: mov dword ptr [esi + 0xf4], 0x2000 */
  W32((uint32_t)(esi + 0xf4u), 0x2000u);
/* f4e0c2: jmp 0xf4e0d3 */
  goto L_f4e0d3;
L_f4e0c4: /* f4e0c4: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4e0c7: jge 0xf4e0d3 */
  if ((sf == of)) goto L_f4e0d3;
L_f4e0c9: /* f4e0c9: mov dword ptr [esi + 0xf4], 4 */
  W32((uint32_t)(esi + 0xf4u), 0x4u);
L_f4e0d3: /* f4e0d3: mov eax, dword ptr [esi + 0xf4] */
  eax = R32((uint32_t)(esi + 0xf4u));
/* f4e0d9: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4e0db: jle 0xf4e165 */
  if ((zf || sf != of)) goto L_f4e165;
L_f4e0e1: /* f4e0e1: mov ecx, dword ptr [esi + 0xf8] */
  ecx = R32((uint32_t)(esi + 0xf8u));
/* f4e0e7: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
L_f4e0e9: /* f4e0e9: jle 0xf4e127 */
  if ((zf || sf != of)) goto L_f4e127;
L_f4e0eb: /* f4e0eb: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* f4e0ec: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f4e0ee: jl 0xf4e127 */
  if ((sf != of)) goto L_f4e127;
L_f4e0f0: /* f4e0f0: mov eax, dword ptr [esi + 0xfc] */
  eax = R32((uint32_t)(esi + 0xfcu));
/* f4e0f6: cmp byte ptr [eax + ecx*8], 0x1f */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + ecx*8))); uint8_t b = (uint8_t)(0x1fu);
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* f4e0fa: jb 0xf4e0eb */
  if (cf) goto L_f4e0eb;
L_f4e0fc: /* f4e0fc: mov edi, dword ptr [esi + 0xf8] */
  edi = R32((uint32_t)(esi + 0xf8u));
/* f4e102: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* f4e103: mov dword ptr [esi + 0xf8], edi */
  W32((uint32_t)(esi + 0xf8u), edi);
/* f4e109: mov edx, edi */
  edx = edi;
/* f4e10b: mov edi, dword ptr [eax + edx*8] */
  edi = R32((uint32_t)(eax + edx*8));
/* f4e10e: mov dword ptr [eax + ecx*8], edi */
  W32((uint32_t)(eax + ecx*8), edi);
/* f4e111: mov edx, dword ptr [eax + edx*8 + 4] */
  edx = R32((uint32_t)(eax + edx*8 + 0x4u));
/* f4e115: mov dword ptr [eax + ecx*8 + 4], edx */
  W32((uint32_t)(eax + ecx*8 + 0x4u), edx);
/* f4e119: mov eax, dword ptr [esi + 0xf8] */
  eax = R32((uint32_t)(esi + 0xf8u));
/* f4e11f: cmp eax, dword ptr [esi + 0xf4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xf4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4e125: jmp 0xf4e0e9 */
  goto L_f4e0e9;
L_f4e127: /* f4e127: mov ecx, dword ptr [esi + 0xf4] */
  ecx = R32((uint32_t)(esi + 0xf4u));
/* f4e12d: mov eax, dword ptr [esi + 0xf8] */
  eax = R32((uint32_t)(esi + 0xf8u));
/* f4e133: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4e135: jle 0xf4e139 */
  if ((zf || sf != of)) goto L_f4e139;
L_f4e137: /* f4e137: mov eax, ecx */
  eax = ecx;
L_f4e139: /* f4e139: mov dword ptr [esi + 0xf8], eax */
  W32((uint32_t)(esi + 0xf8u), eax);
/* f4e13f: mov eax, dword ptr [esi + 0x100] */
  eax = R32((uint32_t)(esi + 0x100u));
/* f4e145: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f4e147: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4e148: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f4e149: lea ecx, [esi + 0xfc] */
  ecx = (uint32_t)(esi + 0xfcu);
/* f4e14f: call 0xf411fe */
  esp -= 4; W32(esp, 0xf4e154u); SPILL(); f_f411fe(); if (g_unwind) return; RELOAD();
L_f4e154: /* f4e154: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f4e157: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f4e15e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f4e15f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4e160: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f4e161: mov esp, ebp */
  esp = ebp;
/* f4e163: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f4e164: ret  */
  esp += 4; SPILL(); return;
L_f4e165: /* f4e165: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f4e167: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* f4e169: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4e16a: lea ecx, [esi + 0xfc] */
  ecx = (uint32_t)(esi + 0xfcu);
/* f4e170: call dword ptr [0xf602e8] */
  esp -= 4; W32(esp, 0xf4e176u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* f4e176: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f4e179: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f4e17a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4e17b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f4e182: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f4e183: mov esp, ebp */
  esp = ebp;
/* f4e185: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f4e186: ret  */
  esp += 4; SPILL(); return;
}

void f_f4e187(void) {
  LOAD_REGS();
L_f4e187: /* f4e187: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* f4e18a: push 0xf56aa4 */
  { uint32_t v = 0xf56aa4u; esp -= 4; W32(esp, v); }
/* f4e18f: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* f4e192: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f4e193: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* f4e196: call 0xf4fa48 */
  esp -= 4; W32(esp, 0xf4e19bu); SPILL(); f_f4fa48(); if (g_unwind) return; RELOAD();
  SPILL(); f_f4e19b(); return;
}

void f_f4e19b(void) {
  LOAD_REGS();
L_f4e19b: /* f4e19b: push 0xf55e80 */
  { uint32_t v = 0xf55e80u; esp -= 4; W32(esp, v); }
/* f4e1a0: push 0xf5b968 */
  { uint32_t v = 0xf5b968u; esp -= 4; W32(esp, v); }
/* f4e1a5: call dword ptr [0xf602d8] */
  esp -= 4; W32(esp, 0xf4e1abu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f4e1ab: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4e1ae: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f4e1b0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f4e1b2: call 0xf4fa48 */
  esp -= 4; W32(esp, 0xf4e1b7u); SPILL(); f_f4fa48(); if (g_unwind) return; RELOAD();
L_f4e1b7: guest_badaddr(0xf4e1b7); return;
}

void f_f4e2a0(void) {
  LOAD_REGS();
L_f4e2a0: /* f4e2a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f4e2a1: mov ebp, esp */
  ebp = esp;
/* f4e2a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f4e2a5: push 0xf51250 */
  { uint32_t v = 0xf51250u; esp -= 4; W32(esp, v); }
/* f4e2aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f4e2b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4e2b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f4e2b8: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f4e2bb: mov eax, dword ptr [0xf5cc60] */
  eax = R32((uint32_t)(0xf5cc60u));
/* f4e2c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4e2c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4e2c2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4e2c3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f4e2c6: xor ebx, ebx */
  ebx = 0;
/* f4e2c8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4e2c9: push 0xf5b9bc */
  { uint32_t v = 0xf5b9bcu; esp -= 4; W32(esp, v); }
/* f4e2ce: mov esi, ecx */
  esi = ecx;
/* f4e2d0: mov ecx, dword ptr [0xf602f4] */
  ecx = R32((uint32_t)(0xf602f4u));
/* f4e2d6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4e2d7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f4e2d8: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* f4e2db: call dword ptr [0xf602f0] */
  esp -= 4; W32(esp, 0xf4e2e1u); SPILL(); f_4e2252(); if (g_unwind) return; /* Core!?StaticFindObjectChecked@UObject@@SAPAV1@PAVUClass@@PAV1@PBGH@Z */ RELOAD();
/* f4e2e1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4e2e4: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4e2e6: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* f4e2e9: je 0xf4e2f3 */
  if (zf) goto L_f4e2f3;
L_f4e2eb: /* f4e2eb: mov edx, dword ptr [eax + 0x3c] */
  edx = R32((uint32_t)(eax + 0x3cu));
/* f4e2ee: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* f4e2f1: jmp 0xf4e2f6 */
  goto L_f4e2f6;
L_f4e2f3: /* f4e2f3: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
L_f4e2f6: /* f4e2f6: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* f4e2f9: call 0xf41285 */
  esp -= 4; W32(esp, 0xf4e2feu); SPILL(); f_f41285(); if (g_unwind) return; RELOAD();
/* f4e2fe: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* f4e301: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4e303: je 0xf4e358 */
  if (zf) goto L_f4e358;
L_f4e305: /* f4e305: mov ecx, edi */
  ecx = edi;
/* f4e307: call dword ptr [0xf60378] */
  esp -= 4; W32(esp, 0xf4e30du); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* f4e30d: push 0xf5b9d8 */
  { uint32_t v = 0xf5b9d8u; esp -= 4; W32(esp, v); }
/* f4e312: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4e313: call dword ptr [0xf60390] */
  esp -= 4; W32(esp, 0xf4e319u); SPILL(); f_4e26df(); if (g_unwind) return; /* Core!?appStricmp@@YAHPBG0@Z */ RELOAD();
/* f4e319: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4e31c: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4e31e: jne 0xf4e350 */
  if (!zf) goto L_f4e350;
L_f4e320: /* f4e320: mov eax, dword ptr [edi + 0x48] */
  eax = R32((uint32_t)(edi + 0x48u));
/* f4e323: cmp eax, 0xe0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4e328: je 0xf4e350 */
  if (zf) goto L_f4e350;
L_f4e32a: /* f4e32a: push 0xe0 */
  { uint32_t v = 0xe0u; esp -= 4; W32(esp, v); }
/* f4e32f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4e330: mov eax, dword ptr [0xf602fc] */
  eax = R32((uint32_t)(0xf602fcu));
/* f4e335: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* f4e337: push 0xf5b9ec */
  { uint32_t v = 0xf5b9ecu; esp -= 4; W32(esp, v); }
/* f4e33c: push 0xf5ba00 */
  { uint32_t v = 0xf5ba00u; esp -= 4; W32(esp, v); }
/* f4e341: push 0xf5ba20 */
  { uint32_t v = 0xf5ba20u; esp -= 4; W32(esp, v); }
/* f4e346: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f4e347: call dword ptr [0xf6038c] */
  esp -= 4; W32(esp, 0xf4e34du); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* f4e34d: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f4e350: /* f4e350: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* f4e353: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* f4e356: jmp 0xf4e2f6 */
  goto L_f4e2f6;
L_f4e358: /* f4e358: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* f4e35b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f4e35e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4e35f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f4e360: mov ecx, esi */
  ecx = esi;
/* f4e362: call 0xf411bd */
  esp -= 4; W32(esp, 0xf4e367u); SPILL(); f_f411bd(); if (g_unwind) return; RELOAD();
/* f4e367: mov cl, 0x80 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x80u) & 0xffu);
/* f4e369: mov al, 8 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x8u) & 0xffu);
/* f4e36b: mov byte ptr [esi + 0xe1], cl */
  W8((uint32_t)(esi + 0xe1u), (ecx & 0xffu));
/* f4e371: mov byte ptr [esi + 0xe6], cl */
  W8((uint32_t)(esi + 0xe6u), (ecx & 0xffu));
/* f4e377: mov byte ptr [esi + 0xe2], al */
  W8((uint32_t)(esi + 0xe2u), (eax & 0xffu));
/* f4e37d: mov byte ptr [esi + 0xe3], al */
  W8((uint32_t)(esi + 0xe3u), (eax & 0xffu));
/* f4e383: mov al, 0xff */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0xffu) & 0xffu);
/* f4e385: mov cl, 0x1e */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x1eu) & 0xffu);
/* f4e387: mov dword ptr [esi + 0xec], ebx */
  W32((uint32_t)(esi + 0xecu), ebx);
/* f4e38d: mov byte ptr [esi + 0xe7], cl */
  W8((uint32_t)(esi + 0xe7u), (ecx & 0xffu));
/* f4e393: mov byte ptr [esi + 0xe9], cl */
  W8((uint32_t)(esi + 0xe9u), (ecx & 0xffu));
/* f4e399: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f4e39c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f4e39d: mov byte ptr [esi + 0xe0], 1 */
  W8((uint32_t)(esi + 0xe0u), 0x1u);
/* f4e3a4: mov byte ptr [esi + 0xe4], al */
  W8((uint32_t)(esi + 0xe4u), (eax & 0xffu));
/* f4e3aa: mov byte ptr [esi + 0xe5], al */
  W8((uint32_t)(esi + 0xe5u), (eax & 0xffu));
/* f4e3b0: mov byte ptr [esi + 0xe8], al */
  W8((uint32_t)(esi + 0xe8u), (eax & 0xffu));
/* f4e3b6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4e3b7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f4e3be: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f4e3bf: mov esp, ebp */
  esp = ebp;
/* f4e3c1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f4e3c2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f4e3c5(void) {
  LOAD_REGS();
L_f4e3c5: /* f4e3c5: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f4e3c8: push 0xf56aa4 */
  { uint32_t v = 0xf56aa4u; esp -= 4; W32(esp, v); }
/* f4e3cd: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* f4e3d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4e3d1: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* f4e3d4: call 0xf4fa48 */
  esp -= 4; W32(esp, 0xf4e3d9u); SPILL(); f_f4fa48(); if (g_unwind) return; RELOAD();
  SPILL(); f_f4e3d9(); return;
}

void f_f4e3d9(void) {
  LOAD_REGS();
L_f4e3d9: /* f4e3d9: push 0xf55f04 */
  { uint32_t v = 0xf55f04u; esp -= 4; W32(esp, v); }
/* f4e3de: push 0xf5ba7c */
  { uint32_t v = 0xf5ba7cu; esp -= 4; W32(esp, v); }
/* f4e3e3: call dword ptr [0xf602d8] */
  esp -= 4; W32(esp, 0xf4e3e9u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f4e3e9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4e3ec: xor ebx, ebx */
  ebx = 0;
/* f4e3ee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4e3ef: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4e3f0: call 0xf4fa48 */
  esp -= 4; W32(esp, 0xf4e3f5u); SPILL(); f_f4fa48(); if (g_unwind) return; RELOAD();
L_f4e3f5: guest_badaddr(0xf4e3f5); return;
}

void f_f4e460(void) {
  LOAD_REGS();
L_f4e460: /* f4e460: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f4e461: mov ebp, esp */
  ebp = esp;
/* f4e463: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f4e465: push 0xf51260 */
  { uint32_t v = 0xf51260u; esp -= 4; W32(esp, v); }
/* f4e46a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f4e470: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4e471: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f4e478: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f4e47b: mov eax, dword ptr [0xf5e120] */
  eax = R32((uint32_t)(0xf5e120u));
/* f4e480: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4e481: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4e482: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4e483: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f4e486: xor ebx, ebx */
  ebx = 0;
/* f4e488: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4e489: push 0xf5bae0 */
  { uint32_t v = 0xf5bae0u; esp -= 4; W32(esp, v); }
/* f4e48e: mov edi, ecx */
  edi = ecx;
/* f4e490: mov ecx, dword ptr [0xf602f4] */
  ecx = R32((uint32_t)(0xf602f4u));
/* f4e496: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4e497: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f4e498: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* f4e49b: call dword ptr [0xf602f0] */
  esp -= 4; W32(esp, 0xf4e4a1u); SPILL(); f_4e2252(); if (g_unwind) return; /* Core!?StaticFindObjectChecked@UObject@@SAPAV1@PAVUClass@@PAV1@PBGH@Z */ RELOAD();
/* f4e4a1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4e4a4: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4e4a6: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* f4e4a9: je 0xf4e4b3 */
  if (zf) goto L_f4e4b3;
L_f4e4ab: /* f4e4ab: mov edx, dword ptr [eax + 0x3c] */
  edx = R32((uint32_t)(eax + 0x3cu));
/* f4e4ae: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* f4e4b1: jmp 0xf4e4b6 */
  goto L_f4e4b6;
L_f4e4b3: /* f4e4b3: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
L_f4e4b6: /* f4e4b6: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* f4e4b9: call 0xf41285 */
  esp -= 4; W32(esp, 0xf4e4beu); SPILL(); f_f41285(); if (g_unwind) return; RELOAD();
/* f4e4be: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* f4e4c1: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4e4c3: je 0xf4e518 */
  if (zf) goto L_f4e518;
L_f4e4c5: /* f4e4c5: mov ecx, esi */
  ecx = esi;
/* f4e4c7: call dword ptr [0xf60378] */
  esp -= 4; W32(esp, 0xf4e4cdu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* f4e4cd: push 0xf5baf8 */
  { uint32_t v = 0xf5baf8u; esp -= 4; W32(esp, v); }
/* f4e4d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4e4d3: call dword ptr [0xf60390] */
  esp -= 4; W32(esp, 0xf4e4d9u); SPILL(); f_4e26df(); if (g_unwind) return; /* Core!?appStricmp@@YAHPBG0@Z */ RELOAD();
/* f4e4d9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4e4dc: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4e4de: jne 0xf4e510 */
  if (!zf) goto L_f4e510;
L_f4e4e0: /* f4e4e0: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* f4e4e3: cmp eax, 0x1301 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1301u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4e4e8: je 0xf4e510 */
  if (zf) goto L_f4e510;
L_f4e4ea: /* f4e4ea: push 0x1301 */
  { uint32_t v = 0x1301u; esp -= 4; W32(esp, v); }
/* f4e4ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4e4f0: mov eax, dword ptr [0xf602fc] */
  eax = R32((uint32_t)(0xf602fcu));
/* f4e4f5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* f4e4f7: push 0xf5bb14 */
  { uint32_t v = 0xf5bb14u; esp -= 4; W32(esp, v); }
/* f4e4fc: push 0xf5bb30 */
  { uint32_t v = 0xf5bb30u; esp -= 4; W32(esp, v); }
/* f4e501: push 0xf5bb48 */
  { uint32_t v = 0xf5bb48u; esp -= 4; W32(esp, v); }
/* f4e506: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f4e507: call dword ptr [0xf6038c] */
  esp -= 4; W32(esp, 0xf4e50du); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* f4e50d: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f4e510: /* f4e510: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* f4e513: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* f4e516: jmp 0xf4e4b6 */
  goto L_f4e4b6;
L_f4e518: /* f4e518: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* f4e51b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f4e51e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4e51f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f4e520: mov ecx, edi */
  ecx = edi;
/* f4e522: call 0xf410be */
  esp -= 4; W32(esp, 0xf4e527u); SPILL(); f_f410be(); if (g_unwind) return; RELOAD();
/* f4e527: mov ecx, dword ptr [edi + 0x18] */
  ecx = R32((uint32_t)(edi + 0x18u));
/* f4e52a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4e52b: mov byte ptr [edi + 0x1301], 0xaa */
  W8((uint32_t)(edi + 0x1301u), 0xaau);
/* f4e532: mov byte ptr [edi + 0x1300], 0x32 */
  W8((uint32_t)(edi + 0x1300u), 0x32u);
/* f4e539: mov byte ptr [edi + 0x1302], 0xb4 */
  W8((uint32_t)(edi + 0x1302u), 0xb4u);
/* f4e540: mov byte ptr [edi + 0x1303], 0x20 */
  W8((uint32_t)(edi + 0x1303u), 0x20u);
/* f4e547: mov edx, dword ptr [0xf602fc] */
  edx = R32((uint32_t)(0xf602fcu));
/* f4e54d: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* f4e54f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4e550: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f4e551: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4e552: xor eax, eax */
  eax = 0;
/* f4e554: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4e555: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4e556: mov eax, dword ptr [0xf60490] */
  eax = R32((uint32_t)(0xf60490u));
/* f4e55b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f4e55c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4e55d: call dword ptr [0xf602f8] */
  esp -= 4; W32(esp, 0xf4e563u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* f4e563: mov esi, eax */
  esi = eax;
/* f4e565: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4e568: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4e56a: je 0xf4e57e */
  if (zf) goto L_f4e57e;
L_f4e56c: /* f4e56c: mov ecx, esi */
  ecx = esi;
/* f4e56e: call dword ptr [0xf6048c] */
  esp -= 4; W32(esp, 0xf4e574u); SPILL(); f_6c39c2(); if (g_unwind) return; /* Engine!??0UPalette@@QAE@XZ */ RELOAD();
/* f4e574: mov dword ptr [esi], 0xf55c10 */
  W32((uint32_t)(esi), 0xf55c10u);
/* f4e57a: mov eax, esi */
  eax = esi;
/* f4e57c: jmp 0xf4e580 */
  goto L_f4e580;
L_f4e57e: /* f4e57e: xor eax, eax */
  eax = 0;
L_f4e580: /* f4e580: mov dword ptr [edi + 0x50], eax */
  W32((uint32_t)(edi + 0x50u), eax);
L_f4e583: /* f4e583: cmp ebx, 0x100 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4e589: jge 0xf4e5b8 */
  if ((sf == of)) goto L_f4e5b8;
L_f4e58b: /* f4e58b: mov esi, dword ptr [edi + 0x50] */
  esi = R32((uint32_t)(edi + 0x50u));
/* f4e58e: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f4e590: add esi, 0x28 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* f4e593: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f4e595: mov ecx, esi */
  ecx = esi;
/* f4e597: call dword ptr [0xf602e8] */
  esp -= 4; W32(esp, 0xf4e59du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* f4e59d: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* f4e59f: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* f4e5a2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4e5a4: je 0xf4e5b5 */
  if (zf) goto L_f4e5b5;
L_f4e5a6: /* f4e5a6: mov byte ptr [eax], 0 */
  W8((uint32_t)(eax), 0x0u);
/* f4e5a9: mov byte ptr [eax + 1], 0 */
  W8((uint32_t)(eax + 0x1u), 0x0u);
/* f4e5ad: mov byte ptr [eax + 2], 0 */
  W8((uint32_t)(eax + 0x2u), 0x0u);
/* f4e5b1: mov byte ptr [eax + 3], 0xff */
  W8((uint32_t)(eax + 0x3u), 0xffu);
L_f4e5b5: /* f4e5b5: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* f4e5b6: jmp 0xf4e583 */
  goto L_f4e583;
L_f4e5b8: /* f4e5b8: mov edx, dword ptr [edi + 0x50] */
  edx = R32((uint32_t)(edi + 0x50u));
/* f4e5bb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f4e5bc: call 0xf410fa */
  esp -= 4; W32(esp, 0xf4e5c1u); SPILL(); f_f410fa(); if (g_unwind) return; RELOAD();
/* f4e5c1: mov eax, dword ptr [edi + 0x50] */
  eax = R32((uint32_t)(edi + 0x50u));
/* f4e5c4: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* f4e5c7: mov edx, dword ptr [ecx + 0x200] */
  edx = R32((uint32_t)(ecx + 0x200u));
/* f4e5cd: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f4e5d0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4e5d3: mov dword ptr [edi + 0x5c], edx */
  W32((uint32_t)(edi + 0x5cu), edx);
/* f4e5d6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f4e5d7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4e5d8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f4e5df: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f4e5e0: mov esp, ebp */
  esp = ebp;
/* f4e5e2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f4e5e3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f4e5e6(void) {
  LOAD_REGS();
L_f4e5e6: /* f4e5e6: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* f4e5e9: push 0xf56aa4 */
  { uint32_t v = 0xf56aa4u; esp -= 4; W32(esp, v); }
/* f4e5ee: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* f4e5f1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f4e5f2: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* f4e5f5: call 0xf4fa48 */
  esp -= 4; W32(esp, 0xf4e5fau); SPILL(); f_f4fa48(); if (g_unwind) return; RELOAD();
  SPILL(); f_f4e5fa(); return;
}

void f_f4e5fa(void) {
  LOAD_REGS();
L_f4e5fa: /* f4e5fa: push 0xf55f34 */
  { uint32_t v = 0xf55f34u; esp -= 4; W32(esp, v); }
/* f4e5ff: push 0xf5bba4 */
  { uint32_t v = 0xf5bba4u; esp -= 4; W32(esp, v); }
/* f4e604: call dword ptr [0xf602d8] */
  esp -= 4; W32(esp, 0xf4e60au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f4e60a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4e60d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f4e60f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f4e611: call 0xf4fa48 */
  esp -= 4; W32(esp, 0xf4e616u); SPILL(); f_f4fa48(); if (g_unwind) return; RELOAD();
L_f4e616: guest_badaddr(0xf4e616); return;
}

void f_f4e690(void) {
  LOAD_REGS();
L_f4e690: /* f4e690: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f4e691: mov ebp, esp */
  ebp = esp;
/* f4e693: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f4e695: push 0xf51270 */
  { uint32_t v = 0xf51270u; esp -= 4; W32(esp, v); }
/* f4e69a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f4e6a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4e6a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f4e6a8: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f4e6ab: mov eax, dword ptr [0xf5e120] */
  eax = R32((uint32_t)(0xf5e120u));
/* f4e6b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4e6b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4e6b2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4e6b3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f4e6b6: xor edi, edi */
  edi = 0;
/* f4e6b8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4e6b9: push 0xf5bbf0 */
  { uint32_t v = 0xf5bbf0u; esp -= 4; W32(esp, v); }
/* f4e6be: mov ebx, ecx */
  ebx = ecx;
/* f4e6c0: mov ecx, dword ptr [0xf602f4] */
  ecx = R32((uint32_t)(0xf602f4u));
/* f4e6c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4e6c7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f4e6c8: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* f4e6cb: call dword ptr [0xf602f0] */
  esp -= 4; W32(esp, 0xf4e6d1u); SPILL(); f_4e2252(); if (g_unwind) return; /* Core!?StaticFindObjectChecked@UObject@@SAPAV1@PAVUClass@@PAV1@PBGH@Z */ RELOAD();
/* f4e6d1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4e6d4: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4e6d6: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* f4e6d9: je 0xf4e6e3 */
  if (zf) goto L_f4e6e3;
L_f4e6db: /* f4e6db: mov edx, dword ptr [eax + 0x3c] */
  edx = R32((uint32_t)(eax + 0x3cu));
/* f4e6de: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* f4e6e1: jmp 0xf4e6e6 */
  goto L_f4e6e6;
L_f4e6e3: /* f4e6e3: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
L_f4e6e6: /* f4e6e6: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* f4e6e9: call 0xf41285 */
  esp -= 4; W32(esp, 0xf4e6eeu); SPILL(); f_f41285(); if (g_unwind) return; RELOAD();
/* f4e6ee: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* f4e6f1: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4e6f3: je 0xf4e748 */
  if (zf) goto L_f4e748;
L_f4e6f5: /* f4e6f5: mov ecx, esi */
  ecx = esi;
/* f4e6f7: call dword ptr [0xf60378] */
  esp -= 4; W32(esp, 0xf4e6fdu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* f4e6fd: push 0xf5bc08 */
  { uint32_t v = 0xf5bc08u; esp -= 4; W32(esp, v); }
/* f4e702: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4e703: call dword ptr [0xf60390] */
  esp -= 4; W32(esp, 0xf4e709u); SPILL(); f_4e26df(); if (g_unwind) return; /* Core!?appStricmp@@YAHPBG0@Z */ RELOAD();
/* f4e709: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4e70c: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4e70e: jne 0xf4e740 */
  if (!zf) goto L_f4e740;
L_f4e710: /* f4e710: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* f4e713: cmp eax, 0x1301 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1301u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4e718: je 0xf4e740 */
  if (zf) goto L_f4e740;
L_f4e71a: /* f4e71a: push 0x1301 */
  { uint32_t v = 0x1301u; esp -= 4; W32(esp, v); }
/* f4e71f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4e720: mov eax, dword ptr [0xf602fc] */
  eax = R32((uint32_t)(0xf602fcu));
/* f4e725: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* f4e727: push 0xf5bc24 */
  { uint32_t v = 0xf5bc24u; esp -= 4; W32(esp, v); }
/* f4e72c: push 0xf5bc40 */
  { uint32_t v = 0xf5bc40u; esp -= 4; W32(esp, v); }
/* f4e731: push 0xf5bc58 */
  { uint32_t v = 0xf5bc58u; esp -= 4; W32(esp, v); }
/* f4e736: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f4e737: call dword ptr [0xf6038c] */
  esp -= 4; W32(esp, 0xf4e73du); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* f4e73d: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f4e740: /* f4e740: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* f4e743: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* f4e746: jmp 0xf4e6e6 */
  goto L_f4e6e6;
L_f4e748: /* f4e748: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* f4e74b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f4e74e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4e74f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f4e750: mov ecx, ebx */
  ecx = ebx;
/* f4e752: call 0xf410be */
  esp -= 4; W32(esp, 0xf4e757u); SPILL(); f_f410be(); if (g_unwind) return; RELOAD();
/* f4e757: mov edx, dword ptr [0xf602fc] */
  edx = R32((uint32_t)(0xf602fcu));
/* f4e75d: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* f4e75f: mov ecx, dword ptr [ebx + 0x18] */
  ecx = R32((uint32_t)(ebx + 0x18u));
/* f4e762: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4e763: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4e764: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f4e765: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4e766: xor eax, eax */
  eax = 0;
/* f4e768: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4e769: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4e76a: mov eax, dword ptr [0xf60490] */
  eax = R32((uint32_t)(0xf60490u));
/* f4e76f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f4e770: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4e771: call dword ptr [0xf602f8] */
  esp -= 4; W32(esp, 0xf4e777u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* f4e777: mov esi, eax */
  esi = eax;
/* f4e779: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4e77c: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4e77e: je 0xf4e792 */
  if (zf) goto L_f4e792;
L_f4e780: /* f4e780: mov ecx, esi */
  ecx = esi;
/* f4e782: call dword ptr [0xf6048c] */
  esp -= 4; W32(esp, 0xf4e788u); SPILL(); f_6c39c2(); if (g_unwind) return; /* Engine!??0UPalette@@QAE@XZ */ RELOAD();
/* f4e788: mov dword ptr [esi], 0xf55c10 */
  W32((uint32_t)(esi), 0xf55c10u);
/* f4e78e: mov eax, esi */
  eax = esi;
/* f4e790: jmp 0xf4e794 */
  goto L_f4e794;
L_f4e792: /* f4e792: xor eax, eax */
  eax = 0;
L_f4e794: /* f4e794: mov dword ptr [ebx + 0x50], eax */
  W32((uint32_t)(ebx + 0x50u), eax);
L_f4e797: /* f4e797: cmp edi, 0x100 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4e79d: jge 0xf4e7cc */
  if ((sf == of)) goto L_f4e7cc;
L_f4e79f: /* f4e79f: mov esi, dword ptr [ebx + 0x50] */
  esi = R32((uint32_t)(ebx + 0x50u));
/* f4e7a2: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f4e7a4: add esi, 0x28 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* f4e7a7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f4e7a9: mov ecx, esi */
  ecx = esi;
/* f4e7ab: call dword ptr [0xf602e8] */
  esp -= 4; W32(esp, 0xf4e7b1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* f4e7b1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* f4e7b3: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* f4e7b6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4e7b8: je 0xf4e7c9 */
  if (zf) goto L_f4e7c9;
L_f4e7ba: /* f4e7ba: mov byte ptr [eax], 0 */
  W8((uint32_t)(eax), 0x0u);
/* f4e7bd: mov byte ptr [eax + 1], 0 */
  W8((uint32_t)(eax + 0x1u), 0x0u);
/* f4e7c1: mov byte ptr [eax + 2], 0 */
  W8((uint32_t)(eax + 0x2u), 0x0u);
/* f4e7c5: mov byte ptr [eax + 3], 0xff */
  W8((uint32_t)(eax + 0x3u), 0xffu);
L_f4e7c9: /* f4e7c9: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* f4e7ca: jmp 0xf4e797 */
  goto L_f4e797;
L_f4e7cc: /* f4e7cc: mov edx, dword ptr [ebx + 0x50] */
  edx = R32((uint32_t)(ebx + 0x50u));
/* f4e7cf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f4e7d0: call 0xf410fa */
  esp -= 4; W32(esp, 0xf4e7d5u); SPILL(); f_f410fa(); if (g_unwind) return; RELOAD();
/* f4e7d5: mov eax, dword ptr [ebx + 0x50] */
  eax = R32((uint32_t)(ebx + 0x50u));
/* f4e7d8: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* f4e7db: mov edx, dword ptr [ecx + 0x200] */
  edx = R32((uint32_t)(ecx + 0x200u));
/* f4e7e1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f4e7e4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4e7e7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f4e7e8: mov dword ptr [ebx + 0x5c], edx */
  W32((uint32_t)(ebx + 0x5cu), edx);
/* f4e7eb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4e7ec: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f4e7f3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f4e7f4: mov esp, ebp */
  esp = ebp;
/* f4e7f6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f4e7f7: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f4e7fa(void) {
  LOAD_REGS();
L_f4e7fa: /* f4e7fa: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* f4e7fd: push 0xf56aa4 */
  { uint32_t v = 0xf56aa4u; esp -= 4; W32(esp, v); }
/* f4e802: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* f4e805: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f4e806: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* f4e809: call 0xf4fa48 */
  esp -= 4; W32(esp, 0xf4e80eu); SPILL(); f_f4fa48(); if (g_unwind) return; RELOAD();
  SPILL(); f_f4e80e(); return;
}

void f_f4e80e(void) {
  LOAD_REGS();
L_f4e80e: /* f4e80e: push 0xf55f64 */
  { uint32_t v = 0xf55f64u; esp -= 4; W32(esp, v); }
/* f4e813: push 0xf5bcb4 */
  { uint32_t v = 0xf5bcb4u; esp -= 4; W32(esp, v); }
/* f4e818: call dword ptr [0xf602d8] */
  esp -= 4; W32(esp, 0xf4e81eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f4e81e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4e821: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f4e823: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f4e825: call 0xf4fa48 */
  esp -= 4; W32(esp, 0xf4e82au); SPILL(); f_f4fa48(); if (g_unwind) return; RELOAD();
L_f4e82a: guest_badaddr(0xf4e82a); return;
}

void f_f4e8a0(void) {
  LOAD_REGS();
L_f4e8a0: /* f4e8a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f4e8a1: mov ebp, esp */
  ebp = esp;
/* f4e8a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f4e8a5: push 0xf51280 */
  { uint32_t v = 0xf51280u; esp -= 4; W32(esp, v); }
/* f4e8aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f4e8b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4e8b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f4e8b8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f4e8bb: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* f4e8be: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4e8bf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4e8c0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4e8c1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f4e8c4: mov edi, ecx */
  edi = ecx;
/* f4e8c6: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f4e8c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4e8ca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f4e8cb: xor ebx, ebx */
  ebx = 0;
/* f4e8cd: mov ecx, edi */
  ecx = edi;
/* f4e8cf: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* f4e8d2: call 0xf410be */
  esp -= 4; W32(esp, 0xf4e8d7u); SPILL(); f_f410be(); if (g_unwind) return; RELOAD();
/* f4e8d7: mov edx, dword ptr [0xf602fc] */
  edx = R32((uint32_t)(0xf602fcu));
/* f4e8dd: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* f4e8df: mov ecx, dword ptr [edi + 0x18] */
  ecx = R32((uint32_t)(edi + 0x18u));
/* f4e8e2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4e8e3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4e8e4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f4e8e5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4e8e6: xor eax, eax */
  eax = 0;
/* f4e8e8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4e8e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4e8ea: mov eax, dword ptr [0xf60490] */
  eax = R32((uint32_t)(0xf60490u));
/* f4e8ef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f4e8f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4e8f1: call dword ptr [0xf602f8] */
  esp -= 4; W32(esp, 0xf4e8f7u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* f4e8f7: mov esi, eax */
  esi = eax;
/* f4e8f9: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4e8fc: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4e8fe: je 0xf4e912 */
  if (zf) goto L_f4e912;
L_f4e900: /* f4e900: mov ecx, esi */
  ecx = esi;
/* f4e902: call dword ptr [0xf6048c] */
  esp -= 4; W32(esp, 0xf4e908u); SPILL(); f_6c39c2(); if (g_unwind) return; /* Engine!??0UPalette@@QAE@XZ */ RELOAD();
/* f4e908: mov dword ptr [esi], 0xf55c10 */
  W32((uint32_t)(esi), 0xf55c10u);
/* f4e90e: mov eax, esi */
  eax = esi;
/* f4e910: jmp 0xf4e914 */
  goto L_f4e914;
L_f4e912: /* f4e912: xor eax, eax */
  eax = 0;
L_f4e914: /* f4e914: mov dword ptr [edi + 0x50], eax */
  W32((uint32_t)(edi + 0x50u), eax);
L_f4e917: /* f4e917: cmp ebx, 0x100 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4e91d: jge 0xf4e949 */
  if ((sf == of)) goto L_f4e949;
L_f4e91f: /* f4e91f: mov esi, dword ptr [edi + 0x50] */
  esi = R32((uint32_t)(edi + 0x50u));
/* f4e922: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f4e924: add esi, 0x28 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* f4e927: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f4e929: mov ecx, esi */
  ecx = esi;
/* f4e92b: call dword ptr [0xf602e8] */
  esp -= 4; W32(esp, 0xf4e931u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* f4e931: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* f4e933: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* f4e936: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4e938: je 0xf4e946 */
  if (zf) goto L_f4e946;
L_f4e93a: /* f4e93a: mov byte ptr [eax], bl */
  W8((uint32_t)(eax), (ebx & 0xffu));
/* f4e93c: mov byte ptr [eax + 1], bl */
  W8((uint32_t)(eax + 0x1u), (ebx & 0xffu));
/* f4e93f: mov byte ptr [eax + 2], bl */
  W8((uint32_t)(eax + 0x2u), (ebx & 0xffu));
/* f4e942: mov byte ptr [eax + 3], 0xff */
  W8((uint32_t)(eax + 0x3u), 0xffu);
L_f4e946: /* f4e946: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* f4e947: jmp 0xf4e917 */
  goto L_f4e917;
L_f4e949: /* f4e949: mov edx, dword ptr [edi + 0x50] */
  edx = R32((uint32_t)(edi + 0x50u));
/* f4e94c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f4e94d: call 0xf410fa */
  esp -= 4; W32(esp, 0xf4e952u); SPILL(); f_f410fa(); if (g_unwind) return; RELOAD();
/* f4e952: mov eax, dword ptr [edi + 0x50] */
  eax = R32((uint32_t)(edi + 0x50u));
/* f4e955: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* f4e958: mov edx, dword ptr [ecx + 0x200] */
  edx = R32((uint32_t)(ecx + 0x200u));
/* f4e95e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f4e961: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4e964: mov dword ptr [edi + 0x5c], edx */
  W32((uint32_t)(edi + 0x5cu), edx);
/* f4e967: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f4e968: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4e969: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f4e970: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f4e971: mov esp, ebp */
  esp = ebp;
/* f4e973: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f4e974: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f4e977(void) {
  LOAD_REGS();
L_f4e977: /* f4e977: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* f4e97a: push 0xf56aa4 */
  { uint32_t v = 0xf56aa4u; esp -= 4; W32(esp, v); }
/* f4e97f: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* f4e982: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f4e983: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* f4e986: call 0xf4fa48 */
  esp -= 4; W32(esp, 0xf4e98bu); SPILL(); f_f4fa48(); if (g_unwind) return; RELOAD();
  SPILL(); f_f4e98b(); return;
}

void f_f4e98b(void) {
  LOAD_REGS();
L_f4e98b: /* f4e98b: push 0xf55f94 */
  { uint32_t v = 0xf55f94u; esp -= 4; W32(esp, v); }
/* f4e990: push 0xf5bd00 */
  { uint32_t v = 0xf5bd00u; esp -= 4; W32(esp, v); }
/* f4e995: call dword ptr [0xf602d8] */
  esp -= 4; W32(esp, 0xf4e99bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f4e99b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4e99e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f4e9a0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f4e9a2: call 0xf4fa48 */
  esp -= 4; W32(esp, 0xf4e9a7u); SPILL(); f_f4fa48(); if (g_unwind) return; RELOAD();
L_f4e9a7: guest_badaddr(0xf4e9a7); return;
}

void f_f4ea00(void) {
  LOAD_REGS();
L_f4ea00: /* f4ea00: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f4ea01: mov ebp, esp */
  ebp = esp;
/* f4ea03: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f4ea05: push 0xf51290 */
  { uint32_t v = 0xf51290u; esp -= 4; W32(esp, v); }
/* f4ea0a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f4ea10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4ea11: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f4ea18: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f4ea1b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4ea1c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4ea1d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4ea1e: xor edi, edi */
  edi = 0;
/* f4ea20: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f4ea23: mov esi, ecx */
  esi = ecx;
/* f4ea25: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* f4ea28: call 0xf41046 */
  esp -= 4; W32(esp, 0xf4ea2du); SPILL(); f_f41046(); if (g_unwind) return; RELOAD();
/* f4ea2d: mov ecx, dword ptr [esi + 0x1300] */
  ecx = R32((uint32_t)(esi + 0x1300u));
/* f4ea33: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4ea35: je 0xf4eb80 */
  if (zf) goto L_f4eb80;
L_f4ea3b: /* f4ea3b: mov dl, byte ptr [ecx + 0x3b] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x3bu))) & 0xffu);
/* f4ea3e: mov al, byte ptr [esi + 0x3b] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3bu))) & 0xffu);
/* f4ea41: cmp dl, al */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f4ea43: jne 0xf4ea74 */
  if (!zf) goto L_f4ea74;
L_f4ea45: /* f4ea45: mov bl, byte ptr [ecx + 0x3c] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x3cu))) & 0xffu);
/* f4ea48: cmp bl, byte ptr [esi + 0x3c] */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(esi + 0x3cu)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f4ea4b: jne 0xf4ea74 */
  if (!zf) goto L_f4ea74;
L_f4ea4d: /* f4ea4d: mov eax, dword ptr [esi + 0x1308] */
  eax = R32((uint32_t)(esi + 0x1308u));
/* f4ea53: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4ea55: je 0xf4eb3d */
  if (zf) goto L_f4eb3d;
L_f4ea5b: /* f4ea5b: mov ecx, dword ptr [0xf602d4] */
  ecx = R32((uint32_t)(0xf602d4u));
/* f4ea61: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* f4ea63: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f4ea65: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4ea66: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xf4ea69u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f4ea69: mov dword ptr [esi + 0x1308], edi */
  W32((uint32_t)(esi + 0x1308u), edi);
/* f4ea6f: jmp 0xf4eb3d */
  goto L_f4eb3d;
L_f4ea74: /* f4ea74: movzx ecx, byte ptr [ecx + 0x3c] */
  ecx = (uint32_t)(R8((uint32_t)(ecx + 0x3cu)));
/* f4ea78: movzx ebx, byte ptr [esi + 0x3c] */
  ebx = (uint32_t)(R8((uint32_t)(esi + 0x3cu)));
/* f4ea7c: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* f4ea7f: movzx edx, dl */
  edx = (uint32_t)((edx & 0xffu));
/* f4ea82: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f4ea84: sub ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* f4ea86: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4ea88: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* f4ea8b: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* f4ea8e: jl 0xf4eb33 */
  if ((sf != of)) goto L_f4eb33;
L_f4ea94: /* f4ea94: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4ea96: jl 0xf4eb33 */
  if ((sf != of)) goto L_f4eb33;
L_f4ea9c: /* f4ea9c: mov eax, dword ptr [esi + 0x1308] */
  eax = R32((uint32_t)(esi + 0x1308u));
/* f4eaa2: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4eaa4: je 0xf4eab4 */
  if (zf) goto L_f4eab4;
L_f4eaa6: /* f4eaa6: mov edx, dword ptr [0xf602d4] */
  edx = R32((uint32_t)(0xf602d4u));
/* f4eaac: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* f4eaae: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f4eab0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4eab1: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xf4eab4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f4eab4: /* f4eab4: mov eax, dword ptr [esi + 0x44] */
  eax = R32((uint32_t)(esi + 0x44u));
/* f4eab7: imul eax, dword ptr [esi + 0x40] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(esi + 0x40u)));
  eax = (uint32_t)r;
  }
/* f4eabb: mov ecx, dword ptr [0xf602d4] */
  ecx = R32((uint32_t)(0xf602d4u));
/* f4eac1: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* f4eac3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f4eac5: push 0xf5bfa4 */
  { uint32_t v = 0xf5bfa4u; esp -= 4; W32(esp, v); }
/* f4eaca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4eacb: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xf4eacdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f4eacd: mov dword ptr [esi + 0x1308], eax */
  W32((uint32_t)(esi + 0x1308u), eax);
/* f4ead3: mov eax, dword ptr [esi + 0x1300] */
  eax = R32((uint32_t)(esi + 0x1300u));
/* f4ead9: mov ecx, dword ptr [eax + 0xac] */
  ecx = R32((uint32_t)(eax + 0xacu));
/* f4eadf: mov edx, dword ptr [ecx + 0x1c] */
  edx = R32((uint32_t)(ecx + 0x1cu));
/* f4eae2: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
L_f4eae5: /* f4eae5: cmp edi, dword ptr [esi + 0x44] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x44u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4eae8: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* f4eaeb: jge 0xf4eb3b */
  if ((sf == of)) goto L_f4eb3b;
L_f4eaed: /* f4eaed: xor edx, edx */
  edx = 0;
/* f4eaef: nop  */
L_f4eaf0: /* f4eaf0: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* f4eaf3: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4eaf5: jge 0xf4eb30 */
  if ((sf == of)) goto L_f4eb30;
L_f4eaf7: /* f4eaf7: mov ecx, dword ptr [esi + 0x1300] */
  ecx = R32((uint32_t)(esi + 0x1300u));
/* f4eafd: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* f4eb00: mov ecx, ebx */
  ecx = ebx;
/* f4eb02: sar edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  cf = ((int32_t)(int32_t)a >> (c - 1)) & 1;
  of = 0;
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  edi = r;
  }
  }
/* f4eb04: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f4eb07: mov cl, byte ptr [ecx + 0x3b] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x3bu))) & 0xffu);
/* f4eb0a: mov ebx, edx */
  ebx = edx;
/* f4eb0c: shl edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  cf = (c <= 32) ? (((uint32_t)a >> (32 - c)) & 1) : 0;
  of = ((r >> 31) & 1) ^ (((uint32_t)a >> (32 - c)) & 1);
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  edi = r;
  }
  }
/* f4eb0e: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* f4eb11: sar ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebx = r;
  }
  }
/* f4eb13: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* f4eb16: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f4eb18: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* f4eb1b: mov cl, byte ptr [ebx + ecx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + ecx))) & 0xffu);
/* f4eb1e: imul eax, edi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edi);
  eax = (uint32_t)r;
  }
/* f4eb21: add eax, dword ptr [esi + 0x1308] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1308u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f4eb27: mov ebx, dword ptr [ebp - 0x24] */
  ebx = R32((uint32_t)(ebp + 0xffffffdcu));
/* f4eb2a: mov byte ptr [eax + edx], cl */
  W8((uint32_t)(eax + edx), (ecx & 0xffu));
/* f4eb2d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* f4eb2e: jmp 0xf4eaf0 */
  goto L_f4eaf0;
L_f4eb30: /* f4eb30: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* f4eb31: jmp 0xf4eae5 */
  goto L_f4eae5;
L_f4eb33: /* f4eb33: mov dword ptr [esi + 0x1300], edi */
  W32((uint32_t)(esi + 0x1300u), edi);
/* f4eb39: jmp 0xf4eb3d */
  goto L_f4eb3d;
L_f4eb3b: /* f4eb3b: xor edi, edi */
  edi = 0;
L_f4eb3d: /* f4eb3d: mov eax, dword ptr [esi + 0x1300] */
  eax = R32((uint32_t)(esi + 0x1300u));
/* f4eb43: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4eb45: je 0xf4eb55 */
  if (zf) goto L_f4eb55;
L_f4eb47: /* f4eb47: cmp eax, dword ptr [esi + 0x1304] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1304u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4eb4d: je 0xf4eb55 */
  if (zf) goto L_f4eb55;
L_f4eb4f: /* f4eb4f: mov edx, dword ptr [eax + 0x50] */
  edx = R32((uint32_t)(eax + 0x50u));
/* f4eb52: mov dword ptr [esi + 0x50], edx */
  W32((uint32_t)(esi + 0x50u), edx);
L_f4eb55: /* f4eb55: mov ecx, dword ptr [esi + 0x12fc] */
  ecx = R32((uint32_t)(esi + 0x12fcu));
/* f4eb5b: mov dword ptr [esi + 0x1304], eax */
  W32((uint32_t)(esi + 0x1304u), eax);
/* f4eb61: movzx eax, byte ptr [esi + 0xe1] */
  eax = (uint32_t)(R8((uint32_t)(esi + 0xe1u)));
/* f4eb68: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4eb6a: je 0xf4eb73 */
  if (zf) goto L_f4eb73;
L_f4eb6c: /* f4eb6c: mov ecx, esi */
  ecx = esi;
/* f4eb6e: call 0xf41258 */
  esp -= 4; W32(esp, 0xf4eb73u); SPILL(); f_f41258(); if (g_unwind) return; RELOAD();
L_f4eb73: /* f4eb73: movzx ecx, byte ptr [esi + 0xe1] */
  ecx = (uint32_t)(R8((uint32_t)(esi + 0xe1u)));
/* f4eb7a: mov dword ptr [esi + 0x12fc], ecx */
  W32((uint32_t)(esi + 0x12fcu), ecx);
L_f4eb80: /* f4eb80: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f4eb83: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f4eb84: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4eb85: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f4eb8c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f4eb8d: mov esp, ebp */
  esp = ebp;
/* f4eb8f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f4eb90: ret  */
  esp += 4; SPILL(); return;
}

void f_f4eb91(void) {
  LOAD_REGS();
L_f4eb91: /* f4eb91: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* f4eb94: push 0xf56aa4 */
  { uint32_t v = 0xf56aa4u; esp -= 4; W32(esp, v); }
/* f4eb99: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* f4eb9c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4eb9d: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* f4eba0: call 0xf4fa48 */
  esp -= 4; W32(esp, 0xf4eba5u); SPILL(); f_f4fa48(); if (g_unwind) return; RELOAD();
  SPILL(); f_f4eba5(); return;
}

void f_f4eba5(void) {
  LOAD_REGS();
L_f4eba5: /* f4eba5: push 0xf55fc0 */
  { uint32_t v = 0xf55fc0u; esp -= 4; W32(esp, v); }
/* f4ebaa: push 0xf5bd08 */
  { uint32_t v = 0xf5bd08u; esp -= 4; W32(esp, v); }
/* f4ebaf: call dword ptr [0xf602d8] */
  esp -= 4; W32(esp, 0xf4ebb5u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f4ebb5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4ebb8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f4ebba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f4ebbc: call 0xf4fa48 */
  esp -= 4; W32(esp, 0xf4ebc1u); SPILL(); f_f4fa48(); if (g_unwind) return; RELOAD();
L_f4ebc1: guest_badaddr(0xf4ebc1); return;
}

void f_f4ec50(void) {
  LOAD_REGS();
L_f4ec50: /* f4ec50: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f4ec51: mov ebp, esp */
  ebp = esp;
/* f4ec53: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f4ec55: push 0xf512a0 */
  { uint32_t v = 0xf512a0u; esp -= 4; W32(esp, v); }
/* f4ec5a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f4ec60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4ec61: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f4ec68: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f4ec6b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* f4ec6e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4ec6f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4ec70: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4ec71: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f4ec74: mov esi, ecx */
  esi = ecx;
/* f4ec76: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f4ec79: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4ec7a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f4ec7b: xor ebx, ebx */
  ebx = 0;
/* f4ec7d: mov ecx, esi */
  ecx = esi;
/* f4ec7f: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* f4ec82: call 0xf411bd */
  esp -= 4; W32(esp, 0xf4ec87u); SPILL(); f_f411bd(); if (g_unwind) return; RELOAD();
/* f4ec87: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* f4ec8a: mov al, 0x80 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x80u) & 0xffu);
/* f4ec8c: mov byte ptr [esi + 0xea], al */
  W8((uint32_t)(esi + 0xeau), (eax & 0xffu));
/* f4ec92: mov byte ptr [esi + 0xeb], al */
  W8((uint32_t)(esi + 0xebu), (eax & 0xffu));
/* f4ec98: mov eax, dword ptr [esi + 0xf0] */
  eax = R32((uint32_t)(esi + 0xf0u));
/* f4ec9e: or eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* f4eca1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4eca2: mov dword ptr [esi + 0xf0], eax */
  W32((uint32_t)(esi + 0xf0u), eax);
/* f4eca8: mov dword ptr [esi + 0xf8], ebx */
  W32((uint32_t)(esi + 0xf8u), ebx);
/* f4ecae: mov dword ptr [esi + 0xfc], ebx */
  W32((uint32_t)(esi + 0xfcu), ebx);
/* f4ecb4: mov byte ptr [esi + 0xe8], bl */
  W8((uint32_t)(esi + 0xe8u), (ebx & 0xffu));
/* f4ecba: mov byte ptr [esi + 0xec], 0xb */
  W8((uint32_t)(esi + 0xecu), 0xbu);
/* f4ecc1: mov byte ptr [esi + 0xed], 0x2c */
  W8((uint32_t)(esi + 0xedu), 0x2cu);
/* f4ecc8: mov edx, dword ptr [0xf602fc] */
  edx = R32((uint32_t)(0xf602fcu));
/* f4ecce: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* f4ecd0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4ecd1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f4ecd2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4ecd3: xor eax, eax */
  eax = 0;
/* f4ecd5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4ecd6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4ecd7: mov eax, dword ptr [0xf60490] */
  eax = R32((uint32_t)(0xf60490u));
/* f4ecdc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f4ecdd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4ecde: call dword ptr [0xf602f8] */
  esp -= 4; W32(esp, 0xf4ece4u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* f4ece4: mov edi, eax */
  edi = eax;
/* f4ece6: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4ece9: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4eceb: je 0xf4ecfd */
  if (zf) goto L_f4ecfd;
L_f4eced: /* f4eced: mov ecx, edi */
  ecx = edi;
/* f4ecef: call dword ptr [0xf6048c] */
  esp -= 4; W32(esp, 0xf4ecf5u); SPILL(); f_6c39c2(); if (g_unwind) return; /* Engine!??0UPalette@@QAE@XZ */ RELOAD();
/* f4ecf5: mov dword ptr [edi], 0xf55c10 */
  W32((uint32_t)(edi), 0xf55c10u);
/* f4ecfb: jmp 0xf4ecff */
  goto L_f4ecff;
L_f4ecfd: /* f4ecfd: xor edi, edi */
  edi = 0;
L_f4ecff: /* f4ecff: mov dword ptr [esi + 0x50], edi */
  W32((uint32_t)(esi + 0x50u), edi);
L_f4ed02: /* f4ed02: cmp ebx, 0x100 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4ed08: jge 0xf4ed34 */
  if ((sf == of)) goto L_f4ed34;
L_f4ed0a: /* f4ed0a: mov edi, dword ptr [esi + 0x50] */
  edi = R32((uint32_t)(esi + 0x50u));
/* f4ed0d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f4ed0f: add edi, 0x28 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* f4ed12: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f4ed14: mov ecx, edi */
  ecx = edi;
/* f4ed16: call dword ptr [0xf602e8] */
  esp -= 4; W32(esp, 0xf4ed1cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* f4ed1c: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* f4ed1e: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* f4ed21: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4ed23: je 0xf4ed31 */
  if (zf) goto L_f4ed31;
L_f4ed25: /* f4ed25: mov byte ptr [eax], bl */
  W8((uint32_t)(eax), (ebx & 0xffu));
/* f4ed27: mov byte ptr [eax + 1], bl */
  W8((uint32_t)(eax + 0x1u), (ebx & 0xffu));
/* f4ed2a: mov byte ptr [eax + 2], bl */
  W8((uint32_t)(eax + 0x2u), (ebx & 0xffu));
/* f4ed2d: mov byte ptr [eax + 3], 0xff */
  W8((uint32_t)(eax + 0x3u), 0xffu);
L_f4ed31: /* f4ed31: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* f4ed32: jmp 0xf4ed02 */
  goto L_f4ed02;
L_f4ed34: /* f4ed34: mov edx, dword ptr [esi + 0x50] */
  edx = R32((uint32_t)(esi + 0x50u));
/* f4ed37: mov eax, dword ptr [edx + 0x28] */
  eax = R32((uint32_t)(edx + 0x28u));
/* f4ed3a: mov ecx, dword ptr [eax + 0x200] */
  ecx = R32((uint32_t)(eax + 0x200u));
/* f4ed40: mov dword ptr [esi + 0x5c], ecx */
  W32((uint32_t)(esi + 0x5cu), ecx);
/* f4ed43: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f4ed46: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f4ed47: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4ed48: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f4ed4f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f4ed50: mov esp, ebp */
  esp = ebp;
/* f4ed52: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f4ed53: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f4ed56(void) {
  LOAD_REGS();
L_f4ed56: /* f4ed56: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f4ed59: push 0xf56aa4 */
  { uint32_t v = 0xf56aa4u; esp -= 4; W32(esp, v); }
/* f4ed5e: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* f4ed61: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4ed62: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* f4ed65: call 0xf4fa48 */
  esp -= 4; W32(esp, 0xf4ed6au); SPILL(); f_f4fa48(); if (g_unwind) return; RELOAD();
  SPILL(); f_f4ed6a(); return;
}

void f_f4ed6a(void) {
  LOAD_REGS();
L_f4ed6a: /* f4ed6a: push 0xf55ff4 */
  { uint32_t v = 0xf55ff4u; esp -= 4; W32(esp, v); }
/* f4ed6f: push 0xf5bd58 */
  { uint32_t v = 0xf5bd58u; esp -= 4; W32(esp, v); }
/* f4ed74: call dword ptr [0xf602d8] */
  esp -= 4; W32(esp, 0xf4ed7au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f4ed7a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4ed7d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f4ed7f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f4ed81: call 0xf4fa48 */
  esp -= 4; W32(esp, 0xf4ed86u); SPILL(); f_f4fa48(); if (g_unwind) return; RELOAD();
L_f4ed86: guest_badaddr(0xf4ed86); return;
}

void f_f4ede0(void) {
  LOAD_REGS();
L_f4ede0: /* f4ede0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f4ede1: mov ebp, esp */
  ebp = esp;
/* f4ede3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f4ede5: push 0xf512b0 */
  { uint32_t v = 0xf512b0u; esp -= 4; W32(esp, v); }
/* f4edea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f4edf0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4edf1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f4edf8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f4edfb: mov eax, dword ptr [0xf6047c] */
  eax = R32((uint32_t)(0xf6047cu));
/* f4ee00: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* f4ee02: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4ee04: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4ee05: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4ee06: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4ee07: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f4ee0a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f4ee11: je 0xf4ee24 */
  if (zf) goto L_f4ee24;
L_f4ee13: /* f4ee13: mov edx, dword ptr [eax + 0x4c] */
  edx = R32((uint32_t)(eax + 0x4cu));
/* f4ee16: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4ee18: jne 0xf4ee24 */
  if (!zf) goto L_f4ee24;
L_f4ee1a: /* f4ee1a: push 0x3c088889 */
  { uint32_t v = 0x3c088889u; esp -= 4; W32(esp, v); }
/* f4ee1f: call 0xf41140 */
  esp -= 4; W32(esp, 0xf4ee24u); SPILL(); f_f41140(); if (g_unwind) return; RELOAD();
L_f4ee24: /* f4ee24: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f4ee27: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f4ee28: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4ee29: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f4ee30: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f4ee31: mov esp, ebp */
  esp = ebp;
/* f4ee33: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f4ee34: ret  */
  esp += 4; SPILL(); return;
}

void f_f4ee35(void) {
  LOAD_REGS();
L_f4ee35: /* f4ee35: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f4ee38: push 0xf56aa4 */
  { uint32_t v = 0xf56aa4u; esp -= 4; W32(esp, v); }
/* f4ee3d: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* f4ee40: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f4ee41: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* f4ee44: call 0xf4fa48 */
  esp -= 4; W32(esp, 0xf4ee49u); SPILL(); f_f4fa48(); if (g_unwind) return; RELOAD();
  SPILL(); f_f4ee49(); return;
}

void f_f4ee49(void) {
  LOAD_REGS();
L_f4ee49: /* f4ee49: push 0xf56020 */
  { uint32_t v = 0xf56020u; esp -= 4; W32(esp, v); }
/* f4ee4e: push 0xf5bd68 */
  { uint32_t v = 0xf5bd68u; esp -= 4; W32(esp, v); }
/* f4ee53: call dword ptr [0xf602d8] */
  esp -= 4; W32(esp, 0xf4ee59u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f4ee59: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4ee5c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f4ee5e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f4ee60: call 0xf4fa48 */
  esp -= 4; W32(esp, 0xf4ee65u); SPILL(); f_f4fa48(); if (g_unwind) return; RELOAD();
L_f4ee65: guest_badaddr(0xf4ee65); return;
}

void f_f4eea0(void) {
  LOAD_REGS();
L_f4eea0: /* f4eea0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f4eea1: mov ebp, esp */
  ebp = esp;
/* f4eea3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f4eea5: push 0xf512c0 */
  { uint32_t v = 0xf512c0u; esp -= 4; W32(esp, v); }
/* f4eeaa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f4eeb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4eeb1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f4eeb8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f4eebb: mov eax, dword ptr [0xf6047c] */
  eax = R32((uint32_t)(0xf6047cu));
/* f4eec0: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* f4eec2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4eec4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4eec5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4eec6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4eec7: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f4eeca: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f4eed1: je 0xf4eeee */
  if (zf) goto L_f4eeee;
L_f4eed3: /* f4eed3: mov edx, dword ptr [eax + 0x4c] */
  edx = R32((uint32_t)(eax + 0x4cu));
/* f4eed6: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4eed8: jne 0xf4eeee */
  if (!zf) goto L_f4eeee;
L_f4eeda: /* f4eeda: mov al, byte ptr [ecx + 0xe9] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0xe9u))) & 0xffu);
/* f4eee0: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f4eee2: jne 0xf4ef01 */
  if (!zf) goto L_f4ef01;
L_f4eee4: /* f4eee4: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* f4eee7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f4eee8: call dword ptr [0xf60424] */
  esp -= 4; W32(esp, 0xf4eeeeu); SPILL(); f_6c74dc(); if (g_unwind) return; /* Engine!?Tick@UTexture@@UAEXM@Z */ RELOAD();
L_f4eeee: /* f4eeee: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f4eef1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f4eef8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f4eef9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4eefa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f4eefb: mov esp, ebp */
  esp = ebp;
/* f4eefd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f4eefe: ret 4 */
  esp += 8; SPILL(); return;
L_f4ef01: /* f4ef01: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f4ef04: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4ef05: call 0xf41140 */
  esp -= 4; W32(esp, 0xf4ef0au); SPILL(); f_f41140(); if (g_unwind) return; RELOAD();
/* f4ef0a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f4ef0d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f4ef0e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4ef0f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f4ef16: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f4ef17: mov esp, ebp */
  esp = ebp;
/* f4ef19: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f4ef1a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f4ef1d(void) {
  LOAD_REGS();
L_f4ef1d: /* f4ef1d: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f4ef20: push 0xf56aa4 */
  { uint32_t v = 0xf56aa4u; esp -= 4; W32(esp, v); }
/* f4ef25: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* f4ef28: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f4ef29: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* f4ef2c: call 0xf4fa48 */
  esp -= 4; W32(esp, 0xf4ef31u); SPILL(); f_f4fa48(); if (g_unwind) return; RELOAD();
  SPILL(); f_f4ef31(); return;
}

void f_f4ef31(void) {
  LOAD_REGS();
L_f4ef31: /* f4ef31: push 0xf56068 */
  { uint32_t v = 0xf56068u; esp -= 4; W32(esp, v); }
/* f4ef36: push 0xf5bd70 */
  { uint32_t v = 0xf5bd70u; esp -= 4; W32(esp, v); }
/* f4ef3b: call dword ptr [0xf602d8] */
  esp -= 4; W32(esp, 0xf4ef41u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f4ef41: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4ef44: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f4ef46: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f4ef48: call 0xf4fa48 */
  esp -= 4; W32(esp, 0xf4ef4du); SPILL(); f_f4fa48(); if (g_unwind) return; RELOAD();
L_f4ef4d: guest_badaddr(0xf4ef4d); return;
}

void f_f4ef80(void) {
  LOAD_REGS();
L_f4ef80: /* f4ef80: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f4ef82: push 0xf512d9 */
  { uint32_t v = 0xf512d9u; esp -= 4; W32(esp, v); }
/* f4ef87: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f4ef8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4ef8e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f4ef95: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f4ef96: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4ef97: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4ef98: mov esi, ecx */
  esi = ecx;
/* f4ef9a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4ef9b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* f4ef9f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* f4efa2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f4efa4: mov ebx, dword ptr [0xf60388] */
  ebx = R32((uint32_t)(0xf60388u));
/* f4efaa: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* f4efb2: jge 0xf4efc8 */
  if ((sf == of)) goto L_f4efc8;
L_f4efb4: /* f4efb4: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* f4efb9: push 0xf5c010 */
  { uint32_t v = 0xf5c010u; esp -= 4; W32(esp, v); }
/* f4efbe: push 0xf5bfec */
  { uint32_t v = 0xf5bfecu; esp -= 4; W32(esp, v); }
/* f4efc3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xf4efc5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f4efc5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f4efc8: /* f4efc8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4efcb: jle 0xf4efe1 */
  if ((zf || sf != of)) goto L_f4efe1;
L_f4efcd: /* f4efcd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* f4efd2: push 0xf5c010 */
  { uint32_t v = 0xf5c010u; esp -= 4; W32(esp, v); }
/* f4efd7: push 0xf5bfd0 */
  { uint32_t v = 0xf5bfd0u; esp -= 4; W32(esp, v); }
/* f4efdc: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xf4efdeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f4efde: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f4efe1: /* f4efe1: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* f4efe3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4efe4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f4efe6: mov ecx, esi */
  ecx = esi;
/* f4efe8: call dword ptr [0xf60384] */
  esp -= 4; W32(esp, 0xf4efeeu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* f4efee: mov ecx, esi */
  ecx = esi;
/* f4eff0: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* f4eff8: call dword ptr [0xf6037c] */
  esp -= 4; W32(esp, 0xf4effeu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* f4effe: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* f4f002: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f4f003: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4f004: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f4f005: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f4f00c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4f00f: ret  */
  esp += 4; SPILL(); return;
}

void f_f4f040(void) {
  LOAD_REGS();
L_f4f040: /* f4f040: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f4f041: mov ebp, esp */
  ebp = esp;
/* f4f043: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f4f045: push 0xf512f0 */
  { uint32_t v = 0xf512f0u; esp -= 4; W32(esp, v); }
/* f4f04a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f4f050: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4f051: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f4f058: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f4f05b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4f05c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* f4f05f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4f060: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* f4f063: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4f064: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f4f067: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* f4f069: xor edi, edi */
  edi = 0;
/* f4f06b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4f06c: mov ecx, esi */
  ecx = esi;
/* f4f06e: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* f4f071: call dword ptr [0xf602ec] */
  esp -= 4; W32(esp, 0xf4f077u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* f4f077: cmp dword ptr [ebx + 0x10], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x10u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4f07a: je 0xf4f0cb */
  if (zf) goto L_f4f0cb;
L_f4f07c: /* f4f07c: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* f4f07f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4f080: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4f081: call dword ptr [0xf60394] */
  esp -= 4; W32(esp, 0xf4f087u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* f4f087: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f4f08a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4f08d: xor eax, eax */
  eax = 0;
/* f4f08f: nop  */
L_f4f090: /* f4f090: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4f093: jge 0xf4f098 */
  if ((sf == of)) goto L_f4f098;
L_f4f095: /* f4f095: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f4f096: jmp 0xf4f090 */
  goto L_f4f090;
L_f4f098: /* f4f098: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* f4f09b: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* f4f09d: mov ecx, esi */
  ecx = esi;
/* f4f09f: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* f4f0a2: call dword ptr [0xf60380] */
  esp -= 4; W32(esp, 0xf4f0a8u); SPILL(); f_4e4502(); if (g_unwind) return; /* Core!?Realloc@FArray@@IAEXH@Z */ RELOAD();
L_f4f0a8: /* f4f0a8: cmp edi, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4f0ab: jge 0xf4f0f7 */
  if ((sf == of)) goto L_f4f0f7;
L_f4f0ad: /* f4f0ad: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* f4f0af: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f4f0b1: mov ecx, esi */
  ecx = esi;
/* f4f0b3: call dword ptr [0xf602e8] */
  esp -= 4; W32(esp, 0xf4f0b9u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* f4f0b9: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* f4f0bb: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* f4f0be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4f0bf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4f0c0: call 0xf411b3 */
  esp -= 4; W32(esp, 0xf4f0c5u); SPILL(); f_f411b3(); if (g_unwind) return; RELOAD();
/* f4f0c5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4f0c8: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* f4f0c9: jmp 0xf4f0a8 */
  goto L_f4f0a8;
L_f4f0cb: /* f4f0cb: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* f4f0ce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4f0cf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4f0d0: call dword ptr [0xf60394] */
  esp -= 4; W32(esp, 0xf4f0d6u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* f4f0d6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4f0d9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_f4f0e0: /* f4f0e0: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4f0e3: jge 0xf4f0f7 */
  if ((sf == of)) goto L_f4f0f7;
L_f4f0e5: /* f4f0e5: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f4f0e7: lea eax, [edx + edi*8] */
  eax = (uint32_t)(edx + edi*8);
/* f4f0ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4f0eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4f0ec: call 0xf411b3 */
  esp -= 4; W32(esp, 0xf4f0f1u); SPILL(); f_f411b3(); if (g_unwind) return; RELOAD();
/* f4f0f1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4f0f4: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* f4f0f5: jmp 0xf4f0e0 */
  goto L_f4f0e0;
L_f4f0f7: /* f4f0f7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f4f0fa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f4f0fb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4f0fc: mov eax, ebx */
  eax = ebx;
/* f4f0fe: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f4f105: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f4f106: mov esp, ebp */
  esp = ebp;
/* f4f108: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f4f109: ret  */
  esp += 4; SPILL(); return;
}

void f_f4f10a(void) {
  LOAD_REGS();
L_f4f10a: /* f4f10a: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* f4f10d: push 0xf56aa4 */
  { uint32_t v = 0xf56aa4u; esp -= 4; W32(esp, v); }
/* f4f112: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* f4f115: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f4f116: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* f4f119: call 0xf4fa48 */
  esp -= 4; W32(esp, 0xf4f11eu); SPILL(); f_f4fa48(); if (g_unwind) return; RELOAD();
  SPILL(); f_f4f11e(); return;
}

void f_f4f11e(void) {
  LOAD_REGS();
L_f4f11e: /* f4f11e: push 0xf56094 */
  { uint32_t v = 0xf56094u; esp -= 4; W32(esp, v); }
/* f4f123: push 0xf5c064 */
  { uint32_t v = 0xf5c064u; esp -= 4; W32(esp, v); }
/* f4f128: call dword ptr [0xf602d8] */
  esp -= 4; W32(esp, 0xf4f12eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f4f12e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4f131: xor edi, edi */
  edi = 0;
/* f4f133: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4f134: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4f135: call 0xf4fa48 */
  esp -= 4; W32(esp, 0xf4f13au); SPILL(); f_f4fa48(); if (g_unwind) return; RELOAD();
L_f4f13a: guest_badaddr(0xf4f13a); return;
}

void f_f4f180(void) {
  LOAD_REGS();
L_f4f180: /* f4f180: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4f181: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* f4f185: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4f186: mov esi, ecx */
  esi = ecx;
/* f4f188: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4f18a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4f18b: je 0xf4f1db */
  if (zf) goto L_f4f1db;
L_f4f18d: /* f4f18d: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* f4f190: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* f4f192: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* f4f199: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* f4f19c: call dword ptr [0xf60380] */
  esp -= 4; W32(esp, 0xf4f1a2u); SPILL(); f_4e4502(); if (g_unwind) return; /* Core!?Realloc@FArray@@IAEXH@Z */ RELOAD();
/* f4f1a2: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* f4f1a5: xor edi, edi */
  edi = 0;
/* f4f1a7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f4f1a9: jle 0xf4f1db */
  if ((zf || sf != of)) goto L_f4f1db;
L_f4f1ab: /* f4f1ab: jmp 0xf4f1b0 */
  goto L_f4f1b0;
L_f4f1b0: /* f4f1b0: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* f4f1b2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f4f1b4: mov ecx, esi */
  ecx = esi;
/* f4f1b6: call dword ptr [0xf602e8] */
  esp -= 4; W32(esp, 0xf4f1bcu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* f4f1bc: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* f4f1be: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* f4f1c1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4f1c3: je 0xf4f1d3 */
  if (zf) goto L_f4f1d3;
L_f4f1c5: /* f4f1c5: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* f4f1c7: mov ecx, dword ptr [edx + edi*8] */
  ecx = R32((uint32_t)(edx + edi*8));
/* f4f1ca: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* f4f1cc: mov edx, dword ptr [edx + edi*8 + 4] */
  edx = R32((uint32_t)(edx + edi*8 + 0x4u));
/* f4f1d0: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
L_f4f1d3: /* f4f1d3: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* f4f1d6: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* f4f1d7: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4f1d9: jl 0xf4f1b0 */
  if ((sf != of)) goto L_f4f1b0;
L_f4f1db: /* f4f1db: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f4f1dc: mov eax, esi */
  eax = esi;
/* f4f1de: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4f1df: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f4f1e0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f4f1ad(void) {
  LOAD_REGS();
L_f4f1ad: /* f4f1ad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_f4f1b0: /* f4f1b0: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* f4f1b2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f4f1b4: mov ecx, esi */
  ecx = esi;
/* f4f1b6: call dword ptr [0xf602e8] */
  esp -= 4; W32(esp, 0xf4f1bcu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* f4f1bc: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* f4f1be: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* f4f1c1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4f1c3: je 0xf4f1d3 */
  if (zf) goto L_f4f1d3;
L_f4f1c5: /* f4f1c5: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* f4f1c7: mov ecx, dword ptr [edx + edi*8] */
  ecx = R32((uint32_t)(edx + edi*8));
/* f4f1ca: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* f4f1cc: mov edx, dword ptr [edx + edi*8 + 4] */
  edx = R32((uint32_t)(edx + edi*8 + 0x4u));
/* f4f1d0: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
L_f4f1d3: /* f4f1d3: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* f4f1d6: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* f4f1d7: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4f1d9: jl 0xf4f1b0 */
  if ((sf != of)) goto L_f4f1b0;
L_f4f1db: /* f4f1db: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f4f1dc: mov eax, esi */
  eax = esi;
/* f4f1de: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4f1df: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f4f1e0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f4f210(void) {
  LOAD_REGS();
L_f4f210: /* f4f210: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f4f212: push 0xf51316 */
  { uint32_t v = 0xf51316u; esp -= 4; W32(esp, v); }
/* f4f217: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f4f21d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4f21e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f4f225: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f4f226: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4f227: mov esi, ecx */
  esi = ecx;
/* f4f229: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* f4f22d: mov dword ptr [esi], 0xf560b0 */
  W32((uint32_t)(esi), 0xf560b0u);
/* f4f233: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* f4f23b: call dword ptr [0xf60354] */
  esp -= 4; W32(esp, 0xf4f241u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* f4f241: lea ecx, [esi + 0xfc] */
  ecx = (uint32_t)(esi + 0xfcu);
/* f4f247: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* f4f24c: call 0xf412b7 */
  esp -= 4; W32(esp, 0xf4f251u); SPILL(); f_f412b7(); if (g_unwind) return; RELOAD();
/* f4f251: mov ecx, esi */
  ecx = esi;
/* f4f253: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* f4f25b: call 0xf41113 */
  esp -= 4; W32(esp, 0xf4f260u); SPILL(); f_f41113(); if (g_unwind) return; RELOAD();
/* f4f260: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f4f264: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4f265: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f4f26c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4f26f: ret  */
  esp += 4; SPILL(); return;
}

void f_f4f290(void) {
  LOAD_REGS();
L_f4f290: /* f4f290: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f4f292: push 0xf51338 */
  { uint32_t v = 0xf51338u; esp -= 4; W32(esp, v); }
/* f4f297: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f4f29d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4f29e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f4f2a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f4f2a6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4f2a7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f4f2a8: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* f4f2ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4f2ad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4f2ae: mov ebx, ecx */
  ebx = ecx;
/* f4f2b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f4f2b1: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* f4f2b5: call 0xf41366 */
  esp -= 4; W32(esp, 0xf4f2bau); SPILL(); f_f41366(); if (g_unwind) return; RELOAD();
/* f4f2ba: mov edi, dword ptr [ebx + 0xe4] */
  edi = R32((uint32_t)(ebx + 0xe4u));
/* f4f2c0: mov dword ptr [ebx], 0xf560b0 */
  W32((uint32_t)(ebx), 0xf560b0u);
/* f4f2c6: mov al, byte ptr [ebp + 0xe0] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xe0u))) & 0xffu);
/* f4f2cc: mov byte ptr [ebx + 0xe0], al */
  W8((uint32_t)(ebx + 0xe0u), (eax & 0xffu));
/* f4f2d2: mov cl, byte ptr [ebp + 0xe1] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xe1u))) & 0xffu);
/* f4f2d8: mov byte ptr [ebx + 0xe1], cl */
  W8((uint32_t)(ebx + 0xe1u), (ecx & 0xffu));
/* f4f2de: mov edx, dword ptr [ebp + 0xe4] */
  edx = R32((uint32_t)(ebp + 0xe4u));
/* f4f2e4: xor edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f4f2e6: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f4f2e9: mov ecx, edi */
  ecx = edi;
/* f4f2eb: xor ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f4f2ed: mov dword ptr [ebx + 0xe4], ecx */
  W32((uint32_t)(ebx + 0xe4u), ecx);
/* f4f2f3: mov al, byte ptr [ebp + 0xe8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xe8u))) & 0xffu);
/* f4f2f9: mov byte ptr [ebx + 0xe8], al */
  W8((uint32_t)(ebx + 0xe8u), (eax & 0xffu));
/* f4f2ff: mov cl, byte ptr [ebp + 0xe9] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xe9u))) & 0xffu);
/* f4f305: mov byte ptr [ebx + 0xe9], cl */
  W8((uint32_t)(ebx + 0xe9u), (ecx & 0xffu));
/* f4f30b: mov dl, byte ptr [ebp + 0xea] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xeau))) & 0xffu);
/* f4f311: mov byte ptr [ebx + 0xea], dl */
  W8((uint32_t)(ebx + 0xeau), (edx & 0xffu));
/* f4f317: mov al, byte ptr [ebp + 0xeb] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xebu))) & 0xffu);
/* f4f31d: mov byte ptr [ebx + 0xeb], al */
  W8((uint32_t)(ebx + 0xebu), (eax & 0xffu));
/* f4f323: mov cl, byte ptr [ebp + 0xec] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xecu))) & 0xffu);
/* f4f329: mov byte ptr [ebx + 0xec], cl */
  W8((uint32_t)(ebx + 0xecu), (ecx & 0xffu));
/* f4f32f: mov dl, byte ptr [ebp + 0xed] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xedu))) & 0xffu);
/* f4f335: mov byte ptr [ebx + 0xed], dl */
  W8((uint32_t)(ebx + 0xedu), (edx & 0xffu));
/* f4f33b: mov al, byte ptr [ebp + 0xee] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xeeu))) & 0xffu);
/* f4f341: mov byte ptr [ebx + 0xee], al */
  W8((uint32_t)(ebx + 0xeeu), (eax & 0xffu));
/* f4f347: mov cl, byte ptr [ebp + 0xef] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xefu))) & 0xffu);
/* f4f34d: mov byte ptr [ebx + 0xef], cl */
  W8((uint32_t)(ebx + 0xefu), (ecx & 0xffu));
/* f4f353: mov dl, byte ptr [ebp + 0xf0] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xf0u))) & 0xffu);
/* f4f359: mov byte ptr [ebx + 0xf0], dl */
  W8((uint32_t)(ebx + 0xf0u), (edx & 0xffu));
/* f4f35f: mov eax, dword ptr [ebp + 0xf4] */
  eax = R32((uint32_t)(ebp + 0xf4u));
/* f4f365: mov dword ptr [ebx + 0xf4], eax */
  W32((uint32_t)(ebx + 0xf4u), eax);
/* f4f36b: mov ecx, dword ptr [ebp + 0xf8] */
  ecx = R32((uint32_t)(ebp + 0xf8u));
/* f4f371: lea edx, [ebp + 0xfc] */
  edx = (uint32_t)(ebp + 0xfcu);
/* f4f377: mov dword ptr [ebx + 0xf8], ecx */
  W32((uint32_t)(ebx + 0xf8u), ecx);
/* f4f37d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f4f37e: lea ecx, [ebx + 0xfc] */
  ecx = (uint32_t)(ebx + 0xfcu);
/* f4f384: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* f4f38c: call 0xf411f9 */
  esp -= 4; W32(esp, 0xf4f391u); SPILL(); f_f411f9(); if (g_unwind) return; RELOAD();
/* f4f391: mov eax, dword ptr [ebp + 0x108] */
  eax = R32((uint32_t)(ebp + 0x108u));
/* f4f397: mov dword ptr [ebx + 0x108], eax */
  W32((uint32_t)(ebx + 0x108u), eax);
/* f4f39d: lea esi, [ebp + 0x10c] */
  esi = (uint32_t)(ebp + 0x10cu);
/* f4f3a3: lea edi, [ebx + 0x10c] */
  edi = (uint32_t)(ebx + 0x10cu);
/* f4f3a9: mov ecx, 0x101 */
  ecx = 0x101u;
/* f4f3ae: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* f4f3b0: mov cl, byte ptr [ebp + 0x510] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x510u))) & 0xffu);
/* f4f3b6: mov byte ptr [ebx + 0x510], cl */
  W8((uint32_t)(ebx + 0x510u), (ecx & 0xffu));
/* f4f3bc: mov dl, byte ptr [ebp + 0x511] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x511u))) & 0xffu);
/* f4f3c2: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* f4f3c6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f4f3c7: mov byte ptr [ebx + 0x511], dl */
  W8((uint32_t)(ebx + 0x511u), (edx & 0xffu));
/* f4f3cd: mov al, byte ptr [ebp + 0x512] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x512u))) & 0xffu);
/* f4f3d3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4f3d4: mov byte ptr [ebx + 0x512], al */
  W8((uint32_t)(ebx + 0x512u), (eax & 0xffu));
/* f4f3da: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f4f3db: mov eax, ebx */
  eax = ebx;
/* f4f3dd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f4f3de: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f4f3e5: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4f3e8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f4f450(void) {
  LOAD_REGS();
L_f4f450: /* f4f450: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f4f451: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4f452: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4f453: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* f4f457: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4f458: mov esi, ecx */
  esi = ecx;
/* f4f45a: call 0xf410a5 */
  esp -= 4; W32(esp, 0xf4f45fu); SPILL(); f_f410a5(); if (g_unwind) return; RELOAD();
/* f4f45f: mov al, byte ptr [edi + 0xe0] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0xe0u))) & 0xffu);
/* f4f465: mov ebp, dword ptr [esi + 0xe4] */
  ebp = R32((uint32_t)(esi + 0xe4u));
/* f4f46b: mov byte ptr [esi + 0xe0], al */
  W8((uint32_t)(esi + 0xe0u), (eax & 0xffu));
/* f4f471: mov cl, byte ptr [edi + 0xe1] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0xe1u))) & 0xffu);
/* f4f477: mov byte ptr [esi + 0xe1], cl */
  W8((uint32_t)(esi + 0xe1u), (ecx & 0xffu));
/* f4f47d: mov edx, dword ptr [edi + 0xe4] */
  edx = R32((uint32_t)(edi + 0xe4u));
/* f4f483: xor edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f4f485: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f4f488: mov eax, ebp */
  eax = ebp;
/* f4f48a: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f4f48c: mov dword ptr [esi + 0xe4], eax */
  W32((uint32_t)(esi + 0xe4u), eax);
/* f4f492: mov al, byte ptr [edi + 0xe8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0xe8u))) & 0xffu);
/* f4f498: mov byte ptr [esi + 0xe8], al */
  W8((uint32_t)(esi + 0xe8u), (eax & 0xffu));
/* f4f49e: mov cl, byte ptr [edi + 0xe9] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0xe9u))) & 0xffu);
/* f4f4a4: mov byte ptr [esi + 0xe9], cl */
  W8((uint32_t)(esi + 0xe9u), (ecx & 0xffu));
/* f4f4aa: mov dl, byte ptr [edi + 0xea] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0xeau))) & 0xffu);
/* f4f4b0: mov byte ptr [esi + 0xea], dl */
  W8((uint32_t)(esi + 0xeau), (edx & 0xffu));
/* f4f4b6: mov al, byte ptr [edi + 0xeb] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0xebu))) & 0xffu);
/* f4f4bc: mov byte ptr [esi + 0xeb], al */
  W8((uint32_t)(esi + 0xebu), (eax & 0xffu));
/* f4f4c2: mov cl, byte ptr [edi + 0xec] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0xecu))) & 0xffu);
/* f4f4c8: mov byte ptr [esi + 0xec], cl */
  W8((uint32_t)(esi + 0xecu), (ecx & 0xffu));
/* f4f4ce: mov dl, byte ptr [edi + 0xed] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0xedu))) & 0xffu);
/* f4f4d4: mov byte ptr [esi + 0xed], dl */
  W8((uint32_t)(esi + 0xedu), (edx & 0xffu));
/* f4f4da: mov al, byte ptr [edi + 0xee] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0xeeu))) & 0xffu);
/* f4f4e0: mov byte ptr [esi + 0xee], al */
  W8((uint32_t)(esi + 0xeeu), (eax & 0xffu));
/* f4f4e6: mov cl, byte ptr [edi + 0xef] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0xefu))) & 0xffu);
/* f4f4ec: mov byte ptr [esi + 0xef], cl */
  W8((uint32_t)(esi + 0xefu), (ecx & 0xffu));
/* f4f4f2: mov dl, byte ptr [edi + 0xf0] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0xf0u))) & 0xffu);
/* f4f4f8: mov byte ptr [esi + 0xf0], dl */
  W8((uint32_t)(esi + 0xf0u), (edx & 0xffu));
/* f4f4fe: mov eax, dword ptr [edi + 0xf4] */
  eax = R32((uint32_t)(edi + 0xf4u));
/* f4f504: mov dword ptr [esi + 0xf4], eax */
  W32((uint32_t)(esi + 0xf4u), eax);
/* f4f50a: mov ecx, dword ptr [edi + 0xf8] */
  ecx = R32((uint32_t)(edi + 0xf8u));
/* f4f510: lea edx, [edi + 0xfc] */
  edx = (uint32_t)(edi + 0xfcu);
/* f4f516: mov dword ptr [esi + 0xf8], ecx */
  W32((uint32_t)(esi + 0xf8u), ecx);
/* f4f51c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f4f51d: lea ecx, [esi + 0xfc] */
  ecx = (uint32_t)(esi + 0xfcu);
/* f4f523: call 0xf41172 */
  esp -= 4; W32(esp, 0xf4f528u); SPILL(); f_f41172(); if (g_unwind) return; RELOAD();
/* f4f528: mov eax, dword ptr [edi + 0x108] */
  eax = R32((uint32_t)(edi + 0x108u));
/* f4f52e: mov ecx, edi */
  ecx = edi;
/* f4f530: mov dword ptr [esi + 0x108], eax */
  W32((uint32_t)(esi + 0x108u), eax);
/* f4f536: lea eax, [esi + 0x10c] */
  eax = (uint32_t)(esi + 0x10cu);
/* f4f53c: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* f4f53e: mov ebp, 0x404 */
  ebp = 0x404u;
L_f4f543: /* f4f543: mov dl, byte ptr [ecx + eax] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + eax))) & 0xffu);
/* f4f546: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* f4f548: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f4f549: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* f4f54a: jne 0xf4f543 */
  if (!zf) goto L_f4f543;
L_f4f54c: /* f4f54c: mov al, byte ptr [edi + 0x510] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x510u))) & 0xffu);
/* f4f552: mov byte ptr [esi + 0x510], al */
  W8((uint32_t)(esi + 0x510u), (eax & 0xffu));
/* f4f558: mov cl, byte ptr [edi + 0x511] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x511u))) & 0xffu);
/* f4f55e: mov byte ptr [esi + 0x511], cl */
  W8((uint32_t)(esi + 0x511u), (ecx & 0xffu));
/* f4f564: mov dl, byte ptr [edi + 0x512] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x512u))) & 0xffu);
/* f4f56a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f4f56b: mov byte ptr [esi + 0x512], dl */
  W8((uint32_t)(esi + 0x512u), (edx & 0xffu));
/* f4f571: mov eax, esi */
  eax = esi;
/* f4f573: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4f574: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f4f575: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f4f5d0(void) {
  LOAD_REGS();
L_f4f5d0: /* f4f5d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4f5d1: mov esi, ecx */
  esi = ecx;
/* f4f5d3: call 0xf41055 */
  esp -= 4; W32(esp, 0xf4f5d8u); SPILL(); f_f41055(); if (g_unwind) return; RELOAD();
/* f4f5d8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f4f5dd: je 0xf4f5ee */
  if (zf) goto L_f4f5ee;
L_f4f5df: /* f4f5df: push 0x514 */
  { uint32_t v = 0x514u; esp -= 4; W32(esp, v); }
/* f4f5e4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4f5e5: call dword ptr [0xf60358] */
  esp -= 4; W32(esp, 0xf4f5ebu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f4f5eb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f4f5ee: /* f4f5ee: mov eax, esi */
  eax = esi;
/* f4f5f0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4f5f1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f4f610(void) {
  LOAD_REGS();
L_f4f610: /* f4f610: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4f611: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* f4f615: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f4f618: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4f619: mov esi, ecx */
  esi = ecx;
/* f4f61b: je 0xf4f650 */
  if (zf) goto L_f4f650;
L_f4f61d: /* f4f61d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* f4f620: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4f621: push 0xf41055 */
  { uint32_t v = 0xf41055u; esp -= 4; W32(esp, v); }
/* f4f626: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* f4f629: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4f62a: push 0x514 */
  { uint32_t v = 0x514u; esp -= 4; W32(esp, v); }
/* f4f62f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4f630: call 0xf4fb95 */
  esp -= 4; W32(esp, 0xf4f635u); SPILL(); f_f4fb95(); if (g_unwind) return; RELOAD();
/* f4f635: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f4f638: je 0xf4f648 */
  if (zf) goto L_f4f648;
L_f4f63a: /* f4f63a: mov ecx, dword ptr [0xf602d4] */
  ecx = R32((uint32_t)(0xf602d4u));
/* f4f640: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* f4f642: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f4f644: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4f645: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xf4f648u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f4f648: /* f4f648: mov eax, edi */
  eax = edi;
/* f4f64a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f4f64b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4f64c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f4f64d: ret 4 */
  esp += 8; SPILL(); return;
L_f4f650: /* f4f650: mov ecx, esi */
  ecx = esi;
/* f4f652: call 0xf41055 */
  esp -= 4; W32(esp, 0xf4f657u); SPILL(); f_f41055(); if (g_unwind) return; RELOAD();
/* f4f657: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f4f65a: je 0xf4f66b */
  if (zf) goto L_f4f66b;
L_f4f65c: /* f4f65c: push 0x514 */
  { uint32_t v = 0x514u; esp -= 4; W32(esp, v); }
/* f4f661: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4f662: call dword ptr [0xf60358] */
  esp -= 4; W32(esp, 0xf4f668u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f4f668: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f4f66b: /* f4f66b: mov eax, esi */
  eax = esi;
/* f4f66d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4f66e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f4f66f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f4f6a0(void) {
  LOAD_REGS();
L_f4f6a0: /* f4f6a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4f6a1: mov esi, ecx */
  esi = ecx;
/* f4f6a3: call 0xf411c7 */
  esp -= 4; W32(esp, 0xf4f6a8u); SPILL(); f_f411c7(); if (g_unwind) return; RELOAD();
/* f4f6a8: xor eax, eax */
  eax = 0;
/* f4f6aa: mov dword ptr [esi], 0xf560b0 */
  W32((uint32_t)(esi), 0xf560b0u);
/* f4f6b0: mov dword ptr [esi + 0xfc], eax */
  W32((uint32_t)(esi + 0xfcu), eax);
/* f4f6b6: mov dword ptr [esi + 0x100], eax */
  W32((uint32_t)(esi + 0x100u), eax);
/* f4f6bc: mov dword ptr [esi + 0x104], eax */
  W32((uint32_t)(esi + 0x104u), eax);
/* f4f6c2: mov byte ptr [esi + 0xdd], al */
  W8((uint32_t)(esi + 0xddu), (eax & 0xffu));
/* f4f6c8: mov dword ptr [esi + 0x108], 0xffffffff */
  W32((uint32_t)(esi + 0x108u), 0xffffffffu);
/* f4f6d2: mov byte ptr [esi + 0x510], 1 */
  W8((uint32_t)(esi + 0x510u), 0x1u);
/* f4f6d9: mov eax, esi */
  eax = esi;
/* f4f6db: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4f6dc: ret  */
  esp += 4; SPILL(); return;
}

void f_f4f6f0(void) {
  LOAD_REGS();
L_f4f6f0: /* f4f6f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f4f6f1: mov ebp, esp */
  ebp = esp;
/* f4f6f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f4f6f5: push 0xf51350 */
  { uint32_t v = 0xf51350u; esp -= 4; W32(esp, v); }
/* f4f6fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f4f700: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4f701: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f4f708: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f4f70b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4f70c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* f4f70f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4f710: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4f711: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f4f714: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4f715: mov esi, ecx */
  esi = ecx;
/* f4f717: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f4f71e: call dword ptr [0xf60464] */
  esp -= 4; W32(esp, 0xf4f724u); SPILL(); f_6c5da3(); if (g_unwind) return; /* Engine!?Serialize@UTexture@@UAEXAAVFArchive@@@Z */ RELOAD();
/* f4f724: mov eax, dword ptr [ebx + 0x14] */
  eax = R32((uint32_t)(ebx + 0x14u));
/* f4f727: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4f729: je 0xf4f77e */
  if (zf) goto L_f4f77e;
L_f4f72b: /* f4f72b: mov ecx, dword ptr [esi + 0xf8] */
  ecx = R32((uint32_t)(esi + 0xf8u));
L_f4f731: /* f4f731: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* f4f732: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f4f734: jl 0xf4f75f */
  if ((sf != of)) goto L_f4f75f;
L_f4f736: /* f4f736: mov eax, dword ptr [esi + 0xfc] */
  eax = R32((uint32_t)(esi + 0xfcu));
/* f4f73c: cmp byte ptr [eax + ecx*8], 0x1f */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + ecx*8))); uint8_t b = (uint8_t)(0x1fu);
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* f4f740: jb 0xf4f731 */
  if (cf) goto L_f4f731;
L_f4f742: /* f4f742: mov edx, dword ptr [esi + 0xf8] */
  edx = R32((uint32_t)(esi + 0xf8u));
/* f4f748: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* f4f749: mov dword ptr [esi + 0xf8], edx */
  W32((uint32_t)(esi + 0xf8u), edx);
/* f4f74f: mov edi, dword ptr [eax + edx*8] */
  edi = R32((uint32_t)(eax + edx*8));
/* f4f752: mov dword ptr [eax + ecx*8], edi */
  W32((uint32_t)(eax + ecx*8), edi);
/* f4f755: mov edx, dword ptr [eax + edx*8 + 4] */
  edx = R32((uint32_t)(eax + edx*8 + 0x4u));
/* f4f759: mov dword ptr [eax + ecx*8 + 4], edx */
  W32((uint32_t)(eax + ecx*8 + 0x4u), edx);
/* f4f75d: jmp 0xf4f731 */
  goto L_f4f731;
L_f4f75f: /* f4f75f: mov eax, dword ptr [esi + 0x100] */
  eax = R32((uint32_t)(esi + 0x100u));
/* f4f765: mov ecx, dword ptr [esi + 0xf8] */
  ecx = R32((uint32_t)(esi + 0xf8u));
/* f4f76b: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4f76d: jge 0xf4f77e */
  if ((sf == of)) goto L_f4f77e;
L_f4f76f: /* f4f76f: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f4f771: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4f772: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f4f773: lea ecx, [esi + 0xfc] */
  ecx = (uint32_t)(esi + 0xfcu);
/* f4f779: call 0xf411fe */
  esp -= 4; W32(esp, 0xf4f77eu); SPILL(); f_f411fe(); if (g_unwind) return; RELOAD();
L_f4f77e: /* f4f77e: lea edi, [esi + 0xfc] */
  edi = (uint32_t)(esi + 0xfcu);
/* f4f784: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4f785: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4f786: call 0xf41181 */
  esp -= 4; W32(esp, 0xf4f78bu); SPILL(); f_f41181(); if (g_unwind) return; RELOAD();
/* f4f78b: mov eax, dword ptr [esi + 0x100] */
  eax = R32((uint32_t)(esi + 0x100u));
/* f4f791: mov esi, dword ptr [esi + 0xf4] */
  esi = R32((uint32_t)(esi + 0xf4u));
/* f4f797: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4f79a: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4f79c: jge 0xf4f7ab */
  if ((sf == of)) goto L_f4f7ab;
L_f4f79e: /* f4f79e: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* f4f7a0: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* f4f7a2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4f7a3: mov ecx, edi */
  ecx = edi;
/* f4f7a5: call dword ptr [0xf602e8] */
  esp -= 4; W32(esp, 0xf4f7abu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
L_f4f7ab: /* f4f7ab: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f4f7ae: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f4f7af: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4f7b0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f4f7b7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f4f7b8: mov esp, ebp */
  esp = ebp;
/* f4f7ba: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f4f7bb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f4f7be(void) {
  LOAD_REGS();
L_f4f7be: /* f4f7be: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* f4f7c1: push 0xf56aa4 */
  { uint32_t v = 0xf56aa4u; esp -= 4; W32(esp, v); }
/* f4f7c6: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* f4f7c9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f4f7ca: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* f4f7cd: call 0xf4fa48 */
  esp -= 4; W32(esp, 0xf4f7d2u); SPILL(); f_f4fa48(); if (g_unwind) return; RELOAD();
  SPILL(); f_f4f7d2(); return;
}

void f_f4f7d2(void) {
  LOAD_REGS();
L_f4f7d2: /* f4f7d2: push 0xf561a4 */
  { uint32_t v = 0xf561a4u; esp -= 4; W32(esp, v); }
/* f4f7d7: push 0xf5b990 */
  { uint32_t v = 0xf5b990u; esp -= 4; W32(esp, v); }
/* f4f7dc: call dword ptr [0xf602d8] */
  esp -= 4; W32(esp, 0xf4f7e2u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f4f7e2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4f7e5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f4f7e7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f4f7e9: call 0xf4fa48 */
  esp -= 4; W32(esp, 0xf4f7eeu); SPILL(); f_f4fa48(); if (g_unwind) return; RELOAD();
L_f4f7ee: guest_badaddr(0xf4f7ee); return;
}

void f_f4f830(void) {
  LOAD_REGS();
L_f4f830: /* f4f830: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* f4f834: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4f836: je 0xf4f83d */
  if (zf) goto L_f4f83d;
L_f4f838: /* f4f838: jmp 0xf41159 */
  SPILL(); f_f41159(); return;
L_f4f83d: /* f4f83d: ret  */
  esp += 4; SPILL(); return;
}

void f_f4f844(void) {
  LOAD_REGS();
L_f4f844: /* f4f844: jmp dword ptr [0xf602d8] */
  SPILL(); f_4e3f49(); return; /* Core!?appUnwindf@@YAXPBGZZ */
}

void f_f4f84a(void) {
  LOAD_REGS();
L_f4f84a: /* f4f84a: jmp dword ptr [0xf602dc] */
  SPILL(); f_4e1807(); return; /* Core!?appCos@@YANN@Z */
}

void f_f4f850(void) {
  LOAD_REGS();
L_f4f850: /* f4f850: jmp dword ptr [0xf602e0] */
  SPILL(); f_4e15aa(); return; /* Core!?appRound@@YAHM@Z */
}

void f_f4f856(void) {
  LOAD_REGS();
L_f4f856: /* f4f856: jmp dword ptr [0xf602e4] */
  SPILL(); f_4e3e0e(); return; /* Core!?appSin@@YANN@Z */
}

void f_f4f85c(void) {
  LOAD_REGS();
L_f4f85c: /* f4f85c: jmp dword ptr [0xf602e8] */
  SPILL(); f_4e2955(); return; /* Core!?Add@FArray@@QAEHHH@Z */
}

void f_f4f862(void) {
  LOAD_REGS();
L_f4f862: /* f4f862: jmp dword ptr [0xf602ec] */
  SPILL(); f_4e44b2(); return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */
}

void f_f4f868(void) {
  LOAD_REGS();
L_f4f868: /* f4f868: jmp dword ptr [0xf602f0] */
  SPILL(); f_4e2252(); return; /* Core!?StaticFindObjectChecked@UObject@@SAPAV1@PAVUClass@@PAV1@PBGH@Z */
}

void f_f4f86e(void) {
  LOAD_REGS();
L_f4f86e: /* f4f86e: jmp dword ptr [0xf602f8] */
  SPILL(); f_4e2b1c(); return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */
}

void f_f4f874(void) {
  LOAD_REGS();
L_f4f874: /* f4f874: jmp dword ptr [0xf60300] */
  SPILL(); f_4e18b1(); return; /* Core!?NetDirty@UObject@@UAEXPAVUProperty@@@Z */
}

void f_f4f87a(void) {
  LOAD_REGS();
L_f4f87a: /* f4f87a: jmp dword ptr [0xf60304] */
  SPILL(); f_4e2d42(); return; /* Core!?Rename@UObject@@UAEXPBGPAV1@@Z */
}

void f_f4f880(void) {
  LOAD_REGS();
L_f4f880: /* f4f880: jmp dword ptr [0xf60308] */
  SPILL(); f_4e2608(); return; /* Core!?LanguageChange@UObject@@UAEXXZ */
}

void f_f4f886(void) {
  LOAD_REGS();
L_f4f886: /* f4f886: jmp dword ptr [0xf6030c] */
  SPILL(); f_4e22ca(); return; /* Core!?Register@UObject@@UAEXXZ */
}

void f_f4f88c(void) {
  LOAD_REGS();
L_f4f88c: /* f4f88c: jmp dword ptr [0xf60310] */
  SPILL(); f_4e1636(); return; /* Core!?ScriptConsoleExec@UObject@@UAEHPBGAAVFOutputDevice@@PAV1@@Z */
}

void f_f4f892(void) {
  LOAD_REGS();
L_f4f892: /* f4f892: jmp dword ptr [0xf60314] */
  SPILL(); f_4e1271(); return; /* Core!?CallFunction@UObject@@UAEXAAUFFrame@@QAXPAVUFunction@@@Z */
}

void f_f4f898(void) {
  LOAD_REGS();
L_f4f898: /* f4f898: jmp dword ptr [0xf60318] */
  SPILL(); f_4e1f82(); return; /* Core!?PostEditUndo@UObject@@UAEXXZ */
}

void f_f4f89e(void) {
  LOAD_REGS();
L_f4f89e: /* f4f89e: jmp dword ptr [0xf6031c] */
  SPILL(); f_4e3a67(); return; /* Core!?PreEditUndo@UObject@@UAEXXZ */
}

void f_f4f8a4(void) {
  LOAD_REGS();
L_f4f8a4: /* f4f8a4: jmp dword ptr [0xf60320] */
  SPILL(); f_4e25c7(); return; /* Core!?ShutdownAfterError@UObject@@UAEXXZ */
}

void f_f4f8aa(void) {
  LOAD_REGS();
L_f4f8aa: /* f4f8aa: jmp dword ptr [0xf60324] */
  SPILL(); f_4e2dd8(); return; /* Core!?InitExecution@UObject@@UAEXXZ */
}

void f_f4f8b0(void) {
  LOAD_REGS();
L_f4f8b0: /* f4f8b0: jmp dword ptr [0xf60328] */
  SPILL(); f_4e2db5(); return; /* Core!?GotoLabel@UObject@@UAEHVFName@@@Z */
}

void f_f4f8b6(void) {
  LOAD_REGS();
L_f4f8b6: /* f4f8b6: jmp dword ptr [0xf6032c] */
  SPILL(); f_4e3738(); return; /* Core!?GotoState@UObject@@UAE?AW4EGotoState@@VFName@@@Z */
}

void f_f4f8bc(void) {
  LOAD_REGS();
L_f4f8bc: /* f4f8bc: jmp dword ptr [0xf60330] */
  SPILL(); f_4e2e19(); return; /* Core!?IsPendingKill@UObject@@UAEHXZ */
}

void f_f4f8c2(void) {
  LOAD_REGS();
L_f4f8c2: /* f4f8c2: jmp dword ptr [0xf60334] */
  SPILL(); f_4e4318(); return; /* Core!?Modify@UObject@@UAEXXZ */
}

void f_f4f8c8(void) {
  LOAD_REGS();
L_f4f8c8: /* f4f8c8: jmp dword ptr [0xf60338] */
  SPILL(); f_4e222f(); return; /* Core!?ProcessRemoteFunction@UObject@@UAEHPAVUFunction@@PAXPAUFFrame@@@Z */
}

void f_f4f8ce(void) {
  LOAD_REGS();
L_f4f8ce: /* f4f8ce: jmp dword ptr [0xf6033c] */
  SPILL(); f_4e358f(); return; /* Core!?ProcessState@UObject@@UAEXM@Z */
}

void f_f4f8d4(void) {
  LOAD_REGS();
L_f4f8d4: /* f4f8d4: jmp dword ptr [0xf60340] */
  SPILL(); f_4e2a81(); return; /* Core!?ProcessDelegate@UObject@@UAEXVFName@@PAUFScriptDelegate@@PAX2@Z */
}

void f_f4f8da(void) {
  LOAD_REGS();
L_f4f8da: /* f4f8da: jmp dword ptr [0xf60344] */
  SPILL(); f_4e3954(); return; /* Core!?ProcessEvent@UObject@@UAEXPAVUFunction@@PAX1@Z */
}

void f_f4f8e0(void) {
  LOAD_REGS();
L_f4f8e0: /* f4f8e0: jmp dword ptr [0xf60348] */
  SPILL(); f_4e3bb6(); return; /* Core!?Release@UObject@@UAGKXZ */
}

void f_f4f8e6(void) {
  LOAD_REGS();
L_f4f8e6: /* f4f8e6: jmp dword ptr [0xf6034c] */
  SPILL(); f_4e33a0(); return; /* Core!?AddRef@UObject@@UAGKXZ */
}

void f_f4f8ec(void) {
  LOAD_REGS();
L_f4f8ec: /* f4f8ec: jmp dword ptr [0xf60350] */
  SPILL(); f_4e42aa(); return; /* Core!?QueryInterface@UObject@@UAGKABVFGuid@@PAPAX@Z */
}

void f_f4f8f2(void) {
  LOAD_REGS();
L_f4f8f2: /* f4f8f2: jmp dword ptr [0xf60354] */
  SPILL(); f_4e2559(); return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */
}

void f_f4f8f8(void) {
  LOAD_REGS();
L_f4f8f8: /* f4f8f8: jmp dword ptr [0xf60358] */
  SPILL(); f_4e3fb2(); return; /* Core!??3UObject@@SAXPAXI@Z */
}

void f_f4f8fe(void) {
  LOAD_REGS();
L_f4f8fe: /* f4f8fe: jmp dword ptr [0xf6035c] */
  SPILL(); f_4e40e8(); return; /* Core!??6@YAAAVFArchive@@AAV0@AAE@Z */
}

void f_f4f904(void) {
  LOAD_REGS();
L_f4f904: /* f4f904: jmp dword ptr [0xf60360] */
  SPILL(); f_4e3d0f(); return; /* Core!?appRand@@YAHXZ */
}

void f_f4f90a(void) {
  LOAD_REGS();
L_f4f90a: /* f4f90a: jmp dword ptr [0xf60364] */
  SPILL(); f_4e1d11(); return; /* Core!?PostEditChange@UObject@@UAEXXZ */
}

void f_f4f910(void) {
  LOAD_REGS();
L_f4f910: /* f4f910: jmp dword ptr [0xf60368] */
  SPILL(); f_4e2a9a(); return; /* Core!?Destroy@UObject@@UAEXXZ */
}

void f_f4f916(void) {
  LOAD_REGS();
L_f4f916: /* f4f916: jmp dword ptr [0xf6036c] */
  SPILL(); f_4e4110(); return; /* Core!?PostLoad@UObject@@UAEXXZ */
}

void f_f4f91c(void) {
  LOAD_REGS();
L_f4f91c: /* f4f91c: jmp dword ptr [0xf60370] */
  SPILL(); f_4e2725(); return; /* Core!?Flush@FMemCache@@QAEX_KKH@Z */
}

void f_f4f922(void) {
  LOAD_REGS();
L_f4f922: /* f4f922: jmp dword ptr [0xf60374] */
  SPILL(); f_4e36a7(); return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */
}

void f_f4f928(void) {
  LOAD_REGS();
L_f4f928: /* f4f928: jmp dword ptr [0xf60378] */
  SPILL(); f_4e2351(); return; /* Core!?GetName@UObject@@QBEPBGXZ */
}

void f_f4f92e(void) {
  LOAD_REGS();
L_f4f92e: /* f4f92e: jmp dword ptr [0xf6037c] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_f4f934(void) {
  LOAD_REGS();
L_f4f934: /* f4f934: jmp dword ptr [0xf60380] */
  SPILL(); f_4e4502(); return; /* Core!?Realloc@FArray@@IAEXH@Z */
}

void f_f4f93a(void) {
  LOAD_REGS();
L_f4f93a: /* f4f93a: jmp dword ptr [0xf60384] */
  SPILL(); f_4e438b(); return; /* Core!?Remove@FArray@@QAEXHHH@Z */
}

void f_f4f940(void) {
  LOAD_REGS();
L_f4f940: /* f4f940: jmp dword ptr [0xf60388] */
  SPILL(); f_4e33a5(); return; /* Core!?appFailAssert@@YAXPBD0H@Z */
}

void f_f4f946(void) {
  LOAD_REGS();
L_f4f946: /* f4f946: jmp dword ptr [0xf6038c] */
  SPILL(); f_4e2d4c(); return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */
}

void f_f4f94c(void) {
  LOAD_REGS();
L_f4f94c: /* f4f94c: jmp dword ptr [0xf60390] */
  SPILL(); f_4e26df(); return; /* Core!?appStricmp@@YAHPBG0@Z */
}

void f_f4f952(void) {
  LOAD_REGS();
L_f4f952: /* f4f952: jmp dword ptr [0xf60394] */
  SPILL(); f_4e2f2c(); return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */
}

void f_f4f958(void) {
  LOAD_REGS();
L_f4f958: /* f4f958: jmp dword ptr [0xf60398] */
  SPILL(); f_4e353f(); return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */
}

void f_f4f95e(void) {
  LOAD_REGS();
L_f4f95e: /* f4f95e: jmp dword ptr [0xf6039c] */
  SPILL(); f_4e1735(); return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */
}

void f_f4f964(void) {
  LOAD_REGS();
L_f4f964: /* f4f964: jmp dword ptr [0xf603a0] */
  SPILL(); f_4e3f3f(); return; /* Core!?StaticConstructor@UObject@@QAEXXZ */
}

void f_f4f96a(void) {
  LOAD_REGS();
L_f4f96a: /* f4f96a: jmp dword ptr [0xf603a8] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_f4f970(void) {
  LOAD_REGS();
L_f4f970: /* f4f970: jmp dword ptr [0xf60404] */
  SPILL(); f_6c85cb(); return; /* Engine!?PostLoad@UTexture@@UAEXXZ */
}

void f_f4f976(void) {
  LOAD_REGS();
L_f4f976: /* f4f976: jmp dword ptr [0xf60408] */
  SPILL(); f_6c87c9(); return; /* Engine!?Clear@UTexture@@UAEXK@Z */
}

void f_f4f97c(void) {
  LOAD_REGS();
L_f4f97c: /* f4f97c: jmp dword ptr [0xf6040c] */
  SPILL(); f_6c7db0(); return; /* Engine!?Destroy@UTexture@@UAEXXZ */
}

void f_f4f982(void) {
  LOAD_REGS();
L_f4f982: /* f4f982: jmp dword ptr [0xf60410] */
  SPILL(); f_6c6361(); return; /* Engine!?ArithOp@UTexture@@UAEXPAV1@W4ETextureArithOp@@@Z */
}

void f_f4f988(void) {
  LOAD_REGS();
L_f4f988: /* f4f988: jmp dword ptr [0xf60414] */
  SPILL(); f_6c9c6e(); return; /* Engine!?Update@UTexture@@UAEXN@Z */
}

void f_f4f98e(void) {
  LOAD_REGS();
L_f4f98e: /* f4f98e: jmp dword ptr [0xf60418] */
  SPILL(); f_6c2c93(); return; /* Engine!?Click@UTexture@@UAEXKMM@Z */
}

void f_f4f994(void) {
  LOAD_REGS();
L_f4f994: /* f4f994: jmp dword ptr [0xf6041c] */
  SPILL(); f_6c771b(); return; /* Engine!?MousePosition@UTexture@@UAEXKMM@Z */
}

void f_f4f99a(void) {
  LOAD_REGS();
L_f4f99a: /* f4f99a: jmp dword ptr [0xf60420] */
  SPILL(); f_6c457a(); return; /* Engine!?ConstantTimeTick@UTexture@@UAEXXZ */
}

void f_f4f9a0(void) {
  LOAD_REGS();
L_f4f9a0: /* f4f9a0: jmp dword ptr [0xf60424] */
  SPILL(); f_6c74dc(); return; /* Engine!?Tick@UTexture@@UAEXM@Z */
}

void f_f4f9a6(void) {
  LOAD_REGS();
L_f4f9a6: /* f4f9a6: jmp dword ptr [0xf60428] */
  SPILL(); f_6c1b13(); return; /* Engine!?Clear@UTexture@@UAEXVFColor@@@Z */
}

void f_f4f9ac(void) {
  LOAD_REGS();
L_f4f9ac: /* f4f9ac: jmp dword ptr [0xf6042c] */
  SPILL(); f_6c8652(); return; /* Engine!?Get@UTexture@@UAEPAVUBitmapMaterial@@NPAVUViewport@@@Z */
}

void f_f4f9b2(void) {
  LOAD_REGS();
L_f4f9b2: /* f4f9b2: jmp dword ptr [0xf60430] */
  SPILL(); f_6ca862(); return; /* Engine!?GetRenderInterface@UTexture@@UAEPAVFBaseTexture@@XZ */
}

void f_f4f9b8(void) {
  LOAD_REGS();
L_f4f9b8: /* f4f9b8: jmp dword ptr [0xf60434] */
  SPILL(); f_6c854e(); return; /* Engine!?HasFallback@UMaterial@@UAEHXZ */
}

void f_f4f9be(void) {
  LOAD_REGS();
L_f4f9be: /* f4f9be: jmp dword ptr [0xf60438] */
  SPILL(); f_6c82d3(); return; /* Engine!?CheckFallback@UMaterial@@UAEPAV1@XZ */
}

void f_f4f9c4(void) {
  LOAD_REGS();
L_f4f9c4: /* f4f9c4: jmp dword ptr [0xf6043c] */
  SPILL(); f_6c4cd7(); return; /* Engine!?RequiresNormal@UMaterial@@UAEHXZ */
}

void f_f4f9ca(void) {
  LOAD_REGS();
L_f4f9ca: /* f4f9ca: jmp dword ptr [0xf60440] */
  SPILL(); f_6c27fc(); return; /* Engine!?RequiredUVStreams@UMaterial@@UAEEXZ */
}

void f_f4f9d0(void) {
  LOAD_REGS();
L_f4f9d0: /* f4f9d0: jmp dword ptr [0xf60444] */
  SPILL(); f_6cc5e5(); return; /* Engine!?IsTransparent@UTexture@@UAEHXZ */
}

void f_f4f9d6(void) {
  LOAD_REGS();
L_f4f9d6: /* f4f9d6: jmp dword ptr [0xf60448] */
  SPILL(); f_6c1cf8(); return; /* Engine!?RequiresSorting@UTexture@@UAEHXZ */
}

void f_f4f9dc(void) {
  LOAD_REGS();
L_f4f9dc: /* f4f9dc: jmp dword ptr [0xf6044c] */
  SPILL(); f_6cb2da(); return; /* Engine!?MaterialVSize@UBitmapMaterial@@UAEHXZ */
}

void f_f4f9e2(void) {
  LOAD_REGS();
L_f4f9e2: /* f4f9e2: jmp dword ptr [0xf60450] */
  SPILL(); f_6cbf0f(); return; /* Engine!?MaterialUSize@UBitmapMaterial@@UAEHXZ */
}

void f_f4f9e8(void) {
  LOAD_REGS();
L_f4f9e8: /* f4f9e8: jmp dword ptr [0xf60454] */
  SPILL(); f_6ccfd6(); return; /* Engine!?PreSetMaterial@UMaterial@@UAEXM@Z */
}

void f_f4f9ee(void) {
  LOAD_REGS();
L_f4f9ee: /* f4f9ee: jmp dword ptr [0xf60458] */
  SPILL(); f_6c8a3f(); return; /* Engine!?SetValidated@UMaterial@@UAEXH@Z */
}

void f_f4f9f4(void) {
  LOAD_REGS();
L_f4f9f4: /* f4f9f4: jmp dword ptr [0xf6045c] */
  SPILL(); f_6c7d47(); return; /* Engine!?GetValidated@UMaterial@@UAEHXZ */
}

void f_f4f9fa(void) {
  LOAD_REGS();
L_f4f9fa: /* f4f9fa: jmp dword ptr [0xf60460] */
  SPILL(); f_6caf60(); return; /* Engine!?CheckCircularReferences@UMaterial@@UAEHAAV?$TArray@PAVUMaterial@@@@@Z */
}

void f_f4fa00(void) {
  LOAD_REGS();
L_f4fa00: /* f4fa00: jmp dword ptr [0xf60464] */
  SPILL(); f_6c5da3(); return; /* Engine!?Serialize@UTexture@@UAEXAAVFArchive@@@Z */
}

void f_f4fa06(void) {
  LOAD_REGS();
L_f4fa06: /* f4fa06: jmp dword ptr [0xf60468] */
  SPILL(); f_6c4192(); return; /* Engine!??1UTexture@@UAE@XZ */
}

void f_f4fa0c(void) {
  LOAD_REGS();
L_f4fa0c: /* f4fa0c: jmp dword ptr [0xf6046c] */
  SPILL(); f_6c3df0(); return; /* Engine!??0UTexture@@QAE@ABV0@@Z */
}

void f_f4fa12(void) {
  LOAD_REGS();
L_f4fa12: /* f4fa12: jmp dword ptr [0xf60470] */
  SPILL(); f_6cc9be(); return; /* Engine!??4UTexture@@QAEAAV0@ABV0@@Z */
}

void f_f4fa18(void) {
  LOAD_REGS();
L_f4fa18: /* f4fa18: jmp dword ptr [0xf60474] */
  SPILL(); f_6c7e19(); return; /* Engine!??0UTexture@@QAE@XZ */
}

void f_f4fa1e(void) {
  LOAD_REGS();
L_f4fa1e: /* f4fa1e: jmp dword ptr [0xf60478] */
  SPILL(); f_6c49df(); return; /* Engine!?Prime@UTexture@@UAEXXZ */
}

void f_f4fa24(void) {
  LOAD_REGS();
L_f4fa24: /* f4fa24: jmp dword ptr [0xf60480] */
  SPILL(); f_6c3c51(); return; /* Engine!?Serialize@UPalette@@UAEXAAVFArchive@@@Z */
}

void f_f4fa2a(void) {
  LOAD_REGS();
L_f4fa2a: /* f4fa2a: jmp dword ptr [0xf60488] */
  SPILL(); f_6c61b3(); return; /* Engine!?ReplaceWithExisting@UPalette@@QAEPAV1@XZ */
}

void f_f4fa30(void) {
  LOAD_REGS();
L_f4fa30: /* f4fa30: jmp dword ptr [0xf6048c] */
  SPILL(); f_6c39c2(); return; /* Engine!??0UPalette@@QAE@XZ */
}

void f_f4fa36(void) {
  LOAD_REGS();
L_f4fa36: /* f4fa36: jmp dword ptr [0xf60494] */
  SPILL(); f_6c3314(); return; /* Engine!??1UPalette@@UAE@XZ */
}

void f_f4fa3c(void) {
  LOAD_REGS();
L_f4fa3c: /* f4fa3c: jmp dword ptr [0xf60498] */
  SPILL(); f_6c4066(); return; /* Engine!?Init@UTexture@@UAEXHH@Z */
}

void f_f4fa42(void) {
  LOAD_REGS();
L_f4fa42: /* f4fa42: jmp dword ptr [0xf6049c] */
  SPILL(); f_6c2333(); return; /* Engine!?InternalConstructor@UTexture@@SAXPAX@Z */
}

void f_f4fa48(void) {
  LOAD_REGS();
L_f4fa48: /* f4fa48: jmp dword ptr [0xf604f0] */
  SPILL(); f_41b9d1(); return; /* MSVCR70!_CxxThrowException */
}

void f_f4fa4e(void) {
  LOAD_REGS();
L_f4fa4e: /* f4fa4e: mov eax, ecx */
  eax = ecx;
/* f4fa50: mov dword ptr [eax], 0xf561e4 */
  W32((uint32_t)(eax), 0xf561e4u);
/* f4fa56: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f4fa59(void) {
  LOAD_REGS();
L_f4fa59: /* f4fa59: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4fa5a: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* f4fa5e: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f4fa61: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4fa62: mov esi, ecx */
  esi = ecx;
/* f4fa64: je 0xf4fa8a */
  if (zf) goto L_f4fa8a;
L_f4fa66: /* f4fa66: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4fa67: push 0xf4fd88 */
  { uint32_t v = 0xf4fd88u; esp -= 4; W32(esp, v); }
/* f4fa6c: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* f4fa6f: push dword ptr [edi] */
  { uint32_t v = R32((uint32_t)(edi)); esp -= 4; W32(esp, v); }
/* f4fa71: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* f4fa73: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4fa74: call 0xf4fb95 */
  esp -= 4; W32(esp, 0xf4fa79u); SPILL(); f_f4fb95(); if (g_unwind) return; RELOAD();
/* f4fa79: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f4fa7c: je 0xf4fa85 */
  if (zf) goto L_f4fa85;
L_f4fa7e: /* f4fa7e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4fa7f: call 0xf4112c */
  esp -= 4; W32(esp, 0xf4fa84u); SPILL(); f_f4112c(); if (g_unwind) return; RELOAD();
/* f4fa84: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_f4fa85: /* f4fa85: mov eax, edi */
  eax = edi;
/* f4fa87: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f4fa88: jmp 0xf4fa9f */
  goto L_f4fa9f;
L_f4fa8a: /* f4fa8a: mov ecx, esi */
  ecx = esi;
/* f4fa8c: call 0xf4fd88 */
  esp -= 4; W32(esp, 0xf4fa91u); SPILL(); f_f4fd88(); if (g_unwind) return; RELOAD();
/* f4fa91: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f4fa94: je 0xf4fa9d */
  if (zf) goto L_f4fa9d;
L_f4fa96: /* f4fa96: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4fa97: call 0xf4112c */
  esp -= 4; W32(esp, 0xf4fa9cu); SPILL(); f_f4112c(); if (g_unwind) return; RELOAD();
/* f4fa9c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_f4fa9d: /* f4fa9d: mov eax, esi */
  eax = esi;
L_f4fa9f: /* f4fa9f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4faa0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f4faa1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f4faa4(void) {
  LOAD_REGS();
L_f4faa4: /* f4faa4: mov eax, ecx */
  eax = ecx;
/* f4faa6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f4fab0(void) {
  LOAD_REGS();
L_f4fab0: /* f4fab0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f4fab1: mov ebp, esp */
  ebp = esp;
/* f4fab3: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f4fab6: and esp, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* f4fab9: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* f4fabb: fst dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0);
/* f4fabf: fistp qword ptr [esp + 0x10] */
  W64((uint32_t)(esp + 0x10u), (uint64_t)fpu_toint64(ST0)); FPOP();
/* f4fac3: fild qword ptr [esp + 0x10] */
  { double v = (double)(int64_t)R64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* f4fac7: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* f4facb: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* f4facf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4fad1: je 0xf4fb0f */
  if (zf) goto L_f4fb0f;
L_f4fad3: /* f4fad3: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* f4fad5: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  }
/* f4fad7: jns 0xf4faf7 */
  if (!sf) goto L_f4faf7;
L_f4fad9: /* f4fad9: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f4fadc: mov ecx, dword ptr [esp] */
  ecx = R32((uint32_t)(esp));
/* f4fadf: xor ecx, 0x80000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f4fae5: add ecx, 0x7fffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ecx = r;
  }
/* f4faeb: adc eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  cf = cin ? ((r) <= (a)) : ((r) < (a));
  eax = r;
  }
/* f4faee: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* f4faf2: adc edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* f4faf5: jmp 0xf4fb23 */
  goto L_f4fb23;
L_f4faf7: /* f4faf7: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f4fafa: mov ecx, dword ptr [esp] */
  ecx = R32((uint32_t)(esp));
/* f4fafd: add ecx, 0x7fffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ecx = r;
  }
/* f4fb03: sbb eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  cf = cin ? ((a) <= (b)) : ((a) < (b));
  eax = r;
  }
/* f4fb06: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* f4fb0a: sbb edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edx = r;
  }
/* f4fb0d: jmp 0xf4fb23 */
  goto L_f4fb23;
L_f4fb0f: /* f4fb0f: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* f4fb13: test edx, 0x7fffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4fb19: jne 0xf4fad3 */
  if (!zf) goto L_f4fad3;
L_f4fb1b: /* f4fb1b: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* f4fb1f: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
L_f4fb23: /* f4fb23: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* f4fb24: ret  */
  esp += 4; SPILL(); return;
}

void f_f4fb25(void) {
  LOAD_REGS();
L_f4fb25: /* f4fb25: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* f4fb27: cmp dword ptr [eax], 0xe06d7363 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0xe06d7363u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4fb2d: je 0xf4fb32 */
  if (zf) goto L_f4fb32;
L_f4fb2f: /* f4fb2f: xor eax, eax */
  eax = 0;
/* f4fb31: ret  */
  esp += 4; SPILL(); return;
L_f4fb32: /* f4fb32: jmp 0xf4fd8e */
  SPILL(); f_f4fd8e(); return;
}

void f_f4fb37(void) {
  LOAD_REGS();
L_f4fb37: /* f4fb37: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* f4fb39: push 0xf561e8 */
  { uint32_t v = 0xf561e8u; esp -= 4; W32(esp, v); }
/* f4fb3e: call 0xf4fd94 */
  esp -= 4; W32(esp, 0xf4fb43u); SPILL(); f_f4fd94(); if (g_unwind) return; RELOAD();
/* f4fb43: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
L_f4fb47: /* f4fb47: dec dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* f4fb4a: js 0xf4fb5a */
  if (sf) goto L_f4fb5a;
L_f4fb4c: /* f4fb4c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f4fb4f: sub ecx, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* f4fb52: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* f4fb55: call dword ptr [ebp + 0x14] */
  { uint32_t t = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, 0xf4fb58u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f4fb58: jmp 0xf4fb47 */
  goto L_f4fb47;
L_f4fb5a: /* f4fb5a: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* f4fb5e: call 0xf4fdcf */
  esp -= 4; W32(esp, 0xf4fb63u); SPILL(); f_f4fdcf(); if (g_unwind) return; RELOAD();
/* f4fb63: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_f4fb66(void) {
  LOAD_REGS();
L_f4fb66: /* f4fb66: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f4fb69: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* f4fb6c: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* f4fb6f: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* f4fb71: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* f4fb74: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* f4fb77: cmp dword ptr [eax], 0xe06d7363 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0xe06d7363u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4fb7d: je 0xf4fb8f */
  if (zf) goto L_f4fb8f;
L_f4fb7f: /* f4fb7f: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* f4fb86: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* f4fb89: ret  */
  esp += 4; SPILL(); return;
L_f4fb8f: /* f4fb8f: call 0xf4fd8e */
  esp -= 4; W32(esp, 0xf4fb94u); SPILL(); f_f4fd8e(); if (g_unwind) return; RELOAD();
L_f4fb94: guest_badaddr(0xf4fb94); return;
}

void f_f4fb8a(void) {
  LOAD_REGS();
  goto L_f4fb8a;
L_f4fb5a: /* f4fb5a: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* f4fb5e: call 0xf4fdcf */
  esp -= 4; W32(esp, 0xf4fb63u); SPILL(); f_f4fdcf(); if (g_unwind) return; RELOAD();
/* f4fb63: ret 0x10 */
  esp += 20; SPILL(); return;
L_f4fb8a: /* f4fb8a: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
/* f4fb8d: jmp 0xf4fb5a */
  goto L_f4fb5a;
}

void f_f4fb95(void) {
  LOAD_REGS();
L_f4fb95: /* f4fb95: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* f4fb97: push 0xf561f8 */
  { uint32_t v = 0xf561f8u; esp -= 4; W32(esp, v); }
/* f4fb9c: call 0xf4fd94 */
  esp -= 4; W32(esp, 0xf4fba1u); SPILL(); f_f4fd94(); if (g_unwind) return; RELOAD();
/* f4fba1: and dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* f4fba5: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* f4fba8: mov eax, esi */
  eax = esi;
/* f4fbaa: imul eax, dword ptr [ebp + 0x10] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0x10u)));
  eax = (uint32_t)r;
  }
/* f4fbae: add dword ptr [ebp + 8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* f4fbb1: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
L_f4fbb5: /* f4fbb5: dec dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* f4fbb8: js 0xf4fbc5 */
  if (sf) goto L_f4fbc5;
L_f4fbba: /* f4fbba: sub dword ptr [ebp + 8], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* f4fbbd: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f4fbc0: call dword ptr [ebp + 0x14] */
  { uint32_t t = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, 0xf4fbc3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f4fbc3: jmp 0xf4fbb5 */
  goto L_f4fbb5;
L_f4fbc5: /* f4fbc5: mov dword ptr [ebp - 0x1c], 1 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* f4fbcc: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* f4fbd0: call 0xf4fbdd */
  esp -= 4; W32(esp, 0xf4fbd5u); SPILL(); f_f4fbdd(); if (g_unwind) return; RELOAD();
/* f4fbd5: call 0xf4fdcf */
  esp -= 4; W32(esp, 0xf4fbdau); SPILL(); f_f4fdcf(); if (g_unwind) return; RELOAD();
/* f4fbda: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_f4fbdd(void) {
  LOAD_REGS();
L_f4fbdd: /* f4fbdd: cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4fbe1: jne 0xf4fbf4 */
  if (!zf) goto L_f4fbf4;
L_f4fbe3: /* f4fbe3: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* f4fbe6: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* f4fbe9: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* f4fbec: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* f4fbef: call 0xf4fb37 */
  esp -= 4; W32(esp, 0xf4fbf4u); SPILL(); f_f4fb37(); if (g_unwind) return; RELOAD();
L_f4fbf4: /* f4fbf4: ret  */
  esp += 4; SPILL(); return;
}

void f_f4fbf5(void) {
  LOAD_REGS();
L_f4fbf5: /* f4fbf5: cmp dword ptr [0xf5f420], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xf5f420u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4fbfc: jne 0xf4fc04 */
  if (!zf) goto L_f4fc04;
L_f4fbfe: /* f4fbfe: jmp dword ptr [0xf60504] */
  SPILL(); f_404cc9(); return; /* MSVCR70!_onexit */
L_f4fc04: /* f4fc04: push 0xf5f410 */
  { uint32_t v = 0xf5f410u; esp -= 4; W32(esp, v); }
/* f4fc09: push 0xf5f420 */
  { uint32_t v = 0xf5f420u; esp -= 4; W32(esp, v); }
/* f4fc0e: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* f4fc12: call 0xf4fde0 */
  esp -= 4; W32(esp, 0xf4fc17u); SPILL(); f_f4fde0(); if (g_unwind) return; RELOAD();
/* f4fc17: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f4fc1a: ret  */
  esp += 4; SPILL(); return;
}

void f_f4fc1b(void) {
  LOAD_REGS();
L_f4fc1b: /* f4fc1b: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* f4fc1f: call 0xf4fbf5 */
  esp -= 4; W32(esp, 0xf4fc24u); SPILL(); f_f4fbf5(); if (g_unwind) return; RELOAD();
/* f4fc24: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* f4fc26: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* f4fc28: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* f4fc2a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* f4fc2b: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* f4fc2c: ret  */
  esp += 4; SPILL(); return;
}

void f_f4fc2d(void) {
  LOAD_REGS();
L_f4fc2d: /* f4fc2d: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* f4fc31: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4fc33: jne 0xf4fc43 */
  if (!zf) goto L_f4fc43;
L_f4fc35: /* f4fc35: cmp dword ptr [0xf5f3f4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xf5f3f4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f4fc3b: jle 0xf4fc6b */
  if ((zf || sf != of)) goto L_f4fc6b;
L_f4fc3d: /* f4fc3d: dec dword ptr [0xf5f3f4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xf5f3f4u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(0xf5f3f4u), r);
  }
L_f4fc43: /* f4fc43: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4fc46: mov ecx, dword ptr [0xf60514] */
  ecx = R32((uint32_t)(0xf60514u));
/* f4fc4c: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* f4fc4e: mov dword ptr [0xf5f3f8], ecx */
  W32((uint32_t)(0xf5f3f8u), ecx);
/* f4fc54: jne 0xf4fca5 */
  if (!zf) goto L_f4fca5;
L_f4fc56: /* f4fc56: push 0x80 */
  { uint32_t v = 0x80u; esp -= 4; W32(esp, v); }
/* f4fc5b: call dword ptr [0xf60510] */
  esp -= 4; W32(esp, 0xf4fc61u); SPILL(); f_4010eb(); if (g_unwind) return; /* MSVCR70!malloc */ RELOAD();
/* f4fc61: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4fc63: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* f4fc64: mov dword ptr [0xf5f420], eax */
  W32((uint32_t)(0xf5f420u), eax);
/* f4fc69: jne 0xf4fc6f */
  if (!zf) goto L_f4fc6f;
L_f4fc6b: /* f4fc6b: xor eax, eax */
  eax = 0;
/* f4fc6d: jmp 0xf4fce8 */
  goto L_f4fce8;
L_f4fc6f: /* f4fc6f: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* f4fc72: mov eax, dword ptr [0xf5f420] */
  eax = R32((uint32_t)(0xf5f420u));
/* f4fc77: mov dword ptr [0xf5f410], eax */
  W32((uint32_t)(0xf5f410u), eax);
/* f4fc7c: call 0xf4fdf2 */
  esp -= 4; W32(esp, 0xf4fc81u); SPILL(); f_f4fdf2(); if (g_unwind) return; RELOAD();
/* f4fc81: push 0xf4fe36 */
  { uint32_t v = 0xf4fe36u; esp -= 4; W32(esp, v); }
/* f4fc86: call 0xf4fc1b */
  esp -= 4; W32(esp, 0xf4fc8bu); SPILL(); f_f4fc1b(); if (g_unwind) return; RELOAD();
/* f4fc8b: mov dword ptr [esp], 0xf5b248 */
  W32((uint32_t)(esp), 0xf5b248u);
/* f4fc92: push 0xf5b000 */
  { uint32_t v = 0xf5b000u; esp -= 4; W32(esp, v); }
/* f4fc97: call 0xf4fdec */
  esp -= 4; W32(esp, 0xf4fc9cu); SPILL(); f_f4fdec(); if (g_unwind) return; RELOAD();
/* f4fc9c: inc dword ptr [0xf5f3f4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xf5f3f4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0xf5f3f4u), r);
  }
/* f4fca2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* f4fca3: jmp 0xf4fce4 */
  goto L_f4fce4;
L_f4fca5: /* f4fca5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4fca7: jne 0xf4fce5 */
  if (!zf) goto L_f4fce5;
L_f4fca9: /* f4fca9: mov eax, dword ptr [0xf5f420] */
  eax = R32((uint32_t)(0xf5f420u));
/* f4fcae: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4fcb0: je 0xf4fce5 */
  if (zf) goto L_f4fce5;
L_f4fcb2: /* f4fcb2: jmp 0xf4fcc7 */
  goto L_f4fcc7;
L_f4fcb4: /* f4fcb4: mov ecx, dword ptr [0xf5f410] */
  ecx = R32((uint32_t)(0xf5f410u));
/* f4fcba: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* f4fcbc: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4fcbe: je 0xf4fcc7 */
  if (zf) goto L_f4fcc7;
L_f4fcc0: /* f4fcc0: call ecx */
  { uint32_t t = ecx; esp -= 4; W32(esp, 0xf4fcc2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f4fcc2: mov eax, dword ptr [0xf5f420] */
  eax = R32((uint32_t)(0xf5f420u));
L_f4fcc7: /* f4fcc7: sub dword ptr [0xf5f410], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xf5f410u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(0xf5f410u), r);
  }
/* f4fcce: cmp dword ptr [0xf5f410], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xf5f410u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* f4fcd4: jae 0xf4fcb4 */
  if (!cf) goto L_f4fcb4;
L_f4fcd6: /* f4fcd6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4fcd7: call dword ptr [0xf60508] */
  esp -= 4; W32(esp, 0xf4fcddu); SPILL(); f_401156(); if (g_unwind) return; /* MSVCR70!free */ RELOAD();
/* f4fcdd: and dword ptr [0xf5f420], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xf5f420u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(0xf5f420u), r);
  }
L_f4fce4: /* f4fce4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_f4fce5: /* f4fce5: xor eax, eax */
  eax = 0;
/* f4fce7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_f4fce8: /* f4fce8: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_f4fceb(void) {
  LOAD_REGS();
L_f4fceb: /* f4fceb: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f4fcec: mov ebp, esp */
  ebp = esp;
/* f4fcee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4fcef: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* f4fcf2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4fcf3: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* f4fcf6: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4fcf8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4fcf9: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* f4fcfc: jne 0xf4fd07 */
  if (!zf) goto L_f4fd07;
L_f4fcfe: /* f4fcfe: cmp dword ptr [0xf5f3f4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xf5f3f4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4fd05: jmp 0xf4fd2d */
  goto L_f4fd2d;
L_f4fd07: /* f4fd07: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4fd0a: je 0xf4fd11 */
  if (zf) goto L_f4fd11;
L_f4fd0c: /* f4fd0c: cmp esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4fd0f: jne 0xf4fd33 */
  if (!zf) goto L_f4fd33;
L_f4fd11: /* f4fd11: mov eax, dword ptr [0xf5f404] */
  eax = R32((uint32_t)(0xf5f404u));
/* f4fd16: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4fd18: je 0xf4fd23 */
  if (zf) goto L_f4fd23;
L_f4fd1a: /* f4fd1a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4fd1b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4fd1c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4fd1d: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0xf4fd1fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f4fd1f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4fd21: je 0xf4fd2f */
  if (zf) goto L_f4fd2f;
L_f4fd23: /* f4fd23: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4fd24: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4fd25: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4fd26: call 0xf4fc2d */
  esp -= 4; W32(esp, 0xf4fd2bu); SPILL(); f_f4fc2d(); if (g_unwind) return; RELOAD();
/* f4fd2b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
L_f4fd2d: /* f4fd2d: jne 0xf4fd33 */
  if (!zf) goto L_f4fd33;
L_f4fd2f: /* f4fd2f: xor eax, eax */
  eax = 0;
/* f4fd31: jmp 0xf4fd81 */
  goto L_f4fd81;
L_f4fd33: /* f4fd33: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4fd34: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4fd35: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4fd36: call 0xf410b9 */
  esp -= 4; W32(esp, 0xf4fd3bu); SPILL(); f_f410b9(); if (g_unwind) return; RELOAD();
/* f4fd3b: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4fd3e: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* f4fd41: jne 0xf4fd4f */
  if (!zf) goto L_f4fd4f;
L_f4fd43: /* f4fd43: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4fd45: jne 0xf4fd7e */
  if (!zf) goto L_f4fd7e;
L_f4fd47: /* f4fd47: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4fd48: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4fd49: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4fd4a: call 0xf4fc2d */
  esp -= 4; W32(esp, 0xf4fd4fu); SPILL(); f_f4fc2d(); if (g_unwind) return; RELOAD();
L_f4fd4f: /* f4fd4f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4fd51: je 0xf4fd58 */
  if (zf) goto L_f4fd58;
L_f4fd53: /* f4fd53: cmp esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4fd56: jne 0xf4fd7e */
  if (!zf) goto L_f4fd7e;
L_f4fd58: /* f4fd58: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4fd59: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4fd5a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4fd5b: call 0xf4fc2d */
  esp -= 4; W32(esp, 0xf4fd60u); SPILL(); f_f4fc2d(); if (g_unwind) return; RELOAD();
/* f4fd60: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4fd62: jne 0xf4fd67 */
  if (!zf) goto L_f4fd67;
L_f4fd64: /* f4fd64: and dword ptr [ebp + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xcu), r);
  }
L_f4fd67: /* f4fd67: cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f4fd6b: je 0xf4fd7e */
  if (zf) goto L_f4fd7e;
L_f4fd6d: /* f4fd6d: mov eax, dword ptr [0xf5f404] */
  eax = R32((uint32_t)(0xf5f404u));
/* f4fd72: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4fd74: je 0xf4fd7e */
  if (zf) goto L_f4fd7e;
L_f4fd76: /* f4fd76: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4fd77: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4fd78: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4fd79: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0xf4fd7bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f4fd7b: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
L_f4fd7e: /* f4fd7e: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
L_f4fd81: /* f4fd81: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f4fd82: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4fd83: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f4fd84: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f4fd85: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_f4fd88(void) {
  LOAD_REGS();
L_f4fd88: /* f4fd88: jmp dword ptr [0xf604f8] */
  SPILL(); f_41ac82(); return; /* MSVCR70!??1type_info@@UAE@XZ */
}

void f_f4fd8e(void) {
  LOAD_REGS();
L_f4fd8e: /* f4fd8e: jmp dword ptr [0xf604fc] */
  SPILL(); f_41b959(); return; /* MSVCR70!?terminate@@YAXXZ */
}

void f_f4fd94(void) {
  LOAD_REGS();
L_f4fd94: /* f4fd94: push 0xf4fe80 */
  { uint32_t v = 0xf4fe80u; esp -= 4; W32(esp, v); }
/* f4fd99: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f4fd9f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4fda0: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* f4fda4: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* f4fda8: lea ebp, [esp + 0x10] */
  ebp = (uint32_t)(esp + 0x10u);
/* f4fdac: sub esp, eax */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f4fdae: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f4fdaf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f4fdb0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f4fdb1: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* f4fdb4: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* f4fdb7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f4fdb8: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* f4fdbb: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* f4fdc2: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* f4fdc5: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* f4fdc8: mov dword ptr fs:[0], eax */
  W32((uint32_t)(FS_BASE + 0x0u), eax);
/* f4fdce: ret  */
  esp += 4; SPILL(); return;
}

void f_f4fdcf(void) {
  LOAD_REGS();
L_f4fdcf: /* f4fdcf: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f4fdd2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f4fdd9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* f4fdda: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f4fddb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f4fddc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f4fddd: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* f4fdde: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f4fddf: ret  */
  esp += 4; SPILL(); return;
}

void f_f4fde0(void) {
  LOAD_REGS();
L_f4fde0: /* f4fde0: jmp dword ptr [0xf60500] */
  SPILL(); f_40259b(); return; /* MSVCR70!__dllonexit */
}

void f_f4fde6(void) {
  LOAD_REGS();
L_f4fde6: /* f4fde6: jmp dword ptr [0xf60508] */
  SPILL(); f_401156(); return; /* MSVCR70!free */
}

void f_f4fdec(void) {
  LOAD_REGS();
L_f4fdec: /* f4fdec: jmp dword ptr [0xf6050c] */
  SPILL(); f_4011ee(); return; /* MSVCR70!_initterm */
}

void f_f4fdf2(void) {
  LOAD_REGS();
L_f4fdf2: /* f4fdf2: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* f4fdf4: push 0xf56208 */
  { uint32_t v = 0xf56208u; esp -= 4; W32(esp, v); }
/* f4fdf9: call 0xf4fd94 */
  esp -= 4; W32(esp, 0xf4fdfeu); SPILL(); f_f4fd94(); if (g_unwind) return; RELOAD();
/* f4fdfe: mov dword ptr [ebp - 0x1c], 0xf56648 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0xf56648u);
L_f4fe05: /* f4fe05: cmp dword ptr [ebp - 0x1c], 0xf56748 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0xf56748u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* f4fe0c: jae 0xf4fe30 */
  if (!cf) goto L_f4fe30;
L_f4fe0e: /* f4fe0e: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* f4fe12: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* f4fe15: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* f4fe17: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4fe19: je 0xf4fe26 */
  if (zf) goto L_f4fe26;
L_f4fe1b: /* f4fe1b: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0xf4fe1du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f4fe1d: jmp 0xf4fe26 */
  goto L_f4fe26;
L_f4fe26: /* f4fe26: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* f4fe2a: add dword ptr [ebp - 0x1c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* f4fe2e: jmp 0xf4fe05 */
  goto L_f4fe05;
L_f4fe30: /* f4fe30: call 0xf4fdcf */
  esp -= 4; W32(esp, 0xf4fe35u); SPILL(); f_f4fdcf(); if (g_unwind) return; RELOAD();
/* f4fe35: ret  */
  esp += 4; SPILL(); return;
}

void f_f4fe1f(void) {
  LOAD_REGS();
L_f4fe1f: /* f4fe1f: xor eax, eax */
  eax = 0;
/* f4fe21: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f4fe22: ret  */
  esp += 4; SPILL(); return;
}

void f_f4fe23(void) {
  LOAD_REGS();
  goto L_f4fe23;
L_f4fe05: /* f4fe05: cmp dword ptr [ebp - 0x1c], 0xf56748 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0xf56748u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* f4fe0c: jae 0xf4fe30 */
  if (!cf) goto L_f4fe30;
L_f4fe0e: /* f4fe0e: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* f4fe12: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* f4fe15: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* f4fe17: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4fe19: je 0xf4fe26 */
  if (zf) goto L_f4fe26;
L_f4fe1b: /* f4fe1b: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0xf4fe1du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f4fe1d: jmp 0xf4fe26 */
  goto L_f4fe26;
L_f4fe23: /* f4fe23: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
L_f4fe26: /* f4fe26: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* f4fe2a: add dword ptr [ebp - 0x1c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* f4fe2e: jmp 0xf4fe05 */
  goto L_f4fe05;
L_f4fe30: /* f4fe30: call 0xf4fdcf */
  esp -= 4; W32(esp, 0xf4fe35u); SPILL(); f_f4fdcf(); if (g_unwind) return; RELOAD();
/* f4fe35: ret  */
  esp += 4; SPILL(); return;
}

void f_f4fe36(void) {
  LOAD_REGS();
L_f4fe36: /* f4fe36: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* f4fe38: push 0xf56218 */
  { uint32_t v = 0xf56218u; esp -= 4; W32(esp, v); }
/* f4fe3d: call 0xf4fd94 */
  esp -= 4; W32(esp, 0xf4fe42u); SPILL(); f_f4fd94(); if (g_unwind) return; RELOAD();
/* f4fe42: mov dword ptr [ebp - 0x1c], 0xf56850 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0xf56850u);
L_f4fe49: /* f4fe49: cmp dword ptr [ebp - 0x1c], 0xf56950 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0xf56950u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* f4fe50: jae 0xf4fe74 */
  if (!cf) goto L_f4fe74;
L_f4fe52: /* f4fe52: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* f4fe56: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* f4fe59: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* f4fe5b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4fe5d: je 0xf4fe6a */
  if (zf) goto L_f4fe6a;
L_f4fe5f: /* f4fe5f: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0xf4fe61u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f4fe61: jmp 0xf4fe6a */
  goto L_f4fe6a;
L_f4fe6a: /* f4fe6a: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* f4fe6e: add dword ptr [ebp - 0x1c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* f4fe72: jmp 0xf4fe49 */
  goto L_f4fe49;
L_f4fe74: /* f4fe74: call 0xf4fdcf */
  esp -= 4; W32(esp, 0xf4fe79u); SPILL(); f_f4fdcf(); if (g_unwind) return; RELOAD();
/* f4fe79: ret  */
  esp += 4; SPILL(); return;
}

void f_f4fe63(void) {
  LOAD_REGS();
L_f4fe63: /* f4fe63: xor eax, eax */
  eax = 0;
/* f4fe65: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f4fe66: ret  */
  esp += 4; SPILL(); return;
}

void f_f4fe67(void) {
  LOAD_REGS();
  goto L_f4fe67;
L_f4fe49: /* f4fe49: cmp dword ptr [ebp - 0x1c], 0xf56950 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0xf56950u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* f4fe50: jae 0xf4fe74 */
  if (!cf) goto L_f4fe74;
L_f4fe52: /* f4fe52: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* f4fe56: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* f4fe59: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* f4fe5b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f4fe5d: je 0xf4fe6a */
  if (zf) goto L_f4fe6a;
L_f4fe5f: /* f4fe5f: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0xf4fe61u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f4fe61: jmp 0xf4fe6a */
  goto L_f4fe6a;
L_f4fe67: /* f4fe67: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
L_f4fe6a: /* f4fe6a: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* f4fe6e: add dword ptr [ebp - 0x1c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* f4fe72: jmp 0xf4fe49 */
  goto L_f4fe49;
L_f4fe74: /* f4fe74: call 0xf4fdcf */
  esp -= 4; W32(esp, 0xf4fe79u); SPILL(); f_f4fdcf(); if (g_unwind) return; RELOAD();
/* f4fe79: ret  */
  esp += 4; SPILL(); return;
}

void f_f4fe7a(void) {
  LOAD_REGS();
L_f4fe7a: /* f4fe7a: jmp dword ptr [0xf60510] */
  SPILL(); f_4010eb(); return; /* MSVCR70!malloc */
}

void f_f4fe80(void) {
  LOAD_REGS();
L_f4fe80: /* f4fe80: jmp dword ptr [0xf60518] */
  SPILL(); f_406ebd(); return; /* MSVCR70!_except_handler3 */
}

void f_f50ea0(void) {
  LOAD_REGS();
  goto L_f50ea0;
L_f4faaa: /* f4faaa: jmp dword ptr [0xf604f4] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f50ea0: /* f50ea0: mov eax, 0xf56afc */
  eax = 0xf56afcu;
/* f50ea5: jmp 0xf4faaa */
  goto L_f4faaa;
}

void f_f50eb0(void) {
  LOAD_REGS();
  goto L_f50eb0;
L_f4faaa: /* f4faaa: jmp dword ptr [0xf604f4] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f50eb0: /* f50eb0: mov eax, 0xf56b68 */
  eax = 0xf56b68u;
/* f50eb5: jmp 0xf4faaa */
  goto L_f4faaa;
}

void f_f50ec0(void) {
  LOAD_REGS();
  goto L_f50ec0;
L_f4faaa: /* f4faaa: jmp dword ptr [0xf604f4] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f50ec0: /* f50ec0: mov eax, 0xf56bd4 */
  eax = 0xf56bd4u;
/* f50ec5: jmp 0xf4faaa */
  goto L_f4faaa;
}

void f_f50ed0(void) {
  LOAD_REGS();
  goto L_f50ed0;
L_f4faaa: /* f4faaa: jmp dword ptr [0xf604f4] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f50ed0: /* f50ed0: mov eax, 0xf56c40 */
  eax = 0xf56c40u;
/* f50ed5: jmp 0xf4faaa */
  goto L_f4faaa;
}

void f_f50ee0(void) {
  LOAD_REGS();
  goto L_f50ee0;
L_f4faaa: /* f4faaa: jmp dword ptr [0xf604f4] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f50ee0: /* f50ee0: mov eax, 0xf56cac */
  eax = 0xf56cacu;
/* f50ee5: jmp 0xf4faaa */
  goto L_f4faaa;
}

void f_f50ef0(void) {
  LOAD_REGS();
  goto L_f50ef0;
L_f4faaa: /* f4faaa: jmp dword ptr [0xf604f4] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f50ef0: /* f50ef0: mov eax, 0xf56d18 */
  eax = 0xf56d18u;
/* f50ef5: jmp 0xf4faaa */
  goto L_f4faaa;
}

void f_f50f00(void) {
  LOAD_REGS();
  goto L_f50f00;
L_f4faaa: /* f4faaa: jmp dword ptr [0xf604f4] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f50f00: /* f50f00: mov eax, 0xf56d84 */
  eax = 0xf56d84u;
/* f50f05: jmp 0xf4faaa */
  goto L_f4faaa;
}

void f_f50f10(void) {
  LOAD_REGS();
  goto L_f50f10;
L_f4faaa: /* f4faaa: jmp dword ptr [0xf604f4] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f50f10: /* f50f10: mov eax, 0xf56df0 */
  eax = 0xf56df0u;
/* f50f15: jmp 0xf4faaa */
  goto L_f4faaa;
}

void f_f50f20(void) {
  LOAD_REGS();
  goto L_f50f20;
L_f4faaa: /* f4faaa: jmp dword ptr [0xf604f4] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f50f20: /* f50f20: mov eax, 0xf56e5c */
  eax = 0xf56e5cu;
/* f50f25: jmp 0xf4faaa */
  goto L_f4faaa;
}

void f_f50f30(void) {
  LOAD_REGS();
  goto L_f50f30;
L_f4faaa: /* f4faaa: jmp dword ptr [0xf604f4] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f50f30: /* f50f30: mov eax, 0xf56ec8 */
  eax = 0xf56ec8u;
/* f50f35: jmp 0xf4faaa */
  goto L_f4faaa;
}

void f_f50f40(void) {
  LOAD_REGS();
  goto L_f50f40;
L_f4faaa: /* f4faaa: jmp dword ptr [0xf604f4] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f50f40: /* f50f40: mov eax, 0xf56f34 */
  eax = 0xf56f34u;
/* f50f45: jmp 0xf4faaa */
  goto L_f4faaa;
}

void f_f50f50(void) {
  LOAD_REGS();
L_f50f50: /* f50f50: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f50f53: jmp dword ptr [0xf60468] */
  SPILL(); f_6c4192(); return; /* Engine!??1UTexture@@UAE@XZ */
}

void f_f50f59(void) {
  LOAD_REGS();
  goto L_f50f59;
L_f4faaa: /* f4faaa: jmp dword ptr [0xf604f4] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f50f59: /* f50f59: mov eax, 0xf56f64 */
  eax = 0xf56f64u;
/* f50f5e: jmp 0xf4faaa */
  goto L_f4faaa;
}

void f_f50f70(void) {
  LOAD_REGS();
L_f50f70: /* f50f70: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f50f73: jmp 0xf41113 */
  SPILL(); f_f41113(); return;
}

void f_f50f78(void) {
  LOAD_REGS();
  goto L_f50f78;
L_f4faaa: /* f4faaa: jmp dword ptr [0xf604f4] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f50f78: /* f50f78: mov eax, 0xf56f8c */
  eax = 0xf56f8cu;
/* f50f7d: jmp 0xf4faaa */
  goto L_f4faaa;
}

void f_f50f90(void) {
  LOAD_REGS();
L_f50f90: /* f50f90: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f50f93: jmp 0xf4114f */
  SPILL(); f_f4114f(); return;
}

void f_f50f98(void) {
  LOAD_REGS();
  goto L_f50f98;
L_f4faaa: /* f4faaa: jmp dword ptr [0xf604f4] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f50f98: /* f50f98: mov eax, 0xf56fb4 */
  eax = 0xf56fb4u;
/* f50f9d: jmp 0xf4faaa */
  goto L_f4faaa;
}

void f_f50fb0(void) {
  LOAD_REGS();
L_f50fb0: /* f50fb0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f50fb3: jmp 0xf4114f */
  SPILL(); f_f4114f(); return;
}

void f_f50fb8(void) {
  LOAD_REGS();
  goto L_f50fb8;
L_f4faaa: /* f4faaa: jmp dword ptr [0xf604f4] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f50fb8: /* f50fb8: mov eax, 0xf56fdc */
  eax = 0xf56fdcu;
/* f50fbd: jmp 0xf4faaa */
  goto L_f4faaa;
}

void f_f50fd0(void) {
  LOAD_REGS();
L_f50fd0: /* f50fd0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f50fd3: jmp 0xf4114f */
  SPILL(); f_f4114f(); return;
}

void f_f50fd8(void) {
  LOAD_REGS();
  goto L_f50fd8;
L_f4faaa: /* f4faaa: jmp dword ptr [0xf604f4] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f50fd8: /* f50fd8: mov eax, 0xf57004 */
  eax = 0xf57004u;
/* f50fdd: jmp 0xf4faaa */
  goto L_f4faaa;
}

void f_f50ff0(void) {
  LOAD_REGS();
L_f50ff0: /* f50ff0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f50ff3: jmp 0xf41113 */
  SPILL(); f_f41113(); return;
}

void f_f50ff8(void) {
  LOAD_REGS();
  goto L_f50ff8;
L_f4faaa: /* f4faaa: jmp dword ptr [0xf604f4] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f50ff8: /* f50ff8: mov eax, 0xf5702c */
  eax = 0xf5702cu;
/* f50ffd: jmp 0xf4faaa */
  goto L_f4faaa;
}

void f_f51010(void) {
  LOAD_REGS();
  goto L_f51010;
L_f4faaa: /* f4faaa: jmp dword ptr [0xf604f4] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f51010: /* f51010: mov eax, 0xf57090 */
  eax = 0xf57090u;
/* f51015: jmp 0xf4faaa */
  goto L_f4faaa;
}

void f_f51020(void) {
  LOAD_REGS();
  goto L_f51020;
L_f4faaa: /* f4faaa: jmp dword ptr [0xf604f4] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f51020: /* f51020: mov eax, 0xf570fc */
  eax = 0xf570fcu;
/* f51025: jmp 0xf4faaa */
  goto L_f4faaa;
}

void f_f51030(void) {
  LOAD_REGS();
  goto L_f51030;
L_f4faaa: /* f4faaa: jmp dword ptr [0xf604f4] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f51030: /* f51030: mov eax, 0xf57168 */
  eax = 0xf57168u;
/* f51035: jmp 0xf4faaa */
  goto L_f4faaa;
}

void f_f51040(void) {
  LOAD_REGS();
  goto L_f51040;
L_f4faaa: /* f4faaa: jmp dword ptr [0xf604f4] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f51040: /* f51040: mov eax, 0xf571d4 */
  eax = 0xf571d4u;
/* f51045: jmp 0xf4faaa */
  goto L_f4faaa;
}

void f_f51050(void) {
  LOAD_REGS();
  goto L_f51050;
L_f4faaa: /* f4faaa: jmp dword ptr [0xf604f4] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f51050: /* f51050: mov eax, 0xf57240 */
  eax = 0xf57240u;
/* f51055: jmp 0xf4faaa */
  goto L_f4faaa;
}

void f_f51060(void) {
  LOAD_REGS();
L_f51060: /* f51060: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f51063: jmp dword ptr [0xf60468] */
  SPILL(); f_6c4192(); return; /* Engine!??1UTexture@@UAE@XZ */
}

void f_f51069(void) {
  LOAD_REGS();
  goto L_f51069;
L_f4faaa: /* f4faaa: jmp dword ptr [0xf604f4] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f51069: /* f51069: mov eax, 0xf572b4 */
  eax = 0xf572b4u;
/* f5106e: jmp 0xf4faaa */
  goto L_f4faaa;
}

void f_f51080(void) {
  LOAD_REGS();
  goto L_f51080;
L_f4faaa: /* f4faaa: jmp dword ptr [0xf604f4] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f51080: /* f51080: mov eax, 0xf57320 */
  eax = 0xf57320u;
/* f51085: jmp 0xf4faaa */
  goto L_f4faaa;
}

void f_f51090(void) {
  LOAD_REGS();
  goto L_f51090;
L_f4faaa: /* f4faaa: jmp dword ptr [0xf604f4] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f51090: /* f51090: mov eax, 0xf5738c */
  eax = 0xf5738cu;
/* f51095: jmp 0xf4faaa */
  goto L_f4faaa;
}

void f_f510a0(void) {
  LOAD_REGS();
  goto L_f510a0;
L_f4faaa: /* f4faaa: jmp dword ptr [0xf604f4] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f510a0: /* f510a0: mov eax, 0xf573f8 */
  eax = 0xf573f8u;
/* f510a5: jmp 0xf4faaa */
  goto L_f4faaa;
}

void f_f510b0(void) {
  LOAD_REGS();
  goto L_f510b0;
L_f4faaa: /* f4faaa: jmp dword ptr [0xf604f4] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f510b0: /* f510b0: mov eax, 0xf57464 */
  eax = 0xf57464u;
/* f510b5: jmp 0xf4faaa */
  goto L_f4faaa;
}

void f_f510c0(void) {
  LOAD_REGS();
L_f510c0: /* f510c0: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* f510c3: jmp 0xf41113 */
  SPILL(); f_f41113(); return;
}

void f_f510c8(void) {
  LOAD_REGS();
  goto L_f510c8;
L_f4faaa: /* f4faaa: jmp dword ptr [0xf604f4] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f510c8: /* f510c8: mov eax, 0xf574a4 */
  eax = 0xf574a4u;
/* f510cd: jmp 0xf4faaa */
  goto L_f4faaa;
}

void f_f510e0(void) {
  LOAD_REGS();
  goto L_f510e0;
L_f4faaa: /* f4faaa: jmp dword ptr [0xf604f4] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f510e0: /* f510e0: mov eax, 0xf5750c */
  eax = 0xf5750cu;
/* f510e5: jmp 0xf4faaa */
  goto L_f4faaa;
}

void f_f510f0(void) {
  LOAD_REGS();
  goto L_f510f0;
L_f4faaa: /* f4faaa: jmp dword ptr [0xf604f4] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f510f0: /* f510f0: mov eax, 0xf57578 */
  eax = 0xf57578u;
/* f510f5: jmp 0xf4faaa */
  goto L_f4faaa;
}

void f_f51100(void) {
  LOAD_REGS();
  goto L_f51100;
L_f4faaa: /* f4faaa: jmp dword ptr [0xf604f4] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f51100: /* f51100: mov eax, 0xf575e4 */
  eax = 0xf575e4u;
/* f51105: jmp 0xf4faaa */
  goto L_f4faaa;
}

void f_f51110(void) {
  LOAD_REGS();
L_f51110: /* f51110: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* f51113: jmp 0xf4114f */
  SPILL(); f_f4114f(); return;
}

void f_f51118(void) {
  LOAD_REGS();
  goto L_f51118;
L_f4faaa: /* f4faaa: jmp dword ptr [0xf604f4] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f51118: /* f51118: mov eax, 0xf57624 */
  eax = 0xf57624u;
/* f5111d: jmp 0xf4faaa */
  goto L_f4faaa;
}

void f_f51130(void) {
  LOAD_REGS();
  goto L_f51130;
L_f4faaa: /* f4faaa: jmp dword ptr [0xf604f4] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f51130: /* f51130: mov eax, 0xf5768c */
  eax = 0xf5768cu;
/* f51135: jmp 0xf4faaa */
  goto L_f4faaa;
}

void f_f51140(void) {
  LOAD_REGS();
  goto L_f51140;
L_f4faaa: /* f4faaa: jmp dword ptr [0xf604f4] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f51140: /* f51140: mov eax, 0xf576f8 */
  eax = 0xf576f8u;
/* f51145: jmp 0xf4faaa */
  goto L_f4faaa;
}

void f_f51150(void) {
  LOAD_REGS();
L_f51150: /* f51150: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* f51153: jmp 0xf4114f */
  SPILL(); f_f4114f(); return;
}

void f_f51158(void) {
  LOAD_REGS();
  goto L_f51158;
L_f4faaa: /* f4faaa: jmp dword ptr [0xf604f4] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f51158: /* f51158: mov eax, 0xf57738 */
  eax = 0xf57738u;
/* f5115d: jmp 0xf4faaa */
  goto L_f4faaa;
}

void f_f51170(void) {
  LOAD_REGS();
  goto L_f51170;
L_f4faaa: /* f4faaa: jmp dword ptr [0xf604f4] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f51170: /* f51170: mov eax, 0xf577a0 */
  eax = 0xf577a0u;
/* f51175: jmp 0xf4faaa */
  goto L_f4faaa;
}

void f_f51180(void) {
  LOAD_REGS();
  goto L_f51180;
L_f4faaa: /* f4faaa: jmp dword ptr [0xf604f4] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f51180: /* f51180: mov eax, 0xf5780c */
  eax = 0xf5780cu;
/* f51185: jmp 0xf4faaa */
  goto L_f4faaa;
}

void f_f51190(void) {
  LOAD_REGS();
L_f51190: /* f51190: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* f51193: jmp 0xf4114f */
  SPILL(); f_f4114f(); return;
}

void f_f51198(void) {
  LOAD_REGS();
  goto L_f51198;
L_f4faaa: /* f4faaa: jmp dword ptr [0xf604f4] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f51198: /* f51198: mov eax, 0xf5784c */
  eax = 0xf5784cu;
/* f5119d: jmp 0xf4faaa */
  goto L_f4faaa;
}

void f_f511b0(void) {
  LOAD_REGS();
  goto L_f511b0;
L_f4faaa: /* f4faaa: jmp dword ptr [0xf604f4] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f511b0: /* f511b0: mov eax, 0xf578b4 */
  eax = 0xf578b4u;
/* f511b5: jmp 0xf4faaa */
  goto L_f4faaa;
}

void f_f511c0(void) {
  LOAD_REGS();
L_f511c0: /* f511c0: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* f511c3: jmp 0xf41113 */
  SPILL(); f_f41113(); return;
}

void f_f511c8(void) {
  LOAD_REGS();
  goto L_f511c8;
L_f4faaa: /* f4faaa: jmp dword ptr [0xf604f4] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f511c8: /* f511c8: mov eax, 0xf578f4 */
  eax = 0xf578f4u;
/* f511cd: jmp 0xf4faaa */
  goto L_f4faaa;
}

void f_f511e0(void) {
  LOAD_REGS();
  goto L_f511e0;
L_f4faaa: /* f4faaa: jmp dword ptr [0xf604f4] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f511e0: /* f511e0: mov eax, 0xf5795c */
  eax = 0xf5795cu;
/* f511e5: jmp 0xf4faaa */
  goto L_f4faaa;
}

void f_f511f0(void) {
  LOAD_REGS();
  goto L_f511f0;
L_f4faaa: /* f4faaa: jmp dword ptr [0xf604f4] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f511f0: /* f511f0: mov eax, 0xf579c8 */
  eax = 0xf579c8u;
/* f511f5: jmp 0xf4faaa */
  goto L_f4faaa;
}

void f_f51200(void) {
  LOAD_REGS();
L_f51200: /* f51200: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f51203: jmp dword ptr [0xf6037c] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_f51209(void) {
  LOAD_REGS();
  goto L_f51209;
L_f4faaa: /* f4faaa: jmp dword ptr [0xf604f4] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f51209: /* f51209: mov eax, 0xf579f8 */
  eax = 0xf579f8u;
/* f5120e: jmp 0xf4faaa */
  goto L_f4faaa;
}

void f_f51220(void) {
  LOAD_REGS();
  goto L_f51220;
L_f4faaa: /* f4faaa: jmp dword ptr [0xf604f4] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f51220: /* f51220: mov eax, 0xf57a5c */
  eax = 0xf57a5cu;
/* f51225: jmp 0xf4faaa */
  goto L_f4faaa;
}

void f_f51230(void) {
  LOAD_REGS();
  goto L_f51230;
L_f4faaa: /* f4faaa: jmp dword ptr [0xf604f4] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f51230: /* f51230: mov eax, 0xf57ac8 */
  eax = 0xf57ac8u;
/* f51235: jmp 0xf4faaa */
  goto L_f4faaa;
}

void f_f51240(void) {
  LOAD_REGS();
  goto L_f51240;
L_f4faaa: /* f4faaa: jmp dword ptr [0xf604f4] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f51240: /* f51240: mov eax, 0xf57b34 */
  eax = 0xf57b34u;
/* f51245: jmp 0xf4faaa */
  goto L_f4faaa;
}

void f_f51250(void) {
  LOAD_REGS();
  goto L_f51250;
L_f4faaa: /* f4faaa: jmp dword ptr [0xf604f4] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f51250: /* f51250: mov eax, 0xf57ba0 */
  eax = 0xf57ba0u;
/* f51255: jmp 0xf4faaa */
  goto L_f4faaa;
}

void f_f51260(void) {
  LOAD_REGS();
  goto L_f51260;
L_f4faaa: /* f4faaa: jmp dword ptr [0xf604f4] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f51260: /* f51260: mov eax, 0xf57c0c */
  eax = 0xf57c0cu;
/* f51265: jmp 0xf4faaa */
  goto L_f4faaa;
}

void f_f51270(void) {
  LOAD_REGS();
  goto L_f51270;
L_f4faaa: /* f4faaa: jmp dword ptr [0xf604f4] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f51270: /* f51270: mov eax, 0xf57c78 */
  eax = 0xf57c78u;
/* f51275: jmp 0xf4faaa */
  goto L_f4faaa;
}

void f_f51280(void) {
  LOAD_REGS();
  goto L_f51280;
L_f4faaa: /* f4faaa: jmp dword ptr [0xf604f4] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f51280: /* f51280: mov eax, 0xf57ce4 */
  eax = 0xf57ce4u;
/* f51285: jmp 0xf4faaa */
  goto L_f4faaa;
}

void f_f51290(void) {
  LOAD_REGS();
  goto L_f51290;
L_f4faaa: /* f4faaa: jmp dword ptr [0xf604f4] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f51290: /* f51290: mov eax, 0xf57d50 */
  eax = 0xf57d50u;
/* f51295: jmp 0xf4faaa */
  goto L_f4faaa;
}

void f_f512a0(void) {
  LOAD_REGS();
  goto L_f512a0;
L_f4faaa: /* f4faaa: jmp dword ptr [0xf604f4] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f512a0: /* f512a0: mov eax, 0xf57dbc */
  eax = 0xf57dbcu;
/* f512a5: jmp 0xf4faaa */
  goto L_f4faaa;
}

void f_f512b0(void) {
  LOAD_REGS();
  goto L_f512b0;
L_f4faaa: /* f4faaa: jmp dword ptr [0xf604f4] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f512b0: /* f512b0: mov eax, 0xf57e28 */
  eax = 0xf57e28u;
/* f512b5: jmp 0xf4faaa */
  goto L_f4faaa;
}

void f_f512c0(void) {
  LOAD_REGS();
  goto L_f512c0;
L_f4faaa: /* f4faaa: jmp dword ptr [0xf604f4] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f512c0: /* f512c0: mov eax, 0xf57e94 */
  eax = 0xf57e94u;
/* f512c5: jmp 0xf4faaa */
  goto L_f4faaa;
}

void f_f512d0(void) {
  LOAD_REGS();
L_f512d0: /* f512d0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f512d3: jmp dword ptr [0xf6037c] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_f512d9(void) {
  LOAD_REGS();
  goto L_f512d9;
L_f4faaa: /* f4faaa: jmp dword ptr [0xf604f4] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f512d9: /* f512d9: mov eax, 0xf57ec4 */
  eax = 0xf57ec4u;
/* f512de: jmp 0xf4faaa */
  goto L_f4faaa;
}

void f_f512f0(void) {
  LOAD_REGS();
  goto L_f512f0;
L_f4faaa: /* f4faaa: jmp dword ptr [0xf604f4] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f512f0: /* f512f0: mov eax, 0xf57f28 */
  eax = 0xf57f28u;
/* f512f5: jmp 0xf4faaa */
  goto L_f4faaa;
}

void f_f51300(void) {
  LOAD_REGS();
L_f51300: /* f51300: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f51303: jmp 0xf41113 */
  SPILL(); f_f41113(); return;
}

void f_f51308(void) {
  LOAD_REGS();
L_f51308: /* f51308: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f5130b: add ecx, 0xfc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f51311: jmp 0xf412b7 */
  SPILL(); f_f412b7(); return;
}

void f_f51316(void) {
  LOAD_REGS();
  goto L_f51316;
L_f4faaa: /* f4faaa: jmp dword ptr [0xf604f4] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f51316: /* f51316: mov eax, 0xf57f60 */
  eax = 0xf57f60u;
/* f5131b: jmp 0xf4faaa */
  goto L_f4faaa;
}

void f_f51330(void) {
  LOAD_REGS();
L_f51330: /* f51330: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f51333: jmp 0xf41113 */
  SPILL(); f_f41113(); return;
}

void f_f51338(void) {
  LOAD_REGS();
  goto L_f51338;
L_f4faaa: /* f4faaa: jmp dword ptr [0xf604f4] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f51338: /* f51338: mov eax, 0xf57f88 */
  eax = 0xf57f88u;
/* f5133d: jmp 0xf4faaa */
  goto L_f4faaa;
}

void f_f51350(void) {
  LOAD_REGS();
  goto L_f51350;
L_f4faaa: /* f4faaa: jmp dword ptr [0xf604f4] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f51350: /* f51350: mov eax, 0xf57fec */
  eax = 0xf57fecu;
/* f51355: jmp 0xf4faaa */
  goto L_f4faaa;
}

void f_f523d0(void) {
  LOAD_REGS();
L_f523d0: /* f523d0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f523d3: mov eax, dword ptr [0xf603a4] */
  eax = R32((uint32_t)(0xf603a4u));
/* f523d8: mov edx, dword ptr [0xf603a0] */
  edx = R32((uint32_t)(0xf603a0u));
/* f523de: mov ecx, dword ptr [0xf604a0] */
  ecx = R32((uint32_t)(0xf604a0u));
/* f523e4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f523e5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f523e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f523e7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f523e8: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* f523ec: mov eax, dword ptr [0xf6049c] */
  eax = R32((uint32_t)(0xf6049cu));
/* f523f1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f523f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f523f3: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* f523f8: xor esi, esi */
  esi = 0;
/* f523fa: xor edi, edi */
  edi = 0;
/* f523fc: xor ebx, ebx */
  ebx = 0;
/* f523fe: xor ebp, ebp */
  ebp = 0;
/* f52400: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* f52404: call dword ptr [0xf6039c] */
  esp -= 4; W32(esp, 0xf5240au); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* f5240a: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* f5240e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f5240f: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* f52413: push 0xf5b560 */
  { uint32_t v = 0xf5b560u; esp -= 4; W32(esp, v); }
/* f52418: push 0xf5b716 */
  { uint32_t v = 0xf5b716u; esp -= 4; W32(esp, v); }
/* f5241d: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f52420: mov ecx, esp */
  ecx = esp;
/* f52422: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f52423: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* f52425: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f52426: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* f52429: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f5242b: mov dword ptr [ecx + 8], ebx */
  W32((uint32_t)(ecx + 0x8u), ebx);
/* f5242e: push 0xe0 */
  { uint32_t v = 0xe0u; esp -= 4; W32(esp, v); }
/* f52433: mov dword ptr [ecx + 0xc], ebp */
  W32((uint32_t)(ecx + 0xcu), ebp);
/* f52436: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f52437: mov ecx, 0xf5d6a8 */
  ecx = 0xf5d6a8u;
/* f5243c: call dword ptr [0xf60398] */
  esp -= 4; W32(esp, 0xf52442u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* f52442: push 0xf53940 */
  { uint32_t v = 0xf53940u; esp -= 4; W32(esp, v); }
/* f52447: call 0xf4fc1b */
  esp -= 4; W32(esp, 0xf5244cu); SPILL(); f_f4fc1b(); if (g_unwind) return; RELOAD();
/* f5244c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f5244f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f52450: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f52451: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f52452: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f52453: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f52456: ret  */
  esp += 4; SPILL(); return;
}

void f_f52490(void) {
  LOAD_REGS();
L_f52490: /* f52490: mov dword ptr [0xf5d174], 0xf5d6a8 */
  W32((uint32_t)(0xf5d174u), 0xf5d6a8u);
/* f5249a: ret  */
  esp += 4; SPILL(); return;
}

void f_f524b0(void) {
  LOAD_REGS();
L_f524b0: /* f524b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f524b1: mov ecx, dword ptr [0xf603a0] */
  ecx = R32((uint32_t)(0xf603a0u));
/* f524b7: mov eax, dword ptr [0xf603a4] */
  eax = R32((uint32_t)(0xf603a4u));
/* f524bc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f524bd: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f524be: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f524bf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f524c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f524c1: push 0xf4109b */
  { uint32_t v = 0xf4109bu; esp -= 4; W32(esp, v); }
/* f524c6: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* f524cb: xor esi, esi */
  esi = 0;
/* f524cd: xor edi, edi */
  edi = 0;
/* f524cf: xor ebx, ebx */
  ebx = 0;
/* f524d1: xor ebp, ebp */
  ebp = 0;
/* f524d3: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* f524d7: call dword ptr [0xf6039c] */
  esp -= 4; W32(esp, 0xf524ddu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* f524dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f524de: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* f524e2: push 0xf5b560 */
  { uint32_t v = 0xf5b560u; esp -= 4; W32(esp, v); }
/* f524e7: push 0xf5b99a */
  { uint32_t v = 0xf5b99au; esp -= 4; W32(esp, v); }
/* f524ec: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f524ef: mov edx, esp */
  edx = esp;
/* f524f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f524f2: push 0xf5d6a8 */
  { uint32_t v = 0xf5d6a8u; esp -= 4; W32(esp, v); }
/* f524f7: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* f524f9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f524fa: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* f524fd: push 0x514 */
  { uint32_t v = 0x514u; esp -= 4; W32(esp, v); }
/* f52502: mov dword ptr [edx + 8], ebx */
  W32((uint32_t)(edx + 0x8u), ebx);
/* f52505: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f52506: mov ecx, 0xf5c718 */
  ecx = 0xf5c718u;
/* f5250b: mov dword ptr [edx + 0xc], ebp */
  W32((uint32_t)(edx + 0xcu), ebp);
/* f5250e: call dword ptr [0xf60398] */
  esp -= 4; W32(esp, 0xf52514u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* f52514: push 0xf53960 */
  { uint32_t v = 0xf53960u; esp -= 4; W32(esp, v); }
/* f52519: call 0xf4fc1b */
  esp -= 4; W32(esp, 0xf5251eu); SPILL(); f_f4fc1b(); if (g_unwind) return; RELOAD();
/* f5251e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f52521: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f52522: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f52523: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f52524: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f52525: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* f52526: ret  */
  esp += 4; SPILL(); return;
}

void f_f52550(void) {
  LOAD_REGS();
L_f52550: /* f52550: mov dword ptr [0xf5eb64], 0xf5c718 */
  W32((uint32_t)(0xf5eb64u), 0xf5c718u);
/* f5255a: ret  */
  esp += 4; SPILL(); return;
}

void f_f52570(void) {
  LOAD_REGS();
L_f52570: /* f52570: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f52571: mov ecx, dword ptr [0xf603a0] */
  ecx = R32((uint32_t)(0xf603a0u));
/* f52577: mov edx, dword ptr [0xf6049c] */
  edx = R32((uint32_t)(0xf6049cu));
/* f5257d: mov eax, dword ptr [0xf603a4] */
  eax = R32((uint32_t)(0xf603a4u));
/* f52582: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f52583: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f52584: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f52585: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f52586: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f52587: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f52588: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* f5258d: xor esi, esi */
  esi = 0;
/* f5258f: xor edi, edi */
  edi = 0;
/* f52591: xor ebx, ebx */
  ebx = 0;
/* f52593: xor ebp, ebp */
  ebp = 0;
/* f52595: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* f52599: call dword ptr [0xf6039c] */
  esp -= 4; W32(esp, 0xf5259fu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* f5259f: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* f525a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f525a4: push 0xf5b560 */
  { uint32_t v = 0xf5b560u; esp -= 4; W32(esp, v); }
/* f525a9: push 0xf5babe */
  { uint32_t v = 0xf5babeu; esp -= 4; W32(esp, v); }
/* f525ae: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f525b1: mov eax, esp */
  eax = esp;
/* f525b3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f525b4: push 0xf5d6a8 */
  { uint32_t v = 0xf5d6a8u; esp -= 4; W32(esp, v); }
/* f525b9: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* f525bb: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f525bd: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* f525c0: push 0x1300 */
  { uint32_t v = 0x1300u; esp -= 4; W32(esp, v); }
/* f525c5: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* f525c8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f525c9: mov ecx, 0xf5cc48 */
  ecx = 0xf5cc48u;
/* f525ce: mov dword ptr [eax + 0xc], ebp */
  W32((uint32_t)(eax + 0xcu), ebp);
/* f525d1: call dword ptr [0xf60398] */
  esp -= 4; W32(esp, 0xf525d7u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* f525d7: push 0xf53980 */
  { uint32_t v = 0xf53980u; esp -= 4; W32(esp, v); }
/* f525dc: call 0xf4fc1b */
  esp -= 4; W32(esp, 0xf525e1u); SPILL(); f_f4fc1b(); if (g_unwind) return; RELOAD();
/* f525e1: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f525e4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f525e5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f525e6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f525e7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f525e8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* f525e9: ret  */
  esp += 4; SPILL(); return;
}

void f_f52610(void) {
  LOAD_REGS();
L_f52610: /* f52610: mov dword ptr [0xf5e634], 0xf5cc48 */
  W32((uint32_t)(0xf5e634u), 0xf5cc48u);
/* f5261a: ret  */
  esp += 4; SPILL(); return;
}

void f_f52630(void) {
  LOAD_REGS();
L_f52630: /* f52630: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f52631: mov ecx, dword ptr [0xf603a0] */
  ecx = R32((uint32_t)(0xf603a0u));
/* f52637: mov eax, dword ptr [0xf603a4] */
  eax = R32((uint32_t)(0xf603a4u));
/* f5263c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f5263d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f5263e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f5263f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f52640: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f52641: push 0xf41041 */
  { uint32_t v = 0xf41041u; esp -= 4; W32(esp, v); }
/* f52646: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* f5264b: xor esi, esi */
  esi = 0;
/* f5264d: xor edi, edi */
  edi = 0;
/* f5264f: xor ebx, ebx */
  ebx = 0;
/* f52651: xor ebp, ebp */
  ebp = 0;
/* f52653: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* f52657: call dword ptr [0xf6039c] */
  esp -= 4; W32(esp, 0xf5265du); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* f5265d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f5265e: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* f52662: push 0xf5b560 */
  { uint32_t v = 0xf5b560u; esp -= 4; W32(esp, v); }
/* f52667: push 0xf5bbce */
  { uint32_t v = 0xf5bbceu; esp -= 4; W32(esp, v); }
/* f5266c: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f5266f: mov edx, esp */
  edx = esp;
/* f52671: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f52672: push 0xf5cc48 */
  { uint32_t v = 0xf5cc48u; esp -= 4; W32(esp, v); }
/* f52677: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* f52679: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f5267a: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* f5267d: push 0x1304 */
  { uint32_t v = 0x1304u; esp -= 4; W32(esp, v); }
/* f52682: mov dword ptr [edx + 8], ebx */
  W32((uint32_t)(edx + 0x8u), ebx);
/* f52685: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f52686: mov ecx, 0xf5e108 */
  ecx = 0xf5e108u;
/* f5268b: mov dword ptr [edx + 0xc], ebp */
  W32((uint32_t)(edx + 0xcu), ebp);
/* f5268e: call dword ptr [0xf60398] */
  esp -= 4; W32(esp, 0xf52694u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* f52694: push 0xf539a0 */
  { uint32_t v = 0xf539a0u; esp -= 4; W32(esp, v); }
/* f52699: call 0xf4fc1b */
  esp -= 4; W32(esp, 0xf5269eu); SPILL(); f_f4fc1b(); if (g_unwind) return; RELOAD();
/* f5269e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f526a1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f526a2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f526a3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f526a4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f526a5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* f526a6: ret  */
  esp += 4; SPILL(); return;
}

void f_f526d0(void) {
  LOAD_REGS();
L_f526d0: /* f526d0: mov dword ptr [0xf5c708], 0xf5e108 */
  W32((uint32_t)(0xf5c708u), 0xf5e108u);
/* f526da: ret  */
  esp += 4; SPILL(); return;
}

void f_f526f0(void) {
  LOAD_REGS();
L_f526f0: /* f526f0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f526f1: mov ecx, dword ptr [0xf603a0] */
  ecx = R32((uint32_t)(0xf603a0u));
/* f526f7: mov eax, dword ptr [0xf603a4] */
  eax = R32((uint32_t)(0xf603a4u));
/* f526fc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f526fd: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f526fe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f526ff: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f52700: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f52701: push 0xf41050 */
  { uint32_t v = 0xf41050u; esp -= 4; W32(esp, v); }
/* f52706: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* f5270b: xor esi, esi */
  esi = 0;
/* f5270d: xor edi, edi */
  edi = 0;
/* f5270f: xor ebx, ebx */
  ebx = 0;
/* f52711: xor ebp, ebp */
  ebp = 0;
/* f52713: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* f52717: call dword ptr [0xf6039c] */
  esp -= 4; W32(esp, 0xf5271du); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* f5271d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f5271e: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* f52722: push 0xf5b560 */
  { uint32_t v = 0xf5b560u; esp -= 4; W32(esp, v); }
/* f52727: push 0xf5bcde */
  { uint32_t v = 0xf5bcdeu; esp -= 4; W32(esp, v); }
/* f5272c: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f5272f: mov edx, esp */
  edx = esp;
/* f52731: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f52732: push 0xf5cc48 */
  { uint32_t v = 0xf5cc48u; esp -= 4; W32(esp, v); }
/* f52737: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* f52739: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f5273a: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* f5273d: push 0x1300 */
  { uint32_t v = 0x1300u; esp -= 4; W32(esp, v); }
/* f52742: mov dword ptr [edx + 8], ebx */
  W32((uint32_t)(edx + 0x8u), ebx);
/* f52745: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f52746: mov ecx, 0xf5dbd8 */
  ecx = 0xf5dbd8u;
/* f5274b: mov dword ptr [edx + 0xc], ebp */
  W32((uint32_t)(edx + 0xcu), ebp);
/* f5274e: call dword ptr [0xf60398] */
  esp -= 4; W32(esp, 0xf52754u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* f52754: push 0xf539c0 */
  { uint32_t v = 0xf539c0u; esp -= 4; W32(esp, v); }
/* f52759: call 0xf4fc1b */
  esp -= 4; W32(esp, 0xf5275eu); SPILL(); f_f4fc1b(); if (g_unwind) return; RELOAD();
/* f5275e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f52761: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f52762: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f52763: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f52764: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f52765: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* f52766: ret  */
  esp += 4; SPILL(); return;
}

void f_f52790(void) {
  LOAD_REGS();
L_f52790: /* f52790: mov dword ptr [0xf5c710], 0xf5dbd8 */
  W32((uint32_t)(0xf5c710u), 0xf5dbd8u);
/* f5279a: ret  */
  esp += 4; SPILL(); return;
}

void f_f527b0(void) {
  LOAD_REGS();
L_f527b0: /* f527b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f527b1: mov ecx, dword ptr [0xf603a0] */
  ecx = R32((uint32_t)(0xf603a0u));
/* f527b7: mov eax, dword ptr [0xf603a4] */
  eax = R32((uint32_t)(0xf603a4u));
/* f527bc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f527bd: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f527be: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f527bf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f527c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f527c1: push 0xf4134d */
  { uint32_t v = 0xf4134du; esp -= 4; W32(esp, v); }
/* f527c6: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* f527cb: xor esi, esi */
  esi = 0;
/* f527cd: xor edi, edi */
  edi = 0;
/* f527cf: xor ebx, ebx */
  ebx = 0;
/* f527d1: xor ebp, ebp */
  ebp = 0;
/* f527d3: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* f527d7: call dword ptr [0xf6039c] */
  esp -= 4; W32(esp, 0xf527ddu); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* f527dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f527de: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* f527e2: push 0xf5b560 */
  { uint32_t v = 0xf5b560u; esp -= 4; W32(esp, v); }
/* f527e7: push 0xf5bd32 */
  { uint32_t v = 0xf5bd32u; esp -= 4; W32(esp, v); }
/* f527ec: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f527ef: mov edx, esp */
  edx = esp;
/* f527f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f527f2: push 0xf5cc48 */
  { uint32_t v = 0xf5cc48u; esp -= 4; W32(esp, v); }
/* f527f7: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* f527f9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f527fa: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* f527fd: push 0x130c */
  { uint32_t v = 0x130cu; esp -= 4; W32(esp, v); }
/* f52802: mov dword ptr [edx + 8], ebx */
  W32((uint32_t)(edx + 0x8u), ebx);
/* f52805: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f52806: mov ecx, 0xf5d178 */
  ecx = 0xf5d178u;
/* f5280b: mov dword ptr [edx + 0xc], ebp */
  W32((uint32_t)(edx + 0xcu), ebp);
/* f5280e: call dword ptr [0xf60398] */
  esp -= 4; W32(esp, 0xf52814u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* f52814: push 0xf539e0 */
  { uint32_t v = 0xf539e0u; esp -= 4; W32(esp, v); }
/* f52819: call 0xf4fc1b */
  esp -= 4; W32(esp, 0xf5281eu); SPILL(); f_f4fc1b(); if (g_unwind) return; RELOAD();
/* f5281e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f52821: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f52822: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f52823: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f52824: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f52825: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* f52826: ret  */
  esp += 4; SPILL(); return;
}

void f_f52850(void) {
  LOAD_REGS();
L_f52850: /* f52850: mov dword ptr [0xf5c70c], 0xf5d178 */
  W32((uint32_t)(0xf5c70cu), 0xf5d178u);
/* f5285a: ret  */
  esp += 4; SPILL(); return;
}

void f_f52870(void) {
  LOAD_REGS();
L_f52870: /* f52870: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f52871: mov ecx, dword ptr [0xf603a0] */
  ecx = R32((uint32_t)(0xf603a0u));
/* f52877: mov eax, dword ptr [0xf603a4] */
  eax = R32((uint32_t)(0xf603a4u));
/* f5287c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f5287d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f5287e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f5287f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f52880: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f52881: push 0xf412e4 */
  { uint32_t v = 0xf412e4u; esp -= 4; W32(esp, v); }
/* f52886: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* f5288b: xor esi, esi */
  esi = 0;
/* f5288d: xor edi, edi */
  edi = 0;
/* f5288f: xor ebx, ebx */
  ebx = 0;
/* f52891: xor ebp, ebp */
  ebp = 0;
/* f52893: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* f52897: call dword ptr [0xf6039c] */
  esp -= 4; W32(esp, 0xf5289du); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* f5289d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f5289e: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* f528a2: push 0xf5b560 */
  { uint32_t v = 0xf5b560u; esp -= 4; W32(esp, v); }
/* f528a7: push 0xf5bd9a */
  { uint32_t v = 0xf5bd9au; esp -= 4; W32(esp, v); }
/* f528ac: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f528af: mov edx, esp */
  edx = esp;
/* f528b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f528b2: push 0xf5d6a8 */
  { uint32_t v = 0xf5d6a8u; esp -= 4; W32(esp, v); }
/* f528b7: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* f528b9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f528ba: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* f528bd: push 0x124 */
  { uint32_t v = 0x124u; esp -= 4; W32(esp, v); }
/* f528c2: mov dword ptr [edx + 8], ebx */
  W32((uint32_t)(edx + 0x8u), ebx);
/* f528c5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f528c6: mov ecx, 0xf5e638 */
  ecx = 0xf5e638u;
/* f528cb: mov dword ptr [edx + 0xc], ebp */
  W32((uint32_t)(edx + 0xcu), ebp);
/* f528ce: call dword ptr [0xf60398] */
  esp -= 4; W32(esp, 0xf528d4u); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* f528d4: push 0xf53a00 */
  { uint32_t v = 0xf53a00u; esp -= 4; W32(esp, v); }
/* f528d9: call 0xf4fc1b */
  esp -= 4; W32(esp, 0xf528deu); SPILL(); f_f4fc1b(); if (g_unwind) return; RELOAD();
/* f528de: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f528e1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f528e2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f528e3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f528e4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f528e5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* f528e6: ret  */
  esp += 4; SPILL(); return;
}

void f_f52910(void) {
  LOAD_REGS();
L_f52910: /* f52910: mov dword ptr [0xf5c714], 0xf5e638 */
  W32((uint32_t)(0xf5c714u), 0xf5e638u);
/* f5291a: ret  */
  esp += 4; SPILL(); return;
}

void f_f53940(void) {
  LOAD_REGS();
L_f53940: /* f53940: mov ecx, 0xf5d6a8 */
  ecx = 0xf5d6a8u;
/* f53945: jmp dword ptr [0xf603a8] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_f53960(void) {
  LOAD_REGS();
L_f53960: /* f53960: mov ecx, 0xf5c718 */
  ecx = 0xf5c718u;
/* f53965: jmp dword ptr [0xf603a8] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_f53980(void) {
  LOAD_REGS();
L_f53980: /* f53980: mov ecx, 0xf5cc48 */
  ecx = 0xf5cc48u;
/* f53985: jmp dword ptr [0xf603a8] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_f539a0(void) {
  LOAD_REGS();
L_f539a0: /* f539a0: mov ecx, 0xf5e108 */
  ecx = 0xf5e108u;
/* f539a5: jmp dword ptr [0xf603a8] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_f539c0(void) {
  LOAD_REGS();
L_f539c0: /* f539c0: mov ecx, 0xf5dbd8 */
  ecx = 0xf5dbd8u;
/* f539c5: jmp dword ptr [0xf603a8] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_f539e0(void) {
  LOAD_REGS();
L_f539e0: /* f539e0: mov ecx, 0xf5d178 */
  ecx = 0xf5d178u;
/* f539e5: jmp dword ptr [0xf603a8] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_f53a00(void) {
  LOAD_REGS();
L_f53a00: /* f53a00: mov ecx, 0xf5e638 */
  ecx = 0xf5e638u;
/* f53a05: jmp dword ptr [0xf603a8] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}
