#include "recomp.h"
#include "rec_mod.h"

void f_1011000(void) {
  LOAD_REGS();
L_1011000: /* 1011000: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1011001: mov esi, eax */
  esi = eax;
/* 1011003: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 1011005: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1011007: je 0x1011032 */
  if (zf) goto L_1011032;
L_1011009: /* 1011009: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 101100a: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* 101100e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 101100f: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 1011013: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1011015: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1011016: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1011017: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1011018: call dword ptr [esi + 0x2c4] */
  { uint32_t t = R32((uint32_t)(esi + 0x2c4u)); esp -= 4; W32(esp, 0x101101eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 101101e: mov dword ptr [esi + 8], ebx */
  W32((uint32_t)(esi + 0x8u), ebx);
/* 1011021: mov dword ptr [esi + 0xc], edi */
  W32((uint32_t)(esi + 0xcu), edi);
/* 1011024: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1011027: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1011028: call 0x1013adc */
  esp -= 4; W32(esp, 0x101102du); SPILL(); f_1013adc(); if (g_unwind) return; RELOAD();
/* 101102d: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1011030: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1011031: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_1011032: /* 1011032: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1011033: ret  */
  esp += 4; SPILL(); return;
}

void f_1011040(void) {
  LOAD_REGS();
L_1011040: /* 1011040: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1011041: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1011042: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 1011046: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1011047: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 101104b: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 101104d: jl 0x1011085 */
  if ((sf != of)) goto L_1011085;
L_101104f: /* 101104f: jg 0x1011055 */
  if ((!zf && sf == of)) goto L_1011055;
L_1011051: /* 1011051: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 1011053: jbe 0x1011063 */
  if ((cf | zf)) goto L_1011063;
L_1011055: /* 1011055: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 1011058: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 101105b: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ebp = r;
  }
/* 101105d: adc edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edi = r;
  }
/* 101105f: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
L_1011063: /* 1011063: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1011065: jl 0x1011085 */
  if ((sf != of)) goto L_1011085;
L_1011067: /* 1011067: jg 0x101106d */
  if ((!zf && sf == of)) goto L_101106d;
L_1011069: /* 1011069: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 101106b: jbe 0x1011085 */
  if ((cf | zf)) goto L_1011085;
L_101106d: /* 101106d: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 1011070: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1011072: jg 0x1011121 */
  if ((!zf && sf == of)) goto L_1011121;
L_1011078: /* 1011078: jl 0x1011085 */
  if ((sf != of)) goto L_1011085;
L_101107a: /* 101107a: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 101107d: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 101107f: jae 0x1011121 */
  if (!cf) goto L_1011121;
L_1011085: /* 1011085: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 1011089: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 101108a: lea ebx, [esi + 0x18] */
  ebx = (uint32_t)(esi + 0x18u);
/* 101108d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 101108e: call 0x1013ae2 */
  esp -= 4; W32(esp, 0x1011093u); SPILL(); f_1013ae2(); if (g_unwind) return; RELOAD();
/* 1011093: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1011096: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1011098: jge 0x10110ad */
  if ((sf == of)) goto L_10110ad;
L_101109a: /* 101109a: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 101109d: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 101109e: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  ecx = r;
  }
/* 10110a0: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 10110a3: sbb eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 10110a5: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 10110a8: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 10110ab: jmp 0x1011063 */
  goto L_1011063;
L_10110ad: /* 10110ad: jne 0x1011137 */
  if (!zf) goto L_1011137;
L_10110b3: /* 10110b3: mov edx, ebp */
  edx = ebp;
/* 10110b5: or edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  edx = r;
  }
/* 10110b7: je 0x1011121 */
  if (zf) goto L_1011121;
L_10110b9: /* 10110b9: call dword ptr [0x1014040] */
  esp -= 4; W32(esp, 0x10110bfu); SPILL(); f_4102a5(); if (g_unwind) return; /* MSVCR70!_errno */ RELOAD();
/* 10110bf: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 10110c5: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10110c8: je 0x101112b */
  if (zf) goto L_101112b;
L_10110ca: /* 10110ca: push 0x2134 */
  { uint32_t v = 0x2134u; esp -= 4; W32(esp, v); }
/* 10110cf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10110d0: call 0x1013ad6 */
  esp -= 4; W32(esp, 0x10110d5u); SPILL(); f_1013ad6(); if (g_unwind) return; RELOAD();
/* 10110d5: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 10110d7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10110d8: push 0x2134 */
  { uint32_t v = 0x2134u; esp -= 4; W32(esp, v); }
/* 10110dd: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 10110df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10110e0: call dword ptr [esi + 0x2c0] */
  { uint32_t t = R32((uint32_t)(esi + 0x2c0u)); esp -= 4; W32(esp, 0x10110e6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10110e6: mov edi, eax */
  edi = eax;
/* 10110e8: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10110eb: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10110ed: jle 0x10110fb */
  if ((zf || sf != of)) goto L_10110fb;
L_10110ef: /* 10110ef: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10110f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10110f1: call 0x1013ad0 */
  esp -= 4; W32(esp, 0x10110f6u); SPILL(); f_1013ad0(); if (g_unwind) return; RELOAD();
/* 10110f6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10110f9: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
L_10110fb: /* 10110fb: je 0x101110a */
  if (zf) goto L_101110a;
L_10110fd: /* 10110fd: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10110ff: jl 0x1011115 */
  if ((sf != of)) goto L_1011115;
L_1011101: /* 1011101: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 1011105: jmp 0x1011063 */
  goto L_1011063;
L_101110a: /* 101110a: call dword ptr [0x1014040] */
  esp -= 4; W32(esp, 0x1011110u); SPILL(); f_4102a5(); if (g_unwind) return; /* MSVCR70!_errno */ RELOAD();
/* 1011110: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1011113: je 0x101112b */
  if (zf) goto L_101112b;
L_1011115: /* 1011115: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1011116: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1011117: mov eax, 0xffffff80 */
  eax = 0xffffff80u;
/* 101111c: or edx, 0xffffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 101111f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1011120: ret  */
  esp += 4; SPILL(); return;
L_1011121: /* 1011121: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1011122: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1011123: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 1011126: or edx, 0xffffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 1011129: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 101112a: ret  */
  esp += 4; SPILL(); return;
L_101112b: /* 101112b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 101112c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 101112d: mov eax, 0xfffffffe */
  eax = 0xfffffffeu;
/* 1011132: or edx, 0xffffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 1011135: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1011136: ret  */
  esp += 4; SPILL(); return;
L_1011137: /* 1011137: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 101113a: mov edi, dword ptr [esi + 0xc] */
  edi = R32((uint32_t)(esi + 0xcu));
/* 101113d: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 101113e: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 1011140: adc edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 1011142: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 1011145: mov edx, edi */
  edx = edi;
/* 1011147: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1011148: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1011149: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 101114c: mov eax, ecx */
  eax = ecx;
/* 101114e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 101114f: ret  */
  esp += 4; SPILL(); return;
}

void f_1011150(void) {
  LOAD_REGS();
L_1011150: /* 1011150: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1011153: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1011154: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1011155: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1011156: mov esi, eax */
  esi = eax;
/* 1011158: mov ebp, dword ptr [esi + 8] */
  ebp = R32((uint32_t)(esi + 0x8u));
/* 101115b: mov ebx, dword ptr [esi + 0xc] */
  ebx = R32((uint32_t)(esi + 0xcu));
/* 101115e: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 1011161: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1011162: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 1011166: mov edi, ebx */
  edi = ebx;
/* 1011168: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 101116c: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
L_1011170: /* 1011170: add ebp, 0xffffdecc */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xffffdeccu);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ebp = r;
  }
/* 1011176: adc ebx, -1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ebx = r;
  }
/* 1011179: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 101117b: jg 0x1011187 */
  if ((!zf && sf == of)) goto L_1011187;
L_101117d: /* 101117d: jl 0x1011183 */
  if ((sf != of)) goto L_1011183;
L_101117f: /* 101117f: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  cf = 0;
  }
/* 1011181: jae 0x1011187 */
  if (!cf) goto L_1011187;
L_1011183: /* 1011183: xor ebp, ebp */
  ebp = 0;
/* 1011185: xor ebx, ebx */
  ebx = 0;
L_1011187: /* 1011187: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 1011189: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 101118b: je 0x10111aa */
  if (zf) goto L_10111aa;
L_101118d: /* 101118d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 101118f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1011190: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1011191: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1011192: call dword ptr [esi + 0x2c4] */
  { uint32_t t = R32((uint32_t)(esi + 0x2c4u)); esp -= 4; W32(esp, 0x1011198u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1011198: lea eax, [esi + 0x18] */
  eax = (uint32_t)(esi + 0x18u);
/* 101119b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 101119c: mov dword ptr [esi + 8], ebp */
  W32((uint32_t)(esi + 0x8u), ebp);
/* 101119f: mov dword ptr [esi + 0xc], ebx */
  W32((uint32_t)(esi + 0xcu), ebx);
/* 10111a2: call 0x1013adc */
  esp -= 4; W32(esp, 0x10111a7u); SPILL(); f_1013adc(); if (g_unwind) return; RELOAD();
/* 10111a7: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_10111aa: /* 10111aa: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 10111ad: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10111af: jg 0x1011211 */
  if ((!zf && sf == of)) goto L_1011211;
L_10111b1: /* 10111b1: jl 0x10111c0 */
  if ((sf != of)) goto L_10111c0;
L_10111b3: /* 10111b3: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 10111b6: cmp edx, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10111ba: jae 0x1011211 */
  if (!cf) goto L_1011211;
L_10111bc: /* 10111bc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_10111c0: /* 10111c0: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 10111c3: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 10111c7: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 10111ca: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  eax = r;
  }
/* 10111cc: mov ecx, edi */
  ecx = edi;
/* 10111ce: sbb ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ecx = r;
  }
/* 10111d0: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 10111d4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10111d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10111d6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10111d7: call 0x1011040 */
  esp -= 4; W32(esp, 0x10111dcu); SPILL(); f_1011040(); if (g_unwind) return; RELOAD();
/* 10111dc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10111df: cmp eax, -0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffff80u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10111e2: jne 0x10111ed */
  if (!zf) goto L_10111ed;
L_10111e4: /* 10111e4: cmp edx, -1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10111e7: je 0x101127f */
  if (zf) goto L_101127f;
L_10111ed: /* 10111ed: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10111ef: jl 0x1011211 */
  if ((sf != of)) goto L_1011211;
L_10111f1: /* 10111f1: jg 0x10111f7 */
  if ((!zf && sf == of)) goto L_10111f7;
L_10111f3: /* 10111f3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  cf = 0;
  }
/* 10111f5: jb 0x1011211 */
  if (cf) goto L_1011211;
L_10111f7: /* 10111f7: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 10111fb: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 10111fe: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1011200: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 1011204: jl 0x10111c0 */
  if ((sf != of)) goto L_10111c0;
L_1011206: /* 1011206: jg 0x1011211 */
  if ((!zf && sf == of)) goto L_1011211;
L_1011208: /* 1011208: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 101120b: cmp ecx, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 101120f: jb 0x10111c0 */
  if (cf) goto L_10111c0;
L_1011211: /* 1011211: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 1011215: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 1011219: mov eax, ecx */
  eax = ecx;
/* 101121b: and eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 101121d: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1011220: je 0x1011170 */
  if (zf) goto L_1011170;
L_1011226: /* 1011226: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 1011228: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 101122a: je 0x1011251 */
  if (zf) goto L_1011251;
L_101122c: /* 101122c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 101122e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 101122f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1011230: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1011231: call dword ptr [esi + 0x2c4] */
  { uint32_t t = R32((uint32_t)(esi + 0x2c4u)); esp -= 4; W32(esp, 0x1011237u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1011237: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 101123b: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 101123f: lea eax, [esi + 0x18] */
  eax = (uint32_t)(esi + 0x18u);
/* 1011242: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1011243: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 1011246: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 1011249: call 0x1013adc */
  esp -= 4; W32(esp, 0x101124eu); SPILL(); f_1013adc(); if (g_unwind) return; RELOAD();
/* 101124e: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_1011251: /* 1011251: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 1011255: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1011257: push 0x2134 */
  { uint32_t v = 0x2134u; esp -= 4; W32(esp, v); }
/* 101125c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 101125d: call 0x1011040 */
  esp -= 4; W32(esp, 0x1011262u); SPILL(); f_1011040(); if (g_unwind) return; RELOAD();
/* 1011262: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1011265: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1011267: jg 0x101128f */
  if ((!zf && sf == of)) goto L_101128f;
L_1011269: /* 1011269: jl 0x101126f */
  if ((sf != of)) goto L_101126f;
L_101126b: /* 101126b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  cf = 0;
  }
/* 101126d: jae 0x101128f */
  if (!cf) goto L_101128f;
L_101126f: /* 101126f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1011270: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1011271: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1011272: mov eax, 0xffffff7f */
  eax = 0xffffff7fu;
/* 1011277: or edx, 0xffffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 101127a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 101127b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 101127e: ret  */
  esp += 4; SPILL(); return;
L_101127f: /* 101127f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1011280: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1011281: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1011282: mov eax, 0xffffff80 */
  eax = 0xffffff80u;
/* 1011287: or edx, 0xffffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 101128a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 101128b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 101128e: ret  */
  esp += 4; SPILL(); return;
L_101128f: /* 101128f: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 1011293: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 1011297: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1011298: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1011299: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 101129a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 101129b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 101129e: ret  */
  esp += 4; SPILL(); return;
}

void f_10112a0(void) {
  LOAD_REGS();
L_10112a0: /* 10112a0: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 10112a3: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 10112a7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10112a8: mov ebx, dword ptr [esp + 0x50] */
  ebx = R32((uint32_t)(esp + 0x50u));
/* 10112ac: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10112ad: mov ebp, dword ptr [esp + 0x48] */
  ebp = R32((uint32_t)(esp + 0x48u));
/* 10112b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10112b2: mov esi, dword ptr [esp + 0x40] */
  esi = R32((uint32_t)(esp + 0x40u));
/* 10112b6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10112b7: mov edi, dword ptr [esp + 0x54] */
  edi = R32((uint32_t)(esp + 0x54u));
/* 10112bb: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10112bd: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 10112c1: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 10112c5: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 10112c9: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 10112cd: jg 0x10113ee */
  if ((!zf && sf == of)) goto L_10113ee;
L_10112d3: /* 10112d3: jl 0x10112f0 */
  if ((sf != of)) goto L_10112f0;
L_10112d5: /* 10112d5: cmp ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10112d7: jae 0x10113ee */
  if (!cf) goto L_10113ee;
L_10112dd: /* 10112dd: jmp 0x10112f0 */
  goto L_10112f0;
L_10112df: /* 10112df: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 10112e3: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 10112e7: mov ebp, dword ptr [esp + 0x50] */
  ebp = R32((uint32_t)(esp + 0x50u));
/* 10112eb: jmp 0x10112f0 */
  goto L_10112f0;
L_10112f0: /* 10112f0: mov ecx, edx */
  ecx = edx;
/* 10112f2: sub ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  ecx = r;
  }
/* 10112f4: mov eax, ebx */
  eax = ebx;
/* 10112f6: sbb eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 10112f8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10112fa: jg 0x101130e */
  if ((!zf && sf == of)) goto L_101130e;
L_10112fc: /* 10112fc: jl 0x1011306 */
  if ((sf != of)) goto L_1011306;
L_10112fe: /* 10112fe: cmp ecx, 0x2134 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2134u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1011304: jae 0x101130e */
  if (!cf) goto L_101130e;
L_1011306: /* 1011306: mov ebx, edi */
  ebx = edi;
/* 1011308: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 101130c: jmp 0x1011325 */
  goto L_1011325;
L_101130e: /* 101130e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1011310: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edx = r;
  }
/* 1011312: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 1011314: adc ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ebx = r;
  }
/* 1011316: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1011317: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1011318: call 0x1013b90 */
  esp -= 4; W32(esp, 0x101131du); SPILL(); f_1013b90(); if (g_unwind) return; RELOAD();
/* 101131d: mov ebp, eax */
  ebp = eax;
/* 101131f: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 1011323: mov ebx, edx */
  ebx = edx;
L_1011325: /* 1011325: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 1011327: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1011329: je 0x1011348 */
  if (zf) goto L_1011348;
L_101132b: /* 101132b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 101132d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 101132e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 101132f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1011330: call dword ptr [esi + 0x2c4] */
  { uint32_t t = R32((uint32_t)(esi + 0x2c4u)); esp -= 4; W32(esp, 0x1011336u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1011336: lea eax, [esi + 0x18] */
  eax = (uint32_t)(esi + 0x18u);
/* 1011339: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 101133a: mov dword ptr [esi + 8], ebp */
  W32((uint32_t)(esi + 0x8u), ebp);
/* 101133d: mov dword ptr [esi + 0xc], ebx */
  W32((uint32_t)(esi + 0xcu), ebx);
/* 1011340: call 0x1013adc */
  esp -= 4; W32(esp, 0x1011345u); SPILL(); f_1013adc(); if (g_unwind) return; RELOAD();
/* 1011345: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_1011348: /* 1011348: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 101134a: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 101134e: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1011350: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1011351: call 0x1011040 */
  esp -= 4; W32(esp, 0x1011356u); SPILL(); f_1011040(); if (g_unwind) return; RELOAD();
/* 1011356: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1011359: cmp eax, -0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffff80u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 101135c: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 1011360: mov ebx, edx */
  ebx = edx;
/* 1011362: jne 0x101136d */
  if (!zf) goto L_101136d;
L_1011364: /* 1011364: cmp ebx, -1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1011367: je 0x1011492 */
  if (zf) goto L_1011492;
L_101136d: /* 101136d: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 101136f: jl 0x10113ae */
  if ((sf != of)) goto L_10113ae;
L_1011371: /* 1011371: jg 0x1011377 */
  if ((!zf && sf == of)) goto L_1011377;
L_1011373: /* 1011373: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  cf = 0;
  }
/* 1011375: jb 0x10113ae */
  if (cf) goto L_10113ae;
L_1011377: /* 1011377: lea edx, [esp + 0x30] */
  edx = (uint32_t)(esp + 0x30u);
/* 101137b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 101137c: call 0x1013ae8 */
  esp -= 4; W32(esp, 0x1011381u); SPILL(); f_1013ae8(); if (g_unwind) return; RELOAD();
/* 1011381: mov ecx, dword ptr [esp + 0x64] */
  ecx = R32((uint32_t)(esp + 0x64u));
/* 1011385: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1011388: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 101138a: jne 0x10113aa */
  if (!zf) goto L_10113aa;
L_101138c: /* 101138c: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 1011390: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 1011391: mov ecx, eax */
  ecx = eax;
/* 1011393: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 1011397: mov edi, edx */
  edi = edx;
/* 1011399: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 101139a: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ecx = r;
  }
/* 101139c: adc edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edi = r;
  }
/* 101139e: add ecx, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ecx = r;
  }
/* 10113a2: mov dword ptr [esp + 0x50], ecx */
  W32((uint32_t)(esp + 0x50u), ecx);
/* 10113a6: adc edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edi = r;
  }
/* 10113a8: jmp 0x10113cc */
  goto L_10113cc;
L_10113aa: /* 10113aa: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
L_10113ae: /* 10113ae: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10113b0: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 10113b4: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 10113b8: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 10113bc: jl 0x10113cc */
  if ((sf != of)) goto L_10113cc;
L_10113be: /* 10113be: jg 0x10113c4 */
  if ((!zf && sf == of)) goto L_10113c4;
L_10113c0: /* 10113c0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  cf = 0;
  }
/* 10113c2: jb 0x10113cc */
  if (cf) goto L_10113cc;
L_10113c4: /* 10113c4: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 10113c8: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
L_10113cc: /* 10113cc: cmp edi, dword ptr [esp + 0x1c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10113d0: jl 0x10112df */
  if ((sf != of)) goto L_10112df;
L_10113d6: /* 10113d6: jg 0x10113e6 */
  if ((!zf && sf == of)) goto L_10113e6;
L_10113d8: /* 10113d8: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 10113dc: cmp dword ptr [esp + 0x50], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x50u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10113e0: jb 0x10112df */
  if (cf) goto L_10112df;
L_10113e6: /* 10113e6: mov ebp, dword ptr [esp + 0x50] */
  ebp = R32((uint32_t)(esp + 0x50u));
/* 10113ea: mov ebx, dword ptr [esp + 0x5c] */
  ebx = R32((uint32_t)(esp + 0x5cu));
L_10113ee: /* 10113ee: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 10113f0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10113f2: je 0x1011421 */
  if (zf) goto L_1011421;
L_10113f4: /* 10113f4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 10113f8: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 10113fc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10113fe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10113ff: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1011400: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1011401: call dword ptr [esi + 0x2c4] */
  { uint32_t t = R32((uint32_t)(esi + 0x2c4u)); esp -= 4; W32(esp, 0x1011407u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1011407: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 101140b: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 101140f: lea edx, [esi + 0x18] */
  edx = (uint32_t)(esi + 0x18u);
/* 1011412: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1011413: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 1011416: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* 1011419: call 0x1013adc */
  esp -= 4; W32(esp, 0x101141eu); SPILL(); f_1013adc(); if (g_unwind) return; RELOAD();
/* 101141e: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_1011421: /* 1011421: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1011423: lea eax, [esp + 0x34] */
  eax = (uint32_t)(esp + 0x34u);
/* 1011427: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1011429: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 101142a: call 0x1011040 */
  esp -= 4; W32(esp, 0x101142fu); SPILL(); f_1011040(); if (g_unwind) return; RELOAD();
/* 101142f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1011432: cmp eax, -0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffff80u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1011435: jne 0x101143c */
  if (!zf) goto L_101143c;
L_1011437: /* 1011437: cmp edx, -1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 101143a: je 0x1011492 */
  if (zf) goto L_1011492;
L_101143c: /* 101143c: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 101143e: jg 0x101149f */
  if ((!zf && sf == of)) goto L_101149f;
L_1011440: /* 1011440: jl 0x1011448 */
  if ((sf != of)) goto L_1011448;
L_1011442: /* 1011442: cmp ebp, dword ptr [esp + 0x58] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x58u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1011446: jae 0x101149f */
  if (!cf) goto L_101149f;
L_1011448: /* 1011448: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 101144a: jl 0x101149f */
  if ((sf != of)) goto L_101149f;
L_101144c: /* 101144c: jg 0x1011452 */
  if ((!zf && sf == of)) goto L_1011452;
L_101144e: /* 101144e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  cf = 0;
  }
/* 1011450: jb 0x101149f */
  if (cf) goto L_101149f;
L_1011452: /* 1011452: mov ebx, dword ptr [esp + 0x64] */
  ebx = R32((uint32_t)(esp + 0x64u));
/* 1011456: lea ecx, [ebx + 1] */
  ecx = (uint32_t)(ebx + 0x1u);
/* 1011459: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 101145a: lea edx, [esp + 0x34] */
  edx = (uint32_t)(esp + 0x34u);
/* 101145e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 101145f: call 0x1013ae8 */
  esp -= 4; W32(esp, 0x1011464u); SPILL(); f_1013ae8(); if (g_unwind) return; RELOAD();
/* 1011464: mov ecx, dword ptr [esp + 0x60] */
  ecx = R32((uint32_t)(esp + 0x60u));
/* 1011468: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 101146b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 101146e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 101146f: mov eax, dword ptr [esp + 0x64] */
  eax = R32((uint32_t)(esp + 0x64u));
/* 1011473: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1011474: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 1011477: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1011478: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 101147c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 101147d: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 1011481: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1011482: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1011483: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1011484: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1011485: call 0x10112a0 */
  esp -= 4; W32(esp, 0x101148au); SPILL(); f_10112a0(); if (g_unwind) return; RELOAD();
/* 101148a: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 101148d: cmp eax, -0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffff80u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1011490: jne 0x10114d8 */
  if (!zf) goto L_10114d8;
L_1011492: /* 1011492: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1011493: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1011494: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1011495: mov eax, 0xffffff80 */
  eax = 0xffffff80u;
/* 101149a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 101149b: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 101149e: ret  */
  esp += 4; SPILL(); return;
L_101149f: /* 101149f: mov ebx, dword ptr [esp + 0x64] */
  ebx = R32((uint32_t)(esp + 0x64u));
/* 10114a3: lea eax, [ebx + 1] */
  eax = (uint32_t)(ebx + 0x1u);
/* 10114a6: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 10114a9: lea eax, [eax*8 + 8] */
  eax = (uint32_t)(eax*8 + 0x8u);
/* 10114b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10114b1: call dword ptr [0x101400c] */
  esp -= 4; W32(esp, 0x10114b7u); SPILL(); f_4010eb(); if (g_unwind) return; /* MSVCR70!malloc */ RELOAD();
/* 10114b7: mov ecx, dword ptr [esi + 0x34] */
  ecx = R32((uint32_t)(esi + 0x34u));
/* 10114ba: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 10114bd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10114be: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* 10114c1: call dword ptr [0x101400c] */
  esp -= 4; W32(esp, 0x10114c7u); SPILL(); f_4010eb(); if (g_unwind) return; /* MSVCR70!malloc */ RELOAD();
/* 10114c7: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* 10114ca: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 10114cd: mov dword ptr [edx + ebx*8 + 8], ebp */
  W32((uint32_t)(edx + ebx*8 + 0x8u), ebp);
/* 10114d1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10114d4: mov dword ptr [edx + ebx*8 + 0xc], edi */
  W32((uint32_t)(edx + ebx*8 + 0xcu), edi);
L_10114d8: /* 10114d8: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 10114db: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 10114df: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 10114e3: mov dword ptr [eax + ebx*8], ecx */
  W32((uint32_t)(eax + ebx*8), ecx);
/* 10114e6: mov ecx, dword ptr [esp + 0x60] */
  ecx = R32((uint32_t)(esp + 0x60u));
/* 10114ea: mov dword ptr [eax + ebx*8 + 4], edx */
  W32((uint32_t)(eax + ebx*8 + 0x4u), edx);
/* 10114ee: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 10114f1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10114f2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10114f3: mov dword ptr [eax + ebx*4], ecx */
  W32((uint32_t)(eax + ebx*4), ecx);
/* 10114f6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10114f7: xor eax, eax */
  eax = 0;
/* 10114f9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10114fa: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10114fd: ret  */
  esp += 4; SPILL(); return;
}

void f_10112ed(void) {
  LOAD_REGS();
  goto L_10112ed;
L_10112df: /* 10112df: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 10112e3: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 10112e7: mov ebp, dword ptr [esp + 0x50] */
  ebp = R32((uint32_t)(esp + 0x50u));
/* 10112eb: jmp 0x10112f0 */
  goto L_10112f0;
L_10112ed: /* 10112ed: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_10112f0: /* 10112f0: mov ecx, edx */
  ecx = edx;
/* 10112f2: sub ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  ecx = r;
  }
/* 10112f4: mov eax, ebx */
  eax = ebx;
/* 10112f6: sbb eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 10112f8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10112fa: jg 0x101130e */
  if ((!zf && sf == of)) goto L_101130e;
L_10112fc: /* 10112fc: jl 0x1011306 */
  if ((sf != of)) goto L_1011306;
L_10112fe: /* 10112fe: cmp ecx, 0x2134 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2134u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1011304: jae 0x101130e */
  if (!cf) goto L_101130e;
L_1011306: /* 1011306: mov ebx, edi */
  ebx = edi;
/* 1011308: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 101130c: jmp 0x1011325 */
  goto L_1011325;
L_101130e: /* 101130e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1011310: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edx = r;
  }
/* 1011312: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 1011314: adc ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ebx = r;
  }
/* 1011316: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1011317: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1011318: call 0x1013b90 */
  esp -= 4; W32(esp, 0x101131du); SPILL(); f_1013b90(); if (g_unwind) return; RELOAD();
/* 101131d: mov ebp, eax */
  ebp = eax;
/* 101131f: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 1011323: mov ebx, edx */
  ebx = edx;
L_1011325: /* 1011325: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 1011327: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1011329: je 0x1011348 */
  if (zf) goto L_1011348;
L_101132b: /* 101132b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 101132d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 101132e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 101132f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1011330: call dword ptr [esi + 0x2c4] */
  { uint32_t t = R32((uint32_t)(esi + 0x2c4u)); esp -= 4; W32(esp, 0x1011336u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1011336: lea eax, [esi + 0x18] */
  eax = (uint32_t)(esi + 0x18u);
/* 1011339: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 101133a: mov dword ptr [esi + 8], ebp */
  W32((uint32_t)(esi + 0x8u), ebp);
/* 101133d: mov dword ptr [esi + 0xc], ebx */
  W32((uint32_t)(esi + 0xcu), ebx);
/* 1011340: call 0x1013adc */
  esp -= 4; W32(esp, 0x1011345u); SPILL(); f_1013adc(); if (g_unwind) return; RELOAD();
/* 1011345: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_1011348: /* 1011348: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 101134a: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 101134e: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1011350: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1011351: call 0x1011040 */
  esp -= 4; W32(esp, 0x1011356u); SPILL(); f_1011040(); if (g_unwind) return; RELOAD();
/* 1011356: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1011359: cmp eax, -0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffff80u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 101135c: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 1011360: mov ebx, edx */
  ebx = edx;
/* 1011362: jne 0x101136d */
  if (!zf) goto L_101136d;
L_1011364: /* 1011364: cmp ebx, -1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1011367: je 0x1011492 */
  if (zf) goto L_1011492;
L_101136d: /* 101136d: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 101136f: jl 0x10113ae */
  if ((sf != of)) goto L_10113ae;
L_1011371: /* 1011371: jg 0x1011377 */
  if ((!zf && sf == of)) goto L_1011377;
L_1011373: /* 1011373: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  cf = 0;
  }
/* 1011375: jb 0x10113ae */
  if (cf) goto L_10113ae;
L_1011377: /* 1011377: lea edx, [esp + 0x30] */
  edx = (uint32_t)(esp + 0x30u);
/* 101137b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 101137c: call 0x1013ae8 */
  esp -= 4; W32(esp, 0x1011381u); SPILL(); f_1013ae8(); if (g_unwind) return; RELOAD();
/* 1011381: mov ecx, dword ptr [esp + 0x64] */
  ecx = R32((uint32_t)(esp + 0x64u));
/* 1011385: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1011388: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 101138a: jne 0x10113aa */
  if (!zf) goto L_10113aa;
L_101138c: /* 101138c: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 1011390: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 1011391: mov ecx, eax */
  ecx = eax;
/* 1011393: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 1011397: mov edi, edx */
  edi = edx;
/* 1011399: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 101139a: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ecx = r;
  }
/* 101139c: adc edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edi = r;
  }
/* 101139e: add ecx, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ecx = r;
  }
/* 10113a2: mov dword ptr [esp + 0x50], ecx */
  W32((uint32_t)(esp + 0x50u), ecx);
/* 10113a6: adc edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edi = r;
  }
/* 10113a8: jmp 0x10113cc */
  goto L_10113cc;
L_10113aa: /* 10113aa: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
L_10113ae: /* 10113ae: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10113b0: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 10113b4: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 10113b8: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 10113bc: jl 0x10113cc */
  if ((sf != of)) goto L_10113cc;
L_10113be: /* 10113be: jg 0x10113c4 */
  if ((!zf && sf == of)) goto L_10113c4;
L_10113c0: /* 10113c0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  cf = 0;
  }
/* 10113c2: jb 0x10113cc */
  if (cf) goto L_10113cc;
L_10113c4: /* 10113c4: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 10113c8: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
L_10113cc: /* 10113cc: cmp edi, dword ptr [esp + 0x1c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10113d0: jl 0x10112df */
  if ((sf != of)) goto L_10112df;
L_10113d6: /* 10113d6: jg 0x10113e6 */
  if ((!zf && sf == of)) goto L_10113e6;
L_10113d8: /* 10113d8: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 10113dc: cmp dword ptr [esp + 0x50], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x50u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10113e0: jb 0x10112df */
  if (cf) goto L_10112df;
L_10113e6: /* 10113e6: mov ebp, dword ptr [esp + 0x50] */
  ebp = R32((uint32_t)(esp + 0x50u));
/* 10113ea: mov ebx, dword ptr [esp + 0x5c] */
  ebx = R32((uint32_t)(esp + 0x5cu));
/* 10113ee: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 10113f0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10113f2: je 0x1011421 */
  if (zf) goto L_1011421;
L_10113f4: /* 10113f4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 10113f8: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 10113fc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10113fe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10113ff: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1011400: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1011401: call dword ptr [esi + 0x2c4] */
  { uint32_t t = R32((uint32_t)(esi + 0x2c4u)); esp -= 4; W32(esp, 0x1011407u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1011407: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 101140b: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 101140f: lea edx, [esi + 0x18] */
  edx = (uint32_t)(esi + 0x18u);
/* 1011412: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1011413: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 1011416: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* 1011419: call 0x1013adc */
  esp -= 4; W32(esp, 0x101141eu); SPILL(); f_1013adc(); if (g_unwind) return; RELOAD();
/* 101141e: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_1011421: /* 1011421: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1011423: lea eax, [esp + 0x34] */
  eax = (uint32_t)(esp + 0x34u);
/* 1011427: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1011429: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 101142a: call 0x1011040 */
  esp -= 4; W32(esp, 0x101142fu); SPILL(); f_1011040(); if (g_unwind) return; RELOAD();
/* 101142f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1011432: cmp eax, -0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffff80u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1011435: jne 0x101143c */
  if (!zf) goto L_101143c;
L_1011437: /* 1011437: cmp edx, -1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 101143a: je 0x1011492 */
  if (zf) goto L_1011492;
L_101143c: /* 101143c: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 101143e: jg 0x101149f */
  if ((!zf && sf == of)) goto L_101149f;
L_1011440: /* 1011440: jl 0x1011448 */
  if ((sf != of)) goto L_1011448;
L_1011442: /* 1011442: cmp ebp, dword ptr [esp + 0x58] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x58u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1011446: jae 0x101149f */
  if (!cf) goto L_101149f;
L_1011448: /* 1011448: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 101144a: jl 0x101149f */
  if ((sf != of)) goto L_101149f;
L_101144c: /* 101144c: jg 0x1011452 */
  if ((!zf && sf == of)) goto L_1011452;
L_101144e: /* 101144e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  cf = 0;
  }
/* 1011450: jb 0x101149f */
  if (cf) goto L_101149f;
L_1011452: /* 1011452: mov ebx, dword ptr [esp + 0x64] */
  ebx = R32((uint32_t)(esp + 0x64u));
/* 1011456: lea ecx, [ebx + 1] */
  ecx = (uint32_t)(ebx + 0x1u);
/* 1011459: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 101145a: lea edx, [esp + 0x34] */
  edx = (uint32_t)(esp + 0x34u);
/* 101145e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 101145f: call 0x1013ae8 */
  esp -= 4; W32(esp, 0x1011464u); SPILL(); f_1013ae8(); if (g_unwind) return; RELOAD();
/* 1011464: mov ecx, dword ptr [esp + 0x60] */
  ecx = R32((uint32_t)(esp + 0x60u));
/* 1011468: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 101146b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 101146e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 101146f: mov eax, dword ptr [esp + 0x64] */
  eax = R32((uint32_t)(esp + 0x64u));
/* 1011473: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1011474: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 1011477: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1011478: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 101147c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 101147d: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 1011481: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1011482: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1011483: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1011484: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1011485: call 0x10112a0 */
  esp -= 4; W32(esp, 0x101148au); SPILL(); f_10112a0(); if (g_unwind) return; RELOAD();
/* 101148a: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 101148d: cmp eax, -0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffff80u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1011490: jne 0x10114d8 */
  if (!zf) goto L_10114d8;
L_1011492: /* 1011492: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1011493: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1011494: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1011495: mov eax, 0xffffff80 */
  eax = 0xffffff80u;
/* 101149a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 101149b: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 101149e: ret  */
  esp += 4; SPILL(); return;
L_101149f: /* 101149f: mov ebx, dword ptr [esp + 0x64] */
  ebx = R32((uint32_t)(esp + 0x64u));
/* 10114a3: lea eax, [ebx + 1] */
  eax = (uint32_t)(ebx + 0x1u);
/* 10114a6: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 10114a9: lea eax, [eax*8 + 8] */
  eax = (uint32_t)(eax*8 + 0x8u);
/* 10114b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10114b1: call dword ptr [0x101400c] */
  esp -= 4; W32(esp, 0x10114b7u); SPILL(); f_4010eb(); if (g_unwind) return; /* MSVCR70!malloc */ RELOAD();
/* 10114b7: mov ecx, dword ptr [esi + 0x34] */
  ecx = R32((uint32_t)(esi + 0x34u));
/* 10114ba: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 10114bd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10114be: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* 10114c1: call dword ptr [0x101400c] */
  esp -= 4; W32(esp, 0x10114c7u); SPILL(); f_4010eb(); if (g_unwind) return; /* MSVCR70!malloc */ RELOAD();
/* 10114c7: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* 10114ca: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 10114cd: mov dword ptr [edx + ebx*8 + 8], ebp */
  W32((uint32_t)(edx + ebx*8 + 0x8u), ebp);
/* 10114d1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10114d4: mov dword ptr [edx + ebx*8 + 0xc], edi */
  W32((uint32_t)(edx + ebx*8 + 0xcu), edi);
L_10114d8: /* 10114d8: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 10114db: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 10114df: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 10114e3: mov dword ptr [eax + ebx*8], ecx */
  W32((uint32_t)(eax + ebx*8), ecx);
/* 10114e6: mov ecx, dword ptr [esp + 0x60] */
  ecx = R32((uint32_t)(esp + 0x60u));
/* 10114ea: mov dword ptr [eax + ebx*8 + 4], edx */
  W32((uint32_t)(eax + ebx*8 + 0x4u), edx);
/* 10114ee: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 10114f1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10114f2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10114f3: mov dword ptr [eax + ebx*4], ecx */
  W32((uint32_t)(eax + ebx*4), ecx);
/* 10114f6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10114f7: xor eax, eax */
  eax = 0;
/* 10114f9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10114fa: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10114fd: ret  */
  esp += 4; SPILL(); return;
}

void f_1011500(void) {
  LOAD_REGS();
L_1011500: /* 1011500: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1011503: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1011504: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1011505: mov ebp, dword ptr [esp + 0x44] */
  ebp = R32((uint32_t)(esp + 0x44u));
/* 1011509: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 101150b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 101150c: mov ebx, eax */
  ebx = eax;
/* 101150e: mov esi, ecx */
  esi = ecx;
/* 1011510: jne 0x1011550 */
  if (!zf) goto L_1011550;
L_1011512: /* 1011512: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1011513: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 1011517: push 0x2134 */
  { uint32_t v = 0x2134u; esp -= 4; W32(esp, v); }
/* 101151c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 101151d: call 0x1011040 */
  esp -= 4; W32(esp, 0x1011522u); SPILL(); f_1011040(); if (g_unwind) return; RELOAD();
/* 1011522: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1011525: cmp eax, -0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffff80u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1011528: jne 0x1011536 */
  if (!zf) goto L_1011536;
L_101152a: /* 101152a: cmp edx, -1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 101152d: jne 0x1011536 */
  if (!zf) goto L_1011536;
L_101152f: /* 101152f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1011530: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1011531: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1011532: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1011535: ret  */
  esp += 4; SPILL(); return;
L_1011536: /* 1011536: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1011538: jg 0x101154c */
  if ((!zf && sf == of)) goto L_101154c;
L_101153a: /* 101153a: jl 0x1011540 */
  if ((sf != of)) goto L_1011540;
L_101153c: /* 101153c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  cf = 0;
  }
/* 101153e: jae 0x101154c */
  if (!cf) goto L_101154c;
L_1011540: /* 1011540: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1011541: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1011542: mov eax, 0xffffff7c */
  eax = 0xffffff7cu;
/* 1011547: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1011548: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 101154b: ret  */
  esp += 4; SPILL(); return;
L_101154c: /* 101154c: lea ebp, [esp + 0xc] */
  ebp = (uint32_t)(esp + 0xcu);
L_1011550: /* 1011550: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1011551: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1011552: lea edi, [esi + 0x78] */
  edi = (uint32_t)(esi + 0x78u);
/* 1011555: call 0x1013ae8 */
  esp -= 4; W32(esp, 0x101155au); SPILL(); f_1013ae8(); if (g_unwind) return; RELOAD();
/* 101155a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 101155b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 101155c: call 0x1013afa */
  esp -= 4; W32(esp, 0x1011561u); SPILL(); f_1013afa(); if (g_unwind) return; RELOAD();
/* 1011561: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1011564: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1011566: je 0x1011570 */
  if (zf) goto L_1011570;
L_1011568: /* 1011568: mov ecx, dword ptr [esi + 0x1c8] */
  ecx = R32((uint32_t)(esi + 0x1c8u));
/* 101156e: mov dword ptr [ebx], ecx */
  W32((uint32_t)(ebx), ecx);
L_1011570: /* 1011570: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 1011574: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1011575: mov dword ptr [esi + 0x58], 3 */
  W32((uint32_t)(esi + 0x58u), 0x3u);
/* 101157c: call 0x1013b48 */
  esp -= 4; W32(esp, 0x1011581u); SPILL(); f_1013b48(); if (g_unwind) return; RELOAD();
/* 1011581: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 1011585: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1011586: call 0x1013b42 */
  esp -= 4; W32(esp, 0x101158bu); SPILL(); f_1013b42(); if (g_unwind) return; RELOAD();
/* 101158b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 101158e: xor ebx, ebx */
  ebx = 0;
L_1011590: /* 1011590: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1011591: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1011592: call 0x1013af4 */
  esp -= 4; W32(esp, 0x1011597u); SPILL(); f_1013af4(); if (g_unwind) return; RELOAD();
/* 1011597: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 101159a: cmp ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 101159d: jge 0x10115dd */
  if ((sf == of)) goto L_10115dd;
L_101159f: /* 101159f: nop  */
L_10115a0: /* 10115a0: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 10115a4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10115a5: lea edi, [esi + 0x78] */
  edi = (uint32_t)(esi + 0x78u);
/* 10115a8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10115a9: call 0x1013aee */
  esp -= 4; W32(esp, 0x10115aeu); SPILL(); f_1013aee(); if (g_unwind) return; RELOAD();
/* 10115ae: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10115b1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10115b3: je 0x10115e7 */
  if (zf) goto L_10115e7;
L_10115b5: /* 10115b5: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10115b8: je 0x1011606 */
  if (zf) goto L_1011606;
L_10115ba: /* 10115ba: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 10115be: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 10115c2: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* 10115c6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10115c7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10115c8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10115c9: call 0x1013b3c */
  esp -= 4; W32(esp, 0x10115ceu); SPILL(); f_1013b3c(); if (g_unwind) return; RELOAD();
/* 10115ce: mov edi, eax */
  edi = eax;
/* 10115d0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10115d3: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10115d5: jne 0x101160b */
  if (!zf) goto L_101160b;
L_10115d7: /* 10115d7: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 10115d8: cmp ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10115db: jl 0x10115a0 */
  if ((sf != of)) goto L_10115a0;
L_10115dd: /* 10115dd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10115de: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10115df: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10115e0: xor eax, eax */
  eax = 0;
/* 10115e2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10115e3: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10115e6: ret  */
  esp += 4; SPILL(); return;
L_10115e7: /* 10115e7: cmp ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10115ea: jge 0x10115dd */
  if ((sf == of)) goto L_10115dd;
L_10115ec: /* 10115ec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10115ee: push 0x2134 */
  { uint32_t v = 0x2134u; esp -= 4; W32(esp, v); }
/* 10115f3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10115f4: call 0x1011040 */
  esp -= 4; W32(esp, 0x10115f9u); SPILL(); f_1011040(); if (g_unwind) return; RELOAD();
/* 10115f9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10115fc: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10115fe: jl 0x1011606 */
  if ((sf != of)) goto L_1011606;
L_1011600: /* 1011600: jg 0x1011590 */
  if ((!zf && sf == of)) goto L_1011590;
L_1011602: /* 1011602: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  cf = 0;
  }
/* 1011604: jae 0x1011590 */
  if (!cf) goto L_1011590;
L_1011606: /* 1011606: mov edi, 0xffffff7b */
  edi = 0xffffff7bu;
L_101160b: /* 101160b: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 101160f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1011610: call 0x1013b36 */
  esp -= 4; W32(esp, 0x1011615u); SPILL(); f_1013b36(); if (g_unwind) return; RELOAD();
/* 1011615: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 1011619: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 101161a: call 0x1013b30 */
  esp -= 4; W32(esp, 0x101161fu); SPILL(); f_1013b30(); if (g_unwind) return; RELOAD();
/* 101161f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1011622: mov eax, edi */
  eax = edi;
/* 1011624: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1011625: mov dword ptr [esi + 0x58], 2 */
  W32((uint32_t)(esi + 0x58u), 0x2u);
/* 101162c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 101162d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 101162e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 101162f: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1011632: ret  */
  esp += 4; SPILL(); return;
}

void f_1011640(void) {
  LOAD_REGS();
L_1011640: /* 1011640: sub esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1011643: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1011644: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1011645: mov esi, eax */
  esi = eax;
/* 1011647: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* 101164a: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* 101164d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 101164e: mov edi, dword ptr [0x1014010] */
  edi = R32((uint32_t)(0x1014010u));
/* 1011654: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 1011657: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1011658: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1011659: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x101165bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 101165b: mov edx, dword ptr [esi + 0x34] */
  edx = R32((uint32_t)(esi + 0x34u));
/* 101165e: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 1011661: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 1011664: mov eax, dword ptr [esi + 0x4c] */
  eax = R32((uint32_t)(esi + 0x4cu));
/* 1011667: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1011668: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1011669: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x101166bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 101166b: mov ecx, dword ptr [esi + 0x34] */
  ecx = R32((uint32_t)(esi + 0x34u));
/* 101166e: mov edi, dword ptr [0x101400c] */
  edi = R32((uint32_t)(0x101400cu));
/* 1011674: shl ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 1011677: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1011678: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* 101167b: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x101167du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 101167d: mov edx, dword ptr [esi + 0x34] */
  edx = R32((uint32_t)(esi + 0x34u));
/* 1011680: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 1011683: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1011684: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* 1011687: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x1011689u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1011689: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* 101168c: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* 101168f: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1011692: xor ebp, ebp */
  ebp = 0;
/* 1011694: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1011696: jle 0x10119a0 */
  if ((zf || sf != of)) goto L_10119a0;
L_101169c: /* 101169c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 101169d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_10116a0: /* 10116a0: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10116a2: jne 0x10116dc */
  if (!zf) goto L_10116dc;
L_10116a4: /* 10116a4: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 10116a7: mov ebx, dword ptr [esp + 0x4c] */
  ebx = R32((uint32_t)(esp + 0x4cu));
/* 10116ab: mov edi, dword ptr [esp + 0x50] */
  edi = R32((uint32_t)(esp + 0x50u));
/* 10116af: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 10116b1: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 10116b4: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 10116b6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10116b8: je 0x1011755 */
  if (zf) goto L_1011755;
L_10116be: /* 10116be: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10116bf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10116c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10116c1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10116c2: call dword ptr [esi + 0x2c4] */
  { uint32_t t = R32((uint32_t)(esi + 0x2c4u)); esp -= 4; W32(esp, 0x10116c8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10116c8: lea ecx, [esi + 0x18] */
  ecx = (uint32_t)(esi + 0x18u);
/* 10116cb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10116cc: mov dword ptr [esi + 8], ebx */
  W32((uint32_t)(esi + 0x8u), ebx);
/* 10116cf: mov dword ptr [esi + 0xc], edi */
  W32((uint32_t)(esi + 0xcu), edi);
/* 10116d2: call 0x1013adc */
  esp -= 4; W32(esp, 0x10116d7u); SPILL(); f_1013adc(); if (g_unwind) return; RELOAD();
/* 10116d7: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10116da: jmp 0x1011755 */
  goto L_1011755;
L_10116dc: /* 10116dc: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* 10116df: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 10116e1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10116e3: mov edi, dword ptr [edx + ebp*8] */
  edi = R32((uint32_t)(edx + ebp*8));
/* 10116e6: mov ebx, dword ptr [edx + ebp*8 + 4] */
  ebx = R32((uint32_t)(edx + ebp*8 + 0x4u));
/* 10116ea: je 0x1011709 */
  if (zf) goto L_1011709;
L_10116ec: /* 10116ec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10116ee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10116ef: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10116f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10116f1: call dword ptr [esi + 0x2c4] */
  { uint32_t t = R32((uint32_t)(esi + 0x2c4u)); esp -= 4; W32(esp, 0x10116f7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10116f7: lea eax, [esi + 0x18] */
  eax = (uint32_t)(esi + 0x18u);
/* 10116fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10116fb: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* 10116fe: mov dword ptr [esi + 0xc], ebx */
  W32((uint32_t)(esi + 0xcu), ebx);
/* 1011701: call 0x1013adc */
  esp -= 4; W32(esp, 0x1011706u); SPILL(); f_1013adc(); if (g_unwind) return; RELOAD();
/* 1011706: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_1011709: /* 1011709: mov edi, dword ptr [esi + 0x4c] */
  edi = R32((uint32_t)(esi + 0x4cu));
/* 101170c: mov ebx, dword ptr [esi + 0x48] */
  ebx = R32((uint32_t)(esi + 0x48u));
/* 101170f: mov ecx, ebp */
  ecx = ebp;
/* 1011711: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 1011714: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1011716: mov edx, ebp */
  edx = ebp;
/* 1011718: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 101171a: shl edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 101171d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 101171e: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1011720: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1011721: xor eax, eax */
  eax = 0;
/* 1011723: mov ecx, esi */
  ecx = esi;
/* 1011725: call 0x1011500 */
  esp -= 4; W32(esp, 0x101172au); SPILL(); f_1011500(); if (g_unwind) return; RELOAD();
/* 101172a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 101172d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 101172f: jge 0x1011745 */
  if ((sf == of)) goto L_1011745;
L_1011731: /* 1011731: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 1011734: mov dword ptr [eax + ebp*8], 0xffffffff */
  W32((uint32_t)(eax + ebp*8), 0xffffffffu);
/* 101173b: mov dword ptr [eax + ebp*8 + 4], 0xffffffff */
  W32((uint32_t)(eax + ebp*8 + 0x4u), 0xffffffffu);
/* 1011743: jmp 0x1011755 */
  goto L_1011755;
L_1011745: /* 1011745: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 1011748: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 101174b: mov dword ptr [ecx + ebp*8], edx */
  W32((uint32_t)(ecx + ebp*8), edx);
/* 101174e: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 1011751: mov dword ptr [ecx + ebp*8 + 4], eax */
  W32((uint32_t)(ecx + ebp*8 + 0x4u), eax);
L_1011755: /* 1011755: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 1011758: mov ecx, dword ptr [eax + ebp*8] */
  ecx = R32((uint32_t)(eax + ebp*8));
/* 101175b: and ecx, dword ptr [eax + ebp*8 + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + ebp*8 + 0x4u)));
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 101175f: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1011762: je 0x10118c1 */
  if (zf) goto L_10118c1;
L_1011768: /* 1011768: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 101176b: xor eax, eax */
  eax = 0;
/* 101176d: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 1011771: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 1011775: mov eax, dword ptr [edx + ebp*4] */
  eax = R32((uint32_t)(edx + ebp*4));
/* 1011778: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1011779: lea ebx, [esi + 0x78] */
  ebx = (uint32_t)(esi + 0x78u);
/* 101177c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 101177d: or edi, 0xffffffff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 1011780: call 0x1013afa */
  esp -= 4; W32(esp, 0x1011785u); SPILL(); f_1013afa(); if (g_unwind) return; RELOAD();
/* 1011785: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1011787: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 101178b: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 101178d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 101178e: call 0x1011040 */
  esp -= 4; W32(esp, 0x1011793u); SPILL(); f_1011040(); if (g_unwind) return; RELOAD();
/* 1011793: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1011796: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1011798: jl 0x10118aa */
  if ((sf != of)) goto L_10118aa;
L_101179e: /* 101179e: jg 0x10117b0 */
  if ((!zf && sf == of)) goto L_10117b0;
L_10117a0: /* 10117a0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  cf = 0;
  }
/* 10117a2: jb 0x10118aa */
  if (cf) goto L_10118aa;
L_10117a8: /* 10117a8: jmp 0x10117b0 */
  goto L_10117b0;
L_10117b0: /* 10117b0: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 10117b4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10117b5: call 0x1013ae8 */
  esp -= 4; W32(esp, 0x10117bau); SPILL(); f_1013ae8(); if (g_unwind) return; RELOAD();
/* 10117ba: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 10117bd: mov edx, dword ptr [ecx + ebp*4] */
  edx = R32((uint32_t)(ecx + ebp*4));
/* 10117c0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10117c3: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10117c5: jne 0x1011890 */
  if (!zf) goto L_1011890;
L_10117cb: /* 10117cb: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 10117cf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10117d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10117d1: call 0x1013af4 */
  esp -= 4; W32(esp, 0x10117d6u); SPILL(); f_1013af4(); if (g_unwind) return; RELOAD();
/* 10117d6: lea eax, [esp + 0x30] */
  eax = (uint32_t)(esp + 0x30u);
/* 10117da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10117db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10117dc: call 0x1013aee */
  esp -= 4; W32(esp, 0x10117e1u); SPILL(); f_1013aee(); if (g_unwind) return; RELOAD();
/* 10117e1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10117e4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10117e6: je 0x1011838 */
  if (zf) goto L_1011838;
L_10117e8: /* 10117e8: jle 0x1011826 */
  if ((zf || sf != of)) goto L_1011826;
L_10117ea: /* 10117ea: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* 10117ee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10117ef: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* 10117f2: mov edx, ebp */
  edx = ebp;
/* 10117f4: shl edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 10117f7: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10117f9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10117fa: call 0x1013b4e */
  esp -= 4; W32(esp, 0x10117ffu); SPILL(); f_1013b4e(); if (g_unwind) return; RELOAD();
/* 10117ff: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1011802: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1011805: mov ecx, eax */
  ecx = eax;
/* 1011807: je 0x1011824 */
  if (zf) goto L_1011824;
L_1011809: /* 1011809: lea eax, [ecx + edi] */
  eax = (uint32_t)(ecx + edi);
/* 101180c: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 1011810: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 1011813: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 1011814: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edi = r;
  }
/* 1011816: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 101181a: adc eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  eax = r;
  }
/* 101181c: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 1011820: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
L_1011824: /* 1011824: mov edi, ecx */
  edi = ecx;
L_1011826: /* 1011826: lea eax, [esp + 0x28] */
  eax = (uint32_t)(esp + 0x28u);
/* 101182a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 101182b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 101182c: call 0x1013aee */
  esp -= 4; W32(esp, 0x1011831u); SPILL(); f_1013aee(); if (g_unwind) return; RELOAD();
/* 1011831: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1011834: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1011836: jne 0x10117e8 */
  if (!zf) goto L_10117e8;
L_1011838: /* 1011838: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 101183c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 101183d: call 0x1013b00 */
  esp -= 4; W32(esp, 0x1011842u); SPILL(); f_1013b00(); if (g_unwind) return; RELOAD();
/* 1011842: and eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 1011844: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1011847: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 101184a: jne 0x101186f */
  if (!zf) goto L_101186f;
L_101184c: /* 101184c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 101184d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 101184e: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* 1011852: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1011853: call 0x1011040 */
  esp -= 4; W32(esp, 0x1011858u); SPILL(); f_1011040(); if (g_unwind) return; RELOAD();
/* 1011858: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 101185b: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 101185d: jg 0x10117b0 */
  if ((!zf && sf == of)) goto L_10117b0;
L_1011863: /* 1011863: jl 0x1011890 */
  if ((sf != of)) goto L_1011890;
L_1011865: /* 1011865: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  cf = 0;
  }
/* 1011867: jae 0x10117b0 */
  if (!cf) goto L_10117b0;
L_101186d: /* 101186d: jmp 0x1011890 */
  goto L_1011890;
L_101186f: /* 101186f: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 1011873: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1011874: call 0x1013b00 */
  esp -= 4; W32(esp, 0x1011879u); SPILL(); f_1013b00(); if (g_unwind) return; RELOAD();
/* 1011879: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 101187d: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 1011881: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1011884: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  eax = r;
  }
/* 1011886: sbb edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edx = r;
  }
/* 1011888: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 101188c: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
L_1011890: /* 1011890: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 1011894: xor eax, eax */
  eax = 0;
/* 1011896: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1011898: jg 0x10118aa */
  if ((!zf && sf == of)) goto L_10118aa;
L_101189a: /* 101189a: jl 0x10118a2 */
  if ((sf != of)) goto L_10118a2;
L_101189c: /* 101189c: cmp dword ptr [esp + 0x10], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10118a0: jae 0x10118aa */
  if (!cf) goto L_10118aa;
L_10118a2: /* 10118a2: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 10118a6: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
L_10118aa: /* 10118aa: mov edx, dword ptr [esi + 0x44] */
  edx = R32((uint32_t)(esi + 0x44u));
/* 10118ad: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 10118b1: mov ecx, ebp */
  ecx = ebp;
/* 10118b3: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 10118b6: mov dword ptr [ecx + edx], eax */
  W32((uint32_t)(ecx + edx), eax);
/* 10118b9: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 10118bd: mov dword ptr [ecx + edx + 4], eax */
  W32((uint32_t)(ecx + edx + 0x4u), eax);
L_10118c1: /* 10118c1: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 10118c4: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 10118c6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10118c8: mov edi, dword ptr [ecx + ebp*8 + 8] */
  edi = R32((uint32_t)(ecx + ebp*8 + 0x8u));
/* 10118cc: mov ebx, dword ptr [ecx + ebp*8 + 0xc] */
  ebx = R32((uint32_t)(ecx + ebp*8 + 0xcu));
/* 10118d0: je 0x10118ef */
  if (zf) goto L_10118ef;
L_10118d2: /* 10118d2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10118d4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10118d5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10118d6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10118d7: call dword ptr [esi + 0x2c4] */
  { uint32_t t = R32((uint32_t)(esi + 0x2c4u)); esp -= 4; W32(esp, 0x10118ddu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10118dd: lea edx, [esi + 0x18] */
  edx = (uint32_t)(esi + 0x18u);
/* 10118e0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10118e1: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* 10118e4: mov dword ptr [esi + 0xc], ebx */
  W32((uint32_t)(esi + 0xcu), ebx);
/* 10118e7: call 0x1013adc */
  esp -= 4; W32(esp, 0x10118ecu); SPILL(); f_1013adc(); if (g_unwind) return; RELOAD();
/* 10118ec: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_10118ef: /* 10118ef: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 10118f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10118f4: mov eax, esi */
  eax = esi;
/* 10118f6: call 0x1011150 */
  esp -= 4; W32(esp, 0x10118fbu); SPILL(); f_1011150(); if (g_unwind) return; RELOAD();
/* 10118fb: mov edi, edx */
  edi = edx;
/* 10118fd: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1011900: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1011902: mov ebx, eax */
  ebx = eax;
/* 1011904: jl 0x1011947 */
  if ((sf != of)) goto L_1011947;
L_1011906: /* 1011906: jg 0x1011910 */
  if ((!zf && sf == of)) goto L_1011910;
L_1011908: /* 1011908: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  cf = 0;
  }
/* 101190a: jb 0x1011947 */
  if (cf) goto L_1011947;
L_101190c: /* 101190c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_1011910: /* 1011910: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 1011914: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1011915: call 0x1013b00 */
  esp -= 4; W32(esp, 0x101191au); SPILL(); f_1013b00(); if (g_unwind) return; RELOAD();
/* 101191a: and eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 101191c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 101191f: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1011922: jne 0x101196c */
  if (!zf) goto L_101196c;
L_1011924: /* 1011924: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 1011928: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1011929: mov eax, esi */
  eax = esi;
/* 101192b: mov dword ptr [esi + 8], ebx */
  W32((uint32_t)(esi + 0x8u), ebx);
/* 101192e: mov dword ptr [esi + 0xc], edi */
  W32((uint32_t)(esi + 0xcu), edi);
/* 1011931: call 0x1011150 */
  esp -= 4; W32(esp, 0x1011936u); SPILL(); f_1011150(); if (g_unwind) return; RELOAD();
/* 1011936: mov edi, edx */
  edi = edx;
/* 1011938: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 101193b: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 101193d: mov ebx, eax */
  ebx = eax;
/* 101193f: jg 0x1011910 */
  if ((!zf && sf == of)) goto L_1011910;
L_1011941: /* 1011941: jl 0x1011947 */
  if ((sf != of)) goto L_1011947;
L_1011943: /* 1011943: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  cf = 0;
  }
/* 1011945: jae 0x1011910 */
  if (!cf) goto L_1011910;
L_1011947: /* 1011947: mov edx, dword ptr [esi + 0x48] */
  edx = R32((uint32_t)(esi + 0x48u));
/* 101194a: mov eax, ebp */
  eax = ebp;
/* 101194c: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 101194f: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1011951: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1011952: call 0x1013b36 */
  esp -= 4; W32(esp, 0x1011957u); SPILL(); f_1013b36(); if (g_unwind) return; RELOAD();
/* 1011957: mov edi, dword ptr [esi + 0x4c] */
  edi = R32((uint32_t)(esi + 0x4cu));
/* 101195a: mov ecx, ebp */
  ecx = ebp;
/* 101195c: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 101195f: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1011961: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1011962: call 0x1013b30 */
  esp -= 4; W32(esp, 0x1011967u); SPILL(); f_1013b30(); if (g_unwind) return; RELOAD();
/* 1011967: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 101196a: jmp 0x1011993 */
  goto L_1011993;
L_101196c: /* 101196c: mov eax, dword ptr [esi + 0x44] */
  eax = R32((uint32_t)(esi + 0x44u));
/* 101196f: mov edx, ebp */
  edx = ebp;
/* 1011971: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 1011975: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 1011978: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1011979: lea edi, [edx + eax] */
  edi = (uint32_t)(edx + eax);
/* 101197c: call 0x1013b00 */
  esp -= 4; W32(esp, 0x1011981u); SPILL(); f_1013b00(); if (g_unwind) return; RELOAD();
/* 1011981: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 1011983: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 1011986: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1011989: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  eax = r;
  }
/* 101198b: sbb edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edx = r;
  }
/* 101198d: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 1011990: mov dword ptr [edi + 0xc], edx */
  W32((uint32_t)(edi + 0xcu), edx);
L_1011993: /* 1011993: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* 1011996: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 1011997: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1011999: jl 0x10116a0 */
  if ((sf != of)) goto L_10116a0;
L_101199f: /* 101199f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_10119a0: /* 10119a0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10119a1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10119a2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10119a3: add esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10119a6: ret  */
  esp += 4; SPILL(); return;
}

void f_10117aa(void) {
  LOAD_REGS();
  goto L_10117aa;
L_10116a0: /* 10116a0: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10116a2: jne 0x10116dc */
  if (!zf) goto L_10116dc;
L_10116a4: /* 10116a4: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 10116a7: mov ebx, dword ptr [esp + 0x4c] */
  ebx = R32((uint32_t)(esp + 0x4cu));
/* 10116ab: mov edi, dword ptr [esp + 0x50] */
  edi = R32((uint32_t)(esp + 0x50u));
/* 10116af: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 10116b1: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 10116b4: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 10116b6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10116b8: je 0x1011755 */
  if (zf) goto L_1011755;
L_10116be: /* 10116be: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10116bf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10116c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10116c1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10116c2: call dword ptr [esi + 0x2c4] */
  { uint32_t t = R32((uint32_t)(esi + 0x2c4u)); esp -= 4; W32(esp, 0x10116c8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10116c8: lea ecx, [esi + 0x18] */
  ecx = (uint32_t)(esi + 0x18u);
/* 10116cb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10116cc: mov dword ptr [esi + 8], ebx */
  W32((uint32_t)(esi + 0x8u), ebx);
/* 10116cf: mov dword ptr [esi + 0xc], edi */
  W32((uint32_t)(esi + 0xcu), edi);
/* 10116d2: call 0x1013adc */
  esp -= 4; W32(esp, 0x10116d7u); SPILL(); f_1013adc(); if (g_unwind) return; RELOAD();
/* 10116d7: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10116da: jmp 0x1011755 */
  goto L_1011755;
L_10116dc: /* 10116dc: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* 10116df: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 10116e1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10116e3: mov edi, dword ptr [edx + ebp*8] */
  edi = R32((uint32_t)(edx + ebp*8));
/* 10116e6: mov ebx, dword ptr [edx + ebp*8 + 4] */
  ebx = R32((uint32_t)(edx + ebp*8 + 0x4u));
/* 10116ea: je 0x1011709 */
  if (zf) goto L_1011709;
L_10116ec: /* 10116ec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10116ee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10116ef: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10116f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10116f1: call dword ptr [esi + 0x2c4] */
  { uint32_t t = R32((uint32_t)(esi + 0x2c4u)); esp -= 4; W32(esp, 0x10116f7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10116f7: lea eax, [esi + 0x18] */
  eax = (uint32_t)(esi + 0x18u);
/* 10116fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10116fb: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* 10116fe: mov dword ptr [esi + 0xc], ebx */
  W32((uint32_t)(esi + 0xcu), ebx);
/* 1011701: call 0x1013adc */
  esp -= 4; W32(esp, 0x1011706u); SPILL(); f_1013adc(); if (g_unwind) return; RELOAD();
/* 1011706: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_1011709: /* 1011709: mov edi, dword ptr [esi + 0x4c] */
  edi = R32((uint32_t)(esi + 0x4cu));
/* 101170c: mov ebx, dword ptr [esi + 0x48] */
  ebx = R32((uint32_t)(esi + 0x48u));
/* 101170f: mov ecx, ebp */
  ecx = ebp;
/* 1011711: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 1011714: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1011716: mov edx, ebp */
  edx = ebp;
/* 1011718: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 101171a: shl edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 101171d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 101171e: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1011720: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1011721: xor eax, eax */
  eax = 0;
/* 1011723: mov ecx, esi */
  ecx = esi;
/* 1011725: call 0x1011500 */
  esp -= 4; W32(esp, 0x101172au); SPILL(); f_1011500(); if (g_unwind) return; RELOAD();
/* 101172a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 101172d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 101172f: jge 0x1011745 */
  if ((sf == of)) goto L_1011745;
L_1011731: /* 1011731: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 1011734: mov dword ptr [eax + ebp*8], 0xffffffff */
  W32((uint32_t)(eax + ebp*8), 0xffffffffu);
/* 101173b: mov dword ptr [eax + ebp*8 + 4], 0xffffffff */
  W32((uint32_t)(eax + ebp*8 + 0x4u), 0xffffffffu);
/* 1011743: jmp 0x1011755 */
  goto L_1011755;
L_1011745: /* 1011745: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 1011748: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 101174b: mov dword ptr [ecx + ebp*8], edx */
  W32((uint32_t)(ecx + ebp*8), edx);
/* 101174e: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 1011751: mov dword ptr [ecx + ebp*8 + 4], eax */
  W32((uint32_t)(ecx + ebp*8 + 0x4u), eax);
L_1011755: /* 1011755: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 1011758: mov ecx, dword ptr [eax + ebp*8] */
  ecx = R32((uint32_t)(eax + ebp*8));
/* 101175b: and ecx, dword ptr [eax + ebp*8 + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + ebp*8 + 0x4u)));
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 101175f: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1011762: je 0x10118c1 */
  if (zf) goto L_10118c1;
L_1011768: /* 1011768: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 101176b: xor eax, eax */
  eax = 0;
/* 101176d: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 1011771: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 1011775: mov eax, dword ptr [edx + ebp*4] */
  eax = R32((uint32_t)(edx + ebp*4));
/* 1011778: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1011779: lea ebx, [esi + 0x78] */
  ebx = (uint32_t)(esi + 0x78u);
/* 101177c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 101177d: or edi, 0xffffffff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 1011780: call 0x1013afa */
  esp -= 4; W32(esp, 0x1011785u); SPILL(); f_1013afa(); if (g_unwind) return; RELOAD();
/* 1011785: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1011787: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 101178b: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 101178d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 101178e: call 0x1011040 */
  esp -= 4; W32(esp, 0x1011793u); SPILL(); f_1011040(); if (g_unwind) return; RELOAD();
/* 1011793: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1011796: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1011798: jl 0x10118aa */
  if ((sf != of)) goto L_10118aa;
L_101179e: /* 101179e: jg 0x10117b0 */
  if ((!zf && sf == of)) goto L_10117b0;
L_10117a0: /* 10117a0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  cf = 0;
  }
/* 10117a2: jb 0x10118aa */
  if (cf) goto L_10118aa;
L_10117a8: /* 10117a8: jmp 0x10117b0 */
  goto L_10117b0;
L_10117aa: /* 10117aa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_10117b0: /* 10117b0: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 10117b4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10117b5: call 0x1013ae8 */
  esp -= 4; W32(esp, 0x10117bau); SPILL(); f_1013ae8(); if (g_unwind) return; RELOAD();
/* 10117ba: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 10117bd: mov edx, dword ptr [ecx + ebp*4] */
  edx = R32((uint32_t)(ecx + ebp*4));
/* 10117c0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10117c3: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10117c5: jne 0x1011890 */
  if (!zf) goto L_1011890;
L_10117cb: /* 10117cb: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 10117cf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10117d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10117d1: call 0x1013af4 */
  esp -= 4; W32(esp, 0x10117d6u); SPILL(); f_1013af4(); if (g_unwind) return; RELOAD();
/* 10117d6: lea eax, [esp + 0x30] */
  eax = (uint32_t)(esp + 0x30u);
/* 10117da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10117db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10117dc: call 0x1013aee */
  esp -= 4; W32(esp, 0x10117e1u); SPILL(); f_1013aee(); if (g_unwind) return; RELOAD();
/* 10117e1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10117e4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10117e6: je 0x1011838 */
  if (zf) goto L_1011838;
L_10117e8: /* 10117e8: jle 0x1011826 */
  if ((zf || sf != of)) goto L_1011826;
L_10117ea: /* 10117ea: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* 10117ee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10117ef: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* 10117f2: mov edx, ebp */
  edx = ebp;
/* 10117f4: shl edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 10117f7: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10117f9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10117fa: call 0x1013b4e */
  esp -= 4; W32(esp, 0x10117ffu); SPILL(); f_1013b4e(); if (g_unwind) return; RELOAD();
/* 10117ff: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1011802: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1011805: mov ecx, eax */
  ecx = eax;
/* 1011807: je 0x1011824 */
  if (zf) goto L_1011824;
L_1011809: /* 1011809: lea eax, [ecx + edi] */
  eax = (uint32_t)(ecx + edi);
/* 101180c: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 1011810: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 1011813: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 1011814: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edi = r;
  }
/* 1011816: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 101181a: adc eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  eax = r;
  }
/* 101181c: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 1011820: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
L_1011824: /* 1011824: mov edi, ecx */
  edi = ecx;
L_1011826: /* 1011826: lea eax, [esp + 0x28] */
  eax = (uint32_t)(esp + 0x28u);
/* 101182a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 101182b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 101182c: call 0x1013aee */
  esp -= 4; W32(esp, 0x1011831u); SPILL(); f_1013aee(); if (g_unwind) return; RELOAD();
/* 1011831: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1011834: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1011836: jne 0x10117e8 */
  if (!zf) goto L_10117e8;
L_1011838: /* 1011838: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 101183c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 101183d: call 0x1013b00 */
  esp -= 4; W32(esp, 0x1011842u); SPILL(); f_1013b00(); if (g_unwind) return; RELOAD();
/* 1011842: and eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 1011844: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1011847: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 101184a: jne 0x101186f */
  if (!zf) goto L_101186f;
L_101184c: /* 101184c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 101184d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 101184e: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* 1011852: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1011853: call 0x1011040 */
  esp -= 4; W32(esp, 0x1011858u); SPILL(); f_1011040(); if (g_unwind) return; RELOAD();
/* 1011858: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 101185b: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 101185d: jg 0x10117b0 */
  if ((!zf && sf == of)) goto L_10117b0;
L_1011863: /* 1011863: jl 0x1011890 */
  if ((sf != of)) goto L_1011890;
L_1011865: /* 1011865: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  cf = 0;
  }
/* 1011867: jae 0x10117b0 */
  if (!cf) goto L_10117b0;
L_101186d: /* 101186d: jmp 0x1011890 */
  goto L_1011890;
L_101186f: /* 101186f: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 1011873: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1011874: call 0x1013b00 */
  esp -= 4; W32(esp, 0x1011879u); SPILL(); f_1013b00(); if (g_unwind) return; RELOAD();
/* 1011879: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 101187d: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 1011881: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1011884: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  eax = r;
  }
/* 1011886: sbb edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edx = r;
  }
/* 1011888: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 101188c: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
L_1011890: /* 1011890: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 1011894: xor eax, eax */
  eax = 0;
/* 1011896: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1011898: jg 0x10118aa */
  if ((!zf && sf == of)) goto L_10118aa;
L_101189a: /* 101189a: jl 0x10118a2 */
  if ((sf != of)) goto L_10118a2;
L_101189c: /* 101189c: cmp dword ptr [esp + 0x10], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10118a0: jae 0x10118aa */
  if (!cf) goto L_10118aa;
L_10118a2: /* 10118a2: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 10118a6: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
L_10118aa: /* 10118aa: mov edx, dword ptr [esi + 0x44] */
  edx = R32((uint32_t)(esi + 0x44u));
/* 10118ad: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 10118b1: mov ecx, ebp */
  ecx = ebp;
/* 10118b3: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 10118b6: mov dword ptr [ecx + edx], eax */
  W32((uint32_t)(ecx + edx), eax);
/* 10118b9: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 10118bd: mov dword ptr [ecx + edx + 4], eax */
  W32((uint32_t)(ecx + edx + 0x4u), eax);
L_10118c1: /* 10118c1: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 10118c4: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 10118c6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10118c8: mov edi, dword ptr [ecx + ebp*8 + 8] */
  edi = R32((uint32_t)(ecx + ebp*8 + 0x8u));
/* 10118cc: mov ebx, dword ptr [ecx + ebp*8 + 0xc] */
  ebx = R32((uint32_t)(ecx + ebp*8 + 0xcu));
/* 10118d0: je 0x10118ef */
  if (zf) goto L_10118ef;
L_10118d2: /* 10118d2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10118d4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10118d5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10118d6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10118d7: call dword ptr [esi + 0x2c4] */
  { uint32_t t = R32((uint32_t)(esi + 0x2c4u)); esp -= 4; W32(esp, 0x10118ddu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10118dd: lea edx, [esi + 0x18] */
  edx = (uint32_t)(esi + 0x18u);
/* 10118e0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10118e1: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* 10118e4: mov dword ptr [esi + 0xc], ebx */
  W32((uint32_t)(esi + 0xcu), ebx);
/* 10118e7: call 0x1013adc */
  esp -= 4; W32(esp, 0x10118ecu); SPILL(); f_1013adc(); if (g_unwind) return; RELOAD();
/* 10118ec: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_10118ef: /* 10118ef: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 10118f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10118f4: mov eax, esi */
  eax = esi;
/* 10118f6: call 0x1011150 */
  esp -= 4; W32(esp, 0x10118fbu); SPILL(); f_1011150(); if (g_unwind) return; RELOAD();
/* 10118fb: mov edi, edx */
  edi = edx;
/* 10118fd: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1011900: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1011902: mov ebx, eax */
  ebx = eax;
/* 1011904: jl 0x1011947 */
  if ((sf != of)) goto L_1011947;
L_1011906: /* 1011906: jg 0x1011910 */
  if ((!zf && sf == of)) goto L_1011910;
L_1011908: /* 1011908: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  cf = 0;
  }
/* 101190a: jb 0x1011947 */
  if (cf) goto L_1011947;
L_101190c: /* 101190c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_1011910: /* 1011910: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 1011914: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1011915: call 0x1013b00 */
  esp -= 4; W32(esp, 0x101191au); SPILL(); f_1013b00(); if (g_unwind) return; RELOAD();
/* 101191a: and eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 101191c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 101191f: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1011922: jne 0x101196c */
  if (!zf) goto L_101196c;
L_1011924: /* 1011924: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 1011928: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1011929: mov eax, esi */
  eax = esi;
/* 101192b: mov dword ptr [esi + 8], ebx */
  W32((uint32_t)(esi + 0x8u), ebx);
/* 101192e: mov dword ptr [esi + 0xc], edi */
  W32((uint32_t)(esi + 0xcu), edi);
/* 1011931: call 0x1011150 */
  esp -= 4; W32(esp, 0x1011936u); SPILL(); f_1011150(); if (g_unwind) return; RELOAD();
/* 1011936: mov edi, edx */
  edi = edx;
/* 1011938: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 101193b: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 101193d: mov ebx, eax */
  ebx = eax;
/* 101193f: jg 0x1011910 */
  if ((!zf && sf == of)) goto L_1011910;
L_1011941: /* 1011941: jl 0x1011947 */
  if ((sf != of)) goto L_1011947;
L_1011943: /* 1011943: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  cf = 0;
  }
/* 1011945: jae 0x1011910 */
  if (!cf) goto L_1011910;
L_1011947: /* 1011947: mov edx, dword ptr [esi + 0x48] */
  edx = R32((uint32_t)(esi + 0x48u));
/* 101194a: mov eax, ebp */
  eax = ebp;
/* 101194c: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 101194f: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1011951: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1011952: call 0x1013b36 */
  esp -= 4; W32(esp, 0x1011957u); SPILL(); f_1013b36(); if (g_unwind) return; RELOAD();
/* 1011957: mov edi, dword ptr [esi + 0x4c] */
  edi = R32((uint32_t)(esi + 0x4cu));
/* 101195a: mov ecx, ebp */
  ecx = ebp;
/* 101195c: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 101195f: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1011961: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1011962: call 0x1013b30 */
  esp -= 4; W32(esp, 0x1011967u); SPILL(); f_1013b30(); if (g_unwind) return; RELOAD();
/* 1011967: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 101196a: jmp 0x1011993 */
  goto L_1011993;
L_101196c: /* 101196c: mov eax, dword ptr [esi + 0x44] */
  eax = R32((uint32_t)(esi + 0x44u));
/* 101196f: mov edx, ebp */
  edx = ebp;
/* 1011971: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 1011975: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 1011978: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1011979: lea edi, [edx + eax] */
  edi = (uint32_t)(edx + eax);
/* 101197c: call 0x1013b00 */
  esp -= 4; W32(esp, 0x1011981u); SPILL(); f_1013b00(); if (g_unwind) return; RELOAD();
/* 1011981: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 1011983: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 1011986: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1011989: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  eax = r;
  }
/* 101198b: sbb edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edx = r;
  }
/* 101198d: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 1011990: mov dword ptr [edi + 0xc], edx */
  W32((uint32_t)(edi + 0xcu), edx);
L_1011993: /* 1011993: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* 1011996: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 1011997: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1011999: jl 0x10116a0 */
  if ((sf != of)) goto L_10116a0;
L_101199f: /* 101199f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10119a0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10119a1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10119a2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10119a3: add esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10119a6: ret  */
  esp += 4; SPILL(); return;
}

void f_10119b0(void) {
  LOAD_REGS();
L_10119b0: /* 10119b0: cmp dword ptr [esi + 0x58], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x58u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10119b4: jne 0x10119f7 */
  if (!zf) goto L_10119f7;
L_10119b6: /* 10119b6: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 10119b9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10119bb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10119bc: lea edi, [esi + 0x1e0] */
  edi = (uint32_t)(esi + 0x1e0u);
/* 10119c2: je 0x10119d2 */
  if (zf) goto L_10119d2;
L_10119c4: /* 10119c4: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* 10119c7: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* 10119ca: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 10119cd: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10119cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10119d0: jmp 0x10119d6 */
  goto L_10119d6;
L_10119d2: /* 10119d2: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* 10119d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
L_10119d6: /* 10119d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10119d7: call 0x1013b5a */
  esp -= 4; W32(esp, 0x10119dcu); SPILL(); f_1013b5a(); if (g_unwind) return; RELOAD();
/* 10119dc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10119df: lea edx, [esi + 0x250] */
  edx = (uint32_t)(esi + 0x250u);
/* 10119e5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10119e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10119e7: call 0x1013b54 */
  esp -= 4; W32(esp, 0x10119ecu); SPILL(); f_1013b54(); if (g_unwind) return; RELOAD();
/* 10119ec: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10119ef: mov dword ptr [esi + 0x58], 4 */
  W32((uint32_t)(esi + 0x58u), 0x4u);
/* 10119f6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_10119f7: /* 10119f7: ret  */
  esp += 4; SPILL(); return;
}

void f_1011a00(void) {
  LOAD_REGS();
L_1011a00: /* 1011a00: lea eax, [esi + 0x1e0] */
  eax = (uint32_t)(esi + 0x1e0u);
/* 1011a06: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1011a07: call 0x1013b66 */
  esp -= 4; W32(esp, 0x1011a0cu); SPILL(); f_1013b66(); if (g_unwind) return; RELOAD();
/* 1011a0c: lea ecx, [esi + 0x250] */
  ecx = (uint32_t)(esi + 0x250u);
/* 1011a12: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1011a13: call 0x1013b60 */
  esp -= 4; W32(esp, 0x1011a18u); SPILL(); f_1013b60(); if (g_unwind) return; RELOAD();
/* 1011a18: xor eax, eax */
  eax = 0;
/* 1011a1a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1011a1d: mov dword ptr [esi + 0x58], 2 */
  W32((uint32_t)(esi + 0x58u), 0x2u);
/* 1011a24: mov dword ptr [esi + 0x68], eax */
  W32((uint32_t)(esi + 0x68u), eax);
/* 1011a27: mov dword ptr [esi + 0x6c], eax */
  W32((uint32_t)(esi + 0x6cu), eax);
/* 1011a2a: mov dword ptr [esi + 0x70], eax */
  W32((uint32_t)(esi + 0x70u), eax);
/* 1011a2d: mov dword ptr [esi + 0x74], eax */
  W32((uint32_t)(esi + 0x74u), eax);
/* 1011a30: ret  */
  esp += 4; SPILL(); return;
}

void f_1011a40(void) {
  LOAD_REGS();
L_1011a40: /* 1011a40: sub esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1011a43: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1011a44: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1011a45: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1011a46: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1011a47: mov esi, eax */
  esi = eax;
/* 1011a49: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_1011a50: /* 1011a50: cmp dword ptr [esi + 0x58], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x58u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1011a54: jne 0x1011ac4 */
  if (!zf) goto L_1011ac4;
L_1011a56: /* 1011a56: mov edi, dword ptr [esp + 0x4c] */
  edi = R32((uint32_t)(esp + 0x4cu));
/* 1011a5a: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1011a5c: jne 0x1011a62 */
  if (!zf) goto L_1011a62;
L_1011a5e: /* 1011a5e: lea edi, [esp + 0x28] */
  edi = (uint32_t)(esp + 0x28u);
L_1011a62: /* 1011a62: lea eax, [esi + 0x78] */
  eax = (uint32_t)(esi + 0x78u);
/* 1011a65: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1011a66: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1011a67: call 0x1013aee */
  esp -= 4; W32(esp, 0x1011a6cu); SPILL(); f_1013aee(); if (g_unwind) return; RELOAD();
/* 1011a6c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1011a6f: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1011a72: mov dword ptr [esp + 0x4c], 0 */
  W32((uint32_t)(esp + 0x4cu), 0x0u);
/* 1011a7a: je 0x1011c3e */
  if (zf) goto L_1011c3e;
L_1011a80: /* 1011a80: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1011a82: jle 0x1011ac4 */
  if ((zf || sf != of)) goto L_1011ac4;
L_1011a84: /* 1011a84: mov ebx, dword ptr [edi + 0x10] */
  ebx = R32((uint32_t)(edi + 0x10u));
/* 1011a87: mov ebp, dword ptr [edi + 0x14] */
  ebp = R32((uint32_t)(edi + 0x14u));
/* 1011a8a: lea eax, [esi + 0x250] */
  eax = (uint32_t)(esi + 0x250u);
/* 1011a90: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1011a91: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1011a92: call 0x1013b78 */
  esp -= 4; W32(esp, 0x1011a97u); SPILL(); f_1013b78(); if (g_unwind) return; RELOAD();
/* 1011a97: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1011a9a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1011a9c: jne 0x1011a56 */
  if (!zf) goto L_1011a56;
L_1011a9e: /* 1011a9e: lea eax, [esi + 0x1e0] */
  eax = (uint32_t)(esi + 0x1e0u);
/* 1011aa4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1011aa6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1011aa7: call 0x1013b72 */
  esp -= 4; W32(esp, 0x1011aacu); SPILL(); f_1013b72(); if (g_unwind) return; RELOAD();
/* 1011aac: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1011aaf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1011ab1: je 0x1011c4b */
  if (zf) goto L_1011c4b;
L_1011ab7: /* 1011ab7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1011ab8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1011ab9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1011aba: mov eax, 0xffffff7f */
  eax = 0xffffff7fu;
/* 1011abf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1011ac0: add esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1011ac3: ret  */
  esp += 4; SPILL(); return;
L_1011ac4: /* 1011ac4: cmp dword ptr [esi + 0x58], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x58u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1011ac8: jl 0x1011b5b */
  if ((sf != of)) goto L_1011b5b;
L_1011ace: /* 1011ace: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 1011ad2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1011ad4: je 0x1011d2a */
  if (zf) goto L_1011d2a;
L_1011ada: /* 1011ada: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1011adc: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 1011ae0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1011ae2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1011ae3: call 0x1011040 */
  esp -= 4; W32(esp, 0x1011ae8u); SPILL(); f_1011040(); if (g_unwind) return; RELOAD();
/* 1011ae8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1011aeb: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1011aed: jl 0x1011d34 */
  if ((sf != of)) goto L_1011d34;
L_1011af3: /* 1011af3: jg 0x1011afd */
  if ((!zf && sf == of)) goto L_1011afd;
L_1011af5: /* 1011af5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  cf = 0;
  }
/* 1011af7: jb 0x1011d34 */
  if (cf) goto L_1011d34;
L_1011afd: /* 1011afd: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 1011b01: lea eax, [edx*8] */
  eax = (uint32_t)(edx*8);
/* 1011b08: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 1011b0c: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 1011b10: mov eax, dword ptr [esi + 0x58] */
  eax = R32((uint32_t)(esi + 0x58u));
/* 1011b13: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1011b16: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 1011b1a: fld qword ptr [esp + 0x10] */
  { double v = F64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 1011b1e: fadd qword ptr [esi + 0x68] */
  ST0 = ST0 + (F64((uint32_t)(esi + 0x68u)));
/* 1011b21: fstp qword ptr [esi + 0x68] */
  WF64((uint32_t)(esi + 0x68u), ST0); FPOP();
/* 1011b24: jne 0x1011b67 */
  if (!zf) goto L_1011b67;
L_1011b26: /* 1011b26: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 1011b2a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1011b2b: call 0x1013ae8 */
  esp -= 4; W32(esp, 0x1011b30u); SPILL(); f_1013ae8(); if (g_unwind) return; RELOAD();
/* 1011b30: mov ecx, dword ptr [esi + 0x5c] */
  ecx = R32((uint32_t)(esi + 0x5cu));
/* 1011b33: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1011b36: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1011b38: je 0x1011b5b */
  if (zf) goto L_1011b5b;
L_1011b3a: /* 1011b3a: call 0x1011a00 */
  esp -= 4; W32(esp, 0x1011b3fu); SPILL(); f_1011a00(); if (g_unwind) return; RELOAD();
/* 1011b3f: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 1011b42: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1011b44: jne 0x1011b5b */
  if (!zf) goto L_1011b5b;
L_1011b46: /* 1011b46: mov edx, dword ptr [esi + 0x48] */
  edx = R32((uint32_t)(esi + 0x48u));
/* 1011b49: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1011b4a: call 0x1013b36 */
  esp -= 4; W32(esp, 0x1011b4fu); SPILL(); f_1013b36(); if (g_unwind) return; RELOAD();
/* 1011b4f: mov eax, dword ptr [esi + 0x4c] */
  eax = R32((uint32_t)(esi + 0x4cu));
/* 1011b52: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1011b53: call 0x1013b30 */
  esp -= 4; W32(esp, 0x1011b58u); SPILL(); f_1013b30(); if (g_unwind) return; RELOAD();
/* 1011b58: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_1011b5b: /* 1011b5b: mov eax, dword ptr [esi + 0x58] */
  eax = R32((uint32_t)(esi + 0x58u));
/* 1011b5e: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1011b61: je 0x1011c28 */
  if (zf) goto L_1011c28;
L_1011b67: /* 1011b67: mov ebx, 3 */
  ebx = 0x3u;
/* 1011b6c: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1011b6e: jge 0x1011be4 */
  if ((sf == of)) goto L_1011be4;
L_1011b70: /* 1011b70: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 1011b73: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1011b75: je 0x1011bbf */
  if (zf) goto L_1011bbf;
L_1011b77: /* 1011b77: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 1011b7b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1011b7c: call 0x1013ae8 */
  esp -= 4; W32(esp, 0x1011b81u); SPILL(); f_1013ae8(); if (g_unwind) return; RELOAD();
/* 1011b81: mov edi, dword ptr [esi + 0x34] */
  edi = R32((uint32_t)(esi + 0x34u));
/* 1011b84: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1011b87: xor ecx, ecx */
  ecx = 0;
/* 1011b89: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1011b8b: mov dword ptr [esi + 0x5c], eax */
  W32((uint32_t)(esi + 0x5cu), eax);
/* 1011b8e: jle 0x1011ba2 */
  if ((zf || sf != of)) goto L_1011ba2;
L_1011b90: /* 1011b90: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
L_1011b93: /* 1011b93: cmp dword ptr [edx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1011b95: je 0x1011ba2 */
  if (zf) goto L_1011ba2;
L_1011b97: /* 1011b97: mov ebp, dword ptr [esi + 0x34] */
  ebp = R32((uint32_t)(esi + 0x34u));
/* 1011b9a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 1011b9b: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1011b9e: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1011ba0: jl 0x1011b93 */
  if ((sf != of)) goto L_1011b93;
L_1011ba2: /* 1011ba2: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1011ba4: je 0x1011d41 */
  if (zf) goto L_1011d41;
L_1011baa: /* 1011baa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1011bab: lea edx, [esi + 0x78] */
  edx = (uint32_t)(esi + 0x78u);
/* 1011bae: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1011baf: mov dword ptr [esi + 0x60], ecx */
  W32((uint32_t)(esi + 0x60u), ecx);
/* 1011bb2: call 0x1013afa */
  esp -= 4; W32(esp, 0x1011bb7u); SPILL(); f_1013afa(); if (g_unwind) return; RELOAD();
/* 1011bb7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1011bba: mov dword ptr [esi + 0x58], ebx */
  W32((uint32_t)(esi + 0x58u), ebx);
/* 1011bbd: jmp 0x1011be9 */
  goto L_1011be9;
L_1011bbf: /* 1011bbf: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* 1011bc2: mov edx, dword ptr [esi + 0x48] */
  edx = R32((uint32_t)(esi + 0x48u));
/* 1011bc5: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 1011bc9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1011bca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1011bcb: lea eax, [esi + 0x5c] */
  eax = (uint32_t)(esi + 0x5cu);
/* 1011bce: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1011bcf: mov ecx, esi */
  ecx = esi;
/* 1011bd1: call 0x1011500 */
  esp -= 4; W32(esp, 0x1011bd6u); SPILL(); f_1011500(); if (g_unwind) return; RELOAD();
/* 1011bd6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1011bd9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1011bdb: jne 0x1011d46 */
  if (!zf) goto L_1011d46;
L_1011be1: /* 1011be1: inc dword ptr [esi + 0x60] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x60u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi + 0x60u), r);
  }
L_1011be4: /* 1011be4: cmp dword ptr [esi + 0x58], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x58u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1011be7: jne 0x1011c28 */
  if (!zf) goto L_1011c28;
L_1011be9: /* 1011be9: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 1011bec: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1011bee: lea edi, [esi + 0x1e0] */
  edi = (uint32_t)(esi + 0x1e0u);
/* 1011bf4: je 0x1011c04 */
  if (zf) goto L_1011c04;
L_1011bf6: /* 1011bf6: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* 1011bf9: mov ebx, dword ptr [esi + 0x48] */
  ebx = R32((uint32_t)(esi + 0x48u));
/* 1011bfc: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 1011bff: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1011c01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1011c02: jmp 0x1011c08 */
  goto L_1011c08;
L_1011c04: /* 1011c04: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* 1011c07: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
L_1011c08: /* 1011c08: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1011c09: call 0x1013b5a */
  esp -= 4; W32(esp, 0x1011c0eu); SPILL(); f_1013b5a(); if (g_unwind) return; RELOAD();
/* 1011c0e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1011c11: lea edx, [esi + 0x250] */
  edx = (uint32_t)(esi + 0x250u);
/* 1011c17: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1011c18: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1011c19: call 0x1013b54 */
  esp -= 4; W32(esp, 0x1011c1eu); SPILL(); f_1013b54(); if (g_unwind) return; RELOAD();
/* 1011c1e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1011c21: mov dword ptr [esi + 0x58], 4 */
  W32((uint32_t)(esi + 0x58u), 0x4u);
L_1011c28: /* 1011c28: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 1011c2c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1011c2d: lea ecx, [esi + 0x78] */
  ecx = (uint32_t)(esi + 0x78u);
/* 1011c30: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1011c31: call 0x1013af4 */
  esp -= 4; W32(esp, 0x1011c36u); SPILL(); f_1013af4(); if (g_unwind) return; RELOAD();
/* 1011c36: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1011c39: jmp 0x1011a50 */
  goto L_1011a50;
L_1011c3e: /* 1011c3e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1011c3f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1011c40: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1011c41: mov eax, 0xfffffffd */
  eax = 0xfffffffdu;
/* 1011c46: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1011c47: add esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1011c4a: ret  */
  esp += 4; SPILL(); return;
L_1011c4b: /* 1011c4b: lea edx, [esi + 0x250] */
  edx = (uint32_t)(esi + 0x250u);
/* 1011c51: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1011c52: lea eax, [esi + 0x1e0] */
  eax = (uint32_t)(esi + 0x1e0u);
/* 1011c58: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1011c59: call 0x1013b6c */
  esp -= 4; W32(esp, 0x1011c5eu); SPILL(); f_1013b6c(); if (g_unwind) return; RELOAD();
/* 1011c5e: lea eax, [esi + 0x1e0] */
  eax = (uint32_t)(esi + 0x1e0u);
/* 1011c64: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1011c66: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1011c67: call 0x1013b72 */
  esp -= 4; W32(esp, 0x1011c6cu); SPILL(); f_1013b72(); if (g_unwind) return; RELOAD();
/* 1011c6c: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 1011c70: fild dword ptr [esp + 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 1011c74: mov ecx, ebx */
  ecx = ebx;
/* 1011c76: and ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 1011c78: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1011c7b: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 1011c7f: fld qword ptr [esp + 0x10] */
  { double v = F64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 1011c83: fadd qword ptr [esi + 0x70] */
  ST0 = ST0 + (F64((uint32_t)(esi + 0x70u)));
/* 1011c86: fstp qword ptr [esi + 0x70] */
  WF64((uint32_t)(esi + 0x70u), ST0); FPOP();
/* 1011c89: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 1011c8c: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 1011c8f: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1011c92: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 1011c96: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 1011c9a: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 1011c9e: fld qword ptr [esp + 0x10] */
  { double v = F64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 1011ca2: fadd qword ptr [esi + 0x68] */
  ST0 = ST0 + (F64((uint32_t)(esi + 0x68u)));
/* 1011ca5: fstp qword ptr [esi + 0x68] */
  WF64((uint32_t)(esi + 0x68u), ST0); FPOP();
/* 1011ca8: je 0x1011d1d */
  if (zf) goto L_1011d1d;
L_1011caa: /* 1011caa: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 1011cad: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1011caf: jne 0x1011d1d */
  if (!zf) goto L_1011d1d;
L_1011cb1: /* 1011cb1: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 1011cb4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1011cb6: je 0x1011cbd */
  if (zf) goto L_1011cbd;
L_1011cb8: /* 1011cb8: mov edi, dword ptr [esi + 0x60] */
  edi = R32((uint32_t)(esi + 0x60u));
/* 1011cbb: jmp 0x1011cbf */
  goto L_1011cbf;
L_1011cbd: /* 1011cbd: xor edi, edi */
  edi = 0;
L_1011cbf: /* 1011cbf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1011cc1: je 0x1011cda */
  if (zf) goto L_1011cda;
L_1011cc3: /* 1011cc3: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1011cc5: jle 0x1011cda */
  if ((zf || sf != of)) goto L_1011cda;
L_1011cc7: /* 1011cc7: mov eax, dword ptr [esi + 0x44] */
  eax = R32((uint32_t)(esi + 0x44u));
/* 1011cca: mov edx, edi */
  edx = edi;
/* 1011ccc: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 1011ccf: mov ecx, dword ptr [edx + eax] */
  ecx = R32((uint32_t)(edx + eax));
/* 1011cd2: mov edx, dword ptr [edx + eax + 4] */
  edx = R32((uint32_t)(edx + eax + 0x4u));
/* 1011cd6: sub ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  ebx = r;
  }
/* 1011cd8: sbb ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ebp = r;
  }
L_1011cda: /* 1011cda: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1011cdc: jg 0x1011ce8 */
  if ((!zf && sf == of)) goto L_1011ce8;
L_1011cde: /* 1011cde: jl 0x1011ce4 */
  if ((sf != of)) goto L_1011ce4;
L_1011ce0: /* 1011ce0: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  cf = 0;
  }
/* 1011ce2: jae 0x1011ce8 */
  if (!cf) goto L_1011ce8;
L_1011ce4: /* 1011ce4: xor ebx, ebx */
  ebx = 0;
/* 1011ce6: xor ebp, ebp */
  ebp = 0;
L_1011ce8: /* 1011ce8: lea eax, [esi + 0x1e0] */
  eax = (uint32_t)(esi + 0x1e0u);
/* 1011cee: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1011cf0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1011cf1: call 0x1013b72 */
  esp -= 4; W32(esp, 0x1011cf6u); SPILL(); f_1013b72(); if (g_unwind) return; RELOAD();
/* 1011cf6: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 1011cf7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1011cfa: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  ebx = r;
  }
/* 1011cfc: sbb ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ebp = r;
  }
/* 1011cfe: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1011d00: jle 0x1011d17 */
  if ((zf || sf != of)) goto L_1011d17;
L_1011d02: /* 1011d02: mov eax, dword ptr [esi + 0x44] */
  eax = R32((uint32_t)(esi + 0x44u));
/* 1011d05: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_1011d08: /* 1011d08: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 1011d0a: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 1011d0d: add ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ebx = r;
  }
/* 1011d0f: adc ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ebp = r;
  }
/* 1011d11: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1011d14: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 1011d15: jne 0x1011d08 */
  if (!zf) goto L_1011d08;
L_1011d17: /* 1011d17: mov dword ptr [esi + 0x50], ebx */
  W32((uint32_t)(esi + 0x50u), ebx);
/* 1011d1a: mov dword ptr [esi + 0x54], ebp */
  W32((uint32_t)(esi + 0x54u), ebp);
L_1011d1d: /* 1011d1d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1011d1e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1011d1f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1011d20: mov eax, 1 */
  eax = 0x1u;
/* 1011d25: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1011d26: add esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1011d29: ret  */
  esp += 4; SPILL(); return;
L_1011d2a: /* 1011d2a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1011d2b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1011d2c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1011d2d: xor eax, eax */
  eax = 0;
/* 1011d2f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1011d30: add esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1011d33: ret  */
  esp += 4; SPILL(); return;
L_1011d34: /* 1011d34: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1011d35: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1011d36: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1011d37: mov eax, 0xfffffffe */
  eax = 0xfffffffeu;
/* 1011d3c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1011d3d: add esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1011d40: ret  */
  esp += 4; SPILL(); return;
L_1011d41: /* 1011d41: mov eax, 0xffffff77 */
  eax = 0xffffff77u;
L_1011d46: /* 1011d46: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1011d47: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1011d48: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1011d49: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1011d4a: add esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1011d4d: ret  */
  esp += 4; SPILL(); return;
}

void f_1011d50(void) {
  LOAD_REGS();
L_1011d50: /* 1011d50: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 1011d54: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1011d56: jne 0x1011d5c */
  if (!zf) goto L_1011d5c;
L_1011d58: /* 1011d58: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 1011d5b: ret  */
  esp += 4; SPILL(); return;
L_1011d5c: /* 1011d5c: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 1011d60: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 1011d64: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1011d65: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1011d66: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1011d67: call dword ptr [0x1014014] */
  esp -= 4; W32(esp, 0x1011d6du); SPILL(); f_42cc09(); if (g_unwind) return; /* MSVCR70!fseek */ RELOAD();
/* 1011d6d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1011d70: ret  */
  esp += 4; SPILL(); return;
}

void f_1011d80(void) {
  LOAD_REGS();
L_1011d80: /* 1011d80: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1011d81: mov edi, dword ptr [esp + 8] */
  edi = R32((uint32_t)(esp + 0x8u));
/* 1011d85: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1011d87: je 0x1011e70 */
  if (zf) goto L_1011e70;
L_1011d8d: /* 1011d8d: lea eax, [edi + 0x250] */
  eax = (uint32_t)(edi + 0x250u);
/* 1011d93: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1011d94: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1011d95: call 0x1013b60 */
  esp -= 4; W32(esp, 0x1011d9au); SPILL(); f_1013b60(); if (g_unwind) return; RELOAD();
/* 1011d9a: lea ecx, [edi + 0x1e0] */
  ecx = (uint32_t)(edi + 0x1e0u);
/* 1011da0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1011da1: call 0x1013b66 */
  esp -= 4; W32(esp, 0x1011da6u); SPILL(); f_1013b66(); if (g_unwind) return; RELOAD();
/* 1011da6: lea edx, [edi + 0x78] */
  edx = (uint32_t)(edi + 0x78u);
/* 1011da9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1011daa: call 0x1013b0c */
  esp -= 4; W32(esp, 0x1011dafu); SPILL(); f_1013b0c(); if (g_unwind) return; RELOAD();
/* 1011daf: mov eax, dword ptr [edi + 0x48] */
  eax = R32((uint32_t)(edi + 0x48u));
/* 1011db2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1011db5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1011db7: je 0x1011e10 */
  if (zf) goto L_1011e10;
L_1011db9: /* 1011db9: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 1011dbc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1011dbe: je 0x1011e10 */
  if (zf) goto L_1011e10;
L_1011dc0: /* 1011dc0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1011dc1: xor ebp, ebp */
  ebp = 0;
/* 1011dc3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1011dc5: jle 0x1011df8 */
  if ((zf || sf != of)) goto L_1011df8;
L_1011dc7: /* 1011dc7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1011dc8: xor ebx, ebx */
  ebx = 0;
/* 1011dca: xor esi, esi */
  esi = 0;
/* 1011dcc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_1011dd0: /* 1011dd0: mov eax, dword ptr [edi + 0x48] */
  eax = R32((uint32_t)(edi + 0x48u));
/* 1011dd3: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1011dd5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1011dd6: call 0x1013b36 */
  esp -= 4; W32(esp, 0x1011ddbu); SPILL(); f_1013b36(); if (g_unwind) return; RELOAD();
/* 1011ddb: mov ecx, dword ptr [edi + 0x4c] */
  ecx = R32((uint32_t)(edi + 0x4cu));
/* 1011dde: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1011de0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1011de1: call 0x1013b30 */
  esp -= 4; W32(esp, 0x1011de6u); SPILL(); f_1013b30(); if (g_unwind) return; RELOAD();
/* 1011de6: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 1011de9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1011dec: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 1011ded: add esi, 0x20 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1011df0: add ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 1011df3: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1011df5: jl 0x1011dd0 */
  if ((sf != of)) goto L_1011dd0;
L_1011df7: /* 1011df7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_1011df8: /* 1011df8: mov edx, dword ptr [edi + 0x48] */
  edx = R32((uint32_t)(edi + 0x48u));
/* 1011dfb: mov esi, dword ptr [0x1014018] */
  esi = R32((uint32_t)(0x1014018u));
/* 1011e01: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1011e02: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x1011e04u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1011e04: mov eax, dword ptr [edi + 0x4c] */
  eax = R32((uint32_t)(edi + 0x4cu));
/* 1011e07: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1011e08: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x1011e0au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1011e0a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1011e0d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1011e0e: jmp 0x1011e16 */
  goto L_1011e16;
L_1011e10: /* 1011e10: mov esi, dword ptr [0x1014018] */
  esi = R32((uint32_t)(0x1014018u));
L_1011e16: /* 1011e16: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* 1011e19: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1011e1b: je 0x1011e23 */
  if (zf) goto L_1011e23;
L_1011e1d: /* 1011e1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1011e1e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x1011e20u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1011e20: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_1011e23: /* 1011e23: mov eax, dword ptr [edi + 0x44] */
  eax = R32((uint32_t)(edi + 0x44u));
/* 1011e26: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1011e28: je 0x1011e30 */
  if (zf) goto L_1011e30;
L_1011e2a: /* 1011e2a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1011e2b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x1011e2du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1011e2d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_1011e30: /* 1011e30: mov eax, dword ptr [edi + 0x40] */
  eax = R32((uint32_t)(edi + 0x40u));
/* 1011e33: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1011e35: je 0x1011e3d */
  if (zf) goto L_1011e3d;
L_1011e37: /* 1011e37: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1011e38: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x1011e3au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1011e3a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_1011e3d: /* 1011e3d: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 1011e40: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1011e42: je 0x1011e4a */
  if (zf) goto L_1011e4a;
L_1011e44: /* 1011e44: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1011e45: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x1011e47u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1011e47: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_1011e4a: /* 1011e4a: lea ecx, [edi + 0x18] */
  ecx = (uint32_t)(edi + 0x18u);
/* 1011e4d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1011e4e: call 0x1013b06 */
  esp -= 4; W32(esp, 0x1011e53u); SPILL(); f_1013b06(); if (g_unwind) return; RELOAD();
/* 1011e53: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 1011e55: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1011e58: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1011e5a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1011e5b: je 0x1011e67 */
  if (zf) goto L_1011e67;
L_1011e5d: /* 1011e5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1011e5e: call dword ptr [edi + 0x2c8] */
  { uint32_t t = R32((uint32_t)(edi + 0x2c8u)); esp -= 4; W32(esp, 0x1011e64u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1011e64: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_1011e67: /* 1011e67: mov ecx, 0xb4 */
  ecx = 0xb4u;
/* 1011e6c: xor eax, eax */
  eax = 0;
/* 1011e6e: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
L_1011e70: /* 1011e70: xor eax, eax */
  eax = 0;
/* 1011e72: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1011e73: ret  */
  esp += 4; SPILL(); return;
}

void f_1011e80(void) {
  LOAD_REGS();
L_1011e80: /* 1011e80: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 1011e84: mov eax, dword ptr [eax + 0x34] */
  eax = R32((uint32_t)(eax + 0x34u));
/* 1011e87: ret  */
  esp += 4; SPILL(); return;
}

void f_1011e90(void) {
  LOAD_REGS();
L_1011e90: /* 1011e90: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 1011e94: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 1011e97: ret  */
  esp += 4; SPILL(); return;
}

void f_1011ea0(void) {
  LOAD_REGS();
L_1011ea0: /* 1011ea0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1011ea3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1011ea4: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 1011ea8: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 1011eab: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1011eac: xor edi, edi */
  edi = 0;
/* 1011eae: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1011eb0: je 0x1011eb7 */
  if (zf) goto L_1011eb7;
L_1011eb2: /* 1011eb2: mov ecx, dword ptr [esi + 0x60] */
  ecx = R32((uint32_t)(esi + 0x60u));
/* 1011eb5: jmp 0x1011eb9 */
  goto L_1011eb9;
L_1011eb7: /* 1011eb7: xor ecx, ecx */
  ecx = 0;
L_1011eb9: /* 1011eb9: cmp dword ptr [esi + 0x58], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x58u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1011ebd: jge 0x1011eca */
  if ((sf == of)) goto L_1011eca;
L_1011ebf: /* 1011ebf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1011ec0: mov eax, 0xffffff7d */
  eax = 0xffffff7du;
/* 1011ec5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1011ec6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1011ec9: ret  */
  esp += 4; SPILL(); return;
L_1011eca: /* 1011eca: fld qword ptr [esi + 0x70] */
  { double v = F64((uint32_t)(esi + 0x70u)); FPUSH(v); }
/* 1011ecd: fcomp qword ptr [0x10140d8] */
  fpu_com(ST0, F64((uint32_t)(0x10140d8u)));
  FPOP();
/* 1011ed3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1011ed5: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 1011ed8: jp 0x1011ee5 */
  if (pf) goto L_1011ee5;
L_1011eda: /* 1011eda: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1011edb: mov eax, 0xffffffff */
  eax = 0xffffffffu;
/* 1011ee0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1011ee1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1011ee4: ret  */
  esp += 4; SPILL(); return;
L_1011ee5: /* 1011ee5: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* 1011ee8: shl ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 1011eeb: fild dword ptr [eax + ecx + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + ecx + 0x8u)); FPUSH(v); }
/* 1011eef: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 1011ef3: fld qword ptr [esi + 0x68] */
  { double v = F64((uint32_t)(esi + 0x68u)); FPUSH(v); }
/* 1011ef6: fdiv qword ptr [esi + 0x70] */
  ST0 = ST0 / (F64((uint32_t)(esi + 0x70u)));
/* 1011ef9: fmul qword ptr [esp + 8] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x8u)));
/* 1011efd: fadd qword ptr [0x10140d0] */
  ST0 = ST0 + (F64((uint32_t)(0x10140d0u)));
/* 1011f03: call 0x1013c40 */
  esp -= 4; W32(esp, 0x1011f08u); SPILL(); f_1013c40(); if (g_unwind) return; RELOAD();
/* 1011f08: mov dword ptr [esi + 0x68], edi */
  W32((uint32_t)(esi + 0x68u), edi);
/* 1011f0b: mov dword ptr [esi + 0x6c], edi */
  W32((uint32_t)(esi + 0x6cu), edi);
/* 1011f0e: mov dword ptr [esi + 0x70], edi */
  W32((uint32_t)(esi + 0x70u), edi);
/* 1011f11: mov dword ptr [esi + 0x74], edi */
  W32((uint32_t)(esi + 0x74u), edi);
/* 1011f14: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1011f15: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1011f16: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1011f19: ret  */
  esp += 4; SPILL(); return;
}

void f_1011f20(void) {
  LOAD_REGS();
L_1011f20: /* 1011f20: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 1011f24: mov ecx, dword ptr [edx + 0x34] */
  ecx = R32((uint32_t)(edx + 0x34u));
/* 1011f27: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 1011f2b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1011f2c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_1011f30: /* 1011f30: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1011f32: jl 0x1011f39 */
  if ((sf != of)) goto L_1011f39;
L_1011f34: /* 1011f34: lea eax, [ecx - 1] */
  eax = (uint32_t)(ecx + 0xffffffffu);
/* 1011f37: jmp 0x1011f30 */
  goto L_1011f30;
L_1011f39: /* 1011f39: mov esi, dword ptr [edx + 4] */
  esi = R32((uint32_t)(edx + 0x4u));
/* 1011f3c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1011f3e: jne 0x1011f49 */
  if (!zf) goto L_1011f49;
L_1011f40: /* 1011f40: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1011f42: jl 0x1011f4d */
  if ((sf != of)) goto L_1011f4d;
L_1011f44: /* 1011f44: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 1011f47: jmp 0x1011f30 */
  goto L_1011f30;
L_1011f49: /* 1011f49: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1011f4b: jge 0x1011f52 */
  if ((sf == of)) goto L_1011f52;
L_1011f4d: /* 1011f4d: mov eax, dword ptr [edx + 0x5c] */
  eax = R32((uint32_t)(edx + 0x5cu));
/* 1011f50: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1011f51: ret  */
  esp += 4; SPILL(); return;
L_1011f52: /* 1011f52: mov ecx, dword ptr [edx + 0x40] */
  ecx = R32((uint32_t)(edx + 0x40u));
/* 1011f55: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 1011f58: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1011f59: ret  */
  esp += 4; SPILL(); return;
}

void f_1011f60(void) {
  LOAD_REGS();
L_1011f60: /* 1011f60: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 1011f64: cmp dword ptr [eax + 0x58], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x58u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1011f68: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1011f69: jge 0x1011f75 */
  if ((sf == of)) goto L_1011f75;
L_1011f6b: /* 1011f6b: mov eax, 0xffffff7d */
  eax = 0xffffff7du;
/* 1011f70: or edx, 0xffffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 1011f73: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1011f74: ret  */
  esp += 4; SPILL(); return;
L_1011f75: /* 1011f75: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 1011f78: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1011f7a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1011f7b: je 0x1011fd7 */
  if (zf) goto L_1011fd7;
L_1011f7d: /* 1011f7d: mov edi, dword ptr [eax + 0x34] */
  edi = R32((uint32_t)(eax + 0x34u));
/* 1011f80: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 1011f84: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1011f86: jge 0x1011fd7 */
  if ((sf == of)) goto L_1011fd7;
L_1011f88: /* 1011f88: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1011f8a: jge 0x1011fbc */
  if ((sf == of)) goto L_1011fbc;
L_1011f8c: /* 1011f8c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1011f8d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1011f8e: xor ebx, ebx */
  ebx = 0;
/* 1011f90: xor ebp, ebp */
  ebp = 0;
/* 1011f92: xor esi, esi */
  esi = 0;
/* 1011f94: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1011f96: jle 0x1011fb3 */
  if ((zf || sf != of)) goto L_1011fb3;
L_1011f98: /* 1011f98: jmp 0x1011fa0 */
  goto L_1011fa0;
L_1011f9a: /* 1011f9a: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 1011f9e: mov edi, edi */
  edi = edi;
L_1011fa0: /* 1011fa0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1011fa1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1011fa2: call 0x1011f60 */
  esp -= 4; W32(esp, 0x1011fa7u); SPILL(); f_1011f60(); if (g_unwind) return; RELOAD();
/* 1011fa7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1011faa: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ebx = r;
  }
/* 1011fac: adc ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ebp = r;
  }
/* 1011fae: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 1011faf: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1011fb1: jl 0x1011f9a */
  if ((sf != of)) goto L_1011f9a;
L_1011fb3: /* 1011fb3: mov edx, ebp */
  edx = ebp;
/* 1011fb5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1011fb6: mov eax, ebx */
  eax = ebx;
/* 1011fb8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1011fb9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1011fba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1011fbb: ret  */
  esp += 4; SPILL(); return;
L_1011fbc: /* 1011fbc: mov eax, dword ptr [eax + 0x38] */
  eax = R32((uint32_t)(eax + 0x38u));
/* 1011fbf: mov edi, dword ptr [eax + ecx*8] */
  edi = R32((uint32_t)(eax + ecx*8));
/* 1011fc2: mov esi, dword ptr [eax + ecx*8 + 4] */
  esi = R32((uint32_t)(eax + ecx*8 + 0x4u));
/* 1011fc6: mov edx, dword ptr [eax + ecx*8 + 0xc] */
  edx = R32((uint32_t)(eax + ecx*8 + 0xcu));
/* 1011fca: lea ecx, [eax + ecx*8] */
  ecx = (uint32_t)(eax + ecx*8);
/* 1011fcd: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 1011fd0: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  eax = r;
  }
/* 1011fd2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1011fd3: sbb edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edx = r;
  }
/* 1011fd5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1011fd6: ret  */
  esp += 4; SPILL(); return;
L_1011fd7: /* 1011fd7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1011fd8: mov eax, 0xffffff7d */
  eax = 0xffffff7du;
/* 1011fdd: or edx, 0xffffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 1011fe0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1011fe1: ret  */
  esp += 4; SPILL(); return;
}

void f_1011ff0(void) {
  LOAD_REGS();
L_1011ff0: /* 1011ff0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 1011ff4: cmp dword ptr [eax + 0x58], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x58u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1011ff8: jge 0x1012003 */
  if ((sf == of)) goto L_1012003;
L_1011ffa: /* 1011ffa: mov eax, 0xffffff7d */
  eax = 0xffffff7du;
/* 1011fff: or edx, 0xffffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 1012002: ret  */
  esp += 4; SPILL(); return;
L_1012003: /* 1012003: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 1012006: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1012008: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1012009: je 0x101205c */
  if (zf) goto L_101205c;
L_101200b: /* 101200b: mov edi, dword ptr [eax + 0x34] */
  edi = R32((uint32_t)(eax + 0x34u));
/* 101200e: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 1012012: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1012014: jge 0x101205c */
  if ((sf == of)) goto L_101205c;
L_1012016: /* 1012016: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1012018: jge 0x101204c */
  if ((sf == of)) goto L_101204c;
L_101201a: /* 101201a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 101201b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 101201c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 101201d: xor ebx, ebx */
  ebx = 0;
/* 101201f: xor ebp, ebp */
  ebp = 0;
/* 1012021: xor esi, esi */
  esi = 0;
/* 1012023: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1012025: jle 0x1012043 */
  if ((zf || sf != of)) goto L_1012043;
L_1012027: /* 1012027: jmp 0x1012030 */
  goto L_1012030;
L_1012029: /* 1012029: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 101202d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_1012030: /* 1012030: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1012031: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1012032: call 0x1011ff0 */
  esp -= 4; W32(esp, 0x1012037u); SPILL(); f_1011ff0(); if (g_unwind) return; RELOAD();
/* 1012037: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 101203a: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ebx = r;
  }
/* 101203c: adc ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ebp = r;
  }
/* 101203e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 101203f: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1012041: jl 0x1012029 */
  if ((sf != of)) goto L_1012029;
L_1012043: /* 1012043: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1012044: mov edx, ebp */
  edx = ebp;
/* 1012046: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1012047: mov eax, ebx */
  eax = ebx;
/* 1012049: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 101204a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 101204b: ret  */
  esp += 4; SPILL(); return;
L_101204c: /* 101204c: mov edx, dword ptr [eax + 0x44] */
  edx = R32((uint32_t)(eax + 0x44u));
/* 101204f: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 1012052: mov eax, dword ptr [edx + ecx + 8] */
  eax = R32((uint32_t)(edx + ecx + 0x8u));
/* 1012056: mov edx, dword ptr [edx + ecx + 0xc] */
  edx = R32((uint32_t)(edx + ecx + 0xcu));
/* 101205a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 101205b: ret  */
  esp += 4; SPILL(); return;
L_101205c: /* 101205c: mov eax, 0xffffff7d */
  eax = 0xffffff7du;
/* 1012061: or edx, 0xffffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 1012064: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1012065: ret  */
  esp += 4; SPILL(); return;
}

void f_1012070(void) {
  LOAD_REGS();
L_1012070: /* 1012070: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1012071: mov ebp, esp */
  ebp = esp;
/* 1012073: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 1012076: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1012079: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 101207a: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 101207d: cmp dword ptr [ebx + 0x58], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x58u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1012081: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1012082: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1012083: jl 0x10120f7 */
  if ((sf != of)) goto L_10120f7;
L_1012085: /* 1012085: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 1012088: xor esi, esi */
  esi = 0;
/* 101208a: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 101208c: je 0x10120f7 */
  if (zf) goto L_10120f7;
L_101208e: /* 101208e: mov edi, dword ptr [ebx + 0x34] */
  edi = R32((uint32_t)(ebx + 0x34u));
/* 1012091: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 1012094: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1012096: jge 0x10120f7 */
  if ((sf == of)) goto L_10120f7;
L_1012098: /* 1012098: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 101209a: jge 0x10120ca */
  if ((sf == of)) goto L_10120ca;
L_101209c: /* 101209c: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 101209e: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 10120a2: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 10120a6: jle 0x10120bf */
  if ((zf || sf != of)) goto L_10120bf;
L_10120a8: /* 10120a8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10120a9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10120aa: call 0x1012070 */
  esp -= 4; W32(esp, 0x10120afu); SPILL(); f_1012070(); if (g_unwind) return; RELOAD();
/* 10120af: fadd qword ptr [esp + 0x18] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x18u)));
/* 10120b3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10120b6: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 10120b7: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10120b9: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 10120bd: jl 0x10120a8 */
  if ((sf != of)) goto L_10120a8;
L_10120bf: /* 10120bf: fld qword ptr [esp + 0x10] */
  { double v = F64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 10120c3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10120c4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10120c5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10120c6: mov esp, ebp */
  esp = ebp;
/* 10120c8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10120c9: ret  */
  esp += 4; SPILL(); return;
L_10120ca: /* 10120ca: mov edx, dword ptr [ebx + 0x44] */
  edx = R32((uint32_t)(ebx + 0x44u));
/* 10120cd: mov ecx, eax */
  ecx = eax;
/* 10120cf: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 10120d2: fild qword ptr [edx + ecx + 8] */
  { double v = (double)(int64_t)R64((uint32_t)(edx + ecx + 0x8u)); FPUSH(v); }
/* 10120d6: mov ecx, dword ptr [ebx + 0x48] */
  ecx = R32((uint32_t)(ebx + 0x48u));
/* 10120d9: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 10120dc: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 10120e0: fild dword ptr [ecx + eax + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + eax + 0x8u)); FPUSH(v); }
/* 10120e4: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 10120e8: fld qword ptr [esp + 0x10] */
  { double v = F64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 10120ec: fdiv qword ptr [esp + 0x18] */
  ST0 = ST0 / (F64((uint32_t)(esp + 0x18u)));
/* 10120f0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10120f1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10120f2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10120f3: mov esp, ebp */
  esp = ebp;
/* 10120f5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10120f6: ret  */
  esp += 4; SPILL(); return;
L_10120f7: /* 10120f7: fld qword ptr [0x10140e0] */
  { double v = F64((uint32_t)(0x10140e0u)); FPUSH(v); }
/* 10120fd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10120fe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10120ff: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1012100: mov esp, ebp */
  esp = ebp;
/* 1012102: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1012103: ret  */
  esp += 4; SPILL(); return;
}

void f_1012110(void) {
  LOAD_REGS();
L_1012110: /* 1012110: sub esp, 0x1a0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1a0u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1012116: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1012117: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1012118: mov esi, dword ptr [esp + 0x1ac] */
  esi = R32((uint32_t)(esp + 0x1acu));
/* 101211f: cmp dword ptr [esi + 0x58], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x58u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1012123: jge 0x1012133 */
  if ((sf == of)) goto L_1012133;
L_1012125: /* 1012125: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1012126: mov eax, 0xffffff7d */
  eax = 0xffffff7du;
/* 101212b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 101212c: add esp, 0x1a0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1a0u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1012132: ret  */
  esp += 4; SPILL(); return;
L_1012133: /* 1012133: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 1012136: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1012138: jne 0x1012148 */
  if (!zf) goto L_1012148;
L_101213a: /* 101213a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 101213b: mov eax, 0xffffff76 */
  eax = 0xffffff76u;
/* 1012140: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1012141: add esp, 0x1a0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1a0u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1012147: ret  */
  esp += 4; SPILL(); return;
L_1012148: /* 1012148: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1012149: mov ebx, dword ptr [esp + 0x1b8] */
  ebx = R32((uint32_t)(esp + 0x1b8u));
/* 1012150: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1012152: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1012153: jl 0x10123ea */
  if ((sf != of)) goto L_10123ea;
L_1012159: /* 1012159: mov edi, dword ptr [esp + 0x1b8] */
  edi = R32((uint32_t)(esp + 0x1b8u));
/* 1012160: jg 0x101216a */
  if ((!zf && sf == of)) goto L_101216a;
L_1012162: /* 1012162: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  cf = 0;
  }
/* 1012164: jb 0x10123ea */
  if (cf) goto L_10123ea;
L_101216a: /* 101216a: cmp ebx, dword ptr [esi + 0x14] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 101216d: jg 0x10123ea */
  if ((!zf && sf == of)) goto L_10123ea;
L_1012173: /* 1012173: jl 0x101217e */
  if ((sf != of)) goto L_101217e;
L_1012175: /* 1012175: cmp edi, dword ptr [esi + 0x10] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 1012178: ja 0x10123ea */
  if ((!cf && !zf)) goto L_10123ea;
L_101217e: /* 101217e: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 1012181: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* 1012184: mov dword ptr [esi + 0x54], eax */
  W32((uint32_t)(esi + 0x54u), eax);
/* 1012187: call 0x1011a00 */
  esp -= 4; W32(esp, 0x101218cu); SPILL(); f_1011a00(); if (g_unwind) return; RELOAD();
/* 101218c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 101218d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 101218e: mov eax, esi */
  eax = esi;
/* 1012190: call 0x1011000 */
  esp -= 4; W32(esp, 0x1012195u); SPILL(); f_1011000(); if (g_unwind) return; RELOAD();
/* 1012195: lea eax, [esp + 0x50] */
  eax = (uint32_t)(esp + 0x50u);
/* 1012199: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 101219b: xor ebp, ebp */
  ebp = 0;
/* 101219d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 101219e: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* 10121a2: call 0x1013b18 */
  esp -= 4; W32(esp, 0x10121a7u); SPILL(); f_1013b18(); if (g_unwind) return; RELOAD();
/* 10121a7: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* 10121ab: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10121ae: mov edi, edi */
  edi = edi;
L_10121b0: /* 10121b0: mov eax, dword ptr [esi + 0x58] */
  eax = R32((uint32_t)(esi + 0x58u));
/* 10121b3: mov edi, 3 */
  edi = 0x3u;
/* 10121b8: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10121ba: jne 0x1012243 */
  if (!zf) goto L_1012243;
L_10121c0: /* 10121c0: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* 10121c4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10121c5: lea edx, [esp + 0x4c] */
  edx = (uint32_t)(esp + 0x4cu);
/* 10121c9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10121ca: call 0x1013aee */
  esp -= 4; W32(esp, 0x10121cfu); SPILL(); f_1013aee(); if (g_unwind) return; RELOAD();
/* 10121cf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10121d2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10121d4: jle 0x1012243 */
  if ((zf || sf != of)) goto L_1012243;
L_10121d6: /* 10121d6: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* 10121d9: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* 10121dc: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 10121df: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10121e1: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 10121e4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10121e6: je 0x10121fa */
  if (zf) goto L_10121fa;
L_10121e8: /* 10121e8: lea edx, [esp + 0x28] */
  edx = (uint32_t)(esp + 0x28u);
/* 10121ec: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10121ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10121ee: call 0x1013b4e */
  esp -= 4; W32(esp, 0x10121f3u); SPILL(); f_1013b4e(); if (g_unwind) return; RELOAD();
/* 10121f3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10121f6: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
L_10121fa: /* 10121fa: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10121fc: je 0x101220e */
  if (zf) goto L_101220e;
L_10121fe: /* 10121fe: lea eax, [esi + 0x78] */
  eax = (uint32_t)(esi + 0x78u);
/* 1012201: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1012203: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1012204: call 0x1013aee */
  esp -= 4; W32(esp, 0x1012209u); SPILL(); f_1013aee(); if (g_unwind) return; RELOAD();
/* 1012209: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 101220c: jmp 0x1012225 */
  goto L_1012225;
L_101220e: /* 101220e: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1012210: je 0x1012225 */
  if (zf) goto L_1012225;
L_1012212: /* 1012212: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 1012216: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 101221a: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 101221c: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 101221f: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1012221: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
L_1012225: /* 1012225: mov edi, dword ptr [esp + 0x38] */
  edi = R32((uint32_t)(esp + 0x38u));
/* 1012229: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 101222d: mov edx, edi */
  edx = edi;
/* 101222f: and edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 1012231: cmp edx, -1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1012234: jne 0x101232d */
  if (!zf) goto L_101232d;
L_101223a: /* 101223a: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 101223e: jmp 0x10121b0 */
  goto L_10121b0;
L_1012243: /* 1012243: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1012245: jne 0x10123c7 */
  if (!zf) goto L_10123c7;
L_101224b: /* 101224b: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 101224d: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* 1012251: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1012253: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1012254: call 0x1011040 */
  esp -= 4; W32(esp, 0x1012259u); SPILL(); f_1011040(); if (g_unwind) return; RELOAD();
/* 1012259: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 101225c: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 101225e: jl 0x101238c */
  if ((sf != of)) goto L_101238c;
L_1012264: /* 1012264: jg 0x101226e */
  if ((!zf && sf == of)) goto L_101226e;
L_1012266: /* 1012266: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  cf = 0;
  }
/* 1012268: jb 0x101238c */
  if (cf) goto L_101238c;
L_101226e: /* 101226e: cmp dword ptr [esi + 0x58], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x58u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1012271: jne 0x101229c */
  if (!zf) goto L_101229c;
L_1012273: /* 1012273: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 1012277: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1012278: call 0x1013ae8 */
  esp -= 4; W32(esp, 0x101227du); SPILL(); f_1013ae8(); if (g_unwind) return; RELOAD();
/* 101227d: mov ecx, dword ptr [esi + 0x5c] */
  ecx = R32((uint32_t)(esi + 0x5cu));
/* 1012280: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1012283: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1012285: je 0x1012299 */
  if (zf) goto L_1012299;
L_1012287: /* 1012287: call 0x1011a00 */
  esp -= 4; W32(esp, 0x101228cu); SPILL(); f_1011a00(); if (g_unwind) return; RELOAD();
/* 101228c: lea edx, [esp + 0x48] */
  edx = (uint32_t)(esp + 0x48u);
/* 1012290: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1012291: call 0x1013b0c */
  esp -= 4; W32(esp, 0x1012296u); SPILL(); f_1013b0c(); if (g_unwind) return; RELOAD();
/* 1012296: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_1012299: /* 1012299: cmp dword ptr [esi + 0x58], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x58u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
L_101229c: /* 101229c: jge 0x10122fc */
  if ((sf == of)) goto L_10122fc;
L_101229e: /* 101229e: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 10122a2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10122a3: call 0x1013ae8 */
  esp -= 4; W32(esp, 0x10122a8u); SPILL(); f_1013ae8(); if (g_unwind) return; RELOAD();
/* 10122a8: mov edi, dword ptr [esi + 0x34] */
  edi = R32((uint32_t)(esi + 0x34u));
/* 10122ab: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10122ae: xor ecx, ecx */
  ecx = 0;
/* 10122b0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10122b2: mov dword ptr [esi + 0x5c], eax */
  W32((uint32_t)(esi + 0x5cu), eax);
/* 10122b5: jle 0x10122cf */
  if ((zf || sf != of)) goto L_10122cf;
L_10122b7: /* 10122b7: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 10122ba: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_10122c0: /* 10122c0: cmp dword ptr [edx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10122c2: je 0x10122cf */
  if (zf) goto L_10122cf;
L_10122c4: /* 10122c4: mov ebx, dword ptr [esi + 0x34] */
  ebx = R32((uint32_t)(esi + 0x34u));
/* 10122c7: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10122c8: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10122cb: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10122cd: jl 0x10122c0 */
  if ((sf != of)) goto L_10122c0;
L_10122cf: /* 10122cf: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10122d1: je 0x101239c */
  if (zf) goto L_101239c;
L_10122d7: /* 10122d7: mov dword ptr [esi + 0x60], ecx */
  W32((uint32_t)(esi + 0x60u), ecx);
/* 10122da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10122db: lea ecx, [esi + 0x78] */
  ecx = (uint32_t)(esi + 0x78u);
/* 10122de: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10122df: call 0x1013afa */
  esp -= 4; W32(esp, 0x10122e4u); SPILL(); f_1013afa(); if (g_unwind) return; RELOAD();
/* 10122e4: mov edx, dword ptr [esi + 0x5c] */
  edx = R32((uint32_t)(esi + 0x5cu));
/* 10122e7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10122e8: lea eax, [esp + 0x54] */
  eax = (uint32_t)(esp + 0x54u);
/* 10122ec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10122ed: call 0x1013afa */
  esp -= 4; W32(esp, 0x10122f2u); SPILL(); f_1013afa(); if (g_unwind) return; RELOAD();
/* 10122f2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10122f5: mov dword ptr [esi + 0x58], 3 */
  W32((uint32_t)(esi + 0x58u), 0x3u);
L_10122fc: /* 10122fc: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 1012300: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1012301: lea edx, [esi + 0x78] */
  edx = (uint32_t)(esi + 0x78u);
/* 1012304: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1012305: call 0x1013af4 */
  esp -= 4; W32(esp, 0x101230au); SPILL(); f_1013af4(); if (g_unwind) return; RELOAD();
/* 101230a: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* 101230e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 101230f: lea ecx, [esp + 0x54] */
  ecx = (uint32_t)(esp + 0x54u);
/* 1012313: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1012314: call 0x1013af4 */
  esp -= 4; W32(esp, 0x1012319u); SPILL(); f_1013af4(); if (g_unwind) return; RELOAD();
/* 1012319: lea edx, [esp + 0x28] */
  edx = (uint32_t)(esp + 0x28u);
/* 101231d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 101231e: call 0x1013b12 */
  esp -= 4; W32(esp, 0x1012323u); SPILL(); f_1013b12(); if (g_unwind) return; RELOAD();
/* 1012323: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1012326: mov ebx, eax */
  ebx = eax;
/* 1012328: jmp 0x10121b0 */
  goto L_10121b0;
L_101232d: /* 101232d: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 1012330: mov eax, dword ptr [esi + 0x44] */
  eax = R32((uint32_t)(esi + 0x44u));
/* 1012333: mov ebx, edx */
  ebx = edx;
/* 1012335: shl ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 1012338: sub edi, dword ptr [ebx + eax] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + eax)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  edi = r;
  }
/* 101233b: sbb ecx, dword ptr [ebx + eax + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + eax + 0x4u)));
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ecx = r;
  }
/* 101233f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1012341: jg 0x101234d */
  if ((!zf && sf == of)) goto L_101234d;
L_1012343: /* 1012343: jl 0x1012349 */
  if ((sf != of)) goto L_1012349;
L_1012345: /* 1012345: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  cf = 0;
  }
/* 1012347: jae 0x101234d */
  if (!cf) goto L_101234d;
L_1012349: /* 1012349: xor edi, edi */
  edi = 0;
/* 101234b: xor ecx, ecx */
  ecx = 0;
L_101234d: /* 101234d: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 101234f: jle 0x1012363 */
  if ((zf || sf != of)) goto L_1012363;
L_1012351: /* 1012351: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_1012354: /* 1012354: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 1012356: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edi = r;
  }
/* 1012358: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 101235b: adc ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ecx = r;
  }
/* 101235d: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1012360: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 1012361: jne 0x1012354 */
  if (!zf) goto L_1012354;
L_1012363: /* 1012363: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 1012367: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 1012368: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  edi = r;
  }
/* 101236a: sbb ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ecx = r;
  }
/* 101236c: mov dword ptr [esi + 0x54], ecx */
  W32((uint32_t)(esi + 0x54u), ecx);
/* 101236f: lea ecx, [esp + 0x48] */
  ecx = (uint32_t)(esp + 0x48u);
/* 1012373: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1012374: mov dword ptr [esi + 0x50], edi */
  W32((uint32_t)(esi + 0x50u), edi);
/* 1012377: call 0x1013b0c */
  esp -= 4; W32(esp, 0x101237cu); SPILL(); f_1013b0c(); if (g_unwind) return; RELOAD();
/* 101237c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 101237f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1012380: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1012381: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1012382: xor eax, eax */
  eax = 0;
/* 1012384: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1012385: add esp, 0x1a0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1a0u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 101238b: ret  */
  esp += 4; SPILL(); return;
L_101238c: /* 101238c: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 101238e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 101238f: call 0x1011ff0 */
  esp -= 4; W32(esp, 0x1012394u); SPILL(); f_1011ff0(); if (g_unwind) return; RELOAD();
/* 1012394: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1012397: mov dword ptr [esi + 0x54], edx */
  W32((uint32_t)(esi + 0x54u), edx);
/* 101239a: jmp 0x10123cd */
  goto L_10123cd;
L_101239c: /* 101239c: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 101239f: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* 10123a2: mov dword ptr [esi + 0x54], eax */
  W32((uint32_t)(esi + 0x54u), eax);
/* 10123a5: lea eax, [esp + 0x48] */
  eax = (uint32_t)(esp + 0x48u);
/* 10123a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10123aa: call 0x1013b0c */
  esp -= 4; W32(esp, 0x10123afu); SPILL(); f_1013b0c(); if (g_unwind) return; RELOAD();
/* 10123af: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10123b2: call 0x1011a00 */
  esp -= 4; W32(esp, 0x10123b7u); SPILL(); f_1011a00(); if (g_unwind) return; RELOAD();
/* 10123b7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10123b8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10123b9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10123ba: mov eax, 0xffffff77 */
  eax = 0xffffff77u;
/* 10123bf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10123c0: add esp, 0x1a0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1a0u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10123c6: ret  */
  esp += 4; SPILL(); return;
L_10123c7: /* 10123c7: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 10123ca: mov dword ptr [esi + 0x54], eax */
  W32((uint32_t)(esi + 0x54u), eax);
L_10123cd: /* 10123cd: lea ecx, [esp + 0x48] */
  ecx = (uint32_t)(esp + 0x48u);
/* 10123d1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10123d2: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* 10123d5: call 0x1013b0c */
  esp -= 4; W32(esp, 0x10123dau); SPILL(); f_1013b0c(); if (g_unwind) return; RELOAD();
/* 10123da: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10123dd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10123de: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10123df: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10123e0: xor eax, eax */
  eax = 0;
/* 10123e2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10123e3: add esp, 0x1a0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1a0u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10123e9: ret  */
  esp += 4; SPILL(); return;
L_10123ea: /* 10123ea: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10123eb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10123ec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10123ed: mov eax, 0xffffff7d */
  eax = 0xffffff7du;
/* 10123f2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10123f3: add esp, 0x1a0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1a0u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10123f9: ret  */
  esp += 4; SPILL(); return;
}

void f_1012400(void) {
  LOAD_REGS();
L_1012400: /* 1012400: sub esp, 0x84 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1012406: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1012407: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1012408: mov esi, dword ptr [esp + 0x90] */
  esi = R32((uint32_t)(esp + 0x90u));
/* 101240f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1012410: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1012412: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1012413: call 0x1011ff0 */
  esp -= 4; W32(esp, 0x1012418u); SPILL(); f_1011ff0(); if (g_unwind) return; RELOAD();
/* 1012418: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* 101241b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 101241e: cmp ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1012421: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 1012425: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 1012429: jge 0x101243a */
  if ((sf == of)) goto L_101243a;
L_101242b: /* 101242b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 101242c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 101242d: mov eax, 0xffffff7d */
  eax = 0xffffff7du;
/* 1012432: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1012433: add esp, 0x84 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1012439: ret  */
  esp += 4; SPILL(); return;
L_101243a: /* 101243a: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 101243d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 101243f: jne 0x1012450 */
  if (!zf) goto L_1012450;
L_1012441: /* 1012441: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1012442: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1012443: mov eax, 0xffffff76 */
  eax = 0xffffff76u;
/* 1012448: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1012449: add esp, 0x84 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 101244f: ret  */
  esp += 4; SPILL(); return;
L_1012450: /* 1012450: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1012451: mov ebx, dword ptr [esp + 0xa0] */
  ebx = R32((uint32_t)(esp + 0xa0u));
/* 1012458: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 101245a: jl 0x1012af6 */
  if ((sf != of)) goto L_1012af6;
L_1012460: /* 1012460: mov ecx, dword ptr [esp + 0x9c] */
  ecx = R32((uint32_t)(esp + 0x9cu));
/* 1012467: jg 0x1012471 */
  if ((!zf && sf == of)) goto L_1012471;
L_1012469: /* 1012469: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  cf = 0;
  }
/* 101246b: jb 0x1012af6 */
  if (cf) goto L_1012af6;
L_1012471: /* 1012471: cmp ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1012473: jg 0x1012af6 */
  if ((!zf && sf == of)) goto L_1012af6;
L_1012479: /* 1012479: jl 0x1012483 */
  if ((sf != of)) goto L_1012483;
L_101247b: /* 101247b: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 101247d: ja 0x1012af6 */
  if ((!cf && !zf)) goto L_1012af6;
L_1012483: /* 1012483: mov edi, dword ptr [esi + 0x34] */
  edi = R32((uint32_t)(esi + 0x34u));
/* 1012486: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  edi = r;
  }
/* 1012487: mov dword ptr [esp + 0x30], edi */
  W32((uint32_t)(esp + 0x30u), edi);
/* 101248b: js 0x10124cc */
  if (sf) goto L_10124cc;
L_101248d: /* 101248d: mov ebp, dword ptr [esi + 0x44] */
  ebp = R32((uint32_t)(esi + 0x44u));
/* 1012490: mov ecx, edi */
  ecx = edi;
/* 1012492: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 1012495: lea ecx, [ecx + ebp + 8] */
  ecx = (uint32_t)(ecx + ebp + 0x8u);
/* 1012499: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_10124a0: /* 10124a0: mov ebp, dword ptr [ecx] */
  ebp = R32((uint32_t)(ecx));
/* 10124a2: sub eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  eax = r;
  }
/* 10124a4: mov ebp, dword ptr [ecx + 4] */
  ebp = R32((uint32_t)(ecx + 0x4u));
/* 10124a7: sbb edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edx = r;
  }
/* 10124a9: cmp ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10124ab: jg 0x10124c0 */
  if ((!zf && sf == of)) goto L_10124c0;
L_10124ad: /* 10124ad: jl 0x10124b8 */
  if ((sf != of)) goto L_10124b8;
L_10124af: /* 10124af: cmp dword ptr [esp + 0x9c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x9cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10124b6: jae 0x10124c0 */
  if (!cf) goto L_10124c0;
L_10124b8: /* 10124b8: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 10124b9: sub ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 10124bc: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10124be: jge 0x10124a0 */
  if ((sf == of)) goto L_10124a0;
L_10124c0: /* 10124c0: mov dword ptr [esp + 0x30], edi */
  W32((uint32_t)(esp + 0x30u), edi);
/* 10124c4: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
/* 10124c8: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
L_10124cc: /* 10124cc: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* 10124cf: mov eax, dword ptr [edx + edi*8 + 8] */
  eax = R32((uint32_t)(edx + edi*8 + 0x8u));
/* 10124d3: mov ebp, dword ptr [edx + edi*8 + 4] */
  ebp = R32((uint32_t)(edx + edi*8 + 0x4u));
/* 10124d7: lea ecx, [edx + edi*8] */
  ecx = (uint32_t)(edx + edi*8);
/* 10124da: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 10124dd: shl edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 10124e0: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 10124e4: mov eax, dword ptr [esi + 0x44] */
  eax = R32((uint32_t)(esi + 0x44u));
/* 10124e7: mov ebx, dword ptr [edi + eax] */
  ebx = R32((uint32_t)(edi + eax));
/* 10124ea: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 10124ee: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10124f0: lea ecx, [edi + eax] */
  ecx = (uint32_t)(edi + eax);
/* 10124f3: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 10124f6: mov edi, dword ptr [ecx + 8] */
  edi = R32((uint32_t)(ecx + 0x8u));
/* 10124f9: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 10124fc: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edi = r;
  }
/* 10124fe: adc ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ecx = r;
  }
/* 1012500: mov dword ptr [esp + 0x50], ecx */
  W32((uint32_t)(esp + 0x50u), ecx);
/* 1012504: mov dword ptr [esp + 0x4c], edi */
  W32((uint32_t)(esp + 0x4cu), edi);
/* 1012508: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* 101250c: mov ecx, ebx */
  ecx = ebx;
/* 101250e: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  ecx = r;
  }
/* 1012510: mov edi, dword ptr [esp + 0x9c] */
  edi = R32((uint32_t)(esp + 0x9cu));
/* 1012517: mov dword ptr [esp + 0x44], ebx */
  W32((uint32_t)(esp + 0x44u), ebx);
/* 101251b: mov ebx, dword ptr [esp + 0x2c] */
  ebx = R32((uint32_t)(esp + 0x2cu));
/* 101251f: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 1012523: sbb eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 1012525: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ecx = r;
  }
/* 1012527: mov dword ptr [esp + 0x34], ecx */
  W32((uint32_t)(esp + 0x34u), ecx);
/* 101252b: adc eax, dword ptr [esp + 0xa0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0xa0u)));
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  eax = r;
  }
/* 1012532: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 1012536: cmp ebp, dword ptr [esp + 0x1c] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 101253a: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 101253e: mov dword ptr [esp + 0x3c], edx */
  W32((uint32_t)(esp + 0x3cu), edx);
/* 1012542: mov dword ptr [esp + 0x40], ebp */
  W32((uint32_t)(esp + 0x40u), ebp);
/* 1012546: jg 0x1012804 */
  if ((!zf && sf == of)) goto L_1012804;
L_101254c: /* 101254c: jl 0x1012560 */
  if ((sf != of)) goto L_1012560;
L_101254e: /* 101254e: cmp edx, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1012552: jae 0x1012804 */
  if (!cf) goto L_1012804;
L_1012558: /* 1012558: jmp 0x1012560 */
  goto L_1012560;
L_1012560: /* 1012560: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 1012564: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 1012568: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 101256c: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  ecx = r;
  }
/* 101256e: sbb eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 1012570: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1012572: jg 0x1012586 */
  if ((!zf && sf == of)) goto L_1012586;
L_1012574: /* 1012574: jl 0x101257e */
  if ((sf != of)) goto L_101257e;
L_1012576: /* 1012576: cmp ecx, 0x2134 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2134u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 101257c: jae 0x1012586 */
  if (!cf) goto L_1012586;
L_101257e: /* 101257e: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 1012582: mov edi, ebp */
  edi = ebp;
/* 1012584: jmp 0x10125e7 */
  goto L_10125e7;
L_1012586: /* 1012586: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 101258a: mov edi, dword ptr [esp + 0x44] */
  edi = R32((uint32_t)(esp + 0x44u));
/* 101258e: mov ebx, dword ptr [esp + 0x38] */
  ebx = R32((uint32_t)(esp + 0x38u));
/* 1012592: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  edx = r;
  }
/* 1012594: sbb ebx, dword ptr [esp + 0x48] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x48u)));
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ebx = r;
  }
/* 1012598: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1012599: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 101259a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 101259b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 101259c: call 0x1013cc0 */
  esp -= 4; W32(esp, 0x10125a1u); SPILL(); f_1013cc0(); if (g_unwind) return; RELOAD();
/* 10125a1: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 10125a5: mov ebx, dword ptr [esp + 0x48] */
  ebx = R32((uint32_t)(esp + 0x48u));
/* 10125a9: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  ecx = r;
  }
/* 10125ab: mov edi, dword ptr [esp + 0x50] */
  edi = R32((uint32_t)(esp + 0x50u));
/* 10125af: sbb edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edi = r;
  }
/* 10125b1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10125b2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10125b3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10125b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10125b5: call 0x1013b90 */
  esp -= 4; W32(esp, 0x10125bau); SPILL(); f_1013b90(); if (g_unwind) return; RELOAD();
/* 10125ba: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 10125be: mov ebx, eax */
  ebx = eax;
/* 10125c0: add ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ebx = r;
  }
/* 10125c2: mov edi, edx */
  edi = edx;
/* 10125c4: adc edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edi = r;
  }
/* 10125c6: sub ebx, 0x2134 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2134u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  ebx = r;
  }
/* 10125cc: sbb edi, 0 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edi = r;
  }
/* 10125cf: cmp edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10125d1: jg 0x10125e7 */
  if ((!zf && sf == of)) goto L_10125e7;
L_10125d3: /* 10125d3: jl 0x10125db */
  if ((sf != of)) goto L_10125db;
L_10125d5: /* 10125d5: mov eax, ecx */
  eax = ecx;
/* 10125d7: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 10125d9: ja 0x10125e7 */
  if ((!cf && !zf)) goto L_10125e7;
L_10125db: /* 10125db: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 10125df: add ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ebx = r;
  }
/* 10125e2: mov edi, ebp */
  edi = ebp;
/* 10125e4: adc edi, 0 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edi = r;
  }
L_10125e7: /* 10125e7: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 10125e9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10125eb: je 0x1012610 */
  if (zf) goto L_1012610;
L_10125ed: /* 10125ed: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10125ef: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10125f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10125f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10125f2: call dword ptr [esi + 0x2c4] */
  { uint32_t t = R32((uint32_t)(esi + 0x2c4u)); esp -= 4; W32(esp, 0x10125f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10125f8: lea edx, [esi + 0x18] */
  edx = (uint32_t)(esi + 0x18u);
/* 10125fb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10125fc: mov dword ptr [esi + 8], ebx */
  W32((uint32_t)(esi + 0x8u), ebx);
/* 10125ff: mov dword ptr [esi + 0xc], edi */
  W32((uint32_t)(esi + 0xcu), edi);
/* 1012602: call 0x1013adc */
  esp -= 4; W32(esp, 0x1012607u); SPILL(); f_1013adc(); if (g_unwind) return; RELOAD();
/* 1012607: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 101260a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_1012610: /* 1012610: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 1012613: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 1012617: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 101261a: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  eax = r;
  }
/* 101261c: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 1012620: sbb ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ecx = r;
  }
/* 1012622: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1012623: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1012624: lea edx, [esp + 0x6c] */
  edx = (uint32_t)(esp + 0x6cu);
/* 1012628: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1012629: call 0x1011040 */
  esp -= 4; W32(esp, 0x101262eu); SPILL(); f_1011040(); if (g_unwind) return; RELOAD();
/* 101262e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1012631: cmp eax, -0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffff80u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1012634: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 1012638: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 101263c: jne 0x1012649 */
  if (!zf) goto L_1012649;
L_101263e: /* 101263e: mov eax, edx */
  eax = edx;
/* 1012640: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1012643: je 0x1012aae */
  if (zf) goto L_1012aae;
L_1012649: /* 1012649: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 101264d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 101264f: jg 0x10126ba */
  if ((!zf && sf == of)) goto L_10126ba;
L_1012651: /* 1012651: jl 0x101265b */
  if ((sf != of)) goto L_101265b;
L_1012653: /* 1012653: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 1012657: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  cf = 0;
  }
/* 1012659: jae 0x10126ba */
  if (!cf) goto L_10126ba;
L_101265b: /* 101265b: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 101265f: add ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ecx = r;
  }
/* 1012662: mov eax, ebp */
  eax = ebp;
/* 1012664: adc eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  eax = r;
  }
/* 1012667: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1012669: jl 0x1012804 */
  if ((sf != of)) goto L_1012804;
L_101266f: /* 101266f: jg 0x1012679 */
  if ((!zf && sf == of)) goto L_1012679;
L_1012671: /* 1012671: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 1012673: jbe 0x1012804 */
  if ((cf | zf)) goto L_1012804;
L_1012679: /* 1012679: mov edx, ebx */
  edx = ebx;
/* 101267b: or edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  edx = r;
  }
/* 101267d: je 0x1012aae */
  if (zf) goto L_1012aae;
L_1012683: /* 1012683: add ebx, 0xffffdecc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffdeccu);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ebx = r;
  }
/* 1012689: adc edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edi = r;
  }
/* 101268c: cmp edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 101268e: jg 0x101269c */
  if ((!zf && sf == of)) goto L_101269c;
L_1012690: /* 1012690: jl 0x1012698 */
  if ((sf != of)) goto L_1012698;
L_1012692: /* 1012692: cmp ebx, dword ptr [esp + 0x20] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 1012696: ja 0x101269c */
  if ((!cf && !zf)) goto L_101269c;
L_1012698: /* 1012698: mov ebx, ecx */
  ebx = ecx;
/* 101269a: mov edi, eax */
  edi = eax;
L_101269c: /* 101269c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 101269e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10126a0: je 0x10127b7 */
  if (zf) goto L_10127b7;
L_10126a6: /* 10126a6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10126a8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10126a9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10126aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10126ab: call dword ptr [esi + 0x2c4] */
  { uint32_t t = R32((uint32_t)(esi + 0x2c4u)); esp -= 4; W32(esp, 0x10126b1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10126b1: lea eax, [esi + 0x18] */
  eax = (uint32_t)(esi + 0x18u);
/* 10126b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10126b5: jmp 0x10127a9 */
  goto L_10127a9;
L_10126ba: /* 10126ba: lea ecx, [esp + 0x64] */
  ecx = (uint32_t)(esp + 0x64u);
/* 10126be: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10126bf: call 0x1013b00 */
  esp -= 4; W32(esp, 0x10126c4u); SPILL(); f_1013b00(); if (g_unwind) return; RELOAD();
/* 10126c4: mov ecx, eax */
  ecx = eax;
/* 10126c6: and ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 10126c8: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10126cb: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10126ce: je 0x10127b7 */
  if (zf) goto L_10127b7;
L_10126d4: /* 10126d4: cmp edx, dword ptr [esp + 0x38] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x38u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10126d8: jg 0x101272d */
  if ((!zf && sf == of)) goto L_101272d;
L_10126da: /* 10126da: jl 0x10126e2 */
  if ((sf != of)) goto L_10126e2;
L_10126dc: /* 10126dc: cmp eax, dword ptr [esp + 0x34] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10126e0: jae 0x101272d */
  if (!cf) goto L_101272d;
L_10126e2: /* 10126e2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 10126e6: mov ebx, dword ptr [esi + 8] */
  ebx = R32((uint32_t)(esi + 0x8u));
/* 10126e9: mov ebp, dword ptr [esi + 0xc] */
  ebp = R32((uint32_t)(esi + 0xcu));
/* 10126ec: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 10126f0: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 10126f4: mov dword ptr [esp + 0x40], ecx */
  W32((uint32_t)(esp + 0x40u), ecx);
/* 10126f8: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 10126fc: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  ecx = r;
  }
/* 10126fe: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* 1012702: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 1012706: sbb eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 1012708: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 101270a: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 101270e: mov dword ptr [esp + 0x48], edx */
  W32((uint32_t)(esp + 0x48u), edx);
/* 1012712: jg 0x10127ea */
  if ((!zf && sf == of)) goto L_10127ea;
L_1012718: /* 1012718: jl 0x1012726 */
  if ((sf != of)) goto L_1012726;
L_101271a: /* 101271a: cmp ecx, 0xac44 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xac44u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 1012720: ja 0x10127ea */
  if ((!cf && !zf)) goto L_10127ea;
L_1012726: /* 1012726: mov edi, ebp */
  edi = ebp;
/* 1012728: jmp 0x10127b7 */
  goto L_10127b7;
L_101272d: /* 101272d: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 1012731: add ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ecx = r;
  }
/* 1012734: mov dword ptr [esp + 0x54], ecx */
  W32((uint32_t)(esp + 0x54u), ecx);
/* 1012738: mov ecx, ebp */
  ecx = ebp;
/* 101273a: adc ecx, 0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ecx = r;
  }
/* 101273d: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 101273f: mov dword ptr [esp + 0x58], ecx */
  W32((uint32_t)(esp + 0x58u), ecx);
/* 1012743: jl 0x1012804 */
  if ((sf != of)) goto L_1012804;
L_1012749: /* 1012749: jg 0x1012755 */
  if ((!zf && sf == of)) goto L_1012755;
L_101274b: /* 101274b: cmp ebx, dword ptr [esp + 0x54] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x54u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 101274f: jbe 0x1012804 */
  if ((cf | zf)) goto L_1012804;
L_1012755: /* 1012755: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 1012759: cmp ecx, dword ptr [esi + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 101275c: jne 0x10127d2 */
  if (!zf) goto L_10127d2;
L_101275e: /* 101275e: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 1012762: cmp ecx, dword ptr [esi + 0xc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1012765: jne 0x10127d2 */
  if (!zf) goto L_10127d2;
L_1012767: /* 1012767: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 101276b: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 101276f: add ebx, 0xffffdecc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffdeccu);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ebx = r;
  }
/* 1012775: adc edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edi = r;
  }
/* 1012778: cmp edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 101277a: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 101277e: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 1012782: jg 0x1012794 */
  if ((!zf && sf == of)) goto L_1012794;
L_1012784: /* 1012784: jl 0x101278c */
  if ((sf != of)) goto L_101278c;
L_1012786: /* 1012786: cmp ebx, dword ptr [esp + 0x20] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 101278a: ja 0x1012794 */
  if ((!cf && !zf)) goto L_1012794;
L_101278c: /* 101278c: mov ebx, dword ptr [esp + 0x54] */
  ebx = R32((uint32_t)(esp + 0x54u));
/* 1012790: mov edi, dword ptr [esp + 0x58] */
  edi = R32((uint32_t)(esp + 0x58u));
L_1012794: /* 1012794: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 1012796: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1012798: je 0x10127b7 */
  if (zf) goto L_10127b7;
L_101279a: /* 101279a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 101279c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 101279d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 101279e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 101279f: call dword ptr [esi + 0x2c4] */
  { uint32_t t = R32((uint32_t)(esi + 0x2c4u)); esp -= 4; W32(esp, 0x10127a5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10127a5: lea ecx, [esi + 0x18] */
  ecx = (uint32_t)(esi + 0x18u);
/* 10127a8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
L_10127a9: /* 10127a9: mov dword ptr [esi + 0xc], edi */
  W32((uint32_t)(esi + 0xcu), edi);
/* 10127ac: mov dword ptr [esi + 8], ebx */
  W32((uint32_t)(esi + 0x8u), ebx);
/* 10127af: call 0x1013adc */
  esp -= 4; W32(esp, 0x10127b4u); SPILL(); f_1013adc(); if (g_unwind) return; RELOAD();
/* 10127b4: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_10127b7: /* 10127b7: cmp ebp, dword ptr [esp + 0x1c] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10127bb: jg 0x1012804 */
  if ((!zf && sf == of)) goto L_1012804;
L_10127bd: /* 10127bd: jl 0x1012610 */
  if ((sf != of)) goto L_1012610;
L_10127c3: /* 10127c3: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 10127c7: cmp dword ptr [esp + 0x20], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x20u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10127cb: jae 0x1012804 */
  if (!cf) goto L_1012804;
L_10127cd: /* 10127cd: jmp 0x1012610 */
  goto L_1012610;
L_10127d2: /* 10127d2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 10127d6: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 10127da: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 10127de: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 10127e2: mov dword ptr [esp + 0x4c], eax */
  W32((uint32_t)(esp + 0x4cu), eax);
/* 10127e6: mov dword ptr [esp + 0x50], edx */
  W32((uint32_t)(esp + 0x50u), edx);
L_10127ea: /* 10127ea: cmp ebp, dword ptr [esp + 0x1c] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10127ee: jl 0x1012560 */
  if ((sf != of)) goto L_1012560;
L_10127f4: /* 10127f4: jg 0x1012804 */
  if ((!zf && sf == of)) goto L_1012804;
L_10127f6: /* 10127f6: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 10127fa: cmp dword ptr [esp + 0x20], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x20u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10127fe: jb 0x1012560 */
  if (cf) goto L_1012560;
L_1012804: /* 1012804: lea eax, [esi + 0x1e0] */
  eax = (uint32_t)(esi + 0x1e0u);
/* 101280a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 101280b: call 0x1013b66 */
  esp -= 4; W32(esp, 0x1012810u); SPILL(); f_1013b66(); if (g_unwind) return; RELOAD();
/* 1012810: lea eax, [esi + 0x250] */
  eax = (uint32_t)(esi + 0x250u);
/* 1012816: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1012817: call 0x1013b60 */
  esp -= 4; W32(esp, 0x101281cu); SPILL(); f_1013b60(); if (g_unwind) return; RELOAD();
/* 101281c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 101281e: mov ebx, dword ptr [esp + 0x44] */
  ebx = R32((uint32_t)(esp + 0x44u));
/* 1012822: xor ebp, ebp */
  ebp = 0;
/* 1012824: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1012827: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1012829: mov dword ptr [esi + 0x58], 2 */
  W32((uint32_t)(esi + 0x58u), 0x2u);
/* 1012830: mov dword ptr [esi + 0x68], ebp */
  W32((uint32_t)(esi + 0x68u), ebp);
/* 1012833: mov dword ptr [esi + 0x6c], ebp */
  W32((uint32_t)(esi + 0x6cu), ebp);
/* 1012836: mov dword ptr [esi + 0x70], ebp */
  W32((uint32_t)(esi + 0x70u), ebp);
/* 1012839: mov dword ptr [esi + 0x74], ebp */
  W32((uint32_t)(esi + 0x74u), ebp);
/* 101283c: je 0x101285e */
  if (zf) goto L_101285e;
L_101283e: /* 101283e: mov edi, dword ptr [esp + 0x40] */
  edi = R32((uint32_t)(esp + 0x40u));
/* 1012842: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1012843: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1012844: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1012845: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1012846: call dword ptr [esi + 0x2c4] */
  { uint32_t t = R32((uint32_t)(esi + 0x2c4u)); esp -= 4; W32(esp, 0x101284cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 101284c: lea eax, [esi + 0x18] */
  eax = (uint32_t)(esi + 0x18u);
/* 101284f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1012850: mov dword ptr [esi + 8], ebx */
  W32((uint32_t)(esi + 0x8u), ebx);
/* 1012853: mov dword ptr [esi + 0xc], edi */
  W32((uint32_t)(esi + 0xcu), edi);
/* 1012856: call 0x1013adc */
  esp -= 4; W32(esp, 0x101285bu); SPILL(); f_1013adc(); if (g_unwind) return; RELOAD();
/* 101285b: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_101285e: /* 101285e: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1012860: lea ecx, [esp + 0x58] */
  ecx = (uint32_t)(esp + 0x58u);
/* 1012864: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1012866: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1012867: call 0x1011040 */
  esp -= 4; W32(esp, 0x101286cu); SPILL(); f_1011040(); if (g_unwind) return; RELOAD();
/* 101286c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 101286f: cmp edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1012871: jg 0x1012889 */
  if ((!zf && sf == of)) goto L_1012889;
L_1012873: /* 1012873: jl 0x1012879 */
  if ((sf != of)) goto L_1012879;
L_1012875: /* 1012875: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1012877: jae 0x1012889 */
  if (!cf) goto L_1012889;
L_1012879: /* 1012879: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 101287a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 101287b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 101287c: mov eax, 0xfffffffe */
  eax = 0xfffffffeu;
/* 1012881: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1012882: add esp, 0x84 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1012888: ret  */
  esp += 4; SPILL(); return;
L_1012889: /* 1012889: lea edx, [esp + 0x54] */
  edx = (uint32_t)(esp + 0x54u);
/* 101288d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 101288e: call 0x1013ae8 */
  esp -= 4; W32(esp, 0x1012893u); SPILL(); f_1013ae8(); if (g_unwind) return; RELOAD();
/* 1012893: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 1012897: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1012898: lea edi, [esi + 0x78] */
  edi = (uint32_t)(esi + 0x78u);
/* 101289b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 101289c: mov dword ptr [esi + 0x5c], eax */
  W32((uint32_t)(esi + 0x5cu), eax);
/* 101289f: mov dword ptr [esi + 0x60], ecx */
  W32((uint32_t)(esi + 0x60u), ecx);
/* 10128a2: call 0x1013afa */
  esp -= 4; W32(esp, 0x10128a7u); SPILL(); f_1013afa(); if (g_unwind) return; RELOAD();
/* 10128a7: lea edx, [esp + 0x60] */
  edx = (uint32_t)(esp + 0x60u);
/* 10128ab: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10128ac: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10128ad: mov dword ptr [esi + 0x58], 3 */
  W32((uint32_t)(esi + 0x58u), 0x3u);
/* 10128b4: call 0x1013af4 */
  esp -= 4; W32(esp, 0x10128b9u); SPILL(); f_1013af4(); if (g_unwind) return; RELOAD();
/* 10128b9: lea eax, [esp + 0x88] */
  eax = (uint32_t)(esp + 0x88u);
/* 10128c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10128c1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10128c2: call 0x1013b24 */
  esp -= 4; W32(esp, 0x10128c7u); SPILL(); f_1013b24(); if (g_unwind) return; RELOAD();
/* 10128c7: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 10128c8: mov ecx, eax */
  ecx = eax;
/* 10128ca: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10128cd: or ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  ecx = r;
  }
/* 10128cf: je 0x101291a */
  if (zf) goto L_101291a;
L_10128d1: /* 10128d1: cmp edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10128d3: jl 0x1012a10 */
  if ((sf != of)) goto L_1012a10;
L_10128d9: /* 10128d9: jg 0x10128e3 */
  if ((!zf && sf == of)) goto L_10128e3;
L_10128db: /* 10128db: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10128dd: jb 0x1012a10 */
  if (cf) goto L_1012a10;
L_10128e3: /* 10128e3: mov eax, dword ptr [esp + 0x84] */
  eax = R32((uint32_t)(esp + 0x84u));
/* 10128ea: mov ecx, dword ptr [esp + 0x88] */
  ecx = R32((uint32_t)(esp + 0x88u));
/* 10128f1: mov edx, eax */
  edx = eax;
/* 10128f3: and edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 10128f5: cmp edx, -1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10128f8: jne 0x1012a1d */
  if (!zf) goto L_1012a1d;
L_10128fe: /* 10128fe: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10128ff: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1012900: call 0x1013aee */
  esp -= 4; W32(esp, 0x1012905u); SPILL(); f_1013aee(); if (g_unwind) return; RELOAD();
/* 1012905: lea eax, [esp + 0x7c] */
  eax = (uint32_t)(esp + 0x7cu);
/* 1012909: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 101290a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 101290b: call 0x1013b24 */
  esp -= 4; W32(esp, 0x1012910u); SPILL(); f_1013b24(); if (g_unwind) return; RELOAD();
/* 1012910: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 1012911: mov ecx, eax */
  ecx = eax;
/* 1012913: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1012916: or ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  ecx = r;
  }
/* 1012918: jne 0x10128d1 */
  if (!zf) goto L_10128d1;
L_101291a: /* 101291a: lea eax, [esi + 0x1e0] */
  eax = (uint32_t)(esi + 0x1e0u);
/* 1012920: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1012921: call 0x1013b66 */
  esp -= 4; W32(esp, 0x1012926u); SPILL(); f_1013b66(); if (g_unwind) return; RELOAD();
/* 1012926: lea eax, [esi + 0x250] */
  eax = (uint32_t)(esi + 0x250u);
/* 101292c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 101292d: call 0x1013b60 */
  esp -= 4; W32(esp, 0x1012932u); SPILL(); f_1013b60(); if (g_unwind) return; RELOAD();
/* 1012932: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 1012934: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1012937: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1012939: mov dword ptr [esi + 0x58], 2 */
  W32((uint32_t)(esi + 0x58u), 0x2u);
/* 1012940: mov dword ptr [esi + 0x68], ebp */
  W32((uint32_t)(esi + 0x68u), ebp);
/* 1012943: mov dword ptr [esi + 0x6c], ebp */
  W32((uint32_t)(esi + 0x6cu), ebp);
/* 1012946: mov dword ptr [esi + 0x70], ebp */
  W32((uint32_t)(esi + 0x70u), ebp);
/* 1012949: mov dword ptr [esi + 0x74], ebp */
  W32((uint32_t)(esi + 0x74u), ebp);
/* 101294c: je 0x101296e */
  if (zf) goto L_101296e;
L_101294e: /* 101294e: mov edi, dword ptr [esp + 0x40] */
  edi = R32((uint32_t)(esp + 0x40u));
/* 1012952: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1012953: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1012954: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1012955: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1012956: call dword ptr [esi + 0x2c4] */
  { uint32_t t = R32((uint32_t)(esi + 0x2c4u)); esp -= 4; W32(esp, 0x101295cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 101295c: lea edx, [esi + 0x18] */
  edx = (uint32_t)(esi + 0x18u);
/* 101295f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1012960: mov dword ptr [esi + 8], ebx */
  W32((uint32_t)(esi + 0x8u), ebx);
/* 1012963: mov dword ptr [esi + 0xc], edi */
  W32((uint32_t)(esi + 0xcu), edi);
/* 1012966: call 0x1013adc */
  esp -= 4; W32(esp, 0x101296bu); SPILL(); f_1013adc(); if (g_unwind) return; RELOAD();
/* 101296b: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_101296e: /* 101296e: lea eax, [esp + 0x54] */
  eax = (uint32_t)(esp + 0x54u);
/* 1012972: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1012973: mov eax, esi */
  eax = esi;
/* 1012975: call 0x1011150 */
  esp -= 4; W32(esp, 0x101297au); SPILL(); f_1011150(); if (g_unwind) return; RELOAD();
/* 101297a: mov edi, edx */
  edi = edx;
/* 101297c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 101297f: cmp edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1012981: mov ebx, eax */
  ebx = eax;
/* 1012983: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 1012987: jl 0x1012aae */
  if ((sf != of)) goto L_1012aae;
L_101298d: /* 101298d: jg 0x10129a0 */
  if ((!zf && sf == of)) goto L_10129a0;
L_101298f: /* 101298f: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1012991: jb 0x1012aae */
  if (cf) goto L_1012aae;
L_1012997: /* 1012997: jmp 0x10129a0 */
  goto L_10129a0;
L_10129a0: /* 10129a0: lea ecx, [esp + 0x54] */
  ecx = (uint32_t)(esp + 0x54u);
/* 10129a4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10129a5: call 0x1013b00 */
  esp -= 4; W32(esp, 0x10129aau); SPILL(); f_1013b00(); if (g_unwind) return; RELOAD();
/* 10129aa: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10129ad: cmp edx, -1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10129b0: jg 0x10129f6 */
  if ((!zf && sf == of)) goto L_10129f6;
L_10129b2: /* 10129b2: jl 0x10129b9 */
  if ((sf != of)) goto L_10129b9;
L_10129b4: /* 10129b4: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 10129b7: ja 0x10129f6 */
  if ((!cf && !zf)) goto L_10129f6;
L_10129b9: /* 10129b9: lea edx, [esp + 0x54] */
  edx = (uint32_t)(esp + 0x54u);
/* 10129bd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10129be: call 0x1013b1e */
  esp -= 4; W32(esp, 0x10129c3u); SPILL(); f_1013b1e(); if (g_unwind) return; RELOAD();
/* 10129c3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10129c6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10129c8: je 0x10129f6 */
  if (zf) goto L_10129f6;
L_10129ca: /* 10129ca: lea eax, [esp + 0x54] */
  eax = (uint32_t)(esp + 0x54u);
/* 10129ce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10129cf: mov eax, esi */
  eax = esi;
/* 10129d1: mov dword ptr [esi + 8], ebx */
  W32((uint32_t)(esi + 0x8u), ebx);
/* 10129d4: mov dword ptr [esi + 0xc], edi */
  W32((uint32_t)(esi + 0xcu), edi);
/* 10129d7: call 0x1011150 */
  esp -= 4; W32(esp, 0x10129dcu); SPILL(); f_1011150(); if (g_unwind) return; RELOAD();
/* 10129dc: mov edi, edx */
  edi = edx;
/* 10129de: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10129e1: cmp edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10129e3: mov ebx, eax */
  ebx = eax;
/* 10129e5: jg 0x10129a0 */
  if ((!zf && sf == of)) goto L_10129a0;
L_10129e7: /* 10129e7: jl 0x10129ed */
  if ((sf != of)) goto L_10129ed;
L_10129e9: /* 10129e9: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10129eb: jae 0x10129a0 */
  if (!cf) goto L_10129a0;
L_10129ed: /* 10129ed: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 10129f1: jmp 0x1012aae */
  goto L_1012aae;
L_10129f6: /* 10129f6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10129f7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10129f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10129f9: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 10129fd: call 0x1012110 */
  esp -= 4; W32(esp, 0x1012a02u); SPILL(); f_1012110(); if (g_unwind) return; RELOAD();
/* 1012a02: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1012a05: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1012a06: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1012a07: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1012a08: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1012a09: add esp, 0x84 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1012a0f: ret  */
  esp += 4; SPILL(); return;
L_1012a10: /* 1012a10: mov dword ptr [esp + 0x10], 0xffffff78 */
  W32((uint32_t)(esp + 0x10u), 0xffffff78u);
/* 1012a18: jmp 0x1012aa6 */
  goto L_1012aa6;
L_1012a1d: /* 1012a1d: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 1012a20: mov edi, dword ptr [esi + 0x44] */
  edi = R32((uint32_t)(esi + 0x44u));
/* 1012a23: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 1012a26: sub eax, dword ptr [edx + edi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx + edi)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  eax = r;
  }
/* 1012a29: sbb ecx, dword ptr [edx + edi + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + edi + 0x4u)));
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ecx = r;
  }
/* 1012a2d: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* 1012a30: mov eax, ecx */
  eax = ecx;
/* 1012a32: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1012a34: mov dword ptr [esi + 0x54], ecx */
  W32((uint32_t)(esi + 0x54u), ecx);
/* 1012a37: jg 0x1012a46 */
  if ((!zf && sf == of)) goto L_1012a46;
L_1012a39: /* 1012a39: jl 0x1012a40 */
  if ((sf != of)) goto L_1012a40;
L_1012a3b: /* 1012a3b: cmp dword ptr [esi + 0x50], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x50u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1012a3e: jae 0x1012a46 */
  if (!cf) goto L_1012a46;
L_1012a40: /* 1012a40: mov dword ptr [esi + 0x50], ebp */
  W32((uint32_t)(esi + 0x50u), ebp);
/* 1012a43: mov dword ptr [esi + 0x54], ebp */
  W32((uint32_t)(esi + 0x54u), ebp);
L_1012a46: /* 1012a46: mov edi, dword ptr [esi + 0x50] */
  edi = R32((uint32_t)(esi + 0x50u));
/* 1012a49: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 1012a4d: mov edx, dword ptr [esi + 0x54] */
  edx = R32((uint32_t)(esi + 0x54u));
/* 1012a50: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 1012a54: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edi = r;
  }
/* 1012a56: mov dword ptr [esi + 0x50], edi */
  W32((uint32_t)(esi + 0x50u), edi);
/* 1012a59: mov edi, dword ptr [esp + 0xa0] */
  edi = R32((uint32_t)(esp + 0xa0u));
/* 1012a60: adc edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 1012a62: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1012a64: mov dword ptr [esi + 0x54], edx */
  W32((uint32_t)(esi + 0x54u), edx);
/* 1012a67: jg 0x1012a9e */
  if ((!zf && sf == of)) goto L_1012a9e;
L_1012a69: /* 1012a69: jl 0x1012a77 */
  if ((sf != of)) goto L_1012a77;
L_1012a6b: /* 1012a6b: mov eax, dword ptr [esi + 0x50] */
  eax = R32((uint32_t)(esi + 0x50u));
/* 1012a6e: cmp eax, dword ptr [esp + 0x9c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x9cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 1012a75: ja 0x1012a9e */
  if ((!cf && !zf)) goto L_1012a9e;
L_1012a77: /* 1012a77: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1012a79: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1012a7a: call 0x1011ff0 */
  esp -= 4; W32(esp, 0x1012a7fu); SPILL(); f_1011ff0(); if (g_unwind) return; RELOAD();
/* 1012a7f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1012a82: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1012a84: jg 0x1012a9e */
  if ((!zf && sf == of)) goto L_1012a9e;
L_1012a86: /* 1012a86: jl 0x1012a91 */
  if ((sf != of)) goto L_1012a91;
L_1012a88: /* 1012a88: cmp dword ptr [esp + 0x9c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x9cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 1012a8f: ja 0x1012a9e */
  if ((!cf && !zf)) goto L_1012a9e;
L_1012a91: /* 1012a91: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1012a92: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1012a93: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1012a94: xor eax, eax */
  eax = 0;
/* 1012a96: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1012a97: add esp, 0x84 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1012a9d: ret  */
  esp += 4; SPILL(); return;
L_1012a9e: /* 1012a9e: mov dword ptr [esp + 0x10], 0xffffff7f */
  W32((uint32_t)(esp + 0x10u), 0xffffff7fu);
L_1012aa6: /* 1012aa6: mov dword ptr [esp + 0x14], 0xffffffff */
  W32((uint32_t)(esp + 0x14u), 0xffffffffu);
L_1012aae: /* 1012aae: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 1012ab1: lea ecx, [esi + 0x1e0] */
  ecx = (uint32_t)(esi + 0x1e0u);
/* 1012ab7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1012ab8: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* 1012abb: mov dword ptr [esi + 0x54], eax */
  W32((uint32_t)(esi + 0x54u), eax);
/* 1012abe: call 0x1013b66 */
  esp -= 4; W32(esp, 0x1012ac3u); SPILL(); f_1013b66(); if (g_unwind) return; RELOAD();
/* 1012ac3: lea edx, [esi + 0x250] */
  edx = (uint32_t)(esi + 0x250u);
/* 1012ac9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1012aca: call 0x1013b60 */
  esp -= 4; W32(esp, 0x1012acfu); SPILL(); f_1013b60(); if (g_unwind) return; RELOAD();
/* 1012acf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1012ad2: xor eax, eax */
  eax = 0;
/* 1012ad4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1012ad5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1012ad6: mov dword ptr [esi + 0x68], eax */
  W32((uint32_t)(esi + 0x68u), eax);
/* 1012ad9: mov dword ptr [esi + 0x6c], eax */
  W32((uint32_t)(esi + 0x6cu), eax);
/* 1012adc: mov dword ptr [esi + 0x70], eax */
  W32((uint32_t)(esi + 0x70u), eax);
/* 1012adf: mov dword ptr [esi + 0x74], eax */
  W32((uint32_t)(esi + 0x74u), eax);
/* 1012ae2: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 1012ae6: mov dword ptr [esi + 0x58], 2 */
  W32((uint32_t)(esi + 0x58u), 0x2u);
/* 1012aed: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1012aee: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1012aef: add esp, 0x84 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1012af5: ret  */
  esp += 4; SPILL(); return;
L_1012af6: /* 1012af6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1012af7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1012af8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1012af9: mov eax, 0xffffff7d */
  eax = 0xffffff7du;
/* 1012afe: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1012aff: add esp, 0x84 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1012b05: ret  */
  esp += 4; SPILL(); return;
}

void f_101255a(void) {
  LOAD_REGS();
L_101255a: /* 101255a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_1012560: /* 1012560: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 1012564: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 1012568: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 101256c: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  ecx = r;
  }
/* 101256e: sbb eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 1012570: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1012572: jg 0x1012586 */
  if ((!zf && sf == of)) goto L_1012586;
L_1012574: /* 1012574: jl 0x101257e */
  if ((sf != of)) goto L_101257e;
L_1012576: /* 1012576: cmp ecx, 0x2134 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2134u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 101257c: jae 0x1012586 */
  if (!cf) goto L_1012586;
L_101257e: /* 101257e: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 1012582: mov edi, ebp */
  edi = ebp;
/* 1012584: jmp 0x10125e7 */
  goto L_10125e7;
L_1012586: /* 1012586: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 101258a: mov edi, dword ptr [esp + 0x44] */
  edi = R32((uint32_t)(esp + 0x44u));
/* 101258e: mov ebx, dword ptr [esp + 0x38] */
  ebx = R32((uint32_t)(esp + 0x38u));
/* 1012592: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  edx = r;
  }
/* 1012594: sbb ebx, dword ptr [esp + 0x48] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x48u)));
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ebx = r;
  }
/* 1012598: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1012599: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 101259a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 101259b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 101259c: call 0x1013cc0 */
  esp -= 4; W32(esp, 0x10125a1u); SPILL(); f_1013cc0(); if (g_unwind) return; RELOAD();
/* 10125a1: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 10125a5: mov ebx, dword ptr [esp + 0x48] */
  ebx = R32((uint32_t)(esp + 0x48u));
/* 10125a9: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  ecx = r;
  }
/* 10125ab: mov edi, dword ptr [esp + 0x50] */
  edi = R32((uint32_t)(esp + 0x50u));
/* 10125af: sbb edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edi = r;
  }
/* 10125b1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10125b2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10125b3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10125b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10125b5: call 0x1013b90 */
  esp -= 4; W32(esp, 0x10125bau); SPILL(); f_1013b90(); if (g_unwind) return; RELOAD();
/* 10125ba: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 10125be: mov ebx, eax */
  ebx = eax;
/* 10125c0: add ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ebx = r;
  }
/* 10125c2: mov edi, edx */
  edi = edx;
/* 10125c4: adc edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edi = r;
  }
/* 10125c6: sub ebx, 0x2134 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2134u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  ebx = r;
  }
/* 10125cc: sbb edi, 0 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edi = r;
  }
/* 10125cf: cmp edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10125d1: jg 0x10125e7 */
  if ((!zf && sf == of)) goto L_10125e7;
L_10125d3: /* 10125d3: jl 0x10125db */
  if ((sf != of)) goto L_10125db;
L_10125d5: /* 10125d5: mov eax, ecx */
  eax = ecx;
/* 10125d7: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 10125d9: ja 0x10125e7 */
  if ((!cf && !zf)) goto L_10125e7;
L_10125db: /* 10125db: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 10125df: add ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ebx = r;
  }
/* 10125e2: mov edi, ebp */
  edi = ebp;
/* 10125e4: adc edi, 0 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edi = r;
  }
L_10125e7: /* 10125e7: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 10125e9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10125eb: je 0x1012610 */
  if (zf) goto L_1012610;
L_10125ed: /* 10125ed: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10125ef: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10125f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10125f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10125f2: call dword ptr [esi + 0x2c4] */
  { uint32_t t = R32((uint32_t)(esi + 0x2c4u)); esp -= 4; W32(esp, 0x10125f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10125f8: lea edx, [esi + 0x18] */
  edx = (uint32_t)(esi + 0x18u);
/* 10125fb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10125fc: mov dword ptr [esi + 8], ebx */
  W32((uint32_t)(esi + 0x8u), ebx);
/* 10125ff: mov dword ptr [esi + 0xc], edi */
  W32((uint32_t)(esi + 0xcu), edi);
/* 1012602: call 0x1013adc */
  esp -= 4; W32(esp, 0x1012607u); SPILL(); f_1013adc(); if (g_unwind) return; RELOAD();
/* 1012607: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 101260a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_1012610: /* 1012610: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 1012613: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 1012617: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 101261a: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  eax = r;
  }
/* 101261c: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 1012620: sbb ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ecx = r;
  }
/* 1012622: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1012623: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1012624: lea edx, [esp + 0x6c] */
  edx = (uint32_t)(esp + 0x6cu);
/* 1012628: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1012629: call 0x1011040 */
  esp -= 4; W32(esp, 0x101262eu); SPILL(); f_1011040(); if (g_unwind) return; RELOAD();
/* 101262e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1012631: cmp eax, -0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffff80u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1012634: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 1012638: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 101263c: jne 0x1012649 */
  if (!zf) goto L_1012649;
L_101263e: /* 101263e: mov eax, edx */
  eax = edx;
/* 1012640: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1012643: je 0x1012aae */
  if (zf) goto L_1012aae;
L_1012649: /* 1012649: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 101264d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 101264f: jg 0x10126ba */
  if ((!zf && sf == of)) goto L_10126ba;
L_1012651: /* 1012651: jl 0x101265b */
  if ((sf != of)) goto L_101265b;
L_1012653: /* 1012653: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 1012657: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  cf = 0;
  }
/* 1012659: jae 0x10126ba */
  if (!cf) goto L_10126ba;
L_101265b: /* 101265b: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 101265f: add ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ecx = r;
  }
/* 1012662: mov eax, ebp */
  eax = ebp;
/* 1012664: adc eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  eax = r;
  }
/* 1012667: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1012669: jl 0x1012804 */
  if ((sf != of)) goto L_1012804;
L_101266f: /* 101266f: jg 0x1012679 */
  if ((!zf && sf == of)) goto L_1012679;
L_1012671: /* 1012671: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 1012673: jbe 0x1012804 */
  if ((cf | zf)) goto L_1012804;
L_1012679: /* 1012679: mov edx, ebx */
  edx = ebx;
/* 101267b: or edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  edx = r;
  }
/* 101267d: je 0x1012aae */
  if (zf) goto L_1012aae;
L_1012683: /* 1012683: add ebx, 0xffffdecc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffdeccu);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ebx = r;
  }
/* 1012689: adc edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edi = r;
  }
/* 101268c: cmp edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 101268e: jg 0x101269c */
  if ((!zf && sf == of)) goto L_101269c;
L_1012690: /* 1012690: jl 0x1012698 */
  if ((sf != of)) goto L_1012698;
L_1012692: /* 1012692: cmp ebx, dword ptr [esp + 0x20] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 1012696: ja 0x101269c */
  if ((!cf && !zf)) goto L_101269c;
L_1012698: /* 1012698: mov ebx, ecx */
  ebx = ecx;
/* 101269a: mov edi, eax */
  edi = eax;
L_101269c: /* 101269c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 101269e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10126a0: je 0x10127b7 */
  if (zf) goto L_10127b7;
L_10126a6: /* 10126a6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10126a8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10126a9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10126aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10126ab: call dword ptr [esi + 0x2c4] */
  { uint32_t t = R32((uint32_t)(esi + 0x2c4u)); esp -= 4; W32(esp, 0x10126b1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10126b1: lea eax, [esi + 0x18] */
  eax = (uint32_t)(esi + 0x18u);
/* 10126b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10126b5: jmp 0x10127a9 */
  goto L_10127a9;
L_10126ba: /* 10126ba: lea ecx, [esp + 0x64] */
  ecx = (uint32_t)(esp + 0x64u);
/* 10126be: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10126bf: call 0x1013b00 */
  esp -= 4; W32(esp, 0x10126c4u); SPILL(); f_1013b00(); if (g_unwind) return; RELOAD();
/* 10126c4: mov ecx, eax */
  ecx = eax;
/* 10126c6: and ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 10126c8: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10126cb: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10126ce: je 0x10127b7 */
  if (zf) goto L_10127b7;
L_10126d4: /* 10126d4: cmp edx, dword ptr [esp + 0x38] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x38u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10126d8: jg 0x101272d */
  if ((!zf && sf == of)) goto L_101272d;
L_10126da: /* 10126da: jl 0x10126e2 */
  if ((sf != of)) goto L_10126e2;
L_10126dc: /* 10126dc: cmp eax, dword ptr [esp + 0x34] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10126e0: jae 0x101272d */
  if (!cf) goto L_101272d;
L_10126e2: /* 10126e2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 10126e6: mov ebx, dword ptr [esi + 8] */
  ebx = R32((uint32_t)(esi + 0x8u));
/* 10126e9: mov ebp, dword ptr [esi + 0xc] */
  ebp = R32((uint32_t)(esi + 0xcu));
/* 10126ec: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 10126f0: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 10126f4: mov dword ptr [esp + 0x40], ecx */
  W32((uint32_t)(esp + 0x40u), ecx);
/* 10126f8: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 10126fc: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  ecx = r;
  }
/* 10126fe: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* 1012702: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 1012706: sbb eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 1012708: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 101270a: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 101270e: mov dword ptr [esp + 0x48], edx */
  W32((uint32_t)(esp + 0x48u), edx);
/* 1012712: jg 0x10127ea */
  if ((!zf && sf == of)) goto L_10127ea;
L_1012718: /* 1012718: jl 0x1012726 */
  if ((sf != of)) goto L_1012726;
L_101271a: /* 101271a: cmp ecx, 0xac44 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xac44u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 1012720: ja 0x10127ea */
  if ((!cf && !zf)) goto L_10127ea;
L_1012726: /* 1012726: mov edi, ebp */
  edi = ebp;
/* 1012728: jmp 0x10127b7 */
  goto L_10127b7;
L_101272d: /* 101272d: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 1012731: add ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ecx = r;
  }
/* 1012734: mov dword ptr [esp + 0x54], ecx */
  W32((uint32_t)(esp + 0x54u), ecx);
/* 1012738: mov ecx, ebp */
  ecx = ebp;
/* 101273a: adc ecx, 0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ecx = r;
  }
/* 101273d: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 101273f: mov dword ptr [esp + 0x58], ecx */
  W32((uint32_t)(esp + 0x58u), ecx);
/* 1012743: jl 0x1012804 */
  if ((sf != of)) goto L_1012804;
L_1012749: /* 1012749: jg 0x1012755 */
  if ((!zf && sf == of)) goto L_1012755;
L_101274b: /* 101274b: cmp ebx, dword ptr [esp + 0x54] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x54u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 101274f: jbe 0x1012804 */
  if ((cf | zf)) goto L_1012804;
L_1012755: /* 1012755: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 1012759: cmp ecx, dword ptr [esi + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 101275c: jne 0x10127d2 */
  if (!zf) goto L_10127d2;
L_101275e: /* 101275e: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 1012762: cmp ecx, dword ptr [esi + 0xc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1012765: jne 0x10127d2 */
  if (!zf) goto L_10127d2;
L_1012767: /* 1012767: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 101276b: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 101276f: add ebx, 0xffffdecc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffdeccu);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ebx = r;
  }
/* 1012775: adc edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edi = r;
  }
/* 1012778: cmp edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 101277a: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 101277e: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 1012782: jg 0x1012794 */
  if ((!zf && sf == of)) goto L_1012794;
L_1012784: /* 1012784: jl 0x101278c */
  if ((sf != of)) goto L_101278c;
L_1012786: /* 1012786: cmp ebx, dword ptr [esp + 0x20] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 101278a: ja 0x1012794 */
  if ((!cf && !zf)) goto L_1012794;
L_101278c: /* 101278c: mov ebx, dword ptr [esp + 0x54] */
  ebx = R32((uint32_t)(esp + 0x54u));
/* 1012790: mov edi, dword ptr [esp + 0x58] */
  edi = R32((uint32_t)(esp + 0x58u));
L_1012794: /* 1012794: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 1012796: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1012798: je 0x10127b7 */
  if (zf) goto L_10127b7;
L_101279a: /* 101279a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 101279c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 101279d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 101279e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 101279f: call dword ptr [esi + 0x2c4] */
  { uint32_t t = R32((uint32_t)(esi + 0x2c4u)); esp -= 4; W32(esp, 0x10127a5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10127a5: lea ecx, [esi + 0x18] */
  ecx = (uint32_t)(esi + 0x18u);
/* 10127a8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
L_10127a9: /* 10127a9: mov dword ptr [esi + 0xc], edi */
  W32((uint32_t)(esi + 0xcu), edi);
/* 10127ac: mov dword ptr [esi + 8], ebx */
  W32((uint32_t)(esi + 0x8u), ebx);
/* 10127af: call 0x1013adc */
  esp -= 4; W32(esp, 0x10127b4u); SPILL(); f_1013adc(); if (g_unwind) return; RELOAD();
/* 10127b4: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_10127b7: /* 10127b7: cmp ebp, dword ptr [esp + 0x1c] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10127bb: jg 0x1012804 */
  if ((!zf && sf == of)) goto L_1012804;
L_10127bd: /* 10127bd: jl 0x1012610 */
  if ((sf != of)) goto L_1012610;
L_10127c3: /* 10127c3: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 10127c7: cmp dword ptr [esp + 0x20], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x20u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10127cb: jae 0x1012804 */
  if (!cf) goto L_1012804;
L_10127cd: /* 10127cd: jmp 0x1012610 */
  goto L_1012610;
L_10127d2: /* 10127d2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 10127d6: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 10127da: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 10127de: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 10127e2: mov dword ptr [esp + 0x4c], eax */
  W32((uint32_t)(esp + 0x4cu), eax);
/* 10127e6: mov dword ptr [esp + 0x50], edx */
  W32((uint32_t)(esp + 0x50u), edx);
L_10127ea: /* 10127ea: cmp ebp, dword ptr [esp + 0x1c] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10127ee: jl 0x1012560 */
  if ((sf != of)) goto L_1012560;
L_10127f4: /* 10127f4: jg 0x1012804 */
  if ((!zf && sf == of)) goto L_1012804;
L_10127f6: /* 10127f6: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 10127fa: cmp dword ptr [esp + 0x20], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x20u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10127fe: jb 0x1012560 */
  if (cf) goto L_1012560;
L_1012804: /* 1012804: lea eax, [esi + 0x1e0] */
  eax = (uint32_t)(esi + 0x1e0u);
/* 101280a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 101280b: call 0x1013b66 */
  esp -= 4; W32(esp, 0x1012810u); SPILL(); f_1013b66(); if (g_unwind) return; RELOAD();
/* 1012810: lea eax, [esi + 0x250] */
  eax = (uint32_t)(esi + 0x250u);
/* 1012816: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1012817: call 0x1013b60 */
  esp -= 4; W32(esp, 0x101281cu); SPILL(); f_1013b60(); if (g_unwind) return; RELOAD();
/* 101281c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 101281e: mov ebx, dword ptr [esp + 0x44] */
  ebx = R32((uint32_t)(esp + 0x44u));
/* 1012822: xor ebp, ebp */
  ebp = 0;
/* 1012824: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1012827: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1012829: mov dword ptr [esi + 0x58], 2 */
  W32((uint32_t)(esi + 0x58u), 0x2u);
/* 1012830: mov dword ptr [esi + 0x68], ebp */
  W32((uint32_t)(esi + 0x68u), ebp);
/* 1012833: mov dword ptr [esi + 0x6c], ebp */
  W32((uint32_t)(esi + 0x6cu), ebp);
/* 1012836: mov dword ptr [esi + 0x70], ebp */
  W32((uint32_t)(esi + 0x70u), ebp);
/* 1012839: mov dword ptr [esi + 0x74], ebp */
  W32((uint32_t)(esi + 0x74u), ebp);
/* 101283c: je 0x101285e */
  if (zf) goto L_101285e;
L_101283e: /* 101283e: mov edi, dword ptr [esp + 0x40] */
  edi = R32((uint32_t)(esp + 0x40u));
/* 1012842: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1012843: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1012844: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1012845: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1012846: call dword ptr [esi + 0x2c4] */
  { uint32_t t = R32((uint32_t)(esi + 0x2c4u)); esp -= 4; W32(esp, 0x101284cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 101284c: lea eax, [esi + 0x18] */
  eax = (uint32_t)(esi + 0x18u);
/* 101284f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1012850: mov dword ptr [esi + 8], ebx */
  W32((uint32_t)(esi + 0x8u), ebx);
/* 1012853: mov dword ptr [esi + 0xc], edi */
  W32((uint32_t)(esi + 0xcu), edi);
/* 1012856: call 0x1013adc */
  esp -= 4; W32(esp, 0x101285bu); SPILL(); f_1013adc(); if (g_unwind) return; RELOAD();
/* 101285b: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_101285e: /* 101285e: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1012860: lea ecx, [esp + 0x58] */
  ecx = (uint32_t)(esp + 0x58u);
/* 1012864: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1012866: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1012867: call 0x1011040 */
  esp -= 4; W32(esp, 0x101286cu); SPILL(); f_1011040(); if (g_unwind) return; RELOAD();
/* 101286c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 101286f: cmp edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1012871: jg 0x1012889 */
  if ((!zf && sf == of)) goto L_1012889;
L_1012873: /* 1012873: jl 0x1012879 */
  if ((sf != of)) goto L_1012879;
L_1012875: /* 1012875: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1012877: jae 0x1012889 */
  if (!cf) goto L_1012889;
L_1012879: /* 1012879: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 101287a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 101287b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 101287c: mov eax, 0xfffffffe */
  eax = 0xfffffffeu;
/* 1012881: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1012882: add esp, 0x84 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1012888: ret  */
  esp += 4; SPILL(); return;
L_1012889: /* 1012889: lea edx, [esp + 0x54] */
  edx = (uint32_t)(esp + 0x54u);
/* 101288d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 101288e: call 0x1013ae8 */
  esp -= 4; W32(esp, 0x1012893u); SPILL(); f_1013ae8(); if (g_unwind) return; RELOAD();
/* 1012893: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 1012897: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1012898: lea edi, [esi + 0x78] */
  edi = (uint32_t)(esi + 0x78u);
/* 101289b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 101289c: mov dword ptr [esi + 0x5c], eax */
  W32((uint32_t)(esi + 0x5cu), eax);
/* 101289f: mov dword ptr [esi + 0x60], ecx */
  W32((uint32_t)(esi + 0x60u), ecx);
/* 10128a2: call 0x1013afa */
  esp -= 4; W32(esp, 0x10128a7u); SPILL(); f_1013afa(); if (g_unwind) return; RELOAD();
/* 10128a7: lea edx, [esp + 0x60] */
  edx = (uint32_t)(esp + 0x60u);
/* 10128ab: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10128ac: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10128ad: mov dword ptr [esi + 0x58], 3 */
  W32((uint32_t)(esi + 0x58u), 0x3u);
/* 10128b4: call 0x1013af4 */
  esp -= 4; W32(esp, 0x10128b9u); SPILL(); f_1013af4(); if (g_unwind) return; RELOAD();
/* 10128b9: lea eax, [esp + 0x88] */
  eax = (uint32_t)(esp + 0x88u);
/* 10128c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10128c1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10128c2: call 0x1013b24 */
  esp -= 4; W32(esp, 0x10128c7u); SPILL(); f_1013b24(); if (g_unwind) return; RELOAD();
/* 10128c7: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 10128c8: mov ecx, eax */
  ecx = eax;
/* 10128ca: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10128cd: or ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  ecx = r;
  }
/* 10128cf: je 0x101291a */
  if (zf) goto L_101291a;
L_10128d1: /* 10128d1: cmp edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10128d3: jl 0x1012a10 */
  if ((sf != of)) goto L_1012a10;
L_10128d9: /* 10128d9: jg 0x10128e3 */
  if ((!zf && sf == of)) goto L_10128e3;
L_10128db: /* 10128db: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10128dd: jb 0x1012a10 */
  if (cf) goto L_1012a10;
L_10128e3: /* 10128e3: mov eax, dword ptr [esp + 0x84] */
  eax = R32((uint32_t)(esp + 0x84u));
/* 10128ea: mov ecx, dword ptr [esp + 0x88] */
  ecx = R32((uint32_t)(esp + 0x88u));
/* 10128f1: mov edx, eax */
  edx = eax;
/* 10128f3: and edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 10128f5: cmp edx, -1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10128f8: jne 0x1012a1d */
  if (!zf) goto L_1012a1d;
L_10128fe: /* 10128fe: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10128ff: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1012900: call 0x1013aee */
  esp -= 4; W32(esp, 0x1012905u); SPILL(); f_1013aee(); if (g_unwind) return; RELOAD();
/* 1012905: lea eax, [esp + 0x7c] */
  eax = (uint32_t)(esp + 0x7cu);
/* 1012909: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 101290a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 101290b: call 0x1013b24 */
  esp -= 4; W32(esp, 0x1012910u); SPILL(); f_1013b24(); if (g_unwind) return; RELOAD();
/* 1012910: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 1012911: mov ecx, eax */
  ecx = eax;
/* 1012913: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1012916: or ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  ecx = r;
  }
/* 1012918: jne 0x10128d1 */
  if (!zf) goto L_10128d1;
L_101291a: /* 101291a: lea eax, [esi + 0x1e0] */
  eax = (uint32_t)(esi + 0x1e0u);
/* 1012920: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1012921: call 0x1013b66 */
  esp -= 4; W32(esp, 0x1012926u); SPILL(); f_1013b66(); if (g_unwind) return; RELOAD();
/* 1012926: lea eax, [esi + 0x250] */
  eax = (uint32_t)(esi + 0x250u);
/* 101292c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 101292d: call 0x1013b60 */
  esp -= 4; W32(esp, 0x1012932u); SPILL(); f_1013b60(); if (g_unwind) return; RELOAD();
/* 1012932: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 1012934: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1012937: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1012939: mov dword ptr [esi + 0x58], 2 */
  W32((uint32_t)(esi + 0x58u), 0x2u);
/* 1012940: mov dword ptr [esi + 0x68], ebp */
  W32((uint32_t)(esi + 0x68u), ebp);
/* 1012943: mov dword ptr [esi + 0x6c], ebp */
  W32((uint32_t)(esi + 0x6cu), ebp);
/* 1012946: mov dword ptr [esi + 0x70], ebp */
  W32((uint32_t)(esi + 0x70u), ebp);
/* 1012949: mov dword ptr [esi + 0x74], ebp */
  W32((uint32_t)(esi + 0x74u), ebp);
/* 101294c: je 0x101296e */
  if (zf) goto L_101296e;
L_101294e: /* 101294e: mov edi, dword ptr [esp + 0x40] */
  edi = R32((uint32_t)(esp + 0x40u));
/* 1012952: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1012953: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1012954: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1012955: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1012956: call dword ptr [esi + 0x2c4] */
  { uint32_t t = R32((uint32_t)(esi + 0x2c4u)); esp -= 4; W32(esp, 0x101295cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 101295c: lea edx, [esi + 0x18] */
  edx = (uint32_t)(esi + 0x18u);
/* 101295f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1012960: mov dword ptr [esi + 8], ebx */
  W32((uint32_t)(esi + 0x8u), ebx);
/* 1012963: mov dword ptr [esi + 0xc], edi */
  W32((uint32_t)(esi + 0xcu), edi);
/* 1012966: call 0x1013adc */
  esp -= 4; W32(esp, 0x101296bu); SPILL(); f_1013adc(); if (g_unwind) return; RELOAD();
/* 101296b: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_101296e: /* 101296e: lea eax, [esp + 0x54] */
  eax = (uint32_t)(esp + 0x54u);
/* 1012972: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1012973: mov eax, esi */
  eax = esi;
/* 1012975: call 0x1011150 */
  esp -= 4; W32(esp, 0x101297au); SPILL(); f_1011150(); if (g_unwind) return; RELOAD();
/* 101297a: mov edi, edx */
  edi = edx;
/* 101297c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 101297f: cmp edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1012981: mov ebx, eax */
  ebx = eax;
/* 1012983: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 1012987: jl 0x1012aae */
  if ((sf != of)) goto L_1012aae;
L_101298d: /* 101298d: jg 0x10129a0 */
  if ((!zf && sf == of)) goto L_10129a0;
L_101298f: /* 101298f: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1012991: jb 0x1012aae */
  if (cf) goto L_1012aae;
L_1012997: /* 1012997: jmp 0x10129a0 */
  goto L_10129a0;
L_10129a0: /* 10129a0: lea ecx, [esp + 0x54] */
  ecx = (uint32_t)(esp + 0x54u);
/* 10129a4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10129a5: call 0x1013b00 */
  esp -= 4; W32(esp, 0x10129aau); SPILL(); f_1013b00(); if (g_unwind) return; RELOAD();
/* 10129aa: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10129ad: cmp edx, -1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10129b0: jg 0x10129f6 */
  if ((!zf && sf == of)) goto L_10129f6;
L_10129b2: /* 10129b2: jl 0x10129b9 */
  if ((sf != of)) goto L_10129b9;
L_10129b4: /* 10129b4: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 10129b7: ja 0x10129f6 */
  if ((!cf && !zf)) goto L_10129f6;
L_10129b9: /* 10129b9: lea edx, [esp + 0x54] */
  edx = (uint32_t)(esp + 0x54u);
/* 10129bd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10129be: call 0x1013b1e */
  esp -= 4; W32(esp, 0x10129c3u); SPILL(); f_1013b1e(); if (g_unwind) return; RELOAD();
/* 10129c3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10129c6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10129c8: je 0x10129f6 */
  if (zf) goto L_10129f6;
L_10129ca: /* 10129ca: lea eax, [esp + 0x54] */
  eax = (uint32_t)(esp + 0x54u);
/* 10129ce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10129cf: mov eax, esi */
  eax = esi;
/* 10129d1: mov dword ptr [esi + 8], ebx */
  W32((uint32_t)(esi + 0x8u), ebx);
/* 10129d4: mov dword ptr [esi + 0xc], edi */
  W32((uint32_t)(esi + 0xcu), edi);
/* 10129d7: call 0x1011150 */
  esp -= 4; W32(esp, 0x10129dcu); SPILL(); f_1011150(); if (g_unwind) return; RELOAD();
/* 10129dc: mov edi, edx */
  edi = edx;
/* 10129de: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10129e1: cmp edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10129e3: mov ebx, eax */
  ebx = eax;
/* 10129e5: jg 0x10129a0 */
  if ((!zf && sf == of)) goto L_10129a0;
L_10129e7: /* 10129e7: jl 0x10129ed */
  if ((sf != of)) goto L_10129ed;
L_10129e9: /* 10129e9: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10129eb: jae 0x10129a0 */
  if (!cf) goto L_10129a0;
L_10129ed: /* 10129ed: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 10129f1: jmp 0x1012aae */
  goto L_1012aae;
L_10129f6: /* 10129f6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10129f7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10129f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10129f9: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 10129fd: call 0x1012110 */
  esp -= 4; W32(esp, 0x1012a02u); SPILL(); f_1012110(); if (g_unwind) return; RELOAD();
/* 1012a02: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1012a05: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1012a06: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1012a07: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1012a08: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1012a09: add esp, 0x84 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1012a0f: ret  */
  esp += 4; SPILL(); return;
L_1012a10: /* 1012a10: mov dword ptr [esp + 0x10], 0xffffff78 */
  W32((uint32_t)(esp + 0x10u), 0xffffff78u);
/* 1012a18: jmp 0x1012aa6 */
  goto L_1012aa6;
L_1012a1d: /* 1012a1d: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 1012a20: mov edi, dword ptr [esi + 0x44] */
  edi = R32((uint32_t)(esi + 0x44u));
/* 1012a23: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 1012a26: sub eax, dword ptr [edx + edi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx + edi)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  eax = r;
  }
/* 1012a29: sbb ecx, dword ptr [edx + edi + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + edi + 0x4u)));
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ecx = r;
  }
/* 1012a2d: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* 1012a30: mov eax, ecx */
  eax = ecx;
/* 1012a32: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1012a34: mov dword ptr [esi + 0x54], ecx */
  W32((uint32_t)(esi + 0x54u), ecx);
/* 1012a37: jg 0x1012a46 */
  if ((!zf && sf == of)) goto L_1012a46;
L_1012a39: /* 1012a39: jl 0x1012a40 */
  if ((sf != of)) goto L_1012a40;
L_1012a3b: /* 1012a3b: cmp dword ptr [esi + 0x50], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x50u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1012a3e: jae 0x1012a46 */
  if (!cf) goto L_1012a46;
L_1012a40: /* 1012a40: mov dword ptr [esi + 0x50], ebp */
  W32((uint32_t)(esi + 0x50u), ebp);
/* 1012a43: mov dword ptr [esi + 0x54], ebp */
  W32((uint32_t)(esi + 0x54u), ebp);
L_1012a46: /* 1012a46: mov edi, dword ptr [esi + 0x50] */
  edi = R32((uint32_t)(esi + 0x50u));
/* 1012a49: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 1012a4d: mov edx, dword ptr [esi + 0x54] */
  edx = R32((uint32_t)(esi + 0x54u));
/* 1012a50: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 1012a54: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edi = r;
  }
/* 1012a56: mov dword ptr [esi + 0x50], edi */
  W32((uint32_t)(esi + 0x50u), edi);
/* 1012a59: mov edi, dword ptr [esp + 0xa0] */
  edi = R32((uint32_t)(esp + 0xa0u));
/* 1012a60: adc edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 1012a62: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1012a64: mov dword ptr [esi + 0x54], edx */
  W32((uint32_t)(esi + 0x54u), edx);
/* 1012a67: jg 0x1012a9e */
  if ((!zf && sf == of)) goto L_1012a9e;
L_1012a69: /* 1012a69: jl 0x1012a77 */
  if ((sf != of)) goto L_1012a77;
L_1012a6b: /* 1012a6b: mov eax, dword ptr [esi + 0x50] */
  eax = R32((uint32_t)(esi + 0x50u));
/* 1012a6e: cmp eax, dword ptr [esp + 0x9c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x9cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 1012a75: ja 0x1012a9e */
  if ((!cf && !zf)) goto L_1012a9e;
L_1012a77: /* 1012a77: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1012a79: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1012a7a: call 0x1011ff0 */
  esp -= 4; W32(esp, 0x1012a7fu); SPILL(); f_1011ff0(); if (g_unwind) return; RELOAD();
/* 1012a7f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1012a82: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1012a84: jg 0x1012a9e */
  if ((!zf && sf == of)) goto L_1012a9e;
L_1012a86: /* 1012a86: jl 0x1012a91 */
  if ((sf != of)) goto L_1012a91;
L_1012a88: /* 1012a88: cmp dword ptr [esp + 0x9c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x9cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 1012a8f: ja 0x1012a9e */
  if ((!cf && !zf)) goto L_1012a9e;
L_1012a91: /* 1012a91: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1012a92: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1012a93: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1012a94: xor eax, eax */
  eax = 0;
/* 1012a96: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1012a97: add esp, 0x84 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1012a9d: ret  */
  esp += 4; SPILL(); return;
L_1012a9e: /* 1012a9e: mov dword ptr [esp + 0x10], 0xffffff7f */
  W32((uint32_t)(esp + 0x10u), 0xffffff7fu);
L_1012aa6: /* 1012aa6: mov dword ptr [esp + 0x14], 0xffffffff */
  W32((uint32_t)(esp + 0x14u), 0xffffffffu);
L_1012aae: /* 1012aae: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 1012ab1: lea ecx, [esi + 0x1e0] */
  ecx = (uint32_t)(esi + 0x1e0u);
/* 1012ab7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1012ab8: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* 1012abb: mov dword ptr [esi + 0x54], eax */
  W32((uint32_t)(esi + 0x54u), eax);
/* 1012abe: call 0x1013b66 */
  esp -= 4; W32(esp, 0x1012ac3u); SPILL(); f_1013b66(); if (g_unwind) return; RELOAD();
/* 1012ac3: lea edx, [esi + 0x250] */
  edx = (uint32_t)(esi + 0x250u);
/* 1012ac9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1012aca: call 0x1013b60 */
  esp -= 4; W32(esp, 0x1012acfu); SPILL(); f_1013b60(); if (g_unwind) return; RELOAD();
/* 1012acf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1012ad2: xor eax, eax */
  eax = 0;
/* 1012ad4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1012ad5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1012ad6: mov dword ptr [esi + 0x68], eax */
  W32((uint32_t)(esi + 0x68u), eax);
/* 1012ad9: mov dword ptr [esi + 0x6c], eax */
  W32((uint32_t)(esi + 0x6cu), eax);
/* 1012adc: mov dword ptr [esi + 0x70], eax */
  W32((uint32_t)(esi + 0x70u), eax);
/* 1012adf: mov dword ptr [esi + 0x74], eax */
  W32((uint32_t)(esi + 0x74u), eax);
/* 1012ae2: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 1012ae6: mov dword ptr [esi + 0x58], 2 */
  W32((uint32_t)(esi + 0x58u), 0x2u);
/* 1012aed: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1012aee: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1012aef: add esp, 0x84 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1012af5: ret  */
  esp += 4; SPILL(); return;
}

void f_1012999(void) {
  LOAD_REGS();
L_1012999: /* 1012999: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_10129a0: /* 10129a0: lea ecx, [esp + 0x54] */
  ecx = (uint32_t)(esp + 0x54u);
/* 10129a4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10129a5: call 0x1013b00 */
  esp -= 4; W32(esp, 0x10129aau); SPILL(); f_1013b00(); if (g_unwind) return; RELOAD();
/* 10129aa: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10129ad: cmp edx, -1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10129b0: jg 0x10129f6 */
  if ((!zf && sf == of)) goto L_10129f6;
L_10129b2: /* 10129b2: jl 0x10129b9 */
  if ((sf != of)) goto L_10129b9;
L_10129b4: /* 10129b4: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 10129b7: ja 0x10129f6 */
  if ((!cf && !zf)) goto L_10129f6;
L_10129b9: /* 10129b9: lea edx, [esp + 0x54] */
  edx = (uint32_t)(esp + 0x54u);
/* 10129bd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10129be: call 0x1013b1e */
  esp -= 4; W32(esp, 0x10129c3u); SPILL(); f_1013b1e(); if (g_unwind) return; RELOAD();
/* 10129c3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10129c6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10129c8: je 0x10129f6 */
  if (zf) goto L_10129f6;
L_10129ca: /* 10129ca: lea eax, [esp + 0x54] */
  eax = (uint32_t)(esp + 0x54u);
/* 10129ce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10129cf: mov eax, esi */
  eax = esi;
/* 10129d1: mov dword ptr [esi + 8], ebx */
  W32((uint32_t)(esi + 0x8u), ebx);
/* 10129d4: mov dword ptr [esi + 0xc], edi */
  W32((uint32_t)(esi + 0xcu), edi);
/* 10129d7: call 0x1011150 */
  esp -= 4; W32(esp, 0x10129dcu); SPILL(); f_1011150(); if (g_unwind) return; RELOAD();
/* 10129dc: mov edi, edx */
  edi = edx;
/* 10129de: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10129e1: cmp edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10129e3: mov ebx, eax */
  ebx = eax;
/* 10129e5: jg 0x10129a0 */
  if ((!zf && sf == of)) goto L_10129a0;
L_10129e7: /* 10129e7: jl 0x10129ed */
  if ((sf != of)) goto L_10129ed;
L_10129e9: /* 10129e9: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10129eb: jae 0x10129a0 */
  if (!cf) goto L_10129a0;
L_10129ed: /* 10129ed: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 10129f1: jmp 0x1012aae */
  goto L_1012aae;
L_10129f6: /* 10129f6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10129f7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10129f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10129f9: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 10129fd: call 0x1012110 */
  esp -= 4; W32(esp, 0x1012a02u); SPILL(); f_1012110(); if (g_unwind) return; RELOAD();
/* 1012a02: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1012a05: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1012a06: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1012a07: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1012a08: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1012a09: add esp, 0x84 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1012a0f: ret  */
  esp += 4; SPILL(); return;
L_1012aae: /* 1012aae: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 1012ab1: lea ecx, [esi + 0x1e0] */
  ecx = (uint32_t)(esi + 0x1e0u);
/* 1012ab7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1012ab8: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* 1012abb: mov dword ptr [esi + 0x54], eax */
  W32((uint32_t)(esi + 0x54u), eax);
/* 1012abe: call 0x1013b66 */
  esp -= 4; W32(esp, 0x1012ac3u); SPILL(); f_1013b66(); if (g_unwind) return; RELOAD();
/* 1012ac3: lea edx, [esi + 0x250] */
  edx = (uint32_t)(esi + 0x250u);
/* 1012ac9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1012aca: call 0x1013b60 */
  esp -= 4; W32(esp, 0x1012acfu); SPILL(); f_1013b60(); if (g_unwind) return; RELOAD();
/* 1012acf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1012ad2: xor eax, eax */
  eax = 0;
/* 1012ad4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1012ad5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1012ad6: mov dword ptr [esi + 0x68], eax */
  W32((uint32_t)(esi + 0x68u), eax);
/* 1012ad9: mov dword ptr [esi + 0x6c], eax */
  W32((uint32_t)(esi + 0x6cu), eax);
/* 1012adc: mov dword ptr [esi + 0x70], eax */
  W32((uint32_t)(esi + 0x70u), eax);
/* 1012adf: mov dword ptr [esi + 0x74], eax */
  W32((uint32_t)(esi + 0x74u), eax);
/* 1012ae2: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 1012ae6: mov dword ptr [esi + 0x58], 2 */
  W32((uint32_t)(esi + 0x58u), 0x2u);
/* 1012aed: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1012aee: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1012aef: add esp, 0x84 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1012af5: ret  */
  esp += 4; SPILL(); return;
}

void f_1012af6(void) {
  LOAD_REGS();
L_1012af6: /* 1012af6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1012af7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1012af8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1012af9: mov eax, 0xffffff7d */
  eax = 0xffffff7du;
/* 1012afe: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1012aff: add esp, 0x84 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1012b05: ret  */
  esp += 4; SPILL(); return;
}

void f_1012b10(void) {
  LOAD_REGS();
L_1012b10: /* 1012b10: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 1012b14: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 1012b18: sub esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1012b1b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1012b1c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1012b1d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1012b1e: mov esi, dword ptr [esp + 0x44] */
  esi = R32((uint32_t)(esp + 0x44u));
/* 1012b22: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1012b23: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1012b24: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1012b25: xor ebp, ebp */
  ebp = 0;
/* 1012b27: xor ebx, ebx */
  ebx = 0;
/* 1012b29: call 0x1012400 */
  esp -= 4; W32(esp, 0x1012b2eu); SPILL(); f_1012400(); if (g_unwind) return; RELOAD();
/* 1012b2e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1012b31: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1012b33: jl 0x1012e85 */
  if ((sf != of)) goto L_1012e85;
L_1012b39: /* 1012b39: call 0x10119b0 */
  esp -= 4; W32(esp, 0x1012b3eu); SPILL(); f_10119b0(); if (g_unwind) return; RELOAD();
/* 1012b3e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1012b3f: nop  */
L_1012b40: /* 1012b40: lea edx, [esp + 0x24] */
  edx = (uint32_t)(esp + 0x24u);
/* 1012b44: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1012b45: lea edi, [esi + 0x78] */
  edi = (uint32_t)(esi + 0x78u);
/* 1012b48: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1012b49: call 0x1013b24 */
  esp -= 4; W32(esp, 0x1012b4eu); SPILL(); f_1013b24(); if (g_unwind) return; RELOAD();
/* 1012b4e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1012b51: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1012b53: jle 0x1012c69 */
  if ((zf || sf != of)) goto L_1012c69;
L_1012b59: /* 1012b59: mov ecx, dword ptr [esi + 0x60] */
  ecx = R32((uint32_t)(esi + 0x60u));
/* 1012b5c: mov ebp, dword ptr [esi + 0x48] */
  ebp = R32((uint32_t)(esi + 0x48u));
/* 1012b5f: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 1012b63: shl ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 1012b66: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1012b67: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1012b69: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1012b6a: call 0x1013b4e */
  esp -= 4; W32(esp, 0x1012b6fu); SPILL(); f_1013b4e(); if (g_unwind) return; RELOAD();
/* 1012b6f: mov ebp, eax */
  ebp = eax;
/* 1012b71: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1012b74: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1012b76: jge 0x1012b7a */
  if ((sf == of)) goto L_1012b7a;
L_1012b78: /* 1012b78: xor ebp, ebp */
  ebp = 0;
L_1012b7a: /* 1012b7a: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1012b7c: je 0x1012b95 */
  if (zf) goto L_1012b95;
L_1012b7e: /* 1012b7e: mov ecx, dword ptr [esi + 0x50] */
  ecx = R32((uint32_t)(esi + 0x50u));
/* 1012b81: lea eax, [ebx + ebp] */
  eax = (uint32_t)(ebx + ebp);
/* 1012b84: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 1012b87: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 1012b88: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ecx = r;
  }
/* 1012b8a: mov eax, dword ptr [esi + 0x54] */
  eax = R32((uint32_t)(esi + 0x54u));
/* 1012b8d: adc eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  eax = r;
  }
/* 1012b8f: mov dword ptr [esi + 0x50], ecx */
  W32((uint32_t)(esi + 0x50u), ecx);
/* 1012b92: mov dword ptr [esi + 0x54], eax */
  W32((uint32_t)(esi + 0x54u), eax);
L_1012b95: /* 1012b95: mov edx, dword ptr [esi + 0x48] */
  edx = R32((uint32_t)(esi + 0x48u));
/* 1012b98: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1012b9a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1012b9b: call 0x1013b8a */
  esp -= 4; W32(esp, 0x1012ba0u); SPILL(); f_1013b8a(); if (g_unwind) return; RELOAD();
/* 1012ba0: mov ecx, dword ptr [esi + 0x50] */
  ecx = R32((uint32_t)(esi + 0x50u));
/* 1012ba3: mov ebx, dword ptr [esi + 0x54] */
  ebx = R32((uint32_t)(esi + 0x54u));
/* 1012ba6: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1012ba8: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 1012bab: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 1012bac: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1012baf: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 1012bb1: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 1012bb5: adc edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 1012bb7: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1012bb9: jg 0x1012d84 */
  if ((!zf && sf == of)) goto L_1012d84;
L_1012bbf: /* 1012bbf: jl 0x1012bcb */
  if ((sf != of)) goto L_1012bcb;
L_1012bc1: /* 1012bc1: cmp eax, dword ptr [esp + 0x4c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x4cu)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1012bc5: jae 0x1012d84 */
  if (!cf) goto L_1012d84;
L_1012bcb: /* 1012bcb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1012bcd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1012bce: call 0x1013aee */
  esp -= 4; W32(esp, 0x1012bd3u); SPILL(); f_1013aee(); if (g_unwind) return; RELOAD();
/* 1012bd3: lea eax, [esp + 0x2c] */
  eax = (uint32_t)(esp + 0x2cu);
/* 1012bd7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1012bd8: lea ebx, [esi + 0x250] */
  ebx = (uint32_t)(esi + 0x250u);
/* 1012bde: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1012bdf: call 0x1013b84 */
  esp -= 4; W32(esp, 0x1012be4u); SPILL(); f_1013b84(); if (g_unwind) return; RELOAD();
/* 1012be4: lea ecx, [esi + 0x1e0] */
  ecx = (uint32_t)(esi + 0x1e0u);
/* 1012bea: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1012beb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1012bec: call 0x1013b6c */
  esp -= 4; W32(esp, 0x1012bf1u); SPILL(); f_1013b6c(); if (g_unwind) return; RELOAD();
/* 1012bf1: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 1012bf5: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1012bf8: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1012bfb: jl 0x1012c60 */
  if ((sf != of)) goto L_1012c60;
L_1012bfd: /* 1012bfd: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 1012c01: jg 0x1012c08 */
  if ((!zf && sf == of)) goto L_1012c08;
L_1012c03: /* 1012c03: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 1012c06: jbe 0x1012c60 */
  if ((cf | zf)) goto L_1012c60;
L_1012c08: /* 1012c08: mov ebx, dword ptr [esi + 0x60] */
  ebx = R32((uint32_t)(esi + 0x60u));
/* 1012c0b: mov edx, dword ptr [esi + 0x44] */
  edx = R32((uint32_t)(esi + 0x44u));
/* 1012c0e: mov edi, ebx */
  edi = ebx;
/* 1012c10: shl edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 1012c13: sub ecx, dword ptr [edi + edx] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + edx)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  ecx = r;
  }
/* 1012c16: sbb eax, dword ptr [edi + edx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + edx + 0x4u)));
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 1012c1a: mov dword ptr [esi + 0x50], ecx */
  W32((uint32_t)(esi + 0x50u), ecx);
/* 1012c1d: xor ecx, ecx */
  ecx = 0;
/* 1012c1f: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1012c21: mov dword ptr [esi + 0x54], eax */
  W32((uint32_t)(esi + 0x54u), eax);
/* 1012c24: jg 0x1012c33 */
  if ((!zf && sf == of)) goto L_1012c33;
L_1012c26: /* 1012c26: jl 0x1012c2d */
  if ((sf != of)) goto L_1012c2d;
L_1012c28: /* 1012c28: cmp dword ptr [esi + 0x50], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x50u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1012c2b: jae 0x1012c33 */
  if (!cf) goto L_1012c33;
L_1012c2d: /* 1012c2d: mov dword ptr [esi + 0x50], ecx */
  W32((uint32_t)(esi + 0x50u), ecx);
/* 1012c30: mov dword ptr [esi + 0x54], ecx */
  W32((uint32_t)(esi + 0x54u), ecx);
L_1012c33: /* 1012c33: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1012c35: jle 0x1012c60 */
  if ((zf || sf != of)) goto L_1012c60;
L_1012c37: /* 1012c37: lea eax, [edx + 8] */
  eax = (uint32_t)(edx + 0x8u);
/* 1012c3a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_1012c40: /* 1012c40: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 1012c42: mov ebx, dword ptr [esi + 0x50] */
  ebx = R32((uint32_t)(esi + 0x50u));
/* 1012c45: mov edi, dword ptr [esi + 0x54] */
  edi = R32((uint32_t)(esi + 0x54u));
/* 1012c48: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ebx = r;
  }
/* 1012c4a: mov dword ptr [esi + 0x50], ebx */
  W32((uint32_t)(esi + 0x50u), ebx);
/* 1012c4d: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 1012c50: adc edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edi = r;
  }
/* 1012c52: mov dword ptr [esi + 0x54], edi */
  W32((uint32_t)(esi + 0x54u), edi);
/* 1012c55: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 1012c58: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 1012c59: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1012c5c: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1012c5e: jl 0x1012c40 */
  if ((sf != of)) goto L_1012c40;
L_1012c60: /* 1012c60: mov ebx, ebp */
  ebx = ebp;
/* 1012c62: xor ebp, ebp */
  ebp = 0;
/* 1012c64: jmp 0x1012b40 */
  goto L_1012b40;
L_1012c69: /* 1012c69: jge 0x1012c74 */
  if ((sf == of)) goto L_1012c74;
L_1012c6b: /* 1012c6b: cmp eax, -3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1012c6e: jne 0x1012d84 */
  if (!zf) goto L_1012d84;
L_1012c74: /* 1012c74: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1012c76: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 1012c7a: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1012c7c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1012c7d: call 0x1011040 */
  esp -= 4; W32(esp, 0x1012c82u); SPILL(); f_1011040(); if (g_unwind) return; RELOAD();
/* 1012c82: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1012c85: cmp edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1012c87: jl 0x1012d84 */
  if ((sf != of)) goto L_1012d84;
L_1012c8d: /* 1012c8d: jg 0x1012c97 */
  if ((!zf && sf == of)) goto L_1012c97;
L_1012c8f: /* 1012c8f: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1012c91: jb 0x1012d84 */
  if (cf) goto L_1012d84;
L_1012c97: /* 1012c97: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 1012c9b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1012c9c: call 0x1013ae8 */
  esp -= 4; W32(esp, 0x1012ca1u); SPILL(); f_1013ae8(); if (g_unwind) return; RELOAD();
/* 1012ca1: mov ecx, dword ptr [esi + 0x5c] */
  ecx = R32((uint32_t)(esi + 0x5cu));
/* 1012ca4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1012ca7: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1012ca9: je 0x1012cd9 */
  if (zf) goto L_1012cd9;
L_1012cab: /* 1012cab: lea edx, [esi + 0x1e0] */
  edx = (uint32_t)(esi + 0x1e0u);
/* 1012cb1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1012cb2: call 0x1013b66 */
  esp -= 4; W32(esp, 0x1012cb7u); SPILL(); f_1013b66(); if (g_unwind) return; RELOAD();
/* 1012cb7: lea eax, [esi + 0x250] */
  eax = (uint32_t)(esi + 0x250u);
/* 1012cbd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1012cbe: call 0x1013b60 */
  esp -= 4; W32(esp, 0x1012cc3u); SPILL(); f_1013b60(); if (g_unwind) return; RELOAD();
/* 1012cc3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1012cc6: mov dword ptr [esi + 0x58], 2 */
  W32((uint32_t)(esi + 0x58u), 0x2u);
/* 1012ccd: mov dword ptr [esi + 0x68], ebp */
  W32((uint32_t)(esi + 0x68u), ebp);
/* 1012cd0: mov dword ptr [esi + 0x6c], ebp */
  W32((uint32_t)(esi + 0x6cu), ebp);
/* 1012cd3: mov dword ptr [esi + 0x70], ebp */
  W32((uint32_t)(esi + 0x70u), ebp);
/* 1012cd6: mov dword ptr [esi + 0x74], ebp */
  W32((uint32_t)(esi + 0x74u), ebp);
L_1012cd9: /* 1012cd9: cmp dword ptr [esi + 0x58], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x58u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1012cdd: jge 0x1012d71 */
  if ((sf == of)) goto L_1012d71;
L_1012ce3: /* 1012ce3: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 1012ce7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1012ce8: call 0x1013ae8 */
  esp -= 4; W32(esp, 0x1012cedu); SPILL(); f_1013ae8(); if (g_unwind) return; RELOAD();
/* 1012ced: mov ebx, dword ptr [esi + 0x34] */
  ebx = R32((uint32_t)(esi + 0x34u));
/* 1012cf0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1012cf3: xor ecx, ecx */
  ecx = 0;
/* 1012cf5: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1012cf7: mov dword ptr [esi + 0x5c], eax */
  W32((uint32_t)(esi + 0x5cu), eax);
/* 1012cfa: jle 0x1012d0f */
  if ((zf || sf != of)) goto L_1012d0f;
L_1012cfc: /* 1012cfc: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 1012cff: nop  */
L_1012d00: /* 1012d00: cmp dword ptr [edx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1012d02: je 0x1012d0f */
  if (zf) goto L_1012d0f;
L_1012d04: /* 1012d04: mov edi, dword ptr [esi + 0x34] */
  edi = R32((uint32_t)(esi + 0x34u));
/* 1012d07: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 1012d08: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1012d0b: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1012d0d: jl 0x1012d00 */
  if ((sf != of)) goto L_1012d00;
L_1012d0f: /* 1012d0f: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1012d11: je 0x1012e7f */
  if (zf) goto L_1012e7f;
L_1012d17: /* 1012d17: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1012d18: lea edi, [esi + 0x78] */
  edi = (uint32_t)(esi + 0x78u);
/* 1012d1b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1012d1c: mov dword ptr [esi + 0x60], ecx */
  W32((uint32_t)(esi + 0x60u), ecx);
/* 1012d1f: call 0x1013afa */
  esp -= 4; W32(esp, 0x1012d24u); SPILL(); f_1013afa(); if (g_unwind) return; RELOAD();
/* 1012d24: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 1012d27: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1012d2a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1012d2c: mov dword ptr [esi + 0x58], 3 */
  W32((uint32_t)(esi + 0x58u), 0x3u);
/* 1012d33: lea ebx, [esi + 0x1e0] */
  ebx = (uint32_t)(esi + 0x1e0u);
/* 1012d39: je 0x1012d49 */
  if (zf) goto L_1012d49;
L_1012d3b: /* 1012d3b: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 1012d3e: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* 1012d41: shl edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 1012d44: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1012d46: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1012d47: jmp 0x1012d4d */
  goto L_1012d4d;
L_1012d49: /* 1012d49: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* 1012d4c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_1012d4d: /* 1012d4d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1012d4e: call 0x1013b5a */
  esp -= 4; W32(esp, 0x1012d53u); SPILL(); f_1013b5a(); if (g_unwind) return; RELOAD();
/* 1012d53: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1012d56: lea ecx, [esi + 0x250] */
  ecx = (uint32_t)(esi + 0x250u);
/* 1012d5c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1012d5d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1012d5e: call 0x1013b54 */
  esp -= 4; W32(esp, 0x1012d63u); SPILL(); f_1013b54(); if (g_unwind) return; RELOAD();
/* 1012d63: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1012d66: xor ebx, ebx */
  ebx = 0;
/* 1012d68: mov dword ptr [esi + 0x58], 4 */
  W32((uint32_t)(esi + 0x58u), 0x4u);
/* 1012d6f: xor ebp, ebp */
  ebp = 0;
L_1012d71: /* 1012d71: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 1012d75: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1012d76: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1012d77: call 0x1013af4 */
  esp -= 4; W32(esp, 0x1012d7cu); SPILL(); f_1013af4(); if (g_unwind) return; RELOAD();
/* 1012d7c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1012d7f: jmp 0x1012b40 */
  goto L_1012b40;
L_1012d84: /* 1012d84: mov eax, dword ptr [esi + 0x54] */
  eax = R32((uint32_t)(esi + 0x54u));
/* 1012d87: cmp eax, dword ptr [esp + 0x50] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x50u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1012d8b: jg 0x1012e75 */
  if ((!zf && sf == of)) goto L_1012e75;
L_1012d91: /* 1012d91: jl 0x1012da0 */
  if ((sf != of)) goto L_1012da0;
L_1012d93: /* 1012d93: mov ecx, dword ptr [esi + 0x50] */
  ecx = R32((uint32_t)(esi + 0x50u));
/* 1012d96: cmp ecx, dword ptr [esp + 0x4c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x4cu)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1012d9a: jae 0x1012e75 */
  if (!cf) goto L_1012e75;
L_1012da0: /* 1012da0: mov edx, dword ptr [esi + 0x50] */
  edx = R32((uint32_t)(esi + 0x50u));
/* 1012da3: mov ebp, dword ptr [esp + 0x4c] */
  ebp = R32((uint32_t)(esp + 0x4cu));
/* 1012da7: mov ecx, dword ptr [esi + 0x54] */
  ecx = R32((uint32_t)(esi + 0x54u));
/* 1012daa: mov edi, dword ptr [esp + 0x50] */
  edi = R32((uint32_t)(esp + 0x50u));
/* 1012dae: sub ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  ebp = r;
  }
/* 1012db0: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 1012db4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1012db5: lea eax, [esi + 0x1e0] */
  eax = (uint32_t)(esi + 0x1e0u);
/* 1012dbb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1012dbc: sbb edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edi = r;
  }
/* 1012dbe: call 0x1013b72 */
  esp -= 4; W32(esp, 0x1012dc3u); SPILL(); f_1013b72(); if (g_unwind) return; RELOAD();
/* 1012dc3: mov ebx, eax */
  ebx = eax;
/* 1012dc5: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 1012dc6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1012dc9: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1012dcb: jl 0x1012dd5 */
  if ((sf != of)) goto L_1012dd5;
L_1012dcd: /* 1012dcd: jg 0x1012dd3 */
  if ((!zf && sf == of)) goto L_1012dd3;
L_1012dcf: /* 1012dcf: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 1012dd1: jbe 0x1012dd5 */
  if ((cf | zf)) goto L_1012dd5;
L_1012dd3: /* 1012dd3: mov ebx, ebp */
  ebx = ebp;
L_1012dd5: /* 1012dd5: lea eax, [esi + 0x1e0] */
  eax = (uint32_t)(esi + 0x1e0u);
/* 1012ddb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1012ddc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1012ddd: call 0x1013b7e */
  esp -= 4; W32(esp, 0x1012de2u); SPILL(); f_1013b7e(); if (g_unwind) return; RELOAD();
/* 1012de2: mov ecx, dword ptr [esi + 0x50] */
  ecx = R32((uint32_t)(esi + 0x50u));
/* 1012de5: mov eax, ebx */
  eax = ebx;
/* 1012de7: mov ebx, dword ptr [esi + 0x54] */
  ebx = R32((uint32_t)(esi + 0x54u));
/* 1012dea: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 1012deb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1012dee: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ecx = r;
  }
/* 1012df0: adc ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ebx = r;
  }
/* 1012df2: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1012df4: mov dword ptr [esi + 0x50], ecx */
  W32((uint32_t)(esi + 0x50u), ecx);
/* 1012df7: mov dword ptr [esi + 0x54], ebx */
  W32((uint32_t)(esi + 0x54u), ebx);
/* 1012dfa: jg 0x1012e59 */
  if ((!zf && sf == of)) goto L_1012e59;
L_1012dfc: /* 1012dfc: jl 0x1012e02 */
  if ((sf != of)) goto L_1012e02;
L_1012dfe: /* 1012dfe: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1012e00: jae 0x1012e59 */
  if (!cf) goto L_1012e59;
L_1012e02: /* 1012e02: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1012e04: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1012e06: mov eax, esi */
  eax = esi;
/* 1012e08: call 0x1011a40 */
  esp -= 4; W32(esp, 0x1012e0du); SPILL(); f_1011a40(); if (g_unwind) return; RELOAD();
/* 1012e0d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1012e10: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1012e12: jg 0x1012e59 */
  if ((!zf && sf == of)) goto L_1012e59;
L_1012e14: /* 1012e14: cmp dword ptr [esi + 0x58], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x58u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1012e18: jl 0x1012e4b */
  if ((sf != of)) goto L_1012e4b;
L_1012e1a: /* 1012e1a: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 1012e1d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1012e1f: je 0x1012e4b */
  if (zf) goto L_1012e4b;
L_1012e21: /* 1012e21: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* 1012e24: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1012e27: jle 0x1012e4b */
  if ((zf || sf != of)) goto L_1012e4b;
L_1012e29: /* 1012e29: xor ebx, ebx */
  ebx = 0;
/* 1012e2b: xor ebp, ebp */
  ebp = 0;
/* 1012e2d: xor edi, edi */
  edi = 0;
/* 1012e2f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1012e31: jle 0x1012e53 */
  if ((zf || sf != of)) goto L_1012e53;
L_1012e33: /* 1012e33: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1012e34: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1012e35: call 0x1011ff0 */
  esp -= 4; W32(esp, 0x1012e3au); SPILL(); f_1011ff0(); if (g_unwind) return; RELOAD();
/* 1012e3a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1012e3d: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ebx = r;
  }
/* 1012e3f: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* 1012e42: adc ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ebp = r;
  }
/* 1012e44: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 1012e45: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1012e47: jl 0x1012e33 */
  if ((sf != of)) goto L_1012e33;
L_1012e49: /* 1012e49: jmp 0x1012e53 */
  goto L_1012e53;
L_1012e4b: /* 1012e4b: mov ebx, 0xffffff7d */
  ebx = 0xffffff7du;
/* 1012e50: or ebp, 0xffffffff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ebp = r;
  }
L_1012e53: /* 1012e53: mov dword ptr [esi + 0x50], ebx */
  W32((uint32_t)(esi + 0x50u), ebx);
/* 1012e56: mov dword ptr [esi + 0x54], ebp */
  W32((uint32_t)(esi + 0x54u), ebp);
L_1012e59: /* 1012e59: mov eax, dword ptr [esi + 0x54] */
  eax = R32((uint32_t)(esi + 0x54u));
/* 1012e5c: cmp eax, dword ptr [esp + 0x50] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x50u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1012e60: jl 0x1012da0 */
  if ((sf != of)) goto L_1012da0;
L_1012e66: /* 1012e66: jg 0x1012e75 */
  if ((!zf && sf == of)) goto L_1012e75;
L_1012e68: /* 1012e68: mov ecx, dword ptr [esi + 0x50] */
  ecx = R32((uint32_t)(esi + 0x50u));
/* 1012e6b: cmp ecx, dword ptr [esp + 0x4c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x4cu)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1012e6f: jb 0x1012da0 */
  if (cf) goto L_1012da0;
L_1012e75: /* 1012e75: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1012e76: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1012e77: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1012e78: xor eax, eax */
  eax = 0;
/* 1012e7a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1012e7b: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1012e7e: ret  */
  esp += 4; SPILL(); return;
L_1012e7f: /* 1012e7f: mov eax, 0xffffff77 */
  eax = 0xffffff77u;
/* 1012e84: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_1012e85: /* 1012e85: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1012e86: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1012e87: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1012e88: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1012e8b: ret  */
  esp += 4; SPILL(); return;
}

void f_1012e90(void) {
  LOAD_REGS();
L_1012e90: /* 1012e90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1012e91: mov ebp, esp */
  ebp = esp;
/* 1012e93: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 1012e96: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1012e99: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1012e9a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1012e9b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1012e9c: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 1012e9f: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1012ea1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1012ea2: call 0x1011ff0 */
  esp -= 4; W32(esp, 0x1012ea7u); SPILL(); f_1011ff0(); if (g_unwind) return; RELOAD();
/* 1012ea7: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1012ea9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1012eaa: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 1012eae: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 1012eb2: call 0x1012070 */
  esp -= 4; W32(esp, 0x1012eb7u); SPILL(); f_1012070(); if (g_unwind) return; RELOAD();
/* 1012eb7: fstp qword ptr [esp + 0x28] */
  WF64((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 1012ebb: mov eax, dword ptr [edi + 0x58] */
  eax = R32((uint32_t)(edi + 0x58u));
/* 1012ebe: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1012ec1: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1012ec4: jl 0x1012f92 */
  if ((sf != of)) goto L_1012f92;
L_1012eca: /* 1012eca: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 1012ecd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1012ecf: jne 0x1012edd */
  if (!zf) goto L_1012edd;
L_1012ed1: /* 1012ed1: mov eax, 0xffffff76 */
  eax = 0xffffff76u;
/* 1012ed6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1012ed7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1012ed8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1012ed9: mov esp, ebp */
  esp = ebp;
/* 1012edb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1012edc: ret  */
  esp += 4; SPILL(); return;
L_1012edd: /* 1012edd: fld qword ptr [ebp + 0xc] */
  { double v = F64((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 1012ee0: fcomp qword ptr [0x10140d8] */
  fpu_com(ST0, F64((uint32_t)(0x10140d8u)));
  FPOP();
/* 1012ee6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1012ee8: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 1012eeb: jnp 0x1012f92 */
  if (!pf) goto L_1012f92;
L_1012ef1: /* 1012ef1: fld qword ptr [ebp + 0xc] */
  { double v = F64((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 1012ef4: fcomp qword ptr [esp + 0x18] */
  fpu_com(ST0, F64((uint32_t)(esp + 0x18u)));
  FPOP();
/* 1012ef8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1012efa: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1012efd: je 0x1012f92 */
  if (zf) goto L_1012f92;
L_1012f03: /* 1012f03: mov esi, dword ptr [edi + 0x34] */
  esi = R32((uint32_t)(edi + 0x34u));
/* 1012f06: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  esi = r;
  }
/* 1012f07: js 0x1012f56 */
  if (sf) goto L_1012f56;
L_1012f09: /* 1012f09: mov ecx, dword ptr [edi + 0x44] */
  ecx = R32((uint32_t)(edi + 0x44u));
/* 1012f0c: mov eax, esi */
  eax = esi;
/* 1012f0e: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 1012f11: lea ebx, [ecx + eax + 8] */
  ebx = (uint32_t)(ecx + eax + 0x8u);
L_1012f15: /* 1012f15: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 1012f17: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 1012f1b: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 1012f1f: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  eax = r;
  }
/* 1012f21: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 1012f25: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 1012f28: sbb ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ecx = r;
  }
/* 1012f2a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1012f2b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1012f2c: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 1012f30: call 0x1012070 */
  esp -= 4; W32(esp, 0x1012f35u); SPILL(); f_1012070(); if (g_unwind) return; RELOAD();
/* 1012f35: fsubr qword ptr [esp + 0x20] */
  ST0 = (F64((uint32_t)(esp + 0x20u))) - ST0;
/* 1012f39: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1012f3c: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 1012f40: fld qword ptr [ebp + 0xc] */
  { double v = F64((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 1012f43: fcomp qword ptr [esp + 0x18] */
  fpu_com(ST0, F64((uint32_t)(esp + 0x18u)));
  FPOP();
/* 1012f47: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1012f49: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1012f4c: je 0x1012f56 */
  if (zf) goto L_1012f56;
L_1012f4e: /* 1012f4e: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 1012f4f: sub ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 1012f52: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1012f54: jge 0x1012f15 */
  if ((sf == of)) goto L_1012f15;
L_1012f56: /* 1012f56: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* 1012f59: shl esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 1012f5c: fild dword ptr [ecx + esi + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + esi + 0x8u)); FPUSH(v); }
/* 1012f60: fstp qword ptr [esp + 0x20] */
  WF64((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 1012f64: fld qword ptr [ebp + 0xc] */
  { double v = F64((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 1012f67: fsub qword ptr [esp + 0x18] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x18u)));
/* 1012f6b: fmul qword ptr [esp + 0x20] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x20u)));
/* 1012f6f: fild qword ptr [esp + 0x10] */
  { double v = (double)(int64_t)R64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 1012f73: fstp qword ptr [esp + 0x20] */
  WF64((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 1012f77: fadd qword ptr [esp + 0x20] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x20u)));
/* 1012f7b: call 0x1013c40 */
  esp -= 4; W32(esp, 0x1012f80u); SPILL(); f_1013c40(); if (g_unwind) return; RELOAD();
/* 1012f80: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1012f81: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1012f82: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1012f83: call 0x1012b10 */
  esp -= 4; W32(esp, 0x1012f88u); SPILL(); f_1012b10(); if (g_unwind) return; RELOAD();
/* 1012f88: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1012f8b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1012f8c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1012f8d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1012f8e: mov esp, ebp */
  esp = ebp;
/* 1012f90: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1012f91: ret  */
  esp += 4; SPILL(); return;
L_1012f92: /* 1012f92: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1012f93: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1012f94: mov eax, 0xffffff7d */
  eax = 0xffffff7du;
/* 1012f99: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1012f9a: mov esp, ebp */
  esp = ebp;
/* 1012f9c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1012f9d: ret  */
  esp += 4; SPILL(); return;
}

void f_1012fa0(void) {
  LOAD_REGS();
L_1012fa0: /* 1012fa0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1012fa1: mov ebp, esp */
  ebp = esp;
/* 1012fa3: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 1012fa6: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1012fa9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1012faa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1012fab: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1012fac: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 1012faf: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1012fb1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1012fb2: call 0x1011ff0 */
  esp -= 4; W32(esp, 0x1012fb7u); SPILL(); f_1011ff0(); if (g_unwind) return; RELOAD();
/* 1012fb7: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1012fb9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1012fba: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 1012fbe: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 1012fc2: call 0x1012070 */
  esp -= 4; W32(esp, 0x1012fc7u); SPILL(); f_1012070(); if (g_unwind) return; RELOAD();
/* 1012fc7: fstp qword ptr [esp + 0x28] */
  WF64((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 1012fcb: mov eax, dword ptr [edi + 0x58] */
  eax = R32((uint32_t)(edi + 0x58u));
/* 1012fce: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1012fd1: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1012fd4: jl 0x10130a2 */
  if ((sf != of)) goto L_10130a2;
L_1012fda: /* 1012fda: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 1012fdd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1012fdf: jne 0x1012fed */
  if (!zf) goto L_1012fed;
L_1012fe1: /* 1012fe1: mov eax, 0xffffff76 */
  eax = 0xffffff76u;
/* 1012fe6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1012fe7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1012fe8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1012fe9: mov esp, ebp */
  esp = ebp;
/* 1012feb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1012fec: ret  */
  esp += 4; SPILL(); return;
L_1012fed: /* 1012fed: fld qword ptr [ebp + 0xc] */
  { double v = F64((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 1012ff0: fcomp qword ptr [0x10140d8] */
  fpu_com(ST0, F64((uint32_t)(0x10140d8u)));
  FPOP();
/* 1012ff6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1012ff8: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 1012ffb: jnp 0x10130a2 */
  if (!pf) goto L_10130a2;
L_1013001: /* 1013001: fld qword ptr [ebp + 0xc] */
  { double v = F64((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 1013004: fcomp qword ptr [esp + 0x18] */
  fpu_com(ST0, F64((uint32_t)(esp + 0x18u)));
  FPOP();
/* 1013008: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 101300a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 101300d: je 0x10130a2 */
  if (zf) goto L_10130a2;
L_1013013: /* 1013013: mov esi, dword ptr [edi + 0x34] */
  esi = R32((uint32_t)(edi + 0x34u));
/* 1013016: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  esi = r;
  }
/* 1013017: js 0x1013066 */
  if (sf) goto L_1013066;
L_1013019: /* 1013019: mov ecx, dword ptr [edi + 0x44] */
  ecx = R32((uint32_t)(edi + 0x44u));
/* 101301c: mov eax, esi */
  eax = esi;
/* 101301e: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 1013021: lea ebx, [ecx + eax + 8] */
  ebx = (uint32_t)(ecx + eax + 0x8u);
L_1013025: /* 1013025: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 1013027: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 101302b: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 101302f: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  eax = r;
  }
/* 1013031: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 1013035: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 1013038: sbb ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ecx = r;
  }
/* 101303a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 101303b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 101303c: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 1013040: call 0x1012070 */
  esp -= 4; W32(esp, 0x1013045u); SPILL(); f_1012070(); if (g_unwind) return; RELOAD();
/* 1013045: fsubr qword ptr [esp + 0x20] */
  ST0 = (F64((uint32_t)(esp + 0x20u))) - ST0;
/* 1013049: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 101304c: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 1013050: fld qword ptr [ebp + 0xc] */
  { double v = F64((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 1013053: fcomp qword ptr [esp + 0x18] */
  fpu_com(ST0, F64((uint32_t)(esp + 0x18u)));
  FPOP();
/* 1013057: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1013059: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 101305c: je 0x1013066 */
  if (zf) goto L_1013066;
L_101305e: /* 101305e: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 101305f: sub ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 1013062: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1013064: jge 0x1013025 */
  if ((sf == of)) goto L_1013025;
L_1013066: /* 1013066: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* 1013069: shl esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 101306c: fild dword ptr [ecx + esi + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + esi + 0x8u)); FPUSH(v); }
/* 1013070: fstp qword ptr [esp + 0x20] */
  WF64((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 1013074: fld qword ptr [ebp + 0xc] */
  { double v = F64((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 1013077: fsub qword ptr [esp + 0x18] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x18u)));
/* 101307b: fmul qword ptr [esp + 0x20] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x20u)));
/* 101307f: fild qword ptr [esp + 0x10] */
  { double v = (double)(int64_t)R64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 1013083: fstp qword ptr [esp + 0x20] */
  WF64((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 1013087: fadd qword ptr [esp + 0x20] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x20u)));
/* 101308b: call 0x1013c40 */
  esp -= 4; W32(esp, 0x1013090u); SPILL(); f_1013c40(); if (g_unwind) return; RELOAD();
/* 1013090: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1013091: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1013092: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1013093: call 0x1012400 */
  esp -= 4; W32(esp, 0x1013098u); SPILL(); f_1012400(); if (g_unwind) return; RELOAD();
/* 1013098: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 101309b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 101309c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 101309d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 101309e: mov esp, ebp */
  esp = ebp;
/* 10130a0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10130a1: ret  */
  esp += 4; SPILL(); return;
L_10130a2: /* 10130a2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10130a3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10130a4: mov eax, 0xffffff7d */
  eax = 0xffffff7du;
/* 10130a9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10130aa: mov esp, ebp */
  esp = ebp;
/* 10130ac: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10130ad: ret  */
  esp += 4; SPILL(); return;
}

void f_10130b0(void) {
  LOAD_REGS();
L_10130b0: /* 10130b0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 10130b4: cmp dword ptr [ecx + 0x58], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x58u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10130b8: jge 0x10130c3 */
  if ((sf == of)) goto L_10130c3;
L_10130ba: /* 10130ba: mov eax, 0xffffff7d */
  eax = 0xffffff7du;
/* 10130bf: or edx, 0xffffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 10130c2: ret  */
  esp += 4; SPILL(); return;
L_10130c3: /* 10130c3: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 10130c6: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 10130c9: ret  */
  esp += 4; SPILL(); return;
}

void f_10130d0(void) {
  LOAD_REGS();
L_10130d0: /* 10130d0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 10130d4: cmp dword ptr [ecx + 0x58], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x58u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10130d8: jge 0x10130e3 */
  if ((sf == of)) goto L_10130e3;
L_10130da: /* 10130da: mov eax, 0xffffff7d */
  eax = 0xffffff7du;
/* 10130df: or edx, 0xffffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 10130e2: ret  */
  esp += 4; SPILL(); return;
L_10130e3: /* 10130e3: mov eax, dword ptr [ecx + 0x50] */
  eax = R32((uint32_t)(ecx + 0x50u));
/* 10130e6: mov edx, dword ptr [ecx + 0x54] */
  edx = R32((uint32_t)(ecx + 0x54u));
/* 10130e9: ret  */
  esp += 4; SPILL(); return;
}

void f_10130f0(void) {
  LOAD_REGS();
L_10130f0: /* 10130f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10130f1: mov ebp, esp */
  ebp = esp;
/* 10130f3: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 10130f6: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 10130f9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10130fa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10130fb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10130fc: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 10130ff: mov edx, dword ptr [edi + 0x58] */
  edx = R32((uint32_t)(edi + 0x58u));
/* 1013102: xor eax, eax */
  eax = 0;
/* 1013104: or esi, 0xffffffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 1013107: xor ecx, ecx */
  ecx = 0;
/* 1013109: cmp edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 101310c: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 1013110: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 1013114: jge 0x1013123 */
  if ((sf == of)) goto L_1013123;
L_1013116: /* 1013116: fld qword ptr [0x10140e0] */
  { double v = F64((uint32_t)(0x10140e0u)); FPUSH(v); }
/* 101311c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 101311d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 101311e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 101311f: mov esp, ebp */
  esp = ebp;
/* 1013121: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1013122: ret  */
  esp += 4; SPILL(); return;
L_1013123: /* 1013123: cmp dword ptr [edi + 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1013126: je 0x10131b1 */
  if (zf) goto L_10131b1;
L_101312c: /* 101312c: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 101312e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 101312f: call 0x1011ff0 */
  esp -= 4; W32(esp, 0x1013134u); SPILL(); f_1011ff0(); if (g_unwind) return; RELOAD();
/* 1013134: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1013136: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1013137: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 101313b: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 101313f: call 0x1012070 */
  esp -= 4; W32(esp, 0x1013144u); SPILL(); f_1012070(); if (g_unwind) return; RELOAD();
/* 1013144: fstp qword ptr [esp + 0x28] */
  WF64((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 1013148: mov esi, dword ptr [edi + 0x34] */
  esi = R32((uint32_t)(edi + 0x34u));
/* 101314b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 101314e: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  esi = r;
  }
/* 101314f: js 0x10131a9 */
  if (sf) goto L_10131a9;
L_1013151: /* 1013151: mov ecx, dword ptr [edi + 0x44] */
  ecx = R32((uint32_t)(edi + 0x44u));
/* 1013154: mov eax, esi */
  eax = esi;
/* 1013156: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 1013159: lea ebx, [ecx + eax + 8] */
  ebx = (uint32_t)(ecx + eax + 0x8u);
/* 101315d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_1013160: /* 1013160: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 1013162: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 1013166: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  eax = r;
  }
/* 1013168: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 101316c: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 1013170: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 1013173: sbb edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edx = r;
  }
/* 1013175: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1013176: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1013177: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 101317b: call 0x1012070 */
  esp -= 4; W32(esp, 0x1013180u); SPILL(); f_1012070(); if (g_unwind) return; RELOAD();
/* 1013180: fsubr qword ptr [esp + 0x20] */
  ST0 = (F64((uint32_t)(esp + 0x20u))) - ST0;
/* 1013184: mov eax, dword ptr [edi + 0x54] */
  eax = R32((uint32_t)(edi + 0x54u));
/* 1013187: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 101318b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 101318e: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 1013192: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1013194: jg 0x10131a9 */
  if ((!zf && sf == of)) goto L_10131a9;
L_1013196: /* 1013196: jl 0x10131a1 */
  if ((sf != of)) goto L_10131a1;
L_1013198: /* 1013198: mov eax, dword ptr [edi + 0x50] */
  eax = R32((uint32_t)(edi + 0x50u));
/* 101319b: cmp eax, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 101319f: jae 0x10131a9 */
  if (!cf) goto L_10131a9;
L_10131a1: /* 10131a1: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 10131a2: sub ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 10131a5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10131a7: jge 0x1013160 */
  if ((sf == of)) goto L_1013160;
L_10131a9: /* 10131a9: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 10131ad: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
L_10131b1: /* 10131b1: mov edx, dword ptr [edi + 0x50] */
  edx = R32((uint32_t)(edi + 0x50u));
/* 10131b4: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  edx = r;
  }
/* 10131b6: mov eax, dword ptr [edi + 0x54] */
  eax = R32((uint32_t)(edi + 0x54u));
/* 10131b9: sbb eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 10131bb: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* 10131be: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 10131c2: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 10131c6: fild qword ptr [esp + 0x10] */
  { double v = (double)(int64_t)R64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 10131ca: shl esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 10131cd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10131ce: fstp qword ptr [esp + 0xc] */
  WF64((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 10131d2: fild dword ptr [ecx + esi + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + esi + 0x8u)); FPUSH(v); }
/* 10131d6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10131d7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10131d8: fstp qword ptr [esp + 0x14] */
  WF64((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 10131dc: fld qword ptr [esp + 4] */
  { double v = F64((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 10131e0: fdiv qword ptr [esp + 0x14] */
  ST0 = ST0 / (F64((uint32_t)(esp + 0x14u)));
/* 10131e4: fadd qword ptr [esp + 0xc] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0xcu)));
/* 10131e8: mov esp, ebp */
  esp = ebp;
/* 10131ea: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10131eb: ret  */
  esp += 4; SPILL(); return;
}

void f_10131f0(void) {
  LOAD_REGS();
L_10131f0: /* 10131f0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 10131f4: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 10131f7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10131f9: je 0x101321d */
  if (zf) goto L_101321d;
L_10131fb: /* 10131fb: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 10131ff: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1013201: jge 0x1013215 */
  if ((sf == of)) goto L_1013215;
L_1013203: /* 1013203: cmp dword ptr [ecx + 0x58], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x58u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1013207: jl 0x101321d */
  if ((sf != of)) goto L_101321d;
L_1013209: /* 1013209: mov eax, dword ptr [ecx + 0x60] */
  eax = R32((uint32_t)(ecx + 0x60u));
L_101320c: /* 101320c: mov edx, dword ptr [ecx + 0x48] */
  edx = R32((uint32_t)(ecx + 0x48u));
/* 101320f: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 1013212: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1013214: ret  */
  esp += 4; SPILL(); return;
L_1013215: /* 1013215: cmp eax, dword ptr [ecx + 0x34] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1013218: jl 0x101320c */
  if ((sf != of)) goto L_101320c;
L_101321a: /* 101321a: xor eax, eax */
  eax = 0;
/* 101321c: ret  */
  esp += 4; SPILL(); return;
L_101321d: /* 101321d: mov eax, dword ptr [ecx + 0x48] */
  eax = R32((uint32_t)(ecx + 0x48u));
/* 1013220: ret  */
  esp += 4; SPILL(); return;
}

void f_1013230(void) {
  LOAD_REGS();
L_1013230: /* 1013230: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 1013234: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 1013237: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1013239: je 0x101325d */
  if (zf) goto L_101325d;
L_101323b: /* 101323b: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 101323f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1013241: jge 0x1013255 */
  if ((sf == of)) goto L_1013255;
L_1013243: /* 1013243: cmp dword ptr [ecx + 0x58], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x58u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1013247: jl 0x101325d */
  if ((sf != of)) goto L_101325d;
L_1013249: /* 1013249: mov eax, dword ptr [ecx + 0x60] */
  eax = R32((uint32_t)(ecx + 0x60u));
L_101324c: /* 101324c: mov edx, dword ptr [ecx + 0x4c] */
  edx = R32((uint32_t)(ecx + 0x4cu));
/* 101324f: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 1013252: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1013254: ret  */
  esp += 4; SPILL(); return;
L_1013255: /* 1013255: cmp eax, dword ptr [ecx + 0x34] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1013258: jl 0x101324c */
  if ((sf != of)) goto L_101324c;
L_101325a: /* 101325a: xor eax, eax */
  eax = 0;
/* 101325c: ret  */
  esp += 4; SPILL(); return;
L_101325d: /* 101325d: mov eax, dword ptr [ecx + 0x4c] */
  eax = R32((uint32_t)(ecx + 0x4cu));
/* 1013260: ret  */
  esp += 4; SPILL(); return;
}

void f_1013270(void) {
  LOAD_REGS();
L_1013270: /* 1013270: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1013271: mov ebp, esp */
  ebp = esp;
/* 1013273: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 1013276: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1013279: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 101327a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 101327b: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 101327e: cmp dword ptr [esi + 0x58], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x58u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1013282: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1013283: jge 0x1013291 */
  if ((sf == of)) goto L_1013291;
L_1013285: /* 1013285: mov eax, 0xffffff7d */
  eax = 0xffffff7du;
/* 101328a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 101328b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 101328c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 101328d: mov esp, ebp */
  esp = ebp;
/* 101328f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1013290: ret  */
  esp += 4; SPILL(); return;
L_1013291: /* 1013291: mov edi, 3 */
  edi = 0x3u;
L_1013296: /* 1013296: cmp dword ptr [esi + 0x58], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x58u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1013299: jl 0x10132b9 */
  if ((sf != of)) goto L_10132b9;
L_101329b: /* 101329b: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 101329f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10132a0: lea ecx, [esi + 0x1e0] */
  ecx = (uint32_t)(esi + 0x1e0u);
/* 10132a6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10132a7: call 0x1013b72 */
  esp -= 4; W32(esp, 0x10132acu); SPILL(); f_1013b72(); if (g_unwind) return; RELOAD();
/* 10132ac: mov ebx, eax */
  ebx = eax;
/* 10132ae: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10132b1: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10132b3: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 10132b7: jne 0x10132db */
  if (!zf) goto L_10132db;
L_10132b9: /* 10132b9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 10132bb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10132bd: mov eax, esi */
  eax = esi;
/* 10132bf: call 0x1011a40 */
  esp -= 4; W32(esp, 0x10132c4u); SPILL(); f_1011a40(); if (g_unwind) return; RELOAD();
/* 10132c4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10132c7: cmp eax, -2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10132ca: je 0x10135b6 */
  if (zf) goto L_10135b6;
L_10132d0: /* 10132d0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10132d2: jg 0x1013296 */
  if ((!zf && sf == of)) goto L_1013296;
L_10132d4: /* 10132d4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10132d5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10132d6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10132d7: mov esp, ebp */
  esp = ebp;
/* 10132d9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10132da: ret  */
  esp += 4; SPILL(); return;
L_10132db: /* 10132db: jle 0x10135ad */
  if ((zf || sf != of)) goto L_10135ad;
L_10132e1: /* 10132e1: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 10132e4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10132e6: je 0x10132fa */
  if (zf) goto L_10132fa;
L_10132e8: /* 10132e8: cmp dword ptr [esi + 0x58], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x58u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10132eb: jl 0x10132fa */
  if ((sf != of)) goto L_10132fa;
L_10132ed: /* 10132ed: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* 10132f0: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* 10132f3: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 10132f6: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10132f8: jmp 0x10132fd */
  goto L_10132fd;
L_10132fa: /* 10132fa: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
L_10132fd: /* 10132fd: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 1013300: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 1013303: mov eax, edi */
  eax = edi;
/* 1013305: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* 1013308: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 101330c: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 101330f: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 1013310: idiv dword ptr [esp + 0x24] */
  { int32_t d = (int32_t)R32((uint32_t)(esp + 0x24u)); if (!d) d = (int32_t)guest_divzero(0x1013310);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 1013314: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 1013318: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 101331a: jle 0x1013322 */
  if ((zf || sf != of)) goto L_1013322;
L_101331c: /* 101331c: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 1013320: mov ebx, eax */
  ebx = eax;
L_1013322: /* 1013322: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1013324: jle 0x1013285 */
  if ((zf || sf != of)) goto L_1013285;
L_101332a: /* 101332a: xor edx, edx */
  edx = 0;
/* 101332c: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 101332f: jne 0x10133b4 */
  if (!zf) goto L_10133b4;
L_1013335: /* 1013335: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 1013338: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 101333a: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 101333d: xor edi, edi */
  edi = 0;
/* 101333f: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 1013340: and edx, 0x80 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 1013346: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1013348: jle 0x1013570 */
  if ((zf || sf != of)) goto L_1013570;
L_101334e: /* 101334e: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
L_1013351: /* 1013351: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 1013355: xor eax, eax */
  eax = 0;
/* 1013357: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1013359: jle 0x10133aa */
  if ((zf || sf != of)) goto L_10133aa;
L_101335b: /* 101335b: jmp 0x1013360 */
  goto L_1013360;
L_1013360: /* 1013360: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 1013364: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 1013367: fld dword ptr [ecx + edi*4] */
  { double v = F32((uint32_t)(ecx + edi*4)); FPUSH(v); }
/* 101336a: fmul dword ptr [0x10140ec] */
  ST0 = ST0 * (F32((uint32_t)(0x10140ecu)));
/* 1013370: fstp qword ptr [esp + 0x28] */
  WF64((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 1013374: fld qword ptr [esp + 0x28] */
  { double v = F64((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 1013378: fistp dword ptr [esp + 0x20] */
  W32((uint32_t)(esp + 0x20u), (uint32_t)fpu_toint32(ST0)); FPOP();
/* 101337c: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 1013380: cmp ecx, 0x7f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1013383: jle 0x101338c */
  if ((zf || sf != of)) goto L_101338c;
L_1013385: /* 1013385: mov ecx, 0x7f */
  ecx = 0x7fu;
/* 101338a: jmp 0x1013396 */
  goto L_1013396;
L_101338c: /* 101338c: cmp ecx, -0x80 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffff80u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 101338f: jge 0x1013396 */
  if ((sf == of)) goto L_1013396;
L_1013391: /* 1013391: mov ecx, 0xffffff80 */
  ecx = 0xffffff80u;
L_1013396: /* 1013396: mov bl, dl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 1013398: add bl, cl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 101339a: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 101339e: mov byte ptr [esi], bl */
  W8((uint32_t)(esi), (ebx & 0xffu));
/* 10133a0: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 10133a1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 10133a2: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10133a4: jl 0x1013360 */
  if ((sf != of)) goto L_1013360;
L_10133a6: /* 10133a6: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
L_10133aa: /* 10133aa: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 10133ab: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10133ad: jl 0x1013351 */
  if ((sf != of)) goto L_1013351;
L_10133af: /* 10133af: jmp 0x1013569 */
  goto L_1013569;
L_10133b4: /* 10133b4: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 10133b7: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 10133ba: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10133bc: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 10133bf: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 10133c0: and edx, 0x8000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 10133c6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10133c8: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 10133cc: jne 0x10134ff */
  if (!zf) goto L_10134ff;
L_10133d2: /* 10133d2: xor ecx, ecx */
  ecx = 0;
/* 10133d4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10133d6: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 10133da: je 0x1013463 */
  if (zf) goto L_1013463;
L_10133e0: /* 10133e0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10133e2: jle 0x1013570 */
  if ((zf || sf != of)) goto L_1013570;
L_10133e8: /* 10133e8: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 10133eb: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 10133ef: nop  */
L_10133f0: /* 10133f0: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 10133f4: mov esi, dword ptr [eax + ecx*4] */
  esi = R32((uint32_t)(eax + ecx*4));
/* 10133f7: xor eax, eax */
  eax = 0;
/* 10133f9: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10133fb: jle 0x1013446 */
  if ((zf || sf != of)) goto L_1013446;
L_10133fd: /* 10133fd: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 1013401: add edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_1013403: /* 1013403: fld dword ptr [esi + eax*4] */
  { double v = F32((uint32_t)(esi + eax*4)); FPUSH(v); }
/* 1013406: fmul dword ptr [0x10140e8] */
  ST0 = ST0 * (F32((uint32_t)(0x10140e8u)));
/* 101340c: fstp qword ptr [esp + 0x28] */
  WF64((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 1013410: fld qword ptr [esp + 0x28] */
  { double v = F64((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 1013414: fistp dword ptr [esp + 0x20] */
  W32((uint32_t)(esp + 0x20u), (uint32_t)fpu_toint32(ST0)); FPOP();
/* 1013418: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 101341c: cmp ecx, 0x7fff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1013422: jle 0x101342b */
  if ((zf || sf != of)) goto L_101342b;
L_1013424: /* 1013424: mov ecx, 0x7fff */
  ecx = 0x7fffu;
/* 1013429: jmp 0x1013438 */
  goto L_1013438;
L_101342b: /* 101342b: cmp ecx, 0xffff8000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffff8000u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1013431: jge 0x1013438 */
  if ((sf == of)) goto L_1013438;
L_1013433: /* 1013433: mov ecx, 0xffff8000 */
  ecx = 0xffff8000u;
L_1013438: /* 1013438: mov word ptr [edx], cx */
  W16((uint32_t)(edx), (ecx & 0xffffu));
/* 101343b: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 101343d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 101343e: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1013440: jl 0x1013403 */
  if ((sf != of)) goto L_1013403;
L_1013442: /* 1013442: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
L_1013446: /* 1013446: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 101344a: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 101344e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 101344f: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1013452: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1013454: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 1013458: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 101345c: jl 0x10133f0 */
  if ((sf != of)) goto L_10133f0;
L_101345e: /* 101345e: jmp 0x1013569 */
  goto L_1013569;
L_1013463: /* 1013463: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1013465: jle 0x1013570 */
  if ((zf || sf != of)) goto L_1013570;
L_101346b: /* 101346b: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 101346e: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
L_1013472: /* 1013472: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 1013476: mov esi, dword ptr [eax + ecx*4] */
  esi = R32((uint32_t)(eax + ecx*4));
/* 1013479: xor eax, eax */
  eax = 0;
/* 101347b: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 101347d: jle 0x10134e1 */
  if ((zf || sf != of)) goto L_10134e1;
L_101347f: /* 101347f: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 1013483: add ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 1013485: jmp 0x1013490 */
  goto L_1013490;
L_1013490: /* 1013490: fld dword ptr [esi + eax*4] */
  { double v = F32((uint32_t)(esi + eax*4)); FPUSH(v); }
/* 1013493: fmul dword ptr [0x10140e8] */
  ST0 = ST0 * (F32((uint32_t)(0x10140e8u)));
/* 1013499: fstp qword ptr [esp + 0x30] */
  WF64((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 101349d: fld qword ptr [esp + 0x30] */
  { double v = F64((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 10134a1: fistp dword ptr [esp + 0x28] */
  W32((uint32_t)(esp + 0x28u), (uint32_t)fpu_toint32(ST0)); FPOP();
/* 10134a5: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 10134a9: cmp ecx, 0x7fff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10134af: jle 0x10134b8 */
  if ((zf || sf != of)) goto L_10134b8;
L_10134b1: /* 10134b1: mov ecx, 0x7fff */
  ecx = 0x7fffu;
/* 10134b6: jmp 0x10134c5 */
  goto L_10134c5;
L_10134b8: /* 10134b8: cmp ecx, 0xffff8000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffff8000u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10134be: jge 0x10134c5 */
  if ((sf == of)) goto L_10134c5;
L_10134c0: /* 10134c0: mov ecx, 0xffff8000 */
  ecx = 0xffff8000u;
L_10134c5: /* 10134c5: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 10134c9: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10134cb: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 10134cf: mov word ptr [edx], di */
  W16((uint32_t)(edx), (edi & 0xffffu));
/* 10134d2: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10134d4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 10134d5: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10134d7: jl 0x1013490 */
  if ((sf != of)) goto L_1013490;
L_10134d9: /* 10134d9: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 10134dd: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
L_10134e1: /* 10134e1: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 10134e5: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 10134e9: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10134ea: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10134ed: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10134ef: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 10134f3: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 10134f7: jl 0x1013472 */
  if ((sf != of)) goto L_1013472;
L_10134fd: /* 10134fd: jmp 0x1013569 */
  goto L_1013569;
L_10134ff: /* 10134ff: xor edi, edi */
  edi = 0;
/* 1013501: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1013503: jle 0x1013570 */
  if ((zf || sf != of)) goto L_1013570;
L_1013505: /* 1013505: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
L_1013508: /* 1013508: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 101350c: xor ecx, ecx */
  ecx = 0;
/* 101350e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1013510: jle 0x1013564 */
  if ((zf || sf != of)) goto L_1013564;
L_1013512: /* 1013512: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 1013516: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 1013519: fld dword ptr [eax + edi*4] */
  { double v = F32((uint32_t)(eax + edi*4)); FPUSH(v); }
/* 101351c: fmul dword ptr [0x10140e8] */
  ST0 = ST0 * (F32((uint32_t)(0x10140e8u)));
/* 1013522: fstp qword ptr [esp + 0x30] */
  WF64((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 1013526: fld qword ptr [esp + 0x30] */
  { double v = F64((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 101352a: fistp dword ptr [esp + 0x28] */
  W32((uint32_t)(esp + 0x28u), (uint32_t)fpu_toint32(ST0)); FPOP();
/* 101352e: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 1013532: cmp eax, 0x7fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1013537: jle 0x1013540 */
  if ((zf || sf != of)) goto L_1013540;
L_1013539: /* 1013539: mov eax, 0x7fff */
  eax = 0x7fffu;
/* 101353e: jmp 0x101354c */
  goto L_101354c;
L_1013540: /* 1013540: cmp eax, 0xffff8000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffff8000u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1013545: jge 0x101354c */
  if ((sf == of)) goto L_101354c;
L_1013547: /* 1013547: mov eax, 0xffff8000 */
  eax = 0xffff8000u;
L_101354c: /* 101354c: add eax, dword ptr [esp + 0x20] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x20u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1013550: mov edx, eax */
  edx = eax;
/* 1013552: sar edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 8;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 1013555: mov byte ptr [esi], dl */
  W8((uint32_t)(esi), (edx & 0xffu));
/* 1013557: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 1013558: mov byte ptr [esi], al */
  W8((uint32_t)(esi), (eax & 0xffu));
/* 101355a: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 101355e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 101355f: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 1013560: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1013562: jl 0x1013512 */
  if ((sf != of)) goto L_1013512;
L_1013564: /* 1013564: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 1013565: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1013567: jl 0x1013508 */
  if ((sf != of)) goto L_1013508;
L_1013569: /* 1013569: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 101356c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_1013570: /* 1013570: lea eax, [esi + 0x1e0] */
  eax = (uint32_t)(esi + 0x1e0u);
/* 1013576: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1013577: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1013578: call 0x1013b7e */
  esp -= 4; W32(esp, 0x101357du); SPILL(); f_1013b7e(); if (g_unwind) return; RELOAD();
/* 101357d: mov ecx, dword ptr [esi + 0x50] */
  ecx = R32((uint32_t)(esi + 0x50u));
/* 1013580: mov edi, dword ptr [esi + 0x54] */
  edi = R32((uint32_t)(esi + 0x54u));
/* 1013583: mov eax, ebx */
  eax = ebx;
/* 1013585: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 1013586: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1013589: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ecx = r;
  }
/* 101358b: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 101358e: adc edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edi = r;
  }
/* 1013590: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1013592: mov dword ptr [esi + 0x50], ecx */
  W32((uint32_t)(esi + 0x50u), ecx);
/* 1013595: mov dword ptr [esi + 0x54], edi */
  W32((uint32_t)(esi + 0x54u), edi);
/* 1013598: je 0x101359f */
  if (zf) goto L_101359f;
L_101359a: /* 101359a: mov ecx, dword ptr [esi + 0x60] */
  ecx = R32((uint32_t)(esi + 0x60u));
/* 101359d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_101359f: /* 101359f: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 10135a3: imul eax, ebx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ebx);
  eax = (uint32_t)r;
  }
/* 10135a6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10135a7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10135a8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10135a9: mov esp, ebp */
  esp = ebp;
/* 10135ab: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10135ac: ret  */
  esp += 4; SPILL(); return;
L_10135ad: /* 10135ad: mov eax, ebx */
  eax = ebx;
/* 10135af: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10135b0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10135b1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10135b2: mov esp, ebp */
  esp = ebp;
/* 10135b4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10135b5: ret  */
  esp += 4; SPILL(); return;
L_10135b6: /* 10135b6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10135b7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10135b8: xor eax, eax */
  eax = 0;
/* 10135ba: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10135bb: mov esp, ebp */
  esp = ebp;
/* 10135bd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10135be: ret  */
  esp += 4; SPILL(); return;
}

void f_101335d(void) {
  LOAD_REGS();
  goto L_101335d;
L_1013351: /* 1013351: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 1013355: xor eax, eax */
  eax = 0;
/* 1013357: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1013359: jle 0x10133aa */
  if ((zf || sf != of)) goto L_10133aa;
L_101335b: /* 101335b: jmp 0x1013360 */
  goto L_1013360;
L_101335d: /* 101335d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_1013360: /* 1013360: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 1013364: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 1013367: fld dword ptr [ecx + edi*4] */
  { double v = F32((uint32_t)(ecx + edi*4)); FPUSH(v); }
/* 101336a: fmul dword ptr [0x10140ec] */
  ST0 = ST0 * (F32((uint32_t)(0x10140ecu)));
/* 1013370: fstp qword ptr [esp + 0x28] */
  WF64((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 1013374: fld qword ptr [esp + 0x28] */
  { double v = F64((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 1013378: fistp dword ptr [esp + 0x20] */
  W32((uint32_t)(esp + 0x20u), (uint32_t)fpu_toint32(ST0)); FPOP();
/* 101337c: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 1013380: cmp ecx, 0x7f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1013383: jle 0x101338c */
  if ((zf || sf != of)) goto L_101338c;
L_1013385: /* 1013385: mov ecx, 0x7f */
  ecx = 0x7fu;
/* 101338a: jmp 0x1013396 */
  goto L_1013396;
L_101338c: /* 101338c: cmp ecx, -0x80 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffff80u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 101338f: jge 0x1013396 */
  if ((sf == of)) goto L_1013396;
L_1013391: /* 1013391: mov ecx, 0xffffff80 */
  ecx = 0xffffff80u;
L_1013396: /* 1013396: mov bl, dl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 1013398: add bl, cl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 101339a: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 101339e: mov byte ptr [esi], bl */
  W8((uint32_t)(esi), (ebx & 0xffu));
/* 10133a0: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 10133a1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 10133a2: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10133a4: jl 0x1013360 */
  if ((sf != of)) goto L_1013360;
L_10133a6: /* 10133a6: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
L_10133aa: /* 10133aa: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 10133ab: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10133ad: jl 0x1013351 */
  if ((sf != of)) goto L_1013351;
L_10133af: /* 10133af: jmp 0x1013569 */
  goto L_1013569;
L_1013569: /* 1013569: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 101356c: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 1013570: lea eax, [esi + 0x1e0] */
  eax = (uint32_t)(esi + 0x1e0u);
/* 1013576: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1013577: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1013578: call 0x1013b7e */
  esp -= 4; W32(esp, 0x101357du); SPILL(); f_1013b7e(); if (g_unwind) return; RELOAD();
/* 101357d: mov ecx, dword ptr [esi + 0x50] */
  ecx = R32((uint32_t)(esi + 0x50u));
/* 1013580: mov edi, dword ptr [esi + 0x54] */
  edi = R32((uint32_t)(esi + 0x54u));
/* 1013583: mov eax, ebx */
  eax = ebx;
/* 1013585: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 1013586: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1013589: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ecx = r;
  }
/* 101358b: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 101358e: adc edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edi = r;
  }
/* 1013590: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1013592: mov dword ptr [esi + 0x50], ecx */
  W32((uint32_t)(esi + 0x50u), ecx);
/* 1013595: mov dword ptr [esi + 0x54], edi */
  W32((uint32_t)(esi + 0x54u), edi);
/* 1013598: je 0x101359f */
  if (zf) goto L_101359f;
L_101359a: /* 101359a: mov ecx, dword ptr [esi + 0x60] */
  ecx = R32((uint32_t)(esi + 0x60u));
/* 101359d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_101359f: /* 101359f: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 10135a3: imul eax, ebx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ebx);
  eax = (uint32_t)r;
  }
/* 10135a6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10135a7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10135a8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10135a9: mov esp, ebp */
  esp = ebp;
/* 10135ab: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10135ac: ret  */
  esp += 4; SPILL(); return;
}

void f_1013487(void) {
  LOAD_REGS();
  goto L_1013487;
L_1013472: /* 1013472: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 1013476: mov esi, dword ptr [eax + ecx*4] */
  esi = R32((uint32_t)(eax + ecx*4));
/* 1013479: xor eax, eax */
  eax = 0;
/* 101347b: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 101347d: jle 0x10134e1 */
  if ((zf || sf != of)) goto L_10134e1;
L_101347f: /* 101347f: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 1013483: add ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 1013485: jmp 0x1013490 */
  goto L_1013490;
L_1013487: /* 1013487: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 101348e: mov edi, edi */
  edi = edi;
L_1013490: /* 1013490: fld dword ptr [esi + eax*4] */
  { double v = F32((uint32_t)(esi + eax*4)); FPUSH(v); }
/* 1013493: fmul dword ptr [0x10140e8] */
  ST0 = ST0 * (F32((uint32_t)(0x10140e8u)));
/* 1013499: fstp qword ptr [esp + 0x30] */
  WF64((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 101349d: fld qword ptr [esp + 0x30] */
  { double v = F64((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 10134a1: fistp dword ptr [esp + 0x28] */
  W32((uint32_t)(esp + 0x28u), (uint32_t)fpu_toint32(ST0)); FPOP();
/* 10134a5: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 10134a9: cmp ecx, 0x7fff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10134af: jle 0x10134b8 */
  if ((zf || sf != of)) goto L_10134b8;
L_10134b1: /* 10134b1: mov ecx, 0x7fff */
  ecx = 0x7fffu;
/* 10134b6: jmp 0x10134c5 */
  goto L_10134c5;
L_10134b8: /* 10134b8: cmp ecx, 0xffff8000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffff8000u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10134be: jge 0x10134c5 */
  if ((sf == of)) goto L_10134c5;
L_10134c0: /* 10134c0: mov ecx, 0xffff8000 */
  ecx = 0xffff8000u;
L_10134c5: /* 10134c5: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 10134c9: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10134cb: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 10134cf: mov word ptr [edx], di */
  W16((uint32_t)(edx), (edi & 0xffffu));
/* 10134d2: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10134d4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 10134d5: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10134d7: jl 0x1013490 */
  if ((sf != of)) goto L_1013490;
L_10134d9: /* 10134d9: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 10134dd: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
L_10134e1: /* 10134e1: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 10134e5: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 10134e9: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10134ea: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10134ed: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10134ef: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 10134f3: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 10134f7: jl 0x1013472 */
  if ((sf != of)) goto L_1013472;
L_10134fd: /* 10134fd: jmp 0x1013569 */
  goto L_1013569;
L_1013569: /* 1013569: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 101356c: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 1013570: lea eax, [esi + 0x1e0] */
  eax = (uint32_t)(esi + 0x1e0u);
/* 1013576: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1013577: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1013578: call 0x1013b7e */
  esp -= 4; W32(esp, 0x101357du); SPILL(); f_1013b7e(); if (g_unwind) return; RELOAD();
/* 101357d: mov ecx, dword ptr [esi + 0x50] */
  ecx = R32((uint32_t)(esi + 0x50u));
/* 1013580: mov edi, dword ptr [esi + 0x54] */
  edi = R32((uint32_t)(esi + 0x54u));
/* 1013583: mov eax, ebx */
  eax = ebx;
/* 1013585: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 1013586: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1013589: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ecx = r;
  }
/* 101358b: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 101358e: adc edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edi = r;
  }
/* 1013590: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1013592: mov dword ptr [esi + 0x50], ecx */
  W32((uint32_t)(esi + 0x50u), ecx);
/* 1013595: mov dword ptr [esi + 0x54], edi */
  W32((uint32_t)(esi + 0x54u), edi);
/* 1013598: je 0x101359f */
  if (zf) goto L_101359f;
L_101359a: /* 101359a: mov ecx, dword ptr [esi + 0x60] */
  ecx = R32((uint32_t)(esi + 0x60u));
/* 101359d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_101359f: /* 101359f: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 10135a3: imul eax, ebx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ebx);
  eax = (uint32_t)r;
  }
/* 10135a6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10135a7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10135a8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10135a9: mov esp, ebp */
  esp = ebp;
/* 10135ab: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10135ac: ret  */
  esp += 4; SPILL(); return;
}

void f_10135ad(void) {
  LOAD_REGS();
L_10135ad: /* 10135ad: mov eax, ebx */
  eax = ebx;
/* 10135af: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10135b0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10135b1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10135b2: mov esp, ebp */
  esp = ebp;
/* 10135b4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10135b5: ret  */
  esp += 4; SPILL(); return;
}

void f_10135b6(void) {
  LOAD_REGS();
L_10135b6: /* 10135b6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10135b7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10135b8: xor eax, eax */
  eax = 0;
/* 10135ba: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10135bb: mov esp, ebp */
  esp = ebp;
/* 10135bd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10135be: ret  */
  esp += 4; SPILL(); return;
}

void f_10135c0(void) {
  LOAD_REGS();
L_10135c0: /* 10135c0: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 10135c3: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 10135c5: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 10135c8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10135c9: mov ebx, dword ptr [esi + 0x5c] */
  ebx = R32((uint32_t)(esi + 0x5cu));
/* 10135cc: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10135cd: mov ebp, dword ptr [esi + 8] */
  ebp = R32((uint32_t)(esi + 0x8u));
/* 10135d0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10135d1: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 10135d3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10135d5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10135d7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10135d8: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 10135dc: call dword ptr [esi + 0x2c4] */
  { uint32_t t = R32((uint32_t)(esi + 0x2c4u)); esp -= 4; W32(esp, 0x10135e2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10135e2: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 10135e4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10135e5: call dword ptr [esi + 0x2cc] */
  { uint32_t t = R32((uint32_t)(esi + 0x2ccu)); esp -= 4; W32(esp, 0x10135ebu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10135eb: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 10135ec: mov ecx, edx */
  ecx = edx;
/* 10135ee: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 10135f1: lea edx, [esp + 0x28] */
  edx = (uint32_t)(esp + 0x28u);
/* 10135f5: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 10135f8: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 10135fb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10135fc: mov eax, esi */
  eax = esi;
/* 10135fe: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* 1013601: call 0x1011150 */
  esp -= 4; W32(esp, 0x1013606u); SPILL(); f_1011150(); if (g_unwind) return; RELOAD();
/* 1013606: mov edi, eax */
  edi = eax;
/* 1013608: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 101360b: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 101360d: jge 0x1013616 */
  if ((sf == of)) goto L_1013616;
L_101360f: /* 101360f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1013610: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1013611: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1013612: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1013615: ret  */
  esp += 4; SPILL(); return;
L_1013616: /* 1013616: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 101361a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 101361b: call 0x1013ae8 */
  esp -= 4; W32(esp, 0x1013620u); SPILL(); f_1013ae8(); if (g_unwind) return; RELOAD();
/* 1013620: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1013623: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1013625: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1013627: lea eax, [edi + 1] */
  eax = (uint32_t)(edi + 0x1u);
/* 101362a: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 101362b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 101362c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 101362d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 101362e: je 0x1013651 */
  if (zf) goto L_1013651;
L_1013630: /* 1013630: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1013632: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1013634: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1013636: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1013638: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1013639: call 0x10112a0 */
  esp -= 4; W32(esp, 0x101363eu); SPILL(); f_10112a0(); if (g_unwind) return; RELOAD();
/* 101363e: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1013641: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1013643: jge 0x1013667 */
  if ((sf == of)) goto L_1013667;
L_1013645: /* 1013645: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1013646: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1013647: mov eax, 0xffffff80 */
  eax = 0xffffff80u;
/* 101364c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 101364d: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1013650: ret  */
  esp += 4; SPILL(); return;
L_1013651: /* 1013651: mov eax, edi */
  eax = edi;
/* 1013653: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 1013654: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1013655: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1013656: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1013658: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 101365a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 101365b: call 0x10112a0 */
  esp -= 4; W32(esp, 0x1013660u); SPILL(); f_10112a0(); if (g_unwind) return; RELOAD();
/* 1013660: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1013663: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1013665: jne 0x1013645 */
  if (!zf) goto L_1013645;
L_1013667: /* 1013667: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 101366b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 101366c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 101366d: mov eax, esi */
  eax = esi;
/* 101366f: call 0x1011640 */
  esp -= 4; W32(esp, 0x1013674u); SPILL(); f_1011640(); if (g_unwind) return; RELOAD();
/* 1013674: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1013676: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1013678: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1013679: call 0x1012110 */
  esp -= 4; W32(esp, 0x101367eu); SPILL(); f_1012110(); if (g_unwind) return; RELOAD();
/* 101367e: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1013681: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1013682: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1013683: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1013684: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1013687: ret  */
  esp += 4; SPILL(); return;
}

void f_1013690(void) {
  LOAD_REGS();
L_1013690: /* 1013690: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1013691: mov ebp, dword ptr [esp + 8] */
  ebp = R32((uint32_t)(esp + 0x8u));
/* 1013695: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1013697: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1013698: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 101369c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 101369d: je 0x10136b1 */
  if (zf) goto L_10136b1;
L_101369f: /* 101369f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 10136a1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10136a3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10136a5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10136a6: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x10136a8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10136a8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10136ab: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 10136af: jmp 0x10136b9 */
  goto L_10136b9;
L_10136b1: /* 10136b1: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
L_10136b9: /* 10136b9: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 10136bd: xor eax, eax */
  eax = 0;
/* 10136bf: mov ecx, 0xb4 */
  ecx = 0xb4u;
/* 10136c4: mov edi, ebx */
  edi = ebx;
/* 10136c6: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 10136c8: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 10136cc: lea eax, [ebx + 0x2c0] */
  eax = (uint32_t)(ebx + 0x2c0u);
/* 10136d2: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 10136d4: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 10136d8: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 10136db: mov dword ptr [ebx], ebp */
  W32((uint32_t)(ebx), ebp);
/* 10136dd: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 10136e0: lea ebp, [ebx + 0x18] */
  ebp = (uint32_t)(ebx + 0x18u);
/* 10136e3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10136e4: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 10136e7: call 0x1013b2a */
  esp -= 4; W32(esp, 0x10136ecu); SPILL(); f_1013b2a(); if (g_unwind) return; RELOAD();
/* 10136ec: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 10136f0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10136f3: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10136f5: je 0x1013720 */
  if (zf) goto L_1013720;
L_10136f7: /* 10136f7: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 10136fb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10136fc: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10136fd: call 0x1013ad6 */
  esp -= 4; W32(esp, 0x1013702u); SPILL(); f_1013ad6(); if (g_unwind) return; RELOAD();
/* 1013702: mov ecx, edi */
  ecx = edi;
/* 1013704: mov edx, ecx */
  edx = ecx;
/* 1013706: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 1013709: mov edi, eax */
  edi = eax;
/* 101370b: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 101370d: mov eax, edx */
  eax = edx;
/* 101370f: mov ecx, edx */
  ecx = edx;
/* 1013711: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1013712: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 1013715: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1013716: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 1013718: call 0x1013ad0 */
  esp -= 4; W32(esp, 0x101371du); SPILL(); f_1013ad0(); if (g_unwind) return; RELOAD();
/* 101371d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_1013720: /* 1013720: cmp dword ptr [esp + 0x10], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1013725: mov esi, 1 */
  esi = 0x1u;
/* 101372a: je 0x101372f */
  if (zf) goto L_101372f;
L_101372c: /* 101372c: mov dword ptr [ebx + 4], esi */
  W32((uint32_t)(ebx + 0x4u), esi);
L_101372f: /* 101372f: mov edi, dword ptr [0x101401c] */
  edi = R32((uint32_t)(0x101401cu));
/* 1013735: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 1013737: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1013738: mov dword ptr [ebx + 0x34], esi */
  W32((uint32_t)(ebx + 0x34u), esi);
/* 101373b: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x101373du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 101373d: mov ecx, dword ptr [ebx + 0x34] */
  ecx = R32((uint32_t)(ebx + 0x34u));
/* 1013740: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 1013742: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1013743: mov dword ptr [ebx + 0x48], eax */
  W32((uint32_t)(ebx + 0x48u), eax);
/* 1013746: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x1013748u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1013748: lea edx, [ebx + 0x78] */
  edx = (uint32_t)(ebx + 0x78u);
/* 101374b: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 101374d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 101374e: mov dword ptr [ebx + 0x4c], eax */
  W32((uint32_t)(ebx + 0x4cu), eax);
/* 1013751: call 0x1013b18 */
  esp -= 4; W32(esp, 0x1013756u); SPILL(); f_1013b18(); if (g_unwind) return; RELOAD();
/* 1013756: mov ecx, dword ptr [ebx + 0x4c] */
  ecx = R32((uint32_t)(ebx + 0x4cu));
/* 1013759: mov edx, dword ptr [ebx + 0x48] */
  edx = R32((uint32_t)(ebx + 0x48u));
/* 101375c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 101375e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 101375f: lea eax, [ebx + 0x5c] */
  eax = (uint32_t)(ebx + 0x5cu);
/* 1013762: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1013763: mov ecx, ebx */
  ecx = ebx;
/* 1013765: call 0x1011500 */
  esp -= 4; W32(esp, 0x101376au); SPILL(); f_1011500(); if (g_unwind) return; RELOAD();
/* 101376a: mov edi, eax */
  edi = eax;
/* 101376c: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 101376f: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1013771: jge 0x1013788 */
  if ((sf == of)) goto L_1013788;
L_1013773: /* 1013773: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1013774: mov dword ptr [ebx], 0 */
  W32((uint32_t)(ebx), 0x0u);
/* 101377a: call 0x1011d80 */
  esp -= 4; W32(esp, 0x101377fu); SPILL(); f_1011d80(); if (g_unwind) return; RELOAD();
/* 101377f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1013782: mov eax, edi */
  eax = edi;
/* 1013784: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1013785: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1013786: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1013787: ret  */
  esp += 4; SPILL(); return;
L_1013788: /* 1013788: cmp dword ptr [ebx + 0x58], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x58u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 101378b: jge 0x1013790 */
  if ((sf == of)) goto L_1013790;
L_101378d: /* 101378d: mov dword ptr [ebx + 0x58], esi */
  W32((uint32_t)(ebx + 0x58u), esi);
L_1013790: /* 1013790: mov eax, edi */
  eax = edi;
/* 1013792: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1013793: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1013794: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1013795: ret  */
  esp += 4; SPILL(); return;
}

void f_10137a0(void) {
  LOAD_REGS();
L_10137a0: /* 10137a0: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 10137a4: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 10137a8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10137a9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10137aa: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 10137ae: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10137af: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 10137b2: mov eax, esp */
  eax = esp;
/* 10137b4: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 10137b6: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 10137ba: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 10137bd: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 10137c1: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 10137c4: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 10137c8: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 10137cb: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 10137cf: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 10137d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10137d4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10137d5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10137d6: mov ebx, esi */
  ebx = esi;
/* 10137d8: call 0x1013690 */
  esp -= 4; W32(esp, 0x10137ddu); SPILL(); f_1013690(); if (g_unwind) return; RELOAD();
/* 10137dd: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10137e0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10137e2: jne 0x101381c */
  if (!zf) goto L_101381c;
L_10137e4: /* 10137e4: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* 10137e7: mov eax, 2 */
  eax = 0x2u;
/* 10137ec: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10137ee: jge 0x10137f3 */
  if ((sf == of)) goto L_10137f3;
L_10137f0: /* 10137f0: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
L_10137f3: /* 10137f3: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 10137f6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10137f8: je 0x101381a */
  if (zf) goto L_101381a;
L_10137fa: /* 10137fa: call 0x10135c0 */
  esp -= 4; W32(esp, 0x10137ffu); SPILL(); f_10135c0(); if (g_unwind) return; RELOAD();
/* 10137ff: mov edi, eax */
  edi = eax;
/* 1013801: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1013803: je 0x1013814 */
  if (zf) goto L_1013814;
L_1013805: /* 1013805: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1013806: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 101380c: call 0x1011d80 */
  esp -= 4; W32(esp, 0x1013811u); SPILL(); f_1011d80(); if (g_unwind) return; RELOAD();
/* 1013811: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_1013814: /* 1013814: mov eax, edi */
  eax = edi;
/* 1013816: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1013817: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1013818: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1013819: ret  */
  esp += 4; SPILL(); return;
L_101381a: /* 101381a: xor eax, eax */
  eax = 0;
L_101381c: /* 101381c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 101381d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 101381e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 101381f: ret  */
  esp += 4; SPILL(); return;
}

void f_1013820(void) {
  LOAD_REGS();
L_1013820: /* 1013820: mov eax, dword ptr [0x1014028] */
  eax = R32((uint32_t)(0x1014028u));
/* 1013825: mov edx, dword ptr [0x1014024] */
  edx = R32((uint32_t)(0x1014024u));
/* 101382b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 101382c: mov esi, dword ptr [0x1014020] */
  esi = R32((uint32_t)(0x1014020u));
/* 1013832: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1013833: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1013836: mov edi, esp */
  edi = esp;
/* 1013838: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 101383a: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 101383e: mov ecx, 0x1011d50 */
  ecx = 0x1011d50u;
/* 1013843: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 1013846: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 101384a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 101384b: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 101384f: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 1013852: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 1013856: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1013857: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1013858: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1013859: mov dword ptr [edi + 0xc], esi */
  W32((uint32_t)(edi + 0xcu), esi);
/* 101385c: call 0x10137a0 */
  esp -= 4; W32(esp, 0x1013861u); SPILL(); f_10137a0(); if (g_unwind) return; RELOAD();
/* 1013861: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1013864: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1013865: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1013866: ret  */
  esp += 4; SPILL(); return;
}

void f_1013870(void) {
  LOAD_REGS();
L_1013870: /* 1013870: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 1013874: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 1013878: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1013879: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* 101387d: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1013880: mov eax, esp */
  eax = esp;
/* 1013882: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 1013884: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 1013888: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 101388b: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 101388f: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 1013892: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 1013896: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 1013899: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 101389d: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 10138a1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10138a2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10138a3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10138a4: call 0x1013690 */
  esp -= 4; W32(esp, 0x10138a9u); SPILL(); f_1013690(); if (g_unwind) return; RELOAD();
/* 10138a9: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10138ac: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10138ad: ret  */
  esp += 4; SPILL(); return;
}

void f_10138b0(void) {
  LOAD_REGS();
L_10138b0: /* 10138b0: mov eax, dword ptr [0x1014028] */
  eax = R32((uint32_t)(0x1014028u));
/* 10138b5: mov edx, dword ptr [0x1014024] */
  edx = R32((uint32_t)(0x1014024u));
/* 10138bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10138bc: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* 10138c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10138c1: mov esi, dword ptr [0x1014020] */
  esi = R32((uint32_t)(0x1014020u));
/* 10138c7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10138c8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 10138cb: mov edi, esp */
  edi = esp;
/* 10138cd: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 10138cf: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 10138d3: mov ecx, 0x1011d50 */
  ecx = 0x1011d50u;
/* 10138d8: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 10138db: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 10138df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10138e0: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 10138e3: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 10138e7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10138e8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10138e9: mov dword ptr [edi + 0xc], esi */
  W32((uint32_t)(edi + 0xcu), esi);
/* 10138ec: call 0x1013690 */
  esp -= 4; W32(esp, 0x10138f1u); SPILL(); f_1013690(); if (g_unwind) return; RELOAD();
/* 10138f1: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10138f4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10138f5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10138f6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10138f7: ret  */
  esp += 4; SPILL(); return;
}

void f_1013900(void) {
  LOAD_REGS();
L_1013900: /* 1013900: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1013901: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 1013905: cmp dword ptr [esi + 0x58], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x58u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1013909: je 0x1013912 */
  if (zf) goto L_1013912;
L_101390b: /* 101390b: mov eax, 0xffffff7d */
  eax = 0xffffff7du;
/* 1013910: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1013911: ret  */
  esp += 4; SPILL(); return;
L_1013912: /* 1013912: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 1013915: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1013917: mov dword ptr [esi + 0x58], 2 */
  W32((uint32_t)(esi + 0x58u), 0x2u);
/* 101391e: je 0x1013940 */
  if (zf) goto L_1013940;
L_1013920: /* 1013920: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1013921: call 0x10135c0 */
  esp -= 4; W32(esp, 0x1013926u); SPILL(); f_10135c0(); if (g_unwind) return; RELOAD();
/* 1013926: mov edi, eax */
  edi = eax;
/* 1013928: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 101392a: je 0x101393b */
  if (zf) goto L_101393b;
L_101392c: /* 101392c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 101392d: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 1013933: call 0x1011d80 */
  esp -= 4; W32(esp, 0x1013938u); SPILL(); f_1011d80(); if (g_unwind) return; RELOAD();
/* 1013938: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_101393b: /* 101393b: mov eax, edi */
  eax = edi;
/* 101393d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 101393e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 101393f: ret  */
  esp += 4; SPILL(); return;
L_1013940: /* 1013940: xor eax, eax */
  eax = 0;
/* 1013942: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1013943: ret  */
  esp += 4; SPILL(); return;
}

void f_1013950(void) {
  LOAD_REGS();
L_1013950: /* 1013950: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1013953: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1013954: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 1013958: cmp dword ptr [ebp + 0x58], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x58u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 101395c: jl 0x101397f */
  if ((sf != of)) goto L_101397f;
L_101395e: /* 101395e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 101395f: mov ebx, dword ptr [ebp + 0x34] */
  ebx = R32((uint32_t)(ebp + 0x34u));
/* 1013962: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1013963: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 1013967: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_1013968: /* 1013968: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 101396a: jge 0x1013989 */
  if ((sf == of)) goto L_1013989;
L_101396c: /* 101396c: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 101396f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1013971: jne 0x1013996 */
  if (!zf) goto L_1013996;
L_1013973: /* 1013973: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1013975: je 0x1013a28 */
  if (zf) goto L_1013a28;
L_101397b: /* 101397b: xor esi, esi */
  esi = 0;
/* 101397d: jmp 0x1013968 */
  goto L_1013968;
L_101397f: /* 101397f: mov eax, 0xffffff7d */
  eax = 0xffffff7du;
/* 1013984: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1013985: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1013988: ret  */
  esp += 4; SPILL(); return;
L_1013989: /* 1013989: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 101398a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 101398b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 101398c: mov eax, 0xffffff7d */
  eax = 0xffffff7du;
/* 1013991: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1013992: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1013995: ret  */
  esp += 4; SPILL(); return;
L_1013996: /* 1013996: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1013998: jge 0x1013a28 */
  if ((sf == of)) goto L_1013a28;
L_101399e: /* 101399e: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10139a0: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 10139a8: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 10139b0: jle 0x10139f6 */
  if ((zf || sf != of)) goto L_10139f6;
L_10139b2: /* 10139b2: mov esi, dword ptr [ebp + 0x38] */
  esi = R32((uint32_t)(ebp + 0x38u));
/* 10139b5: mov edi, dword ptr [ebp + 0x3c] */
  edi = R32((uint32_t)(ebp + 0x3cu));
/* 10139b8: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 10139bb: jmp 0x10139c0 */
  goto L_10139c0;
L_10139c0: /* 10139c0: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 10139c2: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 10139c4: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 10139c7: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  eax = r;
  }
/* 10139c9: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 10139cc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10139ce: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 10139d0: sbb ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ecx = r;
  }
/* 10139d2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10139d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10139d4: call 0x1013cc0 */
  esp -= 4; W32(esp, 0x10139d9u); SPILL(); f_1013cc0(); if (g_unwind) return; RELOAD();
/* 10139d9: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 10139dd: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ecx = r;
  }
/* 10139df: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 10139e3: adc eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  eax = r;
  }
/* 10139e5: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 10139e8: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10139eb: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* 10139ec: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 10139f0: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 10139f4: jne 0x10139c0 */
  if (!zf) goto L_10139c0;
L_10139f6: /* 10139f6: fild qword ptr [esp + 0x10] */
  { double v = (double)(int64_t)R64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 10139fa: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 10139fc: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10139fd: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 1013a01: call 0x1012070 */
  esp -= 4; W32(esp, 0x1013a06u); SPILL(); f_1012070(); if (g_unwind) return; RELOAD();
/* 1013a06: fdivr qword ptr [esp + 0x18] */
  ST0 = (F64((uint32_t)(esp + 0x18u))) / ST0;
/* 1013a0a: fadd qword ptr [0x10140d0] */
  ST0 = ST0 + (F64((uint32_t)(0x10140d0u)));
/* 1013a10: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 1013a13: call dword ptr [0x101402c] */
  esp -= 4; W32(esp, 0x1013a19u); SPILL(); hle_floor(); if (g_unwind) return; /* MSVCR70!floor */ RELOAD();
/* 1013a19: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1013a1c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1013a1d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1013a1e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1013a1f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1013a20: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1013a23: jmp 0x1013c40 */
  SPILL(); f_1013c40(); return;
L_1013a28: /* 1013a28: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 1013a2b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1013a2d: je 0x1013a8c */
  if (zf) goto L_1013a8c;
L_1013a2f: /* 1013a2f: mov eax, dword ptr [ebp + 0x3c] */
  eax = R32((uint32_t)(ebp + 0x3cu));
/* 1013a32: mov edx, dword ptr [ebp + 0x38] */
  edx = R32((uint32_t)(ebp + 0x38u));
/* 1013a35: mov ecx, dword ptr [edx + esi*8 + 8] */
  ecx = R32((uint32_t)(edx + esi*8 + 0x8u));
/* 1013a39: mov ebx, dword ptr [eax + esi*8] */
  ebx = R32((uint32_t)(eax + esi*8));
/* 1013a3c: mov edx, dword ptr [edx + esi*8 + 0xc] */
  edx = R32((uint32_t)(edx + esi*8 + 0xcu));
/* 1013a40: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  ecx = r;
  }
/* 1013a42: mov edi, dword ptr [eax + esi*8 + 4] */
  edi = R32((uint32_t)(eax + esi*8 + 0x4u));
/* 1013a46: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1013a48: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 1013a4a: sbb edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edx = r;
  }
/* 1013a4c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1013a4d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1013a4e: call 0x1013cc0 */
  esp -= 4; W32(esp, 0x1013a53u); SPILL(); f_1013cc0(); if (g_unwind) return; RELOAD();
/* 1013a53: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 1013a57: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 1013a5b: fild qword ptr [esp + 0x10] */
  { double v = (double)(int64_t)R64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 1013a5f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1013a60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1013a61: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 1013a65: call 0x1012070 */
  esp -= 4; W32(esp, 0x1013a6au); SPILL(); f_1012070(); if (g_unwind) return; RELOAD();
/* 1013a6a: fdivr qword ptr [esp + 0x18] */
  ST0 = (F64((uint32_t)(esp + 0x18u))) / ST0;
/* 1013a6e: fadd qword ptr [0x10140d0] */
  ST0 = ST0 + (F64((uint32_t)(0x10140d0u)));
/* 1013a74: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 1013a77: call dword ptr [0x101402c] */
  esp -= 4; W32(esp, 0x1013a7du); SPILL(); hle_floor(); if (g_unwind) return; /* MSVCR70!floor */ RELOAD();
/* 1013a7d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1013a80: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1013a81: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1013a82: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1013a83: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1013a84: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1013a87: jmp 0x1013c40 */
  SPILL(); f_1013c40(); return;
L_1013a8c: /* 1013a8c: mov eax, dword ptr [ebp + 0x48] */
  eax = R32((uint32_t)(ebp + 0x48u));
/* 1013a8f: shl esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 1013a92: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1013a94: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 1013a97: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1013a99: jg 0x1013abb */
  if ((!zf && sf == of)) goto L_1013abb;
L_1013a9b: /* 1013a9b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 1013a9e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1013aa0: jle 0x1013ab8 */
  if ((zf || sf != of)) goto L_1013ab8;
L_1013aa2: /* 1013aa2: mov esi, dword ptr [esi + 0x14] */
  esi = R32((uint32_t)(esi + 0x14u));
/* 1013aa5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1013aa7: jle 0x1013abb */
  if ((zf || sf != of)) goto L_1013abb;
L_1013aa9: /* 1013aa9: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1013aab: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1013aac: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 1013aad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1013aae: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 1013ab0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1013ab1: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 1013ab3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1013ab4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1013ab7: ret  */
  esp += 4; SPILL(); return;
L_1013ab8: /* 1013ab8: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_1013abb: /* 1013abb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1013abc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1013abd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1013abe: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1013abf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1013ac2: ret  */
  esp += 4; SPILL(); return;
}

void f_10139bd(void) {
  LOAD_REGS();
L_10139bd: /* 10139bd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_10139c0: /* 10139c0: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 10139c2: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 10139c4: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 10139c7: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  eax = r;
  }
/* 10139c9: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 10139cc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10139ce: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 10139d0: sbb ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ecx = r;
  }
/* 10139d2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10139d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10139d4: call 0x1013cc0 */
  esp -= 4; W32(esp, 0x10139d9u); SPILL(); f_1013cc0(); if (g_unwind) return; RELOAD();
/* 10139d9: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 10139dd: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ecx = r;
  }
/* 10139df: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 10139e3: adc eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  eax = r;
  }
/* 10139e5: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 10139e8: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10139eb: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* 10139ec: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 10139f0: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 10139f4: jne 0x10139c0 */
  if (!zf) goto L_10139c0;
L_10139f6: /* 10139f6: fild qword ptr [esp + 0x10] */
  { double v = (double)(int64_t)R64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 10139fa: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 10139fc: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10139fd: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 1013a01: call 0x1012070 */
  esp -= 4; W32(esp, 0x1013a06u); SPILL(); f_1012070(); if (g_unwind) return; RELOAD();
/* 1013a06: fdivr qword ptr [esp + 0x18] */
  ST0 = (F64((uint32_t)(esp + 0x18u))) / ST0;
/* 1013a0a: fadd qword ptr [0x10140d0] */
  ST0 = ST0 + (F64((uint32_t)(0x10140d0u)));
/* 1013a10: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 1013a13: call dword ptr [0x101402c] */
  esp -= 4; W32(esp, 0x1013a19u); SPILL(); hle_floor(); if (g_unwind) return; /* MSVCR70!floor */ RELOAD();
/* 1013a19: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1013a1c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1013a1d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1013a1e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1013a1f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1013a20: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1013a23: jmp 0x1013c40 */
  SPILL(); f_1013c40(); return;
}

void f_1013ad0(void) {
  LOAD_REGS();
L_1013ad0: /* 1013ad0: jmp dword ptr [0x1014064] */
  SPILL(); f_fe1c90(); return; /* ogg!ogg_sync_wrote */
}

void f_1013ad6(void) {
  LOAD_REGS();
L_1013ad6: /* 1013ad6: jmp dword ptr [0x1014048] */
  SPILL(); f_fe1c10(); return; /* ogg!ogg_sync_buffer */
}

void f_1013adc(void) {
  LOAD_REGS();
L_1013adc: /* 1013adc: jmp dword ptr [0x1014084] */
  SPILL(); f_fe2160(); return; /* ogg!ogg_sync_reset */
}

void f_1013ae2(void) {
  LOAD_REGS();
L_1013ae2: /* 1013ae2: jmp dword ptr [0x1014080] */
  SPILL(); f_fe1cb0(); return; /* ogg!ogg_sync_pageseek */
}

void f_1013ae8(void) {
  LOAD_REGS();
L_1013ae8: /* 1013ae8: jmp dword ptr [0x101407c] */
  SPILL(); f_fe14e0(); return; /* ogg!ogg_page_serialno */
}

void f_1013aee(void) {
  LOAD_REGS();
L_1013aee: /* 1013aee: jmp dword ptr [0x1014078] */
  SPILL(); f_fe2370(); return; /* ogg!ogg_stream_packetout */
}

void f_1013af4(void) {
  LOAD_REGS();
L_1013af4: /* 1013af4: jmp dword ptr [0x1014074] */
  SPILL(); f_fe1e40(); return; /* ogg!ogg_stream_pagein */
}

void f_1013afa(void) {
  LOAD_REGS();
L_1013afa: /* 1013afa: jmp dword ptr [0x1014070] */
  SPILL(); f_fe21d0(); return; /* ogg!ogg_stream_reset_serialno */
}

void f_1013b00(void) {
  LOAD_REGS();
L_1013b00: /* 1013b00: jmp dword ptr [0x101406c] */
  SPILL(); f_fe1450(); return; /* ogg!ogg_page_granulepos */
}

void f_1013b06(void) {
  LOAD_REGS();
L_1013b06: /* 1013b06: jmp dword ptr [0x1014068] */
  SPILL(); f_fe1ba0(); return; /* ogg!ogg_sync_clear */
}

void f_1013b0c(void) {
  LOAD_REGS();
L_1013b0c: /* 1013b0c: jmp dword ptr [0x1014060] */
  SPILL(); f_fe15d0(); return; /* ogg!ogg_stream_clear */
}

void f_1013b12(void) {
  LOAD_REGS();
L_1013b12: /* 1013b12: jmp dword ptr [0x101405c] */
  SPILL(); f_fe1440(); return; /* ogg!ogg_page_eos */
}

void f_1013b18(void) {
  LOAD_REGS();
L_1013b18: /* 1013b18: jmp dword ptr [0x1014058] */
  SPILL(); f_fe1570(); return; /* ogg!ogg_stream_init */
}

void f_1013b1e(void) {
  LOAD_REGS();
L_1013b1e: /* 1013b1e: jmp dword ptr [0x1014054] */
  SPILL(); f_fe1420(); return; /* ogg!ogg_page_continued */
}

void f_1013b24(void) {
  LOAD_REGS();
L_1013b24: /* 1013b24: jmp dword ptr [0x1014050] */
  SPILL(); f_fe2390(); return; /* ogg!ogg_stream_packetpeek */
}

void f_1013b2a(void) {
  LOAD_REGS();
L_1013b2a: /* 1013b2a: jmp dword ptr [0x101404c] */
  SPILL(); f_fe1b80(); return; /* ogg!ogg_sync_init */
}

void f_1013b30(void) {
  LOAD_REGS();
L_1013b30: /* 1013b30: jmp dword ptr [0x10140c4] */
  SPILL(); f_ff85e0(); return; /* vorbis!vorbis_comment_clear */
}

void f_1013b36(void) {
  LOAD_REGS();
L_1013b36: /* 1013b36: jmp dword ptr [0x10140c0] */
  SPILL(); f_ff86a0(); return; /* vorbis!vorbis_info_clear */
}

void f_1013b3c(void) {
  LOAD_REGS();
L_1013b3c: /* 1013b3c: jmp dword ptr [0x10140bc] */
  SPILL(); f_ff8ce0(); return; /* vorbis!vorbis_synthesis_headerin */
}

void f_1013b42(void) {
  LOAD_REGS();
L_1013b42: /* 1013b42: jmp dword ptr [0x10140b8] */
  SPILL(); f_ff82d0(); return; /* vorbis!vorbis_comment_init */
}

void f_1013b48(void) {
  LOAD_REGS();
L_1013b48: /* 1013b48: jmp dword ptr [0x10140b4] */
  SPILL(); f_ff8670(); return; /* vorbis!vorbis_info_init */
}

void f_1013b4e(void) {
  LOAD_REGS();
L_1013b4e: /* 1013b4e: jmp dword ptr [0x10140b0] */
  SPILL(); f_1008df0(); return; /* vorbis!vorbis_packet_blocksize */
}

void f_1013b54(void) {
  LOAD_REGS();
L_1013b54: /* 1013b54: jmp dword ptr [0x10140ac] */
  SPILL(); f_ff27e0(); return; /* vorbis!vorbis_block_init */
}

void f_1013b5a(void) {
  LOAD_REGS();
L_1013b5a: /* 1013b5a: jmp dword ptr [0x10140a8] */
  SPILL(); f_ff34a0(); return; /* vorbis!vorbis_synthesis_init */
}

void f_1013b60(void) {
  LOAD_REGS();
L_1013b60: /* 1013b60: jmp dword ptr [0x10140a4] */
  SPILL(); f_ff2920(); return; /* vorbis!vorbis_block_clear */
}

void f_1013b66(void) {
  LOAD_REGS();
L_1013b66: /* 1013b66: jmp dword ptr [0x10140c8] */
  SPILL(); f_ff2cb0(); return; /* vorbis!vorbis_dsp_clear */
}

void f_1013b6c(void) {
  LOAD_REGS();
L_1013b6c: /* 1013b6c: jmp dword ptr [0x10140a0] */
  SPILL(); f_ff34d0(); return; /* vorbis!vorbis_synthesis_blockin */
}

void f_1013b72(void) {
  LOAD_REGS();
L_1013b72: /* 1013b72: jmp dword ptr [0x101409c] */
  SPILL(); f_ff3ab0(); return; /* vorbis!vorbis_synthesis_pcmout */
}

void f_1013b78(void) {
  LOAD_REGS();
L_1013b78: /* 1013b78: jmp dword ptr [0x1014098] */
  SPILL(); f_1008bc0(); return; /* vorbis!vorbis_synthesis */
}

void f_1013b7e(void) {
  LOAD_REGS();
L_1013b7e: /* 1013b7e: jmp dword ptr [0x1014094] */
  SPILL(); f_ff3b10(); return; /* vorbis!vorbis_synthesis_read */
}

void f_1013b84(void) {
  LOAD_REGS();
L_1013b84: /* 1013b84: jmp dword ptr [0x1014090] */
  SPILL(); f_1008d20(); return; /* vorbis!vorbis_synthesis_trackonly */
}

void f_1013b8a(void) {
  LOAD_REGS();
L_1013b8a: /* 1013b8a: jmp dword ptr [0x101408c] */
  SPILL(); f_ff8650(); return; /* vorbis!vorbis_info_blocksize */
}

void f_1013b90(void) {
  LOAD_REGS();
L_1013b90: /* 1013b90: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1013b91: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1013b92: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1013b93: xor edi, edi */
  edi = 0;
/* 1013b95: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 1013b99: or eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  sf = ((r) >> 31) & 1;
  of = 0;
  eax = r;
  }
/* 1013b9b: jge 0x1013bb1 */
  if ((sf == of)) goto L_1013bb1;
L_1013b9d: /* 1013b9d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 1013b9e: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 1013ba2: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 1013ba4: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  edx = r;
  }
/* 1013ba6: sbb eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 1013ba9: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 1013bad: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
L_1013bb1: /* 1013bb1: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 1013bb5: or eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  sf = ((r) >> 31) & 1;
  of = 0;
  eax = r;
  }
/* 1013bb7: jge 0x1013bcd */
  if ((sf == of)) goto L_1013bcd;
L_1013bb9: /* 1013bb9: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 1013bba: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 1013bbe: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 1013bc0: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  edx = r;
  }
/* 1013bc2: sbb eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 1013bc5: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 1013bc9: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
L_1013bcd: /* 1013bcd: or eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  eax = r;
  }
/* 1013bcf: jne 0x1013be9 */
  if (!zf) goto L_1013be9;
L_1013bd1: /* 1013bd1: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 1013bd5: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 1013bd9: xor edx, edx */
  edx = 0;
/* 1013bdb: div ecx */
  { uint32_t d = ecx; if (!d) d = guest_divzero(0x1013bdb);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
/* 1013bdd: mov ebx, eax */
  ebx = eax;
/* 1013bdf: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 1013be3: div ecx */
  { uint32_t d = ecx; if (!d) d = guest_divzero(0x1013be3);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
/* 1013be5: mov edx, ebx */
  edx = ebx;
/* 1013be7: jmp 0x1013c2a */
  goto L_1013c2a;
L_1013be9: /* 1013be9: mov ebx, eax */
  ebx = eax;
/* 1013beb: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 1013bef: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 1013bf3: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_1013bf7: /* 1013bf7: shr ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  cf = ((uint32_t)a >> (c - 1)) & 1;
  ebx = r;
  }
/* 1013bf9: rcr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)(((uint32_t)a >> 1) | ((uint32_t)cf << 31));
  of = ((r >> 31) ^ (r >> 30)) & 1;
  cf = a & 1;
  ecx = r;
  }
/* 1013bfb: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  cf = ((uint32_t)a >> (c - 1)) & 1;
  edx = r;
  }
/* 1013bfd: rcr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)(((uint32_t)a >> 1) | ((uint32_t)cf << 31));
  of = ((r >> 31) ^ (r >> 30)) & 1;
  cf = a & 1;
  eax = r;
  }
/* 1013bff: or ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  ebx = r;
  }
/* 1013c01: jne 0x1013bf7 */
  if (!zf) goto L_1013bf7;
L_1013c03: /* 1013c03: div ecx */
  { uint32_t d = ecx; if (!d) d = guest_divzero(0x1013c03);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
/* 1013c05: mov esi, eax */
  esi = eax;
/* 1013c07: mul dword ptr [esp + 0x1c] */
  { uint64_t r = (uint64_t)eax * (uint64_t)(R32((uint32_t)(esp + 0x1cu))); eax = (uint32_t)r; edx = (uint32_t)(r >> 32); cf = of = (edx != 0); }
/* 1013c0b: mov ecx, eax */
  ecx = eax;
/* 1013c0d: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 1013c11: mul esi */
  { uint64_t r = (uint64_t)eax * (uint64_t)(esi); eax = (uint32_t)r; edx = (uint32_t)(r >> 32); cf = of = (edx != 0); }
/* 1013c13: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edx = r;
  }
/* 1013c15: jb 0x1013c25 */
  if (cf) goto L_1013c25;
L_1013c17: /* 1013c17: cmp edx, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 1013c1b: ja 0x1013c25 */
  if ((!cf && !zf)) goto L_1013c25;
L_1013c1d: /* 1013c1d: jb 0x1013c26 */
  if (cf) goto L_1013c26;
L_1013c1f: /* 1013c1f: cmp eax, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 1013c23: jbe 0x1013c26 */
  if ((cf | zf)) goto L_1013c26;
L_1013c25: /* 1013c25: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
L_1013c26: /* 1013c26: xor edx, edx */
  edx = 0;
/* 1013c28: mov eax, esi */
  eax = esi;
L_1013c2a: /* 1013c2a: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 1013c2b: jne 0x1013c34 */
  if (!zf) goto L_1013c34;
L_1013c2d: /* 1013c2d: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  edx = r;
  }
/* 1013c2f: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 1013c31: sbb edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edx = r;
  }
L_1013c34: /* 1013c34: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1013c35: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1013c36: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1013c37: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_1013c40(void) {
  LOAD_REGS();
L_1013c40: /* 1013c40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1013c41: mov ebp, esp */
  ebp = esp;
/* 1013c43: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1013c46: and esp, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 1013c49: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 1013c4b: fst dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0);
/* 1013c4f: fistp qword ptr [esp + 0x10] */
  W64((uint32_t)(esp + 0x10u), (uint64_t)fpu_toint64(ST0)); FPOP();
/* 1013c53: fild qword ptr [esp + 0x10] */
  { double v = (double)(int64_t)R64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 1013c57: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 1013c5b: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 1013c5f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1013c61: je 0x1013c9f */
  if (zf) goto L_1013c9f;
L_1013c63: /* 1013c63: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 1013c65: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  }
/* 1013c67: jns 0x1013c87 */
  if (!sf) goto L_1013c87;
L_1013c69: /* 1013c69: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 1013c6c: mov ecx, dword ptr [esp] */
  ecx = R32((uint32_t)(esp));
/* 1013c6f: xor ecx, 0x80000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 1013c75: add ecx, 0x7fffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ecx = r;
  }
/* 1013c7b: adc eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  cf = cin ? ((r) <= (a)) : ((r) < (a));
  eax = r;
  }
/* 1013c7e: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 1013c82: adc edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 1013c85: jmp 0x1013cb3 */
  goto L_1013cb3;
L_1013c87: /* 1013c87: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 1013c8a: mov ecx, dword ptr [esp] */
  ecx = R32((uint32_t)(esp));
/* 1013c8d: add ecx, 0x7fffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ecx = r;
  }
/* 1013c93: sbb eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  cf = cin ? ((a) <= (b)) : ((a) < (b));
  eax = r;
  }
/* 1013c96: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 1013c9a: sbb edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edx = r;
  }
/* 1013c9d: jmp 0x1013cb3 */
  goto L_1013cb3;
L_1013c9f: /* 1013c9f: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 1013ca3: test edx, 0x7fffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1013ca9: jne 0x1013c63 */
  if (!zf) goto L_1013c63;
L_1013cab: /* 1013cab: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 1013caf: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
L_1013cb3: /* 1013cb3: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 1013cb4: ret  */
  esp += 4; SPILL(); return;
}

void f_1013cc0(void) {
  LOAD_REGS();
L_1013cc0: /* 1013cc0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 1013cc4: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 1013cc8: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  ecx = r;
  }
/* 1013cca: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 1013cce: jne 0x1013cd9 */
  if (!zf) goto L_1013cd9;
L_1013cd0: /* 1013cd0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 1013cd4: mul ecx */
  { uint64_t r = (uint64_t)eax * (uint64_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)(r >> 32); cf = of = (edx != 0); }
/* 1013cd6: ret 0x10 */
  esp += 20; SPILL(); return;
L_1013cd9: /* 1013cd9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1013cda: mul ecx */
  { uint64_t r = (uint64_t)eax * (uint64_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)(r >> 32); cf = of = (edx != 0); }
/* 1013cdc: mov ebx, eax */
  ebx = eax;
/* 1013cde: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 1013ce2: mul dword ptr [esp + 0x14] */
  { uint64_t r = (uint64_t)eax * (uint64_t)(R32((uint32_t)(esp + 0x14u))); eax = (uint32_t)r; edx = (uint32_t)(r >> 32); cf = of = (edx != 0); }
/* 1013ce6: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 1013ce8: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 1013cec: mul ecx */
  { uint64_t r = (uint64_t)eax * (uint64_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)(r >> 32); cf = of = (edx != 0); }
/* 1013cee: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1013cf0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1013cf1: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_1013cf4(void) {
  LOAD_REGS();
L_1013cf4: /* 1013cf4: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 1013cf8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1013cfa: jne 0x1013d0a */
  if (!zf) goto L_1013d0a;
L_1013cfc: /* 1013cfc: cmp dword ptr [0x1015010], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x1015010u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1013d02: jle 0x1013d32 */
  if ((zf || sf != of)) goto L_1013d32;
L_1013d04: /* 1013d04: dec dword ptr [0x1015010] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x1015010u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(0x1015010u), r);
  }
L_1013d0a: /* 1013d0a: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1013d0d: mov ecx, dword ptr [0x1014034] */
  ecx = R32((uint32_t)(0x1014034u));
/* 1013d13: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 1013d15: mov dword ptr [0x1015014], ecx */
  W32((uint32_t)(0x1015014u), ecx);
/* 1013d1b: jne 0x1013d6c */
  if (!zf) goto L_1013d6c;
L_1013d1d: /* 1013d1d: push 0x80 */
  { uint32_t v = 0x80u; esp -= 4; W32(esp, v); }
/* 1013d22: call dword ptr [0x101400c] */
  esp -= 4; W32(esp, 0x1013d28u); SPILL(); f_4010eb(); if (g_unwind) return; /* MSVCR70!malloc */ RELOAD();
/* 1013d28: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1013d2a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 1013d2b: mov dword ptr [0x101501c], eax */
  W32((uint32_t)(0x101501cu), eax);
/* 1013d30: jne 0x1013d36 */
  if (!zf) goto L_1013d36;
L_1013d32: /* 1013d32: xor eax, eax */
  eax = 0;
/* 1013d34: jmp 0x1013daf */
  goto L_1013daf;
L_1013d36: /* 1013d36: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 1013d39: mov eax, dword ptr [0x101501c] */
  eax = R32((uint32_t)(0x101501cu));
/* 1013d3e: mov dword ptr [0x1015018], eax */
  W32((uint32_t)(0x1015018u), eax);
/* 1013d43: call 0x1013e8e */
  esp -= 4; W32(esp, 0x1013d48u); SPILL(); f_1013e8e(); if (g_unwind) return; RELOAD();
/* 1013d48: push 0x1013ed2 */
  { uint32_t v = 0x1013ed2u; esp -= 4; W32(esp, v); }
/* 1013d4d: call 0x1013e7c */
  esp -= 4; W32(esp, 0x1013d52u); SPILL(); f_1013e7c(); if (g_unwind) return; RELOAD();
/* 1013d52: mov dword ptr [esp], 0x1015004 */
  W32((uint32_t)(esp), 0x1015004u);
/* 1013d59: push 0x1015000 */
  { uint32_t v = 0x1015000u; esp -= 4; W32(esp, v); }
/* 1013d5e: call 0x1013e50 */
  esp -= 4; W32(esp, 0x1013d63u); SPILL(); f_1013e50(); if (g_unwind) return; RELOAD();
/* 1013d63: inc dword ptr [0x1015010] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x1015010u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0x1015010u), r);
  }
/* 1013d69: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 1013d6a: jmp 0x1013dab */
  goto L_1013dab;
L_1013d6c: /* 1013d6c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1013d6e: jne 0x1013dac */
  if (!zf) goto L_1013dac;
L_1013d70: /* 1013d70: mov eax, dword ptr [0x101501c] */
  eax = R32((uint32_t)(0x101501cu));
/* 1013d75: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1013d77: je 0x1013dac */
  if (zf) goto L_1013dac;
L_1013d79: /* 1013d79: jmp 0x1013d8e */
  goto L_1013d8e;
L_1013d7b: /* 1013d7b: mov ecx, dword ptr [0x1015018] */
  ecx = R32((uint32_t)(0x1015018u));
/* 1013d81: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 1013d83: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1013d85: je 0x1013d8e */
  if (zf) goto L_1013d8e;
L_1013d87: /* 1013d87: call ecx */
  { uint32_t t = ecx; esp -= 4; W32(esp, 0x1013d89u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1013d89: mov eax, dword ptr [0x101501c] */
  eax = R32((uint32_t)(0x101501cu));
L_1013d8e: /* 1013d8e: sub dword ptr [0x1015018], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x1015018u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(0x1015018u), r);
  }
/* 1013d95: cmp dword ptr [0x1015018], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x1015018u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1013d9b: jae 0x1013d7b */
  if (!cf) goto L_1013d7b;
L_1013d9d: /* 1013d9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1013d9e: call dword ptr [0x1014018] */
  esp -= 4; W32(esp, 0x1013da4u); SPILL(); f_401156(); if (g_unwind) return; /* MSVCR70!free */ RELOAD();
/* 1013da4: and dword ptr [0x101501c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x101501cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(0x101501cu), r);
  }
L_1013dab: /* 1013dab: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_1013dac: /* 1013dac: xor eax, eax */
  eax = 0;
/* 1013dae: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_1013daf: /* 1013daf: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_1013db2(void) {
  LOAD_REGS();
L_1013db2: /* 1013db2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1013db3: mov ebp, esp */
  ebp = esp;
/* 1013db5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1013db6: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 1013db9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1013dba: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 1013dbd: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1013dbf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1013dc0: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 1013dc3: jne 0x1013dce */
  if (!zf) goto L_1013dce;
L_1013dc5: /* 1013dc5: cmp dword ptr [0x1015010], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x1015010u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1013dcc: jmp 0x1013df4 */
  goto L_1013df4;
L_1013dce: /* 1013dce: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1013dd1: je 0x1013dd8 */
  if (zf) goto L_1013dd8;
L_1013dd3: /* 1013dd3: cmp esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1013dd6: jne 0x1013dfa */
  if (!zf) goto L_1013dfa;
L_1013dd8: /* 1013dd8: mov eax, dword ptr [0x1015020] */
  eax = R32((uint32_t)(0x1015020u));
/* 1013ddd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1013ddf: je 0x1013dea */
  if (zf) goto L_1013dea;
L_1013de1: /* 1013de1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1013de2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1013de3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1013de4: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x1013de6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1013de6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1013de8: je 0x1013df6 */
  if (zf) goto L_1013df6;
L_1013dea: /* 1013dea: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1013deb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1013dec: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1013ded: call 0x1013cf4 */
  esp -= 4; W32(esp, 0x1013df2u); SPILL(); f_1013cf4(); if (g_unwind) return; RELOAD();
/* 1013df2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
L_1013df4: /* 1013df4: jne 0x1013dfa */
  if (!zf) goto L_1013dfa;
L_1013df6: /* 1013df6: xor eax, eax */
  eax = 0;
/* 1013df8: jmp 0x1013e48 */
  goto L_1013e48;
L_1013dfa: /* 1013dfa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1013dfb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1013dfc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1013dfd: call 0x1013f16 */
  esp -= 4; W32(esp, 0x1013e02u); SPILL(); f_1013f16(); if (g_unwind) return; RELOAD();
/* 1013e02: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1013e05: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 1013e08: jne 0x1013e16 */
  if (!zf) goto L_1013e16;
L_1013e0a: /* 1013e0a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1013e0c: jne 0x1013e45 */
  if (!zf) goto L_1013e45;
L_1013e0e: /* 1013e0e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1013e0f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1013e10: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1013e11: call 0x1013cf4 */
  esp -= 4; W32(esp, 0x1013e16u); SPILL(); f_1013cf4(); if (g_unwind) return; RELOAD();
L_1013e16: /* 1013e16: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1013e18: je 0x1013e1f */
  if (zf) goto L_1013e1f;
L_1013e1a: /* 1013e1a: cmp esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1013e1d: jne 0x1013e45 */
  if (!zf) goto L_1013e45;
L_1013e1f: /* 1013e1f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1013e20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1013e21: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1013e22: call 0x1013cf4 */
  esp -= 4; W32(esp, 0x1013e27u); SPILL(); f_1013cf4(); if (g_unwind) return; RELOAD();
/* 1013e27: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1013e29: jne 0x1013e2e */
  if (!zf) goto L_1013e2e;
L_1013e2b: /* 1013e2b: and dword ptr [ebp + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xcu), r);
  }
L_1013e2e: /* 1013e2e: cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1013e32: je 0x1013e45 */
  if (zf) goto L_1013e45;
L_1013e34: /* 1013e34: mov eax, dword ptr [0x1015020] */
  eax = R32((uint32_t)(0x1015020u));
/* 1013e39: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1013e3b: je 0x1013e45 */
  if (zf) goto L_1013e45;
L_1013e3d: /* 1013e3d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1013e3e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1013e3f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1013e40: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x1013e42u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1013e42: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
L_1013e45: /* 1013e45: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
L_1013e48: /* 1013e48: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1013e49: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1013e4a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1013e4b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1013e4c: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_1013e50(void) {
  LOAD_REGS();
L_1013e50: /* 1013e50: jmp dword ptr [0x1014030] */
  SPILL(); f_4011ee(); return; /* MSVCR70!_initterm */
}

void f_1013e56(void) {
  LOAD_REGS();
L_1013e56: /* 1013e56: cmp dword ptr [0x101501c], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x101501cu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1013e5d: jne 0x1013e65 */
  if (!zf) goto L_1013e65;
L_1013e5f: /* 1013e5f: jmp dword ptr [0x101403c] */
  SPILL(); f_404cc9(); return; /* MSVCR70!_onexit */
L_1013e65: /* 1013e65: push 0x1015018 */
  { uint32_t v = 0x1015018u; esp -= 4; W32(esp, v); }
/* 1013e6a: push 0x101501c */
  { uint32_t v = 0x101501cu; esp -= 4; W32(esp, v); }
/* 1013e6f: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 1013e73: call 0x1013f36 */
  esp -= 4; W32(esp, 0x1013e78u); SPILL(); f_1013f36(); if (g_unwind) return; RELOAD();
/* 1013e78: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1013e7b: ret  */
  esp += 4; SPILL(); return;
}

void f_1013e7c(void) {
  LOAD_REGS();
L_1013e7c: /* 1013e7c: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 1013e80: call 0x1013e56 */
  esp -= 4; W32(esp, 0x1013e85u); SPILL(); f_1013e56(); if (g_unwind) return; RELOAD();
/* 1013e85: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 1013e87: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 1013e89: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 1013e8b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 1013e8c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 1013e8d: ret  */
  esp += 4; SPILL(); return;
}

void f_1013e8e(void) {
  LOAD_REGS();
L_1013e8e: /* 1013e8e: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 1013e90: push 0x10140f0 */
  { uint32_t v = 0x10140f0u; esp -= 4; W32(esp, v); }
/* 1013e95: call 0x1013f3c */
  esp -= 4; W32(esp, 0x1013e9au); SPILL(); f_1013f3c(); if (g_unwind) return; RELOAD();
/* 1013e9a: mov dword ptr [ebp - 0x1c], 0x1014110 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x1014110u);
L_1013ea1: /* 1013ea1: cmp dword ptr [ebp - 0x1c], 0x1014110 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x1014110u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1013ea8: jae 0x1013ecc */
  if (!cf) goto L_1013ecc;
L_1013eaa: /* 1013eaa: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 1013eae: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 1013eb1: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 1013eb3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1013eb5: je 0x1013ec2 */
  if (zf) goto L_1013ec2;
L_1013eb7: /* 1013eb7: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x1013eb9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1013eb9: jmp 0x1013ec2 */
  goto L_1013ec2;
L_1013ec2: /* 1013ec2: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 1013ec6: add dword ptr [ebp - 0x1c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 1013eca: jmp 0x1013ea1 */
  goto L_1013ea1;
L_1013ecc: /* 1013ecc: call 0x1013f77 */
  esp -= 4; W32(esp, 0x1013ed1u); SPILL(); f_1013f77(); if (g_unwind) return; RELOAD();
/* 1013ed1: ret  */
  esp += 4; SPILL(); return;
}

void f_1013ebb(void) {
  LOAD_REGS();
L_1013ebb: /* 1013ebb: xor eax, eax */
  eax = 0;
/* 1013ebd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 1013ebe: ret  */
  esp += 4; SPILL(); return;
}

void f_1013ebf(void) {
  LOAD_REGS();
  goto L_1013ebf;
L_1013ea1: /* 1013ea1: cmp dword ptr [ebp - 0x1c], 0x1014110 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x1014110u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1013ea8: jae 0x1013ecc */
  if (!cf) goto L_1013ecc;
L_1013eaa: /* 1013eaa: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 1013eae: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 1013eb1: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 1013eb3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1013eb5: je 0x1013ec2 */
  if (zf) goto L_1013ec2;
L_1013eb7: /* 1013eb7: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x1013eb9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1013eb9: jmp 0x1013ec2 */
  goto L_1013ec2;
L_1013ebf: /* 1013ebf: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
L_1013ec2: /* 1013ec2: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 1013ec6: add dword ptr [ebp - 0x1c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 1013eca: jmp 0x1013ea1 */
  goto L_1013ea1;
L_1013ecc: /* 1013ecc: call 0x1013f77 */
  esp -= 4; W32(esp, 0x1013ed1u); SPILL(); f_1013f77(); if (g_unwind) return; RELOAD();
/* 1013ed1: ret  */
  esp += 4; SPILL(); return;
}

void f_1013ed2(void) {
  LOAD_REGS();
L_1013ed2: /* 1013ed2: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 1013ed4: push 0x1014100 */
  { uint32_t v = 0x1014100u; esp -= 4; W32(esp, v); }
/* 1013ed9: call 0x1013f3c */
  esp -= 4; W32(esp, 0x1013edeu); SPILL(); f_1013f3c(); if (g_unwind) return; RELOAD();
/* 1013ede: mov dword ptr [ebp - 0x1c], 0x1014118 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x1014118u);
L_1013ee5: /* 1013ee5: cmp dword ptr [ebp - 0x1c], 0x1014118 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x1014118u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1013eec: jae 0x1013f10 */
  if (!cf) goto L_1013f10;
L_1013eee: /* 1013eee: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 1013ef2: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 1013ef5: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 1013ef7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1013ef9: je 0x1013f06 */
  if (zf) goto L_1013f06;
L_1013efb: /* 1013efb: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x1013efdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1013efd: jmp 0x1013f06 */
  goto L_1013f06;
L_1013f06: /* 1013f06: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 1013f0a: add dword ptr [ebp - 0x1c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 1013f0e: jmp 0x1013ee5 */
  goto L_1013ee5;
L_1013f10: /* 1013f10: call 0x1013f77 */
  esp -= 4; W32(esp, 0x1013f15u); SPILL(); f_1013f77(); if (g_unwind) return; RELOAD();
/* 1013f15: ret  */
  esp += 4; SPILL(); return;
}

void f_1013eff(void) {
  LOAD_REGS();
L_1013eff: /* 1013eff: xor eax, eax */
  eax = 0;
/* 1013f01: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 1013f02: ret  */
  esp += 4; SPILL(); return;
}

void f_1013f03(void) {
  LOAD_REGS();
  goto L_1013f03;
L_1013ee5: /* 1013ee5: cmp dword ptr [ebp - 0x1c], 0x1014118 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x1014118u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1013eec: jae 0x1013f10 */
  if (!cf) goto L_1013f10;
L_1013eee: /* 1013eee: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 1013ef2: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 1013ef5: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 1013ef7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1013ef9: je 0x1013f06 */
  if (zf) goto L_1013f06;
L_1013efb: /* 1013efb: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x1013efdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1013efd: jmp 0x1013f06 */
  goto L_1013f06;
L_1013f03: /* 1013f03: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
L_1013f06: /* 1013f06: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 1013f0a: add dword ptr [ebp - 0x1c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 1013f0e: jmp 0x1013ee5 */
  goto L_1013ee5;
L_1013f10: /* 1013f10: call 0x1013f77 */
  esp -= 4; W32(esp, 0x1013f15u); SPILL(); f_1013f77(); if (g_unwind) return; RELOAD();
/* 1013f15: ret  */
  esp += 4; SPILL(); return;
}

void f_1013f16(void) {
  LOAD_REGS();
L_1013f16: /* 1013f16: cmp dword ptr [esp + 8], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x8u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1013f1b: jne 0x1013f30 */
  if (!zf) goto L_1013f30;
L_1013f1d: /* 1013f1d: cmp dword ptr [0x1015020], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x1015020u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1013f24: jne 0x1013f30 */
  if (!zf) goto L_1013f30;
L_1013f26: /* 1013f26: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 1013f2a: call dword ptr [0x1014000] */
  esp -= 4; W32(esp, 0x1013f30u); SPILL(); call_ind(R32(0x1014000u)); if (g_unwind) return; /* KERNEL32!DisableThreadLibraryCalls */ RELOAD();
L_1013f30: /* 1013f30: xor eax, eax */
  eax = 0;
/* 1013f32: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 1013f33: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_1013f36(void) {
  LOAD_REGS();
L_1013f36: /* 1013f36: jmp dword ptr [0x1014038] */
  SPILL(); f_40259b(); return; /* MSVCR70!__dllonexit */
}

void f_1013f3c(void) {
  LOAD_REGS();
L_1013f3c: /* 1013f3c: push 0x1013f88 */
  { uint32_t v = 0x1013f88u; esp -= 4; W32(esp, v); }
/* 1013f41: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 1013f47: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1013f48: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 1013f4c: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 1013f50: lea ebp, [esp + 0x10] */
  ebp = (uint32_t)(esp + 0x10u);
/* 1013f54: sub esp, eax */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1013f56: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1013f57: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1013f58: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1013f59: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 1013f5c: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 1013f5f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1013f60: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 1013f63: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 1013f6a: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 1013f6d: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 1013f70: mov dword ptr fs:[0], eax */
  W32((uint32_t)(FS_BASE + 0x0u), eax);
/* 1013f76: ret  */
  esp += 4; SPILL(); return;
}

void f_1013f77(void) {
  LOAD_REGS();
L_1013f77: /* 1013f77: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 1013f7a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1013f81: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 1013f82: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1013f83: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1013f84: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1013f85: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 1013f86: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1013f87: ret  */
  esp += 4; SPILL(); return;
}

void f_1013f88(void) {
  LOAD_REGS();
L_1013f88: /* 1013f88: jmp dword ptr [0x1014008] */
  SPILL(); f_406ebd(); return; /* MSVCR70!_except_handler3 */
}
