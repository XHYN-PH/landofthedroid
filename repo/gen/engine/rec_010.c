#include "recomp.h"
#include "rec_mod.h"

void f_714090(void) {
  LOAD_REGS();
L_714090: /* 714090: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 714091: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 714092: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 714098: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 714099: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71409a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 71409e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7140a0: mov esi, ecx */
  esi = ecx;
/* 7140a2: jge 0x7140b8 */
  if ((sf == of)) goto L_7140b8;
L_7140a4: /* 7140a4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 7140a9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7140ae: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 7140b3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7140b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7140b5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7140b8: /* 7140b8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7140bb: jle 0x7140d1 */
  if ((zf || sf != of)) goto L_7140d1;
L_7140bd: /* 7140bd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7140c2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7140c7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7140cc: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7140ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7140ce: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7140d1: /* 7140d1: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 7140d5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7140d8: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 7140db: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7140dd: jle 0x7140f3 */
  if ((zf || sf != of)) goto L_7140f3;
L_7140df: /* 7140df: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7140e4: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7140e9: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7140ee: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7140f0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7140f0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7140f3: /* 7140f3: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7140f5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7140f6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7140f7: mov ecx, esi */
  ecx = esi;
/* 7140f9: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7140ffu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7140ff: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 714100: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 714101: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 714102: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 714103: ret 8 */
  esp += 12; SPILL(); return;
}

void f_714130(void) {
  LOAD_REGS();
L_714130: /* 714130: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 714131: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 714132: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 714133: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 714137: mov esi, ecx */
  esi = ecx;
/* 714139: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 71413b: je 0x714176 */
  if (zf) goto L_714176;
L_71413d: /* 71413d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 714140: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 714141: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 714143: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x714149u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 714149: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 71414c: xor ebx, ebx */
  ebx = 0;
/* 71414e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 714150: jle 0x714176 */
  if ((zf || sf != of)) goto L_714176;
L_714152: /* 714152: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 714154: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 714156: mov ecx, esi */
  ecx = esi;
/* 714158: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x71415eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 71415e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 714160: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 714163: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 714165: je 0x71416e */
  if (zf) goto L_71416e;
L_714167: /* 714167: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 714169: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 71416c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_71416e: /* 71416e: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 714171: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 714172: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 714174: jl 0x714152 */
  if ((sf != of)) goto L_714152;
L_714176: /* 714176: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 714177: mov eax, esi */
  eax = esi;
/* 714179: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71417a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71417b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7141a0(void) {
  LOAD_REGS();
L_7141a0: /* 7141a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7141a1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7141a2: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 7141a8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7141a9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7141aa: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 7141ae: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7141b0: mov esi, ecx */
  esi = ecx;
/* 7141b2: jge 0x7141c8 */
  if ((sf == of)) goto L_7141c8;
L_7141b4: /* 7141b4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 7141b9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7141be: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 7141c3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7141c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7141c5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7141c8: /* 7141c8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7141cb: jle 0x7141e1 */
  if ((zf || sf != of)) goto L_7141e1;
L_7141cd: /* 7141cd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7141d2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7141d7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7141dc: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7141deu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7141de: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7141e1: /* 7141e1: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 7141e5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7141e8: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 7141eb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7141ed: jle 0x714203 */
  if ((zf || sf != of)) goto L_714203;
L_7141ef: /* 7141ef: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7141f4: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7141f9: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7141fe: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x714200u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 714200: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_714203: /* 714203: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 714205: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 714206: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 714207: mov ecx, esi */
  ecx = esi;
/* 714209: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71420fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71420f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 714210: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 714211: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 714212: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 714213: ret 8 */
  esp += 12; SPILL(); return;
}

void f_714240(void) {
  LOAD_REGS();
L_714240: /* 714240: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 714241: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 714242: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 714243: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 714247: mov esi, ecx */
  esi = ecx;
/* 714249: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 71424b: je 0x714286 */
  if (zf) goto L_714286;
L_71424d: /* 71424d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 714250: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 714251: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 714253: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x714259u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 714259: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 71425c: xor ebx, ebx */
  ebx = 0;
/* 71425e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 714260: jle 0x714286 */
  if ((zf || sf != of)) goto L_714286;
L_714262: /* 714262: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 714264: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 714266: mov ecx, esi */
  ecx = esi;
/* 714268: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x71426eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 71426e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 714270: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 714273: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 714275: je 0x71427e */
  if (zf) goto L_71427e;
L_714277: /* 714277: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 714279: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 71427c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_71427e: /* 71427e: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 714281: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 714282: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 714284: jl 0x714262 */
  if ((sf != of)) goto L_714262;
L_714286: /* 714286: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 714287: mov eax, esi */
  eax = esi;
/* 714289: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71428a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71428b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7142b0(void) {
  LOAD_REGS();
L_7142b0: /* 7142b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7142b1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7142b2: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 7142b8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7142b9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7142ba: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 7142be: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7142c0: mov esi, ecx */
  esi = ecx;
/* 7142c2: jge 0x7142d8 */
  if ((sf == of)) goto L_7142d8;
L_7142c4: /* 7142c4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 7142c9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7142ce: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 7142d3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7142d5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7142d5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7142d8: /* 7142d8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7142db: jle 0x7142f1 */
  if ((zf || sf != of)) goto L_7142f1;
L_7142dd: /* 7142dd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7142e2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7142e7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7142ec: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7142eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7142ee: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7142f1: /* 7142f1: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 7142f5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7142f8: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 7142fb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7142fd: jle 0x714313 */
  if ((zf || sf != of)) goto L_714313;
L_7142ff: /* 7142ff: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 714304: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 714309: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71430e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x714310u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 714310: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_714313: /* 714313: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 714315: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 714316: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 714317: mov ecx, esi */
  ecx = esi;
/* 714319: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71431fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71431f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 714320: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 714321: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 714322: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 714323: ret 8 */
  esp += 12; SPILL(); return;
}

void f_714350(void) {
  LOAD_REGS();
L_714350: /* 714350: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 714351: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 714352: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 714353: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 714357: mov esi, ecx */
  esi = ecx;
/* 714359: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 71435b: je 0x714396 */
  if (zf) goto L_714396;
L_71435d: /* 71435d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 714360: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 714361: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 714363: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x714369u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 714369: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 71436c: xor ebx, ebx */
  ebx = 0;
/* 71436e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 714370: jle 0x714396 */
  if ((zf || sf != of)) goto L_714396;
L_714372: /* 714372: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 714374: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 714376: mov ecx, esi */
  ecx = esi;
/* 714378: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x71437eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 71437e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 714380: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 714383: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 714385: je 0x71438e */
  if (zf) goto L_71438e;
L_714387: /* 714387: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 714389: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 71438c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_71438e: /* 71438e: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 714391: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 714392: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 714394: jl 0x714372 */
  if ((sf != of)) goto L_714372;
L_714396: /* 714396: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 714397: mov eax, esi */
  eax = esi;
/* 714399: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71439a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71439b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7143c0(void) {
  LOAD_REGS();
L_7143c0: /* 7143c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7143c1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7143c2: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 7143c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7143c9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7143ca: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 7143ce: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7143d0: mov esi, ecx */
  esi = ecx;
/* 7143d2: jge 0x7143e8 */
  if ((sf == of)) goto L_7143e8;
L_7143d4: /* 7143d4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 7143d9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7143de: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 7143e3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7143e5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7143e5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7143e8: /* 7143e8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7143eb: jle 0x714401 */
  if ((zf || sf != of)) goto L_714401;
L_7143ed: /* 7143ed: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7143f2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7143f7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7143fc: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7143feu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7143fe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_714401: /* 714401: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 714405: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 714408: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 71440b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71440d: jle 0x714423 */
  if ((zf || sf != of)) goto L_714423;
L_71440f: /* 71440f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 714414: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 714419: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71441e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x714420u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 714420: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_714423: /* 714423: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 714425: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 714426: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 714427: mov ecx, esi */
  ecx = esi;
/* 714429: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71442fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71442f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 714430: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 714431: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 714432: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 714433: ret 8 */
  esp += 12; SPILL(); return;
}

void f_714460(void) {
  LOAD_REGS();
L_714460: /* 714460: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 714461: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 714462: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 714463: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 714467: mov esi, ecx */
  esi = ecx;
/* 714469: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 71446b: je 0x7144a6 */
  if (zf) goto L_7144a6;
L_71446d: /* 71446d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 714470: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 714471: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 714473: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x714479u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 714479: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 71447c: xor ebx, ebx */
  ebx = 0;
/* 71447e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 714480: jle 0x7144a6 */
  if ((zf || sf != of)) goto L_7144a6;
L_714482: /* 714482: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 714484: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 714486: mov ecx, esi */
  ecx = esi;
/* 714488: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x71448eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 71448e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 714490: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 714493: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 714495: je 0x71449e */
  if (zf) goto L_71449e;
L_714497: /* 714497: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 714499: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 71449c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_71449e: /* 71449e: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7144a1: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7144a2: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7144a4: jl 0x714482 */
  if ((sf != of)) goto L_714482;
L_7144a6: /* 7144a6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7144a7: mov eax, esi */
  eax = esi;
/* 7144a9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7144aa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7144ab: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7144d0(void) {
  LOAD_REGS();
L_7144d0: /* 7144d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7144d1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7144d2: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 7144d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7144d9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7144da: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 7144de: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7144e0: mov esi, ecx */
  esi = ecx;
/* 7144e2: jge 0x7144f8 */
  if ((sf == of)) goto L_7144f8;
L_7144e4: /* 7144e4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 7144e9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7144ee: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 7144f3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7144f5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7144f5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7144f8: /* 7144f8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7144fb: jle 0x714511 */
  if ((zf || sf != of)) goto L_714511;
L_7144fd: /* 7144fd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 714502: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 714507: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71450c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x71450eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71450e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_714511: /* 714511: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 714515: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 714518: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 71451b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71451d: jle 0x714533 */
  if ((zf || sf != of)) goto L_714533;
L_71451f: /* 71451f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 714524: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 714529: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71452e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x714530u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 714530: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_714533: /* 714533: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 714535: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 714536: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 714537: mov ecx, esi */
  ecx = esi;
/* 714539: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71453fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71453f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 714540: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 714541: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 714542: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 714543: ret 8 */
  esp += 12; SPILL(); return;
}

void f_714570(void) {
  LOAD_REGS();
L_714570: /* 714570: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 714571: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 714572: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 714573: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 714577: mov esi, ecx */
  esi = ecx;
/* 714579: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 71457b: je 0x7145b6 */
  if (zf) goto L_7145b6;
L_71457d: /* 71457d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 714580: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 714581: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 714583: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x714589u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 714589: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 71458c: xor ebx, ebx */
  ebx = 0;
/* 71458e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 714590: jle 0x7145b6 */
  if ((zf || sf != of)) goto L_7145b6;
L_714592: /* 714592: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 714594: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 714596: mov ecx, esi */
  ecx = esi;
/* 714598: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x71459eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 71459e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7145a0: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 7145a3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7145a5: je 0x7145ae */
  if (zf) goto L_7145ae;
L_7145a7: /* 7145a7: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7145a9: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 7145ac: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_7145ae: /* 7145ae: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7145b1: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7145b2: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7145b4: jl 0x714592 */
  if ((sf != of)) goto L_714592;
L_7145b6: /* 7145b6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7145b7: mov eax, esi */
  eax = esi;
/* 7145b9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7145ba: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7145bb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7145e0(void) {
  LOAD_REGS();
L_7145e0: /* 7145e0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7145e1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7145e2: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 7145e8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7145e9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7145ea: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 7145ee: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7145f0: mov esi, ecx */
  esi = ecx;
/* 7145f2: jge 0x714608 */
  if ((sf == of)) goto L_714608;
L_7145f4: /* 7145f4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 7145f9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7145fe: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 714603: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x714605u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 714605: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_714608: /* 714608: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71460b: jle 0x714621 */
  if ((zf || sf != of)) goto L_714621;
L_71460d: /* 71460d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 714612: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 714617: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71461c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x71461eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71461e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_714621: /* 714621: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 714625: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 714628: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 71462b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71462d: jle 0x714643 */
  if ((zf || sf != of)) goto L_714643;
L_71462f: /* 71462f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 714634: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 714639: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71463e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x714640u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 714640: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_714643: /* 714643: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 714645: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 714646: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 714647: mov ecx, esi */
  ecx = esi;
/* 714649: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71464fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71464f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 714650: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 714651: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 714652: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 714653: ret 8 */
  esp += 12; SPILL(); return;
}

void f_714680(void) {
  LOAD_REGS();
L_714680: /* 714680: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 714681: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 714682: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 714683: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 714687: mov esi, ecx */
  esi = ecx;
/* 714689: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 71468b: je 0x7146c6 */
  if (zf) goto L_7146c6;
L_71468d: /* 71468d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 714690: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 714691: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 714693: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x714699u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 714699: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 71469c: xor ebx, ebx */
  ebx = 0;
/* 71469e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7146a0: jle 0x7146c6 */
  if ((zf || sf != of)) goto L_7146c6;
L_7146a2: /* 7146a2: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7146a4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7146a6: mov ecx, esi */
  ecx = esi;
/* 7146a8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7146aeu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7146ae: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7146b0: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 7146b3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7146b5: je 0x7146be */
  if (zf) goto L_7146be;
L_7146b7: /* 7146b7: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7146b9: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 7146bc: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_7146be: /* 7146be: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7146c1: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7146c2: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7146c4: jl 0x7146a2 */
  if ((sf != of)) goto L_7146a2;
L_7146c6: /* 7146c6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7146c7: mov eax, esi */
  eax = esi;
/* 7146c9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7146ca: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7146cb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7146f0(void) {
  LOAD_REGS();
L_7146f0: /* 7146f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7146f1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7146f2: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 7146f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7146f9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7146fa: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 7146fe: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 714700: mov esi, ecx */
  esi = ecx;
/* 714702: jge 0x714718 */
  if ((sf == of)) goto L_714718;
L_714704: /* 714704: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 714709: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71470e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 714713: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x714715u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 714715: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_714718: /* 714718: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71471b: jle 0x714731 */
  if ((zf || sf != of)) goto L_714731;
L_71471d: /* 71471d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 714722: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 714727: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71472c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x71472eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71472e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_714731: /* 714731: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 714735: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 714738: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 71473b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71473d: jle 0x714753 */
  if ((zf || sf != of)) goto L_714753;
L_71473f: /* 71473f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 714744: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 714749: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71474e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x714750u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 714750: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_714753: /* 714753: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 714755: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 714756: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 714757: mov ecx, esi */
  ecx = esi;
/* 714759: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71475fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71475f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 714760: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 714761: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 714762: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 714763: ret 8 */
  esp += 12; SPILL(); return;
}

void f_714790(void) {
  LOAD_REGS();
L_714790: /* 714790: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 714791: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 714792: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 714793: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 714797: mov esi, ecx */
  esi = ecx;
/* 714799: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 71479b: je 0x7147d6 */
  if (zf) goto L_7147d6;
L_71479d: /* 71479d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7147a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7147a1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7147a3: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7147a9u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7147a9: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7147ac: xor ebx, ebx */
  ebx = 0;
/* 7147ae: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7147b0: jle 0x7147d6 */
  if ((zf || sf != of)) goto L_7147d6;
L_7147b2: /* 7147b2: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7147b4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7147b6: mov ecx, esi */
  ecx = esi;
/* 7147b8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7147beu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7147be: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7147c0: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 7147c3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7147c5: je 0x7147ce */
  if (zf) goto L_7147ce;
L_7147c7: /* 7147c7: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7147c9: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 7147cc: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_7147ce: /* 7147ce: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7147d1: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7147d2: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7147d4: jl 0x7147b2 */
  if ((sf != of)) goto L_7147b2;
L_7147d6: /* 7147d6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7147d7: mov eax, esi */
  eax = esi;
/* 7147d9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7147da: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7147db: ret 4 */
  esp += 8; SPILL(); return;
}

void f_714800(void) {
  LOAD_REGS();
L_714800: /* 714800: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 714801: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 714802: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 714808: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 714809: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71480a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 71480e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 714810: mov esi, ecx */
  esi = ecx;
/* 714812: jge 0x714828 */
  if ((sf == of)) goto L_714828;
L_714814: /* 714814: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 714819: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71481e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 714823: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x714825u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 714825: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_714828: /* 714828: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71482b: jle 0x714841 */
  if ((zf || sf != of)) goto L_714841;
L_71482d: /* 71482d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 714832: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 714837: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71483c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x71483eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71483e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_714841: /* 714841: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 714845: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 714848: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 71484b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71484d: jle 0x714863 */
  if ((zf || sf != of)) goto L_714863;
L_71484f: /* 71484f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 714854: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 714859: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71485e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x714860u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 714860: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_714863: /* 714863: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 714865: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 714866: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 714867: mov ecx, esi */
  ecx = esi;
/* 714869: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71486fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71486f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 714870: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 714871: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 714872: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 714873: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7148a0(void) {
  LOAD_REGS();
L_7148a0: /* 7148a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7148a1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 7148a5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7148a6: mov esi, ecx */
  esi = ecx;
/* 7148a8: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7148aa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7148ab: je 0x7148ed */
  if (zf) goto L_7148ed;
L_7148ad: /* 7148ad: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 7148b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7148b1: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7148b3: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7148b9u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7148b9: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 7148bc: xor edi, edi */
  edi = 0;
/* 7148be: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7148c0: jle 0x7148ed */
  if ((zf || sf != of)) goto L_7148ed;
L_7148c2: /* 7148c2: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7148c4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7148c6: mov ecx, esi */
  ecx = esi;
/* 7148c8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7148ceu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7148ce: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7148d0: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 7148d3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7148d5: je 0x7148e5 */
  if (zf) goto L_7148e5;
L_7148d7: /* 7148d7: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7148d9: mov ecx, dword ptr [edx + edi*8] */
  ecx = R32((uint32_t)(edx + edi*8));
/* 7148dc: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7148de: mov edx, dword ptr [edx + edi*8 + 4] */
  edx = R32((uint32_t)(edx + edi*8 + 0x4u));
/* 7148e2: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
L_7148e5: /* 7148e5: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 7148e8: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7148e9: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7148eb: jl 0x7148c2 */
  if ((sf != of)) goto L_7148c2;
L_7148ed: /* 7148ed: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7148ee: mov eax, esi */
  eax = esi;
/* 7148f0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7148f1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7148f2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_714920(void) {
  LOAD_REGS();
L_714920: /* 714920: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 714921: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 714922: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 714928: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 714929: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71492a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 71492e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 714930: mov esi, ecx */
  esi = ecx;
/* 714932: jge 0x714948 */
  if ((sf == of)) goto L_714948;
L_714934: /* 714934: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 714939: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71493e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 714943: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x714945u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 714945: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_714948: /* 714948: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71494b: jle 0x714961 */
  if ((zf || sf != of)) goto L_714961;
L_71494d: /* 71494d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 714952: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 714957: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71495c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x71495eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71495e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_714961: /* 714961: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 714965: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 714968: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 71496b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71496d: jle 0x714983 */
  if ((zf || sf != of)) goto L_714983;
L_71496f: /* 71496f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 714974: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 714979: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71497e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x714980u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 714980: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_714983: /* 714983: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 714985: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 714986: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 714987: mov ecx, esi */
  ecx = esi;
/* 714989: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71498fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71498f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 714990: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 714991: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 714992: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 714993: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7149c0(void) {
  LOAD_REGS();
L_7149c0: /* 7149c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7149c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7149c2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7149c3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 7149c7: mov esi, ecx */
  esi = ecx;
/* 7149c9: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7149cb: je 0x714a20 */
  if (zf) goto L_714a20;
L_7149cd: /* 7149cd: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7149d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7149d1: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 7149d3: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7149d9u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7149d9: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7149dc: xor ebx, ebx */
  ebx = 0;
/* 7149de: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7149e0: jle 0x714a20 */
  if ((zf || sf != of)) goto L_714a20;
L_7149e2: /* 7149e2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7149e3: xor ebp, ebp */
  ebp = 0;
L_7149e5: /* 7149e5: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 7149e7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7149e9: mov ecx, esi */
  ecx = esi;
/* 7149eb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7149f1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7149f1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7149f3: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7149f6: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 7149f8: je 0x714a14 */
  if (zf) goto L_714a14;
L_7149fa: /* 7149fa: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 7149fc: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7149fe: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 714a00: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 714a02: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 714a05: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 714a08: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 714a0b: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 714a0e: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 714a11: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
L_714a14: /* 714a14: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 714a17: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 714a18: add ebp, 0x10 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 714a1b: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 714a1d: jl 0x7149e5 */
  if ((sf != of)) goto L_7149e5;
L_714a1f: /* 714a1f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_714a20: /* 714a20: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 714a21: mov eax, esi */
  eax = esi;
/* 714a23: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 714a24: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 714a25: ret 4 */
  esp += 8; SPILL(); return;
}

void f_714a50(void) {
  LOAD_REGS();
L_714a50: /* 714a50: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 714a51: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 714a52: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 714a58: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 714a59: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 714a5a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 714a5e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 714a60: mov esi, ecx */
  esi = ecx;
/* 714a62: jge 0x714a78 */
  if ((sf == of)) goto L_714a78;
L_714a64: /* 714a64: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 714a69: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 714a6e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 714a73: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x714a75u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 714a75: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_714a78: /* 714a78: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 714a7b: jle 0x714a91 */
  if ((zf || sf != of)) goto L_714a91;
L_714a7d: /* 714a7d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 714a82: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 714a87: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 714a8c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x714a8eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 714a8e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_714a91: /* 714a91: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 714a95: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 714a98: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 714a9b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 714a9d: jle 0x714ab3 */
  if ((zf || sf != of)) goto L_714ab3;
L_714a9f: /* 714a9f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 714aa4: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 714aa9: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 714aae: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x714ab0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 714ab0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_714ab3: /* 714ab3: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 714ab5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 714ab6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 714ab7: mov ecx, esi */
  ecx = esi;
/* 714ab9: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x714abfu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 714abf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 714ac0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 714ac1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 714ac2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 714ac3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_714af0(void) {
  LOAD_REGS();
L_714af0: /* 714af0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 714af1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 714af5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 714af6: mov esi, ecx */
  esi = ecx;
/* 714af8: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 714afa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 714afb: je 0x714b3d */
  if (zf) goto L_714b3d;
L_714afd: /* 714afd: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 714b00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 714b01: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 714b03: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x714b09u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 714b09: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 714b0c: xor edi, edi */
  edi = 0;
/* 714b0e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 714b10: jle 0x714b3d */
  if ((zf || sf != of)) goto L_714b3d;
L_714b12: /* 714b12: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 714b14: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 714b16: mov ecx, esi */
  ecx = esi;
/* 714b18: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x714b1eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 714b1e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 714b20: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 714b23: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 714b25: je 0x714b35 */
  if (zf) goto L_714b35;
L_714b27: /* 714b27: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 714b29: mov ecx, dword ptr [edx + edi*8] */
  ecx = R32((uint32_t)(edx + edi*8));
/* 714b2c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 714b2e: mov edx, dword ptr [edx + edi*8 + 4] */
  edx = R32((uint32_t)(edx + edi*8 + 0x4u));
/* 714b32: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
L_714b35: /* 714b35: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 714b38: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 714b39: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 714b3b: jl 0x714b12 */
  if ((sf != of)) goto L_714b12;
L_714b3d: /* 714b3d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 714b3e: mov eax, esi */
  eax = esi;
/* 714b40: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 714b41: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 714b42: ret 4 */
  esp += 8; SPILL(); return;
}

void f_714b70(void) {
  LOAD_REGS();
L_714b70: /* 714b70: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 714b71: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 714b72: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 714b78: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 714b79: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 714b7a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 714b7e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 714b80: mov esi, ecx */
  esi = ecx;
/* 714b82: jge 0x714b98 */
  if ((sf == of)) goto L_714b98;
L_714b84: /* 714b84: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 714b89: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 714b8e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 714b93: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x714b95u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 714b95: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_714b98: /* 714b98: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 714b9b: jle 0x714bb1 */
  if ((zf || sf != of)) goto L_714bb1;
L_714b9d: /* 714b9d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 714ba2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 714ba7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 714bac: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x714baeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 714bae: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_714bb1: /* 714bb1: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 714bb5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 714bb8: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 714bbb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 714bbd: jle 0x714bd3 */
  if ((zf || sf != of)) goto L_714bd3;
L_714bbf: /* 714bbf: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 714bc4: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 714bc9: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 714bce: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x714bd0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 714bd0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_714bd3: /* 714bd3: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 714bd5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 714bd6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 714bd7: mov ecx, esi */
  ecx = esi;
/* 714bd9: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x714bdfu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 714bdf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 714be0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 714be1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 714be2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 714be3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_714c10(void) {
  LOAD_REGS();
L_714c10: /* 714c10: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 714c11: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 714c12: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 714c13: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 714c17: mov ebx, ecx */
  ebx = ecx;
/* 714c19: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 714c1b: je 0x714c83 */
  if (zf) goto L_714c83;
L_714c1d: /* 714c1d: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 714c20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 714c21: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 714c23: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x714c29u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 714c29: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 714c2c: xor eax, eax */
  eax = 0;
/* 714c2e: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 714c30: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 714c34: jle 0x714c83 */
  if ((zf || sf != of)) goto L_714c83;
L_714c36: /* 714c36: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 714c37: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 714c3b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 714c3c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_714c40: /* 714c40: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 714c42: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 714c44: mov ecx, ebx */
  ecx = ebx;
/* 714c46: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x714c4cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 714c4c: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 714c4e: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 714c51: lea edi, [ecx + eax*8] */
  edi = (uint32_t)(ecx + eax*8);
/* 714c54: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 714c56: je 0x714c66 */
  if (zf) goto L_714c66;
L_714c58: /* 714c58: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 714c5b: add esi, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 714c5f: mov ecx, 0xa */
  ecx = 0xau;
/* 714c64: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_714c66: /* 714c66: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 714c6a: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 714c6e: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 714c71: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 714c72: add edx, 0x28 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 714c75: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 714c77: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 714c7b: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 714c7f: jl 0x714c40 */
  if ((sf != of)) goto L_714c40;
L_714c81: /* 714c81: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 714c82: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_714c83: /* 714c83: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 714c84: mov eax, ebx */
  eax = ebx;
/* 714c86: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 714c87: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 714c88: ret 4 */
  esp += 8; SPILL(); return;
}

void f_714cb0(void) {
  LOAD_REGS();
L_714cb0: /* 714cb0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 714cb1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 714cb2: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 714cb8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 714cb9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 714cba: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 714cbe: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 714cc0: mov esi, ecx */
  esi = ecx;
/* 714cc2: jge 0x714cd8 */
  if ((sf == of)) goto L_714cd8;
L_714cc4: /* 714cc4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 714cc9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 714cce: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 714cd3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x714cd5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 714cd5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_714cd8: /* 714cd8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 714cdb: jle 0x714cf1 */
  if ((zf || sf != of)) goto L_714cf1;
L_714cdd: /* 714cdd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 714ce2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 714ce7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 714cec: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x714ceeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 714cee: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_714cf1: /* 714cf1: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 714cf5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 714cf8: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 714cfb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 714cfd: jle 0x714d13 */
  if ((zf || sf != of)) goto L_714d13;
L_714cff: /* 714cff: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 714d04: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 714d09: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 714d0e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x714d10u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 714d10: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_714d13: /* 714d13: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 714d15: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 714d16: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 714d17: mov ecx, esi */
  ecx = esi;
/* 714d19: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x714d1fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 714d1f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 714d20: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 714d21: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 714d22: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 714d23: ret 8 */
  esp += 12; SPILL(); return;
}

void f_714d50(void) {
  LOAD_REGS();
L_714d50: /* 714d50: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 714d51: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 714d52: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 714d53: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 714d57: mov esi, ecx */
  esi = ecx;
/* 714d59: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 714d5b: je 0x714db0 */
  if (zf) goto L_714db0;
L_714d5d: /* 714d5d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 714d60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 714d61: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 714d63: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x714d69u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 714d69: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 714d6c: xor ebx, ebx */
  ebx = 0;
/* 714d6e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 714d70: jle 0x714db0 */
  if ((zf || sf != of)) goto L_714db0;
L_714d72: /* 714d72: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 714d73: xor ebp, ebp */
  ebp = 0;
L_714d75: /* 714d75: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 714d77: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 714d79: mov ecx, esi */
  ecx = esi;
/* 714d7b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x714d81u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 714d81: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 714d83: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 714d86: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 714d88: je 0x714da4 */
  if (zf) goto L_714da4;
L_714d8a: /* 714d8a: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 714d8c: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 714d8e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 714d90: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 714d92: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 714d95: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 714d98: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 714d9b: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 714d9e: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 714da1: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
L_714da4: /* 714da4: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 714da7: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 714da8: add ebp, 0x10 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 714dab: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 714dad: jl 0x714d75 */
  if ((sf != of)) goto L_714d75;
L_714daf: /* 714daf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_714db0: /* 714db0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 714db1: mov eax, esi */
  eax = esi;
/* 714db3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 714db4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 714db5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_714de0(void) {
  LOAD_REGS();
L_714de0: /* 714de0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 714de1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 714de2: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 714de8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 714de9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 714dea: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 714dee: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 714df0: mov esi, ecx */
  esi = ecx;
/* 714df2: jge 0x714e08 */
  if ((sf == of)) goto L_714e08;
L_714df4: /* 714df4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 714df9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 714dfe: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 714e03: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x714e05u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 714e05: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_714e08: /* 714e08: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 714e0b: jle 0x714e21 */
  if ((zf || sf != of)) goto L_714e21;
L_714e0d: /* 714e0d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 714e12: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 714e17: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 714e1c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x714e1eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 714e1e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_714e21: /* 714e21: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 714e25: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 714e28: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 714e2b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 714e2d: jle 0x714e43 */
  if ((zf || sf != of)) goto L_714e43;
L_714e2f: /* 714e2f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 714e34: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 714e39: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 714e3e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x714e40u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 714e40: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_714e43: /* 714e43: push 0xc8 */
  { uint32_t v = 0xc8u; esp -= 4; W32(esp, v); }
/* 714e48: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 714e49: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 714e4a: mov ecx, esi */
  ecx = esi;
/* 714e4c: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x714e52u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 714e52: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 714e53: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 714e54: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 714e55: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 714e56: ret 8 */
  esp += 12; SPILL(); return;
}

void f_714e80(void) {
  LOAD_REGS();
L_714e80: /* 714e80: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 714e81: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 714e82: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 714e83: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 714e87: mov ebx, ecx */
  ebx = ecx;
/* 714e89: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 714e8b: je 0x714ef9 */
  if (zf) goto L_714ef9;
L_714e8d: /* 714e8d: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 714e90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 714e91: push 0xc8 */
  { uint32_t v = 0xc8u; esp -= 4; W32(esp, v); }
/* 714e96: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x714e9cu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 714e9c: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 714e9f: xor eax, eax */
  eax = 0;
/* 714ea1: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 714ea3: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 714ea7: jle 0x714ef9 */
  if ((zf || sf != of)) goto L_714ef9;
L_714ea9: /* 714ea9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 714eaa: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 714eae: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 714eaf: nop  */
L_714eb0: /* 714eb0: push 0xc8 */
  { uint32_t v = 0xc8u; esp -= 4; W32(esp, v); }
/* 714eb5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 714eb7: mov ecx, ebx */
  ecx = ebx;
/* 714eb9: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x714ebfu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 714ebf: imul eax, eax, 0xc8 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0xc8u);
  eax = (uint32_t)r;
  }
/* 714ec5: add eax, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 714ec7: je 0x714ed9 */
  if (zf) goto L_714ed9;
L_714ec9: /* 714ec9: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 714ecc: add esi, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 714ed0: mov ecx, 0x32 */
  ecx = 0x32u;
/* 714ed5: mov edi, eax */
  edi = eax;
/* 714ed7: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_714ed9: /* 714ed9: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 714edd: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 714ee1: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 714ee4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 714ee5: add edx, 0xc8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 714eeb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 714eed: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 714ef1: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 714ef5: jl 0x714eb0 */
  if ((sf != of)) goto L_714eb0;
L_714ef7: /* 714ef7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 714ef8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_714ef9: /* 714ef9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 714efa: mov eax, ebx */
  eax = ebx;
/* 714efc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 714efd: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 714efe: ret 4 */
  esp += 8; SPILL(); return;
}

void f_714f40(void) {
  LOAD_REGS();
L_714f40: /* 714f40: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 714f41: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 714f42: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 714f48: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 714f49: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 714f4a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 714f4e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 714f50: mov esi, ecx */
  esi = ecx;
/* 714f52: jge 0x714f68 */
  if ((sf == of)) goto L_714f68;
L_714f54: /* 714f54: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 714f59: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 714f5e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 714f63: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x714f65u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 714f65: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_714f68: /* 714f68: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 714f6b: jle 0x714f81 */
  if ((zf || sf != of)) goto L_714f81;
L_714f6d: /* 714f6d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 714f72: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 714f77: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 714f7c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x714f7eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 714f7e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_714f81: /* 714f81: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 714f85: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 714f88: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 714f8b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 714f8d: jle 0x714fa3 */
  if ((zf || sf != of)) goto L_714fa3;
L_714f8f: /* 714f8f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 714f94: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 714f99: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 714f9e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x714fa0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 714fa0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_714fa3: /* 714fa3: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 714fa5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 714fa6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 714fa7: mov ecx, esi */
  ecx = esi;
/* 714fa9: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x714fafu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 714faf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 714fb0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 714fb1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 714fb2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 714fb3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_714fe0(void) {
  LOAD_REGS();
L_714fe0: /* 714fe0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 714fe1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 714fe2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 714fe3: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 714fe7: mov ebx, ecx */
  ebx = ecx;
/* 714fe9: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 714feb: je 0x715050 */
  if (zf) goto L_715050;
L_714fed: /* 714fed: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 714ff0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 714ff1: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 714ff3: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x714ff9u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 714ff9: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 714ffc: xor eax, eax */
  eax = 0;
/* 714ffe: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 715000: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 715004: jle 0x715050 */
  if ((zf || sf != of)) goto L_715050;
L_715006: /* 715006: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 715007: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 71500b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71500c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_715010: /* 715010: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 715012: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 715014: mov ecx, ebx */
  ecx = ebx;
/* 715016: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x71501cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 71501c: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 71501f: add eax, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 715021: je 0x715033 */
  if (zf) goto L_715033;
L_715023: /* 715023: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 715026: add esi, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 71502a: mov ecx, 7 */
  ecx = 0x7u;
/* 71502f: mov edi, eax */
  edi = eax;
/* 715031: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_715033: /* 715033: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 715037: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 71503b: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 71503e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 71503f: add edx, 0x1c */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 715042: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 715044: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 715048: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 71504c: jl 0x715010 */
  if ((sf != of)) goto L_715010;
L_71504e: /* 71504e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71504f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_715050: /* 715050: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 715051: mov eax, ebx */
  eax = ebx;
/* 715053: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 715054: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 715055: ret 4 */
  esp += 8; SPILL(); return;
}

void f_715080(void) {
  LOAD_REGS();
L_715080: /* 715080: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 715081: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 715082: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 715088: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 715089: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71508a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 71508e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 715090: mov esi, ecx */
  esi = ecx;
/* 715092: jge 0x7150a8 */
  if ((sf == of)) goto L_7150a8;
L_715094: /* 715094: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 715099: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71509e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 7150a3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7150a5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7150a5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7150a8: /* 7150a8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7150ab: jle 0x7150c1 */
  if ((zf || sf != of)) goto L_7150c1;
L_7150ad: /* 7150ad: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7150b2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7150b7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7150bc: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7150beu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7150be: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7150c1: /* 7150c1: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 7150c5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7150c8: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 7150cb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7150cd: jle 0x7150e3 */
  if ((zf || sf != of)) goto L_7150e3;
L_7150cf: /* 7150cf: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7150d4: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7150d9: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7150de: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7150e0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7150e0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7150e3: /* 7150e3: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 7150e5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7150e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7150e7: mov ecx, esi */
  ecx = esi;
/* 7150e9: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7150efu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7150ef: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7150f0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7150f1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7150f2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7150f3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_715120(void) {
  LOAD_REGS();
L_715120: /* 715120: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 715121: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 715122: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 715123: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 715127: mov ebx, ecx */
  ebx = ecx;
/* 715129: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 71512b: je 0x715193 */
  if (zf) goto L_715193;
L_71512d: /* 71512d: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 715130: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 715131: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 715133: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x715139u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 715139: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 71513c: xor eax, eax */
  eax = 0;
/* 71513e: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 715140: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 715144: jle 0x715193 */
  if ((zf || sf != of)) goto L_715193;
L_715146: /* 715146: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 715147: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 71514b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71514c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_715150: /* 715150: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 715152: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 715154: mov ecx, ebx */
  ecx = ebx;
/* 715156: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x71515cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 71515c: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 71515e: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 715161: lea edi, [ecx + eax*4] */
  edi = (uint32_t)(ecx + eax*4);
/* 715164: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 715166: je 0x715176 */
  if (zf) goto L_715176;
L_715168: /* 715168: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 71516b: add esi, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 71516f: mov ecx, 5 */
  ecx = 0x5u;
/* 715174: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_715176: /* 715176: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 71517a: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 71517e: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 715181: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 715182: add edx, 0x14 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 715185: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 715187: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 71518b: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 71518f: jl 0x715150 */
  if ((sf != of)) goto L_715150;
L_715191: /* 715191: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 715192: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_715193: /* 715193: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 715194: mov eax, ebx */
  eax = ebx;
/* 715196: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 715197: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 715198: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7151c0(void) {
  LOAD_REGS();
L_7151c0: /* 7151c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7151c1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7151c2: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 7151c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7151c9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7151ca: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 7151ce: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7151d0: mov esi, ecx */
  esi = ecx;
/* 7151d2: jge 0x7151e8 */
  if ((sf == of)) goto L_7151e8;
L_7151d4: /* 7151d4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 7151d9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7151de: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 7151e3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7151e5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7151e5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7151e8: /* 7151e8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7151eb: jle 0x715201 */
  if ((zf || sf != of)) goto L_715201;
L_7151ed: /* 7151ed: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7151f2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7151f7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7151fc: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7151feu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7151fe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_715201: /* 715201: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 715205: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 715208: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 71520b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71520d: jle 0x715223 */
  if ((zf || sf != of)) goto L_715223;
L_71520f: /* 71520f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 715214: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 715219: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71521e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x715220u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 715220: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_715223: /* 715223: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 715225: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 715226: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 715227: mov ecx, esi */
  ecx = esi;
/* 715229: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71522fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71522f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 715230: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 715231: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 715232: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 715233: ret 8 */
  esp += 12; SPILL(); return;
}

void f_715260(void) {
  LOAD_REGS();
L_715260: /* 715260: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 715261: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 715262: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 715263: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 715267: mov ebx, ecx */
  ebx = ecx;
/* 715269: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 71526b: je 0x7152d2 */
  if (zf) goto L_7152d2;
L_71526d: /* 71526d: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 715270: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 715271: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 715273: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x715279u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 715279: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 71527c: xor eax, eax */
  eax = 0;
/* 71527e: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 715280: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 715284: jle 0x7152d2 */
  if ((zf || sf != of)) goto L_7152d2;
L_715286: /* 715286: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 715287: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 71528b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71528c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_715290: /* 715290: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 715292: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 715294: mov ecx, ebx */
  ecx = ebx;
/* 715296: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x71529cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 71529c: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 71529e: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7152a1: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 7152a3: je 0x7152b5 */
  if (zf) goto L_7152b5;
L_7152a5: /* 7152a5: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 7152a8: add esi, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7152ac: mov ecx, 8 */
  ecx = 0x8u;
/* 7152b1: mov edi, eax */
  edi = eax;
/* 7152b3: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_7152b5: /* 7152b5: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 7152b9: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 7152bd: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 7152c0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7152c1: add edx, 0x20 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7152c4: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7152c6: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 7152ca: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 7152ce: jl 0x715290 */
  if ((sf != of)) goto L_715290;
L_7152d0: /* 7152d0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7152d1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_7152d2: /* 7152d2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7152d3: mov eax, ebx */
  eax = ebx;
/* 7152d5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7152d6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 7152d7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_715300(void) {
  LOAD_REGS();
L_715300: /* 715300: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 715301: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 715302: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 715308: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 715309: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71530a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 71530e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 715310: mov esi, ecx */
  esi = ecx;
/* 715312: jge 0x715328 */
  if ((sf == of)) goto L_715328;
L_715314: /* 715314: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 715319: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71531e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 715323: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x715325u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 715325: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_715328: /* 715328: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71532b: jle 0x715341 */
  if ((zf || sf != of)) goto L_715341;
L_71532d: /* 71532d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 715332: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 715337: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71533c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x71533eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71533e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_715341: /* 715341: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 715345: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 715348: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 71534b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71534d: jle 0x715363 */
  if ((zf || sf != of)) goto L_715363;
L_71534f: /* 71534f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 715354: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 715359: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71535e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x715360u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 715360: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_715363: /* 715363: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 715365: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 715366: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 715367: mov ecx, esi */
  ecx = esi;
/* 715369: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71536fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71536f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 715370: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 715371: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 715372: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 715373: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7153a0(void) {
  LOAD_REGS();
L_7153a0: /* 7153a0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7153a1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7153a2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7153a3: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 7153a7: mov ebx, ecx */
  ebx = ecx;
/* 7153a9: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7153ab: je 0x715412 */
  if (zf) goto L_715412;
L_7153ad: /* 7153ad: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 7153b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7153b1: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 7153b3: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7153b9u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7153b9: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 7153bc: xor eax, eax */
  eax = 0;
/* 7153be: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7153c0: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 7153c4: jle 0x715412 */
  if ((zf || sf != of)) goto L_715412;
L_7153c6: /* 7153c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7153c7: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 7153cb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7153cc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7153d0: /* 7153d0: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 7153d2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7153d4: mov ecx, ebx */
  ecx = ebx;
/* 7153d6: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7153dcu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7153dc: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 7153de: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7153e1: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 7153e3: je 0x7153f5 */
  if (zf) goto L_7153f5;
L_7153e5: /* 7153e5: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 7153e8: add esi, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7153ec: mov ecx, 8 */
  ecx = 0x8u;
/* 7153f1: mov edi, eax */
  edi = eax;
/* 7153f3: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_7153f5: /* 7153f5: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 7153f9: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 7153fd: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 715400: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 715401: add edx, 0x20 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 715404: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 715406: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 71540a: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 71540e: jl 0x7153d0 */
  if ((sf != of)) goto L_7153d0;
L_715410: /* 715410: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 715411: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_715412: /* 715412: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 715413: mov eax, ebx */
  eax = ebx;
/* 715415: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 715416: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 715417: ret 4 */
  esp += 8; SPILL(); return;
}

void f_715440(void) {
  LOAD_REGS();
L_715440: /* 715440: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 715441: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 715442: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 715448: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 715449: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71544a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 71544e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 715450: mov esi, ecx */
  esi = ecx;
/* 715452: jge 0x715468 */
  if ((sf == of)) goto L_715468;
L_715454: /* 715454: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 715459: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71545e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 715463: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x715465u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 715465: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_715468: /* 715468: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71546b: jle 0x715481 */
  if ((zf || sf != of)) goto L_715481;
L_71546d: /* 71546d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 715472: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 715477: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71547c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x71547eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71547e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_715481: /* 715481: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 715485: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 715488: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 71548b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71548d: jle 0x7154a3 */
  if ((zf || sf != of)) goto L_7154a3;
L_71548f: /* 71548f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 715494: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 715499: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71549e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7154a0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7154a0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7154a3: /* 7154a3: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 7154a5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7154a6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7154a7: mov ecx, esi */
  ecx = esi;
/* 7154a9: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7154afu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7154af: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7154b0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7154b1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7154b2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7154b3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7154e0(void) {
  LOAD_REGS();
L_7154e0: /* 7154e0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7154e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7154e2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7154e3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 7154e7: mov esi, ecx */
  esi = ecx;
/* 7154e9: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7154eb: je 0x715540 */
  if (zf) goto L_715540;
L_7154ed: /* 7154ed: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7154f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7154f1: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 7154f3: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7154f9u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7154f9: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7154fc: xor ebx, ebx */
  ebx = 0;
/* 7154fe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 715500: jle 0x715540 */
  if ((zf || sf != of)) goto L_715540;
L_715502: /* 715502: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 715503: xor ebp, ebp */
  ebp = 0;
L_715505: /* 715505: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 715507: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 715509: mov ecx, esi */
  ecx = esi;
/* 71550b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x715511u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 715511: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 715513: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 715516: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 715518: je 0x715534 */
  if (zf) goto L_715534;
L_71551a: /* 71551a: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 71551c: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 71551e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 715520: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 715522: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 715525: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 715528: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 71552b: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 71552e: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 715531: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
L_715534: /* 715534: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 715537: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 715538: add ebp, 0x10 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 71553b: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71553d: jl 0x715505 */
  if ((sf != of)) goto L_715505;
L_71553f: /* 71553f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_715540: /* 715540: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 715541: mov eax, esi */
  eax = esi;
/* 715543: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 715544: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 715545: ret 4 */
  esp += 8; SPILL(); return;
}

void f_715570(void) {
  LOAD_REGS();
L_715570: /* 715570: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 715571: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 715572: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 715578: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 715579: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71557a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 71557e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 715580: mov esi, ecx */
  esi = ecx;
/* 715582: jge 0x715598 */
  if ((sf == of)) goto L_715598;
L_715584: /* 715584: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 715589: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71558e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 715593: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x715595u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 715595: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_715598: /* 715598: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71559b: jle 0x7155b1 */
  if ((zf || sf != of)) goto L_7155b1;
L_71559d: /* 71559d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7155a2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7155a7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7155ac: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7155aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7155ae: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7155b1: /* 7155b1: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 7155b5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7155b8: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 7155bb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7155bd: jle 0x7155d3 */
  if ((zf || sf != of)) goto L_7155d3;
L_7155bf: /* 7155bf: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7155c4: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7155c9: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7155ce: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7155d0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7155d0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7155d3: /* 7155d3: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 7155d5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7155d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7155d7: mov ecx, esi */
  ecx = esi;
/* 7155d9: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7155dfu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7155df: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7155e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7155e1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7155e2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7155e3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_715610(void) {
  LOAD_REGS();
L_715610: /* 715610: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 715611: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 715612: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 715613: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 715617: mov esi, ecx */
  esi = ecx;
/* 715619: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 71561b: je 0x715670 */
  if (zf) goto L_715670;
L_71561d: /* 71561d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 715620: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 715621: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 715623: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x715629u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 715629: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 71562c: xor ebx, ebx */
  ebx = 0;
/* 71562e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 715630: jle 0x715670 */
  if ((zf || sf != of)) goto L_715670;
L_715632: /* 715632: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 715633: xor ebp, ebp */
  ebp = 0;
L_715635: /* 715635: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 715637: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 715639: mov ecx, esi */
  ecx = esi;
/* 71563b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x715641u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 715641: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 715643: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 715646: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 715648: je 0x715664 */
  if (zf) goto L_715664;
L_71564a: /* 71564a: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 71564c: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 71564e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 715650: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 715652: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 715655: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 715658: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 71565b: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 71565e: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 715661: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
L_715664: /* 715664: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 715667: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 715668: add ebp, 0x10 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 71566b: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71566d: jl 0x715635 */
  if ((sf != of)) goto L_715635;
L_71566f: /* 71566f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_715670: /* 715670: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 715671: mov eax, esi */
  eax = esi;
/* 715673: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 715674: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 715675: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7156a0(void) {
  LOAD_REGS();
L_7156a0: /* 7156a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7156a1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 7156a5: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7156a7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7156a8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7156a9: mov esi, dword ptr [0xcfa2fc] */
  esi = R32((uint32_t)(0xcfa2fcu));
/* 7156af: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7156b0: mov ebp, ecx */
  ebp = ecx;
/* 7156b2: jge 0x7156c8 */
  if ((sf == of)) goto L_7156c8;
L_7156b4: /* 7156b4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 7156b9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7156be: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 7156c3: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7156c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7156c5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7156c8: /* 7156c8: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7156cb: jle 0x7156e1 */
  if ((zf || sf != of)) goto L_7156e1;
L_7156cd: /* 7156cd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7156d2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7156d7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7156dc: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7156deu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7156de: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7156e1: /* 7156e1: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 7156e5: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 7156e8: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7156eb: jle 0x715701 */
  if ((zf || sf != of)) goto L_715701;
L_7156ed: /* 7156ed: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7156f2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7156f7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7156fc: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7156feu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7156fe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_715701: /* 715701: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 715703: jge 0x715720 */
  if ((sf == of)) goto L_715720;
L_715705: /* 715705: lea esi, [ebx + ebx*8] */
  esi = (uint32_t)(ebx + ebx*8);
/* 715708: shl esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 71570b: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 71570d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_715710: /* 715710: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 715713: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 715715: call 0x6c9fb1 */
  esp -= 4; W32(esp, 0x71571au); SPILL(); f_6c9fb1(); if (g_unwind) return; RELOAD();
/* 71571a: add esi, 0x48 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 71571d: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 71571e: jne 0x715710 */
  if (!zf) goto L_715710;
L_715720: /* 715720: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 715724: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 715726: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 715727: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 715728: mov ecx, ebp */
  ecx = ebp;
/* 71572a: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x715730u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 715730: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 715731: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 715732: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 715733: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 715734: ret 8 */
  esp += 12; SPILL(); return;
}

void f_715770(void) {
  LOAD_REGS();
L_715770: /* 715770: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 715771: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 715772: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 715773: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 715777: mov ebx, ecx */
  ebx = ecx;
/* 715779: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 71577b: je 0x7157e3 */
  if (zf) goto L_7157e3;
L_71577d: /* 71577d: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 715780: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 715781: call 0x6c41d3 */
  esp -= 4; W32(esp, 0x715786u); SPILL(); f_6c41d3(); if (g_unwind) return; RELOAD();
/* 715786: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 715789: xor eax, eax */
  eax = 0;
/* 71578b: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71578d: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 715791: jle 0x7157e3 */
  if ((zf || sf != of)) goto L_7157e3;
L_715793: /* 715793: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 715794: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 715798: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 715799: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7157a0: /* 7157a0: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 7157a2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7157a4: mov ecx, ebx */
  ecx = ebx;
/* 7157a6: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7157acu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7157ac: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7157ae: lea ecx, [eax + eax*8] */
  ecx = (uint32_t)(eax + eax*8);
/* 7157b1: lea edi, [edx + ecx*8] */
  edi = (uint32_t)(edx + ecx*8);
/* 7157b4: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7157b6: je 0x7157c6 */
  if (zf) goto L_7157c6;
L_7157b8: /* 7157b8: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 7157bb: add esi, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7157bf: mov ecx, 0x12 */
  ecx = 0x12u;
/* 7157c4: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_7157c6: /* 7157c6: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 7157ca: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 7157ce: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 7157d1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7157d2: add edx, 0x48 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7157d5: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7157d7: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 7157db: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 7157df: jl 0x7157a0 */
  if ((sf != of)) goto L_7157a0;
L_7157e1: /* 7157e1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7157e2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_7157e3: /* 7157e3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7157e4: mov eax, ebx */
  eax = ebx;
/* 7157e6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7157e7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 7157e8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_715810(void) {
  LOAD_REGS();
L_715810: /* 715810: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 715811: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 715812: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 715818: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 715819: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71581a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 71581e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 715820: mov esi, ecx */
  esi = ecx;
/* 715822: jge 0x715838 */
  if ((sf == of)) goto L_715838;
L_715824: /* 715824: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 715829: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71582e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 715833: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x715835u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 715835: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_715838: /* 715838: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71583b: jle 0x715851 */
  if ((zf || sf != of)) goto L_715851;
L_71583d: /* 71583d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 715842: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 715847: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71584c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x71584eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71584e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_715851: /* 715851: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 715855: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 715858: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 71585b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71585d: jle 0x715873 */
  if ((zf || sf != of)) goto L_715873;
L_71585f: /* 71585f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 715864: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 715869: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71586e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x715870u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 715870: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_715873: /* 715873: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 715875: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 715876: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 715877: mov ecx, esi */
  ecx = esi;
/* 715879: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71587fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71587f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 715880: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 715881: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 715882: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 715883: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7158b0(void) {
  LOAD_REGS();
L_7158b0: /* 7158b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7158b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7158b2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7158b3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 7158b7: mov esi, ecx */
  esi = ecx;
/* 7158b9: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7158bb: je 0x71590d */
  if (zf) goto L_71590d;
L_7158bd: /* 7158bd: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7158c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7158c1: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 7158c3: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7158c9u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7158c9: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7158cc: xor ebx, ebx */
  ebx = 0;
/* 7158ce: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7158d0: jle 0x71590d */
  if ((zf || sf != of)) goto L_71590d;
L_7158d2: /* 7158d2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7158d3: xor ebp, ebp */
  ebp = 0;
L_7158d5: /* 7158d5: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 7158d7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7158d9: mov ecx, esi */
  ecx = esi;
/* 7158db: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7158e1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7158e1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7158e3: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 7158e6: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 7158e9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7158eb: je 0x715901 */
  if (zf) goto L_715901;
L_7158ed: /* 7158ed: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7158ef: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7158f1: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7158f3: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7158f5: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 7158f8: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7158fb: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7158fe: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
L_715901: /* 715901: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 715904: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 715905: add ebp, 0xc */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 715908: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71590a: jl 0x7158d5 */
  if ((sf != of)) goto L_7158d5;
L_71590c: /* 71590c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_71590d: /* 71590d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71590e: mov eax, esi */
  eax = esi;
/* 715910: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 715911: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 715912: ret 4 */
  esp += 8; SPILL(); return;
}

void f_715940(void) {
  LOAD_REGS();
L_715940: /* 715940: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 715941: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 715942: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 715948: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 715949: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71594a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 71594e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 715950: mov esi, ecx */
  esi = ecx;
/* 715952: jge 0x715968 */
  if ((sf == of)) goto L_715968;
L_715954: /* 715954: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 715959: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71595e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 715963: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x715965u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 715965: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_715968: /* 715968: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71596b: jle 0x715981 */
  if ((zf || sf != of)) goto L_715981;
L_71596d: /* 71596d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 715972: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 715977: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71597c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x71597eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71597e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_715981: /* 715981: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 715985: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 715988: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 71598b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71598d: jle 0x7159a3 */
  if ((zf || sf != of)) goto L_7159a3;
L_71598f: /* 71598f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 715994: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 715999: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71599e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7159a0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7159a0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7159a3: /* 7159a3: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7159a5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7159a6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7159a7: mov ecx, esi */
  ecx = esi;
/* 7159a9: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7159afu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7159af: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7159b0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7159b1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7159b2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7159b3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7159e0(void) {
  LOAD_REGS();
L_7159e0: /* 7159e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7159e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7159e5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7159e7: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7159edu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7159ed: ret 4 */
  esp += 8; SPILL(); return;
}

void f_715a00(void) {
  LOAD_REGS();
L_715a00: /* 715a00: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 715a01: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 715a02: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 715a08: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 715a09: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 715a0a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 715a0e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 715a10: mov esi, ecx */
  esi = ecx;
/* 715a12: jge 0x715a28 */
  if ((sf == of)) goto L_715a28;
L_715a14: /* 715a14: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 715a19: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 715a1e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 715a23: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x715a25u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 715a25: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_715a28: /* 715a28: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 715a2b: jle 0x715a41 */
  if ((zf || sf != of)) goto L_715a41;
L_715a2d: /* 715a2d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 715a32: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 715a37: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 715a3c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x715a3eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 715a3e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_715a41: /* 715a41: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 715a45: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 715a48: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 715a4b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 715a4d: jle 0x715a63 */
  if ((zf || sf != of)) goto L_715a63;
L_715a4f: /* 715a4f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 715a54: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 715a59: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 715a5e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x715a60u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 715a60: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_715a63: /* 715a63: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 715a65: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 715a66: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 715a67: mov ecx, esi */
  ecx = esi;
/* 715a69: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x715a6fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 715a6f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 715a70: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 715a71: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 715a72: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 715a73: ret 8 */
  esp += 12; SPILL(); return;
}

void f_715aa0(void) {
  LOAD_REGS();
L_715aa0: /* 715aa0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 715aa1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 715aa2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 715aa3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 715aa7: mov esi, ecx */
  esi = ecx;
/* 715aa9: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 715aab: je 0x715ae6 */
  if (zf) goto L_715ae6;
L_715aad: /* 715aad: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 715ab0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 715ab1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 715ab3: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x715ab9u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 715ab9: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 715abc: xor ebx, ebx */
  ebx = 0;
/* 715abe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 715ac0: jle 0x715ae6 */
  if ((zf || sf != of)) goto L_715ae6;
L_715ac2: /* 715ac2: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 715ac4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 715ac6: mov ecx, esi */
  ecx = esi;
/* 715ac8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x715aceu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 715ace: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 715ad0: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 715ad3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 715ad5: je 0x715ade */
  if (zf) goto L_715ade;
L_715ad7: /* 715ad7: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 715ad9: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 715adc: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_715ade: /* 715ade: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 715ae1: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 715ae2: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 715ae4: jl 0x715ac2 */
  if ((sf != of)) goto L_715ac2;
L_715ae6: /* 715ae6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 715ae7: mov eax, esi */
  eax = esi;
/* 715ae9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 715aea: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 715aeb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_715b10(void) {
  LOAD_REGS();
L_715b10: /* 715b10: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 715b11: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 715b12: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 715b18: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 715b19: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 715b1a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 715b1e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 715b20: mov esi, ecx */
  esi = ecx;
/* 715b22: jge 0x715b38 */
  if ((sf == of)) goto L_715b38;
L_715b24: /* 715b24: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 715b29: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 715b2e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 715b33: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x715b35u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 715b35: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_715b38: /* 715b38: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 715b3b: jle 0x715b51 */
  if ((zf || sf != of)) goto L_715b51;
L_715b3d: /* 715b3d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 715b42: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 715b47: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 715b4c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x715b4eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 715b4e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_715b51: /* 715b51: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 715b55: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 715b58: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 715b5b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 715b5d: jle 0x715b73 */
  if ((zf || sf != of)) goto L_715b73;
L_715b5f: /* 715b5f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 715b64: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 715b69: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 715b6e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x715b70u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 715b70: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_715b73: /* 715b73: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 715b75: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 715b76: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 715b77: mov ecx, esi */
  ecx = esi;
/* 715b79: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x715b7fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 715b7f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 715b80: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 715b81: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 715b82: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 715b83: ret 8 */
  esp += 12; SPILL(); return;
}

void f_715bb0(void) {
  LOAD_REGS();
L_715bb0: /* 715bb0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 715bb4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 715bb5: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 715bb7: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x715bbdu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 715bbd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_715bd0(void) {
  LOAD_REGS();
L_715bd0: /* 715bd0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 715bd1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 715bd2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 715bd3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 715bd4: mov esi, ecx */
  esi = ecx;
/* 715bd6: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 715bd9: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 715bdf: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 715be1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 715be3: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 715be6: push 0xac3d1c */
  { uint32_t v = 0xac3d1cu; esp -= 4; W32(esp, v); }
/* 715beb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 715bec: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x715beeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 715bee: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 715bf1: mov ebp, eax */
  ebp = eax;
/* 715bf3: xor ebx, ebx */
  ebx = 0;
/* 715bf5: xor eax, eax */
  eax = 0;
/* 715bf7: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 715bf9: jle 0x715c10 */
  if ((zf || sf != of)) goto L_715c10;
L_715bfb: /* 715bfb: jmp 0x715c00 */
  goto L_715c00;
L_715c00: /* 715c00: mov dword ptr [ebp + eax*4], 0xffffffff */
  W32((uint32_t)(ebp + eax*4), 0xffffffffu);
/* 715c08: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 715c0b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 715c0c: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 715c0e: jl 0x715c00 */
  if ((sf != of)) goto L_715c00;
L_715c10: /* 715c10: cmp dword ptr [esi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 715c13: jle 0x715c5c */
  if ((zf || sf != of)) goto L_715c5c;
L_715c15: /* 715c15: mov dword ptr [esp + 0xc], ebx */
  W32((uint32_t)(esp + 0xcu), ebx);
/* 715c19: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 715c1a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_715c20: /* 715c20: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 715c22: add edi, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 715c26: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 715c29: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x715c2fu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 715c2f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 715c30: call 0x6cca40 */
  esp -= 4; W32(esp, 0x715c35u); SPILL(); f_6cca40(); if (g_unwind) return; RELOAD();
/* 715c35: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 715c38: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 715c3b: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 715c3c: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 715c3e: mov edx, dword ptr [ebp + eax*4] */
  edx = R32((uint32_t)(ebp + eax*4));
/* 715c42: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 715c46: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 715c48: mov dword ptr [ebp + eax*4], ebx */
  W32((uint32_t)(ebp + eax*4), ebx);
/* 715c4c: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 715c4f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 715c50: add ecx, 0x1c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 715c53: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 715c55: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 715c59: jl 0x715c20 */
  if ((sf != of)) goto L_715c20;
L_715c5b: /* 715c5b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_715c5c: /* 715c5c: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 715c5f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 715c61: je 0x715c71 */
  if (zf) goto L_715c71;
L_715c63: /* 715c63: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 715c69: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 715c6b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 715c6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 715c6e: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x715c71u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_715c71: /* 715c71: mov dword ptr [esi + 0xc], ebp */
  W32((uint32_t)(esi + 0xcu), ebp);
/* 715c74: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 715c75: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 715c76: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 715c77: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 715c78: ret  */
  esp += 4; SPILL(); return;
}

void f_715bfd(void) {
  LOAD_REGS();
L_715bfd: /* 715bfd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_715c00: /* 715c00: mov dword ptr [ebp + eax*4], 0xffffffff */
  W32((uint32_t)(ebp + eax*4), 0xffffffffu);
/* 715c08: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 715c0b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 715c0c: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 715c0e: jl 0x715c00 */
  if ((sf != of)) goto L_715c00;
L_715c10: /* 715c10: cmp dword ptr [esi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 715c13: jle 0x715c5c */
  if ((zf || sf != of)) goto L_715c5c;
L_715c15: /* 715c15: mov dword ptr [esp + 0xc], ebx */
  W32((uint32_t)(esp + 0xcu), ebx);
/* 715c19: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 715c1a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_715c20: /* 715c20: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 715c22: add edi, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 715c26: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 715c29: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x715c2fu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 715c2f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 715c30: call 0x6cca40 */
  esp -= 4; W32(esp, 0x715c35u); SPILL(); f_6cca40(); if (g_unwind) return; RELOAD();
/* 715c35: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 715c38: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 715c3b: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 715c3c: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 715c3e: mov edx, dword ptr [ebp + eax*4] */
  edx = R32((uint32_t)(ebp + eax*4));
/* 715c42: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 715c46: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 715c48: mov dword ptr [ebp + eax*4], ebx */
  W32((uint32_t)(ebp + eax*4), ebx);
/* 715c4c: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 715c4f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 715c50: add ecx, 0x1c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 715c53: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 715c55: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 715c59: jl 0x715c20 */
  if ((sf != of)) goto L_715c20;
L_715c5b: /* 715c5b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_715c5c: /* 715c5c: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 715c5f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 715c61: je 0x715c71 */
  if (zf) goto L_715c71;
L_715c63: /* 715c63: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 715c69: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 715c6b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 715c6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 715c6e: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x715c71u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_715c71: /* 715c71: mov dword ptr [esi + 0xc], ebp */
  W32((uint32_t)(esi + 0xcu), ebp);
/* 715c74: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 715c75: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 715c76: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 715c77: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 715c78: ret  */
  esp += 4; SPILL(); return;
}

void f_715cb0(void) {
  LOAD_REGS();
L_715cb0: /* 715cb0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 715cb2: push 0x9c2a59 */
  { uint32_t v = 0x9c2a59u; esp -= 4; W32(esp, v); }
/* 715cb7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 715cbd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 715cbe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 715cc5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 715cc6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 715cc7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 715cc8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 715cc9: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 715ccd: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 715cd0: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 715cd2: mov esi, ecx */
  esi = ecx;
/* 715cd4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 715cd5: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 715cd9: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x715cdfu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 715cdf: xor ebx, ebx */
  ebx = 0;
/* 715ce1: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 715ce4: cmp dword ptr [edi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 715ce7: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 715ceb: jle 0x715d1b */
  if ((zf || sf != of)) goto L_715d1b;
L_715ced: /* 715ced: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 715cee: xor ebp, ebp */
  ebp = 0;
L_715cf0: /* 715cf0: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 715cf2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 715cf4: mov ecx, esi */
  ecx = esi;
/* 715cf6: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x715cfcu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 715cfc: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 715cff: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 715d01: je 0x715d0f */
  if (zf) goto L_715d0f;
L_715d03: /* 715d03: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 715d05: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 715d07: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 715d08: mov ecx, eax */
  ecx = eax;
/* 715d0a: call 0x6c4039 */
  esp -= 4; W32(esp, 0x715d0fu); SPILL(); f_6c4039(); if (g_unwind) return; RELOAD();
L_715d0f: /* 715d0f: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 715d12: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 715d13: add ebp, 0x1c */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 715d16: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 715d18: jl 0x715cf0 */
  if ((sf != of)) goto L_715cf0;
L_715d1a: /* 715d1a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_715d1b: /* 715d1b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 715d1f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 715d20: mov eax, esi */
  eax = esi;
/* 715d22: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 715d23: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 715d24: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 715d2b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 715d2e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_715d70(void) {
  LOAD_REGS();
L_715d70: /* 715d70: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 715d71: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 715d72: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 715d78: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 715d79: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 715d7a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 715d7e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 715d80: mov esi, ecx */
  esi = ecx;
/* 715d82: jge 0x715d98 */
  if ((sf == of)) goto L_715d98;
L_715d84: /* 715d84: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 715d89: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 715d8e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 715d93: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x715d95u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 715d95: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_715d98: /* 715d98: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 715d9b: jle 0x715db1 */
  if ((zf || sf != of)) goto L_715db1;
L_715d9d: /* 715d9d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 715da2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 715da7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 715dac: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x715daeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 715dae: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_715db1: /* 715db1: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 715db5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 715db8: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 715dbb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 715dbd: jle 0x715dd3 */
  if ((zf || sf != of)) goto L_715dd3;
L_715dbf: /* 715dbf: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 715dc4: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 715dc9: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 715dce: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x715dd0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 715dd0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_715dd3: /* 715dd3: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 715dd5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 715dd6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 715dd7: mov ecx, esi */
  ecx = esi;
/* 715dd9: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x715ddfu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 715ddf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 715de0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 715de1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 715de2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 715de3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_715e10(void) {
  LOAD_REGS();
L_715e10: /* 715e10: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 715e14: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 715e15: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 715e17: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x715e1du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 715e1d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_715e30(void) {
  LOAD_REGS();
L_715e30: /* 715e30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 715e31: mov esi, ecx */
  esi = ecx;
/* 715e33: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 715e36: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 715e3c: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 715e3e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 715e40: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 715e41: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 715e44: push 0xac3d1c */
  { uint32_t v = 0xac3d1cu; esp -= 4; W32(esp, v); }
/* 715e49: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 715e4a: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x715e4cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 715e4c: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 715e4f: mov edi, eax */
  edi = eax;
/* 715e51: xor eax, eax */
  eax = 0;
/* 715e53: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 715e55: jle 0x715e6f */
  if ((zf || sf != of)) goto L_715e6f;
L_715e57: /* 715e57: jmp 0x715e60 */
  goto L_715e60;
L_715e60: /* 715e60: mov dword ptr [edi + eax*4], 0xffffffff */
  W32((uint32_t)(edi + eax*4), 0xffffffffu);
/* 715e67: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 715e6a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 715e6b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 715e6d: jl 0x715e60 */
  if ((sf != of)) goto L_715e60;
L_715e6f: /* 715e6f: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 715e72: xor edx, edx */
  edx = 0;
/* 715e74: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 715e76: jle 0x715eac */
  if ((zf || sf != of)) goto L_715eac;
L_715e78: /* 715e78: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 715e79: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 715e7a: xor ebx, ebx */
  ebx = 0;
/* 715e7c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_715e80: /* 715e80: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 715e82: mov ecx, dword ptr [eax + ebx + 8] */
  ecx = R32((uint32_t)(eax + ebx + 0x8u));
/* 715e86: mov ebp, dword ptr [eax + ebx + 4] */
  ebp = R32((uint32_t)(eax + ebx + 0x4u));
/* 715e8a: imul ecx, ecx, 0x17 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x17u);
  ecx = (uint32_t)r;
  }
/* 715e8d: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 715e8f: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 715e91: mov ebp, dword ptr [esi + 0x10] */
  ebp = R32((uint32_t)(esi + 0x10u));
/* 715e94: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  ebp = r;
  }
/* 715e95: and ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 715e97: mov ebp, dword ptr [edi + ecx*4] */
  ebp = R32((uint32_t)(edi + ecx*4));
/* 715e9a: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
/* 715e9c: mov dword ptr [edi + ecx*4], edx */
  W32((uint32_t)(edi + ecx*4), edx);
/* 715e9f: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 715ea2: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 715ea3: add ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 715ea6: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 715ea8: jl 0x715e80 */
  if ((sf != of)) goto L_715e80;
L_715eaa: /* 715eaa: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 715eab: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_715eac: /* 715eac: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 715eaf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 715eb1: je 0x715ec1 */
  if (zf) goto L_715ec1;
L_715eb3: /* 715eb3: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 715eb9: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 715ebb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 715ebd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 715ebe: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x715ec1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_715ec1: /* 715ec1: mov dword ptr [esi + 0xc], edi */
  W32((uint32_t)(esi + 0xcu), edi);
/* 715ec4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 715ec5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 715ec6: ret  */
  esp += 4; SPILL(); return;
}

void f_715e59(void) {
  LOAD_REGS();
L_715e59: /* 715e59: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_715e60: /* 715e60: mov dword ptr [edi + eax*4], 0xffffffff */
  W32((uint32_t)(edi + eax*4), 0xffffffffu);
/* 715e67: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 715e6a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 715e6b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 715e6d: jl 0x715e60 */
  if ((sf != of)) goto L_715e60;
L_715e6f: /* 715e6f: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 715e72: xor edx, edx */
  edx = 0;
/* 715e74: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 715e76: jle 0x715eac */
  if ((zf || sf != of)) goto L_715eac;
L_715e78: /* 715e78: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 715e79: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 715e7a: xor ebx, ebx */
  ebx = 0;
/* 715e7c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_715e80: /* 715e80: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 715e82: mov ecx, dword ptr [eax + ebx + 8] */
  ecx = R32((uint32_t)(eax + ebx + 0x8u));
/* 715e86: mov ebp, dword ptr [eax + ebx + 4] */
  ebp = R32((uint32_t)(eax + ebx + 0x4u));
/* 715e8a: imul ecx, ecx, 0x17 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x17u);
  ecx = (uint32_t)r;
  }
/* 715e8d: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 715e8f: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 715e91: mov ebp, dword ptr [esi + 0x10] */
  ebp = R32((uint32_t)(esi + 0x10u));
/* 715e94: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  ebp = r;
  }
/* 715e95: and ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 715e97: mov ebp, dword ptr [edi + ecx*4] */
  ebp = R32((uint32_t)(edi + ecx*4));
/* 715e9a: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
/* 715e9c: mov dword ptr [edi + ecx*4], edx */
  W32((uint32_t)(edi + ecx*4), edx);
/* 715e9f: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 715ea2: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 715ea3: add ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 715ea6: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 715ea8: jl 0x715e80 */
  if ((sf != of)) goto L_715e80;
L_715eaa: /* 715eaa: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 715eab: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_715eac: /* 715eac: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 715eaf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 715eb1: je 0x715ec1 */
  if (zf) goto L_715ec1;
L_715eb3: /* 715eb3: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 715eb9: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 715ebb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 715ebd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 715ebe: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x715ec1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_715ec1: /* 715ec1: mov dword ptr [esi + 0xc], edi */
  W32((uint32_t)(esi + 0xcu), edi);
/* 715ec4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 715ec5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 715ec6: ret  */
  esp += 4; SPILL(); return;
}

void f_715f00(void) {
  LOAD_REGS();
L_715f00: /* 715f00: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 715f02: push 0x9c2a79 */
  { uint32_t v = 0x9c2a79u; esp -= 4; W32(esp, v); }
/* 715f07: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 715f0d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 715f0e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 715f15: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 715f16: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 715f17: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 715f18: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 715f19: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 715f1d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 715f20: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 715f22: mov esi, ecx */
  esi = ecx;
/* 715f24: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 715f25: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 715f29: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x715f2fu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 715f2f: xor ebx, ebx */
  ebx = 0;
/* 715f31: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 715f34: cmp dword ptr [edi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 715f37: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 715f3b: jle 0x715f7b */
  if ((zf || sf != of)) goto L_715f7b;
L_715f3d: /* 715f3d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 715f3e: xor ebp, ebp */
  ebp = 0;
L_715f40: /* 715f40: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 715f42: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 715f44: mov ecx, esi */
  ecx = esi;
/* 715f46: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x715f4cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 715f4c: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 715f4e: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 715f51: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 715f53: je 0x715f6f */
  if (zf) goto L_715f6f;
L_715f55: /* 715f55: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 715f57: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 715f59: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 715f5b: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 715f5d: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 715f60: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 715f63: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 715f66: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 715f69: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 715f6c: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
L_715f6f: /* 715f6f: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 715f72: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 715f73: add ebp, 0x10 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 715f76: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 715f78: jl 0x715f40 */
  if ((sf != of)) goto L_715f40;
L_715f7a: /* 715f7a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_715f7b: /* 715f7b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 715f7f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 715f80: mov eax, esi */
  eax = esi;
/* 715f82: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 715f83: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 715f84: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 715f8b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 715f8e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_715fd0(void) {
  LOAD_REGS();
L_715fd0: /* 715fd0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 715fd1: mov esi, ecx */
  esi = ecx;
/* 715fd3: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 715fd6: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 715fdc: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 715fde: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 715fe0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 715fe1: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 715fe4: push 0xac3d1c */
  { uint32_t v = 0xac3d1cu; esp -= 4; W32(esp, v); }
/* 715fe9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 715fea: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x715fecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 715fec: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 715fef: mov edi, eax */
  edi = eax;
/* 715ff1: xor eax, eax */
  eax = 0;
/* 715ff3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 715ff5: jle 0x71600f */
  if ((zf || sf != of)) goto L_71600f;
L_715ff7: /* 715ff7: jmp 0x716000 */
  goto L_716000;
L_716000: /* 716000: mov dword ptr [edi + eax*4], 0xffffffff */
  W32((uint32_t)(edi + eax*4), 0xffffffffu);
/* 716007: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 71600a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 71600b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71600d: jl 0x716000 */
  if ((sf != of)) goto L_716000;
L_71600f: /* 71600f: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 716012: xor edx, edx */
  edx = 0;
/* 716014: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 716016: jle 0x71604c */
  if ((zf || sf != of)) goto L_71604c;
L_716018: /* 716018: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 716019: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 71601a: xor ebx, ebx */
  ebx = 0;
/* 71601c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_716020: /* 716020: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 716022: mov ecx, dword ptr [eax + ebx + 8] */
  ecx = R32((uint32_t)(eax + ebx + 0x8u));
/* 716026: mov ebp, dword ptr [eax + ebx + 4] */
  ebp = R32((uint32_t)(eax + ebx + 0x4u));
/* 71602a: imul ecx, ecx, 0x17 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x17u);
  ecx = (uint32_t)r;
  }
/* 71602d: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 71602f: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 716031: mov ebp, dword ptr [esi + 0x10] */
  ebp = R32((uint32_t)(esi + 0x10u));
/* 716034: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  ebp = r;
  }
/* 716035: and ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 716037: mov ebp, dword ptr [edi + ecx*4] */
  ebp = R32((uint32_t)(edi + ecx*4));
/* 71603a: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
/* 71603c: mov dword ptr [edi + ecx*4], edx */
  W32((uint32_t)(edi + ecx*4), edx);
/* 71603f: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 716042: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 716043: add ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 716046: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 716048: jl 0x716020 */
  if ((sf != of)) goto L_716020;
L_71604a: /* 71604a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 71604b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_71604c: /* 71604c: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 71604f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 716051: je 0x716061 */
  if (zf) goto L_716061;
L_716053: /* 716053: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 716059: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 71605b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 71605d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71605e: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x716061u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_716061: /* 716061: mov dword ptr [esi + 0xc], edi */
  W32((uint32_t)(esi + 0xcu), edi);
/* 716064: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 716065: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 716066: ret  */
  esp += 4; SPILL(); return;
}

void f_715ff9(void) {
  LOAD_REGS();
L_715ff9: /* 715ff9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_716000: /* 716000: mov dword ptr [edi + eax*4], 0xffffffff */
  W32((uint32_t)(edi + eax*4), 0xffffffffu);
/* 716007: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 71600a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 71600b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71600d: jl 0x716000 */
  if ((sf != of)) goto L_716000;
L_71600f: /* 71600f: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 716012: xor edx, edx */
  edx = 0;
/* 716014: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 716016: jle 0x71604c */
  if ((zf || sf != of)) goto L_71604c;
L_716018: /* 716018: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 716019: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 71601a: xor ebx, ebx */
  ebx = 0;
/* 71601c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_716020: /* 716020: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 716022: mov ecx, dword ptr [eax + ebx + 8] */
  ecx = R32((uint32_t)(eax + ebx + 0x8u));
/* 716026: mov ebp, dword ptr [eax + ebx + 4] */
  ebp = R32((uint32_t)(eax + ebx + 0x4u));
/* 71602a: imul ecx, ecx, 0x17 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x17u);
  ecx = (uint32_t)r;
  }
/* 71602d: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 71602f: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 716031: mov ebp, dword ptr [esi + 0x10] */
  ebp = R32((uint32_t)(esi + 0x10u));
/* 716034: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  ebp = r;
  }
/* 716035: and ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 716037: mov ebp, dword ptr [edi + ecx*4] */
  ebp = R32((uint32_t)(edi + ecx*4));
/* 71603a: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
/* 71603c: mov dword ptr [edi + ecx*4], edx */
  W32((uint32_t)(edi + ecx*4), edx);
/* 71603f: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 716042: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 716043: add ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 716046: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 716048: jl 0x716020 */
  if ((sf != of)) goto L_716020;
L_71604a: /* 71604a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 71604b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_71604c: /* 71604c: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 71604f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 716051: je 0x716061 */
  if (zf) goto L_716061;
L_716053: /* 716053: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 716059: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 71605b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 71605d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71605e: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x716061u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_716061: /* 716061: mov dword ptr [esi + 0xc], edi */
  W32((uint32_t)(esi + 0xcu), edi);
/* 716064: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 716065: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 716066: ret  */
  esp += 4; SPILL(); return;
}

void f_7160a0(void) {
  LOAD_REGS();
L_7160a0: /* 7160a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7160a2: push 0x9c2a99 */
  { uint32_t v = 0x9c2a99u; esp -= 4; W32(esp, v); }
/* 7160a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7160ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7160ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7160b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7160b6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7160b7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7160b8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7160b9: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 7160bd: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7160c0: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 7160c2: mov esi, ecx */
  esi = ecx;
/* 7160c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7160c5: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 7160c9: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x7160cfu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 7160cf: xor ebx, ebx */
  ebx = 0;
/* 7160d1: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 7160d4: cmp dword ptr [edi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7160d7: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 7160db: jle 0x71611b */
  if ((zf || sf != of)) goto L_71611b;
L_7160dd: /* 7160dd: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7160de: xor ebp, ebp */
  ebp = 0;
L_7160e0: /* 7160e0: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 7160e2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7160e4: mov ecx, esi */
  ecx = esi;
/* 7160e6: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7160ecu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7160ec: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7160ee: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7160f1: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 7160f3: je 0x71610f */
  if (zf) goto L_71610f;
L_7160f5: /* 7160f5: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 7160f7: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7160f9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7160fb: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 7160fd: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 716100: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 716103: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 716106: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 716109: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 71610c: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
L_71610f: /* 71610f: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 716112: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 716113: add ebp, 0x10 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 716116: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 716118: jl 0x7160e0 */
  if ((sf != of)) goto L_7160e0;
L_71611a: /* 71611a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_71611b: /* 71611b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 71611f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 716120: mov eax, esi */
  eax = esi;
/* 716122: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 716123: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 716124: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71612b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71612e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_716170(void) {
  LOAD_REGS();
L_716170: /* 716170: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 716171: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 716172: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 716178: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 716179: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71617a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 71617e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 716180: mov esi, ecx */
  esi = ecx;
/* 716182: jge 0x716198 */
  if ((sf == of)) goto L_716198;
L_716184: /* 716184: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 716189: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71618e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 716193: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x716195u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 716195: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_716198: /* 716198: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71619b: jle 0x7161b1 */
  if ((zf || sf != of)) goto L_7161b1;
L_71619d: /* 71619d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7161a2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7161a7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7161ac: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7161aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7161ae: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7161b1: /* 7161b1: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 7161b5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7161b8: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 7161bb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7161bd: jle 0x7161d3 */
  if ((zf || sf != of)) goto L_7161d3;
L_7161bf: /* 7161bf: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7161c4: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7161c9: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7161ce: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7161d0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7161d0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7161d3: /* 7161d3: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7161d5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7161d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7161d7: mov ecx, esi */
  ecx = esi;
/* 7161d9: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7161dfu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7161df: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7161e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7161e1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7161e2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7161e3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_716210(void) {
  LOAD_REGS();
L_716210: /* 716210: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 716214: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 716215: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 716217: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x71621du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 71621d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_716230(void) {
  LOAD_REGS();
L_716230: /* 716230: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 716231: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 716232: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 716238: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 716239: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71623a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 71623e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 716240: mov esi, ecx */
  esi = ecx;
/* 716242: jge 0x716258 */
  if ((sf == of)) goto L_716258;
L_716244: /* 716244: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 716249: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71624e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 716253: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x716255u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 716255: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_716258: /* 716258: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71625b: jle 0x716271 */
  if ((zf || sf != of)) goto L_716271;
L_71625d: /* 71625d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 716262: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 716267: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71626c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x71626eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71626e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_716271: /* 716271: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 716275: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 716278: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 71627b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71627d: jle 0x716293 */
  if ((zf || sf != of)) goto L_716293;
L_71627f: /* 71627f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 716284: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 716289: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71628e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x716290u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 716290: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_716293: /* 716293: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 716295: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 716296: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 716297: mov ecx, esi */
  ecx = esi;
/* 716299: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71629fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71629f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7162a0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7162a1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7162a2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7162a3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7162d0(void) {
  LOAD_REGS();
L_7162d0: /* 7162d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7162d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7162d5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7162d7: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7162ddu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7162dd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7162f0(void) {
  LOAD_REGS();
L_7162f0: /* 7162f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7162f1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7162f2: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 7162f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7162f9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7162fa: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 7162fe: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 716300: mov esi, ecx */
  esi = ecx;
/* 716302: jge 0x716318 */
  if ((sf == of)) goto L_716318;
L_716304: /* 716304: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 716309: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71630e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 716313: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x716315u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 716315: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_716318: /* 716318: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71631b: jle 0x716331 */
  if ((zf || sf != of)) goto L_716331;
L_71631d: /* 71631d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 716322: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 716327: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71632c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x71632eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71632e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_716331: /* 716331: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 716335: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 716338: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 71633b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71633d: jle 0x716353 */
  if ((zf || sf != of)) goto L_716353;
L_71633f: /* 71633f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 716344: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 716349: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71634e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x716350u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 716350: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_716353: /* 716353: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 716355: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 716356: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 716357: mov ecx, esi */
  ecx = esi;
/* 716359: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71635fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71635f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 716360: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 716361: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 716362: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 716363: ret 8 */
  esp += 12; SPILL(); return;
}

void f_716390(void) {
  LOAD_REGS();
L_716390: /* 716390: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 716394: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 716395: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 716397: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x71639du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 71639d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7163b0(void) {
  LOAD_REGS();
L_7163b0: /* 7163b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7163b1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7163b2: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 7163b8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7163b9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7163ba: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 7163be: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7163c0: mov esi, ecx */
  esi = ecx;
/* 7163c2: jge 0x7163d8 */
  if ((sf == of)) goto L_7163d8;
L_7163c4: /* 7163c4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 7163c9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7163ce: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 7163d3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7163d5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7163d5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7163d8: /* 7163d8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7163db: jle 0x7163f1 */
  if ((zf || sf != of)) goto L_7163f1;
L_7163dd: /* 7163dd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7163e2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7163e7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7163ec: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7163eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7163ee: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7163f1: /* 7163f1: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 7163f5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7163f8: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 7163fb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7163fd: jle 0x716413 */
  if ((zf || sf != of)) goto L_716413;
L_7163ff: /* 7163ff: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 716404: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 716409: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71640e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x716410u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 716410: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_716413: /* 716413: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 716415: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 716416: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 716417: mov ecx, esi */
  ecx = esi;
/* 716419: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71641fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71641f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 716420: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 716421: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 716422: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 716423: ret 8 */
  esp += 12; SPILL(); return;
}

void f_716450(void) {
  LOAD_REGS();
L_716450: /* 716450: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 716454: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 716455: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 716457: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x71645du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 71645d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_716470(void) {
  LOAD_REGS();
L_716470: /* 716470: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 716471: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 716472: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 716478: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 716479: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71647a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 71647e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 716480: mov esi, ecx */
  esi = ecx;
/* 716482: jge 0x716498 */
  if ((sf == of)) goto L_716498;
L_716484: /* 716484: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 716489: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71648e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 716493: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x716495u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 716495: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_716498: /* 716498: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71649b: jle 0x7164b1 */
  if ((zf || sf != of)) goto L_7164b1;
L_71649d: /* 71649d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7164a2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7164a7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7164ac: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7164aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7164ae: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7164b1: /* 7164b1: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 7164b5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7164b8: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 7164bb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7164bd: jle 0x7164d3 */
  if ((zf || sf != of)) goto L_7164d3;
L_7164bf: /* 7164bf: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7164c4: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7164c9: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7164ce: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7164d0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7164d0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7164d3: /* 7164d3: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 7164d5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7164d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7164d7: mov ecx, esi */
  ecx = esi;
/* 7164d9: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7164dfu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7164df: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7164e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7164e1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7164e2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7164e3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_716510(void) {
  LOAD_REGS();
L_716510: /* 716510: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 716514: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 716515: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 716517: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x71651du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 71651d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_716530(void) {
  LOAD_REGS();
L_716530: /* 716530: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 716531: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 716532: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 716538: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 716539: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71653a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 71653e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 716540: mov esi, ecx */
  esi = ecx;
/* 716542: jge 0x716558 */
  if ((sf == of)) goto L_716558;
L_716544: /* 716544: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 716549: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71654e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 716553: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x716555u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 716555: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_716558: /* 716558: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71655b: jle 0x716571 */
  if ((zf || sf != of)) goto L_716571;
L_71655d: /* 71655d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 716562: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 716567: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71656c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x71656eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71656e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_716571: /* 716571: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 716575: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 716578: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 71657b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71657d: jle 0x716593 */
  if ((zf || sf != of)) goto L_716593;
L_71657f: /* 71657f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 716584: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 716589: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71658e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x716590u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 716590: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_716593: /* 716593: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 716595: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 716596: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 716597: mov ecx, esi */
  ecx = esi;
/* 716599: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71659fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71659f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7165a0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7165a1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7165a2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7165a3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7165d0(void) {
  LOAD_REGS();
L_7165d0: /* 7165d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7165d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7165d5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7165d7: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7165ddu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7165dd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7165f0(void) {
  LOAD_REGS();
L_7165f0: /* 7165f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7165f1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7165f2: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 7165f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7165f9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7165fa: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 7165fe: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 716600: mov esi, ecx */
  esi = ecx;
/* 716602: jge 0x716618 */
  if ((sf == of)) goto L_716618;
L_716604: /* 716604: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 716609: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71660e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 716613: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x716615u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 716615: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_716618: /* 716618: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71661b: jle 0x716631 */
  if ((zf || sf != of)) goto L_716631;
L_71661d: /* 71661d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 716622: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 716627: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71662c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x71662eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71662e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_716631: /* 716631: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 716635: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 716638: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 71663b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71663d: jle 0x716653 */
  if ((zf || sf != of)) goto L_716653;
L_71663f: /* 71663f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 716644: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 716649: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71664e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x716650u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 716650: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_716653: /* 716653: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 716655: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 716656: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 716657: mov ecx, esi */
  ecx = esi;
/* 716659: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71665fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71665f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 716660: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 716661: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 716662: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 716663: ret 8 */
  esp += 12; SPILL(); return;
}

void f_716690(void) {
  LOAD_REGS();
L_716690: /* 716690: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 716694: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 716695: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 716697: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x71669du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 71669d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7166b0(void) {
  LOAD_REGS();
L_7166b0: /* 7166b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7166b1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7166b2: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 7166b8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7166b9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7166ba: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 7166be: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7166c0: mov esi, ecx */
  esi = ecx;
/* 7166c2: jge 0x7166d8 */
  if ((sf == of)) goto L_7166d8;
L_7166c4: /* 7166c4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 7166c9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7166ce: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 7166d3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7166d5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7166d5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7166d8: /* 7166d8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7166db: jle 0x7166f1 */
  if ((zf || sf != of)) goto L_7166f1;
L_7166dd: /* 7166dd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7166e2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7166e7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7166ec: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7166eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7166ee: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7166f1: /* 7166f1: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 7166f5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7166f8: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 7166fb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7166fd: jle 0x716713 */
  if ((zf || sf != of)) goto L_716713;
L_7166ff: /* 7166ff: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 716704: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 716709: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71670e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x716710u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 716710: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_716713: /* 716713: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 716715: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 716716: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 716717: mov ecx, esi */
  ecx = esi;
/* 716719: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71671fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71671f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 716720: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 716721: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 716722: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 716723: ret 8 */
  esp += 12; SPILL(); return;
}

void f_716750(void) {
  LOAD_REGS();
L_716750: /* 716750: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 716754: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 716755: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 716757: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x71675du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 71675d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_716770(void) {
  LOAD_REGS();
L_716770: /* 716770: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 716771: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 716772: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 716778: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 716779: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71677a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 71677e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 716780: mov esi, ecx */
  esi = ecx;
/* 716782: jge 0x716798 */
  if ((sf == of)) goto L_716798;
L_716784: /* 716784: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 716789: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71678e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 716793: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x716795u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 716795: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_716798: /* 716798: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71679b: jle 0x7167b1 */
  if ((zf || sf != of)) goto L_7167b1;
L_71679d: /* 71679d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7167a2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7167a7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7167ac: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7167aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7167ae: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7167b1: /* 7167b1: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 7167b5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7167b8: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 7167bb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7167bd: jle 0x7167d3 */
  if ((zf || sf != of)) goto L_7167d3;
L_7167bf: /* 7167bf: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7167c4: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7167c9: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7167ce: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7167d0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7167d0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7167d3: /* 7167d3: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7167d5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7167d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7167d7: mov ecx, esi */
  ecx = esi;
/* 7167d9: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7167dfu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7167df: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7167e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7167e1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7167e2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7167e3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_716810(void) {
  LOAD_REGS();
L_716810: /* 716810: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 716814: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 716815: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 716817: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x71681du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 71681d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_716830(void) {
  LOAD_REGS();
L_716830: /* 716830: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 716831: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 716832: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 716838: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 716839: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71683a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 71683e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 716840: mov esi, ecx */
  esi = ecx;
/* 716842: jge 0x716858 */
  if ((sf == of)) goto L_716858;
L_716844: /* 716844: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 716849: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71684e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 716853: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x716855u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 716855: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_716858: /* 716858: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71685b: jle 0x716871 */
  if ((zf || sf != of)) goto L_716871;
L_71685d: /* 71685d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 716862: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 716867: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71686c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x71686eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71686e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_716871: /* 716871: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 716875: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 716878: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 71687b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71687d: jle 0x716893 */
  if ((zf || sf != of)) goto L_716893;
L_71687f: /* 71687f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 716884: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 716889: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71688e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x716890u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 716890: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_716893: /* 716893: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 716895: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 716896: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 716897: mov ecx, esi */
  ecx = esi;
/* 716899: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71689fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71689f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7168a0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7168a1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7168a2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7168a3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7168d0(void) {
  LOAD_REGS();
L_7168d0: /* 7168d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7168d1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7168d2: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 7168d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7168d9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7168da: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 7168de: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7168e0: mov esi, ecx */
  esi = ecx;
/* 7168e2: jge 0x7168f8 */
  if ((sf == of)) goto L_7168f8;
L_7168e4: /* 7168e4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 7168e9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7168ee: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 7168f3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7168f5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7168f5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7168f8: /* 7168f8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7168fb: jle 0x716911 */
  if ((zf || sf != of)) goto L_716911;
L_7168fd: /* 7168fd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 716902: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 716907: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71690c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x71690eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71690e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_716911: /* 716911: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 716915: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 716918: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 71691b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71691d: jle 0x716933 */
  if ((zf || sf != of)) goto L_716933;
L_71691f: /* 71691f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 716924: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 716929: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71692e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x716930u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 716930: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_716933: /* 716933: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 716935: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 716936: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 716937: mov ecx, esi */
  ecx = esi;
/* 716939: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71693fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71693f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 716940: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 716941: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 716942: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 716943: ret 8 */
  esp += 12; SPILL(); return;
}

void f_716970(void) {
  LOAD_REGS();
L_716970: /* 716970: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 716971: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 716972: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 716978: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 716979: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71697a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 71697e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 716980: mov esi, ecx */
  esi = ecx;
/* 716982: jge 0x716998 */
  if ((sf == of)) goto L_716998;
L_716984: /* 716984: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 716989: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71698e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 716993: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x716995u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 716995: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_716998: /* 716998: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71699b: jle 0x7169b1 */
  if ((zf || sf != of)) goto L_7169b1;
L_71699d: /* 71699d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7169a2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7169a7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7169ac: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7169aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7169ae: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7169b1: /* 7169b1: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 7169b5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7169b8: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 7169bb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7169bd: jle 0x7169d3 */
  if ((zf || sf != of)) goto L_7169d3;
L_7169bf: /* 7169bf: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7169c4: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7169c9: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7169ce: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7169d0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7169d0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7169d3: /* 7169d3: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 7169d5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7169d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7169d7: mov ecx, esi */
  ecx = esi;
/* 7169d9: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7169dfu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7169df: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7169e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7169e1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7169e2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7169e3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_716a10(void) {
  LOAD_REGS();
L_716a10: /* 716a10: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 716a11: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 716a12: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 716a16: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 716a18: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 716a19: mov esi, dword ptr [0xcfa2fc] */
  esi = R32((uint32_t)(0xcfa2fcu));
/* 716a1f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 716a20: mov ebx, ecx */
  ebx = ecx;
/* 716a22: jge 0x716a38 */
  if ((sf == of)) goto L_716a38;
L_716a24: /* 716a24: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 716a29: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 716a2e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 716a33: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x716a35u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 716a35: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_716a38: /* 716a38: cmp ebp, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 716a3b: jle 0x716a51 */
  if ((zf || sf != of)) goto L_716a51;
L_716a3d: /* 716a3d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 716a42: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 716a47: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 716a4c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x716a4eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 716a4e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_716a51: /* 716a51: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 716a55: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 716a58: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 716a5a: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 716a5c: jle 0x716a72 */
  if ((zf || sf != of)) goto L_716a72;
L_716a5e: /* 716a5e: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 716a63: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 716a68: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 716a6d: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x716a6fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 716a6f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_716a72: /* 716a72: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 716a76: lea eax, [ecx + ebp] */
  eax = (uint32_t)(ecx + ebp);
/* 716a79: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 716a7b: mov edi, ebp */
  edi = ebp;
/* 716a7d: jge 0x716abc */
  if ((sf == of)) goto L_716abc;
L_716a7f: /* 716a7f: nop  */
L_716a80: /* 716a80: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 716a82: mov ecx, dword ptr [edx + edi*4] */
  ecx = R32((uint32_t)(edx + edi*4));
/* 716a85: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 716a87: lea esi, [edx + edi*4] */
  esi = (uint32_t)(edx + edi*4);
/* 716a8a: je 0x716ab1 */
  if (zf) goto L_716ab1;
L_716a8c: /* 716a8c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 716a8e: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x716a91u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 716a91: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 716a93: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 716a95: je 0x716aab */
  if (zf) goto L_716aab;
L_716a97: /* 716a97: mov dword ptr [eax], 0x9f7674 */
  W32((uint32_t)(eax), 0x9f7674u);
/* 716a9d: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 716aa3: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 716aa5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 716aa7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 716aa8: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x716aabu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_716aab: /* 716aab: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
L_716ab1: /* 716ab1: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 716ab5: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 716ab6: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 716ab8: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 716aba: jl 0x716a80 */
  if ((sf != of)) goto L_716a80;
L_716abc: /* 716abc: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 716ac0: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 716ac2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 716ac3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 716ac4: mov ecx, ebx */
  ecx = ebx;
/* 716ac6: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x716accu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 716acc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 716acd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 716ace: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 716acf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 716ad0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_716b20(void) {
  LOAD_REGS();
L_716b20: /* 716b20: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 716b21: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 716b22: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 716b28: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 716b29: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 716b2a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 716b2e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 716b30: mov esi, ecx */
  esi = ecx;
/* 716b32: jge 0x716b48 */
  if ((sf == of)) goto L_716b48;
L_716b34: /* 716b34: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 716b39: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 716b3e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 716b43: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x716b45u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 716b45: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_716b48: /* 716b48: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 716b4b: jle 0x716b61 */
  if ((zf || sf != of)) goto L_716b61;
L_716b4d: /* 716b4d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 716b52: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 716b57: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 716b5c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x716b5eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 716b5e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_716b61: /* 716b61: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 716b65: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 716b68: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 716b6b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 716b6d: jle 0x716b83 */
  if ((zf || sf != of)) goto L_716b83;
L_716b6f: /* 716b6f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 716b74: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 716b79: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 716b7e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x716b80u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 716b80: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_716b83: /* 716b83: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 716b85: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 716b86: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 716b87: mov ecx, esi */
  ecx = esi;
/* 716b89: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x716b8fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 716b8f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 716b90: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 716b91: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 716b92: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 716b93: ret 8 */
  esp += 12; SPILL(); return;
}

void f_716bc0(void) {
  LOAD_REGS();
L_716bc0: /* 716bc0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 716bc4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 716bc5: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 716bc7: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x716bcdu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 716bcd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_716be0(void) {
  LOAD_REGS();
L_716be0: /* 716be0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 716be2: push 0x9c2ab9 */
  { uint32_t v = 0x9c2ab9u; esp -= 4; W32(esp, v); }
/* 716be7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 716bed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 716bee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 716bf5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 716bf6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 716bf7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 716bf8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 716bf9: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 716bfd: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 716c00: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 716c02: mov esi, ecx */
  esi = ecx;
/* 716c04: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 716c05: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 716c09: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x716c0fu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 716c0f: xor ebx, ebx */
  ebx = 0;
/* 716c11: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 716c14: cmp dword ptr [edi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 716c17: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 716c1b: jle 0x716c5b */
  if ((zf || sf != of)) goto L_716c5b;
L_716c1d: /* 716c1d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 716c1e: xor ebp, ebp */
  ebp = 0;
L_716c20: /* 716c20: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 716c22: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 716c24: mov ecx, esi */
  ecx = esi;
/* 716c26: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x716c2cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 716c2c: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 716c2e: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 716c31: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 716c33: je 0x716c4f */
  if (zf) goto L_716c4f;
L_716c35: /* 716c35: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 716c37: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 716c39: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 716c3b: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 716c3d: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 716c40: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 716c43: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 716c46: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 716c49: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 716c4c: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
L_716c4f: /* 716c4f: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 716c52: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 716c53: add ebp, 0x10 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 716c56: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 716c58: jl 0x716c20 */
  if ((sf != of)) goto L_716c20;
L_716c5a: /* 716c5a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_716c5b: /* 716c5b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 716c5f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 716c60: mov eax, esi */
  eax = esi;
/* 716c62: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 716c63: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 716c64: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 716c6b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 716c6e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_716cb0(void) {
  LOAD_REGS();
L_716cb0: /* 716cb0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 716cb4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 716cb5: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 716cb7: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x716cbdu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 716cbd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_716cd0(void) {
  LOAD_REGS();
L_716cd0: /* 716cd0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 716cd1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 716cd2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 716cd3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 716cd7: mov esi, ecx */
  esi = ecx;
/* 716cd9: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 716cdb: je 0x716d30 */
  if (zf) goto L_716d30;
L_716cdd: /* 716cdd: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 716ce0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 716ce1: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 716ce3: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x716ce9u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 716ce9: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 716cec: xor ebx, ebx */
  ebx = 0;
/* 716cee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 716cf0: jle 0x716d30 */
  if ((zf || sf != of)) goto L_716d30;
L_716cf2: /* 716cf2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 716cf3: xor ebp, ebp */
  ebp = 0;
L_716cf5: /* 716cf5: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 716cf7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 716cf9: mov ecx, esi */
  ecx = esi;
/* 716cfb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x716d01u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 716d01: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 716d03: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 716d06: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 716d08: je 0x716d24 */
  if (zf) goto L_716d24;
L_716d0a: /* 716d0a: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 716d0c: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 716d0e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 716d10: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 716d12: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 716d15: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 716d18: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 716d1b: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 716d1e: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 716d21: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
L_716d24: /* 716d24: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 716d27: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 716d28: add ebp, 0x10 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 716d2b: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 716d2d: jl 0x716cf5 */
  if ((sf != of)) goto L_716cf5;
L_716d2f: /* 716d2f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_716d30: /* 716d30: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 716d31: mov eax, esi */
  eax = esi;
/* 716d33: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 716d34: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 716d35: ret 4 */
  esp += 8; SPILL(); return;
}

void f_716d60(void) {
  LOAD_REGS();
L_716d60: /* 716d60: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 716d62: push 0x9c2ad9 */
  { uint32_t v = 0x9c2ad9u; esp -= 4; W32(esp, v); }
/* 716d67: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 716d6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 716d6e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 716d75: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 716d78: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 716d79: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 716d7a: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 716d7e: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 716d81: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 716d82: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 716d84: mov ebx, ecx */
  ebx = ecx;
/* 716d86: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 716d87: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 716d8b: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x716d91u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 716d91: xor esi, esi */
  esi = 0;
/* 716d93: mov dword ptr [ebx + 4], esi */
  W32((uint32_t)(ebx + 0x4u), esi);
/* 716d96: cmp dword ptr [ebp + 4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 716d99: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 716d9d: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 716da1: jle 0x716dec */
  if ((zf || sf != of)) goto L_716dec;
L_716da3: /* 716da3: mov dword ptr [esp + 0x24], esi */
  W32((uint32_t)(esp + 0x24u), esi);
/* 716da7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_716da8: /* 716da8: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 716daa: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 716dac: mov ecx, ebx */
  ecx = ebx;
/* 716dae: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x716db4u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 716db4: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 716db6: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 716db9: lea edi, [edx + ecx*4] */
  edi = (uint32_t)(edx + ecx*4);
/* 716dbc: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 716dbe: je 0x716dd0 */
  if (zf) goto L_716dd0;
L_716dc0: /* 716dc0: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 716dc3: add esi, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 716dc7: mov ecx, 5 */
  ecx = 0x5u;
/* 716dcc: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 716dce: xor esi, esi */
  esi = 0;
L_716dd0: /* 716dd0: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 716dd4: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 716dd8: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 716ddb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 716ddc: add edx, 0x14 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 716ddf: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 716de1: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 716de5: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 716de9: jl 0x716da8 */
  if ((sf != of)) goto L_716da8;
L_716deb: /* 716deb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_716dec: /* 716dec: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 716df0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 716df1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 716df2: mov eax, ebx */
  eax = ebx;
/* 716df4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 716df5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 716dfc: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 716dff: ret 4 */
  esp += 8; SPILL(); return;
}

void f_716e40(void) {
  LOAD_REGS();
L_716e40: /* 716e40: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 716e44: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 716e45: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 716e47: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x716e4du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 716e4d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_716e60(void) {
  LOAD_REGS();
L_716e60: /* 716e60: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 716e61: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 716e62: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 716e63: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 716e67: mov ebx, ecx */
  ebx = ecx;
/* 716e69: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 716e6b: je 0x716ed3 */
  if (zf) goto L_716ed3;
L_716e6d: /* 716e6d: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 716e70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 716e71: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 716e73: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x716e79u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 716e79: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 716e7c: xor eax, eax */
  eax = 0;
/* 716e7e: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 716e80: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 716e84: jle 0x716ed3 */
  if ((zf || sf != of)) goto L_716ed3;
L_716e86: /* 716e86: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 716e87: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 716e8b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 716e8c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_716e90: /* 716e90: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 716e92: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 716e94: mov ecx, ebx */
  ecx = ebx;
/* 716e96: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x716e9cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 716e9c: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 716e9e: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 716ea1: lea edi, [ecx + eax*4] */
  edi = (uint32_t)(ecx + eax*4);
/* 716ea4: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 716ea6: je 0x716eb6 */
  if (zf) goto L_716eb6;
L_716ea8: /* 716ea8: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 716eab: add esi, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 716eaf: mov ecx, 5 */
  ecx = 0x5u;
/* 716eb4: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_716eb6: /* 716eb6: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 716eba: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 716ebe: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 716ec1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 716ec2: add edx, 0x14 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 716ec5: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 716ec7: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 716ecb: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 716ecf: jl 0x716e90 */
  if ((sf != of)) goto L_716e90;
L_716ed1: /* 716ed1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 716ed2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_716ed3: /* 716ed3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 716ed4: mov eax, ebx */
  eax = ebx;
/* 716ed6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 716ed7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 716ed8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_716f00(void) {
  LOAD_REGS();
L_716f00: /* 716f00: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 716f01: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 716f02: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 716f08: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 716f09: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 716f0a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 716f0e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 716f10: mov esi, ecx */
  esi = ecx;
/* 716f12: jge 0x716f28 */
  if ((sf == of)) goto L_716f28;
L_716f14: /* 716f14: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 716f19: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 716f1e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 716f23: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x716f25u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 716f25: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_716f28: /* 716f28: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 716f2b: jle 0x716f41 */
  if ((zf || sf != of)) goto L_716f41;
L_716f2d: /* 716f2d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 716f32: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 716f37: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 716f3c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x716f3eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 716f3e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_716f41: /* 716f41: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 716f45: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 716f48: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 716f4b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 716f4d: jle 0x716f63 */
  if ((zf || sf != of)) goto L_716f63;
L_716f4f: /* 716f4f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 716f54: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 716f59: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 716f5e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x716f60u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 716f60: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_716f63: /* 716f63: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 716f65: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 716f66: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 716f67: mov ecx, esi */
  ecx = esi;
/* 716f69: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x716f6fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 716f6f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 716f70: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 716f71: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 716f72: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 716f73: ret 8 */
  esp += 12; SPILL(); return;
}

void f_716fa0(void) {
  LOAD_REGS();
L_716fa0: /* 716fa0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 716fa4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 716fa5: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 716fa7: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x716fadu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 716fad: ret 4 */
  esp += 8; SPILL(); return;
}

void f_716fc0(void) {
  LOAD_REGS();
L_716fc0: /* 716fc0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 716fc1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 716fc2: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 716fc8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 716fc9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 716fca: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 716fce: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 716fd0: mov esi, ecx */
  esi = ecx;
/* 716fd2: jge 0x716fe8 */
  if ((sf == of)) goto L_716fe8;
L_716fd4: /* 716fd4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 716fd9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 716fde: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 716fe3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x716fe5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 716fe5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_716fe8: /* 716fe8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 716feb: jle 0x717001 */
  if ((zf || sf != of)) goto L_717001;
L_716fed: /* 716fed: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 716ff2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 716ff7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 716ffc: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x716ffeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 716ffe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_717001: /* 717001: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 717005: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 717008: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 71700b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71700d: jle 0x717023 */
  if ((zf || sf != of)) goto L_717023;
L_71700f: /* 71700f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 717014: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 717019: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71701e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x717020u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 717020: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_717023: /* 717023: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 717025: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 717026: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 717027: mov ecx, esi */
  ecx = esi;
/* 717029: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71702fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71702f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 717030: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 717031: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 717032: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 717033: ret 8 */
  esp += 12; SPILL(); return;
}

void f_717060(void) {
  LOAD_REGS();
L_717060: /* 717060: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 717064: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 717065: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 717067: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x71706du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 71706d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_717080(void) {
  LOAD_REGS();
L_717080: /* 717080: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 717081: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 717082: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 717088: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 717089: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71708a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 71708e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 717090: mov esi, ecx */
  esi = ecx;
/* 717092: jge 0x7170a8 */
  if ((sf == of)) goto L_7170a8;
L_717094: /* 717094: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 717099: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71709e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 7170a3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7170a5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7170a5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7170a8: /* 7170a8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7170ab: jle 0x7170c1 */
  if ((zf || sf != of)) goto L_7170c1;
L_7170ad: /* 7170ad: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7170b2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7170b7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7170bc: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7170beu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7170be: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7170c1: /* 7170c1: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 7170c5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7170c8: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 7170cb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7170cd: jle 0x7170e3 */
  if ((zf || sf != of)) goto L_7170e3;
L_7170cf: /* 7170cf: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7170d4: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7170d9: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7170de: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7170e0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7170e0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7170e3: /* 7170e3: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 7170e5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7170e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7170e7: mov ecx, esi */
  ecx = esi;
/* 7170e9: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7170efu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7170ef: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7170f0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7170f1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7170f2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7170f3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_717120(void) {
  LOAD_REGS();
L_717120: /* 717120: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 717124: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 717125: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 717127: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x71712du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 71712d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_717140(void) {
  LOAD_REGS();
L_717140: /* 717140: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 717141: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 717142: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 717148: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 717149: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71714a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 71714e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 717150: mov esi, ecx */
  esi = ecx;
/* 717152: jge 0x717168 */
  if ((sf == of)) goto L_717168;
L_717154: /* 717154: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 717159: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71715e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 717163: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x717165u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 717165: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_717168: /* 717168: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71716b: jle 0x717181 */
  if ((zf || sf != of)) goto L_717181;
L_71716d: /* 71716d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 717172: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 717177: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71717c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x71717eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71717e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_717181: /* 717181: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 717185: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 717188: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 71718b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71718d: jle 0x7171a3 */
  if ((zf || sf != of)) goto L_7171a3;
L_71718f: /* 71718f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 717194: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 717199: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71719e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7171a0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7171a0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7171a3: /* 7171a3: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* 7171a5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7171a6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7171a7: mov ecx, esi */
  ecx = esi;
/* 7171a9: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7171afu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7171af: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7171b0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7171b1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7171b2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7171b3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7171e0(void) {
  LOAD_REGS();
L_7171e0: /* 7171e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7171e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7171e5: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* 7171e7: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7171edu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7171ed: ret 4 */
  esp += 8; SPILL(); return;
}

void f_717200(void) {
  LOAD_REGS();
L_717200: /* 717200: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 717201: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 717202: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 717208: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 717209: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71720a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 71720e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 717210: mov esi, ecx */
  esi = ecx;
/* 717212: jge 0x717228 */
  if ((sf == of)) goto L_717228;
L_717214: /* 717214: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 717219: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71721e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 717223: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x717225u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 717225: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_717228: /* 717228: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71722b: jle 0x717241 */
  if ((zf || sf != of)) goto L_717241;
L_71722d: /* 71722d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 717232: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 717237: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71723c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x71723eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71723e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_717241: /* 717241: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 717245: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 717248: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 71724b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71724d: jle 0x717263 */
  if ((zf || sf != of)) goto L_717263;
L_71724f: /* 71724f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 717254: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 717259: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71725e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x717260u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 717260: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_717263: /* 717263: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 717265: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 717266: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 717267: mov ecx, esi */
  ecx = esi;
/* 717269: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71726fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71726f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 717270: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 717271: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 717272: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 717273: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7172a0(void) {
  LOAD_REGS();
L_7172a0: /* 7172a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7172a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7172a5: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 7172a7: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7172adu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7172ad: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7172c0(void) {
  LOAD_REGS();
L_7172c0: /* 7172c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7172c1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7172c2: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 7172c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7172c9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7172ca: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 7172ce: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7172d0: mov esi, ecx */
  esi = ecx;
/* 7172d2: jge 0x7172e8 */
  if ((sf == of)) goto L_7172e8;
L_7172d4: /* 7172d4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 7172d9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7172de: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 7172e3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7172e5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7172e5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7172e8: /* 7172e8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7172eb: jle 0x717301 */
  if ((zf || sf != of)) goto L_717301;
L_7172ed: /* 7172ed: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7172f2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7172f7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7172fc: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7172feu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7172fe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_717301: /* 717301: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 717305: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 717308: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 71730b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71730d: jle 0x717323 */
  if ((zf || sf != of)) goto L_717323;
L_71730f: /* 71730f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 717314: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 717319: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71731e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x717320u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 717320: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_717323: /* 717323: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 717325: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 717326: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 717327: mov ecx, esi */
  ecx = esi;
/* 717329: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71732fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71732f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 717330: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 717331: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 717332: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 717333: ret 8 */
  esp += 12; SPILL(); return;
}

void f_717360(void) {
  LOAD_REGS();
L_717360: /* 717360: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 717364: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 717365: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 717367: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x71736du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 71736d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_717380(void) {
  LOAD_REGS();
L_717380: /* 717380: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 717381: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 717382: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 717388: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 717389: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71738a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 71738e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 717390: mov esi, ecx */
  esi = ecx;
/* 717392: jge 0x7173a8 */
  if ((sf == of)) goto L_7173a8;
L_717394: /* 717394: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 717399: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71739e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 7173a3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7173a5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7173a5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7173a8: /* 7173a8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7173ab: jle 0x7173c1 */
  if ((zf || sf != of)) goto L_7173c1;
L_7173ad: /* 7173ad: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7173b2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7173b7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7173bc: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7173beu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7173be: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7173c1: /* 7173c1: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 7173c5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7173c8: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 7173cb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7173cd: jle 0x7173e3 */
  if ((zf || sf != of)) goto L_7173e3;
L_7173cf: /* 7173cf: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7173d4: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7173d9: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7173de: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7173e0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7173e0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7173e3: /* 7173e3: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7173e5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7173e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7173e7: mov ecx, esi */
  ecx = esi;
/* 7173e9: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7173efu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7173ef: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7173f0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7173f1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7173f2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7173f3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_717420(void) {
  LOAD_REGS();
L_717420: /* 717420: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 717424: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 717425: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 717427: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x71742du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 71742d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_717440(void) {
  LOAD_REGS();
L_717440: /* 717440: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 717441: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 717442: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 717448: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 717449: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71744a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 71744e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 717450: mov esi, ecx */
  esi = ecx;
/* 717452: jge 0x717468 */
  if ((sf == of)) goto L_717468;
L_717454: /* 717454: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 717459: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71745e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 717463: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x717465u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 717465: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_717468: /* 717468: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71746b: jle 0x717481 */
  if ((zf || sf != of)) goto L_717481;
L_71746d: /* 71746d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 717472: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 717477: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71747c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x71747eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71747e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_717481: /* 717481: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 717485: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 717488: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 71748b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71748d: jle 0x7174a3 */
  if ((zf || sf != of)) goto L_7174a3;
L_71748f: /* 71748f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 717494: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 717499: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71749e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7174a0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7174a0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7174a3: /* 7174a3: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7174a5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7174a6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7174a7: mov ecx, esi */
  ecx = esi;
/* 7174a9: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7174afu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7174af: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7174b0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7174b1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7174b2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7174b3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7174e0(void) {
  LOAD_REGS();
L_7174e0: /* 7174e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7174e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7174e5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7174e7: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7174edu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7174ed: ret 4 */
  esp += 8; SPILL(); return;
}

void f_717500(void) {
  LOAD_REGS();
L_717500: /* 717500: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 717501: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 717502: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 717508: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 717509: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71750a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 71750e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 717510: mov esi, ecx */
  esi = ecx;
/* 717512: jge 0x717528 */
  if ((sf == of)) goto L_717528;
L_717514: /* 717514: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 717519: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71751e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 717523: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x717525u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 717525: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_717528: /* 717528: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71752b: jle 0x717541 */
  if ((zf || sf != of)) goto L_717541;
L_71752d: /* 71752d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 717532: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 717537: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71753c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x71753eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71753e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_717541: /* 717541: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 717545: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 717548: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 71754b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71754d: jle 0x717563 */
  if ((zf || sf != of)) goto L_717563;
L_71754f: /* 71754f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 717554: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 717559: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71755e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x717560u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 717560: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_717563: /* 717563: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 717565: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 717566: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 717567: mov ecx, esi */
  ecx = esi;
/* 717569: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71756fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71756f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 717570: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 717571: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 717572: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 717573: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7175a0(void) {
  LOAD_REGS();
L_7175a0: /* 7175a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7175a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7175a5: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 7175a7: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7175adu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7175ad: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7175c0(void) {
  LOAD_REGS();
L_7175c0: /* 7175c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7175c1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7175c2: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 7175c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7175c9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7175ca: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 7175ce: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7175d0: mov esi, ecx */
  esi = ecx;
/* 7175d2: jge 0x7175e8 */
  if ((sf == of)) goto L_7175e8;
L_7175d4: /* 7175d4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 7175d9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7175de: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 7175e3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7175e5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7175e5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7175e8: /* 7175e8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7175eb: jle 0x717601 */
  if ((zf || sf != of)) goto L_717601;
L_7175ed: /* 7175ed: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7175f2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7175f7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7175fc: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7175feu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7175fe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_717601: /* 717601: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 717605: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 717608: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 71760b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71760d: jle 0x717623 */
  if ((zf || sf != of)) goto L_717623;
L_71760f: /* 71760f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 717614: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 717619: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71761e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x717620u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 717620: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_717623: /* 717623: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 717625: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 717626: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 717627: mov ecx, esi */
  ecx = esi;
/* 717629: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71762fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71762f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 717630: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 717631: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 717632: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 717633: ret 8 */
  esp += 12; SPILL(); return;
}

void f_717660(void) {
  LOAD_REGS();
L_717660: /* 717660: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 717664: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 717665: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 717667: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x71766du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 71766d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_717680(void) {
  LOAD_REGS();
L_717680: /* 717680: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 717681: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 717682: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 717688: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 717689: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71768a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 71768e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 717690: mov esi, ecx */
  esi = ecx;
/* 717692: jge 0x7176a8 */
  if ((sf == of)) goto L_7176a8;
L_717694: /* 717694: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 717699: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71769e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 7176a3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7176a5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7176a5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7176a8: /* 7176a8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7176ab: jle 0x7176c1 */
  if ((zf || sf != of)) goto L_7176c1;
L_7176ad: /* 7176ad: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7176b2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7176b7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7176bc: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7176beu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7176be: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7176c1: /* 7176c1: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 7176c5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7176c8: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 7176cb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7176cd: jle 0x7176e3 */
  if ((zf || sf != of)) goto L_7176e3;
L_7176cf: /* 7176cf: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7176d4: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7176d9: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7176de: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7176e0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7176e0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7176e3: /* 7176e3: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 7176e5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7176e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7176e7: mov ecx, esi */
  ecx = esi;
/* 7176e9: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7176efu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7176ef: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7176f0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7176f1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7176f2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7176f3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_717720(void) {
  LOAD_REGS();
L_717720: /* 717720: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 717724: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 717725: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 717727: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x71772du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 71772d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_717740(void) {
  LOAD_REGS();
L_717740: /* 717740: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 717741: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 717742: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 717748: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 717749: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71774a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 71774e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 717750: mov esi, ecx */
  esi = ecx;
/* 717752: jge 0x717768 */
  if ((sf == of)) goto L_717768;
L_717754: /* 717754: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 717759: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71775e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 717763: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x717765u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 717765: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_717768: /* 717768: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71776b: jle 0x717781 */
  if ((zf || sf != of)) goto L_717781;
L_71776d: /* 71776d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 717772: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 717777: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71777c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x71777eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71777e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_717781: /* 717781: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 717785: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 717788: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 71778b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71778d: jle 0x7177a3 */
  if ((zf || sf != of)) goto L_7177a3;
L_71778f: /* 71778f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 717794: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 717799: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71779e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7177a0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7177a0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7177a3: /* 7177a3: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 7177a5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7177a6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7177a7: mov ecx, esi */
  ecx = esi;
/* 7177a9: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7177afu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7177af: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7177b0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7177b1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7177b2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7177b3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7177e0(void) {
  LOAD_REGS();
L_7177e0: /* 7177e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7177e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7177e5: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 7177e7: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7177edu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7177ed: ret 4 */
  esp += 8; SPILL(); return;
}

void f_717800(void) {
  LOAD_REGS();
L_717800: /* 717800: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 717801: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 717802: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 717808: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 717809: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71780a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 71780e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 717810: mov esi, ecx */
  esi = ecx;
/* 717812: jge 0x717828 */
  if ((sf == of)) goto L_717828;
L_717814: /* 717814: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 717819: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71781e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 717823: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x717825u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 717825: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_717828: /* 717828: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71782b: jle 0x717841 */
  if ((zf || sf != of)) goto L_717841;
L_71782d: /* 71782d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 717832: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 717837: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71783c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x71783eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71783e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_717841: /* 717841: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 717845: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 717848: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 71784b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71784d: jle 0x717863 */
  if ((zf || sf != of)) goto L_717863;
L_71784f: /* 71784f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 717854: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 717859: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71785e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x717860u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 717860: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_717863: /* 717863: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 717865: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 717866: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 717867: mov ecx, esi */
  ecx = esi;
/* 717869: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71786fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71786f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 717870: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 717871: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 717872: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 717873: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7178a0(void) {
  LOAD_REGS();
L_7178a0: /* 7178a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7178a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7178a5: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 7178a7: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7178adu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7178ad: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7178c0(void) {
  LOAD_REGS();
L_7178c0: /* 7178c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7178c1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7178c2: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 7178c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7178c9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7178ca: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 7178ce: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7178d0: mov esi, ecx */
  esi = ecx;
/* 7178d2: jge 0x7178e8 */
  if ((sf == of)) goto L_7178e8;
L_7178d4: /* 7178d4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 7178d9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7178de: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 7178e3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7178e5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7178e5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7178e8: /* 7178e8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7178eb: jle 0x717901 */
  if ((zf || sf != of)) goto L_717901;
L_7178ed: /* 7178ed: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7178f2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7178f7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7178fc: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7178feu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7178fe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_717901: /* 717901: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 717905: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 717908: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 71790b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71790d: jle 0x717923 */
  if ((zf || sf != of)) goto L_717923;
L_71790f: /* 71790f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 717914: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 717919: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71791e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x717920u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 717920: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_717923: /* 717923: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 717925: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 717926: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 717927: mov ecx, esi */
  ecx = esi;
/* 717929: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71792fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71792f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 717930: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 717931: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 717932: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 717933: ret 8 */
  esp += 12; SPILL(); return;
}

void f_717960(void) {
  LOAD_REGS();
L_717960: /* 717960: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 717964: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 717965: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 717967: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x71796du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 71796d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_717980(void) {
  LOAD_REGS();
L_717980: /* 717980: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 717981: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 717982: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 717988: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 717989: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71798a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 71798e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 717990: mov esi, ecx */
  esi = ecx;
/* 717992: jge 0x7179a8 */
  if ((sf == of)) goto L_7179a8;
L_717994: /* 717994: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 717999: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71799e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 7179a3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7179a5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7179a5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7179a8: /* 7179a8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7179ab: jle 0x7179c1 */
  if ((zf || sf != of)) goto L_7179c1;
L_7179ad: /* 7179ad: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7179b2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7179b7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7179bc: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7179beu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7179be: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7179c1: /* 7179c1: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 7179c5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7179c8: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 7179cb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7179cd: jle 0x7179e3 */
  if ((zf || sf != of)) goto L_7179e3;
L_7179cf: /* 7179cf: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7179d4: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7179d9: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7179de: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7179e0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7179e0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7179e3: /* 7179e3: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 7179e5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7179e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7179e7: mov ecx, esi */
  ecx = esi;
/* 7179e9: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7179efu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7179ef: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7179f0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7179f1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7179f2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7179f3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_717a20(void) {
  LOAD_REGS();
L_717a20: /* 717a20: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 717a21: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 717a22: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 717a28: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 717a29: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 717a2a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 717a2e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 717a30: mov esi, ecx */
  esi = ecx;
/* 717a32: jge 0x717a48 */
  if ((sf == of)) goto L_717a48;
L_717a34: /* 717a34: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 717a39: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 717a3e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 717a43: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x717a45u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 717a45: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_717a48: /* 717a48: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 717a4b: jle 0x717a61 */
  if ((zf || sf != of)) goto L_717a61;
L_717a4d: /* 717a4d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 717a52: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 717a57: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 717a5c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x717a5eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 717a5e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_717a61: /* 717a61: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 717a65: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 717a68: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 717a6b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 717a6d: jle 0x717a83 */
  if ((zf || sf != of)) goto L_717a83;
L_717a6f: /* 717a6f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 717a74: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 717a79: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 717a7e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x717a80u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 717a80: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_717a83: /* 717a83: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 717a85: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 717a86: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 717a87: mov ecx, esi */
  ecx = esi;
/* 717a89: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x717a8fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 717a8f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 717a90: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 717a91: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 717a92: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 717a93: ret 8 */
  esp += 12; SPILL(); return;
}

void f_717ac0(void) {
  LOAD_REGS();
L_717ac0: /* 717ac0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 717ac1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 717ac2: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 717ac8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 717ac9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 717aca: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 717ace: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 717ad0: mov esi, ecx */
  esi = ecx;
/* 717ad2: jge 0x717ae8 */
  if ((sf == of)) goto L_717ae8;
L_717ad4: /* 717ad4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 717ad9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 717ade: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 717ae3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x717ae5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 717ae5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_717ae8: /* 717ae8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 717aeb: jle 0x717b01 */
  if ((zf || sf != of)) goto L_717b01;
L_717aed: /* 717aed: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 717af2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 717af7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 717afc: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x717afeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 717afe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_717b01: /* 717b01: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 717b05: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 717b08: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 717b0b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 717b0d: jle 0x717b23 */
  if ((zf || sf != of)) goto L_717b23;
L_717b0f: /* 717b0f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 717b14: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 717b19: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 717b1e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x717b20u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 717b20: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_717b23: /* 717b23: push 0xa8 */
  { uint32_t v = 0xa8u; esp -= 4; W32(esp, v); }
/* 717b28: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 717b29: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 717b2a: mov ecx, esi */
  ecx = esi;
/* 717b2c: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x717b32u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 717b32: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 717b33: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 717b34: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 717b35: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 717b36: ret 8 */
  esp += 12; SPILL(); return;
}

void f_717b60(void) {
  LOAD_REGS();
L_717b60: /* 717b60: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 717b61: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 717b62: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 717b68: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 717b69: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 717b6a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 717b6e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 717b70: mov esi, ecx */
  esi = ecx;
/* 717b72: jge 0x717b88 */
  if ((sf == of)) goto L_717b88;
L_717b74: /* 717b74: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 717b79: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 717b7e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 717b83: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x717b85u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 717b85: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_717b88: /* 717b88: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 717b8b: jle 0x717ba1 */
  if ((zf || sf != of)) goto L_717ba1;
L_717b8d: /* 717b8d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 717b92: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 717b97: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 717b9c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x717b9eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 717b9e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_717ba1: /* 717ba1: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 717ba5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 717ba8: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 717bab: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 717bad: jle 0x717bc3 */
  if ((zf || sf != of)) goto L_717bc3;
L_717baf: /* 717baf: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 717bb4: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 717bb9: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 717bbe: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x717bc0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 717bc0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_717bc3: /* 717bc3: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 717bc5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 717bc6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 717bc7: mov ecx, esi */
  ecx = esi;
/* 717bc9: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x717bcfu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 717bcf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 717bd0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 717bd1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 717bd2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 717bd3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_717c00(void) {
  LOAD_REGS();
L_717c00: /* 717c00: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 717c04: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 717c05: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 717c07: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x717c0du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 717c0d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_717c20(void) {
  LOAD_REGS();
L_717c20: /* 717c20: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 717c21: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 717c22: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 717c28: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 717c29: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 717c2a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 717c2e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 717c30: mov esi, ecx */
  esi = ecx;
/* 717c32: jge 0x717c48 */
  if ((sf == of)) goto L_717c48;
L_717c34: /* 717c34: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 717c39: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 717c3e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 717c43: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x717c45u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 717c45: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_717c48: /* 717c48: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 717c4b: jle 0x717c61 */
  if ((zf || sf != of)) goto L_717c61;
L_717c4d: /* 717c4d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 717c52: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 717c57: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 717c5c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x717c5eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 717c5e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_717c61: /* 717c61: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 717c65: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 717c68: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 717c6b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 717c6d: jle 0x717c83 */
  if ((zf || sf != of)) goto L_717c83;
L_717c6f: /* 717c6f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 717c74: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 717c79: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 717c7e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x717c80u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 717c80: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_717c83: /* 717c83: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 717c85: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 717c86: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 717c87: mov ecx, esi */
  ecx = esi;
/* 717c89: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x717c8fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 717c8f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 717c90: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 717c91: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 717c92: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 717c93: ret 8 */
  esp += 12; SPILL(); return;
}

void f_717cc0(void) {
  LOAD_REGS();
L_717cc0: /* 717cc0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 717cc4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 717cc5: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 717cc7: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x717ccdu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 717ccd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_717ce0(void) {
  LOAD_REGS();
L_717ce0: /* 717ce0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 717ce2: push 0x9c2af9 */
  { uint32_t v = 0x9c2af9u; esp -= 4; W32(esp, v); }
/* 717ce7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 717ced: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 717cee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 717cf5: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 717cf8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 717cf9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 717cfa: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 717cfe: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 717d01: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 717d02: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 717d04: mov ebx, ecx */
  ebx = ecx;
/* 717d06: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 717d07: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 717d0b: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x717d11u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 717d11: xor esi, esi */
  esi = 0;
/* 717d13: mov dword ptr [ebx + 4], esi */
  W32((uint32_t)(ebx + 0x4u), esi);
/* 717d16: cmp dword ptr [ebp + 4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 717d19: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 717d1d: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 717d21: jle 0x717d6c */
  if ((zf || sf != of)) goto L_717d6c;
L_717d23: /* 717d23: mov dword ptr [esp + 0x24], esi */
  W32((uint32_t)(esp + 0x24u), esi);
/* 717d27: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_717d28: /* 717d28: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 717d2a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 717d2c: mov ecx, ebx */
  ecx = ebx;
/* 717d2e: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x717d34u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 717d34: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 717d36: lea ecx, [eax + eax*8] */
  ecx = (uint32_t)(eax + eax*8);
/* 717d39: lea edi, [edx + ecx*4] */
  edi = (uint32_t)(edx + ecx*4);
/* 717d3c: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 717d3e: je 0x717d50 */
  if (zf) goto L_717d50;
L_717d40: /* 717d40: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 717d43: add esi, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 717d47: mov ecx, 9 */
  ecx = 0x9u;
/* 717d4c: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 717d4e: xor esi, esi */
  esi = 0;
L_717d50: /* 717d50: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 717d54: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 717d58: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 717d5b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 717d5c: add edx, 0x24 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 717d5f: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 717d61: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 717d65: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 717d69: jl 0x717d28 */
  if ((sf != of)) goto L_717d28;
L_717d6b: /* 717d6b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_717d6c: /* 717d6c: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 717d70: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 717d71: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 717d72: mov eax, ebx */
  eax = ebx;
/* 717d74: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 717d75: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 717d7c: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 717d7f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_717dc0(void) {
  LOAD_REGS();
L_717dc0: /* 717dc0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 717dc1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 717dc2: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 717dc8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 717dc9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 717dca: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 717dce: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 717dd0: mov esi, ecx */
  esi = ecx;
/* 717dd2: jge 0x717de8 */
  if ((sf == of)) goto L_717de8;
L_717dd4: /* 717dd4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 717dd9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 717dde: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 717de3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x717de5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 717de5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_717de8: /* 717de8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 717deb: jle 0x717e01 */
  if ((zf || sf != of)) goto L_717e01;
L_717ded: /* 717ded: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 717df2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 717df7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 717dfc: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x717dfeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 717dfe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_717e01: /* 717e01: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 717e05: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 717e08: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 717e0b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 717e0d: jle 0x717e23 */
  if ((zf || sf != of)) goto L_717e23;
L_717e0f: /* 717e0f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 717e14: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 717e19: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 717e1e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x717e20u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 717e20: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_717e23: /* 717e23: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 717e25: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 717e26: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 717e27: mov ecx, esi */
  ecx = esi;
/* 717e29: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x717e2fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 717e2f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 717e30: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 717e31: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 717e32: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 717e33: ret 8 */
  esp += 12; SPILL(); return;
}

void f_717e60(void) {
  LOAD_REGS();
L_717e60: /* 717e60: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 717e64: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 717e65: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 717e67: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x717e6du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 717e6d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_717e80(void) {
  LOAD_REGS();
L_717e80: /* 717e80: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 717e81: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 717e82: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 717e83: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 717e87: mov ebx, ecx */
  ebx = ecx;
/* 717e89: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 717e8b: je 0x717ef3 */
  if (zf) goto L_717ef3;
L_717e8d: /* 717e8d: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 717e90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 717e91: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 717e93: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x717e99u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 717e99: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 717e9c: xor eax, eax */
  eax = 0;
/* 717e9e: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 717ea0: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 717ea4: jle 0x717ef3 */
  if ((zf || sf != of)) goto L_717ef3;
L_717ea6: /* 717ea6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 717ea7: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 717eab: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 717eac: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_717eb0: /* 717eb0: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 717eb2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 717eb4: mov ecx, ebx */
  ecx = ebx;
/* 717eb6: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x717ebcu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 717ebc: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 717ebe: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 717ec1: lea edi, [ecx + eax*4] */
  edi = (uint32_t)(ecx + eax*4);
/* 717ec4: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 717ec6: je 0x717ed6 */
  if (zf) goto L_717ed6;
L_717ec8: /* 717ec8: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 717ecb: add esi, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 717ecf: mov ecx, 9 */
  ecx = 0x9u;
/* 717ed4: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_717ed6: /* 717ed6: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 717eda: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 717ede: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 717ee1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 717ee2: add edx, 0x24 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 717ee5: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 717ee7: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 717eeb: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 717eef: jl 0x717eb0 */
  if ((sf != of)) goto L_717eb0;
L_717ef1: /* 717ef1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 717ef2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_717ef3: /* 717ef3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 717ef4: mov eax, ebx */
  eax = ebx;
/* 717ef6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 717ef7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 717ef8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_717f20(void) {
  LOAD_REGS();
L_717f20: /* 717f20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 717f24: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 717f25: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 717f27: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x717f2du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 717f2d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_717f40(void) {
  LOAD_REGS();
L_717f40: /* 717f40: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 717f41: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 717f42: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 717f48: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 717f49: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 717f4a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 717f4e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 717f50: mov esi, ecx */
  esi = ecx;
/* 717f52: jge 0x717f68 */
  if ((sf == of)) goto L_717f68;
L_717f54: /* 717f54: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 717f59: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 717f5e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 717f63: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x717f65u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 717f65: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_717f68: /* 717f68: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 717f6b: jle 0x717f81 */
  if ((zf || sf != of)) goto L_717f81;
L_717f6d: /* 717f6d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 717f72: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 717f77: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 717f7c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x717f7eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 717f7e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_717f81: /* 717f81: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 717f85: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 717f88: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 717f8b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 717f8d: jle 0x717fa3 */
  if ((zf || sf != of)) goto L_717fa3;
L_717f8f: /* 717f8f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 717f94: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 717f99: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 717f9e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x717fa0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 717fa0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_717fa3: /* 717fa3: push 0x5c */
  { uint32_t v = 0x5cu; esp -= 4; W32(esp, v); }
/* 717fa5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 717fa6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 717fa7: mov ecx, esi */
  ecx = esi;
/* 717fa9: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x717fafu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 717faf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 717fb0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 717fb1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 717fb2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 717fb3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_717fe0(void) {
  LOAD_REGS();
L_717fe0: /* 717fe0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 717fe4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 717fe5: push 0x5c */
  { uint32_t v = 0x5cu; esp -= 4; W32(esp, v); }
/* 717fe7: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x717fedu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 717fed: ret 4 */
  esp += 8; SPILL(); return;
}

void f_718000(void) {
  LOAD_REGS();
L_718000: /* 718000: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 718001: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 718002: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 718008: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 718009: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71800a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 71800e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 718010: mov esi, ecx */
  esi = ecx;
/* 718012: jge 0x718028 */
  if ((sf == of)) goto L_718028;
L_718014: /* 718014: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 718019: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71801e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 718023: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x718025u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 718025: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_718028: /* 718028: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71802b: jle 0x718041 */
  if ((zf || sf != of)) goto L_718041;
L_71802d: /* 71802d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 718032: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 718037: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71803c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x71803eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71803e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_718041: /* 718041: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 718045: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 718048: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 71804b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71804d: jle 0x718063 */
  if ((zf || sf != of)) goto L_718063;
L_71804f: /* 71804f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 718054: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 718059: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71805e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x718060u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 718060: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_718063: /* 718063: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 718065: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 718066: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 718067: mov ecx, esi */
  ecx = esi;
/* 718069: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71806fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71806f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 718070: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 718071: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 718072: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 718073: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7180a0(void) {
  LOAD_REGS();
L_7180a0: /* 7180a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7180a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7180a5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7180a7: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7180adu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7180ad: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7180c0(void) {
  LOAD_REGS();
L_7180c0: /* 7180c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7180c1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7180c2: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 7180c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7180c9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7180ca: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 7180ce: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7180d0: mov esi, ecx */
  esi = ecx;
/* 7180d2: jge 0x7180e8 */
  if ((sf == of)) goto L_7180e8;
L_7180d4: /* 7180d4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 7180d9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7180de: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 7180e3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7180e5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7180e5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7180e8: /* 7180e8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7180eb: jle 0x718101 */
  if ((zf || sf != of)) goto L_718101;
L_7180ed: /* 7180ed: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7180f2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7180f7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7180fc: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7180feu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7180fe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_718101: /* 718101: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 718105: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 718108: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 71810b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71810d: jle 0x718123 */
  if ((zf || sf != of)) goto L_718123;
L_71810f: /* 71810f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 718114: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 718119: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71811e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x718120u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 718120: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_718123: /* 718123: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 718125: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 718126: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 718127: mov ecx, esi */
  ecx = esi;
/* 718129: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71812fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71812f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 718130: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 718131: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 718132: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 718133: ret 8 */
  esp += 12; SPILL(); return;
}

void f_718160(void) {
  LOAD_REGS();
L_718160: /* 718160: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 718164: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 718165: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 718167: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x71816du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 71816d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_718180(void) {
  LOAD_REGS();
L_718180: /* 718180: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 718181: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 718182: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 718188: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 718189: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71818a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 71818e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 718190: mov esi, ecx */
  esi = ecx;
/* 718192: jge 0x7181a8 */
  if ((sf == of)) goto L_7181a8;
L_718194: /* 718194: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 718199: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71819e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 7181a3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7181a5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7181a5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7181a8: /* 7181a8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7181ab: jle 0x7181c1 */
  if ((zf || sf != of)) goto L_7181c1;
L_7181ad: /* 7181ad: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7181b2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7181b7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7181bc: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7181beu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7181be: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7181c1: /* 7181c1: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 7181c5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7181c8: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 7181cb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7181cd: jle 0x7181e3 */
  if ((zf || sf != of)) goto L_7181e3;
L_7181cf: /* 7181cf: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7181d4: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7181d9: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7181de: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7181e0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7181e0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7181e3: /* 7181e3: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 7181e5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7181e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7181e7: mov ecx, esi */
  ecx = esi;
/* 7181e9: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7181efu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7181ef: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7181f0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7181f1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7181f2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7181f3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_718220(void) {
  LOAD_REGS();
L_718220: /* 718220: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 718224: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 718225: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 718227: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x71822du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 71822d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_718240(void) {
  LOAD_REGS();
L_718240: /* 718240: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 718241: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 718242: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 718246: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 718248: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 718249: mov esi, dword ptr [0xcfa2fc] */
  esi = R32((uint32_t)(0xcfa2fcu));
/* 71824f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 718250: mov ebx, ecx */
  ebx = ecx;
/* 718252: jge 0x718268 */
  if ((sf == of)) goto L_718268;
L_718254: /* 718254: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 718259: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71825e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 718263: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x718265u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 718265: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_718268: /* 718268: cmp ebp, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71826b: jle 0x718281 */
  if ((zf || sf != of)) goto L_718281;
L_71826d: /* 71826d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 718272: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 718277: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71827c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x71827eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71827e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_718281: /* 718281: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 718285: lea edi, [eax + ebp] */
  edi = (uint32_t)(eax + ebp);
/* 718288: cmp edi, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71828b: jle 0x7182a1 */
  if ((zf || sf != of)) goto L_7182a1;
L_71828d: /* 71828d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 718292: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 718297: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71829c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x71829eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71829e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7182a1: /* 7182a1: cmp ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7182a3: jge 0x7182c1 */
  if ((sf == of)) goto L_7182c1;
L_7182a5: /* 7182a5: mov esi, ebp */
  esi = ebp;
/* 7182a7: imul esi, esi, 0x68 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x68u);
  esi = (uint32_t)r;
  }
/* 7182aa: sub edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 7182ac: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7182b0: /* 7182b0: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 7182b2: mov edx, dword ptr [ecx + esi] */
  edx = R32((uint32_t)(ecx + esi));
/* 7182b5: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7182b7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7182b9: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x7182bbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7182bb: add esi, 0x68 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7182be: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 7182bf: jne 0x7182b0 */
  if (!zf) goto L_7182b0;
L_7182c1: /* 7182c1: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 7182c5: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* 7182c7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7182c8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7182c9: mov ecx, ebx */
  ecx = ebx;
/* 7182cb: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7182d1u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7182d1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7182d2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7182d3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7182d4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7182d5: ret 8 */
  esp += 12; SPILL(); return;
}

void f_718310(void) {
  LOAD_REGS();
L_718310: /* 718310: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 718311: mov esi, ecx */
  esi = ecx;
/* 718313: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 718316: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 718317: xor edi, edi */
  edi = 0;
/* 718319: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 71831b: jle 0x718338 */
  if ((zf || sf != of)) goto L_718338;
L_71831d: /* 71831d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71831e: xor ebx, ebx */
  ebx = 0;
L_718320: /* 718320: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 718322: mov edx, dword ptr [ebx + eax] */
  edx = R32((uint32_t)(ebx + eax));
/* 718325: lea ecx, [ebx + eax] */
  ecx = (uint32_t)(ebx + eax);
/* 718328: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71832a: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x71832cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71832c: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 71832f: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 718330: add ebx, 0x68 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 718333: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 718335: jl 0x718320 */
  if ((sf != of)) goto L_718320;
L_718337: /* 718337: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_718338: /* 718338: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 71833c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71833d: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* 71833f: mov ecx, esi */
  ecx = esi;
/* 718341: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x718347u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 718347: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 718348: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 718349: ret 4 */
  esp += 8; SPILL(); return;
}

void f_718360(void) {
  LOAD_REGS();
L_718360: /* 718360: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 718361: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 718362: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 718368: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 718369: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71836a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 71836e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 718370: mov esi, ecx */
  esi = ecx;
/* 718372: jge 0x718388 */
  if ((sf == of)) goto L_718388;
L_718374: /* 718374: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 718379: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71837e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 718383: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x718385u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 718385: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_718388: /* 718388: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71838b: jle 0x7183a1 */
  if ((zf || sf != of)) goto L_7183a1;
L_71838d: /* 71838d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 718392: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 718397: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71839c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x71839eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71839e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7183a1: /* 7183a1: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 7183a5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7183a8: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 7183ab: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7183ad: jle 0x7183c3 */
  if ((zf || sf != of)) goto L_7183c3;
L_7183af: /* 7183af: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7183b4: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7183b9: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7183be: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7183c0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7183c0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7183c3: /* 7183c3: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7183c5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7183c6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7183c7: mov ecx, esi */
  ecx = esi;
/* 7183c9: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7183cfu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7183cf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7183d0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7183d1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7183d2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7183d3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_718400(void) {
  LOAD_REGS();
L_718400: /* 718400: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 718404: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 718405: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 718407: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x71840du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 71840d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_718420(void) {
  LOAD_REGS();
L_718420: /* 718420: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 718421: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 718422: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 718428: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 718429: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71842a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 71842e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 718430: mov esi, ecx */
  esi = ecx;
/* 718432: jge 0x718448 */
  if ((sf == of)) goto L_718448;
L_718434: /* 718434: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 718439: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71843e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 718443: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x718445u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 718445: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_718448: /* 718448: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71844b: jle 0x718461 */
  if ((zf || sf != of)) goto L_718461;
L_71844d: /* 71844d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 718452: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 718457: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71845c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x71845eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71845e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_718461: /* 718461: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 718465: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 718468: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 71846b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71846d: jle 0x718483 */
  if ((zf || sf != of)) goto L_718483;
L_71846f: /* 71846f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 718474: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 718479: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71847e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x718480u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 718480: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_718483: /* 718483: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 718485: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 718486: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 718487: mov ecx, esi */
  ecx = esi;
/* 718489: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71848fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71848f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 718490: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 718491: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 718492: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 718493: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7184c0(void) {
  LOAD_REGS();
L_7184c0: /* 7184c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7184c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7184c5: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 7184c7: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7184cdu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7184cd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7184e0(void) {
  LOAD_REGS();
L_7184e0: /* 7184e0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7184e1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7184e2: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 7184e8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7184e9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7184ea: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 7184ee: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7184f0: mov esi, ecx */
  esi = ecx;
/* 7184f2: jge 0x718508 */
  if ((sf == of)) goto L_718508;
L_7184f4: /* 7184f4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 7184f9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7184fe: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 718503: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x718505u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 718505: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_718508: /* 718508: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71850b: jle 0x718521 */
  if ((zf || sf != of)) goto L_718521;
L_71850d: /* 71850d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 718512: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 718517: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71851c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x71851eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71851e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_718521: /* 718521: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 718525: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 718528: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 71852b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71852d: jle 0x718543 */
  if ((zf || sf != of)) goto L_718543;
L_71852f: /* 71852f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 718534: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 718539: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71853e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x718540u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 718540: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_718543: /* 718543: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 718545: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 718546: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 718547: mov ecx, esi */
  ecx = esi;
/* 718549: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71854fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71854f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 718550: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 718551: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 718552: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 718553: ret 8 */
  esp += 12; SPILL(); return;
}

void f_718580(void) {
  LOAD_REGS();
L_718580: /* 718580: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 718584: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 718585: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 718587: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x71858du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 71858d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7185a0(void) {
  LOAD_REGS();
L_7185a0: /* 7185a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7185a1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7185a2: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 7185a8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7185a9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7185aa: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 7185ae: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7185b0: mov esi, ecx */
  esi = ecx;
/* 7185b2: jge 0x7185c8 */
  if ((sf == of)) goto L_7185c8;
L_7185b4: /* 7185b4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 7185b9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7185be: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 7185c3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7185c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7185c5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7185c8: /* 7185c8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7185cb: jle 0x7185e1 */
  if ((zf || sf != of)) goto L_7185e1;
L_7185cd: /* 7185cd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7185d2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7185d7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7185dc: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7185deu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7185de: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7185e1: /* 7185e1: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 7185e5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7185e8: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 7185eb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7185ed: jle 0x718603 */
  if ((zf || sf != of)) goto L_718603;
L_7185ef: /* 7185ef: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7185f4: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7185f9: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7185fe: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x718600u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 718600: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_718603: /* 718603: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 718605: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 718606: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 718607: mov ecx, esi */
  ecx = esi;
/* 718609: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71860fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71860f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 718610: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 718611: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 718612: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 718613: ret 8 */
  esp += 12; SPILL(); return;
}

void f_718640(void) {
  LOAD_REGS();
L_718640: /* 718640: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 718644: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 718645: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 718647: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x71864du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 71864d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_718660(void) {
  LOAD_REGS();
L_718660: /* 718660: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 718661: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 718662: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 718668: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 718669: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71866a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 71866e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 718670: mov esi, ecx */
  esi = ecx;
/* 718672: jge 0x718688 */
  if ((sf == of)) goto L_718688;
L_718674: /* 718674: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 718679: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71867e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 718683: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x718685u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 718685: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_718688: /* 718688: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71868b: jle 0x7186a1 */
  if ((zf || sf != of)) goto L_7186a1;
L_71868d: /* 71868d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 718692: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 718697: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71869c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x71869eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71869e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7186a1: /* 7186a1: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 7186a5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7186a8: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 7186ab: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7186ad: jle 0x7186c3 */
  if ((zf || sf != of)) goto L_7186c3;
L_7186af: /* 7186af: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7186b4: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7186b9: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7186be: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7186c0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7186c0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7186c3: /* 7186c3: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7186c5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7186c6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7186c7: mov ecx, esi */
  ecx = esi;
/* 7186c9: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7186cfu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7186cf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7186d0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7186d1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7186d2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7186d3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_718700(void) {
  LOAD_REGS();
L_718700: /* 718700: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 718704: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 718705: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 718707: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x71870du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 71870d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_718720(void) {
  LOAD_REGS();
L_718720: /* 718720: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 718721: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 718722: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 718728: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 718729: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71872a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 71872e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 718730: mov esi, ecx */
  esi = ecx;
/* 718732: jge 0x718748 */
  if ((sf == of)) goto L_718748;
L_718734: /* 718734: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 718739: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71873e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 718743: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x718745u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 718745: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_718748: /* 718748: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71874b: jle 0x718761 */
  if ((zf || sf != of)) goto L_718761;
L_71874d: /* 71874d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 718752: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 718757: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71875c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x71875eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71875e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_718761: /* 718761: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 718765: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 718768: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 71876b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71876d: jle 0x718783 */
  if ((zf || sf != of)) goto L_718783;
L_71876f: /* 71876f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 718774: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 718779: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71877e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x718780u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 718780: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_718783: /* 718783: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 718785: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 718786: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 718787: mov ecx, esi */
  ecx = esi;
/* 718789: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71878fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71878f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 718790: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 718791: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 718792: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 718793: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7187c0(void) {
  LOAD_REGS();
L_7187c0: /* 7187c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7187c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7187c5: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 7187c7: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7187cdu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7187cd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7187e0(void) {
  LOAD_REGS();
L_7187e0: /* 7187e0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7187e1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7187e2: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 7187e8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7187e9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7187ea: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 7187ee: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7187f0: mov esi, ecx */
  esi = ecx;
/* 7187f2: jge 0x718808 */
  if ((sf == of)) goto L_718808;
L_7187f4: /* 7187f4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 7187f9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7187fe: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 718803: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x718805u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 718805: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_718808: /* 718808: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71880b: jle 0x718821 */
  if ((zf || sf != of)) goto L_718821;
L_71880d: /* 71880d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 718812: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 718817: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71881c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x71881eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71881e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_718821: /* 718821: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 718825: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 718828: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 71882b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71882d: jle 0x718843 */
  if ((zf || sf != of)) goto L_718843;
L_71882f: /* 71882f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 718834: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 718839: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71883e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x718840u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 718840: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_718843: /* 718843: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 718845: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 718846: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 718847: mov ecx, esi */
  ecx = esi;
/* 718849: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71884fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71884f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 718850: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 718851: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 718852: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 718853: ret 8 */
  esp += 12; SPILL(); return;
}

void f_718880(void) {
  LOAD_REGS();
L_718880: /* 718880: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 718884: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 718885: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 718887: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x71888du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 71888d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7188a0(void) {
  LOAD_REGS();
L_7188a0: /* 7188a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7188a1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7188a2: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 7188a8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7188a9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7188aa: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 7188ae: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7188b0: mov esi, ecx */
  esi = ecx;
/* 7188b2: jge 0x7188c8 */
  if ((sf == of)) goto L_7188c8;
L_7188b4: /* 7188b4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 7188b9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7188be: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 7188c3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7188c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7188c5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7188c8: /* 7188c8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7188cb: jle 0x7188e1 */
  if ((zf || sf != of)) goto L_7188e1;
L_7188cd: /* 7188cd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7188d2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7188d7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7188dc: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7188deu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7188de: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7188e1: /* 7188e1: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 7188e5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7188e8: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 7188eb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7188ed: jle 0x718903 */
  if ((zf || sf != of)) goto L_718903;
L_7188ef: /* 7188ef: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7188f4: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7188f9: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7188fe: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x718900u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 718900: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_718903: /* 718903: push 0x104 */
  { uint32_t v = 0x104u; esp -= 4; W32(esp, v); }
/* 718908: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 718909: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71890a: mov ecx, esi */
  ecx = esi;
/* 71890c: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x718912u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 718912: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 718913: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 718914: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 718915: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 718916: ret 8 */
  esp += 12; SPILL(); return;
}

void f_718940(void) {
  LOAD_REGS();
L_718940: /* 718940: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 718944: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 718945: push 0x104 */
  { uint32_t v = 0x104u; esp -= 4; W32(esp, v); }
/* 71894a: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x718950u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 718950: ret 4 */
  esp += 8; SPILL(); return;
}

void f_718970(void) {
  LOAD_REGS();
L_718970: /* 718970: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 718971: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 718972: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 718978: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 718979: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71897a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 71897e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 718980: mov esi, ecx */
  esi = ecx;
/* 718982: jge 0x718998 */
  if ((sf == of)) goto L_718998;
L_718984: /* 718984: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 718989: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71898e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 718993: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x718995u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 718995: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_718998: /* 718998: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71899b: jle 0x7189b1 */
  if ((zf || sf != of)) goto L_7189b1;
L_71899d: /* 71899d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7189a2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7189a7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7189ac: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7189aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7189ae: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7189b1: /* 7189b1: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 7189b5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7189b8: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 7189bb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7189bd: jle 0x7189d3 */
  if ((zf || sf != of)) goto L_7189d3;
L_7189bf: /* 7189bf: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7189c4: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7189c9: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7189ce: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7189d0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7189d0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7189d3: /* 7189d3: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7189d5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7189d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7189d7: mov ecx, esi */
  ecx = esi;
/* 7189d9: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7189dfu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7189df: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7189e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7189e1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7189e2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7189e3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_718a10(void) {
  LOAD_REGS();
L_718a10: /* 718a10: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 718a14: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 718a15: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 718a17: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x718a1du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 718a1d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_718a30(void) {
  LOAD_REGS();
L_718a30: /* 718a30: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 718a32: push 0x9c2b19 */
  { uint32_t v = 0x9c2b19u; esp -= 4; W32(esp, v); }
/* 718a37: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 718a3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 718a3e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 718a45: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 718a48: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 718a49: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 718a4a: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 718a4e: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 718a51: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 718a52: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 718a54: mov ebx, ecx */
  ebx = ecx;
/* 718a56: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 718a57: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 718a5b: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x718a61u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 718a61: xor esi, esi */
  esi = 0;
/* 718a63: mov dword ptr [ebx + 4], esi */
  W32((uint32_t)(ebx + 0x4u), esi);
/* 718a66: cmp dword ptr [ebp + 4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 718a69: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 718a6d: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 718a71: jle 0x718abc */
  if ((zf || sf != of)) goto L_718abc;
L_718a73: /* 718a73: mov dword ptr [esp + 0x24], esi */
  W32((uint32_t)(esp + 0x24u), esi);
/* 718a77: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_718a78: /* 718a78: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 718a7a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 718a7c: mov ecx, ebx */
  ecx = ebx;
/* 718a7e: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x718a84u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 718a84: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 718a86: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 718a89: lea edi, [edx + ecx*8] */
  edi = (uint32_t)(edx + ecx*8);
/* 718a8c: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 718a8e: je 0x718aa0 */
  if (zf) goto L_718aa0;
L_718a90: /* 718a90: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 718a93: add esi, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 718a97: mov ecx, 6 */
  ecx = 0x6u;
/* 718a9c: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 718a9e: xor esi, esi */
  esi = 0;
L_718aa0: /* 718aa0: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 718aa4: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 718aa8: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 718aab: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 718aac: add edx, 0x18 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 718aaf: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 718ab1: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 718ab5: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 718ab9: jl 0x718a78 */
  if ((sf != of)) goto L_718a78;
L_718abb: /* 718abb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_718abc: /* 718abc: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 718ac0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 718ac1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 718ac2: mov eax, ebx */
  eax = ebx;
/* 718ac4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 718ac5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 718acc: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 718acf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_718b10(void) {
  LOAD_REGS();
L_718b10: /* 718b10: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 718b14: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 718b15: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 718b17: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x718b1du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 718b1d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_718b30(void) {
  LOAD_REGS();
L_718b30: /* 718b30: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 718b31: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 718b32: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 718b33: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 718b37: mov ebx, ecx */
  ebx = ecx;
/* 718b39: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 718b3b: je 0x718ba3 */
  if (zf) goto L_718ba3;
L_718b3d: /* 718b3d: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 718b40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 718b41: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 718b43: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x718b49u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 718b49: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 718b4c: xor eax, eax */
  eax = 0;
/* 718b4e: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 718b50: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 718b54: jle 0x718ba3 */
  if ((zf || sf != of)) goto L_718ba3;
L_718b56: /* 718b56: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 718b57: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 718b5b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 718b5c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_718b60: /* 718b60: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 718b62: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 718b64: mov ecx, ebx */
  ecx = ebx;
/* 718b66: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x718b6cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 718b6c: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 718b6e: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 718b71: lea edi, [ecx + eax*8] */
  edi = (uint32_t)(ecx + eax*8);
/* 718b74: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 718b76: je 0x718b86 */
  if (zf) goto L_718b86;
L_718b78: /* 718b78: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 718b7b: add esi, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 718b7f: mov ecx, 6 */
  ecx = 0x6u;
/* 718b84: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_718b86: /* 718b86: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 718b8a: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 718b8e: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 718b91: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 718b92: add edx, 0x18 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 718b95: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 718b97: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 718b9b: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 718b9f: jl 0x718b60 */
  if ((sf != of)) goto L_718b60;
L_718ba1: /* 718ba1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 718ba2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_718ba3: /* 718ba3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 718ba4: mov eax, ebx */
  eax = ebx;
/* 718ba6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 718ba7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 718ba8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_718bd0(void) {
  LOAD_REGS();
L_718bd0: /* 718bd0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 718bd1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 718bd2: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 718bd8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 718bd9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 718bda: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 718bde: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 718be0: mov esi, ecx */
  esi = ecx;
/* 718be2: jge 0x718bf8 */
  if ((sf == of)) goto L_718bf8;
L_718be4: /* 718be4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 718be9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 718bee: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 718bf3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x718bf5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 718bf5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_718bf8: /* 718bf8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 718bfb: jle 0x718c11 */
  if ((zf || sf != of)) goto L_718c11;
L_718bfd: /* 718bfd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 718c02: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 718c07: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 718c0c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x718c0eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 718c0e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_718c11: /* 718c11: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 718c15: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 718c18: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 718c1b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 718c1d: jle 0x718c33 */
  if ((zf || sf != of)) goto L_718c33;
L_718c1f: /* 718c1f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 718c24: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 718c29: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 718c2e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x718c30u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 718c30: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_718c33: /* 718c33: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 718c35: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 718c36: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 718c37: mov ecx, esi */
  ecx = esi;
/* 718c39: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x718c3fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 718c3f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 718c40: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 718c41: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 718c42: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 718c43: ret 8 */
  esp += 12; SPILL(); return;
}

void f_718c70(void) {
  LOAD_REGS();
L_718c70: /* 718c70: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 718c71: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 718c72: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 718c73: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 718c77: mov esi, ecx */
  esi = ecx;
/* 718c79: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 718c7b: je 0x718cb6 */
  if (zf) goto L_718cb6;
L_718c7d: /* 718c7d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 718c80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 718c81: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 718c83: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x718c89u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 718c89: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 718c8c: xor ebx, ebx */
  ebx = 0;
/* 718c8e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 718c90: jle 0x718cb6 */
  if ((zf || sf != of)) goto L_718cb6;
L_718c92: /* 718c92: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 718c94: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 718c96: mov ecx, esi */
  ecx = esi;
/* 718c98: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x718c9eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 718c9e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 718ca0: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 718ca3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 718ca5: je 0x718cae */
  if (zf) goto L_718cae;
L_718ca7: /* 718ca7: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 718ca9: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 718cac: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_718cae: /* 718cae: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 718cb1: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 718cb2: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 718cb4: jl 0x718c92 */
  if ((sf != of)) goto L_718c92;
L_718cb6: /* 718cb6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 718cb7: mov eax, esi */
  eax = esi;
/* 718cb9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 718cba: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 718cbb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_718ce0(void) {
  LOAD_REGS();
L_718ce0: /* 718ce0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 718ce1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 718ce2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 718ce3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 718ce4: mov esi, ecx */
  esi = ecx;
/* 718ce6: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 718ce9: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 718cef: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 718cf1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 718cf3: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 718cf6: push 0xac3d1c */
  { uint32_t v = 0xac3d1cu; esp -= 4; W32(esp, v); }
/* 718cfb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 718cfc: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x718cfeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 718cfe: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 718d01: mov ebp, eax */
  ebp = eax;
/* 718d03: xor ebx, ebx */
  ebx = 0;
/* 718d05: xor eax, eax */
  eax = 0;
/* 718d07: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 718d09: jle 0x718d20 */
  if ((zf || sf != of)) goto L_718d20;
L_718d0b: /* 718d0b: jmp 0x718d10 */
  goto L_718d10;
L_718d10: /* 718d10: mov dword ptr [ebp + eax*4], 0xffffffff */
  W32((uint32_t)(ebp + eax*4), 0xffffffffu);
/* 718d18: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 718d1b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 718d1c: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 718d1e: jl 0x718d10 */
  if ((sf != of)) goto L_718d10;
L_718d20: /* 718d20: cmp dword ptr [esi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 718d23: jle 0x718d6c */
  if ((zf || sf != of)) goto L_718d6c;
L_718d25: /* 718d25: mov dword ptr [esp + 0xc], ebx */
  W32((uint32_t)(esp + 0xcu), ebx);
/* 718d29: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 718d2a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_718d30: /* 718d30: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 718d32: add edi, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 718d36: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 718d39: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x718d3fu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 718d3f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 718d40: call 0x6cca40 */
  esp -= 4; W32(esp, 0x718d45u); SPILL(); f_6cca40(); if (g_unwind) return; RELOAD();
/* 718d45: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 718d48: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 718d4b: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 718d4c: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 718d4e: mov edx, dword ptr [ebp + eax*4] */
  edx = R32((uint32_t)(ebp + eax*4));
/* 718d52: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 718d56: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 718d58: mov dword ptr [ebp + eax*4], ebx */
  W32((uint32_t)(ebp + eax*4), ebx);
/* 718d5c: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 718d5f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 718d60: add ecx, 0x14 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 718d63: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 718d65: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 718d69: jl 0x718d30 */
  if ((sf != of)) goto L_718d30;
L_718d6b: /* 718d6b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_718d6c: /* 718d6c: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 718d6f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 718d71: je 0x718d81 */
  if (zf) goto L_718d81;
L_718d73: /* 718d73: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 718d79: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 718d7b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 718d7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 718d7e: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x718d81u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_718d81: /* 718d81: mov dword ptr [esi + 0xc], ebp */
  W32((uint32_t)(esi + 0xcu), ebp);
/* 718d84: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 718d85: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 718d86: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 718d87: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 718d88: ret  */
  esp += 4; SPILL(); return;
}

void f_718d0d(void) {
  LOAD_REGS();
L_718d0d: /* 718d0d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_718d10: /* 718d10: mov dword ptr [ebp + eax*4], 0xffffffff */
  W32((uint32_t)(ebp + eax*4), 0xffffffffu);
/* 718d18: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 718d1b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 718d1c: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 718d1e: jl 0x718d10 */
  if ((sf != of)) goto L_718d10;
L_718d20: /* 718d20: cmp dword ptr [esi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 718d23: jle 0x718d6c */
  if ((zf || sf != of)) goto L_718d6c;
L_718d25: /* 718d25: mov dword ptr [esp + 0xc], ebx */
  W32((uint32_t)(esp + 0xcu), ebx);
/* 718d29: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 718d2a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_718d30: /* 718d30: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 718d32: add edi, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 718d36: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 718d39: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x718d3fu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 718d3f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 718d40: call 0x6cca40 */
  esp -= 4; W32(esp, 0x718d45u); SPILL(); f_6cca40(); if (g_unwind) return; RELOAD();
/* 718d45: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 718d48: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 718d4b: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 718d4c: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 718d4e: mov edx, dword ptr [ebp + eax*4] */
  edx = R32((uint32_t)(ebp + eax*4));
/* 718d52: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 718d56: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 718d58: mov dword ptr [ebp + eax*4], ebx */
  W32((uint32_t)(ebp + eax*4), ebx);
/* 718d5c: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 718d5f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 718d60: add ecx, 0x14 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 718d63: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 718d65: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 718d69: jl 0x718d30 */
  if ((sf != of)) goto L_718d30;
L_718d6b: /* 718d6b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_718d6c: /* 718d6c: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 718d6f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 718d71: je 0x718d81 */
  if (zf) goto L_718d81;
L_718d73: /* 718d73: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 718d79: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 718d7b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 718d7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 718d7e: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x718d81u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_718d81: /* 718d81: mov dword ptr [esi + 0xc], ebp */
  W32((uint32_t)(esi + 0xcu), ebp);
/* 718d84: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 718d85: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 718d86: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 718d87: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 718d88: ret  */
  esp += 4; SPILL(); return;
}

void f_718dc0(void) {
  LOAD_REGS();
L_718dc0: /* 718dc0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 718dc2: push 0x9c2b39 */
  { uint32_t v = 0x9c2b39u; esp -= 4; W32(esp, v); }
/* 718dc7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 718dcd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 718dce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 718dd5: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 718dd8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 718dd9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 718dda: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 718dde: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 718de1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 718de2: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 718de4: mov ebx, ecx */
  ebx = ecx;
/* 718de6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 718de7: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 718deb: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x718df1u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 718df1: xor esi, esi */
  esi = 0;
/* 718df3: mov dword ptr [ebx + 4], esi */
  W32((uint32_t)(ebx + 0x4u), esi);
/* 718df6: cmp dword ptr [ebp + 4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 718df9: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 718dfd: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 718e01: jle 0x718e5f */
  if ((zf || sf != of)) goto L_718e5f;
L_718e03: /* 718e03: mov dword ptr [esp + 0x24], esi */
  W32((uint32_t)(esp + 0x24u), esi);
/* 718e07: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_718e08: /* 718e08: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 718e0a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 718e0c: mov ecx, ebx */
  ecx = ebx;
/* 718e0e: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x718e14u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 718e14: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 718e16: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 718e19: lea edi, [edx + ecx*4] */
  edi = (uint32_t)(edx + ecx*4);
/* 718e1c: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 718e1e: je 0x718e43 */
  if (zf) goto L_718e43;
L_718e20: /* 718e20: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 718e23: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 718e27: mov eax, dword ptr [esi + ecx] */
  eax = R32((uint32_t)(esi + ecx));
/* 718e2a: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 718e2c: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 718e2f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 718e30: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 718e33: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 718e35: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x718e3bu); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 718e3b: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* 718e3e: mov dword ptr [edi + 0x10], edx */
  W32((uint32_t)(edi + 0x10u), edx);
/* 718e41: xor esi, esi */
  esi = 0;
L_718e43: /* 718e43: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 718e47: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 718e4b: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 718e4e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 718e4f: add edx, 0x14 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 718e52: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 718e54: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 718e58: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 718e5c: jl 0x718e08 */
  if ((sf != of)) goto L_718e08;
L_718e5e: /* 718e5e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_718e5f: /* 718e5f: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 718e63: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 718e64: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 718e65: mov eax, ebx */
  eax = ebx;
/* 718e67: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 718e68: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 718e6f: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 718e72: ret 4 */
  esp += 8; SPILL(); return;
}

void f_718eb0(void) {
  LOAD_REGS();
L_718eb0: /* 718eb0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 718eb1: mov esi, ecx */
  esi = ecx;
/* 718eb3: call 0x6cce78 */
  esp -= 4; W32(esp, 0x718eb8u); SPILL(); f_6cce78(); if (g_unwind) return; RELOAD();
/* 718eb8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 718ebd: je 0x718ecc */
  if (zf) goto L_718ecc;
L_718ebf: /* 718ebf: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 718ec4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 718ec6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 718ec8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 718ec9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x718eccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_718ecc: /* 718ecc: mov eax, esi */
  eax = esi;
/* 718ece: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 718ecf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_718ef0(void) {
  LOAD_REGS();
L_718ef0: /* 718ef0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 718ef1: mov esi, ecx */
  esi = ecx;
/* 718ef3: call 0x6c3c2e */
  esp -= 4; W32(esp, 0x718ef8u); SPILL(); f_6c3c2e(); if (g_unwind) return; RELOAD();
/* 718ef8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 718efd: je 0x718f0c */
  if (zf) goto L_718f0c;
L_718eff: /* 718eff: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 718f04: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 718f06: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 718f08: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 718f09: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x718f0cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_718f0c: /* 718f0c: mov eax, esi */
  eax = esi;
/* 718f0e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 718f0f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_718f30(void) {
  LOAD_REGS();
L_718f30: /* 718f30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 718f31: mov esi, ecx */
  esi = ecx;
/* 718f33: call 0x6c8ac6 */
  esp -= 4; W32(esp, 0x718f38u); SPILL(); f_6c8ac6(); if (g_unwind) return; RELOAD();
/* 718f38: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 718f3d: je 0x718f4c */
  if (zf) goto L_718f4c;
L_718f3f: /* 718f3f: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 718f44: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 718f46: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 718f48: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 718f49: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x718f4cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_718f4c: /* 718f4c: mov eax, esi */
  eax = esi;
/* 718f4e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 718f4f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_718f70(void) {
  LOAD_REGS();
L_718f70: /* 718f70: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 718f73: jmp 0x6cbadc */
  SPILL(); f_6cbadc(); return;
}

void f_718f90(void) {
  LOAD_REGS();
L_718f90: /* 718f90: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 718f93: jmp 0x6c3e13 */
  SPILL(); f_6c3e13(); return;
}

void f_718fb0(void) {
  LOAD_REGS();
L_718fb0: /* 718fb0: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 718fb3: jmp 0x6c3d46 */
  SPILL(); f_6c3d46(); return;
}

void f_718fd0(void) {
  LOAD_REGS();
L_718fd0: /* 718fd0: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 718fd3: jmp 0x6c3d46 */
  SPILL(); f_6c3d46(); return;
}

void f_718ff0(void) {
  LOAD_REGS();
L_718ff0: /* 718ff0: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 718ff3: jmp 0x6c3e13 */
  SPILL(); f_6c3e13(); return;
}

void f_719010(void) {
  LOAD_REGS();
L_719010: /* 719010: jmp 0x6c3d46 */
  SPILL(); f_6c3d46(); return;
}

void f_719030(void) {
  LOAD_REGS();
L_719030: /* 719030: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 719033: jmp 0x6c3e13 */
  SPILL(); f_6c3e13(); return;
}

void f_719050(void) {
  LOAD_REGS();
L_719050: /* 719050: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 719051: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 719052: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 719058: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 719059: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71905a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 71905e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 719060: mov esi, ecx */
  esi = ecx;
/* 719062: jge 0x719078 */
  if ((sf == of)) goto L_719078;
L_719064: /* 719064: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 719069: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71906e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 719073: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x719075u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 719075: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_719078: /* 719078: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71907b: jle 0x719091 */
  if ((zf || sf != of)) goto L_719091;
L_71907d: /* 71907d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 719082: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 719087: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71908c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x71908eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71908e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_719091: /* 719091: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 719095: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 719098: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 71909b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71909d: jle 0x7190b3 */
  if ((zf || sf != of)) goto L_7190b3;
L_71909f: /* 71909f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7190a4: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7190a9: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7190ae: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7190b0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7190b0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7190b3: /* 7190b3: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7190b5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7190b6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7190b7: mov ecx, esi */
  ecx = esi;
/* 7190b9: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7190bfu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7190bf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7190c0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7190c1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7190c2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7190c3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7190f0(void) {
  LOAD_REGS();
L_7190f0: /* 7190f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7190f1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 7190f5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7190f6: mov esi, ecx */
  esi = ecx;
/* 7190f8: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7190fa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7190fb: je 0x71913d */
  if (zf) goto L_71913d;
L_7190fd: /* 7190fd: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 719100: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 719101: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 719103: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x719109u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 719109: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 71910c: xor edi, edi */
  edi = 0;
/* 71910e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 719110: jle 0x71913d */
  if ((zf || sf != of)) goto L_71913d;
L_719112: /* 719112: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 719114: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 719116: mov ecx, esi */
  ecx = esi;
/* 719118: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x71911eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 71911e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 719120: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 719123: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 719125: je 0x719135 */
  if (zf) goto L_719135;
L_719127: /* 719127: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 719129: mov ecx, dword ptr [edx + edi*8] */
  ecx = R32((uint32_t)(edx + edi*8));
/* 71912c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 71912e: mov edx, dword ptr [edx + edi*8 + 4] */
  edx = R32((uint32_t)(edx + edi*8 + 0x4u));
/* 719132: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
L_719135: /* 719135: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 719138: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 719139: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71913b: jl 0x719112 */
  if ((sf != of)) goto L_719112;
L_71913d: /* 71913d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71913e: mov eax, esi */
  eax = esi;
/* 719140: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 719141: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 719142: ret 4 */
  esp += 8; SPILL(); return;
}

void f_719170(void) {
  LOAD_REGS();
L_719170: /* 719170: mov eax, dword ptr [0xcfa3d4] */
  eax = R32((uint32_t)(0xcfa3d4u));
/* 719175: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 719176: mov esi, ecx */
  esi = ecx;
/* 719178: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 71917a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 71917c: je 0x71919c */
  if (zf) goto L_71919c;
L_71917e: /* 71917e: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 719181: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 719183: push 0x6cc68a */
  { uint32_t v = 0x6cc68au; esp -= 4; W32(esp, v); }
/* 719188: push 0x6c7bc1 */
  { uint32_t v = 0x6c7bc1u; esp -= 4; W32(esp, v); }
/* 71918d: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 71918f: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 719191: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 719192: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 719195: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 719197: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 719198: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 719199: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x71919cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_71919c: /* 71919c: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7191a0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7191a1: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7191a3: mov ecx, esi */
  ecx = esi;
/* 7191a5: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7191abu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7191ab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7191ac: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7191c0(void) {
  LOAD_REGS();
L_7191c0: /* 7191c0: mov eax, dword ptr [0xcfa3d4] */
  eax = R32((uint32_t)(0xcfa3d4u));
/* 7191c5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7191c6: mov esi, ecx */
  esi = ecx;
/* 7191c8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7191ca: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7191cc: je 0x7191ec */
  if (zf) goto L_7191ec;
L_7191ce: /* 7191ce: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7191d1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7191d3: push 0x6c6f78 */
  { uint32_t v = 0x6c6f78u; esp -= 4; W32(esp, v); }
/* 7191d8: push 0x6c4b92 */
  { uint32_t v = 0x6c4b92u; esp -= 4; W32(esp, v); }
/* 7191dd: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 7191df: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7191e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7191e2: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7191e5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7191e7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7191e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7191e9: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x7191ecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7191ec: /* 7191ec: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7191f0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7191f1: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 7191f3: mov ecx, esi */
  ecx = esi;
/* 7191f5: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7191fbu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7191fb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7191fc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_719210(void) {
  LOAD_REGS();
L_719210: /* 719210: mov eax, dword ptr [0xcfa3d4] */
  eax = R32((uint32_t)(0xcfa3d4u));
/* 719215: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 719216: mov esi, ecx */
  esi = ecx;
/* 719218: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 71921a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 71921c: je 0x71923c */
  if (zf) goto L_71923c;
L_71921e: /* 71921e: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 719221: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 719223: push 0x6cae2f */
  { uint32_t v = 0x6cae2fu; esp -= 4; W32(esp, v); }
/* 719228: push 0x6c26b7 */
  { uint32_t v = 0x6c26b7u; esp -= 4; W32(esp, v); }
/* 71922d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 71922f: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 719231: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 719232: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 719235: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 719237: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 719238: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 719239: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x71923cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_71923c: /* 71923c: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 719240: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 719241: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 719243: mov ecx, esi */
  ecx = esi;
/* 719245: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x71924bu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 71924b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71924c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_719260(void) {
  LOAD_REGS();
L_719260: /* 719260: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 719261: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 719262: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 719268: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 719269: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71926a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 71926e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 719270: mov esi, ecx */
  esi = ecx;
/* 719272: jge 0x719288 */
  if ((sf == of)) goto L_719288;
L_719274: /* 719274: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 719279: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71927e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 719283: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x719285u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 719285: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_719288: /* 719288: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71928b: jle 0x7192a1 */
  if ((zf || sf != of)) goto L_7192a1;
L_71928d: /* 71928d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 719292: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 719297: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71929c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x71929eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71929e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7192a1: /* 7192a1: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 7192a5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7192a8: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 7192ab: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7192ad: jle 0x7192c3 */
  if ((zf || sf != of)) goto L_7192c3;
L_7192af: /* 7192af: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7192b4: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7192b9: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7192be: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7192c0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7192c0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7192c3: /* 7192c3: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 7192c5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7192c6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7192c7: mov ecx, esi */
  ecx = esi;
/* 7192c9: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7192cfu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7192cf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7192d0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7192d1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7192d2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7192d3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_719300(void) {
  LOAD_REGS();
L_719300: /* 719300: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 719301: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 719302: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 719303: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 719307: mov esi, ecx */
  esi = ecx;
/* 719309: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 71930b: je 0x719360 */
  if (zf) goto L_719360;
L_71930d: /* 71930d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 719310: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 719311: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 719313: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x719319u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 719319: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 71931c: xor ebx, ebx */
  ebx = 0;
/* 71931e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 719320: jle 0x719360 */
  if ((zf || sf != of)) goto L_719360;
L_719322: /* 719322: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 719323: xor ebp, ebp */
  ebp = 0;
L_719325: /* 719325: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 719327: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 719329: mov ecx, esi */
  ecx = esi;
/* 71932b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x719331u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 719331: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 719333: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 719336: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 719338: je 0x719354 */
  if (zf) goto L_719354;
L_71933a: /* 71933a: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 71933c: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 71933e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 719340: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 719342: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 719345: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 719348: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 71934b: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 71934e: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 719351: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
L_719354: /* 719354: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 719357: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 719358: add ebp, 0x10 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 71935b: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71935d: jl 0x719325 */
  if ((sf != of)) goto L_719325;
L_71935f: /* 71935f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_719360: /* 719360: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 719361: mov eax, esi */
  eax = esi;
/* 719363: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 719364: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 719365: ret 4 */
  esp += 8; SPILL(); return;
}

void f_719390(void) {
  LOAD_REGS();
L_719390: /* 719390: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 719391: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 719392: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 719398: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 719399: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71939a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 71939e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7193a0: mov esi, ecx */
  esi = ecx;
/* 7193a2: jge 0x7193b8 */
  if ((sf == of)) goto L_7193b8;
L_7193a4: /* 7193a4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 7193a9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7193ae: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 7193b3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7193b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7193b5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7193b8: /* 7193b8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7193bb: jle 0x7193d1 */
  if ((zf || sf != of)) goto L_7193d1;
L_7193bd: /* 7193bd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7193c2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7193c7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7193cc: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7193ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7193ce: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7193d1: /* 7193d1: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 7193d5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7193d8: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 7193db: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7193dd: jle 0x7193f3 */
  if ((zf || sf != of)) goto L_7193f3;
L_7193df: /* 7193df: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7193e4: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7193e9: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7193ee: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7193f0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7193f0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7193f3: /* 7193f3: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 7193f5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7193f6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7193f7: mov ecx, esi */
  ecx = esi;
/* 7193f9: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7193ffu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7193ff: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 719400: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 719401: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 719402: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 719403: ret 8 */
  esp += 12; SPILL(); return;
}

void f_719430(void) {
  LOAD_REGS();
L_719430: /* 719430: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 719431: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 719432: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 719433: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 719437: mov esi, ecx */
  esi = ecx;
/* 719439: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 71943b: je 0x719490 */
  if (zf) goto L_719490;
L_71943d: /* 71943d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 719440: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 719441: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 719443: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x719449u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 719449: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 71944c: xor ebx, ebx */
  ebx = 0;
/* 71944e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 719450: jle 0x719490 */
  if ((zf || sf != of)) goto L_719490;
L_719452: /* 719452: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 719453: xor ebp, ebp */
  ebp = 0;
L_719455: /* 719455: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 719457: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 719459: mov ecx, esi */
  ecx = esi;
/* 71945b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x719461u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 719461: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 719463: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 719466: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 719468: je 0x719484 */
  if (zf) goto L_719484;
L_71946a: /* 71946a: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 71946c: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 71946e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 719470: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 719472: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 719475: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 719478: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 71947b: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 71947e: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 719481: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
L_719484: /* 719484: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 719487: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 719488: add ebp, 0x10 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 71948b: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71948d: jl 0x719455 */
  if ((sf != of)) goto L_719455;
L_71948f: /* 71948f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_719490: /* 719490: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 719491: mov eax, esi */
  eax = esi;
/* 719493: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 719494: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 719495: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7194c0(void) {
  LOAD_REGS();
L_7194c0: /* 7194c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7194c1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7194c2: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 7194c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7194c9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7194ca: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 7194ce: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7194d0: mov esi, ecx */
  esi = ecx;
/* 7194d2: jge 0x7194e8 */
  if ((sf == of)) goto L_7194e8;
L_7194d4: /* 7194d4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 7194d9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7194de: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 7194e3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7194e5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7194e5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7194e8: /* 7194e8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7194eb: jle 0x719501 */
  if ((zf || sf != of)) goto L_719501;
L_7194ed: /* 7194ed: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7194f2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7194f7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7194fc: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7194feu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7194fe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_719501: /* 719501: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 719505: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 719508: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 71950b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71950d: jle 0x719523 */
  if ((zf || sf != of)) goto L_719523;
L_71950f: /* 71950f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 719514: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 719519: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71951e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x719520u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 719520: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_719523: /* 719523: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 719525: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 719526: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 719527: mov ecx, esi */
  ecx = esi;
/* 719529: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71952fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71952f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 719530: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 719531: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 719532: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 719533: ret 8 */
  esp += 12; SPILL(); return;
}

void f_719560(void) {
  LOAD_REGS();
L_719560: /* 719560: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 719561: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 719562: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 719568: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 719569: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71956a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 71956e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 719570: mov esi, ecx */
  esi = ecx;
/* 719572: jge 0x719588 */
  if ((sf == of)) goto L_719588;
L_719574: /* 719574: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 719579: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71957e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 719583: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x719585u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 719585: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_719588: /* 719588: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71958b: jle 0x7195a1 */
  if ((zf || sf != of)) goto L_7195a1;
L_71958d: /* 71958d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 719592: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 719597: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71959c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x71959eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71959e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7195a1: /* 7195a1: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 7195a5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7195a8: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 7195ab: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7195ad: jle 0x7195c3 */
  if ((zf || sf != of)) goto L_7195c3;
L_7195af: /* 7195af: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7195b4: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7195b9: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7195be: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7195c0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7195c0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7195c3: /* 7195c3: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 7195c5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7195c6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7195c7: mov ecx, esi */
  ecx = esi;
/* 7195c9: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7195cfu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7195cf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7195d0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7195d1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7195d2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7195d3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_719600(void) {
  LOAD_REGS();
L_719600: /* 719600: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 719602: push 0x9c2b59 */
  { uint32_t v = 0x9c2b59u; esp -= 4; W32(esp, v); }
/* 719607: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71960d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71960e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 719615: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 719618: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 719619: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 71961a: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 71961e: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 719621: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 719623: mov ebx, ecx */
  ebx = ecx;
/* 719625: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 719626: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 71962a: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x719630u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 719630: xor eax, eax */
  eax = 0;
/* 719632: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 719635: cmp dword ptr [ebp + 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 719638: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 71963c: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 719640: jle 0x719688 */
  if ((zf || sf != of)) goto L_719688;
L_719642: /* 719642: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 719643: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 719647: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_719648: /* 719648: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 71964a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 71964c: mov ecx, ebx */
  ecx = ebx;
/* 71964e: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x719654u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 719654: imul eax, eax, 0x38 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x38u);
  eax = (uint32_t)r;
  }
/* 719657: add eax, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 719659: je 0x71966b */
  if (zf) goto L_71966b;
L_71965b: /* 71965b: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 71965e: add esi, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 719662: mov ecx, 0xe */
  ecx = 0xeu;
/* 719667: mov edi, eax */
  edi = eax;
/* 719669: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_71966b: /* 71966b: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 71966f: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 719673: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 719676: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 719677: add edx, 0x38 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 71967a: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71967c: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 719680: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 719684: jl 0x719648 */
  if ((sf != of)) goto L_719648;
L_719686: /* 719686: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 719687: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_719688: /* 719688: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 71968c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 71968d: mov eax, ebx */
  eax = ebx;
/* 71968f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 719690: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 719697: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71969a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7196d0(void) {
  LOAD_REGS();
L_7196d0: /* 7196d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7196d1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7196d2: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 7196d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7196d9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7196da: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 7196de: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7196e0: mov esi, ecx */
  esi = ecx;
/* 7196e2: jge 0x7196f8 */
  if ((sf == of)) goto L_7196f8;
L_7196e4: /* 7196e4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 7196e9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7196ee: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 7196f3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7196f5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7196f5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7196f8: /* 7196f8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7196fb: jle 0x719711 */
  if ((zf || sf != of)) goto L_719711;
L_7196fd: /* 7196fd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 719702: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 719707: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71970c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x71970eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71970e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_719711: /* 719711: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 719715: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 719718: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 71971b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71971d: jle 0x719733 */
  if ((zf || sf != of)) goto L_719733;
L_71971f: /* 71971f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 719724: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 719729: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71972e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x719730u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 719730: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_719733: /* 719733: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 719735: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 719736: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 719737: mov ecx, esi */
  ecx = esi;
/* 719739: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71973fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71973f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 719740: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 719741: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 719742: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 719743: ret 8 */
  esp += 12; SPILL(); return;
}

void f_719770(void) {
  LOAD_REGS();
L_719770: /* 719770: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 719771: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 719772: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 719773: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 719777: mov ebx, ecx */
  ebx = ecx;
/* 719779: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 71977b: je 0x7197e0 */
  if (zf) goto L_7197e0;
L_71977d: /* 71977d: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 719780: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 719781: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 719783: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x719789u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 719789: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 71978c: xor eax, eax */
  eax = 0;
/* 71978e: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 719790: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 719794: jle 0x7197e0 */
  if ((zf || sf != of)) goto L_7197e0;
L_719796: /* 719796: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 719797: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 71979b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71979c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7197a0: /* 7197a0: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 7197a2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7197a4: mov ecx, ebx */
  ecx = ebx;
/* 7197a6: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7197acu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7197ac: imul eax, eax, 0x38 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x38u);
  eax = (uint32_t)r;
  }
/* 7197af: add eax, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 7197b1: je 0x7197c3 */
  if (zf) goto L_7197c3;
L_7197b3: /* 7197b3: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 7197b6: add esi, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7197ba: mov ecx, 0xe */
  ecx = 0xeu;
/* 7197bf: mov edi, eax */
  edi = eax;
/* 7197c1: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_7197c3: /* 7197c3: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 7197c7: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 7197cb: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 7197ce: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7197cf: add edx, 0x38 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7197d2: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7197d4: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 7197d8: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 7197dc: jl 0x7197a0 */
  if ((sf != of)) goto L_7197a0;
L_7197de: /* 7197de: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7197df: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_7197e0: /* 7197e0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7197e1: mov eax, ebx */
  eax = ebx;
/* 7197e3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7197e4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 7197e5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_719810(void) {
  LOAD_REGS();
L_719810: /* 719810: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 719811: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 719812: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 719818: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 719819: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71981a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 71981e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 719820: mov esi, ecx */
  esi = ecx;
/* 719822: jge 0x719838 */
  if ((sf == of)) goto L_719838;
L_719824: /* 719824: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 719829: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71982e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 719833: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x719835u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 719835: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_719838: /* 719838: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71983b: jle 0x719851 */
  if ((zf || sf != of)) goto L_719851;
L_71983d: /* 71983d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 719842: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 719847: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71984c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x71984eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71984e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_719851: /* 719851: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 719855: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 719858: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 71985b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71985d: jle 0x719873 */
  if ((zf || sf != of)) goto L_719873;
L_71985f: /* 71985f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 719864: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 719869: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71986e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x719870u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 719870: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_719873: /* 719873: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 719875: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 719876: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 719877: mov ecx, esi */
  ecx = esi;
/* 719879: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71987fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71987f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 719880: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 719881: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 719882: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 719883: ret 8 */
  esp += 12; SPILL(); return;
}
