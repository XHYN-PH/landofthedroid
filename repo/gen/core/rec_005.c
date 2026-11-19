#include "recomp.h"
#include "rec_mod.h"

void f_503fd0(void) {
  LOAD_REGS();
L_503fd0: /* 503fd0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 503fd2: push 0x5566e8 */
  { uint32_t v = 0x5566e8u; esp -= 4; W32(esp, v); }
/* 503fd7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 503fdd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 503fde: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 503fe5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 503fe6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 503fe7: mov esi, ecx */
  esi = ecx;
/* 503fe9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 503fed: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 503ff0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 503ff1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 503ff3: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 503ffb: call 0x4e2a63 */
  esp -= 4; W32(esp, 0x504000u); SPILL(); f_4e2a63(); if (g_unwind) return; RELOAD();
/* 504000: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 504002: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 504004: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 50400c: je 0x50401a */
  if (zf) goto L_50401a;
L_50400e: /* 50400e: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 504014: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 504016: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 504017: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x50401au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_50401a: /* 50401a: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 50401e: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 504024: mov dword ptr [esi + 8], 0 */
  W32((uint32_t)(esi + 0x8u), 0x0u);
/* 50402b: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 504032: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 504033: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 50403a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50403d: ret  */
  esp += 4; SPILL(); return;
}

void f_504060(void) {
  LOAD_REGS();
L_504060: /* 504060: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 504061: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 504065: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 504066: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 504067: mov esi, ecx */
  esi = ecx;
/* 504069: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50406b: je 0x5040dc */
  if (zf) goto L_5040dc;
L_50406d: /* 50406d: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 504070: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 504071: call 0x4e21ad */
  esp -= 4; W32(esp, 0x504076u); SPILL(); f_4e21ad(); if (g_unwind) return; RELOAD();
/* 504076: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 504079: xor ebp, ebp */
  ebp = 0;
/* 50407b: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50407d: jle 0x5040dc */
  if ((zf || sf != of)) goto L_5040dc;
L_50407f: /* 50407f: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 504083: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_504084: /* 504084: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 504087: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 50408a: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 50408d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50408f: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 504092: jle 0x5040b0 */
  if ((zf || sf != of)) goto L_5040b0;
L_504094: /* 504094: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 504097: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 504098: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 50409b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 50409d: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 5040a0: lea ecx, [eax + ecx + 0x20] */
  ecx = (uint32_t)(eax + ecx + 0x20u);
/* 5040a4: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 5040a7: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 5040a9: mov ecx, esi */
  ecx = esi;
/* 5040ab: call 0x4e4502 */
  esp -= 4; W32(esp, 0x5040b0u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_5040b0: /* 5040b0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 5040b2: lea edx, [edi + edi*2] */
  edx = (uint32_t)(edi + edi*2);
/* 5040b5: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 5040b8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5040ba: je 0x5040c8 */
  if (zf) goto L_5040c8;
L_5040bc: /* 5040bc: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 5040be: add edx, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 5040c2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5040c3: call 0x4e3fc1 */
  esp -= 4; W32(esp, 0x5040c8u); SPILL(); f_4e3fc1(); if (g_unwind) return; RELOAD();
L_5040c8: /* 5040c8: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 5040cc: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 5040cf: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 5040d0: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 5040d3: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5040d5: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 5040d9: jl 0x504084 */
  if ((sf != of)) goto L_504084;
L_5040db: /* 5040db: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_5040dc: /* 5040dc: mov eax, esi */
  eax = esi;
/* 5040de: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5040df: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5040e0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5040e1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_504120(void) {
  LOAD_REGS();
L_504120: /* 504120: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 504122: push 0x556708 */
  { uint32_t v = 0x556708u; esp -= 4; W32(esp, v); }
/* 504127: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 50412d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50412e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 504135: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 504136: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 504137: mov esi, ecx */
  esi = ecx;
/* 504139: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 50413d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 504140: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 504141: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 504143: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 50414b: call 0x4e1906 */
  esp -= 4; W32(esp, 0x504150u); SPILL(); f_4e1906(); if (g_unwind) return; RELOAD();
/* 504150: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 504152: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 504154: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 50415c: je 0x50416a */
  if (zf) goto L_50416a;
L_50415e: /* 50415e: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 504164: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 504166: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 504167: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x50416au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_50416a: /* 50416a: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 50416e: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 504174: mov dword ptr [esi + 8], 0 */
  W32((uint32_t)(esi + 0x8u), 0x0u);
/* 50417b: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 504182: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 504183: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 50418a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50418d: ret  */
  esp += 4; SPILL(); return;
}

void f_5041b0(void) {
  LOAD_REGS();
L_5041b0: /* 5041b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5041b1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 5041b5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 5041b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5041b7: mov esi, ecx */
  esi = ecx;
/* 5041b9: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5041bb: je 0x50422c */
  if (zf) goto L_50422c;
L_5041bd: /* 5041bd: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 5041c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5041c1: call 0x4e3931 */
  esp -= 4; W32(esp, 0x5041c6u); SPILL(); f_4e3931(); if (g_unwind) return; RELOAD();
/* 5041c6: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 5041c9: xor ebp, ebp */
  ebp = 0;
/* 5041cb: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5041cd: jle 0x50422c */
  if ((zf || sf != of)) goto L_50422c;
L_5041cf: /* 5041cf: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 5041d3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_5041d4: /* 5041d4: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 5041d7: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 5041da: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 5041dd: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5041df: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 5041e2: jle 0x504200 */
  if ((zf || sf != of)) goto L_504200;
L_5041e4: /* 5041e4: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 5041e7: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 5041e8: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 5041eb: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5041ed: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 5041f0: lea ecx, [eax + ecx + 0x20] */
  ecx = (uint32_t)(eax + ecx + 0x20u);
/* 5041f4: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 5041f7: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 5041f9: mov ecx, esi */
  ecx = esi;
/* 5041fb: call 0x4e4502 */
  esp -= 4; W32(esp, 0x504200u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_504200: /* 504200: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 504202: lea edx, [edi + edi*8] */
  edx = (uint32_t)(edi + edi*8);
/* 504205: lea ecx, [eax + edx*8] */
  ecx = (uint32_t)(eax + edx*8);
/* 504208: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50420a: je 0x504218 */
  if (zf) goto L_504218;
L_50420c: /* 50420c: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 50420e: add edx, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 504212: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 504213: call 0x4e1b31 */
  esp -= 4; W32(esp, 0x504218u); SPILL(); f_4e1b31(); if (g_unwind) return; RELOAD();
L_504218: /* 504218: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 50421c: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 50421f: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 504220: add ecx, 0x48 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 504223: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 504225: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 504229: jl 0x5041d4 */
  if ((sf != of)) goto L_5041d4;
L_50422b: /* 50422b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_50422c: /* 50422c: mov eax, esi */
  eax = esi;
/* 50422e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50422f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 504230: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 504231: ret 4 */
  esp += 8; SPILL(); return;
}

void f_504270(void) {
  LOAD_REGS();
L_504270: /* 504270: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 504271: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 504275: xor ecx, ecx */
  ecx = 0;
/* 504277: mov dword ptr [esp], ecx */
  W32((uint32_t)(esp), ecx);
/* 50427b: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 50427d: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 504280: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 504283: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 504284: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_5042a0(void) {
  LOAD_REGS();
L_5042a0: /* 5042a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5042a2: push 0x556728 */
  { uint32_t v = 0x556728u; esp -= 4; W32(esp, v); }
/* 5042a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 5042ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5042ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 5042b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5042b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5042b7: mov esi, ecx */
  esi = ecx;
/* 5042b9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 5042bd: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 5042c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5042c1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5042c3: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 5042cb: call 0x4e2cc5 */
  esp -= 4; W32(esp, 0x5042d0u); SPILL(); f_4e2cc5(); if (g_unwind) return; RELOAD();
/* 5042d0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 5042d2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5042d4: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 5042dc: je 0x5042ea */
  if (zf) goto L_5042ea;
L_5042de: /* 5042de: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 5042e4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5042e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5042e7: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x5042eau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_5042ea: /* 5042ea: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 5042ee: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 5042f4: mov dword ptr [esi + 8], 0 */
  W32((uint32_t)(esi + 0x8u), 0x0u);
/* 5042fb: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 504302: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 504303: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 50430a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50430d: ret  */
  esp += 4; SPILL(); return;
}

void f_504330(void) {
  LOAD_REGS();
L_504330: /* 504330: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 504332: push 0x556753 */
  { uint32_t v = 0x556753u; esp -= 4; W32(esp, v); }
/* 504337: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 50433d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50433e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 504345: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 504346: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 504347: mov esi, ecx */
  esi = ecx;
/* 504349: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 50434d: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 504350: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 504358: call 0x4e2801 */
  esp -= 4; W32(esp, 0x50435du); SPILL(); f_4e2801(); if (g_unwind) return; RELOAD();
/* 50435d: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* 504360: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 504365: call 0x4e318e */
  esp -= 4; W32(esp, 0x50436au); SPILL(); f_4e318e(); if (g_unwind) return; RELOAD();
/* 50436a: mov ecx, esi */
  ecx = esi;
/* 50436c: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 504374: call 0x4e12c1 */
  esp -= 4; W32(esp, 0x504379u); SPILL(); f_4e12c1(); if (g_unwind) return; RELOAD();
/* 504379: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 50437d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50437e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 504385: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 504388: ret  */
  esp += 4; SPILL(); return;
}

void f_5043b0(void) {
  LOAD_REGS();
L_5043b0: /* 5043b0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5043b2: push 0x556783 */
  { uint32_t v = 0x556783u; esp -= 4; W32(esp, v); }
/* 5043b7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 5043bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5043be: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 5043c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5043c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5043c7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5043c8: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 5043cc: mov esi, ecx */
  esi = ecx;
/* 5043ce: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5043cf: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 5043d3: call 0x4e40f2 */
  esp -= 4; W32(esp, 0x5043d8u); SPILL(); f_4e40f2(); if (g_unwind) return; RELOAD();
/* 5043d8: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 5043db: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5043de: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 5043e1: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* 5043e4: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 5043e7: lea ecx, [edi + 0x1c] */
  ecx = (uint32_t)(edi + 0x1cu);
/* 5043ea: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 5043ed: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 5043f0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5043f1: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* 5043f4: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 5043fc: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 5043ff: call 0x4e3ab2 */
  esp -= 4; W32(esp, 0x504404u); SPILL(); f_4e3ab2(); if (g_unwind) return; RELOAD();
/* 504404: add edi, 0x28 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 504407: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 504408: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 50440b: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* 504410: call 0x4e1663 */
  esp -= 4; W32(esp, 0x504415u); SPILL(); f_4e1663(); if (g_unwind) return; RELOAD();
/* 504415: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 504419: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50441a: mov eax, esi */
  eax = esi;
/* 50441c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50441d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 504424: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 504427: ret 4 */
  esp += 8; SPILL(); return;
}

void f_504450(void) {
  LOAD_REGS();
L_504450: /* 504450: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 504452: push 0x5567d4 */
  { uint32_t v = 0x5567d4u; esp -= 4; W32(esp, v); }
/* 504457: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 50445d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50445e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 504465: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 504466: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 504467: mov esi, ecx */
  esi = ecx;
/* 504469: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 50446d: mov dword ptr [esi], 0x56aa18 */
  W32((uint32_t)(esi), 0x56aa18u);
/* 504473: mov dword ptr [esp + 0x10], 4 */
  W32((uint32_t)(esp + 0x10u), 0x4u);
/* 50447b: call 0x4e2559 */
  esp -= 4; W32(esp, 0x504480u); SPILL(); f_4e2559(); if (g_unwind) return; RELOAD();
/* 504480: lea ecx, [esi + 0x5c] */
  ecx = (uint32_t)(esi + 0x5cu);
/* 504483: mov byte ptr [esp + 0x10], 3 */
  W8((uint32_t)(esp + 0x10u), 0x3u);
/* 504488: call 0x4e32fb */
  esp -= 4; W32(esp, 0x50448du); SPILL(); f_4e32fb(); if (g_unwind) return; RELOAD();
/* 50448d: lea ecx, [esi + 0x48] */
  ecx = (uint32_t)(esi + 0x48u);
/* 504490: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 504495: call 0x4e30d5 */
  esp -= 4; W32(esp, 0x50449au); SPILL(); f_4e30d5(); if (g_unwind) return; RELOAD();
/* 50449a: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* 50449d: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 5044a2: call 0x4e1145 */
  esp -= 4; W32(esp, 0x5044a7u); SPILL(); f_4e1145(); if (g_unwind) return; RELOAD();
/* 5044a7: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 5044aa: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 5044af: call 0x4e183e */
  esp -= 4; W32(esp, 0x5044b4u); SPILL(); f_4e183e(); if (g_unwind) return; RELOAD();
/* 5044b4: mov ecx, esi */
  ecx = esi;
/* 5044b6: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 5044be: call 0x4e2e55 */
  esp -= 4; W32(esp, 0x5044c3u); SPILL(); f_4e2e55(); if (g_unwind) return; RELOAD();
/* 5044c3: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 5044c7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5044c8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5044cf: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5044d2: ret  */
  esp += 4; SPILL(); return;
}

void f_504510(void) {
  LOAD_REGS();
L_504510: /* 504510: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 504512: push 0x55681e */
  { uint32_t v = 0x55681eu; esp -= 4; W32(esp, v); }
/* 504517: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 50451d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50451e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 504525: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 504528: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 504529: mov esi, ecx */
  esi = ecx;
/* 50452b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50452c: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 504530: call 0x4e245a */
  esp -= 4; W32(esp, 0x504535u); SPILL(); f_4e245a(); if (g_unwind) return; RELOAD();
/* 504535: xor edi, edi */
  edi = 0;
/* 504537: mov dword ptr [esi], 0x56aa18 */
  W32((uint32_t)(esi), 0x56aa18u);
/* 50453d: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 504541: mov dword ptr [esi + 0x28], edi */
  W32((uint32_t)(esi + 0x28u), edi);
/* 504544: mov dword ptr [esi + 0x2c], edi */
  W32((uint32_t)(esi + 0x2cu), edi);
/* 504547: mov dword ptr [esi + 0x30], edi */
  W32((uint32_t)(esi + 0x30u), edi);
/* 50454a: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* 50454d: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 504551: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 504553: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 504556: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 504559: mov byte ptr [esp + 0x18], 2 */
  W8((uint32_t)(esp + 0x18u), 0x2u);
/* 50455e: mov dword ptr [ecx + 0xc], edi */
  W32((uint32_t)(ecx + 0xcu), edi);
/* 504561: mov dword ptr [ecx + 0x10], 8 */
  W32((uint32_t)(ecx + 0x10u), 0x8u);
/* 504568: call 0x4e2455 */
  esp -= 4; W32(esp, 0x50456du); SPILL(); f_4e2455(); if (g_unwind) return; RELOAD();
/* 50456d: lea ecx, [esi + 0x48] */
  ecx = (uint32_t)(esi + 0x48u);
/* 504570: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 504574: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 504576: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 504579: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 50457c: mov byte ptr [esp + 0x18], 4 */
  W8((uint32_t)(esp + 0x18u), 0x4u);
/* 504581: mov dword ptr [ecx + 0xc], edi */
  W32((uint32_t)(ecx + 0xcu), edi);
/* 504584: mov dword ptr [ecx + 0x10], 8 */
  W32((uint32_t)(ecx + 0x10u), 0x8u);
/* 50458b: call 0x4e3053 */
  esp -= 4; W32(esp, 0x504590u); SPILL(); f_4e3053(); if (g_unwind) return; RELOAD();
/* 504590: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 504594: mov dword ptr [esi + 0x5c], edi */
  W32((uint32_t)(esi + 0x5cu), edi);
/* 504597: mov dword ptr [esi + 0x60], edi */
  W32((uint32_t)(esi + 0x60u), edi);
/* 50459a: mov dword ptr [esi + 0x64], edi */
  W32((uint32_t)(esi + 0x64u), edi);
/* 50459d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50459e: mov eax, esi */
  eax = esi;
/* 5045a0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5045a1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5045a8: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5045ab: ret  */
  esp += 4; SPILL(); return;
}

void f_5045e0(void) {
  LOAD_REGS();
L_5045e0: /* 5045e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5045e2: push 0x556869 */
  { uint32_t v = 0x556869u; esp -= 4; W32(esp, v); }
/* 5045e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 5045ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5045ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 5045f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5045f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5045f7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5045f8: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 5045fc: mov esi, ecx */
  esi = ecx;
/* 5045fe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5045ff: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 504603: call 0x4e1078 */
  esp -= 4; W32(esp, 0x504608u); SPILL(); f_4e1078(); if (g_unwind) return; RELOAD();
/* 504608: lea eax, [edi + 0x28] */
  eax = (uint32_t)(edi + 0x28u);
/* 50460b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50460c: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 50460f: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 504617: mov dword ptr [esi], 0x56aa18 */
  W32((uint32_t)(esi), 0x56aa18u);
/* 50461d: call 0x4e15d7 */
  esp -= 4; W32(esp, 0x504622u); SPILL(); f_4e15d7(); if (g_unwind) return; RELOAD();
/* 504622: lea edx, [edi + 0x34] */
  edx = (uint32_t)(edi + 0x34u);
/* 504625: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* 504628: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 504629: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* 50462e: call 0x4e271b */
  esp -= 4; W32(esp, 0x504633u); SPILL(); f_4e271b(); if (g_unwind) return; RELOAD();
/* 504633: lea eax, [edi + 0x48] */
  eax = (uint32_t)(edi + 0x48u);
/* 504636: lea ecx, [esi + 0x48] */
  ecx = (uint32_t)(esi + 0x48u);
/* 504639: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50463a: mov byte ptr [esp + 0x18], 2 */
  W8((uint32_t)(esp + 0x18u), 0x2u);
/* 50463f: call 0x4e3378 */
  esp -= 4; W32(esp, 0x504644u); SPILL(); f_4e3378(); if (g_unwind) return; RELOAD();
/* 504644: lea ecx, [edi + 0x5c] */
  ecx = (uint32_t)(edi + 0x5cu);
/* 504647: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 504648: lea ecx, [esi + 0x5c] */
  ecx = (uint32_t)(esi + 0x5cu);
/* 50464b: mov byte ptr [esp + 0x18], 3 */
  W8((uint32_t)(esp + 0x18u), 0x3u);
/* 504650: call 0x4e20fe */
  esp -= 4; W32(esp, 0x504655u); SPILL(); f_4e20fe(); if (g_unwind) return; RELOAD();
/* 504655: mov edx, dword ptr [edi + 0x68] */
  edx = R32((uint32_t)(edi + 0x68u));
/* 504658: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 50465c: mov dword ptr [esi + 0x68], edx */
  W32((uint32_t)(esi + 0x68u), edx);
/* 50465f: mov eax, dword ptr [edi + 0x6c] */
  eax = R32((uint32_t)(edi + 0x6cu));
/* 504662: mov dword ptr [esi + 0x6c], eax */
  W32((uint32_t)(esi + 0x6cu), eax);
/* 504665: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 504666: mov eax, esi */
  eax = esi;
/* 504668: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 504669: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 504670: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 504673: ret 4 */
  esp += 8; SPILL(); return;
}

void f_5046b0(void) {
  LOAD_REGS();
L_5046b0: /* 5046b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5046b1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 5046b2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5046b3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5046b4: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 5046b8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5046b9: mov esi, ecx */
  esi = ecx;
/* 5046bb: call 0x4e1c67 */
  esp -= 4; W32(esp, 0x5046c0u); SPILL(); f_4e1c67(); if (g_unwind) return; RELOAD();
/* 5046c0: lea eax, [edi + 0x28] */
  eax = (uint32_t)(edi + 0x28u);
/* 5046c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5046c4: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 5046c7: call 0x4e3fc6 */
  esp -= 4; W32(esp, 0x5046ccu); SPILL(); f_4e3fc6(); if (g_unwind) return; RELOAD();
/* 5046cc: lea ebp, [edi + 0x34] */
  ebp = (uint32_t)(edi + 0x34u);
/* 5046cf: lea ebx, [esi + 0x34] */
  ebx = (uint32_t)(esi + 0x34u);
/* 5046d2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 5046d3: mov ecx, ebx */
  ecx = ebx;
/* 5046d5: call 0x4e28d8 */
  esp -= 4; W32(esp, 0x5046dau); SPILL(); f_4e28d8(); if (g_unwind) return; RELOAD();
/* 5046da: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 5046dd: mov dword ptr [ebx + 0x10], ecx */
  W32((uint32_t)(ebx + 0x10u), ecx);
/* 5046e0: mov ecx, ebx */
  ecx = ebx;
/* 5046e2: call 0x4e2455 */
  esp -= 4; W32(esp, 0x5046e7u); SPILL(); f_4e2455(); if (g_unwind) return; RELOAD();
/* 5046e7: lea ebp, [edi + 0x48] */
  ebp = (uint32_t)(edi + 0x48u);
/* 5046ea: lea ebx, [esi + 0x48] */
  ebx = (uint32_t)(esi + 0x48u);
/* 5046ed: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 5046ee: mov ecx, ebx */
  ecx = ebx;
/* 5046f0: call 0x4e394a */
  esp -= 4; W32(esp, 0x5046f5u); SPILL(); f_4e394a(); if (g_unwind) return; RELOAD();
/* 5046f5: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 5046f8: mov ecx, ebx */
  ecx = ebx;
/* 5046fa: mov dword ptr [ebx + 0x10], edx */
  W32((uint32_t)(ebx + 0x10u), edx);
/* 5046fd: call 0x4e3053 */
  esp -= 4; W32(esp, 0x504702u); SPILL(); f_4e3053(); if (g_unwind) return; RELOAD();
/* 504702: lea eax, [edi + 0x5c] */
  eax = (uint32_t)(edi + 0x5cu);
/* 504705: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 504706: lea ecx, [esi + 0x5c] */
  ecx = (uint32_t)(esi + 0x5cu);
/* 504709: call 0x4e2158 */
  esp -= 4; W32(esp, 0x50470eu); SPILL(); f_4e2158(); if (g_unwind) return; RELOAD();
/* 50470e: mov ecx, dword ptr [edi + 0x68] */
  ecx = R32((uint32_t)(edi + 0x68u));
/* 504711: mov dword ptr [esi + 0x68], ecx */
  W32((uint32_t)(esi + 0x68u), ecx);
/* 504714: mov edx, dword ptr [edi + 0x6c] */
  edx = R32((uint32_t)(edi + 0x6cu));
/* 504717: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 504718: mov dword ptr [esi + 0x6c], edx */
  W32((uint32_t)(esi + 0x6cu), edx);
/* 50471b: mov eax, esi */
  eax = esi;
/* 50471d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50471e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50471f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 504720: ret 4 */
  esp += 8; SPILL(); return;
}

void f_504750(void) {
  LOAD_REGS();
L_504750: /* 504750: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 504751: mov esi, ecx */
  esi = ecx;
/* 504753: call 0x4e3dff */
  esp -= 4; W32(esp, 0x504758u); SPILL(); f_4e3dff(); if (g_unwind) return; RELOAD();
/* 504758: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 50475d: je 0x50476a */
  if (zf) goto L_50476a;
L_50475f: /* 50475f: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 504761: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 504762: call 0x4e3fb2 */
  esp -= 4; W32(esp, 0x504767u); SPILL(); f_4e3fb2(); if (g_unwind) return; RELOAD();
/* 504767: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50476a: /* 50476a: mov eax, esi */
  eax = esi;
/* 50476c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50476d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_504780(void) {
  LOAD_REGS();
L_504780: /* 504780: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 504781: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 504785: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 504788: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 504789: mov esi, ecx */
  esi = ecx;
/* 50478b: je 0x5047bb */
  if (zf) goto L_5047bb;
L_50478d: /* 50478d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 504790: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 504791: push 0x4e3dff */
  { uint32_t v = 0x4e3dffu; esp -= 4; W32(esp, v); }
/* 504796: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 504799: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50479a: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 50479c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50479d: call 0x554e72 */
  esp -= 4; W32(esp, 0x5047a2u); SPILL(); f_554e72(); if (g_unwind) return; RELOAD();
/* 5047a2: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 5047a5: je 0x5047b3 */
  if (zf) goto L_5047b3;
L_5047a7: /* 5047a7: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 5047ad: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5047af: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5047b0: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x5047b3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_5047b3: /* 5047b3: mov eax, edi */
  eax = edi;
/* 5047b5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5047b6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5047b7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5047b8: ret 4 */
  esp += 8; SPILL(); return;
L_5047bb: /* 5047bb: mov ecx, esi */
  ecx = esi;
/* 5047bd: call 0x4e3dff */
  esp -= 4; W32(esp, 0x5047c2u); SPILL(); f_4e3dff(); if (g_unwind) return; RELOAD();
/* 5047c2: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 5047c5: je 0x5047d2 */
  if (zf) goto L_5047d2;
L_5047c7: /* 5047c7: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 5047c9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5047ca: call 0x4e3fb2 */
  esp -= 4; W32(esp, 0x5047cfu); SPILL(); f_4e3fb2(); if (g_unwind) return; RELOAD();
/* 5047cf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5047d2: /* 5047d2: mov eax, esi */
  eax = esi;
/* 5047d4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5047d5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5047d6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_504800(void) {
  LOAD_REGS();
L_504800: /* 504800: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 504802: push 0x5568bf */
  { uint32_t v = 0x5568bfu; esp -= 4; W32(esp, v); }
/* 504807: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 50480d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50480e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 504815: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 504816: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 504817: mov esi, ecx */
  esi = ecx;
/* 504819: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 50481d: mov dword ptr [esi], 0x56aac8 */
  W32((uint32_t)(esi), 0x56aac8u);
/* 504823: mov dword ptr [esi + 0x28], 0x56aac4 */
  W32((uint32_t)(esi + 0x28u), 0x56aac4u);
/* 50482a: mov dword ptr [esp + 0x10], 5 */
  W32((uint32_t)(esp + 0x10u), 0x5u);
/* 504832: call 0x4e2559 */
  esp -= 4; W32(esp, 0x504837u); SPILL(); f_4e2559(); if (g_unwind) return; RELOAD();
/* 504837: lea ecx, [esi + 0x60] */
  ecx = (uint32_t)(esi + 0x60u);
/* 50483a: mov byte ptr [esp + 0x10], 4 */
  W8((uint32_t)(esp + 0x10u), 0x4u);
/* 50483f: call 0x4e2892 */
  esp -= 4; W32(esp, 0x504844u); SPILL(); f_4e2892(); if (g_unwind) return; RELOAD();
/* 504844: lea ecx, [esi + 0x54] */
  ecx = (uint32_t)(esi + 0x54u);
/* 504847: mov byte ptr [esp + 0x10], 3 */
  W8((uint32_t)(esp + 0x10u), 0x3u);
/* 50484c: call 0x4e262b */
  esp -= 4; W32(esp, 0x504851u); SPILL(); f_4e262b(); if (g_unwind) return; RELOAD();
/* 504851: lea ecx, [esi + 0x48] */
  ecx = (uint32_t)(esi + 0x48u);
/* 504854: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 504859: call 0x4e1217 */
  esp -= 4; W32(esp, 0x50485eu); SPILL(); f_4e1217(); if (g_unwind) return; RELOAD();
/* 50485e: lea ecx, [esi + 0x3c] */
  ecx = (uint32_t)(esi + 0x3cu);
/* 504861: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 504866: call 0x4e1217 */
  esp -= 4; W32(esp, 0x50486bu); SPILL(); f_4e1217(); if (g_unwind) return; RELOAD();
/* 50486b: lea ecx, [esi + 0x30] */
  ecx = (uint32_t)(esi + 0x30u);
/* 50486e: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 504873: call 0x4e1217 */
  esp -= 4; W32(esp, 0x504878u); SPILL(); f_4e1217(); if (g_unwind) return; RELOAD();
/* 504878: mov ecx, esi */
  ecx = esi;
/* 50487a: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 504882: call 0x4e152d */
  esp -= 4; W32(esp, 0x504887u); SPILL(); f_4e152d(); if (g_unwind) return; RELOAD();
/* 504887: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 50488b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50488c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 504893: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 504896: ret  */
  esp += 4; SPILL(); return;
}

void f_5048d0(void) {
  LOAD_REGS();
L_5048d0: /* 5048d0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5048d2: push 0x556914 */
  { uint32_t v = 0x556914u; esp -= 4; W32(esp, v); }
/* 5048d7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 5048dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5048de: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 5048e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5048e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5048e7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5048e8: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 5048ec: mov esi, ecx */
  esi = ecx;
/* 5048ee: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5048ef: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 5048f3: call 0x4e1078 */
  esp -= 4; W32(esp, 0x5048f8u); SPILL(); f_4e1078(); if (g_unwind) return; RELOAD();
/* 5048f8: mov dword ptr [esi + 0x28], 0x569060 */
  W32((uint32_t)(esi + 0x28u), 0x569060u);
/* 5048ff: lea ecx, [edi + 0x30] */
  ecx = (uint32_t)(edi + 0x30u);
/* 504902: mov dword ptr [esi], 0x56aac8 */
  W32((uint32_t)(esi), 0x56aac8u);
/* 504908: mov dword ptr [esi + 0x28], 0x56aac4 */
  W32((uint32_t)(esi + 0x28u), 0x56aac4u);
/* 50490f: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 504912: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 504913: lea ecx, [esi + 0x30] */
  ecx = (uint32_t)(esi + 0x30u);
/* 504916: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 50491e: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* 504921: call 0x4e3fc1 */
  esp -= 4; W32(esp, 0x504926u); SPILL(); f_4e3fc1(); if (g_unwind) return; RELOAD();
/* 504926: lea edx, [edi + 0x3c] */
  edx = (uint32_t)(edi + 0x3cu);
/* 504929: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50492a: lea ecx, [esi + 0x3c] */
  ecx = (uint32_t)(esi + 0x3cu);
/* 50492d: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* 504932: call 0x4e3fc1 */
  esp -= 4; W32(esp, 0x504937u); SPILL(); f_4e3fc1(); if (g_unwind) return; RELOAD();
/* 504937: lea eax, [edi + 0x48] */
  eax = (uint32_t)(edi + 0x48u);
/* 50493a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50493b: lea ecx, [esi + 0x48] */
  ecx = (uint32_t)(esi + 0x48u);
/* 50493e: mov byte ptr [esp + 0x18], 2 */
  W8((uint32_t)(esp + 0x18u), 0x2u);
/* 504943: call 0x4e3fc1 */
  esp -= 4; W32(esp, 0x504948u); SPILL(); f_4e3fc1(); if (g_unwind) return; RELOAD();
/* 504948: lea ecx, [edi + 0x54] */
  ecx = (uint32_t)(edi + 0x54u);
/* 50494b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50494c: lea ecx, [esi + 0x54] */
  ecx = (uint32_t)(esi + 0x54u);
/* 50494f: mov byte ptr [esp + 0x18], 3 */
  W8((uint32_t)(esp + 0x18u), 0x3u);
/* 504954: call 0x4e1294 */
  esp -= 4; W32(esp, 0x504959u); SPILL(); f_4e1294(); if (g_unwind) return; RELOAD();
/* 504959: add edi, 0x60 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 50495c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50495d: lea ecx, [esi + 0x60] */
  ecx = (uint32_t)(esi + 0x60u);
/* 504960: mov byte ptr [esp + 0x18], 4 */
  W8((uint32_t)(esp + 0x18u), 0x4u);
/* 504965: call 0x4e3c3d */
  esp -= 4; W32(esp, 0x50496au); SPILL(); f_4e3c3d(); if (g_unwind) return; RELOAD();
/* 50496a: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 50496e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50496f: mov eax, esi */
  eax = esi;
/* 504971: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 504972: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 504979: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50497c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_5049b0(void) {
  LOAD_REGS();
L_5049b0: /* 5049b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5049b1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 5049b2: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 5049b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5049b7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5049b8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 5049b9: mov ebx, ecx */
  ebx = ecx;
/* 5049bb: call 0x4e1c67 */
  esp -= 4; W32(esp, 0x5049c0u); SPILL(); f_4e1c67(); if (g_unwind) return; RELOAD();
/* 5049c0: mov eax, dword ptr [ebp + 0x2c] */
  eax = R32((uint32_t)(ebp + 0x2cu));
/* 5049c3: lea edi, [ebp + 0x30] */
  edi = (uint32_t)(ebp + 0x30u);
/* 5049c6: lea esi, [ebx + 0x30] */
  esi = (uint32_t)(ebx + 0x30u);
/* 5049c9: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5049cb: mov dword ptr [ebx + 0x2c], eax */
  W32((uint32_t)(ebx + 0x2cu), eax);
/* 5049ce: je 0x504a09 */
  if (zf) goto L_504a09;
L_5049d0: /* 5049d0: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 5049d3: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 5049d5: mov ecx, esi */
  ecx = esi;
/* 5049d7: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 5049da: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 5049dd: call 0x4e4502 */
  esp -= 4; W32(esp, 0x5049e2u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 5049e2: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 5049e5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5049e7: je 0x504a09 */
  if (zf) goto L_504a09;
L_5049e9: /* 5049e9: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 5049ec: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5049ee: je 0x5049f4 */
  if (zf) goto L_5049f4;
L_5049f0: /* 5049f0: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* 5049f2: jmp 0x5049f9 */
  goto L_5049f9;
L_5049f4: /* 5049f4: mov edi, 0x5ed66c */
  edi = 0x5ed66cu;
L_5049f9: /* 5049f9: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 5049fb: lea ecx, [eax + eax] */
  ecx = (uint32_t)(eax + eax);
/* 5049fe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5049ff: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 504a00: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 504a01: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x504a06u); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 504a06: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_504a09: /* 504a09: lea edi, [ebp + 0x3c] */
  edi = (uint32_t)(ebp + 0x3cu);
/* 504a0c: lea esi, [ebx + 0x3c] */
  esi = (uint32_t)(ebx + 0x3cu);
/* 504a0f: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 504a11: je 0x504a4b */
  if (zf) goto L_504a4b;
L_504a13: /* 504a13: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 504a16: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 504a18: mov ecx, esi */
  ecx = esi;
/* 504a1a: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 504a1d: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 504a20: call 0x4e4502 */
  esp -= 4; W32(esp, 0x504a25u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 504a25: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 504a28: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 504a2a: je 0x504a4b */
  if (zf) goto L_504a4b;
L_504a2c: /* 504a2c: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 504a2f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 504a31: je 0x504a37 */
  if (zf) goto L_504a37;
L_504a33: /* 504a33: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* 504a35: jmp 0x504a3c */
  goto L_504a3c;
L_504a37: /* 504a37: mov edi, 0x5ed66c */
  edi = 0x5ed66cu;
L_504a3c: /* 504a3c: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 504a3e: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 504a40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 504a41: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 504a42: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 504a43: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x504a48u); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 504a48: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_504a4b: /* 504a4b: lea edi, [ebp + 0x48] */
  edi = (uint32_t)(ebp + 0x48u);
/* 504a4e: lea esi, [ebx + 0x48] */
  esi = (uint32_t)(ebx + 0x48u);
/* 504a51: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 504a53: je 0x504a8e */
  if (zf) goto L_504a8e;
L_504a55: /* 504a55: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 504a58: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 504a5a: mov ecx, esi */
  ecx = esi;
/* 504a5c: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 504a5f: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 504a62: call 0x4e4502 */
  esp -= 4; W32(esp, 0x504a67u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 504a67: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 504a6a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 504a6c: je 0x504a8e */
  if (zf) goto L_504a8e;
L_504a6e: /* 504a6e: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 504a71: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 504a73: je 0x504a79 */
  if (zf) goto L_504a79;
L_504a75: /* 504a75: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* 504a77: jmp 0x504a7e */
  goto L_504a7e;
L_504a79: /* 504a79: mov edi, 0x5ed66c */
  edi = 0x5ed66cu;
L_504a7e: /* 504a7e: lea edx, [eax + eax] */
  edx = (uint32_t)(eax + eax);
/* 504a81: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 504a83: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 504a84: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 504a85: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 504a86: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x504a8bu); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 504a8b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_504a8e: /* 504a8e: lea ecx, [ebp + 0x54] */
  ecx = (uint32_t)(ebp + 0x54u);
/* 504a91: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 504a92: lea ecx, [ebx + 0x54] */
  ecx = (uint32_t)(ebx + 0x54u);
/* 504a95: call 0x4e1672 */
  esp -= 4; W32(esp, 0x504a9au); SPILL(); f_4e1672(); if (g_unwind) return; RELOAD();
/* 504a9a: add ebp, 0x60 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 504a9d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 504a9e: lea ecx, [ebx + 0x60] */
  ecx = (uint32_t)(ebx + 0x60u);
/* 504aa1: call 0x4e3062 */
  esp -= 4; W32(esp, 0x504aa6u); SPILL(); f_4e3062(); if (g_unwind) return; RELOAD();
/* 504aa6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 504aa7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 504aa8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 504aa9: mov eax, ebx */
  eax = ebx;
/* 504aab: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 504aac: ret 4 */
  esp += 8; SPILL(); return;
}

void f_504af0(void) {
  LOAD_REGS();
L_504af0: /* 504af0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 504af1: mov esi, ecx */
  esi = ecx;
/* 504af3: call 0x4e309e */
  esp -= 4; W32(esp, 0x504af8u); SPILL(); f_4e309e(); if (g_unwind) return; RELOAD();
/* 504af8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 504afd: je 0x504b0a */
  if (zf) goto L_504b0a;
L_504aff: /* 504aff: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 504b01: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 504b02: call 0x4e3fb2 */
  esp -= 4; W32(esp, 0x504b07u); SPILL(); f_4e3fb2(); if (g_unwind) return; RELOAD();
/* 504b07: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_504b0a: /* 504b0a: mov eax, esi */
  eax = esi;
/* 504b0c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 504b0d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_504b20(void) {
  LOAD_REGS();
L_504b20: /* 504b20: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 504b21: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 504b25: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 504b28: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 504b29: mov esi, ecx */
  esi = ecx;
/* 504b2b: je 0x504b5b */
  if (zf) goto L_504b5b;
L_504b2d: /* 504b2d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 504b30: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 504b31: push 0x4e309e */
  { uint32_t v = 0x4e309eu; esp -= 4; W32(esp, v); }
/* 504b36: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 504b39: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 504b3a: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 504b3c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 504b3d: call 0x554e72 */
  esp -= 4; W32(esp, 0x504b42u); SPILL(); f_554e72(); if (g_unwind) return; RELOAD();
/* 504b42: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 504b45: je 0x504b53 */
  if (zf) goto L_504b53;
L_504b47: /* 504b47: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 504b4d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 504b4f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 504b50: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x504b53u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_504b53: /* 504b53: mov eax, edi */
  eax = edi;
/* 504b55: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 504b56: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 504b57: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 504b58: ret 4 */
  esp += 8; SPILL(); return;
L_504b5b: /* 504b5b: mov ecx, esi */
  ecx = esi;
/* 504b5d: call 0x4e309e */
  esp -= 4; W32(esp, 0x504b62u); SPILL(); f_4e309e(); if (g_unwind) return; RELOAD();
/* 504b62: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 504b65: je 0x504b72 */
  if (zf) goto L_504b72;
L_504b67: /* 504b67: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 504b69: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 504b6a: call 0x4e3fb2 */
  esp -= 4; W32(esp, 0x504b6fu); SPILL(); f_4e3fb2(); if (g_unwind) return; RELOAD();
/* 504b6f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_504b72: /* 504b72: mov eax, esi */
  eax = esi;
/* 504b74: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 504b75: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 504b76: ret 4 */
  esp += 8; SPILL(); return;
}

void f_504ba0(void) {
  LOAD_REGS();
L_504ba0: /* 504ba0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 504ba2: push 0x556964 */
  { uint32_t v = 0x556964u; esp -= 4; W32(esp, v); }
/* 504ba7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 504bad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 504bae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 504bb5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 504bb6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 504bb7: mov esi, ecx */
  esi = ecx;
/* 504bb9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 504bbd: mov dword ptr [esi], 0x56ab50 */
  W32((uint32_t)(esi), 0x56ab50u);
/* 504bc3: mov dword ptr [esp + 0x10], 4 */
  W32((uint32_t)(esp + 0x10u), 0x4u);
/* 504bcb: call 0x4e2559 */
  esp -= 4; W32(esp, 0x504bd0u); SPILL(); f_4e2559(); if (g_unwind) return; RELOAD();
/* 504bd0: lea ecx, [esi + 0x54] */
  ecx = (uint32_t)(esi + 0x54u);
/* 504bd3: mov byte ptr [esp + 0x10], 3 */
  W8((uint32_t)(esp + 0x10u), 0x3u);
/* 504bd8: call 0x4e262b */
  esp -= 4; W32(esp, 0x504bddu); SPILL(); f_4e262b(); if (g_unwind) return; RELOAD();
/* 504bdd: lea ecx, [esi + 0x48] */
  ecx = (uint32_t)(esi + 0x48u);
/* 504be0: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 504be5: call 0x4e1217 */
  esp -= 4; W32(esp, 0x504beau); SPILL(); f_4e1217(); if (g_unwind) return; RELOAD();
/* 504bea: lea ecx, [esi + 0x3c] */
  ecx = (uint32_t)(esi + 0x3cu);
/* 504bed: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 504bf2: call 0x4e1217 */
  esp -= 4; W32(esp, 0x504bf7u); SPILL(); f_4e1217(); if (g_unwind) return; RELOAD();
/* 504bf7: lea ecx, [esi + 0x30] */
  ecx = (uint32_t)(esi + 0x30u);
/* 504bfa: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 504bff: call 0x4e1217 */
  esp -= 4; W32(esp, 0x504c04u); SPILL(); f_4e1217(); if (g_unwind) return; RELOAD();
/* 504c04: mov ecx, esi */
  ecx = esi;
/* 504c06: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 504c0e: call 0x4e2e55 */
  esp -= 4; W32(esp, 0x504c13u); SPILL(); f_4e2e55(); if (g_unwind) return; RELOAD();
/* 504c13: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 504c17: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 504c18: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 504c1f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 504c22: ret  */
  esp += 4; SPILL(); return;
}

void f_504c60(void) {
  LOAD_REGS();
L_504c60: /* 504c60: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 504c62: push 0x5569a9 */
  { uint32_t v = 0x5569a9u; esp -= 4; W32(esp, v); }
/* 504c67: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 504c6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 504c6e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 504c75: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 504c76: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 504c77: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 504c78: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 504c7c: mov esi, ecx */
  esi = ecx;
/* 504c7e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 504c7f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 504c83: call 0x4e1078 */
  esp -= 4; W32(esp, 0x504c88u); SPILL(); f_4e1078(); if (g_unwind) return; RELOAD();
/* 504c88: mov dword ptr [esi], 0x56ab50 */
  W32((uint32_t)(esi), 0x56ab50u);
/* 504c8e: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 504c91: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 504c94: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 504c97: lea edx, [edi + 0x30] */
  edx = (uint32_t)(edi + 0x30u);
/* 504c9a: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 504c9d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 504c9e: lea ecx, [esi + 0x30] */
  ecx = (uint32_t)(esi + 0x30u);
/* 504ca1: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 504ca9: call 0x4e3fc1 */
  esp -= 4; W32(esp, 0x504caeu); SPILL(); f_4e3fc1(); if (g_unwind) return; RELOAD();
/* 504cae: lea eax, [edi + 0x3c] */
  eax = (uint32_t)(edi + 0x3cu);
/* 504cb1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 504cb2: lea ecx, [esi + 0x3c] */
  ecx = (uint32_t)(esi + 0x3cu);
/* 504cb5: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* 504cba: call 0x4e3fc1 */
  esp -= 4; W32(esp, 0x504cbfu); SPILL(); f_4e3fc1(); if (g_unwind) return; RELOAD();
/* 504cbf: lea ecx, [edi + 0x48] */
  ecx = (uint32_t)(edi + 0x48u);
/* 504cc2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 504cc3: lea ecx, [esi + 0x48] */
  ecx = (uint32_t)(esi + 0x48u);
/* 504cc6: mov byte ptr [esp + 0x18], 2 */
  W8((uint32_t)(esp + 0x18u), 0x2u);
/* 504ccb: call 0x4e3fc1 */
  esp -= 4; W32(esp, 0x504cd0u); SPILL(); f_4e3fc1(); if (g_unwind) return; RELOAD();
/* 504cd0: lea edx, [edi + 0x54] */
  edx = (uint32_t)(edi + 0x54u);
/* 504cd3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 504cd4: lea ecx, [esi + 0x54] */
  ecx = (uint32_t)(esi + 0x54u);
/* 504cd7: mov byte ptr [esp + 0x18], 3 */
  W8((uint32_t)(esp + 0x18u), 0x3u);
/* 504cdc: call 0x4e1294 */
  esp -= 4; W32(esp, 0x504ce1u); SPILL(); f_4e1294(); if (g_unwind) return; RELOAD();
/* 504ce1: mov ecx, dword ptr [edi + 0x60] */
  ecx = R32((uint32_t)(edi + 0x60u));
/* 504ce4: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* 504ce7: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 504ce9: mov ecx, dword ptr [esi + 0x60] */
  ecx = R32((uint32_t)(esi + 0x60u));
/* 504cec: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 504cef: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 504cf1: mov dword ptr [esi + 0x60], ecx */
  W32((uint32_t)(esi + 0x60u), ecx);
/* 504cf4: mov eax, dword ptr [edi + 0x60] */
  eax = R32((uint32_t)(edi + 0x60u));
/* 504cf7: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 504cf9: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 504cfc: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 504cfe: mov dword ptr [esi + 0x60], eax */
  W32((uint32_t)(esi + 0x60u), eax);
/* 504d01: mov ecx, dword ptr [edi + 0x60] */
  ecx = R32((uint32_t)(edi + 0x60u));
/* 504d04: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 504d06: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 504d09: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 504d0b: mov dword ptr [esi + 0x60], ecx */
  W32((uint32_t)(esi + 0x60u), ecx);
/* 504d0e: mov eax, dword ptr [edi + 0x60] */
  eax = R32((uint32_t)(edi + 0x60u));
/* 504d11: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 504d13: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 504d16: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 504d18: mov dword ptr [esi + 0x60], eax */
  W32((uint32_t)(esi + 0x60u), eax);
/* 504d1b: mov ecx, dword ptr [edi + 0x60] */
  ecx = R32((uint32_t)(edi + 0x60u));
/* 504d1e: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 504d20: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 504d23: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 504d25: mov dword ptr [esi + 0x60], ecx */
  W32((uint32_t)(esi + 0x60u), ecx);
/* 504d28: mov edx, dword ptr [edi + 0x64] */
  edx = R32((uint32_t)(edi + 0x64u));
/* 504d2b: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 504d2f: mov dword ptr [esi + 0x64], edx */
  W32((uint32_t)(esi + 0x64u), edx);
/* 504d32: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 504d33: mov eax, esi */
  eax = esi;
/* 504d35: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 504d36: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 504d3d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 504d40: ret 4 */
  esp += 8; SPILL(); return;
}

void f_504d90(void) {
  LOAD_REGS();
L_504d90: /* 504d90: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 504d91: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 504d92: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 504d93: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 504d94: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 504d98: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 504d99: mov esi, ecx */
  esi = ecx;
/* 504d9b: call 0x4e1c67 */
  esp -= 4; W32(esp, 0x504da0u); SPILL(); f_4e1c67(); if (g_unwind) return; RELOAD();
/* 504da0: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 504da3: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 504da6: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 504da9: lea ebp, [edi + 0x30] */
  ebp = (uint32_t)(edi + 0x30u);
/* 504dac: lea ebx, [esi + 0x30] */
  ebx = (uint32_t)(esi + 0x30u);
/* 504daf: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 504db1: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 504db4: je 0x504df0 */
  if (zf) goto L_504df0;
L_504db6: /* 504db6: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 504db9: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 504dbb: mov ecx, ebx */
  ecx = ebx;
/* 504dbd: mov dword ptr [ebx + 8], eax */
  W32((uint32_t)(ebx + 0x8u), eax);
/* 504dc0: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 504dc3: call 0x4e4502 */
  esp -= 4; W32(esp, 0x504dc8u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 504dc8: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 504dcb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 504dcd: je 0x504df0 */
  if (zf) goto L_504df0;
L_504dcf: /* 504dcf: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 504dd2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 504dd4: je 0x504ddb */
  if (zf) goto L_504ddb;
L_504dd6: /* 504dd6: mov ebp, dword ptr [ebp] */
  ebp = R32((uint32_t)(ebp));
/* 504dd9: jmp 0x504de0 */
  goto L_504de0;
L_504ddb: /* 504ddb: mov ebp, 0x5ed66c */
  ebp = 0x5ed66cu;
L_504de0: /* 504de0: lea edx, [eax + eax] */
  edx = (uint32_t)(eax + eax);
/* 504de3: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 504de5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 504de6: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 504de7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 504de8: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x504dedu); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 504ded: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_504df0: /* 504df0: lea ebp, [edi + 0x3c] */
  ebp = (uint32_t)(edi + 0x3cu);
/* 504df3: lea ebx, [esi + 0x3c] */
  ebx = (uint32_t)(esi + 0x3cu);
/* 504df6: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 504df8: je 0x504e34 */
  if (zf) goto L_504e34;
L_504dfa: /* 504dfa: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 504dfd: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 504dff: mov ecx, ebx */
  ecx = ebx;
/* 504e01: mov dword ptr [ebx + 8], eax */
  W32((uint32_t)(ebx + 0x8u), eax);
/* 504e04: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 504e07: call 0x4e4502 */
  esp -= 4; W32(esp, 0x504e0cu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 504e0c: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 504e0f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 504e11: je 0x504e34 */
  if (zf) goto L_504e34;
L_504e13: /* 504e13: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 504e16: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 504e18: je 0x504e1f */
  if (zf) goto L_504e1f;
L_504e1a: /* 504e1a: mov ebp, dword ptr [ebp] */
  ebp = R32((uint32_t)(ebp));
/* 504e1d: jmp 0x504e24 */
  goto L_504e24;
L_504e1f: /* 504e1f: mov ebp, 0x5ed66c */
  ebp = 0x5ed66cu;
L_504e24: /* 504e24: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 504e26: lea ecx, [eax + eax] */
  ecx = (uint32_t)(eax + eax);
/* 504e29: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 504e2a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 504e2b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 504e2c: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x504e31u); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 504e31: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_504e34: /* 504e34: lea ebp, [edi + 0x48] */
  ebp = (uint32_t)(edi + 0x48u);
/* 504e37: lea ebx, [esi + 0x48] */
  ebx = (uint32_t)(esi + 0x48u);
/* 504e3a: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 504e3c: je 0x504e77 */
  if (zf) goto L_504e77;
L_504e3e: /* 504e3e: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 504e41: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 504e43: mov ecx, ebx */
  ecx = ebx;
/* 504e45: mov dword ptr [ebx + 8], eax */
  W32((uint32_t)(ebx + 0x8u), eax);
/* 504e48: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 504e4b: call 0x4e4502 */
  esp -= 4; W32(esp, 0x504e50u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 504e50: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 504e53: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 504e55: je 0x504e77 */
  if (zf) goto L_504e77;
L_504e57: /* 504e57: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 504e5a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 504e5c: je 0x504e63 */
  if (zf) goto L_504e63;
L_504e5e: /* 504e5e: mov ebp, dword ptr [ebp] */
  ebp = R32((uint32_t)(ebp));
/* 504e61: jmp 0x504e68 */
  goto L_504e68;
L_504e63: /* 504e63: mov ebp, 0x5ed66c */
  ebp = 0x5ed66cu;
L_504e68: /* 504e68: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 504e6a: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 504e6c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 504e6d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 504e6e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 504e6f: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x504e74u); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 504e74: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_504e77: /* 504e77: lea edx, [edi + 0x54] */
  edx = (uint32_t)(edi + 0x54u);
/* 504e7a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 504e7b: lea ecx, [esi + 0x54] */
  ecx = (uint32_t)(esi + 0x54u);
/* 504e7e: call 0x4e1672 */
  esp -= 4; W32(esp, 0x504e83u); SPILL(); f_4e1672(); if (g_unwind) return; RELOAD();
/* 504e83: mov ebx, dword ptr [edi + 0x60] */
  ebx = R32((uint32_t)(edi + 0x60u));
/* 504e86: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* 504e89: mov ecx, dword ptr [esi + 0x60] */
  ecx = R32((uint32_t)(esi + 0x60u));
/* 504e8c: xor eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 504e8e: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 504e91: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 504e93: mov dword ptr [esi + 0x60], ecx */
  W32((uint32_t)(esi + 0x60u), ecx);
/* 504e96: mov eax, dword ptr [edi + 0x60] */
  eax = R32((uint32_t)(edi + 0x60u));
/* 504e99: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 504e9b: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 504e9e: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 504ea0: mov dword ptr [esi + 0x60], eax */
  W32((uint32_t)(esi + 0x60u), eax);
/* 504ea3: mov ecx, dword ptr [edi + 0x60] */
  ecx = R32((uint32_t)(edi + 0x60u));
/* 504ea6: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 504ea8: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 504eab: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 504ead: mov dword ptr [esi + 0x60], ecx */
  W32((uint32_t)(esi + 0x60u), ecx);
/* 504eb0: mov eax, dword ptr [edi + 0x60] */
  eax = R32((uint32_t)(edi + 0x60u));
/* 504eb3: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 504eb5: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 504eb8: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 504eba: mov dword ptr [esi + 0x60], eax */
  W32((uint32_t)(esi + 0x60u), eax);
/* 504ebd: mov ecx, dword ptr [edi + 0x60] */
  ecx = R32((uint32_t)(edi + 0x60u));
/* 504ec0: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 504ec2: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 504ec5: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 504ec7: mov dword ptr [esi + 0x60], ecx */
  W32((uint32_t)(esi + 0x60u), ecx);
/* 504eca: mov edx, dword ptr [edi + 0x64] */
  edx = R32((uint32_t)(edi + 0x64u));
/* 504ecd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 504ece: mov dword ptr [esi + 0x64], edx */
  W32((uint32_t)(esi + 0x64u), edx);
/* 504ed1: mov eax, esi */
  eax = esi;
/* 504ed3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 504ed4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 504ed5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 504ed6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_504f40(void) {
  LOAD_REGS();
L_504f40: /* 504f40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 504f41: mov esi, ecx */
  esi = ecx;
/* 504f43: call 0x4e28f1 */
  esp -= 4; W32(esp, 0x504f48u); SPILL(); f_4e28f1(); if (g_unwind) return; RELOAD();
/* 504f48: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 504f4d: je 0x504f5a */
  if (zf) goto L_504f5a;
L_504f4f: /* 504f4f: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* 504f51: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 504f52: call 0x4e3fb2 */
  esp -= 4; W32(esp, 0x504f57u); SPILL(); f_4e3fb2(); if (g_unwind) return; RELOAD();
/* 504f57: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_504f5a: /* 504f5a: mov eax, esi */
  eax = esi;
/* 504f5c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 504f5d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_504f70(void) {
  LOAD_REGS();
L_504f70: /* 504f70: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 504f71: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 504f75: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 504f78: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 504f79: mov esi, ecx */
  esi = ecx;
/* 504f7b: je 0x504fab */
  if (zf) goto L_504fab;
L_504f7d: /* 504f7d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 504f80: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 504f81: push 0x4e28f1 */
  { uint32_t v = 0x4e28f1u; esp -= 4; W32(esp, v); }
/* 504f86: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 504f89: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 504f8a: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* 504f8c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 504f8d: call 0x554e72 */
  esp -= 4; W32(esp, 0x504f92u); SPILL(); f_554e72(); if (g_unwind) return; RELOAD();
/* 504f92: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 504f95: je 0x504fa3 */
  if (zf) goto L_504fa3;
L_504f97: /* 504f97: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 504f9d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 504f9f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 504fa0: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x504fa3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_504fa3: /* 504fa3: mov eax, edi */
  eax = edi;
/* 504fa5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 504fa6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 504fa7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 504fa8: ret 4 */
  esp += 8; SPILL(); return;
L_504fab: /* 504fab: mov ecx, esi */
  ecx = esi;
/* 504fad: call 0x4e28f1 */
  esp -= 4; W32(esp, 0x504fb2u); SPILL(); f_4e28f1(); if (g_unwind) return; RELOAD();
/* 504fb2: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 504fb5: je 0x504fc2 */
  if (zf) goto L_504fc2;
L_504fb7: /* 504fb7: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* 504fb9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 504fba: call 0x4e3fb2 */
  esp -= 4; W32(esp, 0x504fbfu); SPILL(); f_4e3fb2(); if (g_unwind) return; RELOAD();
/* 504fbf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_504fc2: /* 504fc2: mov eax, esi */
  eax = esi;
/* 504fc4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 504fc5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 504fc6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_504ff0(void) {
  LOAD_REGS();
L_504ff0: /* 504ff0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 504ff2: push 0x5569d3 */
  { uint32_t v = 0x5569d3u; esp -= 4; W32(esp, v); }
/* 504ff7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 504ffd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 504ffe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 505005: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 505006: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 505007: mov esi, ecx */
  esi = ecx;
/* 505009: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 50500d: mov dword ptr [esi], 0x56abe0 */
  W32((uint32_t)(esi), 0x56abe0u);
/* 505013: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 50501b: call 0x4e2559 */
  esp -= 4; W32(esp, 0x505020u); SPILL(); f_4e2559(); if (g_unwind) return; RELOAD();
/* 505020: lea ecx, [esi + 0x2c] */
  ecx = (uint32_t)(esi + 0x2cu);
/* 505023: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 505028: call 0x4e262b */
  esp -= 4; W32(esp, 0x50502du); SPILL(); f_4e262b(); if (g_unwind) return; RELOAD();
/* 50502d: mov ecx, esi */
  ecx = esi;
/* 50502f: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 505037: call 0x4e2e55 */
  esp -= 4; W32(esp, 0x50503cu); SPILL(); f_4e2e55(); if (g_unwind) return; RELOAD();
/* 50503c: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 505040: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 505041: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 505048: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50504b: ret  */
  esp += 4; SPILL(); return;
}

void f_505070(void) {
  LOAD_REGS();
L_505070: /* 505070: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 505072: push 0x5569f8 */
  { uint32_t v = 0x5569f8u; esp -= 4; W32(esp, v); }
/* 505077: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 50507d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50507e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 505085: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 505086: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 505087: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 505088: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 50508c: mov esi, ecx */
  esi = ecx;
/* 50508e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50508f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 505093: call 0x4e1078 */
  esp -= 4; W32(esp, 0x505098u); SPILL(); f_4e1078(); if (g_unwind) return; RELOAD();
/* 505098: lea ecx, [edi + 0x2c] */
  ecx = (uint32_t)(edi + 0x2cu);
/* 50509b: mov dword ptr [esi], 0x56abe0 */
  W32((uint32_t)(esi), 0x56abe0u);
/* 5050a1: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 5050a4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5050a5: lea ecx, [esi + 0x2c] */
  ecx = (uint32_t)(esi + 0x2cu);
/* 5050a8: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 5050b0: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 5050b3: call 0x4e1294 */
  esp -= 4; W32(esp, 0x5050b8u); SPILL(); f_4e1294(); if (g_unwind) return; RELOAD();
/* 5050b8: mov edx, dword ptr [edi + 0x38] */
  edx = R32((uint32_t)(edi + 0x38u));
/* 5050bb: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 5050be: mov dword ptr [esi + 0x38], edx */
  W32((uint32_t)(esi + 0x38u), edx);
/* 5050c1: xor eax, dword ptr [edi + 0x3c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x3cu)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 5050c4: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 5050c7: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 5050ca: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 5050cc: mov dword ptr [esi + 0x3c], ecx */
  W32((uint32_t)(esi + 0x3cu), ecx);
/* 5050cf: mov eax, ecx */
  eax = ecx;
/* 5050d1: mov ecx, dword ptr [edi + 0x3c] */
  ecx = R32((uint32_t)(edi + 0x3cu));
/* 5050d4: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 5050d6: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 5050d9: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 5050db: mov dword ptr [esi + 0x3c], ecx */
  W32((uint32_t)(esi + 0x3cu), ecx);
/* 5050de: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 5050e2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5050e3: mov eax, esi */
  eax = esi;
/* 5050e5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5050e6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5050ed: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5050f0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_505130(void) {
  LOAD_REGS();
L_505130: /* 505130: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 505131: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 505132: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 505136: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 505137: mov esi, ecx */
  esi = ecx;
/* 505139: call 0x4e1c67 */
  esp -= 4; W32(esp, 0x50513eu); SPILL(); f_4e1c67(); if (g_unwind) return; RELOAD();
/* 50513e: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 505141: lea ecx, [edi + 0x2c] */
  ecx = (uint32_t)(edi + 0x2cu);
/* 505144: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 505145: lea ecx, [esi + 0x2c] */
  ecx = (uint32_t)(esi + 0x2cu);
/* 505148: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 50514b: call 0x4e1672 */
  esp -= 4; W32(esp, 0x505150u); SPILL(); f_4e1672(); if (g_unwind) return; RELOAD();
/* 505150: mov edx, dword ptr [edi + 0x38] */
  edx = R32((uint32_t)(edi + 0x38u));
/* 505153: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 505156: mov dword ptr [esi + 0x38], edx */
  W32((uint32_t)(esi + 0x38u), edx);
/* 505159: xor eax, dword ptr [edi + 0x3c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x3cu)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 50515c: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 50515f: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 505162: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 505164: mov dword ptr [esi + 0x3c], ecx */
  W32((uint32_t)(esi + 0x3cu), ecx);
/* 505167: mov eax, ecx */
  eax = ecx;
/* 505169: mov ecx, dword ptr [edi + 0x3c] */
  ecx = R32((uint32_t)(edi + 0x3cu));
/* 50516c: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 50516e: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 505171: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 505173: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 505174: mov dword ptr [esi + 0x3c], ecx */
  W32((uint32_t)(esi + 0x3cu), ecx);
/* 505177: mov eax, esi */
  eax = esi;
/* 505179: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50517a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_5051a0(void) {
  LOAD_REGS();
L_5051a0: /* 5051a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5051a1: mov esi, ecx */
  esi = ecx;
/* 5051a3: call 0x4e36ac */
  esp -= 4; W32(esp, 0x5051a8u); SPILL(); f_4e36ac(); if (g_unwind) return; RELOAD();
/* 5051a8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 5051ad: je 0x5051ba */
  if (zf) goto L_5051ba;
L_5051af: /* 5051af: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 5051b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5051b2: call 0x4e3fb2 */
  esp -= 4; W32(esp, 0x5051b7u); SPILL(); f_4e3fb2(); if (g_unwind) return; RELOAD();
/* 5051b7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5051ba: /* 5051ba: mov eax, esi */
  eax = esi;
/* 5051bc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5051bd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_5051d0(void) {
  LOAD_REGS();
L_5051d0: /* 5051d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5051d1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 5051d5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 5051d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5051d9: mov esi, ecx */
  esi = ecx;
/* 5051db: je 0x50520b */
  if (zf) goto L_50520b;
L_5051dd: /* 5051dd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 5051e0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5051e1: push 0x4e36ac */
  { uint32_t v = 0x4e36acu; esp -= 4; W32(esp, v); }
/* 5051e6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 5051e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5051ea: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 5051ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5051ed: call 0x554e72 */
  esp -= 4; W32(esp, 0x5051f2u); SPILL(); f_554e72(); if (g_unwind) return; RELOAD();
/* 5051f2: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 5051f5: je 0x505203 */
  if (zf) goto L_505203;
L_5051f7: /* 5051f7: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 5051fd: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5051ff: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 505200: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x505203u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_505203: /* 505203: mov eax, edi */
  eax = edi;
/* 505205: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 505206: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 505207: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 505208: ret 4 */
  esp += 8; SPILL(); return;
L_50520b: /* 50520b: mov ecx, esi */
  ecx = esi;
/* 50520d: call 0x4e36ac */
  esp -= 4; W32(esp, 0x505212u); SPILL(); f_4e36ac(); if (g_unwind) return; RELOAD();
/* 505212: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 505215: je 0x505222 */
  if (zf) goto L_505222;
L_505217: /* 505217: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 505219: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50521a: call 0x4e3fb2 */
  esp -= 4; W32(esp, 0x50521fu); SPILL(); f_4e3fb2(); if (g_unwind) return; RELOAD();
/* 50521f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_505222: /* 505222: mov eax, esi */
  eax = esi;
/* 505224: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 505225: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 505226: ret 4 */
  esp += 8; SPILL(); return;
}

void f_505250(void) {
  LOAD_REGS();
L_505250: /* 505250: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 505252: push 0x556a18 */
  { uint32_t v = 0x556a18u; esp -= 4; W32(esp, v); }
/* 505257: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 50525d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50525e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 505265: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 505266: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 505267: mov esi, ecx */
  esi = ecx;
/* 505269: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 50526d: mov dword ptr [esi], 0x56ac68 */
  W32((uint32_t)(esi), 0x56ac68u);
/* 505273: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 50527b: call 0x4e2559 */
  esp -= 4; W32(esp, 0x505280u); SPILL(); f_4e2559(); if (g_unwind) return; RELOAD();
/* 505280: mov ecx, esi */
  ecx = esi;
/* 505282: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 50528a: call 0x4e36ac */
  esp -= 4; W32(esp, 0x50528fu); SPILL(); f_4e36ac(); if (g_unwind) return; RELOAD();
/* 50528f: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 505293: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 505294: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 50529b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50529e: ret  */
  esp += 4; SPILL(); return;
}

void f_5052c0(void) {
  LOAD_REGS();
L_5052c0: /* 5052c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5052c1: mov esi, ecx */
  esi = ecx;
/* 5052c3: call 0x4e281f */
  esp -= 4; W32(esp, 0x5052c8u); SPILL(); f_4e281f(); if (g_unwind) return; RELOAD();
/* 5052c8: mov dword ptr [esi], 0x56ac68 */
  W32((uint32_t)(esi), 0x56ac68u);
/* 5052ce: mov eax, esi */
  eax = esi;
/* 5052d0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5052d1: ret  */
  esp += 4; SPILL(); return;
}

void f_5052f0(void) {
  LOAD_REGS();
L_5052f0: /* 5052f0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 5052f4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5052f5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5052f6: mov esi, ecx */
  esi = ecx;
/* 5052f8: call 0x4e3e4f */
  esp -= 4; W32(esp, 0x5052fdu); SPILL(); f_4e3e4f(); if (g_unwind) return; RELOAD();
/* 5052fd: mov dword ptr [esi], 0x56ac68 */
  W32((uint32_t)(esi), 0x56ac68u);
/* 505303: mov eax, esi */
  eax = esi;
/* 505305: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 505306: ret 4 */
  esp += 8; SPILL(); return;
}

void f_505320(void) {
  LOAD_REGS();
L_505320: /* 505320: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 505321: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 505322: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 505326: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 505327: mov esi, ecx */
  esi = ecx;
/* 505329: call 0x4e1c67 */
  esp -= 4; W32(esp, 0x50532eu); SPILL(); f_4e1c67(); if (g_unwind) return; RELOAD();
/* 50532e: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 505331: lea ecx, [edi + 0x2c] */
  ecx = (uint32_t)(edi + 0x2cu);
/* 505334: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 505335: lea ecx, [esi + 0x2c] */
  ecx = (uint32_t)(esi + 0x2cu);
/* 505338: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 50533b: call 0x4e1672 */
  esp -= 4; W32(esp, 0x505340u); SPILL(); f_4e1672(); if (g_unwind) return; RELOAD();
/* 505340: mov edx, dword ptr [edi + 0x38] */
  edx = R32((uint32_t)(edi + 0x38u));
/* 505343: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 505346: mov dword ptr [esi + 0x38], edx */
  W32((uint32_t)(esi + 0x38u), edx);
/* 505349: xor eax, dword ptr [edi + 0x3c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x3cu)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 50534c: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 50534f: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 505352: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 505354: mov dword ptr [esi + 0x3c], ecx */
  W32((uint32_t)(esi + 0x3cu), ecx);
/* 505357: mov eax, ecx */
  eax = ecx;
/* 505359: mov ecx, dword ptr [edi + 0x3c] */
  ecx = R32((uint32_t)(edi + 0x3cu));
/* 50535c: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 50535e: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 505361: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 505363: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 505364: mov dword ptr [esi + 0x3c], ecx */
  W32((uint32_t)(esi + 0x3cu), ecx);
/* 505367: mov eax, esi */
  eax = esi;
/* 505369: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50536a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_505390(void) {
  LOAD_REGS();
L_505390: /* 505390: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 505391: mov esi, ecx */
  esi = ecx;
/* 505393: call 0x4e412e */
  esp -= 4; W32(esp, 0x505398u); SPILL(); f_4e412e(); if (g_unwind) return; RELOAD();
/* 505398: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 50539d: je 0x5053aa */
  if (zf) goto L_5053aa;
L_50539f: /* 50539f: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 5053a1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5053a2: call 0x4e3fb2 */
  esp -= 4; W32(esp, 0x5053a7u); SPILL(); f_4e3fb2(); if (g_unwind) return; RELOAD();
/* 5053a7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5053aa: /* 5053aa: mov eax, esi */
  eax = esi;
/* 5053ac: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5053ad: ret 4 */
  esp += 8; SPILL(); return;
}

void f_5053c0(void) {
  LOAD_REGS();
L_5053c0: /* 5053c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5053c1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 5053c5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 5053c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5053c9: mov esi, ecx */
  esi = ecx;
/* 5053cb: je 0x5053fb */
  if (zf) goto L_5053fb;
L_5053cd: /* 5053cd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 5053d0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5053d1: push 0x4e412e */
  { uint32_t v = 0x4e412eu; esp -= 4; W32(esp, v); }
/* 5053d6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 5053d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5053da: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 5053dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5053dd: call 0x554e72 */
  esp -= 4; W32(esp, 0x5053e2u); SPILL(); f_554e72(); if (g_unwind) return; RELOAD();
/* 5053e2: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 5053e5: je 0x5053f3 */
  if (zf) goto L_5053f3;
L_5053e7: /* 5053e7: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 5053ed: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5053ef: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5053f0: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x5053f3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_5053f3: /* 5053f3: mov eax, edi */
  eax = edi;
/* 5053f5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5053f6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5053f7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5053f8: ret 4 */
  esp += 8; SPILL(); return;
L_5053fb: /* 5053fb: mov ecx, esi */
  ecx = esi;
/* 5053fd: call 0x4e412e */
  esp -= 4; W32(esp, 0x505402u); SPILL(); f_4e412e(); if (g_unwind) return; RELOAD();
/* 505402: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 505405: je 0x505412 */
  if (zf) goto L_505412;
L_505407: /* 505407: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 505409: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50540a: call 0x4e3fb2 */
  esp -= 4; W32(esp, 0x50540fu); SPILL(); f_4e3fb2(); if (g_unwind) return; RELOAD();
/* 50540f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_505412: /* 505412: mov eax, esi */
  eax = esi;
/* 505414: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 505415: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 505416: ret 4 */
  esp += 8; SPILL(); return;
}

void f_505440(void) {
  LOAD_REGS();
L_505440: /* 505440: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 505442: push 0x556a38 */
  { uint32_t v = 0x556a38u; esp -= 4; W32(esp, v); }
/* 505447: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 50544d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50544e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 505455: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 505456: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 505457: mov esi, ecx */
  esi = ecx;
/* 505459: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 50545d: mov dword ptr [esi], 0x56acf0 */
  W32((uint32_t)(esi), 0x56acf0u);
/* 505463: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 50546b: call 0x4e2559 */
  esp -= 4; W32(esp, 0x505470u); SPILL(); f_4e2559(); if (g_unwind) return; RELOAD();
/* 505470: mov ecx, esi */
  ecx = esi;
/* 505472: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 50547a: call 0x4e28f1 */
  esp -= 4; W32(esp, 0x50547fu); SPILL(); f_4e28f1(); if (g_unwind) return; RELOAD();
/* 50547f: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 505483: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 505484: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 50548b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50548e: ret  */
  esp += 4; SPILL(); return;
}

void f_5054b0(void) {
  LOAD_REGS();
L_5054b0: /* 5054b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 5054b4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5054b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5054b6: mov esi, ecx */
  esi = ecx;
/* 5054b8: call 0x4e11f9 */
  esp -= 4; W32(esp, 0x5054bdu); SPILL(); f_4e11f9(); if (g_unwind) return; RELOAD();
/* 5054bd: mov dword ptr [esi], 0x56acf0 */
  W32((uint32_t)(esi), 0x56acf0u);
/* 5054c3: mov eax, esi */
  eax = esi;
/* 5054c5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5054c6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_5054e0(void) {
  LOAD_REGS();
L_5054e0: /* 5054e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 5054e4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5054e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5054e6: mov esi, ecx */
  esi = ecx;
/* 5054e8: call 0x4e28c4 */
  esp -= 4; W32(esp, 0x5054edu); SPILL(); f_4e28c4(); if (g_unwind) return; RELOAD();
/* 5054ed: mov eax, esi */
  eax = esi;
/* 5054ef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5054f0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_505510(void) {
  LOAD_REGS();
L_505510: /* 505510: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 505511: mov esi, ecx */
  esi = ecx;
/* 505513: call 0x4e3120 */
  esp -= 4; W32(esp, 0x505518u); SPILL(); f_4e3120(); if (g_unwind) return; RELOAD();
/* 505518: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 50551d: je 0x50552a */
  if (zf) goto L_50552a;
L_50551f: /* 50551f: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* 505521: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 505522: call 0x4e3fb2 */
  esp -= 4; W32(esp, 0x505527u); SPILL(); f_4e3fb2(); if (g_unwind) return; RELOAD();
/* 505527: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50552a: /* 50552a: mov eax, esi */
  eax = esi;
/* 50552c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50552d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_505540(void) {
  LOAD_REGS();
L_505540: /* 505540: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 505541: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 505545: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 505548: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 505549: mov esi, ecx */
  esi = ecx;
/* 50554b: je 0x50557b */
  if (zf) goto L_50557b;
L_50554d: /* 50554d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 505550: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 505551: push 0x4e3120 */
  { uint32_t v = 0x4e3120u; esp -= 4; W32(esp, v); }
/* 505556: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 505559: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50555a: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* 50555c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50555d: call 0x554e72 */
  esp -= 4; W32(esp, 0x505562u); SPILL(); f_554e72(); if (g_unwind) return; RELOAD();
/* 505562: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 505565: je 0x505573 */
  if (zf) goto L_505573;
L_505567: /* 505567: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 50556d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 50556f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 505570: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x505573u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_505573: /* 505573: mov eax, edi */
  eax = edi;
/* 505575: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 505576: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 505577: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 505578: ret 4 */
  esp += 8; SPILL(); return;
L_50557b: /* 50557b: mov ecx, esi */
  ecx = esi;
/* 50557d: call 0x4e3120 */
  esp -= 4; W32(esp, 0x505582u); SPILL(); f_4e3120(); if (g_unwind) return; RELOAD();
/* 505582: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 505585: je 0x505592 */
  if (zf) goto L_505592;
L_505587: /* 505587: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* 505589: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50558a: call 0x4e3fb2 */
  esp -= 4; W32(esp, 0x50558fu); SPILL(); f_4e3fb2(); if (g_unwind) return; RELOAD();
/* 50558f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_505592: /* 505592: mov eax, esi */
  eax = esi;
/* 505594: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 505595: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 505596: ret 4 */
  esp += 8; SPILL(); return;
}

void f_5055c0(void) {
  LOAD_REGS();
L_5055c0: /* 5055c0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 5055c4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5055c6: je 0x5055cd */
  if (zf) goto L_5055cd;
L_5055c8: /* 5055c8: jmp 0x4e1f46 */
  SPILL(); f_4e1f46(); return;
L_5055cd: /* 5055cd: ret  */
  esp += 4; SPILL(); return;
}

void f_5055e0(void) {
  LOAD_REGS();
L_5055e0: /* 5055e0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 5055e4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5055e6: je 0x5055ed */
  if (zf) goto L_5055ed;
L_5055e8: /* 5055e8: jmp 0x4e1596 */
  SPILL(); f_4e1596(); return;
L_5055ed: /* 5055ed: ret  */
  esp += 4; SPILL(); return;
}

void f_505600(void) {
  LOAD_REGS();
L_505600: /* 505600: mov dword ptr [0x5ed6a0], 0 */
  W32((uint32_t)(0x5ed6a0u), 0x0u);
/* 50560a: jmp dword ptr [0x6ac808] */
  SPILL(); call_ind(R32(0x6ac808u)); return; /* ole32!CoUninitialize */
}

void f_505620(void) {
  LOAD_REGS();
L_505620: /* 505620: xor eax, eax */
  eax = 0;
/* 505622: ret  */
  esp += 4; SPILL(); return;
}

void f_505640(void) {
  LOAD_REGS();
L_505640: /* 505640: jmp dword ptr [0x6ac4e8] */
  SPILL(); call_ind(R32(0x6ac4e8u)); return; /* KERNEL32!InterlockedExchange */
}

void f_505660(void) {
  LOAD_REGS();
L_505660: /* 505660: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 505663: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 505664: xor esi, esi */
  esi = 0;
/* 505666: call dword ptr [0x6ac4f4] */
  esp -= 4; W32(esp, 0x50566cu); SPILL(); call_ind(R32(0x6ac4f4u)); if (g_unwind) return; /* KERNEL32!GetThreadLocale */ RELOAD();
/* 50566c: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 50566e: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 505672: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 505673: push 0x1004 */
  { uint32_t v = 0x1004u; esp -= 4; W32(esp, v); }
/* 505678: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 505679: call dword ptr [0x6ac4f0] */
  esp -= 4; W32(esp, 0x50567fu); SPILL(); call_ind(R32(0x6ac4f0u)); if (g_unwind) return; /* KERNEL32!GetLocaleInfoA */ RELOAD();
/* 50567f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 505681: je 0x5056a5 */
  if (zf) goto L_5056a5;
L_505683: /* 505683: mov al, byte ptr [esp + 4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x4u))) & 0xffu);
/* 505687: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 505689: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* 50568d: je 0x5056a5 */
  if (zf) goto L_5056a5;
L_50568f: /* 50568f: nop  */
L_505690: /* 505690: movsx eax, al */
  eax = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 505693: lea edx, [esi + esi*4] */
  edx = (uint32_t)(esi + esi*4);
/* 505696: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 505697: lea esi, [eax + edx*2 - 0x30] */
  esi = (uint32_t)(eax + edx*2 + 0xffffffd0u);
/* 50569b: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 50569d: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 50569f: jne 0x505690 */
  if (!zf) goto L_505690;
L_5056a1: /* 5056a1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5056a3: jne 0x5056af */
  if (!zf) goto L_5056af;
L_5056a5: /* 5056a5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5056a6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5056a9: jmp dword ptr [0x6ac4ec] */
  SPILL(); call_ind(R32(0x6ac4ecu)); return; /* KERNEL32!GetACP */
L_5056af: /* 5056af: mov eax, esi */
  eax = esi;
/* 5056b1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5056b2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5056b5: ret  */
  esp += 4; SPILL(); return;
}

void f_5056e0(void) {
  LOAD_REGS();
L_5056e0: /* 5056e0: mov eax, 3 */
  eax = 0x3u;
/* 5056e5: ret  */
  esp += 4; SPILL(); return;
}

void f_505700(void) {
  LOAD_REGS();
L_505700: /* 505700: sub esp, 0x114 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x114u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 505706: lea eax, [esp] */
  eax = (uint32_t)(esp);
/* 50570a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50570b: mov dword ptr [esp + 4], 0x114 */
  W32((uint32_t)(esp + 0x4u), 0x114u);
/* 505713: call dword ptr [0x6ac4f8] */
  esp -= 4; W32(esp, 0x505719u); SPILL(); call_ind(R32(0x6ac4f8u)); if (g_unwind) return; /* KERNEL32!GetVersionExW */ RELOAD();
/* 505719: cmp dword ptr [esp + 0x10], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50571e: jne 0x50572c */
  if (!zf) goto L_50572c;
L_505720: /* 505720: cmp dword ptr [esp + 4], 5 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x4u))); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 505725: mov eax, 0x4e22ac */
  eax = 0x4e22acu;
/* 50572a: jae 0x505731 */
  if (!cf) goto L_505731;
L_50572c: /* 50572c: mov eax, 0x4e1316 */
  eax = 0x4e1316u;
L_505731: /* 505731: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 505732: push 0x5a3d54 */
  { uint32_t v = 0x5a3d54u; esp -= 4; W32(esp, v); }
/* 505737: call dword ptr [0x6ac4e8] */
  esp -= 4; W32(esp, 0x50573du); SPILL(); call_ind(R32(0x6ac4e8u)); if (g_unwind) return; /* KERNEL32!InterlockedExchange */ RELOAD();
/* 50573d: add esp, 0x114 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x114u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 505743: jmp dword ptr [0x5a3d54] */
  { uint32_t t = R32((uint32_t)(0x5a3d54u)); SPILL(); call_ind(t); return; }
}

void f_505770(void) {
  LOAD_REGS();
L_505770: /* 505770: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 505772: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 505774: je 0x50577c */
  if (zf) goto L_50577c;
L_505776: /* 505776: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 505778: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 505779: call dword ptr [ecx + 8] */
  { uint32_t t = R32((uint32_t)(ecx + 0x8u)); esp -= 4; W32(esp, 0x50577cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_50577c: /* 50577c: ret  */
  esp += 4; SPILL(); return;
}

void f_505790(void) {
  LOAD_REGS();
L_505790: /* 505790: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 505792: ret  */
  esp += 4; SPILL(); return;
}

void f_5057b0(void) {
  LOAD_REGS();
L_5057b0: /* 5057b0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 5057b2: ret  */
  esp += 4; SPILL(); return;
}

void f_5057d0(void) {
  LOAD_REGS();
L_5057d0: /* 5057d0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 5057d2: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 5057d6: xor eax, eax */
  eax = 0;
/* 5057d8: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5057da: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 5057dd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_5057f0(void) {
  LOAD_REGS();
L_5057f0: /* 5057f0: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 5057f4: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 5057f8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5057f9: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 5057fd: push 0x56afb0 */
  { uint32_t v = 0x56afb0u; esp -= 4; W32(esp, v); }
/* 505802: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 505803: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 505804: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 505805: call dword ptr [0x6ac804] */
  esp -= 4; W32(esp, 0x50580bu); SPILL(); call_ind(R32(0x6ac804u)); if (g_unwind) return; /* ole32!CoCreateInstance */ RELOAD();
/* 50580b: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_505820(void) {
  LOAD_REGS();
L_505820: /* 505820: mov eax, ecx */
  eax = ecx;
/* 505822: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 505826: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 505828: ret 4 */
  esp += 8; SPILL(); return;
}

void f_505840(void) {
  LOAD_REGS();
L_505840: /* 505840: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 505844: push 0x5729ec */
  { uint32_t v = 0x5729ecu; esp -= 4; W32(esp, v); }
/* 505849: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 50584d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50584e: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 505852: call 0x554df6 */
  esp -= 4; W32(esp, 0x505857u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_505857: guest_badaddr(0x505857); return;
}

void f_505870(void) {
  LOAD_REGS();
L_505870: /* 505870: mov eax, ecx */
  eax = ecx;
/* 505872: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 505878: ret  */
  esp += 4; SPILL(); return;
}

void f_505890(void) {
  LOAD_REGS();
L_505890: /* 505890: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 505894: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 505896: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 505897: mov esi, ecx */
  esi = ecx;
/* 505899: jne 0x5058a3 */
  if (!zf) goto L_5058a3;
L_50589b: /* 50589b: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_50589d: /* 50589d: mov eax, esi */
  eax = esi;
/* 50589f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5058a0: ret 4 */
  esp += 8; SPILL(); return;
L_5058a3: /* 5058a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5058a4: call dword ptr [0x6ac714] */
  esp -= 4; W32(esp, 0x5058aau); SPILL(); call_ind(R32(0x6ac714u)); if (g_unwind) return; /* OLEAUT32!SysAllocString */ RELOAD();
/* 5058aa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5058ac: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 5058ae: jne 0x50589d */
  if (!zf) goto L_50589d;
L_5058b0: /* 5058b0: push 0x8007000e */
  { uint32_t v = 0x8007000eu; esp -= 4; W32(esp, v); }
/* 5058b5: call 0x4e1ee2 */
  esp -= 4; W32(esp, 0x5058bau); SPILL(); f_4e1ee2(); if (g_unwind) return; RELOAD();
L_5058ba: guest_badaddr(0x5058ba); return;
}

void f_5058d0(void) {
  LOAD_REGS();
L_5058d0: /* 5058d0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 5058d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5058d3: call dword ptr [0x6ac710] */
  esp -= 4; W32(esp, 0x5058d9u); SPILL(); call_ind(R32(0x6ac710u)); if (g_unwind) return; /* OLEAUT32!SysFreeString */ RELOAD();
/* 5058d9: ret  */
  esp += 4; SPILL(); return;
}

void f_5058f0(void) {
  LOAD_REGS();
L_5058f0: /* 5058f0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 5058f2: ret  */
  esp += 4; SPILL(); return;
}

void f_505910(void) {
  LOAD_REGS();
L_505910: /* 505910: mov dword ptr [ecx], 0x56afc4 */
  W32((uint32_t)(ecx), 0x56afc4u);
/* 505916: mov dword ptr [0x5ed6a0], 0 */
  W32((uint32_t)(0x5ed6a0u), 0x0u);
/* 505920: jmp dword ptr [0x6ac808] */
  SPILL(); call_ind(R32(0x6ac808u)); return; /* ole32!CoUninitialize */
}

void f_505940(void) {
  LOAD_REGS();
L_505940: /* 505940: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 505941: mov esi, ecx */
  esi = ecx;
/* 505943: mov dword ptr [esi], 0x56afc4 */
  W32((uint32_t)(esi), 0x56afc4u);
/* 505949: mov dword ptr [0x5ed6a0], 0 */
  W32((uint32_t)(0x5ed6a0u), 0x0u);
/* 505953: call dword ptr [0x6ac808] */
  esp -= 4; W32(esp, 0x505959u); SPILL(); call_ind(R32(0x6ac808u)); if (g_unwind) return; /* ole32!CoUninitialize */ RELOAD();
/* 505959: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 50595e: je 0x505969 */
  if (zf) goto L_505969;
L_505960: /* 505960: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 505961: call 0x4e1a82 */
  esp -= 4; W32(esp, 0x505966u); SPILL(); f_4e1a82(); if (g_unwind) return; RELOAD();
/* 505966: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_505969: /* 505969: mov eax, esi */
  eax = esi;
/* 50596b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50596c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_505980(void) {
  LOAD_REGS();
L_505980: /* 505980: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 505982: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 505984: je 0x50598c */
  if (zf) goto L_50598c;
L_505986: /* 505986: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 505988: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 505989: call dword ptr [ecx + 8] */
  { uint32_t t = R32((uint32_t)(ecx + 0x8u)); esp -= 4; W32(esp, 0x50598cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_50598c: /* 50598c: ret  */
  esp += 4; SPILL(); return;
}

void f_5059a0(void) {
  LOAD_REGS();
L_5059a0: /* 5059a0: mov eax, dword ptr [0x5ed6a0] */
  eax = R32((uint32_t)(0x5ed6a0u));
/* 5059a5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5059a7: jne 0x5059df */
  if (!zf) goto L_5059df;
L_5059a9: /* 5059a9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5059ab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5059ad: call dword ptr [0x6ac800] */
  esp -= 4; W32(esp, 0x5059b3u); SPILL(); call_ind(R32(0x6ac800u)); if (g_unwind) return; /* ole32!CoInitializeEx */ RELOAD();
/* 5059b3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 5059b5: jl 0x5059df */
  if ((sf != of)) goto L_5059df;
L_5059b7: /* 5059b7: push 0x5ed6a0 */
  { uint32_t v = 0x5ed6a0u; esp -= 4; W32(esp, v); }
/* 5059bc: push 0x56afb0 */
  { uint32_t v = 0x56afb0u; esp -= 4; W32(esp, v); }
/* 5059c1: push 0x17 */
  { uint32_t v = 0x17u; esp -= 4; W32(esp, v); }
/* 5059c3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5059c5: push 0x56afe8 */
  { uint32_t v = 0x56afe8u; esp -= 4; W32(esp, v); }
/* 5059ca: call dword ptr [0x6ac804] */
  esp -= 4; W32(esp, 0x5059d0u); SPILL(); call_ind(R32(0x6ac804u)); if (g_unwind) return; /* ole32!CoCreateInstance */ RELOAD();
/* 5059d0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 5059d2: jge 0x5059df */
  if ((sf == of)) goto L_5059df;
L_5059d4: /* 5059d4: push 0x5a3cd0 */
  { uint32_t v = 0x5a3cd0u; esp -= 4; W32(esp, v); }
/* 5059d9: call dword ptr [0x6ac4fc] */
  esp -= 4; W32(esp, 0x5059dfu); SPILL(); call_ind(R32(0x6ac4fcu)); if (g_unwind) return; /* KERNEL32!OutputDebugStringW */ RELOAD();
L_5059df: /* 5059df: ret  */
  esp += 4; SPILL(); return;
}

void f_5059f0(void) {
  LOAD_REGS();
L_5059f0: /* 5059f0: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 5059f6: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5059f8: push 0x556a58 */
  { uint32_t v = 0x556a58u; esp -= 4; W32(esp, v); }
/* 5059fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5059fe: mov eax, dword ptr [0x5ed6a0] */
  eax = R32((uint32_t)(0x5ed6a0u));
/* 505a03: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 505a05: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 505a0c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 505a0d: je 0x505a5a */
  if (zf) goto L_505a5a;
L_505a0f: /* 505a0f: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 505a13: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 505a15: jne 0x505a1f */
  if (!zf) goto L_505a1f;
L_505a17: /* 505a17: xor esi, esi */
  esi = 0;
/* 505a19: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
/* 505a1d: jmp 0x505a3f */
  goto L_505a3f;
L_505a1f: /* 505a1f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 505a20: call dword ptr [0x6ac714] */
  esp -= 4; W32(esp, 0x505a26u); SPILL(); call_ind(R32(0x6ac714u)); if (g_unwind) return; /* OLEAUT32!SysAllocString */ RELOAD();
/* 505a26: mov esi, eax */
  esi = eax;
/* 505a28: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 505a2a: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
/* 505a2e: jne 0x505a3a */
  if (!zf) goto L_505a3a;
L_505a30: /* 505a30: push 0x8007000e */
  { uint32_t v = 0x8007000eu; esp -= 4; W32(esp, v); }
/* 505a35: call 0x4e1ee2 */
  esp -= 4; W32(esp, 0x505a3au); SPILL(); f_4e1ee2(); if (g_unwind) return; RELOAD();
L_505a3a: /* 505a3a: mov eax, dword ptr [0x5ed6a0] */
  eax = R32((uint32_t)(0x5ed6a0u));
L_505a3f: /* 505a3f: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 505a43: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 505a45: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 505a46: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 505a47: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 505a48: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 505a50: call dword ptr [ecx + 0x20] */
  { uint32_t t = R32((uint32_t)(ecx + 0x20u)); esp -= 4; W32(esp, 0x505a53u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 505a53: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 505a54: call dword ptr [0x6ac710] */
  esp -= 4; W32(esp, 0x505a5au); SPILL(); call_ind(R32(0x6ac710u)); if (g_unwind) return; /* OLEAUT32!SysFreeString */ RELOAD();
L_505a5a: /* 505a5a: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 505a5e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 505a65: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 505a66: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 505a69: ret 8 */
  esp += 12; SPILL(); return;
}

void f_505a90(void) {
  LOAD_REGS();
L_505a90: /* 505a90: mov eax, ecx */
  eax = ecx;
/* 505a92: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 505a98: ret  */
  esp += 4; SPILL(); return;
}

void f_505ab0(void) {
  LOAD_REGS();
L_505ab0: /* 505ab0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 505ab1: mov esi, ecx */
  esi = ecx;
/* 505ab3: mov dword ptr [esi], 0x56afc4 */
  W32((uint32_t)(esi), 0x56afc4u);
/* 505ab9: mov eax, dword ptr [0x5ed6a0] */
  eax = R32((uint32_t)(0x5ed6a0u));
/* 505abe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 505ac0: jne 0x505af8 */
  if (!zf) goto L_505af8;
L_505ac2: /* 505ac2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 505ac4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 505ac6: call dword ptr [0x6ac800] */
  esp -= 4; W32(esp, 0x505accu); SPILL(); call_ind(R32(0x6ac800u)); if (g_unwind) return; /* ole32!CoInitializeEx */ RELOAD();
/* 505acc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 505ace: jl 0x505af8 */
  if ((sf != of)) goto L_505af8;
L_505ad0: /* 505ad0: push 0x5ed6a0 */
  { uint32_t v = 0x5ed6a0u; esp -= 4; W32(esp, v); }
/* 505ad5: push 0x56afb0 */
  { uint32_t v = 0x56afb0u; esp -= 4; W32(esp, v); }
/* 505ada: push 0x17 */
  { uint32_t v = 0x17u; esp -= 4; W32(esp, v); }
/* 505adc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 505ade: push 0x56afe8 */
  { uint32_t v = 0x56afe8u; esp -= 4; W32(esp, v); }
/* 505ae3: call dword ptr [0x6ac804] */
  esp -= 4; W32(esp, 0x505ae9u); SPILL(); call_ind(R32(0x6ac804u)); if (g_unwind) return; /* ole32!CoCreateInstance */ RELOAD();
/* 505ae9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 505aeb: jge 0x505af8 */
  if ((sf == of)) goto L_505af8;
L_505aed: /* 505aed: push 0x5a3cd0 */
  { uint32_t v = 0x5a3cd0u; esp -= 4; W32(esp, v); }
/* 505af2: call dword ptr [0x6ac4fc] */
  esp -= 4; W32(esp, 0x505af8u); SPILL(); call_ind(R32(0x6ac4fcu)); if (g_unwind) return; /* KERNEL32!OutputDebugStringW */ RELOAD();
L_505af8: /* 505af8: mov eax, esi */
  eax = esi;
/* 505afa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 505afb: ret  */
  esp += 4; SPILL(); return;
}

void f_505b20(void) {
  LOAD_REGS();
L_505b20: /* 505b20: mov eax, ecx */
  eax = ecx;
/* 505b22: xor ecx, ecx */
  ecx = 0;
/* 505b24: mov edx, 1 */
  edx = 0x1u;
/* 505b29: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 505b2a: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 505b2e: mov dword ptr [eax + 0x40], esi */
  W32((uint32_t)(eax + 0x40u), esi);
/* 505b31: mov dword ptr [eax + 4], 0x7e */
  W32((uint32_t)(eax + 0x4u), 0x7eu);
/* 505b38: mov dword ptr [eax + 8], 0x7d0 */
  W32((uint32_t)(eax + 0x8u), 0x7d0u);
/* 505b3f: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 505b42: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 505b45: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 505b48: mov dword ptr [eax + 0x1c], ecx */
  W32((uint32_t)(eax + 0x1cu), ecx);
/* 505b4b: mov dword ptr [eax + 0x20], edx */
  W32((uint32_t)(eax + 0x20u), edx);
/* 505b4e: mov dword ptr [eax + 0x24], edx */
  W32((uint32_t)(eax + 0x24u), edx);
/* 505b51: mov dword ptr [eax + 0x28], edx */
  W32((uint32_t)(eax + 0x28u), edx);
/* 505b54: mov dword ptr [eax + 0x2c], ecx */
  W32((uint32_t)(eax + 0x2cu), ecx);
/* 505b57: mov dword ptr [eax + 0x30], ecx */
  W32((uint32_t)(eax + 0x30u), ecx);
/* 505b5a: mov dword ptr [eax + 0x34], ecx */
  W32((uint32_t)(eax + 0x34u), ecx);
/* 505b5d: mov dword ptr [eax + 0x38], ecx */
  W32((uint32_t)(eax + 0x38u), ecx);
/* 505b60: mov dword ptr [eax + 0x3c], 0xffffffff */
  W32((uint32_t)(eax + 0x3cu), 0xffffffffu);
/* 505b67: mov dword ptr [eax], 0x56b008 */
  W32((uint32_t)(eax), 0x56b008u);
/* 505b6d: mov dword ptr [eax + 0x44], ecx */
  W32((uint32_t)(eax + 0x44u), ecx);
/* 505b70: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 505b73: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 505b74: ret 4 */
  esp += 8; SPILL(); return;
}

void f_505ba0(void) {
  LOAD_REGS();
L_505ba0: /* 505ba0: mov eax, dword ptr [ecx + 0x44] */
  eax = R32((uint32_t)(ecx + 0x44u));
/* 505ba3: ret  */
  esp += 4; SPILL(); return;
}

void f_505bc0(void) {
  LOAD_REGS();
L_505bc0: /* 505bc0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 505bc4: mov dword ptr [ecx + 0x44], eax */
  W32((uint32_t)(ecx + 0x44u), eax);
/* 505bc7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_505be0(void) {
  LOAD_REGS();
L_505be0: /* 505be0: mov eax, dword ptr [ecx + 0x40] */
  eax = R32((uint32_t)(ecx + 0x40u));
/* 505be3: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 505be6: ret  */
  esp += 4; SPILL(); return;
}

void f_505c00(void) {
  LOAD_REGS();
L_505c00: /* 505c00: mov dword ptr [ecx], 0x569110 */
  W32((uint32_t)(ecx), 0x569110u);
/* 505c06: ret  */
  esp += 4; SPILL(); return;
}

void f_505c20(void) {
  LOAD_REGS();
L_505c20: /* 505c20: mov eax, ecx */
  eax = ecx;
/* 505c22: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 505c25: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 505c28: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 505c2c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 505c2d: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 505c2f: lea edx, [edx + edx*2] */
  edx = (uint32_t)(edx + edx*2);
/* 505c32: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 505c35: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 505c38: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 505c39: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 505c3c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 505c3d: call dword ptr [esi + 0x14] */
  { uint32_t t = R32((uint32_t)(esi + 0x14u)); esp -= 4; W32(esp, 0x505c40u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 505c40: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 505c41: ret 4 */
  esp += 8; SPILL(); return;
}

void f_505c60(void) {
  LOAD_REGS();
L_505c60: /* 505c60: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 505c63: mov ecx, dword ptr [0x6a0f04] */
  ecx = R32((uint32_t)(0x6a0f04u));
/* 505c69: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 505c6c: ret  */
  esp += 4; SPILL(); return;
}

void f_505c80(void) {
  LOAD_REGS();
L_505c80: /* 505c80: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 505c83: mov ecx, dword ptr [0x6a0f04] */
  ecx = R32((uint32_t)(0x6a0f04u));
/* 505c89: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 505c8c: ret  */
  esp += 4; SPILL(); return;
}

void f_505ca0(void) {
  LOAD_REGS();
L_505ca0: /* 505ca0: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 505ca3: mov edx, dword ptr [0x6a0f08] */
  edx = R32((uint32_t)(0x6a0f08u));
/* 505ca9: xor eax, eax */
  eax = 0;
/* 505cab: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 505cad: setl al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(((sf != of)) ? 1 : 0) & 0xffu);
/* 505cb0: ret  */
  esp += 4; SPILL(); return;
}

void f_505cd0(void) {
  LOAD_REGS();
L_505cd0: /* 505cd0: mov eax, ecx */
  eax = ecx;
/* 505cd2: xor ecx, ecx */
  ecx = 0;
/* 505cd4: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 505cd6: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 505cd9: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 505cdc: ret  */
  esp += 4; SPILL(); return;
}

void f_505cf0(void) {
  LOAD_REGS();
L_505cf0: /* 505cf0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 505cf4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 505cf6: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 505cf9: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 505cfc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_505d10(void) {
  LOAD_REGS();
L_505d10: /* 505d10: mov eax, ecx */
  eax = ecx;
/* 505d12: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 505d16: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 505d18: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 505d1c: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 505d1f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 505d21: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 505d24: ret 8 */
  esp += 12; SPILL(); return;
}

void f_505d40(void) {
  LOAD_REGS();
L_505d40: /* 505d40: mov eax, 1 */
  eax = 0x1u;
/* 505d45: ret  */
  esp += 4; SPILL(); return;
}

void f_505d60(void) {
  LOAD_REGS();
L_505d60: /* 505d60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 505d61: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 505d65: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 505d68: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 505d69: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 505d6c: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 505d6f: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 505d71: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 505d74: jle 0x505d92 */
  if ((zf || sf != of)) goto L_505d92;
L_505d76: /* 505d76: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 505d79: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 505d7a: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 505d7d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 505d7f: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 505d82: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 505d86: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 505d88: mov ecx, esi */
  ecx = esi;
/* 505d8a: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 505d8d: call 0x4e4502 */
  esp -= 4; W32(esp, 0x505d92u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_505d92: /* 505d92: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 505d94: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 505d97: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 505d98: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 505d9b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 505d9c: ret  */
  esp += 4; SPILL(); return;
}

void f_505db0(void) {
  LOAD_REGS();
L_505db0: /* 505db0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 505db4: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 505db8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 505dba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 505dbb: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x505dbeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 505dbe: ret  */
  esp += 4; SPILL(); return;
}

void f_505dd0(void) {
  LOAD_REGS();
L_505dd0: /* 505dd0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 505dd1: mov ebp, esp */
  ebp = esp;
/* 505dd3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 505dd5: push 0x556a70 */
  { uint32_t v = 0x556a70u; esp -= 4; W32(esp, v); }
/* 505dda: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 505de0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 505de1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 505de8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 505deb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 505dec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 505ded: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 505df0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 505df1: mov edi, dword ptr [esi + 0x24] */
  edi = R32((uint32_t)(esi + 0x24u));
/* 505df4: mov ebx, ecx */
  ebx = ecx;
/* 505df6: mov eax, dword ptr [ebx + 0x38] */
  eax = R32((uint32_t)(ebx + 0x38u));
/* 505df9: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 505dfc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 505dfd: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 505e04: call 0x4e2491 */
  esp -= 4; W32(esp, 0x505e09u); SPILL(); f_4e2491(); if (g_unwind) return; RELOAD();
/* 505e09: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 505e0f: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 505e12: mov edx, dword ptr [ecx + edx*4] */
  edx = R32((uint32_t)(ecx + edx*4));
/* 505e15: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 505e18: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 505e1b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 505e1c: mov edx, dword ptr [edi + 0x20] */
  edx = R32((uint32_t)(edi + 0x20u));
/* 505e1f: mov ecx, dword ptr [ecx + edx*4] */
  ecx = R32((uint32_t)(ecx + edx*4));
/* 505e22: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 505e25: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 505e28: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 505e29: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 505e2a: push 0x5a40d0 */
  { uint32_t v = 0x5a40d0u; esp -= 4; W32(esp, v); }
/* 505e2f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 505e30: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x505e35u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 505e35: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 505e38: mov edx, dword ptr [eax + 0x4e8] */
  edx = R32((uint32_t)(eax + 0x4e8u));
/* 505e3e: mov ecx, dword ptr [ebx + 0x38] */
  ecx = R32((uint32_t)(ebx + 0x38u));
/* 505e41: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 505e44: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 505e45: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 505e46: add ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 505e49: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 505e4a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 505e4b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 505e4c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 505e4d: call 0x4e3251 */
  esp -= 4; W32(esp, 0x505e52u); SPILL(); f_4e3251(); if (g_unwind) return; RELOAD();
/* 505e52: mov edx, dword ptr [ebx + 0x38] */
  edx = R32((uint32_t)(ebx + 0x38u));
/* 505e55: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 505e58: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 505e59: call 0x4e2491 */
  esp -= 4; W32(esp, 0x505e5eu); SPILL(); f_4e2491(); if (g_unwind) return; RELOAD();
/* 505e5e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 505e61: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 505e62: push 0x5a4114 */
  { uint32_t v = 0x5a4114u; esp -= 4; W32(esp, v); }
/* 505e67: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 505e68: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x505e6du); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 505e6d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 505e70: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 505e73: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 505e74: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 505e75: mov eax, 1 */
  eax = 0x1u;
/* 505e7a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 505e81: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 505e82: mov esp, ebp */
  esp = ebp;
/* 505e84: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 505e85: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_505e88(void) {
  LOAD_REGS();
L_505e88: /* 505e88: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 505e8b: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 505e90: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 505e93: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 505e94: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 505e97: call 0x554df6 */
  esp -= 4; W32(esp, 0x505e9cu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_505e9c(); return;
}

void f_505e9c(void) {
  LOAD_REGS();
L_505e9c: /* 505e9c: push 0x56b074 */
  { uint32_t v = 0x56b074u; esp -= 4; W32(esp, v); }
/* 505ea1: push 0x5a4134 */
  { uint32_t v = 0x5a4134u; esp -= 4; W32(esp, v); }
/* 505ea6: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x505eabu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 505eab: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 505eae: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 505eb0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 505eb2: call 0x554df6 */
  esp -= 4; W32(esp, 0x505eb7u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_505eb7: guest_badaddr(0x505eb7); return;
}

void f_505f00(void) {
  LOAD_REGS();
L_505f00: /* 505f00: mov eax, ecx */
  eax = ecx;
/* 505f02: ret 4 */
  esp += 8; SPILL(); return;
}

void f_505f20(void) {
  LOAD_REGS();
L_505f20: /* 505f20: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 505f21: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 505f22: mov esi, ecx */
  esi = ecx;
/* 505f24: mov eax, dword ptr [esi + 0x44] */
  eax = R32((uint32_t)(esi + 0x44u));
/* 505f27: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 505f2a: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 505f2d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 505f2e: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 505f32: lea ebx, [eax + edi] */
  ebx = (uint32_t)(eax + edi);
/* 505f35: cmp ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 505f37: jle 0x505f45 */
  if ((zf || sf != of)) goto L_505f45;
L_505f39: /* 505f39: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 505f3b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 505f3d: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 505f3f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 505f40: call 0x4e2955 */
  esp -= 4; W32(esp, 0x505f45u); SPILL(); f_4e2955(); if (g_unwind) return; RELOAD();
L_505f45: /* 505f45: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 505f49: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 505f4c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 505f4e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 505f4f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 505f50: add edx, dword ptr [esi + 0x44] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x44u)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 505f53: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 505f54: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x505f59u); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 505f59: mov eax, dword ptr [esi + 0x44] */
  eax = R32((uint32_t)(esi + 0x44u));
/* 505f5c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 505f5f: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 505f61: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 505f62: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* 505f65: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 505f66: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 505f67: ret 8 */
  esp += 12; SPILL(); return;
}

void f_505f90(void) {
  LOAD_REGS();
L_505f90: /* 505f90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 505f91: mov esi, ecx */
  esi = ecx;
/* 505f93: call 0x4e32f1 */
  esp -= 4; W32(esp, 0x505f98u); SPILL(); f_4e32f1(); if (g_unwind) return; RELOAD();
/* 505f98: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 505f9d: je 0x505fab */
  if (zf) goto L_505fab;
L_505f9f: /* 505f9f: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 505fa5: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 505fa7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 505fa8: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x505fabu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_505fab: /* 505fab: mov eax, esi */
  eax = esi;
/* 505fad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 505fae: ret 4 */
  esp += 8; SPILL(); return;
}

void f_505fd0(void) {
  LOAD_REGS();
L_505fd0: /* 505fd0: mov eax, ecx */
  eax = ecx;
/* 505fd2: xor ecx, ecx */
  ecx = 0;
/* 505fd4: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 505fd6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 505fd7: je 0x505fde */
  if (zf) goto L_505fde;
L_505fd9: /* 505fd9: lea esi, [eax + 0x48] */
  esi = (uint32_t)(eax + 0x48u);
/* 505fdc: jmp 0x505fe0 */
  goto L_505fe0;
L_505fde: /* 505fde: xor esi, esi */
  esi = 0;
L_505fe0: /* 505fe0: mov edx, 1 */
  edx = 0x1u;
/* 505fe5: mov dword ptr [eax + 0x40], esi */
  W32((uint32_t)(eax + 0x40u), esi);
/* 505fe8: mov dword ptr [eax + 4], 0x7e */
  W32((uint32_t)(eax + 0x4u), 0x7eu);
/* 505fef: mov dword ptr [eax + 8], 0x7d0 */
  W32((uint32_t)(eax + 0x8u), 0x7d0u);
/* 505ff6: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 505ff9: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 505ffc: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 505fff: mov dword ptr [eax + 0x1c], ecx */
  W32((uint32_t)(eax + 0x1cu), ecx);
/* 506002: mov dword ptr [eax + 0x20], edx */
  W32((uint32_t)(eax + 0x20u), edx);
/* 506005: mov dword ptr [eax + 0x24], edx */
  W32((uint32_t)(eax + 0x24u), edx);
/* 506008: mov dword ptr [eax + 0x28], edx */
  W32((uint32_t)(eax + 0x28u), edx);
/* 50600b: mov dword ptr [eax + 0x2c], ecx */
  W32((uint32_t)(eax + 0x2cu), ecx);
/* 50600e: mov dword ptr [eax + 0x30], ecx */
  W32((uint32_t)(eax + 0x30u), ecx);
/* 506011: mov dword ptr [eax + 0x34], ecx */
  W32((uint32_t)(eax + 0x34u), ecx);
/* 506014: mov dword ptr [eax + 0x38], ecx */
  W32((uint32_t)(eax + 0x38u), ecx);
/* 506017: mov dword ptr [eax + 0x3c], 0xffffffff */
  W32((uint32_t)(eax + 0x3cu), 0xffffffffu);
/* 50601e: mov dword ptr [eax + 0x44], ecx */
  W32((uint32_t)(eax + 0x44u), ecx);
/* 506021: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 506024: mov dword ptr [eax + 0x48], ecx */
  W32((uint32_t)(eax + 0x48u), ecx);
/* 506027: mov dword ptr [eax + 0x4c], ecx */
  W32((uint32_t)(eax + 0x4cu), ecx);
/* 50602a: mov dword ptr [eax + 0x50], ecx */
  W32((uint32_t)(eax + 0x50u), ecx);
/* 50602d: mov dword ptr [eax], 0x56b0c0 */
  W32((uint32_t)(eax), 0x56b0c0u);
/* 506033: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 506034: ret  */
  esp += 4; SPILL(); return;
}

void f_506060(void) {
  LOAD_REGS();
L_506060: /* 506060: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 506062: push 0x556a88 */
  { uint32_t v = 0x556a88u; esp -= 4; W32(esp, v); }
/* 506067: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 50606d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50606e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 506075: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 506076: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 506077: mov esi, ecx */
  esi = ecx;
/* 506079: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 50607d: xor ecx, ecx */
  ecx = 0;
/* 50607f: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 506081: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 506085: je 0x50608a */
  if (zf) goto L_50608a;
L_506087: /* 506087: lea ecx, [esi + 0x48] */
  ecx = (uint32_t)(esi + 0x48u);
L_50608a: /* 50608a: call 0x4e33c8 */
  esp -= 4; W32(esp, 0x50608fu); SPILL(); f_4e33c8(); if (g_unwind) return; RELOAD();
/* 50608f: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 506093: mov dword ptr [esi], 0x569110 */
  W32((uint32_t)(esi), 0x569110u);
/* 506099: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50609a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5060a1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5060a4: ret  */
  esp += 4; SPILL(); return;
}

void f_5060d0(void) {
  LOAD_REGS();
L_5060d0: /* 5060d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 5060d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5060d5: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 5060d7: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5060d9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5060da: je 0x5060e1 */
  if (zf) goto L_5060e1;
L_5060dc: /* 5060dc: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 5060df: jmp 0x5060e3 */
  goto L_5060e3;
L_5060e1: /* 5060e1: xor eax, eax */
  eax = 0;
L_5060e3: /* 5060e3: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 5060e6: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 5060e7: and edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 5060e9: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 5060ec: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 5060ef: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5060f2: je 0x50610b */
  if (zf) goto L_50610b;
L_5060f4: /* 5060f4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
L_5060f6: /* 5060f6: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 5060f9: mov edi, dword ptr [edx + ecx*4 + 4] */
  edi = R32((uint32_t)(edx + ecx*4 + 0x4u));
/* 5060fd: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5060ff: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 506102: je 0x506112 */
  if (zf) goto L_506112;
L_506104: /* 506104: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 506106: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 506109: jne 0x5060f6 */
  if (!zf) goto L_5060f6;
L_50610b: /* 50610b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50610c: xor eax, eax */
  eax = 0;
/* 50610e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50610f: ret 4 */
  esp += 8; SPILL(); return;
L_506112: /* 506112: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 506115: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 506116: lea eax, [edx + eax*4 + 8] */
  eax = (uint32_t)(edx + eax*4 + 0x8u);
/* 50611a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50611b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_506140(void) {
  LOAD_REGS();
L_506140: /* 506140: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 506143: mov ecx, dword ptr [0x6a0f04] */
  ecx = R32((uint32_t)(0x6a0f04u));
/* 506149: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 50614c: ret  */
  esp += 4; SPILL(); return;
}

void f_506160(void) {
  LOAD_REGS();
L_506160: /* 506160: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 506163: mov ecx, dword ptr [0x6a0f04] */
  ecx = R32((uint32_t)(0x6a0f04u));
/* 506169: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 50616c: ret  */
  esp += 4; SPILL(); return;
}

void f_506180(void) {
  LOAD_REGS();
L_506180: /* 506180: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 506183: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 506184: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 506187: cmp eax, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50618d: jge 0x5061bb */
  if ((sf == of)) goto L_5061bb;
L_50618f: /* 50618f: mov edx, dword ptr [0x6a0f04] */
  edx = R32((uint32_t)(0x6a0f04u));
/* 506195: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 506198: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50619a: je 0x506180 */
  if (zf) goto L_506180;
L_50619c: /* 50619c: mov eax, dword ptr [eax + 0x24] */
  eax = R32((uint32_t)(eax + 0x24u));
/* 50619f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5061a1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5061a3: je 0x5061b0 */
  if (zf) goto L_5061b0;
L_5061a5: /* 5061a5: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5061a7: je 0x5061bb */
  if (zf) goto L_5061bb;
L_5061a9: /* 5061a9: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 5061ac: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5061ae: jne 0x5061a5 */
  if (!zf) goto L_5061a5;
L_5061b0: /* 5061b0: xor eax, eax */
  eax = 0;
/* 5061b2: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5061b4: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 5061b7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5061b9: je 0x506180 */
  if (zf) goto L_506180;
L_5061bb: /* 5061bb: ret  */
  esp += 4; SPILL(); return;
}

void f_5061d0(void) {
  LOAD_REGS();
L_5061d0: /* 5061d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5061d1: mov esi, ecx */
  esi = ecx;
/* 5061d3: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 5061d6: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 5061dc: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5061de: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5061df: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 5061e2: push 0x5a3b74 */
  { uint32_t v = 0x5a3b74u; esp -= 4; W32(esp, v); }
/* 5061e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5061e8: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x5061eau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5061ea: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 5061ed: mov edi, eax */
  edi = eax;
/* 5061ef: xor eax, eax */
  eax = 0;
/* 5061f1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 5061f3: jle 0x506204 */
  if ((zf || sf != of)) goto L_506204;
L_5061f5: /* 5061f5: mov dword ptr [edi + eax*4], 0xffffffff */
  W32((uint32_t)(edi + eax*4), 0xffffffffu);
/* 5061fc: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 5061ff: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 506200: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 506202: jl 0x5061f5 */
  if ((sf != of)) goto L_5061f5;
L_506204: /* 506204: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 506207: xor edx, edx */
  edx = 0;
/* 506209: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 50620b: jle 0x50623f */
  if ((zf || sf != of)) goto L_50623f;
L_50620d: /* 50620d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50620e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 50620f: xor ebp, ebp */
  ebp = 0;
L_506211: /* 506211: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 506213: mov eax, dword ptr [ecx + ebp + 4] */
  eax = R32((uint32_t)(ecx + ebp + 0x4u));
/* 506217: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 506219: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50621b: je 0x506222 */
  if (zf) goto L_506222;
L_50621d: /* 50621d: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 506220: jmp 0x506224 */
  goto L_506224;
L_506222: /* 506222: xor ebx, ebx */
  ebx = 0;
L_506224: /* 506224: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 506227: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 506228: and eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 50622a: mov ebx, dword ptr [edi + eax*4] */
  ebx = R32((uint32_t)(edi + eax*4));
/* 50622d: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 50622f: mov dword ptr [edi + eax*4], edx */
  W32((uint32_t)(edi + eax*4), edx);
/* 506232: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 506235: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 506236: add ebp, 0xc */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 506239: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50623b: jl 0x506211 */
  if ((sf != of)) goto L_506211;
L_50623d: /* 50623d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50623e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_50623f: /* 50623f: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 506242: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 506244: je 0x506252 */
  if (zf) goto L_506252;
L_506246: /* 506246: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 50624c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 50624e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50624f: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x506252u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_506252: /* 506252: mov dword ptr [esi + 0xc], edi */
  W32((uint32_t)(esi + 0xcu), edi);
/* 506255: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 506256: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 506257: ret  */
  esp += 4; SPILL(); return;
}

void f_506290(void) {
  LOAD_REGS();
L_506290: /* 506290: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 506291: mov esi, ecx */
  esi = ecx;
/* 506293: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 506296: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 506297: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 50629a: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 50629d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50629f: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 5062a2: jle 0x5062c0 */
  if ((zf || sf != of)) goto L_5062c0;
L_5062a4: /* 5062a4: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 5062a7: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 5062a8: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 5062ab: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5062ad: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 5062b0: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 5062b4: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 5062b6: mov ecx, esi */
  ecx = esi;
/* 5062b8: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 5062bb: call 0x4e4502 */
  esp -= 4; W32(esp, 0x5062c0u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_5062c0: /* 5062c0: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 5062c2: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 5062c5: lea edi, [edx + ecx*4] */
  edi = (uint32_t)(edx + ecx*4);
/* 5062c8: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5062ca: je 0x5062e0 */
  if (zf) goto L_5062e0;
L_5062cc: /* 5062cc: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 5062d0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 5062d2: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 5062d6: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 5062d9: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 5062db: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 5062de: jmp 0x5062e2 */
  goto L_5062e2;
L_5062e0: /* 5062e0: xor edi, edi */
  edi = 0;
L_5062e2: /* 5062e2: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 5062e5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5062e7: je 0x5062ee */
  if (zf) goto L_5062ee;
L_5062e9: /* 5062e9: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 5062ec: jmp 0x5062f0 */
  goto L_5062f0;
L_5062ee: /* 5062ee: xor ecx, ecx */
  ecx = 0;
L_5062f0: /* 5062f0: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 5062f3: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 5062f4: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 5062f6: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 5062f9: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 5062fc: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 5062fe: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 506301: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 506304: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 506305: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
/* 506308: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 50630b: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 50630e: lea ecx, [eax + eax + 8] */
  ecx = (uint32_t)(eax + eax + 0x8u);
/* 506312: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 506314: jge 0x506323 */
  if ((sf == of)) goto L_506323;
L_506316: /* 506316: lea edx, [eax + eax] */
  edx = (uint32_t)(eax + eax);
/* 506319: mov ecx, esi */
  ecx = esi;
/* 50631b: mov dword ptr [esi + 0x10], edx */
  W32((uint32_t)(esi + 0x10u), edx);
/* 50631e: call 0x4e2496 */
  esp -= 4; W32(esp, 0x506323u); SPILL(); f_4e2496(); if (g_unwind) return; RELOAD();
L_506323: /* 506323: lea eax, [edi + 8] */
  eax = (uint32_t)(edi + 0x8u);
/* 506326: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 506327: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 506328: ret 8 */
  esp += 12; SPILL(); return;
}

void f_506360(void) {
  LOAD_REGS();
L_506360: /* 506360: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 506361: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 506362: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 506363: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 506367: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 506369: mov esi, ecx */
  esi = ecx;
/* 50636b: jge 0x506384 */
  if ((sf == of)) goto L_506384;
L_50636d: /* 50636d: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 506372: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 506377: push 0x5a3844 */
  { uint32_t v = 0x5a3844u; esp -= 4; W32(esp, v); }
/* 50637c: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x506381u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 506381: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_506384: /* 506384: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 506387: jle 0x5063a0 */
  if ((zf || sf != of)) goto L_5063a0;
L_506389: /* 506389: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 50638e: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 506393: push 0x5a3830 */
  { uint32_t v = 0x5a3830u; esp -= 4; W32(esp, v); }
/* 506398: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x50639du); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 50639d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5063a0: /* 5063a0: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 5063a4: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 5063a7: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 5063aa: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5063ac: jle 0x5063c5 */
  if ((zf || sf != of)) goto L_5063c5;
L_5063ae: /* 5063ae: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 5063b3: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 5063b8: push 0x5a3814 */
  { uint32_t v = 0x5a3814u; esp -= 4; W32(esp, v); }
/* 5063bd: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x5063c2u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 5063c2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5063c5: /* 5063c5: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 5063c7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5063c8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5063c9: mov ecx, esi */
  ecx = esi;
/* 5063cb: call 0x4e438b */
  esp -= 4; W32(esp, 0x5063d0u); SPILL(); f_4e438b(); if (g_unwind) return; RELOAD();
/* 5063d0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5063d1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5063d2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5063d3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_506400(void) {
  LOAD_REGS();
L_506400: /* 506400: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 506404: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 506405: mov esi, ecx */
  esi = ecx;
/* 506407: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 506408: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 50640b: call 0x4e13de */
  esp -= 4; W32(esp, 0x506410u); SPILL(); f_4e13de(); if (g_unwind) return; RELOAD();
/* 506410: mov dword ptr [esi], 0x56b12c */
  W32((uint32_t)(esi), 0x56b12cu);
/* 506416: mov eax, esi */
  eax = esi;
/* 506418: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 506419: ret 4 */
  esp += 8; SPILL(); return;
}

void f_506430(void) {
  LOAD_REGS();
L_506430: /* 506430: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 506434: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 506435: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 506438: call 0x4e180c */
  esp -= 4; W32(esp, 0x50643du); SPILL(); f_4e180c(); if (g_unwind) return; RELOAD();
/* 50643d: ret 8 */
  esp += 12; SPILL(); return;
}

void f_506450(void) {
  LOAD_REGS();
L_506450: /* 506450: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 506451: mov esi, ecx */
  esi = ecx;
/* 506453: call 0x4e3913 */
  esp -= 4; W32(esp, 0x506458u); SPILL(); f_4e3913(); if (g_unwind) return; RELOAD();
/* 506458: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 50645d: je 0x50646b */
  if (zf) goto L_50646b;
L_50645f: /* 50645f: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 506465: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 506467: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 506468: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x50646bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_50646b: /* 50646b: mov eax, esi */
  eax = esi;
/* 50646d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50646e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_506490(void) {
  LOAD_REGS();
L_506490: /* 506490: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 506491: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 506495: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 506496: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 506497: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 506498: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
/* 50649a: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50649c: je 0x5064a3 */
  if (zf) goto L_5064a3;
L_50649e: /* 50649e: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 5064a1: jmp 0x5064a5 */
  goto L_5064a5;
L_5064a3: /* 5064a3: xor eax, eax */
  eax = 0;
L_5064a5: /* 5064a5: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 5064a8: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 5064a9: and edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 5064ab: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 5064ae: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 5064b1: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5064b4: je 0x5064d5 */
  if (zf) goto L_5064d5;
L_5064b6: /* 5064b6: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 5064b8: jmp 0x5064c0 */
  goto L_5064c0;
L_5064c0: /* 5064c0: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 5064c3: mov ebp, dword ptr [esi + edx*4 + 4] */
  ebp = R32((uint32_t)(esi + edx*4 + 0x4u));
/* 5064c7: cmp ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5064c9: lea edx, [esi + edx*4] */
  edx = (uint32_t)(esi + edx*4);
/* 5064cc: je 0x5064e7 */
  if (zf) goto L_5064e7;
L_5064ce: /* 5064ce: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 5064d0: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5064d3: jne 0x5064c0 */
  if (!zf) goto L_5064c0;
L_5064d5: /* 5064d5: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 5064d9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5064da: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5064db: call 0x4e1b54 */
  esp -= 4; W32(esp, 0x5064e0u); SPILL(); f_4e1b54(); if (g_unwind) return; RELOAD();
/* 5064e0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5064e1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5064e2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5064e3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5064e4: ret 8 */
  esp += 12; SPILL(); return;
L_5064e7: /* 5064e7: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 5064eb: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 5064ed: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 5064f0: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 5064f3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5064f4: mov dword ptr [esi + eax + 8], edx */
  W32((uint32_t)(esi + eax + 0x8u), edx);
/* 5064f8: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 5064fa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5064fb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5064fc: lea eax, [eax + ecx + 8] */
  eax = (uint32_t)(eax + ecx + 0x8u);
/* 506500: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 506501: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5064ba(void) {
  LOAD_REGS();
L_5064ba: /* 5064ba: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_5064c0: /* 5064c0: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 5064c3: mov ebp, dword ptr [esi + edx*4 + 4] */
  ebp = R32((uint32_t)(esi + edx*4 + 0x4u));
/* 5064c7: cmp ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5064c9: lea edx, [esi + edx*4] */
  edx = (uint32_t)(esi + edx*4);
/* 5064cc: je 0x5064e7 */
  if (zf) goto L_5064e7;
L_5064ce: /* 5064ce: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 5064d0: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5064d3: jne 0x5064c0 */
  if (!zf) goto L_5064c0;
L_5064d5: /* 5064d5: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 5064d9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5064da: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5064db: call 0x4e1b54 */
  esp -= 4; W32(esp, 0x5064e0u); SPILL(); f_4e1b54(); if (g_unwind) return; RELOAD();
/* 5064e0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5064e1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5064e2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5064e3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5064e4: ret 8 */
  esp += 12; SPILL(); return;
L_5064e7: /* 5064e7: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 5064eb: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 5064ed: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 5064f0: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 5064f3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5064f4: mov dword ptr [esi + eax + 8], edx */
  W32((uint32_t)(esi + eax + 0x8u), edx);
/* 5064f8: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 5064fa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5064fb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5064fc: lea eax, [eax + ecx + 8] */
  eax = (uint32_t)(eax + ecx + 0x8u);
/* 506500: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 506501: ret 8 */
  esp += 12; SPILL(); return;
}

void f_506530(void) {
  LOAD_REGS();
L_506530: /* 506530: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 506534: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 506536: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 506537: mov esi, ecx */
  esi = ecx;
/* 506539: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 50653b: mov dword ptr [esi + 4], 0xffffffff */
  W32((uint32_t)(esi + 0x4u), 0xffffffffu);
/* 506542: jne 0x50655b */
  if (!zf) goto L_50655b;
L_506544: /* 506544: push 0x4a3 */
  { uint32_t v = 0x4a3u; esp -= 4; W32(esp, v); }
/* 506549: push 0x5a42b8 */
  { uint32_t v = 0x5a42b8u; esp -= 4; W32(esp, v); }
/* 50654e: push 0x5a42ac */
  { uint32_t v = 0x5a42acu; esp -= 4; W32(esp, v); }
/* 506553: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x506558u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 506558: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50655b: /* 50655b: mov ecx, esi */
  ecx = esi;
/* 50655d: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x506562u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 506562: mov eax, esi */
  eax = esi;
/* 506564: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 506565: ret 4 */
  esp += 8; SPILL(); return;
}

void f_506580(void) {
  LOAD_REGS();
L_506580: /* 506580: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 506582: push 0x556aa8 */
  { uint32_t v = 0x556aa8u; esp -= 4; W32(esp, v); }
/* 506587: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 50658d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50658e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 506595: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 506596: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 506597: mov esi, ecx */
  esi = ecx;
/* 506599: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50659a: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 50659e: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 5065a1: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 5065a3: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 5065ab: jge 0x5065c4 */
  if ((sf == of)) goto L_5065c4;
L_5065ad: /* 5065ad: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 5065b2: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 5065b7: push 0x5a3830 */
  { uint32_t v = 0x5a3830u; esp -= 4; W32(esp, v); }
/* 5065bc: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x5065c1u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 5065c1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5065c4: /* 5065c4: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5065c7: jle 0x5065e0 */
  if ((zf || sf != of)) goto L_5065e0;
L_5065c9: /* 5065c9: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 5065ce: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 5065d3: push 0x5a3814 */
  { uint32_t v = 0x5a3814u; esp -= 4; W32(esp, v); }
/* 5065d8: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x5065ddu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 5065dd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5065e0: /* 5065e0: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 5065e2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5065e3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5065e5: mov ecx, esi */
  ecx = esi;
/* 5065e7: call 0x4e438b */
  esp -= 4; W32(esp, 0x5065ecu); SPILL(); f_4e438b(); if (g_unwind) return; RELOAD();
/* 5065ec: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 5065ee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5065f0: mov dword ptr [esp + 0x14], 0xffffffff */
  W32((uint32_t)(esp + 0x14u), 0xffffffffu);
/* 5065f8: je 0x506606 */
  if (zf) goto L_506606;
L_5065fa: /* 5065fa: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 506600: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 506602: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 506603: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x506606u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_506606: /* 506606: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 50660a: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 506610: mov dword ptr [esi + 8], 0 */
  W32((uint32_t)(esi + 0x8u), 0x0u);
/* 506617: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 50661e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50661f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 506620: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 506627: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50662a: ret  */
  esp += 4; SPILL(); return;
}

void f_506660(void) {
  LOAD_REGS();
L_506660: /* 506660: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 506661: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 506665: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 506667: mov eax, esi */
  eax = esi;
/* 506669: je 0x50667e */
  if (zf) goto L_50667e;
L_50666b: /* 50666b: jmp 0x506670 */
  goto L_506670;
L_506670: /* 506670: cmp eax, 0x5ed6b0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5ed6b0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 506675: je 0x506695 */
  if (zf) goto L_506695;
L_506677: /* 506677: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 50667a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50667c: jne 0x506670 */
  if (!zf) goto L_506670;
L_50667e: /* 50667e: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 506683: push 0x5a4168 */
  { uint32_t v = 0x5a4168u; esp -= 4; W32(esp, v); }
/* 506688: push 0x5a41ac */
  { uint32_t v = 0x5a41acu; esp -= 4; W32(esp, v); }
/* 50668d: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x506692u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 506692: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_506695: /* 506695: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 506699: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50669c: jne 0x5066a3 */
  if (!zf) goto L_5066a3;
L_50669e: /* 50669e: call 0x4e280b */
  esp -= 4; W32(esp, 0x5066a3u); SPILL(); f_4e280b(); if (g_unwind) return; RELOAD();
L_5066a3: /* 5066a3: mov ecx, dword ptr [0x5a0c94] */
  ecx = R32((uint32_t)(0x5a0c94u));
/* 5066a9: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 5066ad: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5066af: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5066b0: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 5066b4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5066b6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5066b7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5066b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5066b9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5066ba: call 0x4e335a */
  esp -= 4; W32(esp, 0x5066bfu); SPILL(); f_4e335a(); if (g_unwind) return; RELOAD();
/* 5066bf: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5066c2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5066c3: ret  */
  esp += 4; SPILL(); return;
}

void f_50666d(void) {
  LOAD_REGS();
L_50666d: /* 50666d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_506670: /* 506670: cmp eax, 0x5ed6b0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5ed6b0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 506675: je 0x506695 */
  if (zf) goto L_506695;
L_506677: /* 506677: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 50667a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50667c: jne 0x506670 */
  if (!zf) goto L_506670;
L_50667e: /* 50667e: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 506683: push 0x5a4168 */
  { uint32_t v = 0x5a4168u; esp -= 4; W32(esp, v); }
/* 506688: push 0x5a41ac */
  { uint32_t v = 0x5a41acu; esp -= 4; W32(esp, v); }
/* 50668d: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x506692u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 506692: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_506695: /* 506695: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 506699: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50669c: jne 0x5066a3 */
  if (!zf) goto L_5066a3;
L_50669e: /* 50669e: call 0x4e280b */
  esp -= 4; W32(esp, 0x5066a3u); SPILL(); f_4e280b(); if (g_unwind) return; RELOAD();
L_5066a3: /* 5066a3: mov ecx, dword ptr [0x5a0c94] */
  ecx = R32((uint32_t)(0x5a0c94u));
/* 5066a9: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 5066ad: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5066af: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5066b0: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 5066b4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5066b6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5066b7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5066b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5066b9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5066ba: call 0x4e335a */
  esp -= 4; W32(esp, 0x5066bfu); SPILL(); f_4e335a(); if (g_unwind) return; RELOAD();
/* 5066bf: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5066c2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5066c3: ret  */
  esp += 4; SPILL(); return;
}

void f_5066f0(void) {
  LOAD_REGS();
L_5066f0: /* 5066f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 5066f1: mov ebp, esp */
  ebp = esp;
/* 5066f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5066f5: push 0x556ac0 */
  { uint32_t v = 0x556ac0u; esp -= 4; W32(esp, v); }
/* 5066fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 506700: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 506701: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 506708: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 50670b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50670c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50670d: mov esi, dword ptr [ecx + 0x24] */
  esi = R32((uint32_t)(ecx + 0x24u));
/* 506710: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 506711: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 506714: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 506716: push 0x5a3d80 */
  { uint32_t v = 0x5a3d80u; esp -= 4; W32(esp, v); }
/* 50671b: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 50671e: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 506725: call 0x4e36a7 */
  esp -= 4; W32(esp, 0x50672au); SPILL(); f_4e36a7(); if (g_unwind) return; RELOAD();
/* 50672a: mov eax, dword ptr [0x5a0c94] */
  eax = R32((uint32_t)(0x5a0c94u));
/* 50672f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 506732: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 506734: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 506736: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 506737: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 506739: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 50673b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50673c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50673d: push 0x6a60e0 */
  { uint32_t v = 0x6a60e0u; esp -= 4; W32(esp, v); }
/* 506742: call 0x4e2b1c */
  esp -= 4; W32(esp, 0x506747u); SPILL(); f_4e2b1c(); if (g_unwind) return; RELOAD();
/* 506747: mov esi, eax */
  esi = eax;
/* 506749: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50674c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50674e: je 0x50676a */
  if (zf) goto L_50676a;
L_506750: /* 506750: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 506752: push 0x5ed6a8 */
  { uint32_t v = 0x5ed6a8u; esp -= 4; W32(esp, v); }
/* 506757: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 506759: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50675b: mov ecx, esi */
  ecx = esi;
/* 50675d: call 0x4e2c89 */
  esp -= 4; W32(esp, 0x506762u); SPILL(); f_4e2c89(); if (g_unwind) return; RELOAD();
/* 506762: mov dword ptr [esi], 0x56a3e8 */
  W32((uint32_t)(esi), 0x56a3e8u);
/* 506768: jmp 0x50676c */
  goto L_50676c;
L_50676a: /* 50676a: xor esi, esi */
  esi = 0;
L_50676c: /* 50676c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 50676e: push 0x5a3d90 */
  { uint32_t v = 0x5a3d90u; esp -= 4; W32(esp, v); }
/* 506773: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 506776: call 0x4e36a7 */
  esp -= 4; W32(esp, 0x50677bu); SPILL(); f_4e36a7(); if (g_unwind) return; RELOAD();
/* 50677b: mov edx, dword ptr [0x5a0c94] */
  edx = R32((uint32_t)(0x5a0c94u));
/* 506781: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 506784: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 506786: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 506788: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 506789: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50678b: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 50678d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50678e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50678f: push 0x6a6610 */
  { uint32_t v = 0x6a6610u; esp -= 4; W32(esp, v); }
/* 506794: call 0x4e2b1c */
  esp -= 4; W32(esp, 0x506799u); SPILL(); f_4e2b1c(); if (g_unwind) return; RELOAD();
/* 506799: mov edi, eax */
  edi = eax;
/* 50679b: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50679e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5067a0: je 0x5067c3 */
  if (zf) goto L_5067c3;
L_5067a2: /* 5067a2: mov ecx, edi */
  ecx = edi;
/* 5067a4: call 0x4e2d97 */
  esp -= 4; W32(esp, 0x5067a9u); SPILL(); f_4e2d97(); if (g_unwind) return; RELOAD();
/* 5067a9: mov dword ptr [edi], 0x56a228 */
  W32((uint32_t)(edi), 0x56a228u);
/* 5067af: mov dword ptr [esi + 0x6c], edi */
  W32((uint32_t)(esi + 0x6cu), edi);
/* 5067b2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5067b5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5067bc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5067bd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5067be: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5067bf: mov esp, ebp */
  esp = ebp;
/* 5067c1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5067c2: ret  */
  esp += 4; SPILL(); return;
L_5067c3: /* 5067c3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5067c6: xor edi, edi */
  edi = 0;
/* 5067c8: mov dword ptr [esi + 0x6c], edi */
  W32((uint32_t)(esi + 0x6cu), edi);
/* 5067cb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5067cc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5067cd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5067d4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5067d5: mov esp, ebp */
  esp = ebp;
/* 5067d7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5067d8: ret  */
  esp += 4; SPILL(); return;
}

void f_5067d9(void) {
  LOAD_REGS();
L_5067d9: /* 5067d9: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 5067dc: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 5067e1: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 5067e4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5067e5: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 5067e8: call 0x554df6 */
  esp -= 4; W32(esp, 0x5067edu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_5067ed(); return;
}

void f_5067ed(void) {
  LOAD_REGS();
L_5067ed: /* 5067ed: push 0x56b138 */
  { uint32_t v = 0x56b138u; esp -= 4; W32(esp, v); }
/* 5067f2: push 0x5a3dac */
  { uint32_t v = 0x5a3dacu; esp -= 4; W32(esp, v); }
/* 5067f7: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x5067fcu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 5067fc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5067ff: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 506801: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 506803: call 0x554df6 */
  esp -= 4; W32(esp, 0x506808u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_506808: guest_badaddr(0x506808); return;
}

void f_506860(void) {
  LOAD_REGS();
L_506860: /* 506860: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 506862: je 0x50686c */
  if (zf) goto L_50686c;
L_506864: /* 506864: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 506867: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
L_50686c: /* 50686c: xor ecx, ecx */
  ecx = 0;
/* 50686e: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_506890(void) {
  LOAD_REGS();
L_506890: /* 506890: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 506891: mov ebp, esp */
  ebp = esp;
/* 506893: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 506895: push 0x556ad0 */
  { uint32_t v = 0x556ad0u; esp -= 4; W32(esp, v); }
/* 50689a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 5068a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5068a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 5068a8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5068ab: mov edx, dword ptr [ecx + 0x3c] */
  edx = R32((uint32_t)(ecx + 0x3cu));
/* 5068ae: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5068af: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5068b0: lea esi, [ecx + 0x2c] */
  esi = (uint32_t)(ecx + 0x2cu);
/* 5068b3: mov dword ptr [ecx + 0x28], 0x6a0f20 */
  W32((uint32_t)(ecx + 0x28u), 0x6a0f20u);
/* 5068ba: or edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 5068bd: mov dword ptr [ecx + 0x3c], edx */
  W32((uint32_t)(ecx + 0x3cu), edx);
/* 5068c0: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 5068c3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5068c4: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 5068c7: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 5068ca: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5068cc: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 5068cf: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 5068d6: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 5068d9: jle 0x5068f7 */
  if ((zf || sf != of)) goto L_5068f7;
L_5068db: /* 5068db: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 5068de: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 5068df: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 5068e2: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5068e4: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 5068e7: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 5068eb: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 5068ed: mov ecx, esi */
  ecx = esi;
/* 5068ef: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 5068f2: call 0x4e4502 */
  esp -= 4; W32(esp, 0x5068f7u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_5068f7: /* 5068f7: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 5068f9: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 5068fc: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 5068ff: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 506901: je 0x50690d */
  if (zf) goto L_50690d;
L_506903: /* 506903: push 0x5a40bc */
  { uint32_t v = 0x5a40bcu; esp -= 4; W32(esp, v); }
/* 506908: call 0x4e13de */
  esp -= 4; W32(esp, 0x50690du); SPILL(); f_4e13de(); if (g_unwind) return; RELOAD();
L_50690d: /* 50690d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 506910: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 506911: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 506912: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 506919: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50691a: mov esp, ebp */
  esp = ebp;
/* 50691c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50691d: ret  */
  esp += 4; SPILL(); return;
}

void f_50691e(void) {
  LOAD_REGS();
L_50691e: /* 50691e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 506921: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 506926: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 506929: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50692a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 50692d: call 0x554df6 */
  esp -= 4; W32(esp, 0x506932u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_506932(); return;
}

void f_506932(void) {
  LOAD_REGS();
L_506932: /* 506932: push 0x56b180 */
  { uint32_t v = 0x56b180u; esp -= 4; W32(esp, v); }
/* 506937: push 0x5a40c4 */
  { uint32_t v = 0x5a40c4u; esp -= 4; W32(esp, v); }
/* 50693c: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x506941u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 506941: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 506944: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 506946: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 506948: call 0x554df6 */
  esp -= 4; W32(esp, 0x50694du); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_50694d: guest_badaddr(0x50694d); return;
}

void f_506980(void) {
  LOAD_REGS();
L_506980: /* 506980: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 506982: push 0x556ae8 */
  { uint32_t v = 0x556ae8u; esp -= 4; W32(esp, v); }
/* 506987: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 50698d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50698e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 506995: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 506996: xor eax, eax */
  eax = 0;
/* 506998: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 506999: mov esi, ecx */
  esi = ecx;
/* 50699b: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 50699f: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 5069a1: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 5069a4: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 5069a7: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 5069ab: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5069ae: mov dword ptr [esi + 0x10], 8 */
  W32((uint32_t)(esi + 0x10u), 0x8u);
/* 5069b5: call 0x4e2496 */
  esp -= 4; W32(esp, 0x5069bau); SPILL(); f_4e2496(); if (g_unwind) return; RELOAD();
/* 5069ba: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 5069be: mov eax, esi */
  eax = esi;
/* 5069c0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5069c1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5069c8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5069cb: ret  */
  esp += 4; SPILL(); return;
}

void f_5069f0(void) {
  LOAD_REGS();
L_5069f0: /* 5069f0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5069f2: push 0x556b08 */
  { uint32_t v = 0x556b08u; esp -= 4; W32(esp, v); }
/* 5069f7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 5069fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5069fe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 506a05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 506a06: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 506a07: mov esi, ecx */
  esi = ecx;
/* 506a09: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 506a0d: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 506a10: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 506a12: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 506a1a: je 0x506a28 */
  if (zf) goto L_506a28;
L_506a1c: /* 506a1c: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 506a22: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 506a24: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 506a25: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x506a28u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_506a28: /* 506a28: mov ecx, esi */
  ecx = esi;
/* 506a2a: mov dword ptr [esi + 0xc], 0 */
  W32((uint32_t)(esi + 0xcu), 0x0u);
/* 506a31: mov dword ptr [esi + 0x10], 0 */
  W32((uint32_t)(esi + 0x10u), 0x0u);
/* 506a38: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 506a40: call 0x4e349a */
  esp -= 4; W32(esp, 0x506a45u); SPILL(); f_4e349a(); if (g_unwind) return; RELOAD();
/* 506a45: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 506a49: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 506a4a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 506a51: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 506a54: ret  */
  esp += 4; SPILL(); return;
}

void f_506a80(void) {
  LOAD_REGS();
L_506a80: /* 506a80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 506a81: mov esi, ecx */
  esi = ecx;
/* 506a83: mov dword ptr [esi], 0x5f0d80 */
  W32((uint32_t)(esi), 0x5f0d80u);
/* 506a89: mov dword ptr [esi + 4], 0xffffffff */
  W32((uint32_t)(esi + 0x4u), 0xffffffffu);
/* 506a90: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x506a95u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 506a95: mov eax, esi */
  eax = esi;
/* 506a97: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 506a98: ret  */
  esp += 4; SPILL(); return;
}

void f_506ab0(void) {
  LOAD_REGS();
L_506ab0: /* 506ab0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 506ab2: push 0x556b28 */
  { uint32_t v = 0x556b28u; esp -= 4; W32(esp, v); }
/* 506ab7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 506abd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 506abe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 506ac5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 506ac6: xor eax, eax */
  eax = 0;
/* 506ac8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 506ac9: mov esi, ecx */
  esi = ecx;
/* 506acb: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 506acf: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 506ad1: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 506ad4: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 506ad7: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 506adb: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 506ade: mov dword ptr [esi + 0x10], 8 */
  W32((uint32_t)(esi + 0x10u), 0x8u);
/* 506ae5: call 0x4e2496 */
  esp -= 4; W32(esp, 0x506aeau); SPILL(); f_4e2496(); if (g_unwind) return; RELOAD();
/* 506aea: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 506aee: mov eax, esi */
  eax = esi;
/* 506af0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 506af1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 506af8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 506afb: ret  */
  esp += 4; SPILL(); return;
}

void f_506b20(void) {
  LOAD_REGS();
L_506b20: /* 506b20: jmp 0x4e425f */
  SPILL(); f_4e425f(); return;
}

void f_506b40(void) {
  LOAD_REGS();
L_506b40: /* 506b40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 506b41: mov ebp, esp */
  ebp = esp;
/* 506b43: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 506b45: push 0x556b40 */
  { uint32_t v = 0x556b40u; esp -= 4; W32(esp, v); }
/* 506b4a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 506b50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 506b51: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 506b58: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 506b5b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 506b5c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 506b5d: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 506b60: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 506b63: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 506b64: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 506b67: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 506b69: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 506b6c: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 506b6f: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 506b72: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 506b73: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 506b76: lea ebx, [esi + 4] */
  ebx = (uint32_t)(esi + 0x4u);
/* 506b79: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 506b7c: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 506b7f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 506b80: mov ecx, edi */
  ecx = edi;
/* 506b82: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 506b89: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x506b8cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 506b8c: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 506b8f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 506b91: je 0x506c29 */
  if (zf) goto L_506c29;
L_506b97: /* 506b97: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 506b9a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 506b9b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 506b9c: call 0x4e2f2c */
  esp -= 4; W32(esp, 0x506ba1u); SPILL(); f_4e2f2c(); if (g_unwind) return; RELOAD();
/* 506ba1: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 506ba4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 506ba7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 506ba8: mov ecx, esi */
  ecx = esi;
/* 506baa: call 0x4e21ad */
  esp -= 4; W32(esp, 0x506bafu); SPILL(); f_4e21ad(); if (g_unwind) return; RELOAD();
/* 506baf: mov dword ptr [ebp + 0xc], 0 */
  W32((uint32_t)(ebp + 0xcu), 0x0u);
/* 506bb6: jmp 0x506bc0 */
  goto L_506bc0;
L_506bc0: /* 506bc0: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 506bc3: cmp ecx, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 506bc6: jge 0x506c54 */
  if ((sf == of)) goto L_506c54;
L_506bcc: /* 506bcc: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
/* 506bce: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 506bd1: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 506bd4: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 506bd6: mov dword ptr [ebx], ecx */
  W32((uint32_t)(ebx), ecx);
/* 506bd8: jle 0x506bf6 */
  if ((zf || sf != of)) goto L_506bf6;
L_506bda: /* 506bda: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 506bdd: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 506bde: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 506be1: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 506be3: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 506be6: lea edx, [eax + ecx + 0x20] */
  edx = (uint32_t)(eax + ecx + 0x20u);
/* 506bea: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 506bec: mov ecx, esi */
  ecx = esi;
/* 506bee: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 506bf1: call 0x4e4502 */
  esp -= 4; W32(esp, 0x506bf6u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_506bf6: /* 506bf6: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 506bf8: lea eax, [edi + edi*2] */
  eax = (uint32_t)(edi + edi*2);
/* 506bfb: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 506bfe: xor ecx, ecx */
  ecx = 0;
/* 506c00: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 506c02: je 0x506c0e */
  if (zf) goto L_506c0e;
L_506c04: /* 506c04: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 506c06: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 506c09: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 506c0c: jmp 0x506c10 */
  goto L_506c10;
L_506c0e: /* 506c0e: xor eax, eax */
  eax = 0;
L_506c10: /* 506c10: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 506c13: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 506c14: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 506c15: call 0x4e1451 */
  esp -= 4; W32(esp, 0x506c1au); SPILL(); f_4e1451(); if (g_unwind) return; RELOAD();
/* 506c1a: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 506c1d: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 506c20: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 506c23: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 506c24: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 506c27: jmp 0x506bc0 */
  goto L_506bc0;
L_506c29: /* 506c29: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 506c2a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 506c2b: call 0x4e2f2c */
  esp -= 4; W32(esp, 0x506c30u); SPILL(); f_4e2f2c(); if (g_unwind) return; RELOAD();
/* 506c30: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 506c33: xor edi, edi */
  edi = 0;
L_506c35: /* 506c35: cmp edi, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 506c37: jge 0x506c51 */
  if ((sf == of)) goto L_506c51;
L_506c39: /* 506c39: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 506c3b: lea eax, [edi + edi*2] */
  eax = (uint32_t)(edi + edi*2);
/* 506c3e: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 506c41: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 506c44: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 506c45: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 506c46: call 0x4e1451 */
  esp -= 4; W32(esp, 0x506c4bu); SPILL(); f_4e1451(); if (g_unwind) return; RELOAD();
/* 506c4b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 506c4e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 506c4f: jmp 0x506c35 */
  goto L_506c35;
L_506c51: /* 506c51: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
L_506c54: /* 506c54: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 506c57: mov eax, edi */
  eax = edi;
/* 506c59: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 506c5a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 506c5b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 506c62: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 506c63: mov esp, ebp */
  esp = ebp;
/* 506c65: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 506c66: ret  */
  esp += 4; SPILL(); return;
}

void f_506bb8(void) {
  LOAD_REGS();
L_506bb8: /* 506bb8: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 506bbf: nop  */
L_506bc0: /* 506bc0: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 506bc3: cmp ecx, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 506bc6: jge 0x506c54 */
  if ((sf == of)) goto L_506c54;
L_506bcc: /* 506bcc: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
/* 506bce: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 506bd1: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 506bd4: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 506bd6: mov dword ptr [ebx], ecx */
  W32((uint32_t)(ebx), ecx);
/* 506bd8: jle 0x506bf6 */
  if ((zf || sf != of)) goto L_506bf6;
L_506bda: /* 506bda: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 506bdd: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 506bde: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 506be1: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 506be3: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 506be6: lea edx, [eax + ecx + 0x20] */
  edx = (uint32_t)(eax + ecx + 0x20u);
/* 506bea: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 506bec: mov ecx, esi */
  ecx = esi;
/* 506bee: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 506bf1: call 0x4e4502 */
  esp -= 4; W32(esp, 0x506bf6u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_506bf6: /* 506bf6: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 506bf8: lea eax, [edi + edi*2] */
  eax = (uint32_t)(edi + edi*2);
/* 506bfb: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 506bfe: xor ecx, ecx */
  ecx = 0;
/* 506c00: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 506c02: je 0x506c0e */
  if (zf) goto L_506c0e;
L_506c04: /* 506c04: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 506c06: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 506c09: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 506c0c: jmp 0x506c10 */
  goto L_506c10;
L_506c0e: /* 506c0e: xor eax, eax */
  eax = 0;
L_506c10: /* 506c10: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 506c13: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 506c14: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 506c15: call 0x4e1451 */
  esp -= 4; W32(esp, 0x506c1au); SPILL(); f_4e1451(); if (g_unwind) return; RELOAD();
/* 506c1a: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 506c1d: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 506c20: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 506c23: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 506c24: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 506c27: jmp 0x506bc0 */
  goto L_506bc0;
L_506c54: /* 506c54: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 506c57: mov eax, edi */
  eax = edi;
/* 506c59: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 506c5a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 506c5b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 506c62: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 506c63: mov esp, ebp */
  esp = ebp;
/* 506c65: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 506c66: ret  */
  esp += 4; SPILL(); return;
}

void f_506c67(void) {
  LOAD_REGS();
L_506c67: /* 506c67: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 506c6a: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 506c6f: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 506c72: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 506c73: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 506c76: call 0x554df6 */
  esp -= 4; W32(esp, 0x506c7bu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_506c7b(); return;
}

void f_506c7b(void) {
  LOAD_REGS();
L_506c7b: /* 506c7b: push 0x56b1dc */
  { uint32_t v = 0x56b1dcu; esp -= 4; W32(esp, v); }
/* 506c80: push 0x5a376c */
  { uint32_t v = 0x5a376cu; esp -= 4; W32(esp, v); }
/* 506c85: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x506c8au); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 506c8a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 506c8d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 506c8f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 506c91: call 0x554df6 */
  esp -= 4; W32(esp, 0x506c96u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_506c96: guest_badaddr(0x506c96); return;
}

void f_506d00(void) {
  LOAD_REGS();
L_506d00: /* 506d00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 506d01: mov esi, ecx */
  esi = ecx;
/* 506d03: call 0x4e245a */
  esp -= 4; W32(esp, 0x506d08u); SPILL(); f_4e245a(); if (g_unwind) return; RELOAD();
/* 506d08: mov dword ptr [esi], 0x56abe0 */
  W32((uint32_t)(esi), 0x56abe0u);
/* 506d0e: mov eax, esi */
  eax = esi;
/* 506d10: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 506d11: ret  */
  esp += 4; SPILL(); return;
}

void f_506d30(void) {
  LOAD_REGS();
L_506d30: /* 506d30: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 506d31: mov ebp, esp */
  ebp = esp;
/* 506d33: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 506d35: push 0x556b50 */
  { uint32_t v = 0x556b50u; esp -= 4; W32(esp, v); }
/* 506d3a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 506d40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 506d41: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 506d48: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 506d4b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 506d4c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 506d4d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 506d4e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 506d51: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 506d54: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 506d55: mov esi, ecx */
  esi = ecx;
/* 506d57: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 506d5e: call 0x4e1519 */
  esp -= 4; W32(esp, 0x506d63u); SPILL(); f_4e1519(); if (g_unwind) return; RELOAD();
/* 506d63: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 506d65: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 506d68: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 506d69: mov ecx, edi */
  ecx = edi;
/* 506d6b: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x506d6eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 506d6e: add esi, 0x2c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 506d71: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 506d72: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 506d73: call 0x4e3625 */
  esp -= 4; W32(esp, 0x506d78u); SPILL(); f_4e3625(); if (g_unwind) return; RELOAD();
/* 506d78: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 506d7b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 506d7e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 506d7f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 506d80: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 506d87: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 506d88: mov esp, ebp */
  esp = ebp;
/* 506d8a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 506d8b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_506d8e(void) {
  LOAD_REGS();
L_506d8e: /* 506d8e: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 506d91: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 506d96: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 506d99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 506d9a: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 506d9d: call 0x554df6 */
  esp -= 4; W32(esp, 0x506da2u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_506da2(); return;
}

void f_506da2(void) {
  LOAD_REGS();
L_506da2: /* 506da2: push 0x56b1f4 */
  { uint32_t v = 0x56b1f4u; esp -= 4; W32(esp, v); }
/* 506da7: push 0x5a3db4 */
  { uint32_t v = 0x5a3db4u; esp -= 4; W32(esp, v); }
/* 506dac: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x506db1u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 506db1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 506db4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 506db6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 506db8: call 0x554df6 */
  esp -= 4; W32(esp, 0x506dbdu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_506dbd: guest_badaddr(0x506dbd); return;
}

void f_506df0(void) {
  LOAD_REGS();
L_506df0: /* 506df0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 506df1: mov ebp, esp */
  ebp = esp;
/* 506df3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 506df5: push 0x556b80 */
  { uint32_t v = 0x556b80u; esp -= 4; W32(esp, v); }
/* 506dfa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 506e00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 506e01: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 506e08: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 506e0b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 506e0c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 506e0f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 506e10: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 506e11: xor edi, edi */
  edi = 0;
/* 506e13: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 506e15: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 506e18: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 506e1b: jne 0x506e31 */
  if (!zf) goto L_506e31;
L_506e1d: /* 506e1d: push 0x2e */
  { uint32_t v = 0x2eu; esp -= 4; W32(esp, v); }
/* 506e1f: push 0x5a3dd0 */
  { uint32_t v = 0x5a3dd0u; esp -= 4; W32(esp, v); }
/* 506e24: push 0x5a3de0 */
  { uint32_t v = 0x5a3de0u; esp -= 4; W32(esp, v); }
/* 506e29: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x506e2eu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 506e2e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_506e31: /* 506e31: mov dword ptr [ebp - 0x38], edi */
  W32((uint32_t)(ebp + 0xffffffc8u), edi);
/* 506e34: mov dword ptr [ebp - 0x34], edi */
  W32((uint32_t)(ebp + 0xffffffccu), edi);
/* 506e37: mov dword ptr [ebp - 0x30], edi */
  W32((uint32_t)(ebp + 0xffffffd0u), edi);
/* 506e3a: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 506e3d: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 506e41: mov dword ptr [ebp - 0x2c], edi */
  W32((uint32_t)(ebp + 0xffffffd4u), edi);
/* 506e44: mov dword ptr [ebp - 0x28], 8 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x8u);
/* 506e4b: call 0x4e2496 */
  esp -= 4; W32(esp, 0x506e50u); SPILL(); f_4e2496(); if (g_unwind) return; RELOAD();
/* 506e50: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 506e53: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 506e57: mov dword ptr [ebp - 0x24], 0x5f0d80 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x5f0d80u);
/* 506e5e: mov dword ptr [ebp - 0x20], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffe0u), 0xffffffffu);
/* 506e65: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x506e6au); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 506e6a: mov esi, dword ptr [0x6a0f04] */
  esi = R32((uint32_t)(0x6a0f04u));
L_506e70: /* 506e70: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 506e73: cmp ecx, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 506e79: jge 0x506f8b */
  if ((sf == of)) goto L_506f8b;
L_506e7f: /* 506e7f: mov eax, dword ptr [esi + ecx*4] */
  eax = R32((uint32_t)(esi + ecx*4));
L_506e82: /* 506e82: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 506e84: je 0x506f7e */
  if (zf) goto L_506f7e;
L_506e8a: /* 506e8a: cmp eax, 0x5ed6b0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5ed6b0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 506e8f: je 0x506e96 */
  if (zf) goto L_506e96;
L_506e91: /* 506e91: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 506e94: jmp 0x506e82 */
  goto L_506e82;
L_506e96: /* 506e96: mov esi, dword ptr [esi + ecx*4] */
  esi = R32((uint32_t)(esi + ecx*4));
/* 506e99: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 506e9b: mov edi, dword ptr [esi + 0x4ec] */
  edi = R32((uint32_t)(esi + 0x4ecu));
/* 506ea1: mov ecx, esi */
  ecx = esi;
/* 506ea3: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x506ea6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 506ea6: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 506ea8: je 0x506ec1 */
  if (zf) goto L_506ec1;
L_506eaa: /* 506eaa: push 0x21b */
  { uint32_t v = 0x21bu; esp -= 4; W32(esp, v); }
/* 506eaf: push 0x5a3b00 */
  { uint32_t v = 0x5a3b00u; esp -= 4; W32(esp, v); }
/* 506eb4: push 0x5a3ad4 */
  { uint32_t v = 0x5a3ad4u; esp -= 4; W32(esp, v); }
/* 506eb9: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x506ebeu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 506ebe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_506ec1: /* 506ec1: mov edi, dword ptr [esi + 0x4e8] */
  edi = R32((uint32_t)(esi + 0x4e8u));
/* 506ec7: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 506eca: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 506ecc: je 0x506f76 */
  if (zf) goto L_506f76;
L_506ed2: /* 506ed2: mov eax, dword ptr [ebx + 0x24] */
  eax = R32((uint32_t)(ebx + 0x24u));
L_506ed5: /* 506ed5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 506ed7: je 0x506ee2 */
  if (zf) goto L_506ee2;
L_506ed9: /* 506ed9: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 506edb: je 0x506ef1 */
  if (zf) goto L_506ef1;
L_506edd: /* 506edd: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 506ee0: jmp 0x506ed5 */
  goto L_506ed5;
L_506ee2: /* 506ee2: xor eax, eax */
  eax = 0;
/* 506ee4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 506ee6: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 506ee9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 506eeb: je 0x506f76 */
  if (zf) goto L_506f76;
L_506ef1: /* 506ef1: xor ebx, ebx */
  ebx = 0;
L_506ef3: /* 506ef3: cmp ebx, dword ptr [edi + 0x30] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 506ef6: jge 0x506f73 */
  if ((sf == of)) goto L_506f73;
L_506efc: /* 506efc: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 506eff: lea esi, [ebx + ebx*2] */
  esi = (uint32_t)(ebx + ebx*2);
/* 506f02: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 506f05: mov ecx, dword ptr [eax + esi + 4] */
  ecx = R32((uint32_t)(eax + esi + 0x4u));
/* 506f09: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 506f0b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 506f0d: je 0x506f13 */
  if (zf) goto L_506f13;
L_506f0f: /* 506f0f: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 506f11: jmp 0x506f18 */
  goto L_506f18;
L_506f13: /* 506f13: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_506f18: /* 506f18: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 506f1b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 506f1c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 506f1d: call 0x4e26df */
  esp -= 4; W32(esp, 0x506f22u); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 506f22: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 506f25: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 506f27: je 0x506f51 */
  if (zf) goto L_506f51;
L_506f29: /* 506f29: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 506f2c: mov ecx, dword ptr [eax + esi + 4] */
  ecx = R32((uint32_t)(eax + esi + 0x4u));
/* 506f30: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 506f32: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 506f34: je 0x506f3a */
  if (zf) goto L_506f3a;
L_506f36: /* 506f36: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 506f38: jmp 0x506f3f */
  goto L_506f3f;
L_506f3a: /* 506f3a: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_506f3f: /* 506f3f: push 0x5a3de8 */
  { uint32_t v = 0x5a3de8u; esp -= 4; W32(esp, v); }
/* 506f44: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 506f45: call 0x4e26df */
  esp -= 4; W32(esp, 0x506f4au); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 506f4a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 506f4d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 506f4f: jne 0x506f70 */
  if (!zf) goto L_506f70;
L_506f51: /* 506f51: mov edx, dword ptr [0x6a0f04] */
  edx = R32((uint32_t)(0x6a0f04u));
/* 506f57: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 506f5a: mov ecx, dword ptr [edx + eax*4] */
  ecx = R32((uint32_t)(edx + eax*4));
/* 506f5d: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 506f60: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 506f61: lea eax, [edi + 0x28] */
  eax = (uint32_t)(edi + 0x28u);
/* 506f64: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 506f67: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 506f68: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 506f6b: call 0x4e36c5 */
  esp -= 4; W32(esp, 0x506f70u); SPILL(); f_4e36c5(); if (g_unwind) return; RELOAD();
L_506f70: /* 506f70: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 506f71: jmp 0x506ef3 */
  goto L_506ef3;
L_506f73: /* 506f73: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
L_506f76: /* 506f76: mov esi, dword ptr [0x6a0f04] */
  esi = R32((uint32_t)(0x6a0f04u));
/* 506f7c: xor edi, edi */
  edi = 0;
L_506f7e: /* 506f7e: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 506f81: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x506f86u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 506f86: jmp 0x506e70 */
  goto L_506e70;
L_506f8b: /* 506f8b: mov ecx, dword ptr [ebx + 0x24] */
  ecx = R32((uint32_t)(ebx + 0x24u));
/* 506f8e: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 506f91: mov esi, dword ptr [ebp - 0x2c] */
  esi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 506f94: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 506f97: jmp 0x506fa0 */
  goto L_506fa0;
L_506fa0: /* 506fa0: xor ebx, ebx */
  ebx = 0;
/* 506fa2: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 506fa4: je 0x507077 */
  if (zf) goto L_507077;
L_506faa: /* 506faa: lea eax, [edi - 1] */
  eax = (uint32_t)(edi + 0xffffffffu);
/* 506fad: and eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 506fb0: mov eax, dword ptr [esi + eax*4] */
  eax = R32((uint32_t)(esi + eax*4));
L_506fb3: /* 506fb3: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 506fb6: je 0x50706f */
  if (zf) goto L_50706f;
L_506fbc: /* 506fbc: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 506fbf: cmp dword ptr [edx + eax*4 + 4], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + eax*4 + 0x4u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 506fc3: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 506fc6: jne 0x506ff0 */
  if (!zf) goto L_506ff0;
L_506fc8: /* 506fc8: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 506fcb: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 506fcd: je 0x50706f */
  if (zf) goto L_50706f;
L_506fd3: /* 506fd3: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 506fd5: or edi, 0xffffffff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 506fd8: mov eax, esi */
  eax = esi;
/* 506fda: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_506fe0: /* 506fe0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 506fe2: je 0x506ff4 */
  if (zf) goto L_506ff4;
L_506fe4: /* 506fe4: cmp eax, 0x5ed6b0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5ed6b0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 506fe9: je 0x50700b */
  if (zf) goto L_50700b;
L_506feb: /* 506feb: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 506fee: jmp 0x506fe0 */
  goto L_506fe0;
L_506ff0: /* 506ff0: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 506ff2: jmp 0x506fb3 */
  goto L_506fb3;
L_506ff4: /* 506ff4: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 506ff9: push 0x5a4168 */
  { uint32_t v = 0x5a4168u; esp -= 4; W32(esp, v); }
/* 506ffe: push 0x5a41ac */
  { uint32_t v = 0x5a41acu; esp -= 4; W32(esp, v); }
/* 507003: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x507008u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 507008: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50700b: /* 50700b: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50700e: jne 0x507017 */
  if (!zf) goto L_507017;
L_507010: /* 507010: call 0x4e280b */
  esp -= 4; W32(esp, 0x507015u); SPILL(); f_4e280b(); if (g_unwind) return; RELOAD();
/* 507015: mov edi, eax */
  edi = eax;
L_507017: /* 507017: mov ecx, dword ptr [0x5a0c94] */
  ecx = R32((uint32_t)(0x5a0c94u));
/* 50701d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50701f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 507020: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 507022: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 507024: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 507025: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 507026: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 507027: call 0x4e335a */
  esp -= 4; W32(esp, 0x50702cu); SPILL(); f_4e335a(); if (g_unwind) return; RELOAD();
/* 50702c: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50702f: mov esi, eax */
  esi = eax;
/* 507031: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 507034: xor edi, edi */
  edi = 0;
/* 507036: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 507038: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 50703c: je 0x50704a */
  if (zf) goto L_50704a;
L_50703e: /* 50703e: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 507044: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 507046: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 507047: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x50704au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_50704a: /* 50704a: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 50704d: mov dword ptr [ebp - 0x2c], edi */
  W32((uint32_t)(ebp + 0xffffffd4u), edi);
/* 507050: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 507053: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 507057: call 0x4e349a */
  esp -= 4; W32(esp, 0x50705cu); SPILL(); f_4e349a(); if (g_unwind) return; RELOAD();
/* 50705c: mov eax, esi */
  eax = esi;
/* 50705e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 507061: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 507068: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 507069: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50706a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50706b: mov esp, ebp */
  esp = ebp;
/* 50706d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50706e: ret  */
  esp += 4; SPILL(); return;
L_50706f: /* 50706f: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* 507072: jmp 0x506fa0 */
  goto L_506fa0;
L_507077: /* 507077: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 507079: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 50707d: je 0x50708b */
  if (zf) goto L_50708b;
L_50707f: /* 50707f: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 507085: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 507087: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 507088: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x50708bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_50708b: /* 50708b: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 50708e: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 507091: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 507094: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 507098: call 0x4e349a */
  esp -= 4; W32(esp, 0x50709du); SPILL(); f_4e349a(); if (g_unwind) return; RELOAD();
/* 50709d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5070a0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5070a1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5070a2: xor eax, eax */
  eax = 0;
/* 5070a4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5070ab: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5070ac: mov esp, ebp */
  esp = ebp;
/* 5070ae: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5070af: ret  */
  esp += 4; SPILL(); return;
}

void f_506f99(void) {
  LOAD_REGS();
L_506f99: /* 506f99: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_506fa0: /* 506fa0: xor ebx, ebx */
  ebx = 0;
/* 506fa2: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 506fa4: je 0x507077 */
  if (zf) goto L_507077;
L_506faa: /* 506faa: lea eax, [edi - 1] */
  eax = (uint32_t)(edi + 0xffffffffu);
/* 506fad: and eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 506fb0: mov eax, dword ptr [esi + eax*4] */
  eax = R32((uint32_t)(esi + eax*4));
L_506fb3: /* 506fb3: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 506fb6: je 0x50706f */
  if (zf) goto L_50706f;
L_506fbc: /* 506fbc: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 506fbf: cmp dword ptr [edx + eax*4 + 4], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + eax*4 + 0x4u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 506fc3: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 506fc6: jne 0x506ff0 */
  if (!zf) goto L_506ff0;
L_506fc8: /* 506fc8: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 506fcb: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 506fcd: je 0x50706f */
  if (zf) goto L_50706f;
L_506fd3: /* 506fd3: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 506fd5: or edi, 0xffffffff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 506fd8: mov eax, esi */
  eax = esi;
/* 506fda: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_506fe0: /* 506fe0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 506fe2: je 0x506ff4 */
  if (zf) goto L_506ff4;
L_506fe4: /* 506fe4: cmp eax, 0x5ed6b0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5ed6b0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 506fe9: je 0x50700b */
  if (zf) goto L_50700b;
L_506feb: /* 506feb: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 506fee: jmp 0x506fe0 */
  goto L_506fe0;
L_506ff0: /* 506ff0: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 506ff2: jmp 0x506fb3 */
  goto L_506fb3;
L_506ff4: /* 506ff4: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 506ff9: push 0x5a4168 */
  { uint32_t v = 0x5a4168u; esp -= 4; W32(esp, v); }
/* 506ffe: push 0x5a41ac */
  { uint32_t v = 0x5a41acu; esp -= 4; W32(esp, v); }
/* 507003: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x507008u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 507008: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50700b: /* 50700b: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50700e: jne 0x507017 */
  if (!zf) goto L_507017;
L_507010: /* 507010: call 0x4e280b */
  esp -= 4; W32(esp, 0x507015u); SPILL(); f_4e280b(); if (g_unwind) return; RELOAD();
/* 507015: mov edi, eax */
  edi = eax;
L_507017: /* 507017: mov ecx, dword ptr [0x5a0c94] */
  ecx = R32((uint32_t)(0x5a0c94u));
/* 50701d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50701f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 507020: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 507022: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 507024: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 507025: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 507026: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 507027: call 0x4e335a */
  esp -= 4; W32(esp, 0x50702cu); SPILL(); f_4e335a(); if (g_unwind) return; RELOAD();
/* 50702c: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50702f: mov esi, eax */
  esi = eax;
/* 507031: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 507034: xor edi, edi */
  edi = 0;
/* 507036: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 507038: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 50703c: je 0x50704a */
  if (zf) goto L_50704a;
L_50703e: /* 50703e: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 507044: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 507046: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 507047: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x50704au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_50704a: /* 50704a: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 50704d: mov dword ptr [ebp - 0x2c], edi */
  W32((uint32_t)(ebp + 0xffffffd4u), edi);
/* 507050: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 507053: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 507057: call 0x4e349a */
  esp -= 4; W32(esp, 0x50705cu); SPILL(); f_4e349a(); if (g_unwind) return; RELOAD();
/* 50705c: mov eax, esi */
  eax = esi;
/* 50705e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 507061: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 507068: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 507069: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50706a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50706b: mov esp, ebp */
  esp = ebp;
/* 50706d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50706e: ret  */
  esp += 4; SPILL(); return;
L_50706f: /* 50706f: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* 507072: jmp 0x506fa0 */
  goto L_506fa0;
L_507077: /* 507077: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 507079: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 50707d: je 0x50708b */
  if (zf) goto L_50708b;
L_50707f: /* 50707f: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 507085: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 507087: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 507088: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x50708bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_50708b: /* 50708b: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 50708e: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 507091: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 507094: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 507098: call 0x4e349a */
  esp -= 4; W32(esp, 0x50709du); SPILL(); f_4e349a(); if (g_unwind) return; RELOAD();
/* 50709d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5070a0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5070a1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5070a2: xor eax, eax */
  eax = 0;
/* 5070a4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5070ab: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5070ac: mov esp, ebp */
  esp = ebp;
/* 5070ae: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5070af: ret  */
  esp += 4; SPILL(); return;
}

void f_5070b0(void) {
  LOAD_REGS();
L_5070b0: /* 5070b0: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 5070b3: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 5070b8: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 5070bb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5070bc: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 5070bf: call 0x554df6 */
  esp -= 4; W32(esp, 0x5070c4u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_5070c4(); return;
}

void f_5070c4(void) {
  LOAD_REGS();
L_5070c4: /* 5070c4: push 0x56b228 */
  { uint32_t v = 0x56b228u; esp -= 4; W32(esp, v); }
/* 5070c9: push 0x5a3dec */
  { uint32_t v = 0x5a3decu; esp -= 4; W32(esp, v); }
/* 5070ce: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x5070d3u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 5070d3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5070d6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5070d8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5070da: call 0x554df6 */
  esp -= 4; W32(esp, 0x5070dfu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_5070df: guest_badaddr(0x5070df); return;
}

void f_5071a0(void) {
  LOAD_REGS();
L_5071a0: /* 5071a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 5071a1: mov ebp, esp */
  ebp = esp;
/* 5071a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5071a5: push 0x556ba0 */
  { uint32_t v = 0x556ba0u; esp -= 4; W32(esp, v); }
/* 5071aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 5071b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5071b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 5071b8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5071bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5071bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5071bd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5071be: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 5071c1: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5071c3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 5071c6: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 5071cd: jne 0x5071e3 */
  if (!zf) goto L_5071e3;
L_5071cf: /* 5071cf: push 0x4f */
  { uint32_t v = 0x4fu; esp -= 4; W32(esp, v); }
/* 5071d1: push 0x5a3df4 */
  { uint32_t v = 0x5a3df4u; esp -= 4; W32(esp, v); }
/* 5071d6: push 0x5a3e04 */
  { uint32_t v = 0x5a3e04u; esp -= 4; W32(esp, v); }
/* 5071db: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x5071e0u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 5071e0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5071e3: /* 5071e3: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 5071e6: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5071e8: mov ebx, dword ptr [ebp + 0x14] */
  ebx = R32((uint32_t)(ebp + 0x14u));
/* 5071eb: jne 0x50722c */
  if (!zf) goto L_50722c;
L_5071ed: /* 5071ed: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5071ee: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5071ef: call 0x4e1929 */
  esp -= 4; W32(esp, 0x5071f4u); SPILL(); f_4e1929(); if (g_unwind) return; RELOAD();
/* 5071f4: mov esi, eax */
  esi = eax;
/* 5071f6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5071f9: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5071fb: jne 0x50722c */
  if (!zf) goto L_50722c;
L_5071fd: /* 5071fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5071fe: mov ecx, edi */
  ecx = edi;
/* 507200: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x507205u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 507205: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 507206: mov eax, dword ptr [0x5afee8] */
  eax = R32((uint32_t)(0x5afee8u));
/* 50720b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50720c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50720d: push 0x5a3e0c */
  { uint32_t v = 0x5a3e0cu; esp -= 4; W32(esp, v); }
/* 507212: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 507213: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x507218u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 507218: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50721b: /* 50721b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 50721e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 507225: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 507226: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 507227: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 507228: mov esp, ebp */
  esp = ebp;
/* 50722a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50722b: ret  */
  esp += 4; SPILL(); return;
L_50722c: /* 50722c: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 50722f: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
L_507232: /* 507232: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 507234: je 0x50723f */
  if (zf) goto L_50723f;
L_507236: /* 507236: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 507238: je 0x50725e */
  if (zf) goto L_50725e;
L_50723a: /* 50723a: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 50723d: jmp 0x507232 */
  goto L_507232;
L_50723f: /* 50723f: xor eax, eax */
  eax = 0;
/* 507241: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 507243: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 507246: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 507248: jne 0x50725e */
  if (!zf) goto L_50725e;
L_50724a: /* 50724a: push 0x5a */
  { uint32_t v = 0x5au; esp -= 4; W32(esp, v); }
/* 50724c: push 0x5a3e44 */
  { uint32_t v = 0x5a3e44u; esp -= 4; W32(esp, v); }
/* 507251: push 0x5a3e54 */
  { uint32_t v = 0x5a3e54u; esp -= 4; W32(esp, v); }
/* 507256: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x50725bu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 50725b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50725e: /* 50725e: mov eax, dword ptr [0x5afee8] */
  eax = R32((uint32_t)(0x5afee8u));
/* 507263: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 507266: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 507268: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 507269: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50726a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50726b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50726c: mov ecx, esi */
  ecx = esi;
/* 50726e: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0x507271u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 507271: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 507274: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 507276: jne 0x50721b */
  if (!zf) goto L_50721b;
L_507278: /* 507278: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 50727a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 50727c: mov ecx, esi */
  ecx = esi;
/* 50727e: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x507281u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 507281: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 507284: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 507285: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 507286: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 50728d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50728e: mov esp, ebp */
  esp = ebp;
/* 507290: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 507291: ret  */
  esp += 4; SPILL(); return;
}

void f_507292(void) {
  LOAD_REGS();
L_507292: /* 507292: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 507295: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 50729a: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 50729d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50729e: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 5072a1: call 0x554df6 */
  esp -= 4; W32(esp, 0x5072a6u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_5072a6(); return;
}

void f_5072a6(void) {
  LOAD_REGS();
L_5072a6: /* 5072a6: push 0x56b264 */
  { uint32_t v = 0x56b264u; esp -= 4; W32(esp, v); }
/* 5072ab: push 0x5a3e7c */
  { uint32_t v = 0x5a3e7cu; esp -= 4; W32(esp, v); }
/* 5072b0: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x5072b5u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 5072b5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5072b8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5072ba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5072bc: call 0x554df6 */
  esp -= 4; W32(esp, 0x5072c1u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_5072c1: guest_badaddr(0x5072c1); return;
}

void f_507320(void) {
  LOAD_REGS();
L_507320: /* 507320: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 507321: mov ebp, esp */
  ebp = esp;
/* 507323: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 507325: push 0x556bb0 */
  { uint32_t v = 0x556bb0u; esp -= 4; W32(esp, v); }
/* 50732a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 507330: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 507331: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 507338: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 50733b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50733c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 50733f: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 507341: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 507342: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 507343: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 507346: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 50734d: jne 0x507363 */
  if (!zf) goto L_507363;
L_50734f: /* 50734f: push 0x67 */
  { uint32_t v = 0x67u; esp -= 4; W32(esp, v); }
/* 507351: push 0x5a3e84 */
  { uint32_t v = 0x5a3e84u; esp -= 4; W32(esp, v); }
/* 507356: push 0x5a3e94 */
  { uint32_t v = 0x5a3e94u; esp -= 4; W32(esp, v); }
/* 50735b: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x507360u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 507360: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_507363: /* 507363: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 507366: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 507368: jne 0x5073ab */
  if (!zf) goto L_5073ab;
L_50736a: /* 50736a: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 50736d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50736e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50736f: call 0x4e1929 */
  esp -= 4; W32(esp, 0x507374u); SPILL(); f_4e1929(); if (g_unwind) return; RELOAD();
/* 507374: mov esi, eax */
  esi = eax;
/* 507376: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 507379: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50737b: jne 0x5073ab */
  if (!zf) goto L_5073ab;
L_50737d: /* 50737d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50737e: mov ecx, ebx */
  ecx = ebx;
/* 507380: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x507385u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 507385: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 507386: mov eax, dword ptr [0x5afee8] */
  eax = R32((uint32_t)(0x5afee8u));
/* 50738b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50738c: push 0x5a3e9c */
  { uint32_t v = 0x5a3e9cu; esp -= 4; W32(esp, v); }
/* 507391: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 507392: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x507397u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 507397: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50739a: /* 50739a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 50739d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5073a4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5073a5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5073a6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5073a7: mov esp, ebp */
  esp = ebp;
/* 5073a9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5073aa: ret  */
  esp += 4; SPILL(); return;
L_5073ab: /* 5073ab: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 5073ae: mov eax, dword ptr [ebx + 0x24] */
  eax = R32((uint32_t)(ebx + 0x24u));
L_5073b1: /* 5073b1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5073b3: je 0x5073be */
  if (zf) goto L_5073be;
L_5073b5: /* 5073b5: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5073b7: je 0x5073dd */
  if (zf) goto L_5073dd;
L_5073b9: /* 5073b9: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 5073bc: jmp 0x5073b1 */
  goto L_5073b1;
L_5073be: /* 5073be: xor eax, eax */
  eax = 0;
/* 5073c0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5073c2: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 5073c5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5073c7: jne 0x5073dd */
  if (!zf) goto L_5073dd;
L_5073c9: /* 5073c9: push 0x72 */
  { uint32_t v = 0x72u; esp -= 4; W32(esp, v); }
/* 5073cb: push 0x5a3ed4 */
  { uint32_t v = 0x5a3ed4u; esp -= 4; W32(esp, v); }
/* 5073d0: push 0x5a3ee4 */
  { uint32_t v = 0x5a3ee4u; esp -= 4; W32(esp, v); }
/* 5073d5: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x5073dau); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 5073da: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5073dd: /* 5073dd: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 5073e0: mov edi, dword ptr [esi + 0x38] */
  edi = R32((uint32_t)(esi + 0x38u));
/* 5073e3: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 5073e5: mov dword ptr [esi + 0x38], ecx */
  W32((uint32_t)(esi + 0x38u), ecx);
/* 5073e8: mov eax, dword ptr [0x5afee8] */
  eax = R32((uint32_t)(0x5afee8u));
/* 5073ed: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 5073f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5073f1: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 5073f4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5073f5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5073f6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5073f7: mov ecx, esi */
  ecx = esi;
/* 5073f9: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0x5073fcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5073fc: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 5073ff: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 507401: mov dword ptr [esi + 0x38], edi */
  W32((uint32_t)(esi + 0x38u), edi);
/* 507404: jne 0x50739a */
  if (!zf) goto L_50739a;
L_507406: /* 507406: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 507408: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 50740a: mov ecx, esi */
  ecx = esi;
/* 50740c: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x50740fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50740f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 507412: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 507413: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 507414: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 50741b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50741c: mov esp, ebp */
  esp = ebp;
/* 50741e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50741f: ret  */
  esp += 4; SPILL(); return;
}

void f_507420(void) {
  LOAD_REGS();
L_507420: /* 507420: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 507423: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 507428: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 50742b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50742c: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 50742f: call 0x554df6 */
  esp -= 4; W32(esp, 0x507434u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_507434(); return;
}

void f_507434(void) {
  LOAD_REGS();
L_507434: /* 507434: push 0x56b2a8 */
  { uint32_t v = 0x56b2a8u; esp -= 4; W32(esp, v); }
/* 507439: push 0x5a3f0c */
  { uint32_t v = 0x5a3f0cu; esp -= 4; W32(esp, v); }
/* 50743e: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x507443u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 507443: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 507446: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 507448: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50744a: call 0x554df6 */
  esp -= 4; W32(esp, 0x50744fu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_50744f: guest_badaddr(0x50744f); return;
}

void f_5074a0(void) {
  LOAD_REGS();
L_5074a0: /* 5074a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 5074a1: mov ebp, esp */
  ebp = esp;
/* 5074a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5074a5: push 0x556be3 */
  { uint32_t v = 0x556be3u; esp -= 4; W32(esp, v); }
/* 5074aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 5074b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5074b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 5074b8: sub esp, 0x84 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5074be: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 5074c1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5074c3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5074c4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5074c5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5074c6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 5074c9: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 5074d0: jne 0x5074e9 */
  if (!zf) goto L_5074e9;
L_5074d2: /* 5074d2: push 0x85 */
  { uint32_t v = 0x85u; esp -= 4; W32(esp, v); }
/* 5074d7: push 0x5a3f14 */
  { uint32_t v = 0x5a3f14u; esp -= 4; W32(esp, v); }
/* 5074dc: push 0x5a3f24 */
  { uint32_t v = 0x5a3f24u; esp -= 4; W32(esp, v); }
/* 5074e1: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x5074e6u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 5074e6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5074e9: /* 5074e9: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 5074ec: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 5074ef: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5074f0: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 5074f3: call 0x4e3d82 */
  esp -= 4; W32(esp, 0x5074f8u); SPILL(); f_4e3d82(); if (g_unwind) return; RELOAD();
/* 5074f8: mov esi, eax */
  esi = eax;
/* 5074fa: mov eax, ebx */
  eax = ebx;
/* 5074fc: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5074ff: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 507501: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 507508: jne 0x507552 */
  if (!zf) goto L_507552;
L_50750a: /* 50750a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 50750d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50750e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50750f: call 0x4e1929 */
  esp -= 4; W32(esp, 0x507514u); SPILL(); f_4e1929(); if (g_unwind) return; RELOAD();
/* 507514: mov ebx, eax */
  ebx = eax;
/* 507516: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 507519: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50751b: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 50751e: jne 0x507552 */
  if (!zf) goto L_507552;
L_507520: /* 507520: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 507523: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 507524: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x507529u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 507529: mov ecx, dword ptr [0x5afee8] */
  ecx = R32((uint32_t)(0x5afee8u));
/* 50752f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 507530: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 507531: push 0x5a3f2c */
  { uint32_t v = 0x5a3f2cu; esp -= 4; W32(esp, v); }
/* 507536: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 507537: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x50753cu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 50753c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50753f: xor eax, eax */
  eax = 0;
/* 507541: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 507544: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 50754b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50754c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50754d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50754e: mov esp, ebp */
  esp = ebp;
/* 507550: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 507551: ret  */
  esp += 4; SPILL(); return;
L_507552: /* 507552: test byte ptr [ebx + 0x3c], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x3cu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 507556: je 0x507715 */
  if (zf) goto L_507715;
L_50755c: /* 50755c: push 0x5ed6ac */
  { uint32_t v = 0x5ed6acu; esp -= 4; W32(esp, v); }
/* 507561: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 507564: call 0x4e13de */
  esp -= 4; W32(esp, 0x507569u); SPILL(); f_4e13de(); if (g_unwind) return; RELOAD();
/* 507569: mov dword ptr [ebp - 0x3c], 0x56b12c */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x56b12cu);
/* 507570: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 507573: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 507575: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 507576: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 507579: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50757a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50757b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50757c: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 507580: call 0x4e4499 */
  esp -= 4; W32(esp, 0x507585u); SPILL(); f_4e4499(); if (g_unwind) return; RELOAD();
/* 507585: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 507588: xor esi, esi */
  esi = 0;
/* 50758a: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50758d: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50758f: je 0x507655 */
  if (zf) goto L_507655;
L_507595: /* 507595: mov dword ptr [ebp - 0x2c], esi */
  W32((uint32_t)(ebp + 0xffffffd4u), esi);
/* 507598: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
/* 50759b: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 50759e: mov ecx, dword ptr [0x5a0ca4] */
  ecx = R32((uint32_t)(0x5a0ca4u));
/* 5075a4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5075a5: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
/* 5075a8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5075a9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5075aa: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 5075ae: call 0x4e3c24 */
  esp -= 4; W32(esp, 0x5075b3u); SPILL(); f_4e3c24(); if (g_unwind) return; RELOAD();
/* 5075b3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5075b6: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5075b8: je 0x5075f8 */
  if (zf) goto L_5075f8;
L_5075ba: /* 5075ba: cmp dword ptr [ebp - 0x28], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5075bd: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 5075c0: jne 0x5075c7 */
  if (!zf) goto L_5075c7;
L_5075c2: /* 5075c2: mov ecx, 0x5ed66c */
  ecx = 0x5ed66cu;
L_5075c7: /* 5075c7: cmp dword ptr [ebp - 0x34], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5075ca: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 5075cd: jne 0x5075d4 */
  if (!zf) goto L_5075d4;
L_5075cf: /* 5075cf: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_5075d4: /* 5075d4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5075d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5075d6: call 0x4e4192 */
  esp -= 4; W32(esp, 0x5075dbu); SPILL(); f_4e4192(); if (g_unwind) return; RELOAD();
/* 5075db: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5075de: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5075e0: jne 0x5075f8 */
  if (!zf) goto L_5075f8;
L_5075e2: /* 5075e2: mov eax, dword ptr [0x5a0c90] */
  eax = R32((uint32_t)(0x5a0c90u));
/* 5075e7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5075e8: push 0x5a3f68 */
  { uint32_t v = 0x5a3f68u; esp -= 4; W32(esp, v); }
/* 5075ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5075ee: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x5075f3u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 5075f3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5075f6: jmp 0x507625 */
  goto L_507625;
L_5075f8: /* 5075f8: cmp dword ptr [ebp + 0x18], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x18u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5075fb: je 0x507649 */
  if (zf) goto L_507649;
L_5075fd: /* 5075fd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5075fe: push 0x5a3fb0 */
  { uint32_t v = 0x5a3fb0u; esp -= 4; W32(esp, v); }
/* 507603: push 0x5a3fbc */
  { uint32_t v = 0x5a3fbcu; esp -= 4; W32(esp, v); }
/* 507608: call 0x4e1a8c */
  esp -= 4; W32(esp, 0x50760du); SPILL(); f_4e1a8c(); if (g_unwind) return; RELOAD();
/* 50760d: mov ecx, dword ptr [0x5afee8] */
  ecx = R32((uint32_t)(0x5afee8u));
/* 507613: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 507615: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 507618: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 507619: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50761a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50761b: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x50761eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50761e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 507621: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 507623: jne 0x507649 */
  if (!zf) goto L_507649;
L_507625: /* 507625: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 507628: mov dword ptr [ebp - 0x14], 1 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x1u);
/* 50762f: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 507633: call 0x4e1217 */
  esp -= 4; W32(esp, 0x507638u); SPILL(); f_4e1217(); if (g_unwind) return; RELOAD();
/* 507638: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 50763b: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 50763f: call 0x4e1217 */
  esp -= 4; W32(esp, 0x507644u); SPILL(); f_4e1217(); if (g_unwind) return; RELOAD();
/* 507644: jmp 0x507853 */
  goto L_507853;
L_507649: /* 507649: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 50764c: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 507650: call 0x4e1217 */
  esp -= 4; W32(esp, 0x507655u); SPILL(); f_4e1217(); if (g_unwind) return; RELOAD();
L_507655: /* 507655: mov eax, dword ptr [0x5a0ca4] */
  eax = R32((uint32_t)(0x5a0ca4u));
/* 50765a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50765b: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 50765e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50765f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 507660: call 0x4e1d39 */
  esp -= 4; W32(esp, 0x507665u); SPILL(); f_4e1d39(); if (g_unwind) return; RELOAD();
/* 507665: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 507668: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50766a: jne 0x5076bb */
  if (!zf) goto L_5076bb;
L_50766c: /* 50766c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50766d: push 0x5a3fd0 */
  { uint32_t v = 0x5a3fd0u; esp -= 4; W32(esp, v); }
/* 507672: push 0x5a3fdc */
  { uint32_t v = 0x5a3fdcu; esp -= 4; W32(esp, v); }
/* 507677: call 0x4e1a8c */
  esp -= 4; W32(esp, 0x50767cu); SPILL(); f_4e1a8c(); if (g_unwind) return; RELOAD();
/* 50767c: mov ecx, dword ptr [0x5afee8] */
  ecx = R32((uint32_t)(0x5afee8u));
/* 507682: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 507684: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 507687: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 507688: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 507689: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50768a: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x50768du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50768d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 507690: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 507692: je 0x5076d3 */
  if (zf) goto L_5076d3;
L_507694: /* 507694: mov ecx, dword ptr [0x5a0ca4] */
  ecx = R32((uint32_t)(0x5a0ca4u));
/* 50769a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 50769c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 50769e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50769f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5076a0: call dword ptr [eax + 0x10] */
  { uint32_t t = R32((uint32_t)(eax + 0x10u)); esp -= 4; W32(esp, 0x5076a3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5076a3: mov ecx, dword ptr [0x5a0ca4] */
  ecx = R32((uint32_t)(0x5a0ca4u));
/* 5076a9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5076aa: lea edx, [ebp - 0x38] */
  edx = (uint32_t)(ebp + 0xffffffc8u);
/* 5076ad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5076ae: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5076af: call 0x4e1d39 */
  esp -= 4; W32(esp, 0x5076b4u); SPILL(); f_4e1d39(); if (g_unwind) return; RELOAD();
/* 5076b4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5076b7: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5076b9: je 0x5076d3 */
  if (zf) goto L_5076d3;
L_5076bb: /* 5076bb: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 5076be: mov dword ptr [ebp - 0x14], 1 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x1u);
/* 5076c5: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 5076c9: call 0x4e1217 */
  esp -= 4; W32(esp, 0x5076ceu); SPILL(); f_4e1217(); if (g_unwind) return; RELOAD();
/* 5076ce: jmp 0x507853 */
  goto L_507853;
L_5076d3: /* 5076d3: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 5076d6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5076d8: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x5076ddu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 5076dd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5076df: push 0x5a4000 */
  { uint32_t v = 0x5a4000u; esp -= 4; W32(esp, v); }
/* 5076e4: push 0x5a400c */
  { uint32_t v = 0x5a400cu; esp -= 4; W32(esp, v); }
/* 5076e9: mov esi, eax */
  esi = eax;
/* 5076eb: call 0x4e1613 */
  esp -= 4; W32(esp, 0x5076f0u); SPILL(); f_4e1613(); if (g_unwind) return; RELOAD();
/* 5076f0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5076f3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5076f4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5076f5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5076f6: mov eax, dword ptr [0x5afee8] */
  eax = R32((uint32_t)(0x5afee8u));
/* 5076fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5076fc: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x507701u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 507701: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 507704: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 507707: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 50770b: call 0x4e1217 */
  esp -= 4; W32(esp, 0x507710u); SPILL(); f_4e1217(); if (g_unwind) return; RELOAD();
/* 507710: jmp 0x507853 */
  goto L_507853;
L_507715: /* 507715: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* 50771b: call 0x4e2045 */
  esp -= 4; W32(esp, 0x507720u); SPILL(); f_4e2045(); if (g_unwind) return; RELOAD();
/* 507720: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 507723: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 507726: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 507727: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* 50772d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50772e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50772f: mov bl, 3 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x3u) & 0xffu);
/* 507731: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 507732: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 507735: call 0x4e2590 */
  esp -= 4; W32(esp, 0x50773au); SPILL(); f_4e2590(); if (g_unwind) return; RELOAD();
/* 50773a: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 50773d: xor esi, esi */
  esi = 0;
/* 50773f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 507742: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 507744: je 0x5077ef */
  if (zf) goto L_5077ef;
L_50774a: /* 50774a: mov dword ptr [ebp - 0x2c], esi */
  W32((uint32_t)(ebp + 0xffffffd4u), esi);
/* 50774d: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
/* 507750: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 507753: mov ecx, dword ptr [0x5a0ca4] */
  ecx = R32((uint32_t)(0x5a0ca4u));
/* 507759: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50775a: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
/* 50775d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50775e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50775f: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 507763: call 0x4e23ce */
  esp -= 4; W32(esp, 0x507768u); SPILL(); f_4e23ce(); if (g_unwind) return; RELOAD();
/* 507768: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50776b: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50776d: je 0x5077a3 */
  if (zf) goto L_5077a3;
L_50776f: /* 50776f: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 507772: cmp dword ptr [ebp - 0x28], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 507775: jne 0x5077a3 */
  if (!zf) goto L_5077a3;
L_507777: /* 507777: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 50777a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50777b: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 50777e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50777f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 507780: call 0x4e283d */
  esp -= 4; W32(esp, 0x507785u); SPILL(); f_4e283d(); if (g_unwind) return; RELOAD();
/* 507785: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 507788: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50778a: jne 0x5077a3 */
  if (!zf) goto L_5077a3;
L_50778c: /* 50778c: mov edx, dword ptr [0x5a0c90] */
  edx = R32((uint32_t)(0x5a0c90u));
/* 507792: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 507793: push 0x5a4028 */
  { uint32_t v = 0x5a4028u; esp -= 4; W32(esp, v); }
/* 507798: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 507799: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x50779eu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 50779e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5077a1: jmp 0x5077d0 */
  goto L_5077d0;
L_5077a3: /* 5077a3: cmp dword ptr [ebp + 0x18], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x18u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5077a6: je 0x5077e4 */
  if (zf) goto L_5077e4;
L_5077a8: /* 5077a8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5077a9: push 0x5a4070 */
  { uint32_t v = 0x5a4070u; esp -= 4; W32(esp, v); }
/* 5077ae: push 0x5a407c */
  { uint32_t v = 0x5a407cu; esp -= 4; W32(esp, v); }
/* 5077b3: call 0x4e1a8c */
  esp -= 4; W32(esp, 0x5077b8u); SPILL(); f_4e1a8c(); if (g_unwind) return; RELOAD();
/* 5077b8: mov ecx, dword ptr [0x5afee8] */
  ecx = R32((uint32_t)(0x5afee8u));
/* 5077be: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5077c0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5077c3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5077c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5077c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5077c6: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x5077c9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5077c9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5077cc: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5077ce: jne 0x5077e4 */
  if (!zf) goto L_5077e4;
L_5077d0: /* 5077d0: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 5077d3: mov dword ptr [ebp - 0x14], 1 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x1u);
/* 5077da: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 5077dd: call 0x4e33c8 */
  esp -= 4; W32(esp, 0x5077e2u); SPILL(); f_4e33c8(); if (g_unwind) return; RELOAD();
/* 5077e2: jmp 0x507841 */
  goto L_507841;
L_5077e4: /* 5077e4: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 5077e7: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 5077ea: call 0x4e33c8 */
  esp -= 4; W32(esp, 0x5077efu); SPILL(); f_4e33c8(); if (g_unwind) return; RELOAD();
L_5077ef: /* 5077ef: mov eax, dword ptr [0x5a0ca4] */
  eax = R32((uint32_t)(0x5a0ca4u));
/* 5077f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5077f5: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 5077f8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5077f9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5077fa: call 0x4e4269 */
  esp -= 4; W32(esp, 0x5077ffu); SPILL(); f_4e4269(); if (g_unwind) return; RELOAD();
/* 5077ff: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 507802: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 507804: jne 0x50783a */
  if (!zf) goto L_50783a;
L_507806: /* 507806: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 507809: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50780b: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x507810u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 507810: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 507812: push 0x5a4090 */
  { uint32_t v = 0x5a4090u; esp -= 4; W32(esp, v); }
/* 507817: push 0x5a409c */
  { uint32_t v = 0x5a409cu; esp -= 4; W32(esp, v); }
/* 50781c: mov esi, eax */
  esi = eax;
/* 50781e: call 0x4e1613 */
  esp -= 4; W32(esp, 0x507823u); SPILL(); f_4e1613(); if (g_unwind) return; RELOAD();
/* 507823: mov edx, dword ptr [0x5afee8] */
  edx = R32((uint32_t)(0x5afee8u));
/* 507829: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50782c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50782d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50782e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50782f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 507830: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x507835u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 507835: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 507838: jmp 0x507841 */
  goto L_507841;
L_50783a: /* 50783a: mov dword ptr [ebp - 0x14], 1 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x1u);
L_507841: /* 507841: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* 507847: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 50784b: call 0x4e3913 */
  esp -= 4; W32(esp, 0x507850u); SPILL(); f_4e3913(); if (g_unwind) return; RELOAD();
/* 507850: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
L_507853: /* 507853: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 507856: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 507858: jne 0x507863 */
  if (!zf) goto L_507863;
L_50785a: /* 50785a: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 50785c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 50785e: mov ecx, ebx */
  ecx = ebx;
/* 507860: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x507863u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_507863: /* 507863: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 507866: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 507869: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50786a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50786b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 507872: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 507873: mov esp, ebp */
  esp = ebp;
/* 507875: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 507876: ret  */
  esp += 4; SPILL(); return;
}

void f_507877(void) {
  LOAD_REGS();
L_507877: /* 507877: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 50787a: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 50787f: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 507882: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 507883: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 507886: call 0x554df6 */
  esp -= 4; W32(esp, 0x50788bu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_50788b(); return;
}

void f_50788b(void) {
  LOAD_REGS();
L_50788b: /* 50788b: push 0x56b2f4 */
  { uint32_t v = 0x56b2f4u; esp -= 4; W32(esp, v); }
/* 507890: push 0x5a40b4 */
  { uint32_t v = 0x5a40b4u; esp -= 4; W32(esp, v); }
/* 507895: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x50789au); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 50789a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50789d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50789f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5078a1: call 0x554df6 */
  esp -= 4; W32(esp, 0x5078a6u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_5078a6: guest_badaddr(0x5078a6); return;
}

void f_5079c0(void) {
  LOAD_REGS();
L_5079c0: /* 5079c0: mov eax, dword ptr [eax + 0x64] */
  eax = R32((uint32_t)(eax + 0x64u));
/* 5079c3: sub eax, dword ptr [ecx + 0x64] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x64u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 5079c6: ret  */
  esp += 4; SPILL(); return;
}

void f_5079e0(void) {
  LOAD_REGS();
L_5079e0: /* 5079e0: mov eax, ecx */
  eax = ecx;
/* 5079e2: xor ecx, ecx */
  ecx = 0;
/* 5079e4: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 5079e6: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 5079e9: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 5079ec: ret  */
  esp += 4; SPILL(); return;
}

void f_507a00(void) {
  LOAD_REGS();
L_507a00: /* 507a00: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 507a02: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 507a06: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 507a09: ret 4 */
  esp += 8; SPILL(); return;
}

void f_507a20(void) {
  LOAD_REGS();
L_507a20: /* 507a20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 507a24: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 507a25: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 507a26: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 507a29: lea esi, [edi + eax] */
  esi = (uint32_t)(edi + eax);
/* 507a2c: cmp esi, dword ptr [ecx + 8] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 507a2f: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 507a32: jle 0x507a4e */
  if ((zf || sf != of)) goto L_507a4e;
L_507a34: /* 507a34: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 507a37: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 507a38: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 507a3b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 507a3d: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 507a40: lea edx, [eax + esi + 0x20] */
  edx = (uint32_t)(eax + esi + 0x20u);
/* 507a44: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 507a46: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 507a49: call 0x4e4502 */
  esp -= 4; W32(esp, 0x507a4eu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_507a4e: /* 507a4e: mov eax, edi */
  eax = edi;
/* 507a50: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 507a51: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 507a52: ret 4 */
  esp += 8; SPILL(); return;
}

void f_507a70(void) {
  LOAD_REGS();
L_507a70: /* 507a70: mov eax, 1 */
  eax = 0x1u;
/* 507a75: ret  */
  esp += 4; SPILL(); return;
}

void f_507a90(void) {
  LOAD_REGS();
L_507a90: /* 507a90: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 507a94: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 507a98: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 507a9a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 507a9b: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 507a9d: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 507a9f: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 507aa1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 507aa2: ret  */
  esp += 4; SPILL(); return;
}

void f_507ac0(void) {
  LOAD_REGS();
L_507ac0: /* 507ac0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 507ac1: mov ebp, esp */
  ebp = esp;
/* 507ac3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 507ac5: push 0x556c00 */
  { uint32_t v = 0x556c00u; esp -= 4; W32(esp, v); }
/* 507aca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 507ad0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 507ad1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 507ad8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 507adb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 507adc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 507add: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 507ae0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 507ae1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 507ae4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 507ae5: mov edi, ecx */
  edi = ecx;
/* 507ae7: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 507aee: call 0x4e1519 */
  esp -= 4; W32(esp, 0x507af3u); SPILL(); f_4e1519(); if (g_unwind) return; RELOAD();
/* 507af3: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 507af6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 507af8: jne 0x507b17 */
  if (!zf) goto L_507b17;
L_507afa: /* 507afa: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 507afd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 507aff: jne 0x507b17 */
  if (!zf) goto L_507b17;
L_507b01: /* 507b01: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 507b03: lea ecx, [edi + 0x28] */
  ecx = (uint32_t)(edi + 0x28u);
/* 507b06: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 507b07: mov ecx, esi */
  ecx = esi;
/* 507b09: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x507b0cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 507b0c: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 507b0e: add edi, 0x2c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 507b11: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 507b12: mov ecx, eax */
  ecx = eax;
/* 507b14: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x507b17u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_507b17: /* 507b17: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 507b1a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 507b1b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 507b1c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 507b23: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 507b24: mov esp, ebp */
  esp = ebp;
/* 507b26: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 507b27: ret 4 */
  esp += 8; SPILL(); return;
}

void f_507b2a(void) {
  LOAD_REGS();
L_507b2a: /* 507b2a: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 507b2d: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 507b32: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 507b35: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 507b36: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 507b39: call 0x554df6 */
  esp -= 4; W32(esp, 0x507b3eu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_507b3e(); return;
}

void f_507b3e(void) {
  LOAD_REGS();
L_507b3e: /* 507b3e: push 0x56b330 */
  { uint32_t v = 0x56b330u; esp -= 4; W32(esp, v); }
/* 507b43: push 0x5a43a0 */
  { uint32_t v = 0x5a43a0u; esp -= 4; W32(esp, v); }
/* 507b48: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x507b4du); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 507b4d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 507b50: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 507b52: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 507b54: call 0x554df6 */
  esp -= 4; W32(esp, 0x507b59u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_507b59: guest_badaddr(0x507b59); return;
}

void f_507b90(void) {
  LOAD_REGS();
L_507b90: /* 507b90: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 507b94: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 507b95: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 507b96: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 507b99: lea esi, [edi + eax] */
  esi = (uint32_t)(edi + eax);
/* 507b9c: cmp esi, dword ptr [ecx + 8] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 507b9f: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 507ba2: jle 0x507bbe */
  if ((zf || sf != of)) goto L_507bbe;
L_507ba4: /* 507ba4: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 507ba7: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 507ba8: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 507bab: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 507bad: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 507bb0: lea edx, [eax + esi + 0x20] */
  edx = (uint32_t)(eax + esi + 0x20u);
/* 507bb4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 507bb6: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 507bb9: call 0x4e4502 */
  esp -= 4; W32(esp, 0x507bbeu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_507bbe: /* 507bbe: mov eax, edi */
  eax = edi;
/* 507bc0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 507bc1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 507bc2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_507be0(void) {
  LOAD_REGS();
L_507be0: /* 507be0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 507be1: mov esi, ecx */
  esi = ecx;
/* 507be3: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 507be6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 507be7: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 507bea: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 507bed: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 507bef: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 507bf2: jle 0x507c10 */
  if ((zf || sf != of)) goto L_507c10;
L_507bf4: /* 507bf4: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 507bf7: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 507bf8: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 507bfb: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 507bfd: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 507c00: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 507c04: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 507c06: mov ecx, esi */
  ecx = esi;
/* 507c08: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 507c0b: call 0x4e4502 */
  esp -= 4; W32(esp, 0x507c10u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_507c10: /* 507c10: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 507c14: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 507c16: mov al, byte ptr [edx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* 507c18: mov byte ptr [edi + ecx], al */
  W8((uint32_t)(edi + ecx), (eax & 0xffu));
/* 507c1b: mov eax, edi */
  eax = edi;
/* 507c1d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 507c1e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 507c1f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_507c50(void) {
  LOAD_REGS();
L_507c50: /* 507c50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 507c51: mov esi, ecx */
  esi = ecx;
/* 507c53: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 507c56: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 507c57: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 507c5a: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 507c5d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 507c5f: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 507c62: jle 0x507c80 */
  if ((zf || sf != of)) goto L_507c80;
L_507c64: /* 507c64: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 507c67: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 507c68: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 507c6b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 507c6d: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 507c70: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 507c74: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 507c76: mov ecx, esi */
  ecx = esi;
/* 507c78: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 507c7b: call 0x4e4502 */
  esp -= 4; W32(esp, 0x507c80u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_507c80: /* 507c80: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 507c84: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 507c86: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 507c88: mov dword ptr [ecx + edi*4], eax */
  W32((uint32_t)(ecx + edi*4), eax);
/* 507c8b: mov eax, edi */
  eax = edi;
/* 507c8d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 507c8e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 507c8f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_507cc0(void) {
  LOAD_REGS();
L_507cc0: /* 507cc0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 507cc1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 507cc2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 507cc3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 507cc7: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 507cc9: mov esi, ecx */
  esi = ecx;
/* 507ccb: jge 0x507ce4 */
  if ((sf == of)) goto L_507ce4;
L_507ccd: /* 507ccd: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 507cd2: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 507cd7: push 0x5a3844 */
  { uint32_t v = 0x5a3844u; esp -= 4; W32(esp, v); }
/* 507cdc: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x507ce1u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 507ce1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_507ce4: /* 507ce4: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 507ce7: jle 0x507d00 */
  if ((zf || sf != of)) goto L_507d00;
L_507ce9: /* 507ce9: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 507cee: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 507cf3: push 0x5a3830 */
  { uint32_t v = 0x5a3830u; esp -= 4; W32(esp, v); }
/* 507cf8: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x507cfdu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 507cfd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_507d00: /* 507d00: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 507d04: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 507d07: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 507d0a: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 507d0c: jle 0x507d25 */
  if ((zf || sf != of)) goto L_507d25;
L_507d0e: /* 507d0e: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 507d13: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 507d18: push 0x5a3814 */
  { uint32_t v = 0x5a3814u; esp -= 4; W32(esp, v); }
/* 507d1d: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x507d22u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 507d22: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_507d25: /* 507d25: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 507d27: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 507d28: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 507d29: mov ecx, esi */
  ecx = esi;
/* 507d2b: call 0x4e438b */
  esp -= 4; W32(esp, 0x507d30u); SPILL(); f_4e438b(); if (g_unwind) return; RELOAD();
/* 507d30: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 507d31: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 507d32: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 507d33: ret 8 */
  esp += 12; SPILL(); return;
}

void f_507d60(void) {
  LOAD_REGS();
L_507d60: /* 507d60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 507d61: mov ebp, esp */
  ebp = esp;
/* 507d63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 507d65: push 0x556c10 */
  { uint32_t v = 0x556c10u; esp -= 4; W32(esp, v); }
/* 507d6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 507d70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 507d71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 507d78: sub esp, 0x10c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 507d7e: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 507d81: cmp ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 507d84: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 507d85: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 507d86: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 507d87: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 507d8a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 507d91: jl 0x507f06 */
  if ((sf != of)) goto L_507f06;
L_507d97: /* 507d97: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 507d9a: mov dword ptr [ebp - 0x118], eax */
  W32((uint32_t)(ebp + 0xfffffee8u), eax);
/* 507da0: lea eax, [eax + ecx*4 - 4] */
  eax = (uint32_t)(eax + ecx*4 + 0xfffffffcu);
/* 507da4: mov dword ptr [ebp - 0x114], eax */
  W32((uint32_t)(ebp + 0xfffffeecu), eax);
/* 507daa: xor eax, eax */
  eax = 0;
/* 507dac: mov ecx, 0x3e */
  ecx = 0x3eu;
/* 507db1: lea edi, [ebp - 0x110] */
  edi = (uint32_t)(ebp + 0xfffffef0u);
/* 507db7: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 507db9: lea eax, [ebp - 0x118] */
  eax = (uint32_t)(ebp + 0xfffffee8u);
L_507dbf: /* 507dbf: lea ecx, [ebp - 0x118] */
  ecx = (uint32_t)(ebp + 0xfffffee8u);
/* 507dc5: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 507dc7: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 507dca: jb 0x507f06 */
  if (cf) goto L_507f06;
L_507dd0: /* 507dd0: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 507dd2: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
L_507dd5: /* 507dd5: mov eax, ebx */
  eax = ebx;
/* 507dd7: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 507dd9: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 507ddc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 507ddd: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 507de0: jg 0x507e15 */
  if ((!zf && sf == of)) goto L_507e15;
L_507de2: /* 507de2: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 507de4: jbe 0x507ef0 */
  if ((cf | zf)) goto L_507ef0;
L_507dea: /* 507dea: mov edi, esi */
  edi = esi;
/* 507dec: lea edx, [esi + 4] */
  edx = (uint32_t)(esi + 0x4u);
/* 507def: nop  */
L_507df0: /* 507df0: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 507df2: ja 0x507e08 */
  if ((!cf && !zf)) goto L_507e08;
L_507df4: /* 507df4: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 507df6: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 507df8: call 0x5079c0 */
  esp -= 4; W32(esp, 0x507dfdu); SPILL(); f_5079c0(); if (g_unwind) return; RELOAD();
/* 507dfd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 507dff: jle 0x507e03 */
  if ((zf || sf != of)) goto L_507e03;
L_507e01: /* 507e01: mov edi, edx */
  edi = edx;
L_507e03: /* 507e03: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 507e06: jmp 0x507df0 */
  goto L_507df0;
L_507e08: /* 507e08: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 507e0a: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 507e0c: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 507e0e: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 507e10: sub ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 507e13: jmp 0x507de2 */
  goto L_507de2;
L_507e15: /* 507e15: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 507e16: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 507e18: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 507e1a: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 507e1c: mov ecx, dword ptr [esi + eax*4] */
  ecx = R32((uint32_t)(esi + eax*4));
/* 507e1f: lea eax, [esi + eax*4] */
  eax = (uint32_t)(esi + eax*4);
/* 507e22: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 507e24: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 507e26: mov edi, esi */
  edi = esi;
/* 507e28: lea edx, [ebx + 4] */
  edx = (uint32_t)(ebx + 0x4u);
/* 507e2b: jmp 0x507e30 */
  goto L_507e30;
L_507e30: /* 507e30: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 507e33: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 507e35: ja 0x507e44 */
  if ((!cf && !zf)) goto L_507e44;
L_507e37: /* 507e37: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 507e39: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 507e3b: call 0x5079c0 */
  esp -= 4; W32(esp, 0x507e40u); SPILL(); f_5079c0(); if (g_unwind) return; RELOAD();
/* 507e40: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 507e42: jle 0x507e30 */
  if ((zf || sf != of)) goto L_507e30;
L_507e44: /* 507e44: sub edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 507e47: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 507e49: jbe 0x507e58 */
  if ((cf | zf)) goto L_507e58;
L_507e4b: /* 507e4b: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 507e4d: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 507e4f: call 0x5079c0 */
  esp -= 4; W32(esp, 0x507e54u); SPILL(); f_5079c0(); if (g_unwind) return; RELOAD();
/* 507e54: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 507e56: jge 0x507e44 */
  if ((sf == of)) goto L_507e44;
L_507e58: /* 507e58: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 507e5a: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 507e5c: jbe 0x507efb */
  if ((cf | zf)) goto L_507efb;
L_507e62: /* 507e62: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 507e64: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 507e66: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 507e68: mov eax, edx */
  eax = edx;
/* 507e6a: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 507e6c: mov ecx, ebx */
  ecx = ebx;
/* 507e6e: sub eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 507e71: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 507e73: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 507e76: and ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 507e79: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 507e7b: jl 0x507ecf */
  if ((sf != of)) goto L_507ecf;
L_507e7d: /* 507e7d: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 507e80: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 507e82: jae 0x507e95 */
  if (!cf) goto L_507e95;
L_507e84: /* 507e84: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 507e87: add edx, -4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 507e8a: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 507e8c: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 507e8f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 507e92: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
L_507e95: /* 507e95: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 507e97: jbe 0x507ef0 */
  if ((cf | zf)) goto L_507ef0;
L_507e99: /* 507e99: mov esi, edi */
  esi = edi;
/* 507e9b: jmp 0x507dd5 */
  goto L_507dd5;
L_507ecf: /* 507ecf: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 507ed1: jbe 0x507ee1 */
  if ((cf | zf)) goto L_507ee1;
L_507ed3: /* 507ed3: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 507ed6: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 507ed8: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 507edb: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 507ede: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
L_507ee1: /* 507ee1: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 507ee4: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 507ee6: jae 0x507ef0 */
  if (!cf) goto L_507ef0;
L_507ee8: /* 507ee8: lea ebx, [edx - 4] */
  ebx = (uint32_t)(edx + 0xfffffffcu);
/* 507eeb: jmp 0x507dd5 */
  goto L_507dd5;
L_507ef0: /* 507ef0: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 507ef3: sub eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 507ef6: jmp 0x507dbf */
  goto L_507dbf;
L_507efb: /* 507efb: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 507efd: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 507eff: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 507f01: jmp 0x507e30 */
  goto L_507e30;
L_507f06: /* 507f06: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 507f09: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 507f0a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 507f0b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 507f12: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 507f13: mov esp, ebp */
  esp = ebp;
/* 507f15: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 507f16: ret  */
  esp += 4; SPILL(); return;
}

void f_507e2d(void) {
  LOAD_REGS();
  goto L_507e2d;
L_507dbf: /* 507dbf: lea ecx, [ebp - 0x118] */
  ecx = (uint32_t)(ebp + 0xfffffee8u);
/* 507dc5: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 507dc7: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 507dca: jb 0x507f06 */
  if (cf) goto L_507f06;
L_507dd0: /* 507dd0: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 507dd2: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
L_507dd5: /* 507dd5: mov eax, ebx */
  eax = ebx;
/* 507dd7: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 507dd9: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 507ddc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 507ddd: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 507de0: jg 0x507e15 */
  if ((!zf && sf == of)) goto L_507e15;
L_507de2: /* 507de2: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 507de4: jbe 0x507ef0 */
  if ((cf | zf)) goto L_507ef0;
L_507dea: /* 507dea: mov edi, esi */
  edi = esi;
/* 507dec: lea edx, [esi + 4] */
  edx = (uint32_t)(esi + 0x4u);
/* 507def: nop  */
L_507df0: /* 507df0: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 507df2: ja 0x507e08 */
  if ((!cf && !zf)) goto L_507e08;
L_507df4: /* 507df4: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 507df6: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 507df8: call 0x5079c0 */
  esp -= 4; W32(esp, 0x507dfdu); SPILL(); f_5079c0(); if (g_unwind) return; RELOAD();
/* 507dfd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 507dff: jle 0x507e03 */
  if ((zf || sf != of)) goto L_507e03;
L_507e01: /* 507e01: mov edi, edx */
  edi = edx;
L_507e03: /* 507e03: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 507e06: jmp 0x507df0 */
  goto L_507df0;
L_507e08: /* 507e08: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 507e0a: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 507e0c: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 507e0e: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 507e10: sub ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 507e13: jmp 0x507de2 */
  goto L_507de2;
L_507e15: /* 507e15: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 507e16: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 507e18: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 507e1a: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 507e1c: mov ecx, dword ptr [esi + eax*4] */
  ecx = R32((uint32_t)(esi + eax*4));
/* 507e1f: lea eax, [esi + eax*4] */
  eax = (uint32_t)(esi + eax*4);
/* 507e22: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 507e24: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 507e26: mov edi, esi */
  edi = esi;
/* 507e28: lea edx, [ebx + 4] */
  edx = (uint32_t)(ebx + 0x4u);
/* 507e2b: jmp 0x507e30 */
  goto L_507e30;
L_507e2d: /* 507e2d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_507e30: /* 507e30: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 507e33: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 507e35: ja 0x507e44 */
  if ((!cf && !zf)) goto L_507e44;
L_507e37: /* 507e37: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 507e39: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 507e3b: call 0x5079c0 */
  esp -= 4; W32(esp, 0x507e40u); SPILL(); f_5079c0(); if (g_unwind) return; RELOAD();
/* 507e40: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 507e42: jle 0x507e30 */
  if ((zf || sf != of)) goto L_507e30;
L_507e44: /* 507e44: sub edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 507e47: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 507e49: jbe 0x507e58 */
  if ((cf | zf)) goto L_507e58;
L_507e4b: /* 507e4b: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 507e4d: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 507e4f: call 0x5079c0 */
  esp -= 4; W32(esp, 0x507e54u); SPILL(); f_5079c0(); if (g_unwind) return; RELOAD();
/* 507e54: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 507e56: jge 0x507e44 */
  if ((sf == of)) goto L_507e44;
L_507e58: /* 507e58: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 507e5a: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 507e5c: jbe 0x507efb */
  if ((cf | zf)) goto L_507efb;
L_507e62: /* 507e62: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 507e64: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 507e66: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 507e68: mov eax, edx */
  eax = edx;
/* 507e6a: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 507e6c: mov ecx, ebx */
  ecx = ebx;
/* 507e6e: sub eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 507e71: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 507e73: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 507e76: and ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 507e79: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 507e7b: jl 0x507ecf */
  if ((sf != of)) goto L_507ecf;
L_507e7d: /* 507e7d: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 507e80: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 507e82: jae 0x507e95 */
  if (!cf) goto L_507e95;
L_507e84: /* 507e84: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 507e87: add edx, -4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 507e8a: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 507e8c: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 507e8f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 507e92: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
L_507e95: /* 507e95: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 507e97: jbe 0x507ef0 */
  if ((cf | zf)) goto L_507ef0;
L_507e99: /* 507e99: mov esi, edi */
  esi = edi;
/* 507e9b: jmp 0x507dd5 */
  goto L_507dd5;
L_507ecf: /* 507ecf: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 507ed1: jbe 0x507ee1 */
  if ((cf | zf)) goto L_507ee1;
L_507ed3: /* 507ed3: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 507ed6: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 507ed8: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 507edb: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 507ede: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
L_507ee1: /* 507ee1: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 507ee4: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 507ee6: jae 0x507ef0 */
  if (!cf) goto L_507ef0;
L_507ee8: /* 507ee8: lea ebx, [edx - 4] */
  ebx = (uint32_t)(edx + 0xfffffffcu);
/* 507eeb: jmp 0x507dd5 */
  goto L_507dd5;
L_507ef0: /* 507ef0: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 507ef3: sub eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 507ef6: jmp 0x507dbf */
  goto L_507dbf;
L_507efb: /* 507efb: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 507efd: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 507eff: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 507f01: jmp 0x507e30 */
  goto L_507e30;
L_507f06: /* 507f06: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 507f09: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 507f0a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 507f0b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 507f12: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 507f13: mov esp, ebp */
  esp = ebp;
/* 507f15: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 507f16: ret  */
  esp += 4; SPILL(); return;
}

void f_507ea0(void) {
  LOAD_REGS();
L_507ea0: /* 507ea0: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 507ea3: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 507ea8: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 507eab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 507eac: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 507eaf: call 0x554df6 */
  esp -= 4; W32(esp, 0x507eb4u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_507eb4(); return;
}

void f_507eb4(void) {
  LOAD_REGS();
  goto L_507eb4;
L_507dbf: /* 507dbf: lea ecx, [ebp - 0x118] */
  ecx = (uint32_t)(ebp + 0xfffffee8u);
/* 507dc5: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 507dc7: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 507dca: jb 0x507f06 */
  if (cf) goto L_507f06;
L_507dd0: /* 507dd0: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 507dd2: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
L_507dd5: /* 507dd5: mov eax, ebx */
  eax = ebx;
/* 507dd7: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 507dd9: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 507ddc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 507ddd: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 507de0: jg 0x507e15 */
  if ((!zf && sf == of)) goto L_507e15;
L_507de2: /* 507de2: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 507de4: jbe 0x507ef0 */
  if ((cf | zf)) goto L_507ef0;
L_507dea: /* 507dea: mov edi, esi */
  edi = esi;
/* 507dec: lea edx, [esi + 4] */
  edx = (uint32_t)(esi + 0x4u);
/* 507def: nop  */
L_507df0: /* 507df0: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 507df2: ja 0x507e08 */
  if ((!cf && !zf)) goto L_507e08;
L_507df4: /* 507df4: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 507df6: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 507df8: call 0x5079c0 */
  esp -= 4; W32(esp, 0x507dfdu); SPILL(); f_5079c0(); if (g_unwind) return; RELOAD();
/* 507dfd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 507dff: jle 0x507e03 */
  if ((zf || sf != of)) goto L_507e03;
L_507e01: /* 507e01: mov edi, edx */
  edi = edx;
L_507e03: /* 507e03: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 507e06: jmp 0x507df0 */
  goto L_507df0;
L_507e08: /* 507e08: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 507e0a: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 507e0c: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 507e0e: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 507e10: sub ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 507e13: jmp 0x507de2 */
  goto L_507de2;
L_507e15: /* 507e15: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 507e16: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 507e18: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 507e1a: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 507e1c: mov ecx, dword ptr [esi + eax*4] */
  ecx = R32((uint32_t)(esi + eax*4));
/* 507e1f: lea eax, [esi + eax*4] */
  eax = (uint32_t)(esi + eax*4);
/* 507e22: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 507e24: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 507e26: mov edi, esi */
  edi = esi;
/* 507e28: lea edx, [ebx + 4] */
  edx = (uint32_t)(ebx + 0x4u);
/* 507e2b: jmp 0x507e30 */
  goto L_507e30;
L_507e30: /* 507e30: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 507e33: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 507e35: ja 0x507e44 */
  if ((!cf && !zf)) goto L_507e44;
L_507e37: /* 507e37: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 507e39: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 507e3b: call 0x5079c0 */
  esp -= 4; W32(esp, 0x507e40u); SPILL(); f_5079c0(); if (g_unwind) return; RELOAD();
/* 507e40: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 507e42: jle 0x507e30 */
  if ((zf || sf != of)) goto L_507e30;
L_507e44: /* 507e44: sub edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 507e47: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 507e49: jbe 0x507e58 */
  if ((cf | zf)) goto L_507e58;
L_507e4b: /* 507e4b: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 507e4d: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 507e4f: call 0x5079c0 */
  esp -= 4; W32(esp, 0x507e54u); SPILL(); f_5079c0(); if (g_unwind) return; RELOAD();
/* 507e54: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 507e56: jge 0x507e44 */
  if ((sf == of)) goto L_507e44;
L_507e58: /* 507e58: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 507e5a: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 507e5c: jbe 0x507efb */
  if ((cf | zf)) goto L_507efb;
L_507e62: /* 507e62: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 507e64: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 507e66: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 507e68: mov eax, edx */
  eax = edx;
/* 507e6a: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 507e6c: mov ecx, ebx */
  ecx = ebx;
/* 507e6e: sub eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 507e71: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 507e73: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 507e76: and ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 507e79: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 507e7b: jl 0x507ecf */
  if ((sf != of)) goto L_507ecf;
L_507e7d: /* 507e7d: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 507e80: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 507e82: jae 0x507e95 */
  if (!cf) goto L_507e95;
L_507e84: /* 507e84: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 507e87: add edx, -4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 507e8a: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 507e8c: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 507e8f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 507e92: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
L_507e95: /* 507e95: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 507e97: jbe 0x507ef0 */
  if ((cf | zf)) goto L_507ef0;
L_507e99: /* 507e99: mov esi, edi */
  esi = edi;
/* 507e9b: jmp 0x507dd5 */
  goto L_507dd5;
L_507eb4: /* 507eb4: push 0x56b360 */
  { uint32_t v = 0x56b360u; esp -= 4; W32(esp, v); }
/* 507eb9: push 0x5a45d8 */
  { uint32_t v = 0x5a45d8u; esp -= 4; W32(esp, v); }
/* 507ebe: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x507ec3u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 507ec3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 507ec6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 507ec8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 507eca: call 0x554df6 */
  esp -= 4; W32(esp, 0x507ecfu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_507ecf: /* 507ecf: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 507ed1: jbe 0x507ee1 */
  if ((cf | zf)) goto L_507ee1;
L_507ed3: /* 507ed3: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 507ed6: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 507ed8: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 507edb: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 507ede: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
L_507ee1: /* 507ee1: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 507ee4: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 507ee6: jae 0x507ef0 */
  if (!cf) goto L_507ef0;
L_507ee8: /* 507ee8: lea ebx, [edx - 4] */
  ebx = (uint32_t)(edx + 0xfffffffcu);
/* 507eeb: jmp 0x507dd5 */
  goto L_507dd5;
L_507ef0: /* 507ef0: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 507ef3: sub eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 507ef6: jmp 0x507dbf */
  goto L_507dbf;
L_507efb: /* 507efb: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 507efd: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 507eff: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 507f01: jmp 0x507e30 */
  goto L_507e30;
L_507f06: /* 507f06: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 507f09: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 507f0a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 507f0b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 507f12: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 507f13: mov esp, ebp */
  esp = ebp;
/* 507f15: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 507f16: ret  */
  esp += 4; SPILL(); return;
}

void f_507f90(void) {
  LOAD_REGS();
L_507f90: /* 507f90: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 507f92: push 0x556c28 */
  { uint32_t v = 0x556c28u; esp -= 4; W32(esp, v); }
/* 507f97: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 507f9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 507f9e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 507fa5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 507fa6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 507fa7: mov esi, ecx */
  esi = ecx;
/* 507fa9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 507faa: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 507fae: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 507fb1: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 507fb3: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 507fbb: jge 0x507fd4 */
  if ((sf == of)) goto L_507fd4;
L_507fbd: /* 507fbd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 507fc2: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 507fc7: push 0x5a3830 */
  { uint32_t v = 0x5a3830u; esp -= 4; W32(esp, v); }
/* 507fcc: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x507fd1u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 507fd1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_507fd4: /* 507fd4: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 507fd7: jle 0x507ff0 */
  if ((zf || sf != of)) goto L_507ff0;
L_507fd9: /* 507fd9: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 507fde: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 507fe3: push 0x5a3814 */
  { uint32_t v = 0x5a3814u; esp -= 4; W32(esp, v); }
/* 507fe8: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x507fedu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 507fed: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_507ff0: /* 507ff0: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 507ff2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 507ff3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 507ff5: mov ecx, esi */
  ecx = esi;
/* 507ff7: call 0x4e438b */
  esp -= 4; W32(esp, 0x507ffcu); SPILL(); f_4e438b(); if (g_unwind) return; RELOAD();
/* 507ffc: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 507ffe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 508000: mov dword ptr [esp + 0x14], 0xffffffff */
  W32((uint32_t)(esp + 0x14u), 0xffffffffu);
/* 508008: je 0x508016 */
  if (zf) goto L_508016;
L_50800a: /* 50800a: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 508010: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 508012: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 508013: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x508016u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_508016: /* 508016: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 50801a: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 508020: mov dword ptr [esi + 8], 0 */
  W32((uint32_t)(esi + 0x8u), 0x0u);
/* 508027: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 50802e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50802f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 508030: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 508037: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50803a: ret  */
  esp += 4; SPILL(); return;
}

void f_508070(void) {
  LOAD_REGS();
L_508070: /* 508070: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 508071: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 508075: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 508077: mov eax, esi */
  eax = esi;
/* 508079: je 0x50808e */
  if (zf) goto L_50808e;
L_50807b: /* 50807b: jmp 0x508080 */
  goto L_508080;
L_508080: /* 508080: cmp eax, 0x5ee348 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5ee348u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 508085: je 0x5080a5 */
  if (zf) goto L_5080a5;
L_508087: /* 508087: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 50808a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50808c: jne 0x508080 */
  if (!zf) goto L_508080;
L_50808e: /* 50808e: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 508093: push 0x5a4570 */
  { uint32_t v = 0x5a4570u; esp -= 4; W32(esp, v); }
/* 508098: push 0x5a45b4 */
  { uint32_t v = 0x5a45b4u; esp -= 4; W32(esp, v); }
/* 50809d: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x5080a2u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 5080a2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5080a5: /* 5080a5: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 5080a9: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5080ac: jne 0x5080b3 */
  if (!zf) goto L_5080b3;
L_5080ae: /* 5080ae: call 0x4e280b */
  esp -= 4; W32(esp, 0x5080b3u); SPILL(); f_4e280b(); if (g_unwind) return; RELOAD();
L_5080b3: /* 5080b3: mov ecx, dword ptr [0x5a0c94] */
  ecx = R32((uint32_t)(0x5a0c94u));
/* 5080b9: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 5080bd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5080bf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5080c0: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 5080c4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5080c6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5080c7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5080c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5080c9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5080ca: call 0x4e335a */
  esp -= 4; W32(esp, 0x5080cfu); SPILL(); f_4e335a(); if (g_unwind) return; RELOAD();
/* 5080cf: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5080d2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5080d3: ret  */
  esp += 4; SPILL(); return;
}

void f_50807d(void) {
  LOAD_REGS();
L_50807d: /* 50807d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_508080: /* 508080: cmp eax, 0x5ee348 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5ee348u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 508085: je 0x5080a5 */
  if (zf) goto L_5080a5;
L_508087: /* 508087: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 50808a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50808c: jne 0x508080 */
  if (!zf) goto L_508080;
L_50808e: /* 50808e: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 508093: push 0x5a4570 */
  { uint32_t v = 0x5a4570u; esp -= 4; W32(esp, v); }
/* 508098: push 0x5a45b4 */
  { uint32_t v = 0x5a45b4u; esp -= 4; W32(esp, v); }
/* 50809d: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x5080a2u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 5080a2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5080a5: /* 5080a5: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 5080a9: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5080ac: jne 0x5080b3 */
  if (!zf) goto L_5080b3;
L_5080ae: /* 5080ae: call 0x4e280b */
  esp -= 4; W32(esp, 0x5080b3u); SPILL(); f_4e280b(); if (g_unwind) return; RELOAD();
L_5080b3: /* 5080b3: mov ecx, dword ptr [0x5a0c94] */
  ecx = R32((uint32_t)(0x5a0c94u));
/* 5080b9: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 5080bd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5080bf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5080c0: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 5080c4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5080c6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5080c7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5080c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5080c9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5080ca: call 0x4e335a */
  esp -= 4; W32(esp, 0x5080cfu); SPILL(); f_4e335a(); if (g_unwind) return; RELOAD();
/* 5080cf: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5080d2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5080d3: ret  */
  esp += 4; SPILL(); return;
}

void f_508100(void) {
  LOAD_REGS();
L_508100: /* 508100: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 508101: mov ebp, esp */
  ebp = esp;
/* 508103: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 508105: push 0x556c40 */
  { uint32_t v = 0x556c40u; esp -= 4; W32(esp, v); }
/* 50810a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 508110: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 508111: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 508118: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 50811b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50811c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50811d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50811e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 508121: mov edi, ecx */
  edi = ecx;
/* 508123: mov esi, dword ptr [edi + 0x24] */
  esi = R32((uint32_t)(edi + 0x24u));
/* 508126: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 508128: push 0x5a4308 */
  { uint32_t v = 0x5a4308u; esp -= 4; W32(esp, v); }
/* 50812d: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 508130: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 508137: call 0x4e36a7 */
  esp -= 4; W32(esp, 0x50813cu); SPILL(); f_4e36a7(); if (g_unwind) return; RELOAD();
/* 50813c: mov eax, dword ptr [0x5a0c94] */
  eax = R32((uint32_t)(0x5a0c94u));
/* 508141: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 508144: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 508146: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 508148: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 508149: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50814b: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 50814d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50814e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50814f: push 0x6a6610 */
  { uint32_t v = 0x6a6610u; esp -= 4; W32(esp, v); }
/* 508154: call 0x4e2b1c */
  esp -= 4; W32(esp, 0x508159u); SPILL(); f_4e2b1c(); if (g_unwind) return; RELOAD();
/* 508159: mov esi, eax */
  esi = eax;
/* 50815b: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50815e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 508160: je 0x50817a */
  if (zf) goto L_50817a;
L_508162: /* 508162: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 508164: push 0x5ee330 */
  { uint32_t v = 0x5ee330u; esp -= 4; W32(esp, v); }
/* 508169: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 50816b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50816d: mov ecx, esi */
  ecx = esi;
/* 50816f: call 0x4e2c89 */
  esp -= 4; W32(esp, 0x508174u); SPILL(); f_4e2c89(); if (g_unwind) return; RELOAD();
/* 508174: mov dword ptr [esi], 0x56a228 */
  W32((uint32_t)(esi), 0x56a228u);
L_50817a: /* 50817a: mov esi, dword ptr [edi + 0x24] */
  esi = R32((uint32_t)(edi + 0x24u));
/* 50817d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 50817f: push 0x5a4320 */
  { uint32_t v = 0x5a4320u; esp -= 4; W32(esp, v); }
/* 508184: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 508187: call 0x4e36a7 */
  esp -= 4; W32(esp, 0x50818cu); SPILL(); f_4e36a7(); if (g_unwind) return; RELOAD();
/* 50818c: mov edx, dword ptr [0x5a0c94] */
  edx = R32((uint32_t)(0x5a0c94u));
/* 508192: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 508195: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 508197: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 508199: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50819a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50819c: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 50819e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50819f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5081a0: push 0x6a6610 */
  { uint32_t v = 0x6a6610u; esp -= 4; W32(esp, v); }
/* 5081a5: call 0x4e2b1c */
  esp -= 4; W32(esp, 0x5081aau); SPILL(); f_4e2b1c(); if (g_unwind) return; RELOAD();
/* 5081aa: mov esi, eax */
  esi = eax;
/* 5081ac: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5081af: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5081b1: je 0x5081cb */
  if (zf) goto L_5081cb;
L_5081b3: /* 5081b3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5081b5: push 0x5ee334 */
  { uint32_t v = 0x5ee334u; esp -= 4; W32(esp, v); }
/* 5081ba: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* 5081bc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5081be: mov ecx, esi */
  ecx = esi;
/* 5081c0: call 0x4e2c89 */
  esp -= 4; W32(esp, 0x5081c5u); SPILL(); f_4e2c89(); if (g_unwind) return; RELOAD();
/* 5081c5: mov dword ptr [esi], 0x56a228 */
  W32((uint32_t)(esi), 0x56a228u);
L_5081cb: /* 5081cb: mov esi, dword ptr [edi + 0x24] */
  esi = R32((uint32_t)(edi + 0x24u));
/* 5081ce: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 5081d0: push 0x5a4344 */
  { uint32_t v = 0x5a4344u; esp -= 4; W32(esp, v); }
/* 5081d5: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 5081d8: call 0x4e36a7 */
  esp -= 4; W32(esp, 0x5081ddu); SPILL(); f_4e36a7(); if (g_unwind) return; RELOAD();
/* 5081dd: mov ecx, dword ptr [0x5a0c94] */
  ecx = R32((uint32_t)(0x5a0c94u));
/* 5081e3: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 5081e6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5081e8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5081ea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5081eb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5081ed: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 5081ef: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5081f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5081f1: push 0x6a6610 */
  { uint32_t v = 0x6a6610u; esp -= 4; W32(esp, v); }
/* 5081f6: call 0x4e2b1c */
  esp -= 4; W32(esp, 0x5081fbu); SPILL(); f_4e2b1c(); if (g_unwind) return; RELOAD();
/* 5081fb: mov esi, eax */
  esi = eax;
/* 5081fd: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 508200: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 508202: je 0x50821c */
  if (zf) goto L_50821c;
L_508204: /* 508204: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 508206: push 0x5ee338 */
  { uint32_t v = 0x5ee338u; esp -= 4; W32(esp, v); }
/* 50820b: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 50820d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50820f: mov ecx, esi */
  ecx = esi;
/* 508211: call 0x4e2c89 */
  esp -= 4; W32(esp, 0x508216u); SPILL(); f_4e2c89(); if (g_unwind) return; RELOAD();
/* 508216: mov dword ptr [esi], 0x56a228 */
  W32((uint32_t)(esi), 0x56a228u);
L_50821c: /* 50821c: mov esi, dword ptr [edi + 0x24] */
  esi = R32((uint32_t)(edi + 0x24u));
/* 50821f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 508221: push 0x5a436c */
  { uint32_t v = 0x5a436cu; esp -= 4; W32(esp, v); }
/* 508226: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 508229: call 0x4e36a7 */
  esp -= 4; W32(esp, 0x50822eu); SPILL(); f_4e36a7(); if (g_unwind) return; RELOAD();
/* 50822e: mov eax, dword ptr [0x5a0c94] */
  eax = R32((uint32_t)(0x5a0c94u));
/* 508233: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 508236: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 508238: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50823a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50823b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50823d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 50823f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 508240: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 508241: push 0x6a60e0 */
  { uint32_t v = 0x6a60e0u; esp -= 4; W32(esp, v); }
/* 508246: call 0x4e2b1c */
  esp -= 4; W32(esp, 0x50824bu); SPILL(); f_4e2b1c(); if (g_unwind) return; RELOAD();
/* 50824b: mov esi, eax */
  esi = eax;
/* 50824d: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 508250: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 508252: je 0x508270 */
  if (zf) goto L_508270;
L_508254: /* 508254: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 508256: push 0x5ee33c */
  { uint32_t v = 0x5ee33cu; esp -= 4; W32(esp, v); }
/* 50825b: push 0x54 */
  { uint32_t v = 0x54u; esp -= 4; W32(esp, v); }
/* 50825d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50825f: mov ecx, esi */
  ecx = esi;
/* 508261: call 0x4e2c89 */
  esp -= 4; W32(esp, 0x508266u); SPILL(); f_4e2c89(); if (g_unwind) return; RELOAD();
/* 508266: mov dword ptr [esi], 0x56a3e8 */
  W32((uint32_t)(esi), 0x56a3e8u);
/* 50826c: mov edi, esi */
  edi = esi;
/* 50826e: jmp 0x508272 */
  goto L_508272;
L_508270: /* 508270: xor edi, edi */
  edi = 0;
L_508272: /* 508272: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 508274: push 0x5a437c */
  { uint32_t v = 0x5a437cu; esp -= 4; W32(esp, v); }
/* 508279: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 50827c: call 0x4e36a7 */
  esp -= 4; W32(esp, 0x508281u); SPILL(); f_4e36a7(); if (g_unwind) return; RELOAD();
/* 508281: mov edx, dword ptr [0x5a0c94] */
  edx = R32((uint32_t)(0x5a0c94u));
/* 508287: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 50828a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50828c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50828e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50828f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 508291: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 508293: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 508294: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 508295: push 0x6a6610 */
  { uint32_t v = 0x6a6610u; esp -= 4; W32(esp, v); }
/* 50829a: call 0x4e2b1c */
  esp -= 4; W32(esp, 0x50829fu); SPILL(); f_4e2b1c(); if (g_unwind) return; RELOAD();
/* 50829f: mov esi, eax */
  esi = eax;
/* 5082a1: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5082a4: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5082a6: je 0x5082c9 */
  if (zf) goto L_5082c9;
L_5082a8: /* 5082a8: mov ecx, esi */
  ecx = esi;
/* 5082aa: call 0x4e2d97 */
  esp -= 4; W32(esp, 0x5082afu); SPILL(); f_4e2d97(); if (g_unwind) return; RELOAD();
/* 5082af: mov dword ptr [esi], 0x56a228 */
  W32((uint32_t)(esi), 0x56a228u);
/* 5082b5: mov dword ptr [edi + 0x6c], esi */
  W32((uint32_t)(edi + 0x6cu), esi);
/* 5082b8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5082bb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5082c2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5082c3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5082c4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5082c5: mov esp, ebp */
  esp = ebp;
/* 5082c7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5082c8: ret  */
  esp += 4; SPILL(); return;
L_5082c9: /* 5082c9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5082cc: xor esi, esi */
  esi = 0;
/* 5082ce: mov dword ptr [edi + 0x6c], esi */
  W32((uint32_t)(edi + 0x6cu), esi);
/* 5082d1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5082d2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5082d3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5082da: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5082db: mov esp, ebp */
  esp = ebp;
/* 5082dd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5082de: ret  */
  esp += 4; SPILL(); return;
}

void f_5082df(void) {
  LOAD_REGS();
L_5082df: /* 5082df: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 5082e2: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 5082e7: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 5082ea: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5082eb: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 5082ee: call 0x554df6 */
  esp -= 4; W32(esp, 0x5082f3u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_5082f3(); return;
}

void f_5082f3(void) {
  LOAD_REGS();
L_5082f3: /* 5082f3: push 0x56b36c */
  { uint32_t v = 0x56b36cu; esp -= 4; W32(esp, v); }
/* 5082f8: push 0x5a4398 */
  { uint32_t v = 0x5a4398u; esp -= 4; W32(esp, v); }
/* 5082fd: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x508302u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 508302: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 508305: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 508307: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 508309: call 0x554df6 */
  esp -= 4; W32(esp, 0x50830eu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_50830e: guest_badaddr(0x50830e); return;
}

void f_5083a0(void) {
  LOAD_REGS();
L_5083a0: /* 5083a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 5083a1: mov ebp, esp */
  ebp = esp;
/* 5083a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5083a5: push 0x556c70 */
  { uint32_t v = 0x556c70u; esp -= 4; W32(esp, v); }
/* 5083aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 5083b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5083b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 5083b8: sub esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5083bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5083bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5083bd: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 5083c0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5083c1: xor edi, edi */
  edi = 0;
/* 5083c3: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5083c5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 5083c8: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 5083cb: jne 0x5083e1 */
  if (!zf) goto L_5083e1;
L_5083cd: /* 5083cd: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* 5083cf: push 0x5a43b0 */
  { uint32_t v = 0x5a43b0u; esp -= 4; W32(esp, v); }
/* 5083d4: push 0x5a43c0 */
  { uint32_t v = 0x5a43c0u; esp -= 4; W32(esp, v); }
/* 5083d9: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x5083deu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 5083de: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5083e1: /* 5083e1: mov dword ptr [ebp - 0x38], edi */
  W32((uint32_t)(ebp + 0xffffffc8u), edi);
/* 5083e4: mov dword ptr [ebp - 0x34], edi */
  W32((uint32_t)(ebp + 0xffffffccu), edi);
/* 5083e7: mov dword ptr [ebp - 0x30], edi */
  W32((uint32_t)(ebp + 0xffffffd0u), edi);
/* 5083ea: mov ebx, dword ptr [ebp + 0x24] */
  ebx = R32((uint32_t)(ebp + 0x24u));
/* 5083ed: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5083ef: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 5083f3: je 0x508451 */
  if (zf) goto L_508451;
L_5083f5: /* 5083f5: mov eax, dword ptr [ebx + 0x28] */
  eax = R32((uint32_t)(ebx + 0x28u));
L_5083f8: /* 5083f8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5083fa: je 0x508405 */
  if (zf) goto L_508405;
L_5083fc: /* 5083fc: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5083fe: je 0x50841c */
  if (zf) goto L_50841c;
L_508400: /* 508400: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 508403: jmp 0x5083f8 */
  goto L_5083f8;
L_508405: /* 508405: push 0x43 */
  { uint32_t v = 0x43u; esp -= 4; W32(esp, v); }
/* 508407: push 0x5a43c8 */
  { uint32_t v = 0x5a43c8u; esp -= 4; W32(esp, v); }
/* 50840c: push 0x5a43d8 */
  { uint32_t v = 0x5a43d8u; esp -= 4; W32(esp, v); }
/* 508411: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x508416u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 508416: mov edi, dword ptr [ebp - 0x34] */
  edi = R32((uint32_t)(ebp + 0xffffffccu));
/* 508419: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50841c: /* 50841c: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 50841f: mov esi, edi */
  esi = edi;
/* 508421: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 508422: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 508424: mov dword ptr [ebp - 0x34], edi */
  W32((uint32_t)(ebp + 0xffffffccu), edi);
/* 508427: jle 0x508446 */
  if ((zf || sf != of)) goto L_508446;
L_508429: /* 508429: lea eax, [edi + edi*2] */
  eax = (uint32_t)(edi + edi*2);
/* 50842c: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 50842d: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 508430: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 508432: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 508435: lea eax, [eax + edi + 0x20] */
  eax = (uint32_t)(eax + edi + 0x20u);
/* 508439: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 50843b: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 50843e: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 508441: call 0x4e4502 */
  esp -= 4; W32(esp, 0x508446u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_508446: /* 508446: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 508449: mov dword ptr [ecx + esi*4], ebx */
  W32((uint32_t)(ecx + esi*4), ebx);
/* 50844c: jmp 0x508544 */
  goto L_508544;
L_508451: /* 508451: mov dword ptr [ebp - 0x20], 0x5f0d80 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x5f0d80u);
/* 508458: mov dword ptr [ebp - 0x1c], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffe4u), 0xffffffffu);
L_50845f: /* 50845f: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 508462: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x508467u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 508467: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 50846a: cmp ebx, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 508470: jge 0x508537 */
  if ((sf == of)) goto L_508537;
L_508476: /* 508476: mov ecx, dword ptr [0x6a0f04] */
  ecx = R32((uint32_t)(0x6a0f04u));
/* 50847c: mov eax, dword ptr [ecx + ebx*4] */
  eax = R32((uint32_t)(ecx + ebx*4));
/* 50847f: nop  */
L_508480: /* 508480: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 508482: je 0x50845f */
  if (zf) goto L_50845f;
L_508484: /* 508484: cmp eax, 0x5ee348 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5ee348u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 508489: je 0x508490 */
  if (zf) goto L_508490;
L_50848b: /* 50848b: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 50848e: jmp 0x508480 */
  goto L_508480;
L_508490: /* 508490: mov esi, dword ptr [ecx + ebx*4] */
  esi = R32((uint32_t)(ecx + ebx*4));
/* 508493: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 508495: mov edi, dword ptr [esi + 0x4ec] */
  edi = R32((uint32_t)(esi + 0x4ecu));
/* 50849b: mov ecx, esi */
  ecx = esi;
/* 50849d: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x5084a0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5084a0: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5084a2: je 0x5084bb */
  if (zf) goto L_5084bb;
L_5084a4: /* 5084a4: push 0x21b */
  { uint32_t v = 0x21bu; esp -= 4; W32(esp, v); }
/* 5084a9: push 0x5a3b00 */
  { uint32_t v = 0x5a3b00u; esp -= 4; W32(esp, v); }
/* 5084ae: push 0x5a3ad4 */
  { uint32_t v = 0x5a3ad4u; esp -= 4; W32(esp, v); }
/* 5084b3: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x5084b8u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 5084b8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5084bb: /* 5084bb: mov esi, dword ptr [esi + 0x4e8] */
  esi = R32((uint32_t)(esi + 0x4e8u));
/* 5084c1: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
L_5084c4: /* 5084c4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5084c6: je 0x50852f */
  if (zf) goto L_50852f;
L_5084c8: /* 5084c8: cmp eax, dword ptr [esi + 0x28] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x28u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5084cb: je 0x5084d2 */
  if (zf) goto L_5084d2;
L_5084cd: /* 5084cd: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 5084d0: jmp 0x5084c4 */
  goto L_5084c4;
L_5084d2: /* 5084d2: mov eax, dword ptr [esi + 0x64] */
  eax = R32((uint32_t)(esi + 0x64u));
/* 5084d5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 5084d7: jl 0x50852f */
  if ((sf != of)) goto L_50852f;
L_5084d9: /* 5084d9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5084db: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5084dc: mov eax, esp */
  eax = esp;
/* 5084de: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 5084e4: mov eax, dword ptr [0x6a0f04] */
  eax = R32((uint32_t)(0x6a0f04u));
/* 5084e9: mov eax, dword ptr [eax + ebx*4] */
  eax = R32((uint32_t)(eax + ebx*4));
/* 5084ec: mov dword ptr [ebp - 0x24], esp */
  W32((uint32_t)(ebp + 0xffffffdcu), esp);
/* 5084ef: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5084f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5084f2: call 0x4e3aad */
  esp -= 4; W32(esp, 0x5084f7u); SPILL(); f_4e3aad(); if (g_unwind) return; RELOAD();
/* 5084f7: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 5084fa: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5084fd: mov esi, eax */
  esi = eax;
/* 5084ff: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 508502: mov edi, ecx */
  edi = ecx;
/* 508504: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 508505: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 508507: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 50850a: jle 0x508529 */
  if ((zf || sf != of)) goto L_508529;
L_50850c: /* 50850c: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 50850f: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 508510: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 508513: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 508515: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 508518: lea ecx, [eax + ecx + 0x20] */
  ecx = (uint32_t)(eax + ecx + 0x20u);
/* 50851c: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 50851f: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 508521: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 508524: call 0x4e4502 */
  esp -= 4; W32(esp, 0x508529u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_508529: /* 508529: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 50852c: mov dword ptr [edx + edi*4], esi */
  W32((uint32_t)(edx + edi*4), esi);
L_50852f: /* 50852f: mov edi, dword ptr [ebp - 0x34] */
  edi = R32((uint32_t)(ebp + 0xffffffccu));
/* 508532: jmp 0x50845f */
  goto L_50845f;
L_508537: /* 508537: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 50853a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50853b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50853c: call 0x4e2d3d */
  esp -= 4; W32(esp, 0x508541u); SPILL(); f_4e2d3d(); if (g_unwind) return; RELOAD();
/* 508541: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_508544: /* 508544: mov ebx, dword ptr [ebp + 0x1c] */
  ebx = R32((uint32_t)(ebp + 0x1cu));
/* 508547: xor edi, edi */
  edi = 0;
L_508549: /* 508549: cmp edi, dword ptr [ebp - 0x34] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50854c: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 50854f: jge 0x5088a4 */
  if ((sf == of)) goto L_5088a4;
L_508555: /* 508555: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 508558: mov esi, dword ptr [ecx + edi*4] */
  esi = R32((uint32_t)(ecx + edi*4));
/* 50855b: test byte ptr [esi + 0x60], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x60u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 50855f: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 508566: je 0x508601 */
  if (zf) goto L_508601;
L_50856c: /* 50856c: push 0x5ee340 */
  { uint32_t v = 0x5ee340u; esp -= 4; W32(esp, v); }
/* 508571: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 508572: call 0x4e26df */
  esp -= 4; W32(esp, 0x508577u); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 508577: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50857a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50857c: jne 0x50889e */
  if (!zf) goto L_50889e;
L_508582: /* 508582: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 508585: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* 508588: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* 50858b: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* 50858e: mov ecx, dword ptr [ecx + 0x20] */
  ecx = R32((uint32_t)(ecx + 0x20u));
/* 508591: mov edx, eax */
  edx = eax;
/* 508593: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 508594: shr edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 508597: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 50859a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50859b: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 50859e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50859f: mov eax, dword ptr [0x69a758] */
  eax = R32((uint32_t)(0x69a758u));
/* 5085a4: mov edx, dword ptr [eax + ecx*4] */
  edx = R32((uint32_t)(eax + ecx*4));
/* 5085a7: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 5085aa: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 5085ad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5085ae: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* 5085b1: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 5085b4: mov ecx, dword ptr [0x5a0c90] */
  ecx = R32((uint32_t)(0x5a0c90u));
/* 5085ba: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5085bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5085be: push 0x5a4408 */
  { uint32_t v = 0x5a4408u; esp -= 4; W32(esp, v); }
/* 5085c3: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* 5085c8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5085c9: call 0x4e30df */
  esp -= 4; W32(esp, 0x5085ceu); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 5085ce: mov edx, dword ptr [ebp + 0x28] */
  edx = R32((uint32_t)(ebp + 0x28u));
/* 5085d1: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5085d4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5085d5: mov ecx, esi */
  ecx = esi;
/* 5085d7: call 0x4e436d */
  esp -= 4; W32(esp, 0x5085dcu); SPILL(); f_4e436d(); if (g_unwind) return; RELOAD();
/* 5085dc: mov ecx, dword ptr [ebp + 0x2c] */
  ecx = R32((uint32_t)(ebp + 0x2cu));
/* 5085df: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 5085e2: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 5085e4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5085e5: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 5085e8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5085ea: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5085eb: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 5085ee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5085ef: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 5085f2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5085f3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5085f4: mov ecx, esi */
  ecx = esi;
/* 5085f6: call dword ptr [eax + 0x70] */
  { uint32_t t = R32((uint32_t)(eax + 0x70u)); esp -= 4; W32(esp, 0x5085f9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5085f9: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 5085fc: jmp 0x50881e */
  goto L_50881e;
L_508601: /* 508601: push 0x5ee344 */
  { uint32_t v = 0x5ee344u; esp -= 4; W32(esp, v); }
/* 508606: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 508607: call 0x4e26df */
  esp -= 4; W32(esp, 0x50860cu); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 50860c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50860f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 508611: je 0x50889e */
  if (zf) goto L_50889e;
L_508617: /* 508617: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* 50861a: mov ecx, eax */
  ecx = eax;
/* 50861c: shr ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 50861f: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 508622: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  ecx = r;
  }
/* 508625: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 508626: je 0x508725 */
  if (zf) goto L_508725;
L_50862c: /* 50862c: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 50862f: mov edx, dword ptr [edx + edi*4] */
  edx = R32((uint32_t)(edx + edi*4));
/* 508632: mov edx, dword ptr [edx + 0x24] */
  edx = R32((uint32_t)(edx + 0x24u));
/* 508635: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 508636: mov ecx, dword ptr [edx + 0x20] */
  ecx = R32((uint32_t)(edx + 0x20u));
/* 508639: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50863a: mov eax, dword ptr [0x69a758] */
  eax = R32((uint32_t)(0x69a758u));
/* 50863f: mov edx, dword ptr [eax + ecx*4] */
  edx = R32((uint32_t)(eax + ecx*4));
/* 508642: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 508645: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 508648: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 508649: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* 50864c: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 50864f: mov ecx, dword ptr [0x5a0c90] */
  ecx = R32((uint32_t)(0x5a0c90u));
/* 508655: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 508658: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 508659: push 0x5a4458 */
  { uint32_t v = 0x5a4458u; esp -= 4; W32(esp, v); }
/* 50865e: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* 508663: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 508664: call 0x4e30df */
  esp -= 4; W32(esp, 0x508669u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 508669: xor eax, eax */
  eax = 0;
/* 50866b: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50866e: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 508671: mov dword ptr [ebp - 0x4c], eax */
  W32((uint32_t)(ebp + 0xffffffb4u), eax);
/* 508674: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 508677: mov edx, dword ptr [0x5a0ca4] */
  edx = R32((uint32_t)(0x5a0ca4u));
/* 50867d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50867e: lea eax, [ebp - 0x50] */
  eax = (uint32_t)(ebp + 0xffffffb0u);
/* 508681: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 508682: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 508683: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 508687: call 0x4e3c24 */
  esp -= 4; W32(esp, 0x50868cu); SPILL(); f_4e3c24(); if (g_unwind) return; RELOAD();
/* 50868c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50868f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 508691: je 0x5086fe */
  if (zf) goto L_5086fe;
L_508693: /* 508693: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 508696: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 508698: je 0x5086a2 */
  if (zf) goto L_5086a2;
L_50869a: /* 50869a: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 50869d: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 5086a0: jmp 0x5086a9 */
  goto L_5086a9;
L_5086a2: /* 5086a2: mov dword ptr [ebp - 0x18], 0x5ed66c */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x5ed66cu);
L_5086a9: /* 5086a9: mov edx, dword ptr [ebp + 0x28] */
  edx = R32((uint32_t)(ebp + 0x28u));
/* 5086ac: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5086ad: mov ecx, esi */
  ecx = esi;
/* 5086af: call 0x4e436d */
  esp -= 4; W32(esp, 0x5086b4u); SPILL(); f_4e436d(); if (g_unwind) return; RELOAD();
/* 5086b4: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 5086b7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5086b9: je 0x5086c0 */
  if (zf) goto L_5086c0;
L_5086bb: /* 5086bb: lea edi, [eax - 1] */
  edi = (uint32_t)(eax + 0xffffffffu);
/* 5086be: jmp 0x5086c2 */
  goto L_5086c2;
L_5086c0: /* 5086c0: xor edi, edi */
  edi = 0;
L_5086c2: /* 5086c2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5086c3: call 0x4e3d82 */
  esp -= 4; W32(esp, 0x5086c8u); SPILL(); f_4e3d82(); if (g_unwind) return; RELOAD();
/* 5086c8: mov ecx, dword ptr [ebp + 0x2c] */
  ecx = R32((uint32_t)(ebp + 0x2cu));
/* 5086cb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5086ce: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5086cf: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 5086d2: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 5086d4: lea ecx, [ecx + edi*2] */
  ecx = (uint32_t)(ecx + edi*2);
/* 5086d7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5086d8: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 5086db: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5086dc: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 5086df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5086e0: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 5086e3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5086e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5086e6: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 5086e9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5086ea: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 5086ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5086ee: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 5086f1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5086f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5086f3: mov ecx, esi */
  ecx = esi;
/* 5086f5: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0x5086f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5086f8: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 5086fb: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_5086fe: /* 5086fe: xor eax, eax */
  eax = 0;
/* 508700: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 508702: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 508705: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 508709: mov dword ptr [ebp - 0x4c], eax */
  W32((uint32_t)(ebp + 0xffffffb4u), eax);
/* 50870c: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 50870f: call 0x4e4502 */
  esp -= 4; W32(esp, 0x508714u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 508714: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 508717: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 50871b: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x508720u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 508720: jmp 0x50881e */
  goto L_50881e;
L_508725: /* 508725: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 508728: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* 50872b: mov ecx, dword ptr [edx + 0x24] */
  ecx = R32((uint32_t)(edx + 0x24u));
/* 50872e: mov ecx, dword ptr [ecx + 0x20] */
  ecx = R32((uint32_t)(ecx + 0x20u));
/* 508731: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 508733: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 508734: mov eax, dword ptr [0x69a758] */
  eax = R32((uint32_t)(0x69a758u));
/* 508739: mov edx, dword ptr [eax + ecx*4] */
  edx = R32((uint32_t)(eax + ecx*4));
/* 50873c: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 50873f: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 508742: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 508743: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* 508746: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 508749: mov ecx, dword ptr [0x5a0c90] */
  ecx = R32((uint32_t)(0x5a0c90u));
/* 50874f: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 508752: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 508753: push 0x5a44b0 */
  { uint32_t v = 0x5a44b0u; esp -= 4; W32(esp, v); }
/* 508758: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* 50875d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50875e: call 0x4e30df */
  esp -= 4; W32(esp, 0x508763u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 508763: xor eax, eax */
  eax = 0;
/* 508765: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 508768: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 50876b: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 50876e: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 508771: mov edx, dword ptr [0x5a0ca4] */
  edx = R32((uint32_t)(0x5a0ca4u));
/* 508777: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 508778: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 50877b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50877c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50877d: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 508781: call 0x4e23ce */
  esp -= 4; W32(esp, 0x508786u); SPILL(); f_4e23ce(); if (g_unwind) return; RELOAD();
/* 508786: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 508789: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50878b: je 0x508812 */
  if (zf) goto L_508812;
L_508791: /* 508791: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 508794: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 508797: mov edi, ecx */
  edi = ecx;
/* 508799: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 50879a: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50879c: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* 50879f: jle 0x5087be */
  if ((zf || sf != of)) goto L_5087be;
L_5087a1: /* 5087a1: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 5087a4: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 5087a5: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 5087a8: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5087aa: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 5087ad: lea ecx, [eax + ecx + 0x20] */
  ecx = (uint32_t)(eax + ecx + 0x20u);
/* 5087b1: mov dword ptr [ebp - 0x3c], ecx */
  W32((uint32_t)(ebp + 0xffffffc4u), ecx);
/* 5087b4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 5087b6: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 5087b9: call 0x4e4502 */
  esp -= 4; W32(esp, 0x5087beu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_5087be: /* 5087be: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 5087c1: mov ecx, dword ptr [ebp + 0x28] */
  ecx = R32((uint32_t)(ebp + 0x28u));
/* 5087c4: mov byte ptr [edi + edx], 0 */
  W8((uint32_t)(edi + edx), 0x0u);
/* 5087c8: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 5087cb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5087cc: mov ecx, esi */
  ecx = esi;
/* 5087ce: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 5087d1: call 0x4e436d */
  esp -= 4; W32(esp, 0x5087d6u); SPILL(); f_4e436d(); if (g_unwind) return; RELOAD();
/* 5087d6: mov edi, dword ptr [ebp - 0x40] */
  edi = R32((uint32_t)(ebp + 0xffffffc0u));
/* 5087d9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5087da: call 0x4e3d82 */
  esp -= 4; W32(esp, 0x5087dfu); SPILL(); f_4e3d82(); if (g_unwind) return; RELOAD();
/* 5087df: mov ecx, dword ptr [ebp + 0x2c] */
  ecx = R32((uint32_t)(ebp + 0x2cu));
/* 5087e2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5087e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5087e6: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 5087e9: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 5087eb: lea ecx, [edi + ecx - 1] */
  ecx = (uint32_t)(edi + ecx + 0xffffffffu);
/* 5087ef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5087f0: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 5087f3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5087f4: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 5087f7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5087f8: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 5087fb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5087fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5087fe: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 508801: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 508802: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 508805: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 508806: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 508807: mov ecx, esi */
  ecx = esi;
/* 508809: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0x50880cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50880c: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 50880f: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_508812: /* 508812: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 508815: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 508819: call 0x4e33c8 */
  esp -= 4; W32(esp, 0x50881eu); SPILL(); f_4e33c8(); if (g_unwind) return; RELOAD();
L_50881e: /* 50881e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 508821: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 508823: je 0x50889e */
  if (zf) goto L_50889e;
L_508825: /* 508825: mov eax, dword ptr [eax + 0x24] */
  eax = R32((uint32_t)(eax + 0x24u));
/* 508828: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 50882b: jmp 0x508830 */
  goto L_508830;
L_508830: /* 508830: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 508832: je 0x50883d */
  if (zf) goto L_50883d;
L_508834: /* 508834: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 508836: je 0x50885c */
  if (zf) goto L_50885c;
L_508838: /* 508838: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 50883b: jmp 0x508830 */
  goto L_508830;
L_50883d: /* 50883d: xor eax, eax */
  eax = 0;
/* 50883f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 508841: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 508844: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 508846: jne 0x50885c */
  if (!zf) goto L_50885c;
L_508848: /* 508848: push 0x7f */
  { uint32_t v = 0x7fu; esp -= 4; W32(esp, v); }
/* 50884a: push 0x5a4508 */
  { uint32_t v = 0x5a4508u; esp -= 4; W32(esp, v); }
/* 50884f: push 0x5a4518 */
  { uint32_t v = 0x5a4518u; esp -= 4; W32(esp, v); }
/* 508854: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x508859u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 508859: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50885c: /* 50885c: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 50885f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 508861: jne 0x50887e */
  if (!zf) goto L_50887e;
L_508863: /* 508863: xor esi, esi */
  esi = 0;
L_508865: /* 508865: cmp esi, dword ptr [ebp - 0x34] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 508868: jge 0x50887e */
  if ((sf == of)) goto L_50887e;
L_50886a: /* 50886a: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 50886d: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 508870: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 508872: je 0x50887b */
  if (zf) goto L_50887b;
L_508874: /* 508874: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 508876: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 508878: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x50887bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_50887b: /* 50887b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 50887c: jmp 0x508865 */
  goto L_508865;
L_50887e: /* 50887e: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 508881: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 508885: call 0x4e36cf */
  esp -= 4; W32(esp, 0x50888au); SPILL(); f_4e36cf(); if (g_unwind) return; RELOAD();
/* 50888a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 50888d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 508890: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 508897: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 508898: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 508899: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50889a: mov esp, ebp */
  esp = ebp;
/* 50889c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50889d: ret  */
  esp += 4; SPILL(); return;
L_50889e: /* 50889e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 50889f: jmp 0x508549 */
  goto L_508549;
L_5088a4: /* 5088a4: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 5088a7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5088a9: jne 0x5088c9 */
  if (!zf) goto L_5088c9;
L_5088ab: /* 5088ab: xor esi, esi */
  esi = 0;
/* 5088ad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_5088b0: /* 5088b0: cmp esi, dword ptr [ebp - 0x34] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5088b3: jge 0x5088c9 */
  if ((sf == of)) goto L_5088c9;
L_5088b5: /* 5088b5: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 5088b8: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* 5088bb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5088bd: je 0x5088c6 */
  if (zf) goto L_5088c6;
L_5088bf: /* 5088bf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5088c1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 5088c3: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x5088c6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_5088c6: /* 5088c6: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 5088c7: jmp 0x5088b0 */
  goto L_5088b0;
L_5088c9: /* 5088c9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5088cb: push 0x5a452c */
  { uint32_t v = 0x5a452cu; esp -= 4; W32(esp, v); }
/* 5088d0: push 0x5a4538 */
  { uint32_t v = 0x5a4538u; esp -= 4; W32(esp, v); }
/* 5088d5: call 0x4e1613 */
  esp -= 4; W32(esp, 0x5088dau); SPILL(); f_4e1613(); if (g_unwind) return; RELOAD();
/* 5088da: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5088dd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5088de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5088df: mov eax, dword ptr [ebp + 0x2c] */
  eax = R32((uint32_t)(ebp + 0x2cu));
/* 5088e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5088e3: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x5088e8u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 5088e8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5088eb: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 5088ee: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 5088f2: call 0x4e36cf */
  esp -= 4; W32(esp, 0x5088f7u); SPILL(); f_4e36cf(); if (g_unwind) return; RELOAD();
/* 5088f7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5088fa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5088fb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5088fc: xor eax, eax */
  eax = 0;
/* 5088fe: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 508905: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 508906: mov esp, ebp */
  esp = ebp;
/* 508908: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 508909: ret  */
  esp += 4; SPILL(); return;
}

void f_50882d(void) {
  LOAD_REGS();
L_50882d: /* 50882d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_508830: /* 508830: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 508832: je 0x50883d */
  if (zf) goto L_50883d;
L_508834: /* 508834: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 508836: je 0x50885c */
  if (zf) goto L_50885c;
L_508838: /* 508838: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 50883b: jmp 0x508830 */
  goto L_508830;
L_50883d: /* 50883d: xor eax, eax */
  eax = 0;
/* 50883f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 508841: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 508844: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 508846: jne 0x50885c */
  if (!zf) goto L_50885c;
L_508848: /* 508848: push 0x7f */
  { uint32_t v = 0x7fu; esp -= 4; W32(esp, v); }
/* 50884a: push 0x5a4508 */
  { uint32_t v = 0x5a4508u; esp -= 4; W32(esp, v); }
/* 50884f: push 0x5a4518 */
  { uint32_t v = 0x5a4518u; esp -= 4; W32(esp, v); }
/* 508854: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x508859u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 508859: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50885c: /* 50885c: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 50885f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 508861: jne 0x50887e */
  if (!zf) goto L_50887e;
L_508863: /* 508863: xor esi, esi */
  esi = 0;
L_508865: /* 508865: cmp esi, dword ptr [ebp - 0x34] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 508868: jge 0x50887e */
  if ((sf == of)) goto L_50887e;
L_50886a: /* 50886a: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 50886d: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 508870: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 508872: je 0x50887b */
  if (zf) goto L_50887b;
L_508874: /* 508874: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 508876: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 508878: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x50887bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_50887b: /* 50887b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 50887c: jmp 0x508865 */
  goto L_508865;
L_50887e: /* 50887e: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 508881: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 508885: call 0x4e36cf */
  esp -= 4; W32(esp, 0x50888au); SPILL(); f_4e36cf(); if (g_unwind) return; RELOAD();
/* 50888a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 50888d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 508890: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 508897: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 508898: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 508899: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50889a: mov esp, ebp */
  esp = ebp;
/* 50889c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50889d: ret  */
  esp += 4; SPILL(); return;
}

void f_50890a(void) {
  LOAD_REGS();
L_50890a: /* 50890a: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 50890d: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 508912: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 508915: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 508916: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 508919: call 0x554df6 */
  esp -= 4; W32(esp, 0x50891eu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_50891e(); return;
}

void f_50891e(void) {
  LOAD_REGS();
L_50891e: /* 50891e: push 0x56b3b0 */
  { uint32_t v = 0x56b3b0u; esp -= 4; W32(esp, v); }
/* 508923: push 0x5a4554 */
  { uint32_t v = 0x5a4554u; esp -= 4; W32(esp, v); }
/* 508928: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x50892du); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 50892d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 508930: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 508932: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 508934: call 0x554df6 */
  esp -= 4; W32(esp, 0x508939u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_508939: guest_badaddr(0x508939); return;
}

void f_508ab0(void) {
  LOAD_REGS();
L_508ab0: /* 508ab0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 508ab1: mov esi, ecx */
  esi = ecx;
/* 508ab3: call 0x4e245a */
  esp -= 4; W32(esp, 0x508ab8u); SPILL(); f_4e245a(); if (g_unwind) return; RELOAD();
/* 508ab8: xor eax, eax */
  eax = 0;
/* 508aba: mov dword ptr [esi], 0x56ab50 */
  W32((uint32_t)(esi), 0x56ab50u);
/* 508ac0: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 508ac3: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 508ac6: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* 508ac9: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* 508acc: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 508acf: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* 508ad2: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 508ad5: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* 508ad8: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* 508adb: mov eax, esi */
  eax = esi;
/* 508add: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 508ade: ret  */
  esp += 4; SPILL(); return;
}

void f_508af0(void) {
  LOAD_REGS();
L_508af0: /* 508af0: fldl2e  */
  FPUSH(1.442695040888963407360);
/* 508af2: fmul qword ptr [esp + 4] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x4u)));
/* 508af6: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 508af8: frndint  */
  ST0 = fpu_round(ST0);
/* 508afa: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 508afc: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 508afe: f2xm1  */
  ST0 = exp2(ST0) - 1.0;
/* 508b00: fld1  */
  FPUSH(1.0);
/* 508b02: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 508b04: fscale  */
  ST0 = ldexp(ST0, (int)trunc(STI(1)));
/* 508b06: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 508b08: ret  */
  esp += 4; SPILL(); return;
}

void f_508b20(void) {
  LOAD_REGS();
L_508b20: /* 508b20: fldln2  */
  FPUSH(0.693147180559945309417);
/* 508b22: fld qword ptr [esp + 4] */
  { double v = F64((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 508b26: fyl2x  */
  STI(1) = STI(1) * log2(ST0); FPOP();
/* 508b28: ret  */
  esp += 4; SPILL(); return;
}

void f_508b40(void) {
  LOAD_REGS();
L_508b40: /* 508b40: fld qword ptr [esp + 4] */
  { double v = F64((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 508b44: fld qword ptr [esp + 0xc] */
  { double v = F64((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 508b48: jmp 0x55505c */
  goto L_55505c;
L_55505c: /* 55505c: jmp dword ptr [0x6ac660] */
  SPILL(); f_4082cf(); return; /* MSVCR70!_CIfmod */
}

void f_508b60(void) {
  LOAD_REGS();
L_508b60: /* 508b60: fld qword ptr [esp + 4] */
  { double v = F64((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 508b64: fsin  */
  ST0 = sin(ST0); FSW_CC &= ~0x400;
/* 508b66: ret  */
  esp += 4; SPILL(); return;
}

void f_508b80(void) {
  LOAD_REGS();
L_508b80: /* 508b80: fld qword ptr [esp + 4] */
  { double v = F64((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 508b84: jmp 0x555062 */
  goto L_555062;
L_555062: /* 555062: jmp dword ptr [0x6ac664] */
  SPILL(); hle_CIasin(); return; /* MSVCR70!_CIasin */
}

void f_508ba0(void) {
  LOAD_REGS();
L_508ba0: /* 508ba0: fld qword ptr [esp + 4] */
  { double v = F64((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 508ba4: fcos  */
  ST0 = cos(ST0); FSW_CC &= ~0x400;
/* 508ba6: ret  */
  esp += 4; SPILL(); return;
}

void f_508bc0(void) {
  LOAD_REGS();
L_508bc0: /* 508bc0: fld qword ptr [esp + 4] */
  { double v = F64((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 508bc4: jmp 0x555068 */
  goto L_555068;
L_555068: /* 555068: jmp dword ptr [0x6ac668] */
  SPILL(); hle_CIacos(); return; /* MSVCR70!_CIacos */
}

void f_508be0(void) {
  LOAD_REGS();
L_508be0: /* 508be0: fld qword ptr [esp + 4] */
  { double v = F64((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 508be4: fptan  */
  ST0 = tan(ST0); FPUSH(1.0); FSW_CC &= ~0x400;
/* 508be6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 508be8: ret  */
  esp += 4; SPILL(); return;
}

void f_508c00(void) {
  LOAD_REGS();
L_508c00: /* 508c00: fld qword ptr [esp + 4] */
  { double v = F64((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 508c04: fld1  */
  FPUSH(1.0);
/* 508c06: fpatan  */
  STI(1) = atan2(STI(1), ST0); FPOP();
/* 508c08: ret  */
  esp += 4; SPILL(); return;
}

void f_508c20(void) {
  LOAD_REGS();
L_508c20: /* 508c20: fld qword ptr [esp + 4] */
  { double v = F64((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 508c24: fld qword ptr [esp + 0xc] */
  { double v = F64((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 508c28: fpatan  */
  STI(1) = atan2(STI(1), ST0); FPOP();
/* 508c2a: ret  */
  esp += 4; SPILL(); return;
}

void f_508c40(void) {
  LOAD_REGS();
L_508c40: /* 508c40: fld qword ptr [esp + 4] */
  { double v = F64((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 508c44: fsqrt  */
  ST0 = sqrt(ST0);
/* 508c46: ret  */
  esp += 4; SPILL(); return;
}

void f_508c60(void) {
  LOAD_REGS();
L_508c60: /* 508c60: fld qword ptr [esp + 4] */
  { double v = F64((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 508c64: fld qword ptr [esp + 0xc] */
  { double v = F64((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 508c68: jmp 0x55506e */
  goto L_55506e;
L_55506e: /* 55506e: jmp dword ptr [0x6ac66c] */
  SPILL(); hle_CIpow(); return; /* MSVCR70!_CIpow */
}

void f_508c80(void) {
  LOAD_REGS();
L_508c80: /* 508c80: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 508c84: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 508c88: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 508c89: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 508c8a: call dword ptr [0x6ac670] */
  esp -= 4; W32(esp, 0x508c90u); SPILL(); f_432b8a(); if (g_unwind) return; /* MSVCR70!_isnan */ RELOAD();
/* 508c90: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 508c93: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 508c94: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 508c96: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 508c98: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 508c99: ret  */
  esp += 4; SPILL(); return;
}

void f_508cb0(void) {
  LOAD_REGS();
L_508cb0: /* 508cb0: jmp dword ptr [0x6ac674] */
  SPILL(); f_42836d(); return; /* MSVCR70!rand */
}

void f_508cd0(void) {
  LOAD_REGS();
L_508cd0: /* 508cd0: jmp dword ptr [0x6ac678] */
  SPILL(); f_428360(); return; /* MSVCR70!srand */
}

void f_508cf0(void) {
  LOAD_REGS();
L_508cf0: /* 508cf0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 508cf1: call dword ptr [0x6ac674] */
  esp -= 4; W32(esp, 0x508cf7u); SPILL(); f_42836d(); if (g_unwind) return; /* MSVCR70!rand */ RELOAD();
/* 508cf7: mov dword ptr [esp], eax */
  W32((uint32_t)(esp), eax);
/* 508cfb: fild dword ptr [esp] */
  { double v = (double)(int32_t)R32((uint32_t)(esp)); FPUSH(v); }
/* 508cff: fmul dword ptr [0x56b3f8] */
  ST0 = ST0 * (F32((uint32_t)(0x56b3f8u)));
/* 508d05: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 508d06: ret  */
  esp += 4; SPILL(); return;
}

void f_508d20(void) {
  LOAD_REGS();
L_508d20: /* 508d20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 508d24: mov dword ptr [0x5ee98c], eax */
  W32((uint32_t)(0x5ee98cu), eax);
/* 508d29: ret  */
  esp += 4; SPILL(); return;
}

void f_508d40(void) {
  LOAD_REGS();
L_508d40: /* 508d40: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 508d44: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 508d47: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 508d4a: call dword ptr [0x6ac67c] */
  esp -= 4; W32(esp, 0x508d50u); SPILL(); hle_floor(); if (g_unwind) return; /* MSVCR70!floor */ RELOAD();
/* 508d50: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 508d53: jmp 0x554f00 */
  SPILL(); f_554f00(); return;
}

void f_508d70(void) {
  LOAD_REGS();
L_508d70: /* 508d70: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 508d74: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 508d77: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 508d7a: call dword ptr [0x6ac680] */
  esp -= 4; W32(esp, 0x508d80u); SPILL(); hle_ceil(); if (g_unwind) return; /* MSVCR70!ceil */ RELOAD();
/* 508d80: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 508d83: jmp 0x554f00 */
  SPILL(); f_554f00(); return;
}

void f_508da0(void) {
  LOAD_REGS();
L_508da0: /* 508da0: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 508da4: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 508da7: fadd qword ptr [0x569470] */
  ST0 = ST0 + (F64((uint32_t)(0x569470u)));
/* 508dad: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 508db0: call dword ptr [0x6ac67c] */
  esp -= 4; W32(esp, 0x508db6u); SPILL(); hle_floor(); if (g_unwind) return; /* MSVCR70!floor */ RELOAD();
/* 508db6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 508db9: jmp 0x554f00 */
  SPILL(); f_554f00(); return;
}

void f_508dd0(void) {
  LOAD_REGS();
L_508dd0: /* 508dd0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 508dd1: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 508dd5: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 508dd8: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 508ddb: call dword ptr [0x6ac67c] */
  esp -= 4; W32(esp, 0x508de1u); SPILL(); hle_floor(); if (g_unwind) return; /* MSVCR70!floor */ RELOAD();
/* 508de1: call 0x554f00 */
  esp -= 4; W32(esp, 0x508de6u); SPILL(); f_554f00(); if (g_unwind) return; RELOAD();
/* 508de6: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 508dea: fild dword ptr [esp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 508dee: fsubr dword ptr [esp + 0x10] */
  ST0 = (F32((uint32_t)(esp + 0x10u))) - ST0;
/* 508df2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 508df5: ret  */
  esp += 4; SPILL(); return;
}

void f_508e10(void) {
  LOAD_REGS();
L_508e10: /* 508e10: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 508e14: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 508e15: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 508e19: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 508e1a: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 508e1e: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 508e20: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  cf = (a) < (b);
  } }
/* 508e22: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 508e23: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 508e24: je 0x508e2b */
  if (zf) goto L_508e2b;
L_508e26: /* 508e26: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  cf = cin ? ((a) <= (b)) : ((a) < (b));
  eax = r;
  }
/* 508e28: sbb eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
L_508e2b: /* 508e2b: ret  */
  esp += 4; SPILL(); return;
}

void f_508e40(void) {
  LOAD_REGS();
L_508e40: /* 508e40: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 508e44: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 508e46: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 508e4a: jle 0x508e5c */
  if ((zf || sf != of)) goto L_508e5c;
L_508e4c: /* 508e4c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_508e50: /* 508e50: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 508e52: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 508e53: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 508e54: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 508e56: jne 0x508e62 */
  if (!zf) goto L_508e62;
L_508e58: /* 508e58: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 508e5a: jg 0x508e50 */
  if ((!zf && sf == of)) goto L_508e50;
L_508e5c: /* 508e5c: mov eax, 1 */
  eax = 0x1u;
/* 508e61: ret  */
  esp += 4; SPILL(); return;
L_508e62: /* 508e62: xor eax, eax */
  eax = 0;
/* 508e64: ret  */
  esp += 4; SPILL(); return;
}

void f_508e80(void) { hle_memcpy(); }

void f_508ea0(void) {
  LOAD_REGS();
L_508ea0: /* 508ea0: mov al, byte ptr [esp + 8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 508ea4: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 508ea8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 508ea9: mov bl, al */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* 508eab: mov bh, bl */
  ebx = (ebx & 0xffff00ffu) | (((uint32_t)((ebx & 0xffu)) & 0xffu) << 8);
/* 508ead: mov edx, ecx */
  edx = ecx;
/* 508eaf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 508eb0: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 508eb4: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 508eb7: mov eax, ebx */
  eax = ebx;
/* 508eb9: shl eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 508ebc: mov ax, bx */
  eax = (eax & 0xffff0000u) | ((uint32_t)((ebx & 0xffffu)) & 0xffffu);
/* 508ebf: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 508ec1: mov ecx, edx */
  ecx = edx;
/* 508ec3: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 508ec6: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 508ec8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 508ec9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 508eca: ret  */
  esp += 4; SPILL(); return;
}

void f_508ee0(void) {
  LOAD_REGS();
L_508ee0: /* 508ee0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 508ee4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 508ee5: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 508ee9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 508eea: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 508eee: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 508eef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 508ef0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 508ef1: call dword ptr [0x6ac688] */
  esp -= 4; W32(esp, 0x508ef7u); SPILL(); f_401a95(); if (g_unwind) return; /* MSVCR70!wcsncpy */ RELOAD();
/* 508ef7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 508efa: mov word ptr [esi + edi*2 - 2], 0 */
  W16((uint32_t)(esi + edi*2 + 0xfffffffeu), 0x0u);
/* 508f01: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 508f02: mov eax, esi */
  eax = esi;
/* 508f04: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 508f05: ret  */
  esp += 4; SPILL(); return;
}

void f_508f20(void) {
  LOAD_REGS();
L_508f20: /* 508f20: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 508f24: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 508f26: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 508f29: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 508f2d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 508f2e: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 508f32: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 508f33: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 508f34: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 508f35: call dword ptr [0x6ac68c] */
  esp -= 4; W32(esp, 0x508f3bu); SPILL(); f_42baf2(); if (g_unwind) return; /* MSVCR70!_vsnwprintf */ RELOAD();
/* 508f3b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 508f3e: ret  */
  esp += 4; SPILL(); return;
}

void f_508f50(void) {
  LOAD_REGS();
L_508f50: /* 508f50: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 508f54: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 508f56: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 508f59: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 508f5d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 508f5e: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 508f62: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 508f63: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 508f64: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 508f65: call dword ptr [0x6ac690] */
  esp -= 4; W32(esp, 0x508f6bu); SPILL(); f_42ba9c(); if (g_unwind) return; /* MSVCR70!_vsnprintf */ RELOAD();
/* 508f6b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 508f6e: ret  */
  esp += 4; SPILL(); return;
}

void f_508f80(void) {
  LOAD_REGS();
L_508f80: /* 508f80: jmp dword ptr [0x6ac694] */
  SPILL(); f_4013b8(); return; /* MSVCR70!wcslen */
}

void f_508fa0(void) {
  LOAD_REGS();
L_508fa0: /* 508fa0: jmp dword ptr [0x6ac698] */
  SPILL(); f_430349(); return; /* MSVCR70!wcsstr */
}

void f_508fc0(void) {
  LOAD_REGS();
L_508fc0: /* 508fc0: jmp dword ptr [0x6ac69c] */
  SPILL(); f_401195(); return; /* MSVCR70!wcschr */
}

void f_508fe0(void) {
  LOAD_REGS();
L_508fe0: /* 508fe0: jmp dword ptr [0x6ac6a0] */
  SPILL(); f_4013ea(); return; /* MSVCR70!wcscat */
}

void f_509000(void) {
  LOAD_REGS();
L_509000: /* 509000: jmp dword ptr [0x6ac6a4] */
  SPILL(); f_40134d(); return; /* MSVCR70!wcscmp */
}

void f_509020(void) {
  LOAD_REGS();
L_509020: /* 509020: jmp dword ptr [0x6ac6a8] */
  SPILL(); f_4019b9(); return; /* MSVCR70!_wcsicmp */
}

void f_509040(void) {
  LOAD_REGS();
L_509040: /* 509040: jmp dword ptr [0x6ac6ac] */
  SPILL(); f_4013ce(); return; /* MSVCR70!wcscpy */
}

void f_509060(void) {
  LOAD_REGS();
L_509060: /* 509060: jmp dword ptr [0x6ac6b0] */
  SPILL(); f_42ff14(); return; /* MSVCR70!_wcsupr */
}

void f_509080(void) {
  LOAD_REGS();
L_509080: /* 509080: jmp dword ptr [0x6ac6b4] */
  SPILL(); f_4173df(); return; /* MSVCR70!_wtoi */
}

void f_5090a0(void) {
  LOAD_REGS();
L_5090a0: /* 5090a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 5090a4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5090a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5090a7: call 0x4e299b */
  esp -= 4; W32(esp, 0x5090acu); SPILL(); f_4e299b(); if (g_unwind) return; RELOAD();
/* 5090ac: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5090af: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 5090b3: jmp dword ptr [0x6ac6b8] */
  SPILL(); f_417472(); return; /* MSVCR70!atof */
}

void f_5090d0(void) {
  LOAD_REGS();
L_5090d0: /* 5090d0: jmp dword ptr [0x6ac650] */
  SPILL(); f_417c33(); return; /* MSVCR70!wcstoul */
}

void f_5090f0(void) {
  LOAD_REGS();
L_5090f0: /* 5090f0: jmp dword ptr [0x6ac64c] */
  SPILL(); f_4302ce(); return; /* MSVCR70!wcsncmp */
}

void f_509110(void) {
  LOAD_REGS();
L_509110: /* 509110: jmp dword ptr [0x6ac648] */
  SPILL(); f_401b48(); return; /* MSVCR70!_wcsnicmp */
}

void f_509130(void) {
  LOAD_REGS();
L_509130: /* 509130: jmp dword ptr [0x6ac644] */
  SPILL(); f_4172f1(); return; /* MSVCR70!_wcstoui64 */
}

void f_509150(void) {
  LOAD_REGS();
L_509150: /* 509150: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 509151: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 509152: mov ecx, 0x3c */
  ecx = 0x3cu;
/* 509157: mov edi, 0x5ee994 */
  edi = 0x5ee994u;
/* 50915c: xor eax, eax */
  eax = 0;
/* 50915e: mov ebx, ecx */
  ebx = ecx;
/* 509160: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 509163: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 509166: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 509168: mov ecx, ebx */
  ecx = ebx;
/* 50916a: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 50916c: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 509170: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 509174: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 509178: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 509179: push 0x5ee994 */
  { uint32_t v = 0x5ee994u; esp -= 4; W32(esp, v); }
/* 50917e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50917f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 509180: call dword ptr [0x6ac640] */
  esp -= 4; W32(esp, 0x509186u); SPILL(); f_416d18(); if (g_unwind) return; /* MSVCR70!_ui64tow */ RELOAD();
/* 509186: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 509189: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50918a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50918b: ret  */
  esp += 4; SPILL(); return;
}

void f_5091a0(void) {
  LOAD_REGS();
L_5091a0: /* 5091a0: jmp dword ptr [0x6ac63c] */
  SPILL(); f_40317f(); return; /* MSVCR70!qsort */
}

void f_5091c0(void) {
  LOAD_REGS();
L_5091c0: /* 5091c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 5091c1: mov ebp, esp */
  ebp = esp;
/* 5091c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5091c5: push 0x556c90 */
  { uint32_t v = 0x556c90u; esp -= 4; W32(esp, v); }
/* 5091ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 5091d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5091d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 5091d8: sub esp, 0x40c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5091de: mov eax, dword ptr [0x5b3184] */
  eax = R32((uint32_t)(0x5b3184u));
/* 5091e3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5091e5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5091e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5091e7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5091e8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 5091eb: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 5091f2: mov word ptr [0x5ee9e0], 0 */
  W16((uint32_t)(0x5ee9e0u), 0x0u);
/* 5091fb: je 0x509239 */
  if (zf) goto L_509239;
L_5091fd: /* 5091fd: push 0x5ee9e0 */
  { uint32_t v = 0x5ee9e0u; esp -= 4; W32(esp, v); }
/* 509202: call dword ptr [0x6ac62c] */
  esp -= 4; W32(esp, 0x509208u); SPILL(); f_431390(); if (g_unwind) return; /* MSVCR70!_wstrdate */ RELOAD();
/* 509208: push 0x5a4670 */
  { uint32_t v = 0x5a4670u; esp -= 4; W32(esp, v); }
/* 50920d: push 0x5ee9e0 */
  { uint32_t v = 0x5ee9e0u; esp -= 4; W32(esp, v); }
/* 509212: call dword ptr [0x6ac6a0] */
  esp -= 4; W32(esp, 0x509218u); SPILL(); f_4013ea(); if (g_unwind) return; /* MSVCR70!wcscat */ RELOAD();
/* 509218: push 0x5ee9e0 */
  { uint32_t v = 0x5ee9e0u; esp -= 4; W32(esp, v); }
/* 50921d: call dword ptr [0x6ac694] */
  esp -= 4; W32(esp, 0x509223u); SPILL(); f_4013b8(); if (g_unwind) return; /* MSVCR70!wcslen */ RELOAD();
/* 509223: lea eax, [eax*2 + 0x5ee9e0] */
  eax = (uint32_t)(eax*2 + 0x5ee9e0u);
/* 50922a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50922b: call dword ptr [0x6ac630] */
  esp -= 4; W32(esp, 0x509231u); SPILL(); f_43140d(); if (g_unwind) return; /* MSVCR70!_wstrtime */ RELOAD();
/* 509231: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 509234: jmp 0x5092bc */
  goto L_5092bc;
L_509239: /* 509239: mov cl, byte ptr [0x5ee988] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0x5ee988u))) & 0xffu);
/* 50923f: mov byte ptr [ebp - 0x418], cl */
  W8((uint32_t)(ebp + 0xfffffbe8u), (ecx & 0xffu));
/* 509245: xor eax, eax */
  eax = 0;
/* 509247: mov ecx, 0xff */
  ecx = 0xffu;
/* 50924c: lea edi, [ebp - 0x417] */
  edi = (uint32_t)(ebp + 0xfffffbe9u);
/* 509252: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 509254: stosw word ptr es:[edi], ax */
  W16(edi, (uint16_t)eax); edi += (DF ? -2 : 2);
/* 509256: lea edx, [ebp - 0x418] */
  edx = (uint32_t)(ebp + 0xfffffbe8u);
/* 50925c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50925d: stosb byte ptr es:[edi], al */
  W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1);
/* 50925e: call dword ptr [0x6ac634] */
  esp -= 4; W32(esp, 0x509264u); SPILL(); f_431155(); if (g_unwind) return; /* MSVCR70!_strdate */ RELOAD();
/* 509264: lea eax, [ebp - 0x418] */
  eax = (uint32_t)(ebp + 0xfffffbe8u);
/* 50926a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50926c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50926d: call 0x4e161d */
  esp -= 4; W32(esp, 0x509272u); SPILL(); f_4e161d(); if (g_unwind) return; RELOAD();
/* 509272: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 509275: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 509276: push 0x5ee9e0 */
  { uint32_t v = 0x5ee9e0u; esp -= 4; W32(esp, v); }
/* 50927b: call dword ptr [0x6ac6ac] */
  esp -= 4; W32(esp, 0x509281u); SPILL(); f_4013ce(); if (g_unwind) return; /* MSVCR70!wcscpy */ RELOAD();
/* 509281: mov esi, dword ptr [0x6ac6a0] */
  esi = R32((uint32_t)(0x6ac6a0u));
/* 509287: push 0x5a4674 */
  { uint32_t v = 0x5a4674u; esp -= 4; W32(esp, v); }
/* 50928c: push 0x5ee9e0 */
  { uint32_t v = 0x5ee9e0u; esp -= 4; W32(esp, v); }
/* 509291: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x509293u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 509293: lea ecx, [ebp - 0x418] */
  ecx = (uint32_t)(ebp + 0xfffffbe8u);
/* 509299: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50929a: call dword ptr [0x6ac638] */
  esp -= 4; W32(esp, 0x5092a0u); SPILL(); f_4311c5(); if (g_unwind) return; /* MSVCR70!_strtime */ RELOAD();
/* 5092a0: lea edx, [ebp - 0x418] */
  edx = (uint32_t)(ebp + 0xfffffbe8u);
/* 5092a6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5092a8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5092a9: call 0x4e161d */
  esp -= 4; W32(esp, 0x5092aeu); SPILL(); f_4e161d(); if (g_unwind) return; RELOAD();
/* 5092ae: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5092b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5092b2: push 0x5ee9e0 */
  { uint32_t v = 0x5ee9e0u; esp -= 4; W32(esp, v); }
/* 5092b7: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x5092b9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5092b9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5092bc: /* 5092bc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5092bf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5092c0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5092c1: mov eax, 0x5ee9e0 */
  eax = 0x5ee9e0u;
/* 5092c6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5092cd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5092ce: mov esp, ebp */
  esp = ebp;
/* 5092d0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5092d1: ret  */
  esp += 4; SPILL(); return;
}

void f_5092d2(void) {
  LOAD_REGS();
L_5092d2: /* 5092d2: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 5092d5: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 5092da: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 5092dd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5092de: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 5092e1: call 0x554df6 */
  esp -= 4; W32(esp, 0x5092e6u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_5092e6(); return;
}

void f_5092e6(void) {
  LOAD_REGS();
L_5092e6: /* 5092e6: push 0x56b3fc */
  { uint32_t v = 0x56b3fcu; esp -= 4; W32(esp, v); }
/* 5092eb: push 0x5a4678 */
  { uint32_t v = 0x5a4678u; esp -= 4; W32(esp, v); }
/* 5092f0: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x5092f5u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 5092f5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5092f8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5092fa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5092fc: call 0x554df6 */
  esp -= 4; W32(esp, 0x509301u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_509301: guest_badaddr(0x509301); return;
}

void f_509370(void) {
  LOAD_REGS();
L_509370: /* 509370: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 509373: mov eax, dword ptr [0x5ee98c] */
  eax = R32((uint32_t)(0x5ee98cu));
/* 509378: mov ecx, dword ptr [0x5a46a4] */
  ecx = R32((uint32_t)(0x5a46a4u));
/* 50937e: imul eax, eax, 0xbb38435 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0xbb38435u);
  eax = (uint32_t)r;
  }
/* 509384: add eax, 0x3619636b */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3619636bu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 509389: mov edx, ecx */
  edx = ecx;
/* 50938b: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 50938d: and edx, 0x7fffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7fffffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 509393: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 509395: mov dword ptr [esp], edx */
  W32((uint32_t)(esp), edx);
/* 509399: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 50939c: mov dword ptr [0x5ee98c], eax */
  W32((uint32_t)(0x5ee98cu), eax);
/* 5093a1: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 5093a5: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 5093a8: call dword ptr [0x6ac67c] */
  esp -= 4; W32(esp, 0x5093aeu); SPILL(); hle_floor(); if (g_unwind) return; /* MSVCR70!floor */ RELOAD();
/* 5093ae: call 0x554f00 */
  esp -= 4; W32(esp, 0x5093b3u); SPILL(); f_554f00(); if (g_unwind) return; RELOAD();
/* 5093b3: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 5093b7: fild dword ptr [esp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 5093bb: fsubr dword ptr [esp + 8] */
  ST0 = (F32((uint32_t)(esp + 0x8u))) - ST0;
/* 5093bf: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5093c2: ret  */
  esp += 4; SPILL(); return;
}

void f_5093f0(void) {
  LOAD_REGS();
L_5093f0: /* 5093f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 5093f1: mov ebp, esp */
  ebp = esp;
/* 5093f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5093f5: push 0x556ca0 */
  { uint32_t v = 0x556ca0u; esp -= 4; W32(esp, v); }
/* 5093fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 509400: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 509401: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 509408: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 50940b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50940c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 50940f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 509410: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 509411: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 509414: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 509415: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 50941c: call dword ptr [0x6ac694] */
  esp -= 4; W32(esp, 0x509422u); SPILL(); f_4013b8(); if (g_unwind) return; /* MSVCR70!wcslen */ RELOAD();
/* 509422: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 509425: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 509427: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50942a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 50942c: lea edi, [ebx + eax*2] */
  edi = (uint32_t)(ebx + eax*2);
/* 50942f: jle 0x509446 */
  if ((zf || sf != of)) goto L_509446;
L_509431: /* 509431: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 509434: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 509435: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 509436: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 509437: call 0x4e2be4 */
  esp -= 4; W32(esp, 0x50943cu); SPILL(); f_4e2be4(); if (g_unwind) return; RELOAD();
/* 50943c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50943f: mov word ptr [edi + esi*2 - 2], 0 */
  W16((uint32_t)(edi + esi*2 + 0xfffffffeu), 0x0u);
L_509446: /* 509446: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 509449: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50944a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50944b: mov eax, ebx */
  eax = ebx;
/* 50944d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 509454: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 509455: mov esp, ebp */
  esp = ebp;
/* 509457: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 509458: ret  */
  esp += 4; SPILL(); return;
}

void f_509459(void) {
  LOAD_REGS();
L_509459: /* 509459: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 50945c: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 509461: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 509464: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 509465: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 509468: call 0x554df6 */
  esp -= 4; W32(esp, 0x50946du); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_50946d(); return;
}

void f_50946d(void) {
  LOAD_REGS();
L_50946d: /* 50946d: push 0x56b41c */
  { uint32_t v = 0x56b41cu; esp -= 4; W32(esp, v); }
/* 509472: push 0x5a46b0 */
  { uint32_t v = 0x5a46b0u; esp -= 4; W32(esp, v); }
/* 509477: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x50947cu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 50947c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50947f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 509481: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 509483: call 0x554df6 */
  esp -= 4; W32(esp, 0x509488u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_509488: guest_badaddr(0x509488); return;
}

void f_5094c0(void) {
  LOAD_REGS();
L_5094c0: /* 5094c0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 5094c4: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 5094c8: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 5094cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5094cd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5094ce: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 5094d3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5094d4: call dword ptr [0x6ac68c] */
  esp -= 4; W32(esp, 0x5094dau); SPILL(); f_42baf2(); if (g_unwind) return; /* MSVCR70!_vsnwprintf */ RELOAD();
/* 5094da: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5094dd: ret  */
  esp += 4; SPILL(); return;
}

void f_5094f0(void) {
  LOAD_REGS();
L_5094f0: /* 5094f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 5094f1: mov ebp, esp */
  ebp = esp;
/* 5094f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5094f5: push 0x556cb0 */
  { uint32_t v = 0x556cb0u; esp -= 4; W32(esp, v); }
/* 5094fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 509500: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 509501: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 509508: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 50950b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50950c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50950d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50950e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 509511: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 509518: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 50951f: call 0x4e292d */
  esp -= 4; W32(esp, 0x509524u); SPILL(); f_4e292d(); if (g_unwind) return; RELOAD();
/* 509524: mov esi, eax */
  esi = eax;
/* 509526: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 509529: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50952a: call dword ptr [0x6ac618] */
  esp -= 4; W32(esp, 0x509530u); SPILL(); f_43166a(); if (g_unwind) return; /* MSVCR70!time */ RELOAD();
/* 509530: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 509533: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 509534: call dword ptr [0x6ac61c] */
  esp -= 4; W32(esp, 0x50953au); SPILL(); f_4037a7(); if (g_unwind) return; /* MSVCR70!gmtime */ RELOAD();
/* 50953a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50953b: call dword ptr [0x6ac628] */
  esp -= 4; W32(esp, 0x509541u); SPILL(); f_403572(); if (g_unwind) return; /* MSVCR70!mktime */ RELOAD();
/* 509541: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 509544: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 509546: mov eax, 0x91a2b3c5 */
  eax = 0x91a2b3c5u;
/* 50954b: imul ecx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* 50954d: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 50954f: sar edx, 0xb */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 11;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 509552: mov eax, edx */
  eax = edx;
/* 509554: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 509557: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 509559: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 50955c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50955f: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 509562: fcom dword ptr [0x56947c] */
  fpu_com(ST0, F32((uint32_t)(0x56947cu)));
/* 509568: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 50956a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 50956d: mov eax, 0x5a4680 */
  eax = 0x5a4680u;
/* 509572: je 0x509579 */
  if (zf) goto L_509579;
L_509574: /* 509574: mov eax, 0x5a4690 */
  eax = 0x5a4690u;
L_509579: /* 509579: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 50957c: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 50957f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 509580: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 509581: call 0x4e4183 */
  esp -= 4; W32(esp, 0x509586u); SPILL(); f_4e4183(); if (g_unwind) return; RELOAD();
/* 509586: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 509589: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50958a: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 50958d: mov ecx, esi */
  ecx = esi;
/* 50958f: call 0x4e13de */
  esp -= 4; W32(esp, 0x509594u); SPILL(); f_4e13de(); if (g_unwind) return; RELOAD();
/* 509594: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 509597: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 509598: mov eax, esi */
  eax = esi;
/* 50959a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50959b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5095a2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5095a3: mov esp, ebp */
  esp = ebp;
/* 5095a5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5095a6: ret  */
  esp += 4; SPILL(); return;
}

void f_5095a7(void) {
  LOAD_REGS();
L_5095a7: /* 5095a7: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 5095aa: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 5095af: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 5095b2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5095b3: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 5095b6: call 0x554df6 */
  esp -= 4; W32(esp, 0x5095bbu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_5095bb(); return;
}

void f_5095bb(void) {
  LOAD_REGS();
L_5095bb: /* 5095bb: push 0x56b438 */
  { uint32_t v = 0x56b438u; esp -= 4; W32(esp, v); }
/* 5095c0: push 0x5a469c */
  { uint32_t v = 0x5a469cu; esp -= 4; W32(esp, v); }
/* 5095c5: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x5095cau); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 5095ca: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5095cd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5095cf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5095d1: call 0x554df6 */
  esp -= 4; W32(esp, 0x5095d6u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_5095d6: guest_badaddr(0x5095d6); return;
}

void f_509620(void) {
  LOAD_REGS();
L_509620: /* 509620: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 509624: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 509625: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 509629: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 50962b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 50962d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50962e: mov ecx, esi */
  ecx = esi;
/* 509630: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x509633u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 509633: mov eax, esi */
  eax = esi;
/* 509635: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 509636: ret  */
  esp += 4; SPILL(); return;
}

void f_509650(void) {
  LOAD_REGS();
L_509650: /* 509650: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 509654: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 509655: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 509659: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 50965b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 50965d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50965e: mov ecx, esi */
  ecx = esi;
/* 509660: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x509663u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 509663: mov eax, esi */
  eax = esi;
/* 509665: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 509666: ret  */
  esp += 4; SPILL(); return;
}

void f_509680(void) {
  LOAD_REGS();
L_509680: /* 509680: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 509684: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 509685: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 509689: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 50968b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 50968d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50968e: mov ecx, esi */
  ecx = esi;
/* 509690: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x509693u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 509693: mov eax, esi */
  eax = esi;
/* 509695: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 509696: ret  */
  esp += 4; SPILL(); return;
}

void f_5096b0(void) {
  LOAD_REGS();
L_5096b0: /* 5096b0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 5096b4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5096b5: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 5096b9: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 5096bb: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 5096bd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5096be: mov ecx, esi */
  ecx = esi;
/* 5096c0: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x5096c3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5096c3: mov eax, esi */
  eax = esi;
/* 5096c5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5096c6: ret  */
  esp += 4; SPILL(); return;
}

void f_5096e0(void) {
  LOAD_REGS();
L_5096e0: /* 5096e0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 5096e4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5096e5: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 5096e9: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 5096eb: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 5096ed: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5096ee: mov ecx, esi */
  ecx = esi;
/* 5096f0: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x5096f3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5096f3: mov eax, esi */
  eax = esi;
/* 5096f5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5096f6: ret  */
  esp += 4; SPILL(); return;
}

void f_509710(void) {
  LOAD_REGS();
L_509710: /* 509710: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 509714: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 509715: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 509719: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 50971b: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 50971d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50971e: mov ecx, esi */
  ecx = esi;
/* 509720: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x509723u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 509723: mov eax, esi */
  eax = esi;
/* 509725: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 509726: ret  */
  esp += 4; SPILL(); return;
}

void f_509740(void) {
  LOAD_REGS();
L_509740: /* 509740: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 509744: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 509745: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 509749: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 50974b: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 50974d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50974e: mov ecx, esi */
  ecx = esi;
/* 509750: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x509753u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 509753: mov eax, esi */
  eax = esi;
/* 509755: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 509756: ret  */
  esp += 4; SPILL(); return;
}

void f_509770(void) {
  LOAD_REGS();
L_509770: /* 509770: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 509774: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 509775: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 509779: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 50977b: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 50977d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50977e: mov ecx, esi */
  ecx = esi;
/* 509780: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x509783u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 509783: mov eax, esi */
  eax = esi;
/* 509785: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 509786: ret  */
  esp += 4; SPILL(); return;
}

void f_5097a0(void) {
  LOAD_REGS();
L_5097a0: /* 5097a0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 5097a4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5097a5: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 5097a9: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 5097ab: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 5097ad: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5097ae: mov ecx, esi */
  ecx = esi;
/* 5097b0: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x5097b3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5097b3: mov eax, esi */
  eax = esi;
/* 5097b5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5097b6: ret  */
  esp += 4; SPILL(); return;
}

void f_5097d0(void) {
  LOAD_REGS();
L_5097d0: /* 5097d0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 5097d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5097d5: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 5097d9: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 5097db: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 5097dd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5097de: mov ecx, esi */
  ecx = esi;
/* 5097e0: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x5097e3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5097e3: mov eax, esi */
  eax = esi;
/* 5097e5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5097e6: ret  */
  esp += 4; SPILL(); return;
}

void f_509800(void) {
  LOAD_REGS();
L_509800: /* 509800: mov eax, dword ptr [ecx + 0x4c] */
  eax = R32((uint32_t)(ecx + 0x4cu));
/* 509803: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 509806: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 509809: ret  */
  esp += 4; SPILL(); return;
}

void f_509820(void) {
  LOAD_REGS();
L_509820: /* 509820: mov eax, dword ptr [ecx + 0x4c] */
  eax = R32((uint32_t)(ecx + 0x4cu));
/* 509823: ret  */
  esp += 4; SPILL(); return;
}

void f_509840(void) {
  LOAD_REGS();
L_509840: /* 509840: mov dword ptr [ecx + 0x2c], 1 */
  W32((uint32_t)(ecx + 0x2cu), 0x1u);
/* 509847: ret  */
  esp += 4; SPILL(); return;
}

void f_509860(void) {
  LOAD_REGS();
L_509860: /* 509860: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 509861: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 509865: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 509867: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 509868: lea edx, [esp + 4] */
  edx = (uint32_t)(esp + 0x4u);
/* 50986c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50986d: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 509875: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x509878u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 509878: mov eax, dword ptr [esp] */
  eax = R32((uint32_t)(esp));
/* 50987c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 50987d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_509890(void) {
  LOAD_REGS();
L_509890: /* 509890: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 509891: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 509893: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 509895: lea edx, [esp + 7] */
  edx = (uint32_t)(esp + 0x7u);
/* 509899: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50989a: mov byte ptr [esp + 0xb], 0 */
  W8((uint32_t)(esp + 0xbu), 0x0u);
/* 50989f: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x5098a2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5098a2: mov al, byte ptr [esp + 3] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x3u))) & 0xffu);
/* 5098a6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 5098a7: ret  */
  esp += 4; SPILL(); return;
}

void f_5098c0(void) {
  LOAD_REGS();
L_5098c0: /* 5098c0: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 5098c4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 5098c6: shl edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 5098c9: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
/* 5098cd: jmp dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); SPILL(); call_ind(t); return; }
}

void f_5098e0(void) {
  LOAD_REGS();
L_5098e0: /* 5098e0: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* 5098e3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5098e5: jne 0x5098f2 */
  if (!zf) goto L_5098f2;
L_5098e7: /* 5098e7: mov eax, dword ptr [ecx + 0x50] */
  eax = R32((uint32_t)(ecx + 0x50u));
/* 5098ea: cmp eax, dword ptr [ecx + 0x4c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5098ed: je 0x5098f2 */
  if (zf) goto L_5098f2;
L_5098ef: /* 5098ef: xor eax, eax */
  eax = 0;
/* 5098f1: ret  */
  esp += 4; SPILL(); return;
L_5098f2: /* 5098f2: mov eax, 1 */
  eax = 0x1u;
/* 5098f7: ret  */
  esp += 4; SPILL(); return;
}

void f_509910(void) {
  LOAD_REGS();
L_509910: /* 509910: mov dword ptr [ecx + 0x2c], 1 */
  W32((uint32_t)(ecx + 0x2cu), 0x1u);
/* 509917: ret  */
  esp += 4; SPILL(); return;
}

void f_509930(void) {
  LOAD_REGS();
L_509930: /* 509930: mov eax, dword ptr [ecx + 0x4c] */
  eax = R32((uint32_t)(ecx + 0x4cu));
/* 509933: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 509936: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 509939: ret  */
  esp += 4; SPILL(); return;
}

void f_509950(void) {
  LOAD_REGS();
L_509950: /* 509950: mov eax, dword ptr [ecx + 0x4c] */
  eax = R32((uint32_t)(ecx + 0x4cu));
/* 509953: ret  */
  esp += 4; SPILL(); return;
}

void f_509970(void) {
  LOAD_REGS();
L_509970: /* 509970: mov eax, dword ptr [ecx + 0x50] */
  eax = R32((uint32_t)(ecx + 0x50u));
/* 509973: ret  */
  esp += 4; SPILL(); return;
}

void f_509990(void) {
  LOAD_REGS();
L_509990: /* 509990: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 509994: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 509998: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50999a: jge 0x50999e */
  if ((sf == of)) goto L_50999e;
L_50999c: /* 50999c: mov eax, ecx */
  eax = ecx;
L_50999e: /* 50999e: ret  */
  esp += 4; SPILL(); return;
}

void f_5099b0(void) {
  LOAD_REGS();
L_5099b0: /* 5099b0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5099b3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5099b4: mov ebx, dword ptr [esp + 0x28] */
  ebx = R32((uint32_t)(esp + 0x28u));
/* 5099b8: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5099ba: je 0x509c2c */
  if (zf) goto L_509c2c;
L_5099c0: /* 5099c0: cmp ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5099c3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 5099c4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5099c5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5099c6: jg 0x509ae7 */
  if ((!zf && sf == of)) goto L_509ae7;
L_5099cc: /* 5099cc: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 5099d0: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 5099d4: mov eax, ecx */
  eax = ecx;
/* 5099d6: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 5099d7: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 5099da: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5099dc: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 5099df: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 5099e3: mov eax, esi */
  eax = esi;
/* 5099e5: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 5099e6: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 5099e9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5099eb: mov edi, eax */
  edi = eax;
/* 5099ed: lea eax, [ecx + ebx - 1] */
  eax = (uint32_t)(ecx + ebx + 0xffffffffu);
/* 5099f1: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 5099f5: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 5099f6: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 5099f9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5099fb: mov ebp, eax */
  ebp = eax;
/* 5099fd: lea eax, [esi + ebx - 1] */
  eax = (uint32_t)(esi + ebx + 0xffffffffu);
/* 509a01: and esi, 7 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 509a04: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 509a07: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 509a08: mov dword ptr [esp + 0x34], esi */
  W32((uint32_t)(esp + 0x34u), esi);
/* 509a0c: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edx = r;
  }
/* 509a0f: mov ebx, ecx */
  ebx = ecx;
/* 509a11: mov esi, 0xff */
  esi = 0xffu;
/* 509a16: shl esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
  }
/* 509a18: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 509a1c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 509a1e: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 509a21: mov edx, 0xfe */
  edx = 0xfeu;
/* 509a26: sar edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edi = r;
  }
/* 509a29: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 509a2c: sar ebp, 3 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  cf = ((int32_t)(int32_t)a >> (c - 1)) & 1;
  of = 0;
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  ebp = r;
  }
/* 509a2f: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 509a31: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 509a33: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 509a37: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
/* 509a3b: jne 0x509a4d */
  if (!zf) goto L_509a4d;
L_509a3d: /* 509a3d: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 509a41: movzx eax, byte ptr [edi + eax] */
  eax = (uint32_t)(R8((uint32_t)(edi + eax)));
/* 509a45: mov cl, byte ptr [esp + 0x34] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x34u))) & 0xffu);
/* 509a49: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 509a4b: jmp 0x509a74 */
  goto L_509a74;
L_509a4d: /* 509a4d: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 509a51: movzx eax, byte ptr [eax + esi] */
  eax = (uint32_t)(R8((uint32_t)(eax + esi)));
/* 509a55: mov ebx, dword ptr [esp + 0x34] */
  ebx = R32((uint32_t)(esp + 0x34u));
/* 509a59: movzx esi, byte ptr [edi + esi] */
  esi = (uint32_t)(R8((uint32_t)(edi + esi)));
/* 509a5d: mov ecx, 8 */
  ecx = 0x8u;
/* 509a62: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* 509a64: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  cf = (c <= 32) ? (((uint32_t)a >> (32 - c)) & 1) : 0;
  of = ((r >> 31) & 1) ^ (((uint32_t)a >> (32 - c)) & 1);
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  eax = r;
  }
  }
/* 509a66: mov cl, bl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
/* 509a68: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 509a6c: shr esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
  }
/* 509a6e: or eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 509a70: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
L_509a74: /* 509a74: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 509a78: cmp edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 509a7a: jne 0x509a9e */
  if (!zf) goto L_509a9e;
L_509a7c: /* 509a7c: mov ecx, ebx */
  ecx = ebx;
/* 509a7e: not edx */
  edx = ~edx;
/* 509a80: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edx = r;
  }
/* 509a82: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 509a86: mov bl, byte ptr [edi + esi] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + esi))) & 0xffu);
/* 509a89: shl al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint8_t r = (uint8_t)((uint32_t)a << c);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  }
/* 509a8b: and al, dl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 509a8d: not dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)(~(edx & 0xffu)) & 0xffu);
/* 509a8f: and dl, bl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 509a91: or al, dl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 509a93: mov byte ptr [edi + esi], al */
  W8((uint32_t)(edi + esi), (eax & 0xffu));
/* 509a96: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 509a97: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 509a98: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 509a99: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 509a9a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 509a9d: ret  */
  esp += 4; SPILL(); return;
L_509a9e: /* 509a9e: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 509aa2: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 509aa6: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 509aaa: mov bl, al */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* 509aac: shl bl, cl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint8_t r = (uint8_t)((uint32_t)a << c);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  }
/* 509aae: mov cl, byte ptr [esp + 0x18] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x18u))) & 0xffu);
/* 509ab2: and bl, cl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 509ab4: not cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(~(ecx & 0xffu)) & 0xffu);
/* 509ab6: and cl, byte ptr [esi + edi] */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(esi + edi)));
  uint8_t r = (uint8_t)(a & b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 509ab9: or bl, cl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 509abb: mov ecx, esi */
  ecx = esi;
/* 509abd: mov esi, edi */
  esi = edi;
/* 509abf: mov byte ptr [ecx + esi], bl */
  W8((uint32_t)(ecx + esi), (ebx & 0xffu));
/* 509ac2: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 509ac6: mov ecx, 8 */
  ecx = 0x8u;
/* 509acb: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* 509acd: mov bl, byte ptr [esi + ebp] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + ebp))) & 0xffu);
/* 509ad0: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 509ad2: mov cl, dl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 509ad4: not cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(~(ecx & 0xffu)) & 0xffu);
/* 509ad6: and dl, bl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 509ad8: and al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 509ada: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 509adb: or al, dl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 509add: mov byte ptr [esi + ebp], al */
  W8((uint32_t)(esi + ebp), (eax & 0xffu));
/* 509ae0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 509ae1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 509ae2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 509ae3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 509ae6: ret  */
  esp += 4; SPILL(); return;
L_509ae7: /* 509ae7: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 509aeb: mov eax, esi */
  eax = esi;
/* 509aed: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 509aee: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 509af1: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 509af3: mov edi, eax */
  edi = eax;
/* 509af5: mov ebp, esi */
  ebp = esi;
/* 509af7: and ebp, 7 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ebp = r;
  }
/* 509afa: mov ecx, ebp */
  ecx = ebp;
/* 509afc: mov eax, 0xff */
  eax = 0xffu;
/* 509b01: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 509b03: lea ecx, [esi + ebx] */
  ecx = (uint32_t)(esi + ebx);
/* 509b06: mov dword ptr [esp + 0x34], ecx */
  W32((uint32_t)(esp + 0x34u), ecx);
/* 509b0a: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 509b0d: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 509b11: mov eax, 0xff */
  eax = 0xffu;
/* 509b16: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 509b18: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 509b1c: sar edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edi = r;
  }
/* 509b1f: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 509b23: mov eax, ecx */
  eax = ecx;
/* 509b25: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 509b26: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 509b29: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 509b2b: mov esi, eax */
  esi = eax;
/* 509b2d: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 509b31: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 509b32: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 509b35: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 509b37: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 509b3b: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 509b3e: sub ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 509b40: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 509b42: mov ecx, ebp */
  ecx = ebp;
/* 509b44: mov ebp, eax */
  ebp = eax;
/* 509b46: mov eax, ebx */
  eax = ebx;
/* 509b48: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 509b49: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 509b4c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 509b4e: sar esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 509b51: sar ebp, 3 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebp = r;
  }
/* 509b54: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 509b57: sub ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 509b59: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 509b5b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 509b5d: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 509b61: mov dword ptr [esp + 0x34], ebp */
  W32((uint32_t)(esp + 0x34u), ebp);
/* 509b65: jl 0x509b7e */
  if ((sf != of)) goto L_509b7e;
L_509b67: /* 509b67: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 509b69: jge 0x509b6f */
  if ((sf == of)) goto L_509b6f;
L_509b6b: /* 509b6b: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
L_509b6f: /* 509b6f: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 509b73: movzx eax, byte ptr [esi + ebp] */
  eax = (uint32_t)(R8((uint32_t)(esi + ebp)));
/* 509b77: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 509b79: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 509b7c: jmp 0x509ba4 */
  goto L_509ba4;
L_509b7e: /* 509b7e: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 509b81: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 509b82: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 509b84: jge 0x509b8a */
  if ((sf == of)) goto L_509b8a;
L_509b86: /* 509b86: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
L_509b8a: /* 509b8a: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 509b8e: movzx edx, byte ptr [esi + ebp] */
  edx = (uint32_t)(R8((uint32_t)(esi + ebp)));
/* 509b92: movzx eax, byte ptr [esi + ebp + 1] */
  eax = (uint32_t)(R8((uint32_t)(esi + ebp + 0x1u)));
/* 509b97: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 509b99: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 509b9a: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (r) < (a);
  of = ((((a) ^ (r)) & ((b) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* 509b9d: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 509b9f: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 509ba1: shr eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
L_509ba4: /* 509ba4: mov bl, byte ptr [esp + 0x18] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x18u))) & 0xffu);
/* 509ba8: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 509bac: not bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(~(ebx & 0xffu)) & 0xffu);
/* 509bae: and bl, byte ptr [edi + edx] */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(edi + edx)));
  uint8_t r = (uint8_t)(a & b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 509bb1: mov dl, byte ptr [esp + 0x18] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x18u))) & 0xffu);
/* 509bb5: and dl, al */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 509bb7: or bl, dl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 509bb9: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 509bbd: mov byte ptr [edi + edx], bl */
  W8((uint32_t)(edi + edx), (ebx & 0xffu));
/* 509bc0: mov ebx, dword ptr [esp + 0x34] */
  ebx = R32((uint32_t)(esp + 0x34u));
/* 509bc4: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 509bc5: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 509bc6: cmp ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 509bc9: jbe 0x509bed */
  if ((cf | zf)) goto L_509bed;
L_509bcb: /* 509bcb: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x7fffffffu;
  ebx = r;
  }
/* 509bcc: mov dword ptr [esp + 0x34], ebx */
  W32((uint32_t)(esp + 0x34u), ebx);
L_509bd0: /* 509bd0: movzx ebx, byte ptr [esi + ebp] */
  ebx = (uint32_t)(R8((uint32_t)(esi + ebp)));
/* 509bd4: shl ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
  }
/* 509bd6: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 509bd8: shr ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  cf = ((uint32_t)a >> (c - 1)) & 1;
  ebx = r;
  }
/* 509bdb: mov eax, ebx */
  eax = ebx;
/* 509bdd: mov ebx, dword ptr [esp + 0x34] */
  ebx = R32((uint32_t)(esp + 0x34u));
/* 509be1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 509be2: mov byte ptr [edi + edx], al */
  W8((uint32_t)(edi + edx), (eax & 0xffu));
/* 509be5: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 509be6: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x7fffffffu;
  ebx = r;
  }
/* 509be7: mov dword ptr [esp + 0x34], ebx */
  W32((uint32_t)(esp + 0x34u), ebx);
/* 509beb: jne 0x509bd0 */
  if (!zf) goto L_509bd0;
L_509bed: /* 509bed: cmp dword ptr [esp + 0x14], 0xff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 509bf5: je 0x509c29 */
  if (zf) goto L_509c29;
L_509bf7: /* 509bf7: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 509bfb: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 509bfc: shr ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 509bff: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 509c01: jne 0x509c12 */
  if (!zf) goto L_509c12;
L_509c03: /* 509c03: movzx esi, byte ptr [esi + ebp] */
  esi = (uint32_t)(R8((uint32_t)(esi + ebp)));
/* 509c07: shl esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
  }
/* 509c09: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 509c0b: shr esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 509c0e: mov eax, esi */
  eax = esi;
/* 509c10: jmp 0x509c15 */
  goto L_509c15;
L_509c12: /* 509c12: shr eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
L_509c15: /* 509c15: mov cl, byte ptr [esp + 0x14] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x14u))) & 0xffu);
/* 509c19: mov bl, cl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* 509c1b: not bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(~(ebx & 0xffu)) & 0xffu);
/* 509c1d: and bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 509c1f: mov al, byte ptr [edi + edx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + edx))) & 0xffu);
/* 509c22: and al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 509c24: or bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 509c26: mov byte ptr [edi + edx], bl */
  W8((uint32_t)(edi + edx), (ebx & 0xffu));
L_509c29: /* 509c29: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 509c2a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 509c2b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_509c2c: /* 509c2c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 509c2d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 509c30: ret  */
  esp += 4; SPILL(); return;
}
