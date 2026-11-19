#include "recomp.h"
#include "rec_mod.h"

void f_99830a(void) {
  LOAD_REGS();
  goto L_99830a;
L_9982c0: /* 9982c0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 9982c3: xor eax, eax */
  eax = 0;
/* 9982c5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9982c7: jle 0x9982fe */
  if ((zf || sf != of)) goto L_9982fe;
L_9982c9: /* 9982c9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9982d0: /* 9982d0: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 9982d4: mov edi, dword ptr [edx + eax*4] */
  edi = R32((uint32_t)(edx + eax*4));
/* 9982d7: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 9982db: mov esi, dword ptr [ebx + 0x28] */
  esi = R32((uint32_t)(ebx + 0x28u));
/* 9982de: mov edx, ecx */
  edx = ecx;
/* 9982e0: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 9982e3: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 9982e5: mov ecx, edx */
  ecx = edx;
/* 9982e7: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 9982ea: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 9982ec: mov esi, dword ptr [ebx + 0x28] */
  esi = R32((uint32_t)(ebx + 0x28u));
/* 9982ef: mov ecx, edx */
  ecx = edx;
/* 9982f1: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9982f3: mov dword ptr [ebx + 0x28], esi */
  W32((uint32_t)(ebx + 0x28u), esi);
/* 9982f6: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 9982f9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9982fa: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9982fc: jl 0x9982d0 */
  if ((sf != of)) goto L_9982d0;
L_9982fe: /* 9982fe: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 998302: xor esi, esi */
  esi = 0;
/* 998304: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 998306: jle 0x998381 */
  if ((zf || sf != of)) goto L_998381;
L_998308: /* 998308: jmp 0x998310 */
  goto L_998310;
L_99830a: /* 99830a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_998310: /* 998310: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 998313: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 998317: xor ebp, ebp */
  ebp = 0;
/* 998319: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 99831b: jle 0x99835a */
  if ((zf || sf != of)) goto L_99835a;
L_99831d: /* 99831d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_998320: /* 998320: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 998324: mov eax, dword ptr [edx + ebp*4] */
  eax = R32((uint32_t)(edx + ebp*4));
/* 998327: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 99832a: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 99832c: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99832e: je 0x998352 */
  if (zf) goto L_998352;
L_998330: /* 998330: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
L_998334: /* 998334: mov edx, dword ptr [ebx + 0x24] */
  edx = R32((uint32_t)(ebx + 0x24u));
/* 998337: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 998339: je 0x99834c */
  if (zf) goto L_99834c;
L_99833b: /* 99833b: jmp 0x998340 */
  goto L_998340;
L_998340: /* 998340: movzx edi, byte ptr [eax] */
  edi = (uint32_t)(R8((uint32_t)(eax)));
/* 998343: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 998345: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 998348: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 998349: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 99834a: jne 0x998340 */
  if (!zf) goto L_998340;
L_99834c: /* 99834c: dec dword ptr [esp + 0x20] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x20u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x20u), r);
  }
/* 998350: jne 0x998334 */
  if (!zf) goto L_998334;
L_998352: /* 998352: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 998355: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 998356: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 998358: jl 0x998320 */
  if ((sf != of)) goto L_998320;
L_99835a: /* 99835a: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 99835e: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 998362: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 998363: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 998365: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 998367: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 998368: mov ecx, ebx */
  ecx = ebx;
/* 99836a: call 0x997fe0 */
  esp -= 4; W32(esp, 0x99836fu); SPILL(); f_997fe0(); if (g_unwind) return; RELOAD();
/* 99836f: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 998373: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 998377: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 99837b: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 99837d: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99837f: jl 0x998310 */
  if ((sf != of)) goto L_998310;
L_998381: /* 998381: dec dword ptr [esp + 0x2c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x2cu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x2cu), r);
  }
/* 998385: jne 0x9982c0 */
  if (!zf) goto L_9982c0;
L_99838b: /* 99838b: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 99838e: xor esi, esi */
  esi = 0;
/* 998390: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 998392: jle 0x9983ac */
  if ((zf || sf != of)) goto L_9983ac;
L_998394: /* 998394: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 998398: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 99839b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99839c: call 0x99cf5a */
  esp -= 4; W32(esp, 0x9983a1u); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 9983a1: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 9983a4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9983a7: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 9983a8: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9983aa: jl 0x998394 */
  if ((sf != of)) goto L_998394;
L_9983ac: /* 9983ac: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 9983b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9983b1: call 0x99cf5a */
  esp -= 4; W32(esp, 0x9983b6u); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 9983b6: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 9983ba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9983bb: call 0x99cf5a */
  esp -= 4; W32(esp, 0x9983c0u); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 9983c0: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 9983c4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9983c7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9983c8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9983c9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9983ca: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9983cb: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9983ce: ret  */
  esp += 4; SPILL(); return;
}

void f_99833d(void) {
  LOAD_REGS();
  goto L_99833d;
L_9982c0: /* 9982c0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 9982c3: xor eax, eax */
  eax = 0;
/* 9982c5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9982c7: jle 0x9982fe */
  if ((zf || sf != of)) goto L_9982fe;
L_9982c9: /* 9982c9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9982d0: /* 9982d0: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 9982d4: mov edi, dword ptr [edx + eax*4] */
  edi = R32((uint32_t)(edx + eax*4));
/* 9982d7: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 9982db: mov esi, dword ptr [ebx + 0x28] */
  esi = R32((uint32_t)(ebx + 0x28u));
/* 9982de: mov edx, ecx */
  edx = ecx;
/* 9982e0: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 9982e3: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 9982e5: mov ecx, edx */
  ecx = edx;
/* 9982e7: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 9982ea: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 9982ec: mov esi, dword ptr [ebx + 0x28] */
  esi = R32((uint32_t)(ebx + 0x28u));
/* 9982ef: mov ecx, edx */
  ecx = edx;
/* 9982f1: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9982f3: mov dword ptr [ebx + 0x28], esi */
  W32((uint32_t)(ebx + 0x28u), esi);
/* 9982f6: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 9982f9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9982fa: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9982fc: jl 0x9982d0 */
  if ((sf != of)) goto L_9982d0;
L_9982fe: /* 9982fe: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 998302: xor esi, esi */
  esi = 0;
/* 998304: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 998306: jle 0x998381 */
  if ((zf || sf != of)) goto L_998381;
L_998308: /* 998308: jmp 0x998310 */
  goto L_998310;
L_998310: /* 998310: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 998313: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 998317: xor ebp, ebp */
  ebp = 0;
/* 998319: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 99831b: jle 0x99835a */
  if ((zf || sf != of)) goto L_99835a;
L_99831d: /* 99831d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_998320: /* 998320: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 998324: mov eax, dword ptr [edx + ebp*4] */
  eax = R32((uint32_t)(edx + ebp*4));
/* 998327: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 99832a: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 99832c: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99832e: je 0x998352 */
  if (zf) goto L_998352;
L_998330: /* 998330: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
L_998334: /* 998334: mov edx, dword ptr [ebx + 0x24] */
  edx = R32((uint32_t)(ebx + 0x24u));
/* 998337: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 998339: je 0x99834c */
  if (zf) goto L_99834c;
L_99833b: /* 99833b: jmp 0x998340 */
  goto L_998340;
L_99833d: /* 99833d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_998340: /* 998340: movzx edi, byte ptr [eax] */
  edi = (uint32_t)(R8((uint32_t)(eax)));
/* 998343: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 998345: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 998348: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 998349: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 99834a: jne 0x998340 */
  if (!zf) goto L_998340;
L_99834c: /* 99834c: dec dword ptr [esp + 0x20] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x20u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x20u), r);
  }
/* 998350: jne 0x998334 */
  if (!zf) goto L_998334;
L_998352: /* 998352: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 998355: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 998356: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 998358: jl 0x998320 */
  if ((sf != of)) goto L_998320;
L_99835a: /* 99835a: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 99835e: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 998362: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 998363: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 998365: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 998367: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 998368: mov ecx, ebx */
  ecx = ebx;
/* 99836a: call 0x997fe0 */
  esp -= 4; W32(esp, 0x99836fu); SPILL(); f_997fe0(); if (g_unwind) return; RELOAD();
/* 99836f: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 998373: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 998377: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 99837b: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 99837d: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99837f: jl 0x998310 */
  if ((sf != of)) goto L_998310;
L_998381: /* 998381: dec dword ptr [esp + 0x2c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x2cu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x2cu), r);
  }
/* 998385: jne 0x9982c0 */
  if (!zf) goto L_9982c0;
L_99838b: /* 99838b: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 99838e: xor esi, esi */
  esi = 0;
/* 998390: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 998392: jle 0x9983ac */
  if ((zf || sf != of)) goto L_9983ac;
L_998394: /* 998394: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 998398: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 99839b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99839c: call 0x99cf5a */
  esp -= 4; W32(esp, 0x9983a1u); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 9983a1: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 9983a4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9983a7: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 9983a8: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9983aa: jl 0x998394 */
  if ((sf != of)) goto L_998394;
L_9983ac: /* 9983ac: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 9983b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9983b1: call 0x99cf5a */
  esp -= 4; W32(esp, 0x9983b6u); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 9983b6: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 9983ba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9983bb: call 0x99cf5a */
  esp -= 4; W32(esp, 0x9983c0u); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 9983c0: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 9983c4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9983c7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9983c8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9983c9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9983ca: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9983cb: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9983ce: ret  */
  esp += 4; SPILL(); return;
}

void f_9983d0(void) {
  LOAD_REGS();
L_9983d0: /* 9983d0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9983d1: mov edi, ecx */
  edi = ecx;
/* 9983d3: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 9983d6: cmp eax, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9983d9: jle 0x998477 */
  if ((zf || sf != of)) goto L_998477;
L_9983df: /* 9983df: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9983e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9983e1: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 9983e5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_9983e6: /* 9983e6: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9983e7: mov ecx, edi */
  ecx = edi;
/* 9983e9: call 0x998130 */
  esp -= 4; W32(esp, 0x9983eeu); SPILL(); f_998130(); if (g_unwind) return; RELOAD();
/* 9983ee: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 9983f1: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 9983f4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9983f5: mov ebp, eax */
  ebp = eax;
/* 9983f7: call 0x99cf4e */
  esp -= 4; W32(esp, 0x9983fcu); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 9983fc: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9983ff: mov ebx, eax */
  ebx = eax;
/* 998401: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 998402: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 998403: mov ecx, edi */
  ecx = edi;
/* 998405: call 0x997f60 */
  esp -= 4; W32(esp, 0x99840au); SPILL(); f_997f60(); if (g_unwind) return; RELOAD();
/* 99840a: mov esi, eax */
  esi = eax;
/* 99840c: push 0x997ad0 */
  { uint32_t v = 0x997ad0u; esp -= 4; W32(esp, v); }
/* 998411: sub esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 998413: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 998415: sar esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 998418: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 998419: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 99841a: call 0x99cc90 */
  esp -= 4; W32(esp, 0x99841fu); SPILL(); f_99cc90(); if (g_unwind) return; RELOAD();
/* 99841f: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 998422: mov ecx, dword ptr [edi + 0x14] */
  ecx = R32((uint32_t)(edi + 0x14u));
/* 998425: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 998427: mov eax, esi */
  eax = esi;
/* 998429: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 99842a: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 99842c: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 99842e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 998431: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 998433: jge 0x998437 */
  if ((sf == of)) goto L_998437;
L_998435: /* 998435: mov eax, ecx */
  eax = ecx;
L_998437: /* 998437: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 998439: jle 0x998457 */
  if ((zf || sf != of)) goto L_998457;
L_99843b: /* 99843b: mov esi, ebx */
  esi = ebx;
/* 99843d: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
L_998441: /* 998441: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 998442: mov ecx, edi */
  ecx = edi;
/* 998444: call 0x997ae0 */
  esp -= 4; W32(esp, 0x998449u); SPILL(); f_997ae0(); if (g_unwind) return; RELOAD();
/* 998449: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 99844d: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 998450: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 998451: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 998455: jne 0x998441 */
  if (!zf) goto L_998441;
L_998457: /* 998457: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 998458: call 0x99cf5a */
  esp -= 4; W32(esp, 0x99845du); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 99845d: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 998460: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 998463: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 998466: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 998468: jg 0x9983e6 */
  if ((!zf && sf == of)) goto L_9983e6;
L_99846e: /* 99846e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99846f: mov eax, ebp */
  eax = ebp;
/* 998471: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 998472: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 998473: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 998474: ret 4 */
  esp += 8; SPILL(); return;
L_998477: /* 998477: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 99847b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 99847c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_998480(void) {
  LOAD_REGS();
L_998480: /* 998480: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 998484: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 998485: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 998486: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 99848a: mov esi, ecx */
  esi = ecx;
/* 99848c: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 99848f: mov dword ptr [esi + 0x2c], edi */
  W32((uint32_t)(esi + 0x2cu), edi);
/* 998492: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 998495: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 998497: je 0x9984a2 */
  if (zf) goto L_9984a2;
L_998499: /* 998499: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99849a: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x99849fu); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 99849f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9984a2: /* 9984a2: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 9984a6: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 9984aa: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 9984ae: mov dword ptr [edi + 0x18], 0 */
  W32((uint32_t)(edi + 0x18u), 0x0u);
/* 9984b5: mov dword ptr [edi + 0x1c], 0 */
  W32((uint32_t)(edi + 0x1cu), 0x0u);
/* 9984bc: mov dword ptr [edi + 0x20], 0 */
  W32((uint32_t)(edi + 0x20u), 0x0u);
/* 9984c3: mov dword ptr [esi + 0x1c], ecx */
  W32((uint32_t)(esi + 0x1cu), ecx);
/* 9984c6: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 9984ca: mov dword ptr [esi + 0x18], edx */
  W32((uint32_t)(esi + 0x18u), edx);
/* 9984cd: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 9984d1: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 9984d4: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 9984d8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9984d9: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 9984dc: mov dword ptr [esi + 0x24], edx */
  W32((uint32_t)(esi + 0x24u), edx);
/* 9984df: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 9984e2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9984e3: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_9984f0(void) {
  LOAD_REGS();
L_9984f0: /* 9984f0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9984f3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9984f4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9984f5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9984f6: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 9984fa: cmp dword ptr [esi], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9984fd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9984fe: mov edi, ecx */
  edi = ecx;
/* 998500: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 998504: jne 0x99851d */
  if (!zf) goto L_99851d;
L_998506: /* 998506: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 998509: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99850a: mov ecx, edi */
  ecx = edi;
/* 99850c: call 0x9984f0 */
  esp -= 4; W32(esp, 0x998511u); SPILL(); f_9984f0(); if (g_unwind) return; RELOAD();
/* 998511: mov esi, dword ptr [esi + 0x10] */
  esi = R32((uint32_t)(esi + 0x10u));
/* 998514: cmp dword ptr [esi], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 998517: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 99851b: je 0x998506 */
  if (zf) goto L_998506;
L_99851d: /* 99851d: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 998520: xor eax, eax */
  eax = 0;
/* 998522: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 998524: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 998528: jle 0x9985c7 */
  if ((zf || sf != of)) goto L_9985c7;
L_99852e: /* 99852e: mov edi, edi */
  edi = edi;
L_998530: /* 998530: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 998533: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 998536: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 998538: xor ebp, ebp */
  ebp = 0;
/* 99853a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 99853c: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 998540: jle 0x9985b7 */
  if ((zf || sf != of)) goto L_9985b7;
L_998542: /* 998542: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 998546: mov esi, dword ptr [edi + 0x2c] */
  esi = R32((uint32_t)(edi + 0x2cu));
/* 998549: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 99854c: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 99854f: add esi, 0x14 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 998552: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 998554: lea ebx, [ecx + ebp*4] */
  ebx = (uint32_t)(ecx + ebp*4);
/* 998557: jne 0x99855d */
  if (!zf) goto L_99855d;
L_998559: /* 998559: xor edx, edx */
  edx = 0;
/* 99855b: jmp 0x998565 */
  goto L_998565;
L_99855d: /* 99855d: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 998560: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 998562: sar edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
L_998565: /* 998565: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 998567: je 0x998596 */
  if (zf) goto L_998596;
L_998569: /* 998569: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 99856c: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 99856e: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 998571: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 998573: jae 0x998596 */
  if (!cf) goto L_998596;
L_998575: /* 998575: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 998579: mov edi, dword ptr [esi + 8] */
  edi = R32((uint32_t)(esi + 0x8u));
/* 99857c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 99857d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99857e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 99857f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 998581: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 998582: call 0x996ce0 */
  esp -= 4; W32(esp, 0x998587u); SPILL(); f_996ce0(); if (g_unwind) return; RELOAD();
/* 998587: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99858a: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 99858d: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* 998590: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 998594: jmp 0x9985a8 */
  goto L_9985a8;
L_998596: /* 998596: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 998599: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 99859a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 99859c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99859d: mov ecx, esp */
  ecx = esp;
/* 99859f: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 9985a1: mov ecx, esi */
  ecx = esi;
/* 9985a3: call 0x996ea0 */
  esp -= 4; W32(esp, 0x9985a8u); SPILL(); f_996ea0(); if (g_unwind) return; RELOAD();
L_9985a8: /* 9985a8: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 9985aa: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 9985ab: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9985ad: jl 0x998542 */
  if ((sf != of)) goto L_998542;
L_9985af: /* 9985af: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 9985b3: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_9985b7: /* 9985b7: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 9985ba: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9985bb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9985bd: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 9985c1: jl 0x998530 */
  if ((sf != of)) goto L_998530;
L_9985c7: /* 9985c7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9985c8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9985c9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9985ca: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9985cb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9985ce: ret 4 */
  esp += 8; SPILL(); return;
}

void f_9985e0(void) {
  LOAD_REGS();
L_9985e0: /* 9985e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9985e1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9985e3: mov esi, ecx */
  esi = ecx;
/* 9985e5: call 0x99cf00 */
  esp -= 4; W32(esp, 0x9985eau); SPILL(); f_99cf00(); if (g_unwind) return; RELOAD();
/* 9985ea: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 9985ed: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 9985ef: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 9985f2: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 9985f5: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 9985f8: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 9985fb: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 9985fe: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 998601: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 998604: mov ecx, dword ptr [esi + 0x24] */
  ecx = R32((uint32_t)(esi + 0x24u));
/* 998607: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 99860a: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 99860e: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 998611: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 998614: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 998617: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 998618: mov ecx, esi */
  ecx = esi;
/* 99861a: mov dword ptr [edx + 0x10], eax */
  W32((uint32_t)(edx + 0x10u), eax);
/* 99861d: call 0x9984f0 */
  esp -= 4; W32(esp, 0x998622u); SPILL(); f_9984f0(); if (g_unwind) return; RELOAD();
/* 998622: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 998623: ret 4 */
  esp += 8; SPILL(); return;
}

void f_998630(void) {
  LOAD_REGS();
L_998630: /* 998630: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 998633: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 998634: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* 998638: call 0x997890 */
  esp -= 4; W32(esp, 0x99863du); SPILL(); f_997890(); if (g_unwind) return; RELOAD();
/* 99863d: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 998641: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 998645: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 998649: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99864a: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 99864e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99864f: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 998653: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 998654: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 998658: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 998659: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 99865d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99865e: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 998662: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 998663: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 998664: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 998665: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 998669: call 0x998480 */
  esp -= 4; W32(esp, 0x99866eu); SPILL(); f_998480(); if (g_unwind) return; RELOAD();
/* 99866e: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* 998672: call 0x998210 */
  esp -= 4; W32(esp, 0x998677u); SPILL(); f_998210(); if (g_unwind) return; RELOAD();
/* 998677: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 998678: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 99867c: call 0x9983d0 */
  esp -= 4; W32(esp, 0x998681u); SPILL(); f_9983d0(); if (g_unwind) return; RELOAD();
/* 998681: mov esi, eax */
  esi = eax;
/* 998683: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 998684: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 998688: call 0x9985e0 */
  esp -= 4; W32(esp, 0x99868du); SPILL(); f_9985e0(); if (g_unwind) return; RELOAD();
/* 99868d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99868e: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 998692: call 0x997c30 */
  esp -= 4; W32(esp, 0x998697u); SPILL(); f_997c30(); if (g_unwind) return; RELOAD();
/* 998697: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 998698: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99869b: ret  */
  esp += 4; SPILL(); return;
}

void f_9986a0(void) {
  LOAD_REGS();
L_9986a0: /* 9986a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 9986a4: cmp ax, 0xff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 15) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 15) & 1;
  }
/* 9986a8: jle 0x9986b0 */
  if ((zf || sf != of)) goto L_9986b0;
L_9986aa: /* 9986aa: mov eax, 0xff */
  eax = 0xffu;
/* 9986af: ret  */
  esp += 4; SPILL(); return;
L_9986b0: /* 9986b0: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  sf = ((r) >> 15) & 1;
  of = 0;
  }
/* 9986b3: jge 0x9986b7 */
  if ((sf == of)) goto L_9986b7;
L_9986b5: /* 9986b5: xor eax, eax */
  eax = 0;
L_9986b7: /* 9986b7: ret  */
  esp += 4; SPILL(); return;
}

void f_9986c0(void) {
  LOAD_REGS();
L_9986c0: /* 9986c0: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9986c3: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 9986c7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9986c8: mov ebx, dword ptr [esp + 0x60] */
  ebx = R32((uint32_t)(esp + 0x60u));
/* 9986cc: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9986cd: mov ebp, dword ptr [esp + 0x5c] */
  ebp = R32((uint32_t)(esp + 0x5cu));
/* 9986d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9986d2: mov ecx, 0xc */
  ecx = 0xcu;
/* 9986d7: sub ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* 9986d9: mov ebp, dword ptr [esp + 0x54] */
  ebp = R32((uint32_t)(esp + 0x54u));
/* 9986dd: mov esi, 1 */
  esi = 0x1u;
/* 9986e2: shl esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
  }
/* 9986e4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9986e5: mov ecx, 0xc */
  ecx = 0xcu;
/* 9986ea: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* 9986ec: mov edi, 1 */
  edi = 0x1u;
/* 9986f1: shl edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
  }
/* 9986f3: mov ecx, 0xc */
  ecx = 0xcu;
/* 9986f8: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* 9986fa: mov ebx, dword ptr [esp + 0x5c] */
  ebx = R32((uint32_t)(esp + 0x5cu));
/* 9986fe: mov eax, 1 */
  eax = 0x1u;
/* 998703: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 998705: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 998706: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 998707: mov ecx, 0xc */
  ecx = 0xcu;
/* 99870c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 99870d: mov dword ptr [esp + 0x6c], eax */
  W32((uint32_t)(esp + 0x6cu), eax);
/* 998711: sub ecx, dword ptr [esp + 0x60] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x60u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* 998715: mov eax, 1 */
  eax = 0x1u;
/* 99871a: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 99871c: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 998720: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 998724: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 998725: mov dword ptr [esp + 0x60], eax */
  W32((uint32_t)(esp + 0x60u), eax);
/* 998729: mov eax, ebp */
  eax = ebp;
/* 99872b: imul eax, ebx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ebx);
  eax = (uint32_t)r;
  }
/* 99872e: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 998731: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 998732: call 0x6c8b11 */
  esp -= 4; W32(esp, 0x998737u); SPILL(); f_6c8b11(); if (g_unwind) return; RELOAD();
/* 998737: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 99873b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99873e: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 998740: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 998744: mov dword ptr [esp + 0x68], eax */
  W32((uint32_t)(esp + 0x68u), eax);
/* 998748: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 99874c: jle 0x9987f2 */
  if ((zf || sf != of)) goto L_9987f2;
L_998752: /* 998752: lea ecx, [ebp*4] */
  ecx = (uint32_t)(ebp*4);
/* 998759: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 99875d: lea ecx, [ebp*8] */
  ecx = (uint32_t)(ebp*8);
/* 998764: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 998768: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 99876c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_998770: /* 998770: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 998772: jle 0x9987c7 */
  if ((zf || sf != of)) goto L_9987c7;
L_998774: /* 998774: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 998777: lea eax, [edx + 2] */
  eax = (uint32_t)(edx + 0x2u);
/* 99877a: mov dword ptr [esp + 0x64], ebp */
  W32((uint32_t)(esp + 0x64u), ebp);
/* 99877e: mov edi, edi */
  edi = edi;
L_998780: /* 998780: movzx dx, byte ptr [eax - 1] */
  edx = (edx & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(eax + 0xffffffffu)))) & 0xffffu);
/* 998785: movzx di, byte ptr [eax] */
  edi = (edi & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(eax)))) & 0xffffu);
/* 998789: movzx bx, byte ptr [eax + 1] */
  ebx = (ebx & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(eax + 0x1u)))) & 0xffffu);
/* 99878e: movzx bp, byte ptr [eax - 2] */
  ebp = (ebp & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(eax + 0xfffffffeu)))) & 0xffffu);
/* 998793: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 998796: mov word ptr [ecx - 2], dx */
  W16((uint32_t)(ecx + 0xfffffffeu), (edx & 0xffffu));
/* 99879a: mov edx, dword ptr [esp + 0x64] */
  edx = R32((uint32_t)(esp + 0x64u));
/* 99879e: shl edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 9987a1: shl ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 9987a4: mov word ptr [ecx], di */
  W16((uint32_t)(ecx), (edi & 0xffffu));
/* 9987a7: shl ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebp = r;
  }
/* 9987aa: mov word ptr [ecx - 4], bp */
  W16((uint32_t)(ecx + 0xfffffffcu), (ebp & 0xffffu));
/* 9987ae: mov word ptr [ecx + 2], bx */
  W16((uint32_t)(ecx + 0x2u), (ebx & 0xffffu));
/* 9987b2: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9987b5: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9987b8: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 9987b9: mov dword ptr [esp + 0x64], edx */
  W32((uint32_t)(esp + 0x64u), edx);
/* 9987bd: jne 0x998780 */
  if (!zf) goto L_998780;
L_9987bf: /* 9987bf: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 9987c3: mov ebp, dword ptr [esp + 0x58] */
  ebp = R32((uint32_t)(esp + 0x58u));
L_9987c7: /* 9987c7: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 9987cb: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 9987cf: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 9987d3: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 9987d7: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9987d9: mov eax, dword ptr [esp + 0x68] */
  eax = R32((uint32_t)(esp + 0x68u));
/* 9987dd: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9987df: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 9987e0: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 9987e4: mov dword ptr [esp + 0x68], eax */
  W32((uint32_t)(esp + 0x68u), eax);
/* 9987e8: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 9987ec: jne 0x998770 */
  if (!zf) goto L_998770;
L_9987ee: /* 9987ee: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
L_9987f2: /* 9987f2: mov ecx, dword ptr [esp + 0x5c] */
  ecx = R32((uint32_t)(esp + 0x5cu));
/* 9987f6: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 9987f7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9987f9: mov ebx, eax */
  ebx = eax;
/* 9987fb: mov dword ptr [esp + 0x68], ebx */
  W32((uint32_t)(esp + 0x68u), ebx);
/* 9987ff: jle 0x998abe */
  if ((zf || sf != of)) goto L_998abe;
L_998805: /* 998805: movsx eax, word ptr [esp + 0x14] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(esp + 0x14u)));
/* 99880a: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 99880b: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 99880d: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  ebp = r;
  }
/* 99880e: mov dword ptr [esp + 0x30], ebp */
  W32((uint32_t)(esp + 0x30u), ebp);
/* 998812: mov ebp, eax */
  ebp = eax;
/* 998814: movsx eax, word ptr [esp + 0x10] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(esp + 0x10u)));
/* 998819: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 99881a: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 99881c: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 99881e: mov dword ptr [esp + 0x64], eax */
  W32((uint32_t)(esp + 0x64u), eax);
/* 998822: movsx eax, word ptr [esp + 0x6c] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(esp + 0x6cu)));
/* 998827: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 998828: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 99882a: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 99882c: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 998830: mov eax, dword ptr [esp + 0x6c] */
  eax = R32((uint32_t)(esp + 0x6cu));
/* 998834: not eax */
  eax = ~eax;
/* 998836: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 99883a: movsx eax, word ptr [esp + 0x60] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(esp + 0x60u)));
/* 99883f: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 998840: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 998842: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 998844: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* 998848: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
/* 99884c: not eax */
  eax = ~eax;
/* 99884e: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 998852: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* 998856: sar ebp, 1 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebp = r;
  }
/* 998858: not esi */
  esi = ~esi;
/* 99885a: not edi */
  edi = ~edi;
/* 99885c: mov dword ptr [esp + 0x38], ebp */
  W32((uint32_t)(esp + 0x38u), ebp);
/* 998860: mov dword ptr [esp + 0x3c], esi */
  W32((uint32_t)(esp + 0x3cu), esi);
/* 998864: mov dword ptr [esp + 0x40], edi */
  W32((uint32_t)(esp + 0x40u), edi);
/* 998868: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 99886b: mov dword ptr [esp + 0x48], ecx */
  W32((uint32_t)(esp + 0x48u), ecx);
/* 99886f: nop  */
L_998870: /* 998870: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 998874: xor edi, edi */
  edi = 0;
/* 998876: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 998878: mov dword ptr [esp + 0x34], edi */
  W32((uint32_t)(esp + 0x34u), edi);
/* 99887c: jle 0x998a3c */
  if ((zf || sf != of)) goto L_998a3c;
L_998882: /* 998882: lea ecx, [ebx + 4] */
  ecx = (uint32_t)(ebx + 0x4u);
/* 998885: lea esi, [eax + ebx + 4] */
  esi = (uint32_t)(eax + ebx + 0x4u);
/* 998889: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_998890: /* 998890: xor eax, eax */
  eax = 0;
/* 998892: mov ax, word ptr [ecx - 4] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0xfffffffcu))) & 0xffffu);
/* 998896: mov bx, word ptr [ecx + 2] */
  ebx = (ebx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x2u))) & 0xffffu);
/* 99889a: mov dx, word ptr [ecx - 2] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0xfffffffeu))) & 0xffffu);
/* 99889e: mov di, word ptr [ecx] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 9988a1: mov word ptr [esp + 0x24], bx */
  W16((uint32_t)(esp + 0x24u), (ebx & 0xffffu));
/* 9988a6: mov ebx, dword ptr [esp + 0x3c] */
  ebx = R32((uint32_t)(esp + 0x3cu));
/* 9988aa: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 9988ac: and ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 9988ae: mov ebx, eax */
  ebx = eax;
/* 9988b0: sub ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 9988b2: mov dword ptr [esp + 0x4c], ebx */
  W32((uint32_t)(esp + 0x4cu), ebx);
/* 9988b6: mov ebx, dword ptr [esp + 0x64] */
  ebx = R32((uint32_t)(esp + 0x64u));
/* 9988ba: lea ebp, [ebx + edx] */
  ebp = (uint32_t)(ebx + edx);
/* 9988bd: and ebp, dword ptr [esp + 0x40] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x40u)));
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 9988c1: mov ebx, edx */
  ebx = edx;
/* 9988c3: sub ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 9988c5: mov dword ptr [esp + 0x2c], ebx */
  W32((uint32_t)(esp + 0x2cu), ebx);
/* 9988c9: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 9988cd: lea ebp, [ebx + edi] */
  ebp = (uint32_t)(ebx + edi);
/* 9988d0: and ebp, dword ptr [esp + 0x1c] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x1cu)));
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 9988d4: mov ebx, edi */
  ebx = edi;
/* 9988d6: sub ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 9988d8: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
/* 9988dc: mov dword ptr [esp + 0x30], ebx */
  W32((uint32_t)(esp + 0x30u), ebx);
/* 9988e0: mov ebx, dword ptr [esp + 0x44] */
  ebx = R32((uint32_t)(esp + 0x44u));
/* 9988e4: add ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 9988e6: and ebp, dword ptr [esp + 0x20] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x20u)));
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 9988ea: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* 9988ee: sub ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 9988f0: mov ebp, dword ptr [esp + 0x4c] */
  ebp = R32((uint32_t)(esp + 0x4cu));
/* 9988f4: sub eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9988f6: mov word ptr [ecx - 4], ax */
  W16((uint32_t)(ecx + 0xfffffffcu), (eax & 0xffffu));
/* 9988fa: sub edx, dword ptr [esp + 0x2c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 9988fe: sub edi, dword ptr [esp + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 998902: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 998906: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 998908: mov word ptr [ecx + 2], ax */
  W16((uint32_t)(ecx + 0x2u), (eax & 0xffffu));
/* 99890c: mov word ptr [ecx - 2], dx */
  W16((uint32_t)(ecx + 0xfffffffeu), (edx & 0xffffu));
/* 998910: movsx ebp, bp */
  ebp = (uint32_t)(int32_t)(int16_t)((ebp & 0xffffu));
/* 998913: mov eax, ebp */
  eax = ebp;
/* 998915: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 998916: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 998918: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 99891a: add word ptr [ecx + 4], ax */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx + 0x4u))); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a + b);
  W16((uint32_t)(ecx + 0x4u), r);
  }
/* 99891e: mov word ptr [ecx], di */
  W16((uint32_t)(ecx), (edi & 0xffffu));
/* 998921: movsx edi, word ptr [esp + 0x2c] */
  edi = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(esp + 0x2cu)));
/* 998926: mov eax, edi */
  eax = edi;
/* 998928: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 998929: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 99892b: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 99892d: add word ptr [ecx + 6], ax */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx + 0x6u))); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a + b);
  W16((uint32_t)(ecx + 0x6u), r);
  }
/* 998931: movsx eax, word ptr [esp + 0x30] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(esp + 0x30u)));
/* 998936: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 99893a: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 99893b: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 99893d: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 99893f: add word ptr [ecx + 8], ax */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx + 0x8u))); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a + b);
  W16((uint32_t)(ecx + 0x8u), r);
  }
/* 998943: movsx ebx, bx */
  ebx = (uint32_t)(int32_t)(int16_t)((ebx & 0xffffu));
/* 998946: mov eax, ebx */
  eax = ebx;
/* 998948: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 998949: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 99894b: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 99894d: add word ptr [ecx + 0xa], ax */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx + 0xau))); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a + b);
  W16((uint32_t)(ecx + 0xau), r);
  }
/* 998951: mov eax, ebp */
  eax = ebp;
/* 998953: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 998954: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 998957: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 998959: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 99895c: add word ptr [esi - 4], ax */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0xfffffffcu))); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a + b);
  W16((uint32_t)(esi + 0xfffffffcu), r);
  }
/* 998960: mov eax, edi */
  eax = edi;
/* 998962: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 998963: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 998966: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 998968: mov dword ptr [esp + 0x4c], edi */
  W32((uint32_t)(esp + 0x4cu), edi);
/* 99896c: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 99896f: add word ptr [esi - 2], ax */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0xfffffffeu))); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a + b);
  W16((uint32_t)(esi + 0xfffffffeu), r);
  }
/* 998973: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 998977: mov edi, dword ptr [esp + 0x34] */
  edi = R32((uint32_t)(esp + 0x34u));
/* 99897b: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 99897c: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 99897f: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 998981: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 998984: add word ptr [esi], ax */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a + b);
  W16((uint32_t)(esi), r);
  }
/* 998987: mov eax, ebx */
  eax = ebx;
/* 998989: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 99898a: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 99898d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 99898f: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 998992: add word ptr [esi + 2], ax */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0x2u))); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a + b);
  W16((uint32_t)(esi + 0x2u), r);
  }
/* 998996: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 998998: je 0x998a14 */
  if (zf) goto L_998a14;
L_99899a: /* 99899a: mov eax, ebp */
  eax = ebp;
/* 99899c: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 99899d: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 9989a0: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9989a2: mov ebp, eax */
  ebp = eax;
/* 9989a4: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 9989a8: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 9989a9: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 9989ac: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9989ae: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 9989b1: add word ptr [esi - 0xa], ax */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0xfffffff6u))); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a + b);
  W16((uint32_t)(esi + 0xfffffff6u), r);
  }
/* 9989b5: mov dword ptr [esp + 0x4c], eax */
  W32((uint32_t)(esp + 0x4cu), eax);
/* 9989b9: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 9989bd: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 9989be: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 9989c1: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9989c3: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 9989c6: add word ptr [esi - 8], ax */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0xfffffff8u))); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a + b);
  W16((uint32_t)(esi + 0xfffffff8u), r);
  }
/* 9989ca: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 9989ce: mov eax, ebx */
  eax = ebx;
/* 9989d0: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 9989d1: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 9989d4: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9989d6: sar ebp, 3 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebp = r;
  }
/* 9989d9: add word ptr [esi - 0xc], bp */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0xfffffff4u))); uint16_t b = (uint16_t)((ebp & 0xffffu));
  uint16_t r = (uint16_t)(a + b);
  W16((uint32_t)(esi + 0xfffffff4u), r);
  }
/* 9989dd: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 9989e0: add word ptr [esi - 6], ax */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0xfffffffau))); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a + b);
  W16((uint32_t)(esi + 0xfffffffau), r);
  }
/* 9989e4: cmp edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9989e7: jle 0x998a14 */
  if ((zf || sf != of)) goto L_998a14;
L_9989e9: /* 9989e9: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 9989ed: mov ebx, dword ptr [esp + 0x68] */
  ebx = R32((uint32_t)(esp + 0x68u));
/* 9989f1: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9989f3: add word ptr [ebx + edx*8 - 0x18], bp */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebx + edx*8 + 0xffffffe8u))); uint16_t b = (uint16_t)((ebp & 0xffffu));
  uint16_t r = (uint16_t)(a + b);
  W16((uint32_t)(ebx + edx*8 + 0xffffffe8u), r);
  }
/* 9989f8: lea edx, [ebx + edx*8 - 0x18] */
  edx = (uint32_t)(ebx + edx*8 + 0xffffffe8u);
/* 9989fc: mov dx, word ptr [esp + 0x4c] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x4cu))) & 0xffffu);
/* 998a01: add word ptr [esi - 0x1a], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0xffffffe6u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a + b);
  W16((uint32_t)(esi + 0xffffffe6u), r);
  }
/* 998a05: mov dx, word ptr [esp + 0x34] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x34u))) & 0xffffu);
/* 998a0a: add word ptr [esi - 0x18], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0xffffffe8u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a + b);
  W16((uint32_t)(esi + 0xffffffe8u), r);
  }
/* 998a0e: add word ptr [esi - 0x16], ax */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0xffffffeau))); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a + b);
  W16((uint32_t)(esi + 0xffffffeau), r);
  }
/* 998a12: jmp 0x998a18 */
  goto L_998a18;
L_998a14: /* 998a14: mov ebx, dword ptr [esp + 0x68] */
  ebx = R32((uint32_t)(esp + 0x68u));
L_998a18: /* 998a18: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* 998a1c: mov ebp, dword ptr [esp + 0x38] */
  ebp = R32((uint32_t)(esp + 0x38u));
/* 998a20: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 998a21: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 998a24: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 998a27: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 998a28: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 998a2a: mov dword ptr [esp + 0x34], edi */
  W32((uint32_t)(esp + 0x34u), edi);
/* 998a2e: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 998a32: jl 0x998890 */
  if ((sf != of)) goto L_998890;
L_998a38: /* 998a38: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
L_998a3c: /* 998a3c: lea eax, [ebx + edi*8 + 6] */
  eax = (uint32_t)(ebx + edi*8 + 0x6u);
/* 998a40: mov dword ptr [esp + 0x68], eax */
  W32((uint32_t)(esp + 0x68u), eax);
/* 998a44: xor eax, eax */
  eax = 0;
/* 998a46: mov ax, word ptr [ebx + edi*8] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx + edi*8))) & 0xffffu);
/* 998a4a: lea ecx, [ebx + edi*8 + 2] */
  ecx = (uint32_t)(ebx + edi*8 + 0x2u);
/* 998a4e: lea edx, [ebx + edi*8 + 4] */
  edx = (uint32_t)(ebx + edi*8 + 0x4u);
/* 998a52: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 998a54: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 998a56: mov word ptr [ebx + edi*8], ax */
  W16((uint32_t)(ebx + edi*8), (eax & 0xffffu));
/* 998a5a: mov edi, dword ptr [esp + 0x64] */
  edi = R32((uint32_t)(esp + 0x64u));
/* 998a5e: xor eax, eax */
  eax = 0;
/* 998a60: mov ax, word ptr [ecx] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 998a63: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 998a65: and edi, dword ptr [esp + 0x40] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x40u)));
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 998a69: xor eax, eax */
  eax = 0;
/* 998a6b: mov ax, word ptr [edx] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx))) & 0xffffu);
/* 998a6e: mov word ptr [ecx], di */
  W16((uint32_t)(ecx), (edi & 0xffffu));
/* 998a71: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 998a75: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 998a79: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 998a7b: and ecx, dword ptr [esp + 0x1c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x1cu)));
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 998a7f: mov eax, dword ptr [esp + 0x68] */
  eax = R32((uint32_t)(esp + 0x68u));
/* 998a83: mov word ptr [edx], cx */
  W16((uint32_t)(edx), (ecx & 0xffffu));
/* 998a86: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 998a8a: xor ecx, ecx */
  ecx = 0;
/* 998a8c: mov cx, word ptr [eax] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 998a8f: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 998a91: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 998a95: and edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 998a97: mov word ptr [eax], dx */
  W16((uint32_t)(eax), (edx & 0xffffu));
/* 998a9a: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* 998a9e: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 998aa1: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 998aa3: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 998aa4: mov dword ptr [esp + 0x68], ebx */
  W32((uint32_t)(esp + 0x68u), ebx);
/* 998aa8: mov dword ptr [esp + 0x48], ecx */
  W32((uint32_t)(esp + 0x48u), ecx);
/* 998aac: jne 0x998870 */
  if (!zf) goto L_998870;
L_998ab2: /* 998ab2: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 998ab6: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 998aba: mov ebp, dword ptr [esp + 0x58] */
  ebp = R32((uint32_t)(esp + 0x58u));
L_998abe: /* 998abe: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 998ac0: jle 0x998b73 */
  if ((zf || sf != of)) goto L_998b73;
L_998ac6: /* 998ac6: movsx eax, word ptr [esp + 0x14] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(esp + 0x14u)));
/* 998acb: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 998acc: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 998ace: mov ebp, eax */
  ebp = eax;
/* 998ad0: movsx eax, word ptr [esp + 0x10] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(esp + 0x10u)));
/* 998ad5: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 998ad6: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 998ad8: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 998ada: mov dword ptr [esp + 0x64], eax */
  W32((uint32_t)(esp + 0x64u), eax);
/* 998ade: movsx eax, word ptr [esp + 0x6c] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(esp + 0x6cu)));
/* 998ae3: mov ecx, dword ptr [esp + 0x60] */
  ecx = R32((uint32_t)(esp + 0x60u));
/* 998ae7: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 998ae8: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 998aea: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 998aec: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 998af0: mov eax, dword ptr [esp + 0x6c] */
  eax = R32((uint32_t)(esp + 0x6cu));
/* 998af4: not eax */
  eax = ~eax;
/* 998af6: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 998afa: movsx eax, word ptr [esp + 0x60] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(esp + 0x60u)));
/* 998aff: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 998b00: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 998b02: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 998b06: not ecx */
  ecx = ~ecx;
/* 998b08: sar ebp, 1 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebp = r;
  }
/* 998b0a: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 998b0e: not esi */
  esi = ~esi;
/* 998b10: not edi */
  edi = ~edi;
/* 998b12: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 998b14: lea ecx, [ebx + 4] */
  ecx = (uint32_t)(ebx + 0x4u);
/* 998b17: mov dword ptr [esp + 0x68], edx */
  W32((uint32_t)(esp + 0x68u), edx);
/* 998b1b: jmp 0x998b20 */
  goto L_998b20;
L_998b20: /* 998b20: xor edx, edx */
  edx = 0;
/* 998b22: mov dx, word ptr [ecx - 4] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0xfffffffcu))) & 0xffffu);
/* 998b26: xor ebx, ebx */
  ebx = 0;
/* 998b28: mov bx, word ptr [ecx - 2] */
  ebx = (ebx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0xfffffffeu))) & 0xffffu);
/* 998b2c: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 998b2f: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 998b31: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 998b33: mov word ptr [ecx - 0xc], dx */
  W16((uint32_t)(ecx + 0xfffffff4u), (edx & 0xffffu));
/* 998b37: mov edx, dword ptr [esp + 0x64] */
  edx = R32((uint32_t)(esp + 0x64u));
/* 998b3b: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 998b3d: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 998b41: and edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 998b43: mov word ptr [ecx - 0xa], dx */
  W16((uint32_t)(ecx + 0xfffffff6u), (edx & 0xffffu));
/* 998b47: xor edx, edx */
  edx = 0;
/* 998b49: mov dx, word ptr [ecx - 8] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0xfffffff8u))) & 0xffffu);
/* 998b4d: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 998b4f: and ebx, dword ptr [esp + 0x1c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x1cu)));
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 998b53: xor edx, edx */
  edx = 0;
/* 998b55: mov dx, word ptr [ecx - 6] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0xfffffffau))) & 0xffffu);
/* 998b59: mov word ptr [ecx - 8], bx */
  W16((uint32_t)(ecx + 0xfffffff8u), (ebx & 0xffffu));
/* 998b5d: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 998b61: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 998b63: and edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 998b65: mov word ptr [ecx - 6], dx */
  W16((uint32_t)(ecx + 0xfffffffau), (edx & 0xffffu));
/* 998b69: dec dword ptr [esp + 0x68] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x68u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x68u), r);
  }
/* 998b6d: jne 0x998b20 */
  if (!zf) goto L_998b20;
L_998b6f: /* 998b6f: mov ebp, dword ptr [esp + 0x58] */
  ebp = R32((uint32_t)(esp + 0x58u));
L_998b73: /* 998b73: mov eax, dword ptr [esp + 0x5c] */
  eax = R32((uint32_t)(esp + 0x5cu));
/* 998b77: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* 998b7b: sar word ptr [esp + 0x14], 4 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esp + 0x14u))); uint32_t c = 4;
  uint16_t r = (uint16_t)((int32_t)(int16_t)a >> c);
  W16((uint32_t)(esp + 0x14u), r);
  }
/* 998b81: sar word ptr [esp + 0x10], 4 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esp + 0x10u))); uint32_t c = 4;
  uint16_t r = (uint16_t)((int32_t)(int16_t)a >> c);
  W16((uint32_t)(esp + 0x10u), r);
  }
/* 998b87: sar word ptr [esp + 0x6c], 4 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esp + 0x6cu))); uint32_t c = 4;
  uint16_t r = (uint16_t)((int32_t)(int16_t)a >> c);
  W16((uint32_t)(esp + 0x6cu), r);
  }
/* 998b8d: sar word ptr [esp + 0x60], 4 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esp + 0x60u))); uint32_t c = 4;
  uint16_t r = (uint16_t)((int32_t)(int16_t)a >> c);
  W16((uint32_t)(esp + 0x60u), r);
  }
/* 998b93: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 998b95: mov esi, dword ptr [esp + 0x54] */
  esi = R32((uint32_t)(esp + 0x54u));
/* 998b99: mov dword ptr [esp + 0x68], edi */
  W32((uint32_t)(esp + 0x68u), edi);
/* 998b9d: jle 0x998cc0 */
  if ((zf || sf != of)) goto L_998cc0;
L_998ba3: /* 998ba3: lea ecx, [ebp*4] */
  ecx = (uint32_t)(ebp*4);
/* 998baa: lea edx, [ebp*8] */
  edx = (uint32_t)(ebp*8);
/* 998bb1: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 998bb5: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 998bb9: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 998bbd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_998bc0: /* 998bc0: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 998bc2: jle 0x998c9d */
  if ((zf || sf != of)) goto L_998c9d;
L_998bc8: /* 998bc8: mov al, byte ptr [esp + 0x10] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x10u))) & 0xffu);
/* 998bcc: mov bl, byte ptr [esp + 0x14] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x14u))) & 0xffu);
/* 998bd0: mov dl, byte ptr [esp + 0x60] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x60u))) & 0xffu);
/* 998bd4: mov ebp, dword ptr [esp + 0x58] */
  ebp = R32((uint32_t)(esp + 0x58u));
/* 998bd8: not al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(~(eax & 0xffu)) & 0xffu);
/* 998bda: mov byte ptr [esp + 0x54], al */
  W8((uint32_t)(esp + 0x54u), (eax & 0xffu));
/* 998bde: mov al, byte ptr [esp + 0x6c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x6cu))) & 0xffu);
/* 998be2: not bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(~(ebx & 0xffu)) & 0xffu);
/* 998be4: not al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(~(eax & 0xffu)) & 0xffu);
/* 998be6: mov byte ptr [esp + 0x5c], bl */
  W8((uint32_t)(esp + 0x5cu), (ebx & 0xffu));
/* 998bea: mov byte ptr [esp + 0x64], al */
  W8((uint32_t)(esp + 0x64u), (eax & 0xffu));
/* 998bee: not dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)(~(edx & 0xffu)) & 0xffu);
/* 998bf0: lea ecx, [esi + 2] */
  ecx = (uint32_t)(esi + 0x2u);
/* 998bf3: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 998bf6: jmp 0x998c00 */
  goto L_998c00;
L_998bf8: /* 998bf8: mov bl, byte ptr [esp + 0x5c] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x5cu))) & 0xffu);
/* 998bfc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_998c00: /* 998c00: mov ax, word ptr [edi - 4] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + 0xfffffffcu))) & 0xffffu);
/* 998c04: sar ax, 4 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint32_t c = 4;
  uint16_t r = (uint16_t)((int32_t)(int16_t)a >> c);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 998c08: cmp ax, 0xff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 15) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 15) & 1;
  }
/* 998c0c: jle 0x998c15 */
  if ((zf || sf != of)) goto L_998c15;
L_998c0e: /* 998c0e: mov eax, 0xff */
  eax = 0xffu;
/* 998c13: jmp 0x998c1c */
  goto L_998c1c;
L_998c15: /* 998c15: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  sf = ((r) >> 15) & 1;
  of = 0;
  }
/* 998c18: jge 0x998c1c */
  if ((sf == of)) goto L_998c1c;
L_998c1a: /* 998c1a: xor eax, eax */
  eax = 0;
L_998c1c: /* 998c1c: and bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 998c1e: mov byte ptr [ecx - 2], bl */
  W8((uint32_t)(ecx + 0xfffffffeu), (ebx & 0xffu));
/* 998c21: mov ax, word ptr [edi - 2] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + 0xfffffffeu))) & 0xffffu);
/* 998c25: sar ax, 4 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint32_t c = 4;
  uint16_t r = (uint16_t)((int32_t)(int16_t)a >> c);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 998c29: cmp ax, 0xff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 15) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 15) & 1;
  }
/* 998c2d: jle 0x998c36 */
  if ((zf || sf != of)) goto L_998c36;
L_998c2f: /* 998c2f: mov eax, 0xff */
  eax = 0xffu;
/* 998c34: jmp 0x998c3d */
  goto L_998c3d;
L_998c36: /* 998c36: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  sf = ((r) >> 15) & 1;
  of = 0;
  }
/* 998c39: jge 0x998c3d */
  if ((sf == of)) goto L_998c3d;
L_998c3b: /* 998c3b: xor eax, eax */
  eax = 0;
L_998c3d: /* 998c3d: mov bl, byte ptr [esp + 0x54] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x54u))) & 0xffu);
/* 998c41: and bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 998c43: mov byte ptr [ecx - 1], bl */
  W8((uint32_t)(ecx + 0xffffffffu), (ebx & 0xffu));
/* 998c46: mov ax, word ptr [edi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi))) & 0xffffu);
/* 998c49: sar ax, 4 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint32_t c = 4;
  uint16_t r = (uint16_t)((int32_t)(int16_t)a >> c);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 998c4d: cmp ax, 0xff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 15) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 15) & 1;
  }
/* 998c51: jle 0x998c5a */
  if ((zf || sf != of)) goto L_998c5a;
L_998c53: /* 998c53: mov eax, 0xff */
  eax = 0xffu;
/* 998c58: jmp 0x998c61 */
  goto L_998c61;
L_998c5a: /* 998c5a: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  sf = ((r) >> 15) & 1;
  of = 0;
  }
/* 998c5d: jge 0x998c61 */
  if ((sf == of)) goto L_998c61;
L_998c5f: /* 998c5f: xor eax, eax */
  eax = 0;
L_998c61: /* 998c61: mov bl, byte ptr [esp + 0x64] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x64u))) & 0xffu);
/* 998c65: and bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 998c67: mov byte ptr [ecx], bl */
  W8((uint32_t)(ecx), (ebx & 0xffu));
/* 998c69: mov ax, word ptr [edi + 2] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + 0x2u))) & 0xffffu);
/* 998c6d: sar ax, 4 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint32_t c = 4;
  uint16_t r = (uint16_t)((int32_t)(int16_t)a >> c);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 998c71: cmp ax, 0xff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 15) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 15) & 1;
  }
/* 998c75: jle 0x998c7e */
  if ((zf || sf != of)) goto L_998c7e;
L_998c77: /* 998c77: mov eax, 0xff */
  eax = 0xffu;
/* 998c7c: jmp 0x998c85 */
  goto L_998c85;
L_998c7e: /* 998c7e: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  sf = ((r) >> 15) & 1;
  of = 0;
  }
/* 998c81: jge 0x998c85 */
  if ((sf == of)) goto L_998c85;
L_998c83: /* 998c83: xor eax, eax */
  eax = 0;
L_998c85: /* 998c85: mov bl, dl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 998c87: and bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 998c89: mov byte ptr [ecx + 1], bl */
  W8((uint32_t)(ecx + 0x1u), (ebx & 0xffu));
/* 998c8c: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 998c8f: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 998c92: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 998c93: jne 0x998bf8 */
  if (!zf) goto L_998bf8;
L_998c99: /* 998c99: mov ebp, dword ptr [esp + 0x58] */
  ebp = R32((uint32_t)(esp + 0x58u));
L_998c9d: /* 998c9d: mov edi, dword ptr [esp + 0x68] */
  edi = R32((uint32_t)(esp + 0x68u));
/* 998ca1: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 998ca5: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 998ca9: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 998cad: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 998caf: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 998cb1: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 998cb2: mov dword ptr [esp + 0x68], edi */
  W32((uint32_t)(esp + 0x68u), edi);
/* 998cb6: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 998cba: jne 0x998bc0 */
  if (!zf) goto L_998bc0;
L_998cc0: /* 998cc0: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 998cc4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 998cc5: call 0x6c2a22 */
  esp -= 4; W32(esp, 0x998ccau); SPILL(); f_6c2a22(); if (g_unwind) return; RELOAD();
/* 998cca: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 998ccd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 998cce: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 998ccf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 998cd0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 998cd1: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 998cd4: ret  */
  esp += 4; SPILL(); return;
}

void f_998b1d(void) {
  LOAD_REGS();
L_998b1d: /* 998b1d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_998b20: /* 998b20: xor edx, edx */
  edx = 0;
/* 998b22: mov dx, word ptr [ecx - 4] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0xfffffffcu))) & 0xffffu);
/* 998b26: xor ebx, ebx */
  ebx = 0;
/* 998b28: mov bx, word ptr [ecx - 2] */
  ebx = (ebx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0xfffffffeu))) & 0xffffu);
/* 998b2c: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 998b2f: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 998b31: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 998b33: mov word ptr [ecx - 0xc], dx */
  W16((uint32_t)(ecx + 0xfffffff4u), (edx & 0xffffu));
/* 998b37: mov edx, dword ptr [esp + 0x64] */
  edx = R32((uint32_t)(esp + 0x64u));
/* 998b3b: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 998b3d: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 998b41: and edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 998b43: mov word ptr [ecx - 0xa], dx */
  W16((uint32_t)(ecx + 0xfffffff6u), (edx & 0xffffu));
/* 998b47: xor edx, edx */
  edx = 0;
/* 998b49: mov dx, word ptr [ecx - 8] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0xfffffff8u))) & 0xffffu);
/* 998b4d: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 998b4f: and ebx, dword ptr [esp + 0x1c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x1cu)));
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 998b53: xor edx, edx */
  edx = 0;
/* 998b55: mov dx, word ptr [ecx - 6] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0xfffffffau))) & 0xffffu);
/* 998b59: mov word ptr [ecx - 8], bx */
  W16((uint32_t)(ecx + 0xfffffff8u), (ebx & 0xffffu));
/* 998b5d: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 998b61: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 998b63: and edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 998b65: mov word ptr [ecx - 6], dx */
  W16((uint32_t)(ecx + 0xfffffffau), (edx & 0xffffu));
/* 998b69: dec dword ptr [esp + 0x68] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x68u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x68u), r);
  }
/* 998b6d: jne 0x998b20 */
  if (!zf) goto L_998b20;
L_998b6f: /* 998b6f: mov ebp, dword ptr [esp + 0x58] */
  ebp = R32((uint32_t)(esp + 0x58u));
/* 998b73: mov eax, dword ptr [esp + 0x5c] */
  eax = R32((uint32_t)(esp + 0x5cu));
/* 998b77: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* 998b7b: sar word ptr [esp + 0x14], 4 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esp + 0x14u))); uint32_t c = 4;
  uint16_t r = (uint16_t)((int32_t)(int16_t)a >> c);
  W16((uint32_t)(esp + 0x14u), r);
  }
/* 998b81: sar word ptr [esp + 0x10], 4 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esp + 0x10u))); uint32_t c = 4;
  uint16_t r = (uint16_t)((int32_t)(int16_t)a >> c);
  W16((uint32_t)(esp + 0x10u), r);
  }
/* 998b87: sar word ptr [esp + 0x6c], 4 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esp + 0x6cu))); uint32_t c = 4;
  uint16_t r = (uint16_t)((int32_t)(int16_t)a >> c);
  W16((uint32_t)(esp + 0x6cu), r);
  }
/* 998b8d: sar word ptr [esp + 0x60], 4 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esp + 0x60u))); uint32_t c = 4;
  uint16_t r = (uint16_t)((int32_t)(int16_t)a >> c);
  W16((uint32_t)(esp + 0x60u), r);
  }
/* 998b93: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 998b95: mov esi, dword ptr [esp + 0x54] */
  esi = R32((uint32_t)(esp + 0x54u));
/* 998b99: mov dword ptr [esp + 0x68], edi */
  W32((uint32_t)(esp + 0x68u), edi);
/* 998b9d: jle 0x998cc0 */
  if ((zf || sf != of)) goto L_998cc0;
L_998ba3: /* 998ba3: lea ecx, [ebp*4] */
  ecx = (uint32_t)(ebp*4);
/* 998baa: lea edx, [ebp*8] */
  edx = (uint32_t)(ebp*8);
/* 998bb1: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 998bb5: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 998bb9: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 998bbd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_998bc0: /* 998bc0: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 998bc2: jle 0x998c9d */
  if ((zf || sf != of)) goto L_998c9d;
L_998bc8: /* 998bc8: mov al, byte ptr [esp + 0x10] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x10u))) & 0xffu);
/* 998bcc: mov bl, byte ptr [esp + 0x14] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x14u))) & 0xffu);
/* 998bd0: mov dl, byte ptr [esp + 0x60] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x60u))) & 0xffu);
/* 998bd4: mov ebp, dword ptr [esp + 0x58] */
  ebp = R32((uint32_t)(esp + 0x58u));
/* 998bd8: not al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(~(eax & 0xffu)) & 0xffu);
/* 998bda: mov byte ptr [esp + 0x54], al */
  W8((uint32_t)(esp + 0x54u), (eax & 0xffu));
/* 998bde: mov al, byte ptr [esp + 0x6c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x6cu))) & 0xffu);
/* 998be2: not bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(~(ebx & 0xffu)) & 0xffu);
/* 998be4: not al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(~(eax & 0xffu)) & 0xffu);
/* 998be6: mov byte ptr [esp + 0x5c], bl */
  W8((uint32_t)(esp + 0x5cu), (ebx & 0xffu));
/* 998bea: mov byte ptr [esp + 0x64], al */
  W8((uint32_t)(esp + 0x64u), (eax & 0xffu));
/* 998bee: not dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)(~(edx & 0xffu)) & 0xffu);
/* 998bf0: lea ecx, [esi + 2] */
  ecx = (uint32_t)(esi + 0x2u);
/* 998bf3: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 998bf6: jmp 0x998c00 */
  goto L_998c00;
L_998bf8: /* 998bf8: mov bl, byte ptr [esp + 0x5c] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x5cu))) & 0xffu);
/* 998bfc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_998c00: /* 998c00: mov ax, word ptr [edi - 4] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + 0xfffffffcu))) & 0xffffu);
/* 998c04: sar ax, 4 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint32_t c = 4;
  uint16_t r = (uint16_t)((int32_t)(int16_t)a >> c);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 998c08: cmp ax, 0xff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 15) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 15) & 1;
  }
/* 998c0c: jle 0x998c15 */
  if ((zf || sf != of)) goto L_998c15;
L_998c0e: /* 998c0e: mov eax, 0xff */
  eax = 0xffu;
/* 998c13: jmp 0x998c1c */
  goto L_998c1c;
L_998c15: /* 998c15: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  sf = ((r) >> 15) & 1;
  of = 0;
  }
/* 998c18: jge 0x998c1c */
  if ((sf == of)) goto L_998c1c;
L_998c1a: /* 998c1a: xor eax, eax */
  eax = 0;
L_998c1c: /* 998c1c: and bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 998c1e: mov byte ptr [ecx - 2], bl */
  W8((uint32_t)(ecx + 0xfffffffeu), (ebx & 0xffu));
/* 998c21: mov ax, word ptr [edi - 2] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + 0xfffffffeu))) & 0xffffu);
/* 998c25: sar ax, 4 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint32_t c = 4;
  uint16_t r = (uint16_t)((int32_t)(int16_t)a >> c);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 998c29: cmp ax, 0xff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 15) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 15) & 1;
  }
/* 998c2d: jle 0x998c36 */
  if ((zf || sf != of)) goto L_998c36;
L_998c2f: /* 998c2f: mov eax, 0xff */
  eax = 0xffu;
/* 998c34: jmp 0x998c3d */
  goto L_998c3d;
L_998c36: /* 998c36: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  sf = ((r) >> 15) & 1;
  of = 0;
  }
/* 998c39: jge 0x998c3d */
  if ((sf == of)) goto L_998c3d;
L_998c3b: /* 998c3b: xor eax, eax */
  eax = 0;
L_998c3d: /* 998c3d: mov bl, byte ptr [esp + 0x54] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x54u))) & 0xffu);
/* 998c41: and bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 998c43: mov byte ptr [ecx - 1], bl */
  W8((uint32_t)(ecx + 0xffffffffu), (ebx & 0xffu));
/* 998c46: mov ax, word ptr [edi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi))) & 0xffffu);
/* 998c49: sar ax, 4 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint32_t c = 4;
  uint16_t r = (uint16_t)((int32_t)(int16_t)a >> c);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 998c4d: cmp ax, 0xff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 15) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 15) & 1;
  }
/* 998c51: jle 0x998c5a */
  if ((zf || sf != of)) goto L_998c5a;
L_998c53: /* 998c53: mov eax, 0xff */
  eax = 0xffu;
/* 998c58: jmp 0x998c61 */
  goto L_998c61;
L_998c5a: /* 998c5a: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  sf = ((r) >> 15) & 1;
  of = 0;
  }
/* 998c5d: jge 0x998c61 */
  if ((sf == of)) goto L_998c61;
L_998c5f: /* 998c5f: xor eax, eax */
  eax = 0;
L_998c61: /* 998c61: mov bl, byte ptr [esp + 0x64] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x64u))) & 0xffu);
/* 998c65: and bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 998c67: mov byte ptr [ecx], bl */
  W8((uint32_t)(ecx), (ebx & 0xffu));
/* 998c69: mov ax, word ptr [edi + 2] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + 0x2u))) & 0xffffu);
/* 998c6d: sar ax, 4 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint32_t c = 4;
  uint16_t r = (uint16_t)((int32_t)(int16_t)a >> c);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 998c71: cmp ax, 0xff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 15) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 15) & 1;
  }
/* 998c75: jle 0x998c7e */
  if ((zf || sf != of)) goto L_998c7e;
L_998c77: /* 998c77: mov eax, 0xff */
  eax = 0xffu;
/* 998c7c: jmp 0x998c85 */
  goto L_998c85;
L_998c7e: /* 998c7e: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  sf = ((r) >> 15) & 1;
  of = 0;
  }
/* 998c81: jge 0x998c85 */
  if ((sf == of)) goto L_998c85;
L_998c83: /* 998c83: xor eax, eax */
  eax = 0;
L_998c85: /* 998c85: mov bl, dl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 998c87: and bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 998c89: mov byte ptr [ecx + 1], bl */
  W8((uint32_t)(ecx + 0x1u), (ebx & 0xffu));
/* 998c8c: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 998c8f: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 998c92: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 998c93: jne 0x998bf8 */
  if (!zf) goto L_998bf8;
L_998c99: /* 998c99: mov ebp, dword ptr [esp + 0x58] */
  ebp = R32((uint32_t)(esp + 0x58u));
L_998c9d: /* 998c9d: mov edi, dword ptr [esp + 0x68] */
  edi = R32((uint32_t)(esp + 0x68u));
/* 998ca1: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 998ca5: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 998ca9: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 998cad: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 998caf: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 998cb1: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 998cb2: mov dword ptr [esp + 0x68], edi */
  W32((uint32_t)(esp + 0x68u), edi);
/* 998cb6: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 998cba: jne 0x998bc0 */
  if (!zf) goto L_998bc0;
L_998cc0: /* 998cc0: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 998cc4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 998cc5: call 0x6c2a22 */
  esp -= 4; W32(esp, 0x998ccau); SPILL(); f_6c2a22(); if (g_unwind) return; RELOAD();
/* 998cca: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 998ccd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 998cce: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 998ccf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 998cd0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 998cd1: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 998cd4: ret  */
  esp += 4; SPILL(); return;
}

void f_998ce0(void) {
  LOAD_REGS();
L_998ce0: /* 998ce0: sub esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 998ce3: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 998ce7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 998ce8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 998ce9: mov ebp, dword ptr [esp + 0x54] */
  ebp = R32((uint32_t)(esp + 0x54u));
/* 998ced: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 998cee: mov esi, dword ptr [esp + 0x54] */
  esi = R32((uint32_t)(esp + 0x54u));
/* 998cf2: mov ecx, 0xc */
  ecx = 0xcu;
/* 998cf7: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* 998cf9: mov ebx, 1 */
  ebx = 0x1u;
/* 998cfe: shl ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
  }
/* 998d00: mov ecx, 0xc */
  ecx = 0xcu;
/* 998d05: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* 998d07: mov esi, 1 */
  esi = 0x1u;
/* 998d0c: shl esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
  }
/* 998d0e: mov ecx, 0xc */
  ecx = 0xcu;
/* 998d13: sub ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* 998d15: mov ebp, dword ptr [esp + 0x4c] */
  ebp = R32((uint32_t)(esp + 0x4cu));
/* 998d19: mov eax, 1 */
  eax = 0x1u;
/* 998d1e: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 998d20: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 998d21: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 998d22: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 998d23: mov edi, dword ptr [esp + 0x4c] */
  edi = R32((uint32_t)(esp + 0x4cu));
/* 998d27: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 998d28: mov dword ptr [esp + 0x5c], eax */
  W32((uint32_t)(esp + 0x5cu), eax);
/* 998d2c: mov eax, edi */
  eax = edi;
/* 998d2e: imul eax, ebp */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ebp);
  eax = (uint32_t)r;
  }
/* 998d31: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 998d34: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 998d36: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 998d37: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 998d3b: mov dword ptr [esp + 0x5c], esi */
  W32((uint32_t)(esp + 0x5cu), esi);
/* 998d3f: call 0x6c8b11 */
  esp -= 4; W32(esp, 0x998d44u); SPILL(); f_6c8b11(); if (g_unwind) return; RELOAD();
/* 998d44: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 998d48: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 998d4b: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 998d4d: mov ecx, eax */
  ecx = eax;
/* 998d4f: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 998d53: mov dword ptr [esp + 0x54], ecx */
  W32((uint32_t)(esp + 0x54u), ecx);
/* 998d57: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 998d5b: jle 0x998dee */
  if ((zf || sf != of)) goto L_998dee;
L_998d61: /* 998d61: lea eax, [edi + edi*2] */
  eax = (uint32_t)(edi + edi*2);
/* 998d64: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 998d68: lea eax, [edi + edi*2] */
  eax = (uint32_t)(edi + edi*2);
/* 998d6b: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 998d6d: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 998d71: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
L_998d75: /* 998d75: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 998d77: jle 0x998dcb */
  if ((zf || sf != of)) goto L_998dcb;
L_998d79: /* 998d79: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 998d7d: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 998d80: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 998d83: jmp 0x998d90 */
  goto L_998d90;
L_998d90: /* 998d90: movzx dx, byte ptr [eax - 1] */
  edx = (edx & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(eax + 0xffffffffu)))) & 0xffffu);
/* 998d95: movzx si, byte ptr [eax] */
  esi = (esi & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(eax)))) & 0xffffu);
/* 998d99: movzx bp, byte ptr [eax - 2] */
  ebp = (ebp & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(eax + 0xfffffffeu)))) & 0xffffu);
/* 998d9e: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 998da1: mov word ptr [ecx - 2], dx */
  W16((uint32_t)(ecx + 0xfffffffeu), (edx & 0xffffu));
/* 998da5: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 998da8: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 998dab: mov word ptr [ecx], si */
  W16((uint32_t)(ecx), (esi & 0xffffu));
/* 998dae: add ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 998db1: shl ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebp = r;
  }
/* 998db4: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 998db5: mov word ptr [ecx - 0xa], bp */
  W16((uint32_t)(ecx + 0xfffffff6u), (ebp & 0xffffu));
/* 998db9: jne 0x998d90 */
  if (!zf) goto L_998d90;
L_998dbb: /* 998dbb: mov esi, dword ptr [esp + 0x58] */
  esi = R32((uint32_t)(esp + 0x58u));
/* 998dbf: mov ebp, dword ptr [esp + 0x50] */
  ebp = R32((uint32_t)(esp + 0x50u));
/* 998dc3: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 998dc7: mov edi, dword ptr [esp + 0x4c] */
  edi = R32((uint32_t)(esp + 0x4cu));
L_998dcb: /* 998dcb: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 998dcf: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 998dd3: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 998dd5: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 998dd9: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 998ddd: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 998de1: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 998de3: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 998de4: mov dword ptr [esp + 0x54], ecx */
  W32((uint32_t)(esp + 0x54u), ecx);
/* 998de8: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 998dec: jne 0x998d75 */
  if (!zf) goto L_998d75;
L_998dee: /* 998dee: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 998df2: lea ecx, [ebp - 1] */
  ecx = (uint32_t)(ebp + 0xffffffffu);
/* 998df5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 998df7: mov dword ptr [esp + 0x54], edi */
  W32((uint32_t)(esp + 0x54u), edi);
/* 998dfb: jle 0x999005 */
  if ((zf || sf != of)) goto L_999005;
L_998e01: /* 998e01: movsx eax, word ptr [esp + 0x14] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(esp + 0x14u)));
/* 998e06: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 998e07: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 998e09: mov ebp, eax */
  ebp = eax;
/* 998e0b: movsx eax, word ptr [esp + 0x58] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(esp + 0x58u)));
/* 998e10: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 998e11: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 998e13: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 998e15: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 998e19: movsx eax, word ptr [esp + 0x5c] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(esp + 0x5cu)));
/* 998e1e: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 998e1f: not esi */
  esi = ~esi;
/* 998e21: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 998e23: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 998e25: mov dword ptr [esp + 0x34], esi */
  W32((uint32_t)(esp + 0x34u), esi);
/* 998e29: mov esi, dword ptr [esp + 0x4c] */
  esi = R32((uint32_t)(esp + 0x4cu));
/* 998e2d: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 998e31: mov eax, dword ptr [esp + 0x5c] */
  eax = R32((uint32_t)(esp + 0x5cu));
/* 998e35: sar ebp, 1 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebp = r;
  }
/* 998e37: lea esi, [esi + esi*2] */
  esi = (uint32_t)(esi + esi*2);
/* 998e3a: not ebx */
  ebx = ~ebx;
/* 998e3c: not eax */
  eax = ~eax;
/* 998e3e: shl esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 998e40: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* 998e44: mov dword ptr [esp + 0x30], ebx */
  W32((uint32_t)(esp + 0x30u), ebx);
/* 998e48: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 998e4c: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
/* 998e50: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
L_998e54: /* 998e54: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 998e58: xor eax, eax */
  eax = 0;
/* 998e5a: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 998e5b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 998e5d: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 998e61: jle 0x998faa */
  if ((zf || sf != of)) goto L_998faa;
L_998e67: /* 998e67: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 998e6a: lea esi, [esi + edi + 4] */
  esi = (uint32_t)(esi + edi + 0x4u);
/* 998e6e: mov edi, edi */
  edi = edi;
L_998e70: /* 998e70: xor eax, eax */
  eax = 0;
/* 998e72: mov ax, word ptr [ecx - 4] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0xfffffffcu))) & 0xffffu);
/* 998e76: mov di, word ptr [ecx] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 998e79: xor edx, edx */
  edx = 0;
/* 998e7b: mov dx, word ptr [ecx - 2] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0xfffffffeu))) & 0xffffu);
/* 998e7f: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 998e81: and ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 998e83: mov ebx, eax */
  ebx = eax;
/* 998e85: sub ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 998e87: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* 998e8b: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 998e8f: lea ebp, [ebx + edx] */
  ebp = (uint32_t)(ebx + edx);
/* 998e92: and ebp, dword ptr [esp + 0x34] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x34u)));
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 998e96: mov ebx, edx */
  ebx = edx;
/* 998e98: sub ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 998e9a: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
/* 998e9e: mov ebx, dword ptr [esp + 0x38] */
  ebx = R32((uint32_t)(esp + 0x38u));
/* 998ea2: lea ebp, [ebx + edi] */
  ebp = (uint32_t)(ebx + edi);
/* 998ea5: and ebp, dword ptr [esp + 0x20] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x20u)));
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 998ea9: mov ebx, edi */
  ebx = edi;
/* 998eab: sub ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 998ead: mov ebp, dword ptr [esp + 0x40] */
  ebp = R32((uint32_t)(esp + 0x40u));
/* 998eb1: sub eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 998eb3: mov word ptr [ecx - 4], ax */
  W16((uint32_t)(ecx + 0xfffffffcu), (eax & 0xffffu));
/* 998eb7: sub edx, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 998ebb: mov word ptr [ecx - 2], dx */
  W16((uint32_t)(ecx + 0xfffffffeu), (edx & 0xffffu));
/* 998ebf: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 998ec1: mov word ptr [ecx], di */
  W16((uint32_t)(ecx), (edi & 0xffffu));
/* 998ec4: movsx edi, bp */
  edi = (uint32_t)(int32_t)(int16_t)((ebp & 0xffffu));
/* 998ec7: movsx ebp, word ptr [esp + 0x28] */
  ebp = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(esp + 0x28u)));
/* 998ecc: mov eax, edi */
  eax = edi;
/* 998ece: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 998ecf: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 998ed1: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 998ed3: add word ptr [ecx + 2], ax */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx + 0x2u))); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a + b);
  W16((uint32_t)(ecx + 0x2u), r);
  }
/* 998ed7: mov eax, ebp */
  eax = ebp;
/* 998ed9: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 998eda: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 998edc: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 998ede: add word ptr [ecx + 4], ax */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx + 0x4u))); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a + b);
  W16((uint32_t)(ecx + 0x4u), r);
  }
/* 998ee2: movsx ebx, bx */
  ebx = (uint32_t)(int32_t)(int16_t)((ebx & 0xffffu));
/* 998ee5: mov eax, ebx */
  eax = ebx;
/* 998ee7: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 998ee8: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 998eea: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 998eec: add word ptr [ecx + 6], ax */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx + 0x6u))); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a + b);
  W16((uint32_t)(ecx + 0x6u), r);
  }
/* 998ef0: mov eax, edi */
  eax = edi;
/* 998ef2: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 998ef3: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 998ef6: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 998ef8: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 998efb: add word ptr [esi - 4], ax */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0xfffffffcu))); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a + b);
  W16((uint32_t)(esi + 0xfffffffcu), r);
  }
/* 998eff: mov eax, ebp */
  eax = ebp;
/* 998f01: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 998f02: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 998f05: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 998f07: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 998f0a: add word ptr [esi - 2], ax */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0xfffffffeu))); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a + b);
  W16((uint32_t)(esi + 0xfffffffeu), r);
  }
/* 998f0e: mov eax, ebx */
  eax = ebx;
/* 998f10: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 998f11: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 998f14: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 998f16: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 998f19: add word ptr [esi], ax */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a + b);
  W16((uint32_t)(esi), r);
  }
/* 998f1c: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 998f20: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 998f22: je 0x998f7c */
  if (zf) goto L_998f7c;
L_998f24: /* 998f24: mov eax, edi */
  eax = edi;
/* 998f26: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 998f27: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 998f2a: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 998f2c: mov edi, eax */
  edi = eax;
/* 998f2e: mov eax, ebp */
  eax = ebp;
/* 998f30: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 998f31: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 998f34: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 998f36: mov ebp, eax */
  ebp = eax;
/* 998f38: mov eax, ebx */
  eax = ebx;
/* 998f3a: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 998f3b: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 998f3e: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 998f40: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 998f44: sar edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edi = r;
  }
/* 998f47: add word ptr [esi - 0xa], di */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0xfffffff6u))); uint16_t b = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a + b);
  W16((uint32_t)(esi + 0xfffffff6u), r);
  }
/* 998f4b: sar ebp, 3 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebp = r;
  }
/* 998f4e: add word ptr [esi - 8], bp */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0xfffffff8u))); uint16_t b = (uint16_t)((ebp & 0xffffu));
  uint16_t r = (uint16_t)(a + b);
  W16((uint32_t)(esi + 0xfffffff8u), r);
  }
/* 998f52: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 998f55: add word ptr [esi - 6], ax */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0xfffffffau))); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a + b);
  W16((uint32_t)(esi + 0xfffffffau), r);
  }
/* 998f59: cmp edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 998f5c: jle 0x998f7c */
  if ((zf || sf != of)) goto L_998f7c;
L_998f5e: /* 998f5e: mov ebx, dword ptr [esp + 0x4c] */
  ebx = R32((uint32_t)(esp + 0x4cu));
/* 998f62: add word ptr [esi - 0x14], bp */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0xffffffecu))); uint16_t b = (uint16_t)((ebp & 0xffffu));
  uint16_t r = (uint16_t)(a + b);
  W16((uint32_t)(esi + 0xffffffecu), r);
  }
/* 998f66: lea edx, [edx + ebx - 3] */
  edx = (uint32_t)(edx + ebx + 0xfffffffdu);
/* 998f6a: mov ebx, dword ptr [esp + 0x54] */
  ebx = R32((uint32_t)(esp + 0x54u));
/* 998f6e: lea edx, [edx + edx*2] */
  edx = (uint32_t)(edx + edx*2);
/* 998f71: add word ptr [ebx + edx*2], di */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebx + edx*2))); uint16_t b = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a + b);
  W16((uint32_t)(ebx + edx*2), r);
  }
/* 998f75: add word ptr [esi - 0x12], ax */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0xffffffeeu))); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a + b);
  W16((uint32_t)(esi + 0xffffffeeu), r);
  }
/* 998f79: lea edx, [ebx + edx*2] */
  edx = (uint32_t)(ebx + edx*2);
L_998f7c: /* 998f7c: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 998f80: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 998f84: mov ebx, dword ptr [esp + 0x30] */
  ebx = R32((uint32_t)(esp + 0x30u));
/* 998f88: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 998f8c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 998f8d: add ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 998f90: add esi, 6 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 998f93: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 998f94: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 998f96: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 998f9a: jl 0x998e70 */
  if ((sf != of)) goto L_998e70;
L_998fa0: /* 998fa0: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 998fa4: mov edi, dword ptr [esp + 0x54] */
  edi = R32((uint32_t)(esp + 0x54u));
/* 998fa8: mov eax, edx */
  eax = edx;
L_998faa: /* 998faa: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 998fad: lea ecx, [edi + eax*2] */
  ecx = (uint32_t)(edi + eax*2);
/* 998fb0: xor eax, eax */
  eax = 0;
/* 998fb2: mov ax, word ptr [ecx] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 998fb5: xor edx, edx */
  edx = 0;
/* 998fb7: mov dx, word ptr [ecx + 2] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x2u))) & 0xffffu);
/* 998fbb: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 998fbd: mov dword ptr [esp + 0x54], edi */
  W32((uint32_t)(esp + 0x54u), edi);
/* 998fc1: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 998fc3: and eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 998fc5: mov word ptr [ecx], ax */
  W16((uint32_t)(ecx), (eax & 0xffffu));
/* 998fc8: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 998fcc: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 998fce: and eax, dword ptr [esp + 0x34] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x34u)));
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 998fd2: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 998fd6: mov word ptr [ecx + 2], ax */
  W16((uint32_t)(ecx + 0x2u), (eax & 0xffffu));
/* 998fda: xor eax, eax */
  eax = 0;
/* 998fdc: mov ax, word ptr [ecx + 4] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x4u))) & 0xffffu);
/* 998fe0: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 998fe2: and edx, dword ptr [esp + 0x20] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x20u)));
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 998fe6: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 998fea: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 998feb: mov word ptr [ecx + 4], dx */
  W16((uint32_t)(ecx + 0x4u), (edx & 0xffffu));
/* 998fef: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 998ff3: jne 0x998e54 */
  if (!zf) goto L_998e54;
L_998ff9: /* 998ff9: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 998ffd: mov esi, dword ptr [esp + 0x58] */
  esi = R32((uint32_t)(esp + 0x58u));
/* 999001: mov ebp, dword ptr [esp + 0x50] */
  ebp = R32((uint32_t)(esp + 0x50u));
L_999005: /* 999005: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 999009: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 99900b: jle 0x999093 */
  if ((zf || sf != of)) goto L_999093;
L_999011: /* 999011: movsx eax, word ptr [esp + 0x14] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(esp + 0x14u)));
/* 999016: mov ecx, dword ptr [esp + 0x5c] */
  ecx = R32((uint32_t)(esp + 0x5cu));
/* 99901a: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 99901b: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 99901d: mov ebp, eax */
  ebp = eax;
/* 99901f: movsx eax, word ptr [esp + 0x58] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(esp + 0x58u)));
/* 999024: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 999025: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 999027: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 999029: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 99902d: movsx eax, word ptr [esp + 0x5c] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(esp + 0x5cu)));
/* 999032: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 999033: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 999035: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 999039: not ecx */
  ecx = ~ecx;
/* 99903b: sar ebp, 1 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebp = r;
  }
/* 99903d: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 999041: not ebx */
  ebx = ~ebx;
/* 999043: not esi */
  esi = ~esi;
/* 999045: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 999047: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 99904a: mov dword ptr [esp + 0x54], edx */
  W32((uint32_t)(esp + 0x54u), edx);
/* 99904e: mov edi, edi */
  edi = edi;
L_999050: /* 999050: xor edx, edx */
  edx = 0;
/* 999052: mov dx, word ptr [ecx - 4] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0xfffffffcu))) & 0xffffu);
/* 999056: xor edi, edi */
  edi = 0;
/* 999058: mov di, word ptr [ecx - 2] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0xfffffffeu))) & 0xffffu);
/* 99905c: add ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 99905f: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 999061: and edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 999063: mov word ptr [ecx - 0xa], dx */
  W16((uint32_t)(ecx + 0xfffffff6u), (edx & 0xffffu));
/* 999067: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 99906b: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 99906d: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 999071: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 999073: mov word ptr [ecx - 8], dx */
  W16((uint32_t)(ecx + 0xfffffff8u), (edx & 0xffffu));
/* 999077: xor edx, edx */
  edx = 0;
/* 999079: mov dx, word ptr [ecx - 6] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0xfffffffau))) & 0xffffu);
/* 99907d: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 99907f: and edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 999081: mov word ptr [ecx - 6], dx */
  W16((uint32_t)(ecx + 0xfffffffau), (edx & 0xffffu));
/* 999085: dec dword ptr [esp + 0x54] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x54u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x54u), r);
  }
/* 999089: jne 0x999050 */
  if (!zf) goto L_999050;
L_99908b: /* 99908b: mov ebp, dword ptr [esp + 0x50] */
  ebp = R32((uint32_t)(esp + 0x50u));
/* 99908f: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
L_999093: /* 999093: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 999097: sar word ptr [esp + 0x14], 4 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esp + 0x14u))); uint32_t c = 4;
  uint16_t r = (uint16_t)((int32_t)(int16_t)a >> c);
  W16((uint32_t)(esp + 0x14u), r);
  }
/* 99909d: sar word ptr [esp + 0x58], 4 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esp + 0x58u))); uint32_t c = 4;
  uint16_t r = (uint16_t)((int32_t)(int16_t)a >> c);
  W16((uint32_t)(esp + 0x58u), r);
  }
/* 9990a3: sar word ptr [esp + 0x5c], 4 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esp + 0x5cu))); uint32_t c = 4;
  uint16_t r = (uint16_t)((int32_t)(int16_t)a >> c);
  W16((uint32_t)(esp + 0x5cu), r);
  }
/* 9990a9: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9990ab: mov esi, dword ptr [esp + 0x48] */
  esi = R32((uint32_t)(esp + 0x48u));
/* 9990af: mov dword ptr [esp + 0x54], edi */
  W32((uint32_t)(esp + 0x54u), edi);
/* 9990b3: jle 0x999197 */
  if ((zf || sf != of)) goto L_999197;
L_9990b9: /* 9990b9: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 9990bc: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 9990c0: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 9990c3: shl ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 9990c5: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 9990c9: mov dword ptr [esp + 0x3c], ebp */
  W32((uint32_t)(esp + 0x3cu), ebp);
/* 9990cd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_9990d0: /* 9990d0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9990d2: jle 0x999178 */
  if ((zf || sf != of)) goto L_999178;
L_9990d8: /* 9990d8: mov cl, byte ptr [esp + 0x58] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x58u))) & 0xffu);
/* 9990dc: mov dl, byte ptr [esp + 0x14] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x14u))) & 0xffu);
/* 9990e0: mov bl, byte ptr [esp + 0x5c] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x5cu))) & 0xffu);
/* 9990e4: not cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(~(ecx & 0xffu)) & 0xffu);
/* 9990e6: not dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)(~(edx & 0xffu)) & 0xffu);
/* 9990e8: mov byte ptr [esp + 0x48], cl */
  W8((uint32_t)(esp + 0x48u), (ecx & 0xffu));
/* 9990ec: mov byte ptr [esp + 0x50], dl */
  W8((uint32_t)(esp + 0x50u), (edx & 0xffu));
/* 9990f0: not bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(~(ebx & 0xffu)) & 0xffu);
/* 9990f2: lea ecx, [esi + 2] */
  ecx = (uint32_t)(esi + 0x2u);
/* 9990f5: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 9990f8: mov ebp, eax */
  ebp = eax;
/* 9990fa: jmp 0x999100 */
  goto L_999100;
L_9990fc: /* 9990fc: mov dl, byte ptr [esp + 0x50] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x50u))) & 0xffu);
L_999100: /* 999100: mov ax, word ptr [edi - 4] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + 0xfffffffcu))) & 0xffffu);
/* 999104: sar ax, 4 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint32_t c = 4;
  uint16_t r = (uint16_t)((int32_t)(int16_t)a >> c);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 999108: cmp ax, 0xff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 15) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 15) & 1;
  }
/* 99910c: jle 0x999115 */
  if ((zf || sf != of)) goto L_999115;
L_99910e: /* 99910e: mov eax, 0xff */
  eax = 0xffu;
/* 999113: jmp 0x99911c */
  goto L_99911c;
L_999115: /* 999115: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  sf = ((r) >> 15) & 1;
  of = 0;
  }
/* 999118: jge 0x99911c */
  if ((sf == of)) goto L_99911c;
L_99911a: /* 99911a: xor eax, eax */
  eax = 0;
L_99911c: /* 99911c: and dl, al */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 99911e: mov byte ptr [ecx - 2], dl */
  W8((uint32_t)(ecx + 0xfffffffeu), (edx & 0xffu));
/* 999121: mov ax, word ptr [edi - 2] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + 0xfffffffeu))) & 0xffffu);
/* 999125: sar ax, 4 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint32_t c = 4;
  uint16_t r = (uint16_t)((int32_t)(int16_t)a >> c);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 999129: cmp ax, 0xff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 15) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 15) & 1;
  }
/* 99912d: jle 0x999136 */
  if ((zf || sf != of)) goto L_999136;
L_99912f: /* 99912f: mov eax, 0xff */
  eax = 0xffu;
/* 999134: jmp 0x99913d */
  goto L_99913d;
L_999136: /* 999136: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  sf = ((r) >> 15) & 1;
  of = 0;
  }
/* 999139: jge 0x99913d */
  if ((sf == of)) goto L_99913d;
L_99913b: /* 99913b: xor eax, eax */
  eax = 0;
L_99913d: /* 99913d: mov dl, byte ptr [esp + 0x48] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x48u))) & 0xffu);
/* 999141: and dl, al */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 999143: mov byte ptr [ecx - 1], dl */
  W8((uint32_t)(ecx + 0xffffffffu), (edx & 0xffu));
/* 999146: mov ax, word ptr [edi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi))) & 0xffffu);
/* 999149: sar ax, 4 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint32_t c = 4;
  uint16_t r = (uint16_t)((int32_t)(int16_t)a >> c);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 99914d: cmp ax, 0xff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 15) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 15) & 1;
  }
/* 999151: jle 0x99915a */
  if ((zf || sf != of)) goto L_99915a;
L_999153: /* 999153: mov eax, 0xff */
  eax = 0xffu;
/* 999158: jmp 0x999161 */
  goto L_999161;
L_99915a: /* 99915a: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  sf = ((r) >> 15) & 1;
  of = 0;
  }
/* 99915d: jge 0x999161 */
  if ((sf == of)) goto L_999161;
L_99915f: /* 99915f: xor eax, eax */
  eax = 0;
L_999161: /* 999161: mov dl, bl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
/* 999163: and dl, al */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 999165: mov byte ptr [ecx], dl */
  W8((uint32_t)(ecx), (edx & 0xffu));
/* 999167: add edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 99916a: add ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 99916d: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 99916e: jne 0x9990fc */
  if (!zf) goto L_9990fc;
L_999170: /* 999170: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 999174: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
L_999178: /* 999178: mov edi, dword ptr [esp + 0x54] */
  edi = R32((uint32_t)(esp + 0x54u));
/* 99917c: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 999180: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 999184: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 999186: add esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 999188: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 999189: mov dword ptr [esp + 0x54], edi */
  W32((uint32_t)(esp + 0x54u), edi);
/* 99918d: mov dword ptr [esp + 0x3c], edx */
  W32((uint32_t)(esp + 0x3cu), edx);
/* 999191: jne 0x9990d0 */
  if (!zf) goto L_9990d0;
L_999197: /* 999197: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 99919b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99919c: call 0x6c2a22 */
  esp -= 4; W32(esp, 0x9991a1u); SPILL(); f_6c2a22(); if (g_unwind) return; RELOAD();
/* 9991a1: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9991a4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9991a5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9991a6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9991a7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9991a8: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9991ab: ret  */
  esp += 4; SPILL(); return;
}

void f_998d85(void) {
  LOAD_REGS();
  goto L_998d85;
L_998d75: /* 998d75: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 998d77: jle 0x998dcb */
  if ((zf || sf != of)) goto L_998dcb;
L_998d79: /* 998d79: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 998d7d: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 998d80: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 998d83: jmp 0x998d90 */
  goto L_998d90;
L_998d85: /* 998d85: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 998d8c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_998d90: /* 998d90: movzx dx, byte ptr [eax - 1] */
  edx = (edx & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(eax + 0xffffffffu)))) & 0xffffu);
/* 998d95: movzx si, byte ptr [eax] */
  esi = (esi & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(eax)))) & 0xffffu);
/* 998d99: movzx bp, byte ptr [eax - 2] */
  ebp = (ebp & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(eax + 0xfffffffeu)))) & 0xffffu);
/* 998d9e: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 998da1: mov word ptr [ecx - 2], dx */
  W16((uint32_t)(ecx + 0xfffffffeu), (edx & 0xffffu));
/* 998da5: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 998da8: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 998dab: mov word ptr [ecx], si */
  W16((uint32_t)(ecx), (esi & 0xffffu));
/* 998dae: add ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 998db1: shl ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebp = r;
  }
/* 998db4: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 998db5: mov word ptr [ecx - 0xa], bp */
  W16((uint32_t)(ecx + 0xfffffff6u), (ebp & 0xffffu));
/* 998db9: jne 0x998d90 */
  if (!zf) goto L_998d90;
L_998dbb: /* 998dbb: mov esi, dword ptr [esp + 0x58] */
  esi = R32((uint32_t)(esp + 0x58u));
/* 998dbf: mov ebp, dword ptr [esp + 0x50] */
  ebp = R32((uint32_t)(esp + 0x50u));
/* 998dc3: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 998dc7: mov edi, dword ptr [esp + 0x4c] */
  edi = R32((uint32_t)(esp + 0x4cu));
L_998dcb: /* 998dcb: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 998dcf: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 998dd3: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 998dd5: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 998dd9: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 998ddd: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 998de1: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 998de3: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 998de4: mov dword ptr [esp + 0x54], ecx */
  W32((uint32_t)(esp + 0x54u), ecx);
/* 998de8: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 998dec: jne 0x998d75 */
  if (!zf) goto L_998d75;
L_998dee: /* 998dee: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 998df2: lea ecx, [ebp - 1] */
  ecx = (uint32_t)(ebp + 0xffffffffu);
/* 998df5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 998df7: mov dword ptr [esp + 0x54], edi */
  W32((uint32_t)(esp + 0x54u), edi);
/* 998dfb: jle 0x999005 */
  if ((zf || sf != of)) goto L_999005;
L_998e01: /* 998e01: movsx eax, word ptr [esp + 0x14] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(esp + 0x14u)));
/* 998e06: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 998e07: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 998e09: mov ebp, eax */
  ebp = eax;
/* 998e0b: movsx eax, word ptr [esp + 0x58] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(esp + 0x58u)));
/* 998e10: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 998e11: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 998e13: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 998e15: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 998e19: movsx eax, word ptr [esp + 0x5c] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(esp + 0x5cu)));
/* 998e1e: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 998e1f: not esi */
  esi = ~esi;
/* 998e21: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 998e23: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 998e25: mov dword ptr [esp + 0x34], esi */
  W32((uint32_t)(esp + 0x34u), esi);
/* 998e29: mov esi, dword ptr [esp + 0x4c] */
  esi = R32((uint32_t)(esp + 0x4cu));
/* 998e2d: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 998e31: mov eax, dword ptr [esp + 0x5c] */
  eax = R32((uint32_t)(esp + 0x5cu));
/* 998e35: sar ebp, 1 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebp = r;
  }
/* 998e37: lea esi, [esi + esi*2] */
  esi = (uint32_t)(esi + esi*2);
/* 998e3a: not ebx */
  ebx = ~ebx;
/* 998e3c: not eax */
  eax = ~eax;
/* 998e3e: shl esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 998e40: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* 998e44: mov dword ptr [esp + 0x30], ebx */
  W32((uint32_t)(esp + 0x30u), ebx);
/* 998e48: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 998e4c: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
/* 998e50: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
L_998e54: /* 998e54: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 998e58: xor eax, eax */
  eax = 0;
/* 998e5a: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 998e5b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 998e5d: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 998e61: jle 0x998faa */
  if ((zf || sf != of)) goto L_998faa;
L_998e67: /* 998e67: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 998e6a: lea esi, [esi + edi + 4] */
  esi = (uint32_t)(esi + edi + 0x4u);
/* 998e6e: mov edi, edi */
  edi = edi;
L_998e70: /* 998e70: xor eax, eax */
  eax = 0;
/* 998e72: mov ax, word ptr [ecx - 4] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0xfffffffcu))) & 0xffffu);
/* 998e76: mov di, word ptr [ecx] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 998e79: xor edx, edx */
  edx = 0;
/* 998e7b: mov dx, word ptr [ecx - 2] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0xfffffffeu))) & 0xffffu);
/* 998e7f: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 998e81: and ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 998e83: mov ebx, eax */
  ebx = eax;
/* 998e85: sub ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 998e87: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* 998e8b: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 998e8f: lea ebp, [ebx + edx] */
  ebp = (uint32_t)(ebx + edx);
/* 998e92: and ebp, dword ptr [esp + 0x34] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x34u)));
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 998e96: mov ebx, edx */
  ebx = edx;
/* 998e98: sub ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 998e9a: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
/* 998e9e: mov ebx, dword ptr [esp + 0x38] */
  ebx = R32((uint32_t)(esp + 0x38u));
/* 998ea2: lea ebp, [ebx + edi] */
  ebp = (uint32_t)(ebx + edi);
/* 998ea5: and ebp, dword ptr [esp + 0x20] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x20u)));
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 998ea9: mov ebx, edi */
  ebx = edi;
/* 998eab: sub ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 998ead: mov ebp, dword ptr [esp + 0x40] */
  ebp = R32((uint32_t)(esp + 0x40u));
/* 998eb1: sub eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 998eb3: mov word ptr [ecx - 4], ax */
  W16((uint32_t)(ecx + 0xfffffffcu), (eax & 0xffffu));
/* 998eb7: sub edx, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 998ebb: mov word ptr [ecx - 2], dx */
  W16((uint32_t)(ecx + 0xfffffffeu), (edx & 0xffffu));
/* 998ebf: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 998ec1: mov word ptr [ecx], di */
  W16((uint32_t)(ecx), (edi & 0xffffu));
/* 998ec4: movsx edi, bp */
  edi = (uint32_t)(int32_t)(int16_t)((ebp & 0xffffu));
/* 998ec7: movsx ebp, word ptr [esp + 0x28] */
  ebp = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(esp + 0x28u)));
/* 998ecc: mov eax, edi */
  eax = edi;
/* 998ece: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 998ecf: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 998ed1: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 998ed3: add word ptr [ecx + 2], ax */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx + 0x2u))); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a + b);
  W16((uint32_t)(ecx + 0x2u), r);
  }
/* 998ed7: mov eax, ebp */
  eax = ebp;
/* 998ed9: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 998eda: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 998edc: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 998ede: add word ptr [ecx + 4], ax */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx + 0x4u))); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a + b);
  W16((uint32_t)(ecx + 0x4u), r);
  }
/* 998ee2: movsx ebx, bx */
  ebx = (uint32_t)(int32_t)(int16_t)((ebx & 0xffffu));
/* 998ee5: mov eax, ebx */
  eax = ebx;
/* 998ee7: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 998ee8: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 998eea: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 998eec: add word ptr [ecx + 6], ax */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx + 0x6u))); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a + b);
  W16((uint32_t)(ecx + 0x6u), r);
  }
/* 998ef0: mov eax, edi */
  eax = edi;
/* 998ef2: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 998ef3: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 998ef6: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 998ef8: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 998efb: add word ptr [esi - 4], ax */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0xfffffffcu))); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a + b);
  W16((uint32_t)(esi + 0xfffffffcu), r);
  }
/* 998eff: mov eax, ebp */
  eax = ebp;
/* 998f01: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 998f02: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 998f05: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 998f07: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 998f0a: add word ptr [esi - 2], ax */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0xfffffffeu))); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a + b);
  W16((uint32_t)(esi + 0xfffffffeu), r);
  }
/* 998f0e: mov eax, ebx */
  eax = ebx;
/* 998f10: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 998f11: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 998f14: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 998f16: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 998f19: add word ptr [esi], ax */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a + b);
  W16((uint32_t)(esi), r);
  }
/* 998f1c: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 998f20: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 998f22: je 0x998f7c */
  if (zf) goto L_998f7c;
L_998f24: /* 998f24: mov eax, edi */
  eax = edi;
/* 998f26: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 998f27: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 998f2a: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 998f2c: mov edi, eax */
  edi = eax;
/* 998f2e: mov eax, ebp */
  eax = ebp;
/* 998f30: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 998f31: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 998f34: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 998f36: mov ebp, eax */
  ebp = eax;
/* 998f38: mov eax, ebx */
  eax = ebx;
/* 998f3a: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 998f3b: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 998f3e: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 998f40: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 998f44: sar edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edi = r;
  }
/* 998f47: add word ptr [esi - 0xa], di */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0xfffffff6u))); uint16_t b = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a + b);
  W16((uint32_t)(esi + 0xfffffff6u), r);
  }
/* 998f4b: sar ebp, 3 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebp = r;
  }
/* 998f4e: add word ptr [esi - 8], bp */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0xfffffff8u))); uint16_t b = (uint16_t)((ebp & 0xffffu));
  uint16_t r = (uint16_t)(a + b);
  W16((uint32_t)(esi + 0xfffffff8u), r);
  }
/* 998f52: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 998f55: add word ptr [esi - 6], ax */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0xfffffffau))); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a + b);
  W16((uint32_t)(esi + 0xfffffffau), r);
  }
/* 998f59: cmp edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 998f5c: jle 0x998f7c */
  if ((zf || sf != of)) goto L_998f7c;
L_998f5e: /* 998f5e: mov ebx, dword ptr [esp + 0x4c] */
  ebx = R32((uint32_t)(esp + 0x4cu));
/* 998f62: add word ptr [esi - 0x14], bp */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0xffffffecu))); uint16_t b = (uint16_t)((ebp & 0xffffu));
  uint16_t r = (uint16_t)(a + b);
  W16((uint32_t)(esi + 0xffffffecu), r);
  }
/* 998f66: lea edx, [edx + ebx - 3] */
  edx = (uint32_t)(edx + ebx + 0xfffffffdu);
/* 998f6a: mov ebx, dword ptr [esp + 0x54] */
  ebx = R32((uint32_t)(esp + 0x54u));
/* 998f6e: lea edx, [edx + edx*2] */
  edx = (uint32_t)(edx + edx*2);
/* 998f71: add word ptr [ebx + edx*2], di */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebx + edx*2))); uint16_t b = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a + b);
  W16((uint32_t)(ebx + edx*2), r);
  }
/* 998f75: add word ptr [esi - 0x12], ax */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0xffffffeeu))); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a + b);
  W16((uint32_t)(esi + 0xffffffeeu), r);
  }
/* 998f79: lea edx, [ebx + edx*2] */
  edx = (uint32_t)(ebx + edx*2);
L_998f7c: /* 998f7c: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 998f80: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 998f84: mov ebx, dword ptr [esp + 0x30] */
  ebx = R32((uint32_t)(esp + 0x30u));
/* 998f88: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 998f8c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 998f8d: add ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 998f90: add esi, 6 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 998f93: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 998f94: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 998f96: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 998f9a: jl 0x998e70 */
  if ((sf != of)) goto L_998e70;
L_998fa0: /* 998fa0: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 998fa4: mov edi, dword ptr [esp + 0x54] */
  edi = R32((uint32_t)(esp + 0x54u));
/* 998fa8: mov eax, edx */
  eax = edx;
L_998faa: /* 998faa: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 998fad: lea ecx, [edi + eax*2] */
  ecx = (uint32_t)(edi + eax*2);
/* 998fb0: xor eax, eax */
  eax = 0;
/* 998fb2: mov ax, word ptr [ecx] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 998fb5: xor edx, edx */
  edx = 0;
/* 998fb7: mov dx, word ptr [ecx + 2] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x2u))) & 0xffffu);
/* 998fbb: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 998fbd: mov dword ptr [esp + 0x54], edi */
  W32((uint32_t)(esp + 0x54u), edi);
/* 998fc1: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 998fc3: and eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 998fc5: mov word ptr [ecx], ax */
  W16((uint32_t)(ecx), (eax & 0xffffu));
/* 998fc8: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 998fcc: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 998fce: and eax, dword ptr [esp + 0x34] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x34u)));
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 998fd2: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 998fd6: mov word ptr [ecx + 2], ax */
  W16((uint32_t)(ecx + 0x2u), (eax & 0xffffu));
/* 998fda: xor eax, eax */
  eax = 0;
/* 998fdc: mov ax, word ptr [ecx + 4] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x4u))) & 0xffffu);
/* 998fe0: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 998fe2: and edx, dword ptr [esp + 0x20] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x20u)));
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 998fe6: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 998fea: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 998feb: mov word ptr [ecx + 4], dx */
  W16((uint32_t)(ecx + 0x4u), (edx & 0xffffu));
/* 998fef: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 998ff3: jne 0x998e54 */
  if (!zf) goto L_998e54;
L_998ff9: /* 998ff9: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 998ffd: mov esi, dword ptr [esp + 0x58] */
  esi = R32((uint32_t)(esp + 0x58u));
/* 999001: mov ebp, dword ptr [esp + 0x50] */
  ebp = R32((uint32_t)(esp + 0x50u));
L_999005: /* 999005: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 999009: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 99900b: jle 0x999093 */
  if ((zf || sf != of)) goto L_999093;
L_999011: /* 999011: movsx eax, word ptr [esp + 0x14] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(esp + 0x14u)));
/* 999016: mov ecx, dword ptr [esp + 0x5c] */
  ecx = R32((uint32_t)(esp + 0x5cu));
/* 99901a: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 99901b: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 99901d: mov ebp, eax */
  ebp = eax;
/* 99901f: movsx eax, word ptr [esp + 0x58] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(esp + 0x58u)));
/* 999024: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 999025: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 999027: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 999029: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 99902d: movsx eax, word ptr [esp + 0x5c] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(esp + 0x5cu)));
/* 999032: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 999033: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 999035: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 999039: not ecx */
  ecx = ~ecx;
/* 99903b: sar ebp, 1 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebp = r;
  }
/* 99903d: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 999041: not ebx */
  ebx = ~ebx;
/* 999043: not esi */
  esi = ~esi;
/* 999045: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 999047: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 99904a: mov dword ptr [esp + 0x54], edx */
  W32((uint32_t)(esp + 0x54u), edx);
/* 99904e: mov edi, edi */
  edi = edi;
L_999050: /* 999050: xor edx, edx */
  edx = 0;
/* 999052: mov dx, word ptr [ecx - 4] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0xfffffffcu))) & 0xffffu);
/* 999056: xor edi, edi */
  edi = 0;
/* 999058: mov di, word ptr [ecx - 2] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0xfffffffeu))) & 0xffffu);
/* 99905c: add ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 99905f: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 999061: and edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 999063: mov word ptr [ecx - 0xa], dx */
  W16((uint32_t)(ecx + 0xfffffff6u), (edx & 0xffffu));
/* 999067: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 99906b: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 99906d: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 999071: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 999073: mov word ptr [ecx - 8], dx */
  W16((uint32_t)(ecx + 0xfffffff8u), (edx & 0xffffu));
/* 999077: xor edx, edx */
  edx = 0;
/* 999079: mov dx, word ptr [ecx - 6] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0xfffffffau))) & 0xffffu);
/* 99907d: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 99907f: and edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 999081: mov word ptr [ecx - 6], dx */
  W16((uint32_t)(ecx + 0xfffffffau), (edx & 0xffffu));
/* 999085: dec dword ptr [esp + 0x54] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x54u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x54u), r);
  }
/* 999089: jne 0x999050 */
  if (!zf) goto L_999050;
L_99908b: /* 99908b: mov ebp, dword ptr [esp + 0x50] */
  ebp = R32((uint32_t)(esp + 0x50u));
/* 99908f: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
L_999093: /* 999093: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 999097: sar word ptr [esp + 0x14], 4 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esp + 0x14u))); uint32_t c = 4;
  uint16_t r = (uint16_t)((int32_t)(int16_t)a >> c);
  W16((uint32_t)(esp + 0x14u), r);
  }
/* 99909d: sar word ptr [esp + 0x58], 4 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esp + 0x58u))); uint32_t c = 4;
  uint16_t r = (uint16_t)((int32_t)(int16_t)a >> c);
  W16((uint32_t)(esp + 0x58u), r);
  }
/* 9990a3: sar word ptr [esp + 0x5c], 4 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esp + 0x5cu))); uint32_t c = 4;
  uint16_t r = (uint16_t)((int32_t)(int16_t)a >> c);
  W16((uint32_t)(esp + 0x5cu), r);
  }
/* 9990a9: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9990ab: mov esi, dword ptr [esp + 0x48] */
  esi = R32((uint32_t)(esp + 0x48u));
/* 9990af: mov dword ptr [esp + 0x54], edi */
  W32((uint32_t)(esp + 0x54u), edi);
/* 9990b3: jle 0x999197 */
  if ((zf || sf != of)) goto L_999197;
L_9990b9: /* 9990b9: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 9990bc: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 9990c0: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 9990c3: shl ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 9990c5: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 9990c9: mov dword ptr [esp + 0x3c], ebp */
  W32((uint32_t)(esp + 0x3cu), ebp);
/* 9990cd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_9990d0: /* 9990d0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9990d2: jle 0x999178 */
  if ((zf || sf != of)) goto L_999178;
L_9990d8: /* 9990d8: mov cl, byte ptr [esp + 0x58] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x58u))) & 0xffu);
/* 9990dc: mov dl, byte ptr [esp + 0x14] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x14u))) & 0xffu);
/* 9990e0: mov bl, byte ptr [esp + 0x5c] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x5cu))) & 0xffu);
/* 9990e4: not cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(~(ecx & 0xffu)) & 0xffu);
/* 9990e6: not dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)(~(edx & 0xffu)) & 0xffu);
/* 9990e8: mov byte ptr [esp + 0x48], cl */
  W8((uint32_t)(esp + 0x48u), (ecx & 0xffu));
/* 9990ec: mov byte ptr [esp + 0x50], dl */
  W8((uint32_t)(esp + 0x50u), (edx & 0xffu));
/* 9990f0: not bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(~(ebx & 0xffu)) & 0xffu);
/* 9990f2: lea ecx, [esi + 2] */
  ecx = (uint32_t)(esi + 0x2u);
/* 9990f5: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 9990f8: mov ebp, eax */
  ebp = eax;
/* 9990fa: jmp 0x999100 */
  goto L_999100;
L_9990fc: /* 9990fc: mov dl, byte ptr [esp + 0x50] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x50u))) & 0xffu);
L_999100: /* 999100: mov ax, word ptr [edi - 4] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + 0xfffffffcu))) & 0xffffu);
/* 999104: sar ax, 4 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint32_t c = 4;
  uint16_t r = (uint16_t)((int32_t)(int16_t)a >> c);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 999108: cmp ax, 0xff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 15) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 15) & 1;
  }
/* 99910c: jle 0x999115 */
  if ((zf || sf != of)) goto L_999115;
L_99910e: /* 99910e: mov eax, 0xff */
  eax = 0xffu;
/* 999113: jmp 0x99911c */
  goto L_99911c;
L_999115: /* 999115: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  sf = ((r) >> 15) & 1;
  of = 0;
  }
/* 999118: jge 0x99911c */
  if ((sf == of)) goto L_99911c;
L_99911a: /* 99911a: xor eax, eax */
  eax = 0;
L_99911c: /* 99911c: and dl, al */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 99911e: mov byte ptr [ecx - 2], dl */
  W8((uint32_t)(ecx + 0xfffffffeu), (edx & 0xffu));
/* 999121: mov ax, word ptr [edi - 2] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + 0xfffffffeu))) & 0xffffu);
/* 999125: sar ax, 4 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint32_t c = 4;
  uint16_t r = (uint16_t)((int32_t)(int16_t)a >> c);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 999129: cmp ax, 0xff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 15) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 15) & 1;
  }
/* 99912d: jle 0x999136 */
  if ((zf || sf != of)) goto L_999136;
L_99912f: /* 99912f: mov eax, 0xff */
  eax = 0xffu;
/* 999134: jmp 0x99913d */
  goto L_99913d;
L_999136: /* 999136: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  sf = ((r) >> 15) & 1;
  of = 0;
  }
/* 999139: jge 0x99913d */
  if ((sf == of)) goto L_99913d;
L_99913b: /* 99913b: xor eax, eax */
  eax = 0;
L_99913d: /* 99913d: mov dl, byte ptr [esp + 0x48] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x48u))) & 0xffu);
/* 999141: and dl, al */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 999143: mov byte ptr [ecx - 1], dl */
  W8((uint32_t)(ecx + 0xffffffffu), (edx & 0xffu));
/* 999146: mov ax, word ptr [edi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi))) & 0xffffu);
/* 999149: sar ax, 4 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint32_t c = 4;
  uint16_t r = (uint16_t)((int32_t)(int16_t)a >> c);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 99914d: cmp ax, 0xff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 15) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 15) & 1;
  }
/* 999151: jle 0x99915a */
  if ((zf || sf != of)) goto L_99915a;
L_999153: /* 999153: mov eax, 0xff */
  eax = 0xffu;
/* 999158: jmp 0x999161 */
  goto L_999161;
L_99915a: /* 99915a: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  sf = ((r) >> 15) & 1;
  of = 0;
  }
/* 99915d: jge 0x999161 */
  if ((sf == of)) goto L_999161;
L_99915f: /* 99915f: xor eax, eax */
  eax = 0;
L_999161: /* 999161: mov dl, bl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
/* 999163: and dl, al */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 999165: mov byte ptr [ecx], dl */
  W8((uint32_t)(ecx), (edx & 0xffu));
/* 999167: add edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 99916a: add ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 99916d: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 99916e: jne 0x9990fc */
  if (!zf) goto L_9990fc;
L_999170: /* 999170: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 999174: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
L_999178: /* 999178: mov edi, dword ptr [esp + 0x54] */
  edi = R32((uint32_t)(esp + 0x54u));
/* 99917c: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 999180: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 999184: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 999186: add esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 999188: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 999189: mov dword ptr [esp + 0x54], edi */
  W32((uint32_t)(esp + 0x54u), edi);
/* 99918d: mov dword ptr [esp + 0x3c], edx */
  W32((uint32_t)(esp + 0x3cu), edx);
/* 999191: jne 0x9990d0 */
  if (!zf) goto L_9990d0;
L_999197: /* 999197: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 99919b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99919c: call 0x6c2a22 */
  esp -= 4; W32(esp, 0x9991a1u); SPILL(); f_6c2a22(); if (g_unwind) return; RELOAD();
/* 9991a1: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9991a4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9991a5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9991a6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9991a7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9991a8: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9991ab: ret  */
  esp += 4; SPILL(); return;
}

void f_9991b0(void) {
  LOAD_REGS();
L_9991b0: /* 9991b0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9991b2: jne 0x9991d2 */
  if (!zf) goto L_9991d2;
L_9991b4: /* 9991b4: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 9991b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9991b9: push 0xa21b58 */
  { uint32_t v = 0xa21b58u; esp -= 4; W32(esp, v); }
/* 9991be: push 0xcfb0d0 */
  { uint32_t v = 0xcfb0d0u; esp -= 4; W32(esp, v); }
/* 9991c3: call 0x99cf48 */
  esp -= 4; W32(esp, 0x9991c8u); SPILL(); f_99cf48(); if (g_unwind) return; RELOAD();
/* 9991c8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9991cb: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9991cd: call 0x99ced6 */
  esp -= 4; W32(esp, 0x9991d2u); SPILL(); f_99ced6(); if (g_unwind) return; RELOAD();
L_9991d2: /* 9991d2: ret  */
  esp += 4; SPILL(); return;
}

void f_9991e0(void) {
  LOAD_REGS();
L_9991e0: /* 9991e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9991e1: mov ebp, esp */
  ebp = esp;
/* 9991e3: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 9991e6: sub esp, 0x9c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x9cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9991ec: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9991ed: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9991ee: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 9991f1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9991f2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9991f3: mov dword ptr [esp + 0x7c], 0x54442d18 */
  W32((uint32_t)(esp + 0x7cu), 0x54442d18u);
/* 9991fb: mov dword ptr [esp + 0x80], 0x401921fb */
  W32((uint32_t)(esp + 0x80u), 0x401921fbu);
/* 999206: call 0x999da0 */
  esp -= 4; W32(esp, 0x99920bu); SPILL(); f_999da0(); if (g_unwind) return; RELOAD();
/* 99920b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99920e: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 999210: jne 0x99922c */
  if (!zf) goto L_99922c;
L_999212: /* 999212: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 999213: push 0xa21ba0 */
  { uint32_t v = 0xa21ba0u; esp -= 4; W32(esp, v); }
/* 999218: push 0xcfb0d0 */
  { uint32_t v = 0xcfb0d0u; esp -= 4; W32(esp, v); }
/* 99921d: call 0x99cf48 */
  esp -= 4; W32(esp, 0x999222u); SPILL(); f_99cf48(); if (g_unwind) return; RELOAD();
/* 999222: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 999225: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 999227: call 0x99ced6 */
  esp -= 4; W32(esp, 0x99922cu); SPILL(); f_99ced6(); if (g_unwind) return; RELOAD();
L_99922c: /* 99922c: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 99922f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 999231: je 0x999243 */
  if (zf) goto L_999243;
L_999233: /* 999233: mov dword ptr [esp + 0x78], 0x54442d18 */
  W32((uint32_t)(esp + 0x78u), 0x54442d18u);
/* 99923b: mov dword ptr [esp + 0x7c], 0xc01921fb */
  W32((uint32_t)(esp + 0x7cu), 0xc01921fbu);
L_999243: /* 999243: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 999246: push 0xa21b98 */
  { uint32_t v = 0xa21b98u; esp -= 4; W32(esp, v); }
/* 99924b: call 0x9991b0 */
  esp -= 4; W32(esp, 0x999250u); SPILL(); f_9991b0(); if (g_unwind) return; RELOAD();
/* 999250: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 999253: push 0xa21b90 */
  { uint32_t v = 0xa21b90u; esp -= 4; W32(esp, v); }
/* 999258: call 0x9991b0 */
  esp -= 4; W32(esp, 0x99925du); SPILL(); f_9991b0(); if (g_unwind) return; RELOAD();
/* 99925d: mov edi, dword ptr [ebp + 0x1c] */
  edi = R32((uint32_t)(ebp + 0x1cu));
/* 999260: push 0xa21b88 */
  { uint32_t v = 0xa21b88u; esp -= 4; W32(esp, v); }
/* 999265: mov eax, edi */
  eax = edi;
/* 999267: call 0x9991b0 */
  esp -= 4; W32(esp, 0x99926cu); SPILL(); f_9991b0(); if (g_unwind) return; RELOAD();
/* 99926c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99926d: call 0x999dc0 */
  esp -= 4; W32(esp, 0x999272u); SPILL(); f_999dc0(); if (g_unwind) return; RELOAD();
/* 999272: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 999275: xor ebx, ebx */
  ebx = 0;
/* 999277: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 999279: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 99927d: jbe 0x9992d9 */
  if ((cf | zf)) goto L_9992d9;
L_99927f: /* 99927f: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 999282: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 999285: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 999287: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 99928b: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 99928f: nop  */
L_999290: /* 999290: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 999294: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 999295: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 999296: call 0x999de0 */
  esp -= 4; W32(esp, 0x99929bu); SPILL(); f_999de0(); if (g_unwind) return; RELOAD();
/* 99929b: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 99929f: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 9992a3: mov edx, dword ptr [ecx + edx] */
  edx = R32((uint32_t)(ecx + edx));
/* 9992a6: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 9992a9: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 9992ac: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 9992af: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9992b2: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9992b4: jne 0x9992be */
  if (!zf) goto L_9992be;
L_9992b6: /* 9992b6: fld qword ptr [0x9f7668] */
  { double v = F64((uint32_t)(0x9f7668u)); FPUSH(v); }
/* 9992bc: jmp 0x9992c4 */
  goto L_9992c4;
L_9992be: /* 9992be: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 9992c2: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
L_9992c4: /* 9992c4: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 9992c8: fstp dword ptr [edi + eax*4] */
  WF32((uint32_t)(edi + eax*4), ST0); FPOP();
/* 9992cb: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 9992cc: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9992cf: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 9992d1: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 9992d5: jb 0x999290 */
  if (cf) goto L_999290;
L_9992d7: /* 9992d7: jmp 0x9992dc */
  goto L_9992dc;
L_9992d9: /* 9992d9: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
L_9992dc: /* 9992dc: mov edx, 2 */
  edx = 0x2u;
/* 9992e1: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 9992e3: mov ebx, 1 */
  ebx = 0x1u;
/* 9992e8: mov dword ptr [esp + 0x3c], ebx */
  W32((uint32_t)(esp + 0x3cu), ebx);
/* 9992ec: mov dword ptr [esp + 0x60], edx */
  W32((uint32_t)(esp + 0x60u), edx);
/* 9992f0: jb 0x99976c */
  if (cf) goto L_99976c;
L_9992f6: /* 9992f6: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9992f8: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 9992fc: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 999300: jge 0x999308 */
  if ((sf == of)) goto L_999308;
L_999302: /* 999302: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_999308: /* 999308: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 99930a: fdivr qword ptr [esp + 0x78] */
  ST0 = (F64((uint32_t)(esp + 0x78u))) / ST0;
/* 99930e: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 999316: fld qword ptr [0xa21b80] */
  { double v = F64((uint32_t)(0xa21b80u)); FPUSH(v); }
/* 99931c: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 99931e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 999320: fsin  */
  ST0 = sin(ST0); FSW_CC &= ~0x400;
/* 999322: fstp qword ptr [esp + 0x88] */
  WF64((uint32_t)(esp + 0x88u), ST0); FPOP();
/* 999329: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 99932b: fchs  */
  ST0 = -ST0;
/* 99932d: fst qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0);
/* 999331: fsin  */
  ST0 = sin(ST0); FSW_CC &= ~0x400;
/* 999333: fstp qword ptr [esp + 0x98] */
  WF64((uint32_t)(esp + 0x98u), ST0); FPOP();
/* 99933a: fcos  */
  ST0 = cos(ST0); FSW_CC &= ~0x400;
/* 99933c: fstp qword ptr [esp + 0x90] */
  WF64((uint32_t)(esp + 0x90u), ST0); FPOP();
/* 999343: fld qword ptr [esp + 0x18] */
  { double v = F64((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 999347: fcos  */
  ST0 = cos(ST0); FSW_CC &= ~0x400;
/* 999349: fst qword ptr [esp + 0xa0] */
  WF64((uint32_t)(esp + 0xa0u), ST0);
/* 999350: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 999352: jbe 0x999756 */
  if ((cf | zf)) goto L_999756;
L_999358: /* 999358: lea eax, [edi + ebx*4] */
  eax = (uint32_t)(edi + ebx*4);
/* 99935b: mov dword ptr [esp + 0x68], eax */
  W32((uint32_t)(esp + 0x68u), eax);
/* 99935f: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
/* 999362: mov dword ptr [esp + 0x70], eax */
  W32((uint32_t)(esp + 0x70u), eax);
/* 999366: lea eax, [ecx + 0xc] */
  eax = (uint32_t)(ecx + 0xcu);
/* 999369: lea ecx, [ecx + ebx*4 + 8] */
  ecx = (uint32_t)(ecx + ebx*4 + 0x8u);
/* 99936d: mov dword ptr [esp + 0x64], eax */
  W32((uint32_t)(esp + 0x64u), eax);
/* 999371: mov dword ptr [esp + 0x6c], ecx */
  W32((uint32_t)(esp + 0x6cu), ecx);
/* 999375: jmp 0x999380 */
  goto L_999380;
L_999380: /* 999380: mov ecx, dword ptr [esp + 0x94] */
  ecx = R32((uint32_t)(esp + 0x94u));
/* 999387: fld qword ptr [esp + 0xa0] */
  { double v = F64((uint32_t)(esp + 0xa0u)); FPUSH(v); }
/* 99938e: mov eax, dword ptr [esp + 0x90] */
  eax = R32((uint32_t)(esp + 0x90u));
/* 999395: mov dword ptr [esp + 0x54], ecx */
  W32((uint32_t)(esp + 0x54u), ecx);
/* 999399: mov ecx, dword ptr [esp + 0x8c] */
  ecx = R32((uint32_t)(esp + 0x8cu));
/* 9993a0: mov dword ptr [esp + 0x50], eax */
  W32((uint32_t)(esp + 0x50u), eax);
/* 9993a4: mov eax, dword ptr [esp + 0x88] */
  eax = R32((uint32_t)(esp + 0x88u));
/* 9993ab: mov dword ptr [esp + 0x34], ecx */
  W32((uint32_t)(esp + 0x34u), ecx);
/* 9993af: mov ecx, dword ptr [esp + 0x9c] */
  ecx = R32((uint32_t)(esp + 0x9cu));
/* 9993b6: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 9993ba: mov eax, dword ptr [esp + 0x98] */
  eax = R32((uint32_t)(esp + 0x98u));
/* 9993c1: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* 9993c5: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 9993c9: xor esi, esi */
  esi = 0;
/* 9993cb: cmp ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9993ce: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 9993d2: mov dword ptr [esp + 0x5c], ecx */
  W32((uint32_t)(esp + 0x5cu), ecx);
/* 9993d6: mov dword ptr [esp + 0x58], esi */
  W32((uint32_t)(esp + 0x58u), esi);
/* 9993da: jl 0x99964c */
  if ((sf != of)) goto L_99964c;
L_9993e0: /* 9993e0: mov ebx, dword ptr [ebp + 0x18] */
  ebx = R32((uint32_t)(ebp + 0x18u));
/* 9993e3: mov edx, dword ptr [esp + 0x64] */
  edx = R32((uint32_t)(esp + 0x64u));
/* 9993e7: mov esi, dword ptr [esp + 0x6c] */
  esi = R32((uint32_t)(esp + 0x6cu));
/* 9993eb: mov eax, dword ptr [esp + 0x70] */
  eax = R32((uint32_t)(esp + 0x70u));
/* 9993ef: mov ecx, dword ptr [esp + 0x68] */
  ecx = R32((uint32_t)(esp + 0x68u));
/* 9993f3: sub ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 9993f5: mov dword ptr [esp + 0x14], 3 */
  W32((uint32_t)(esp + 0x14u), 0x3u);
/* 9993fd: mov dword ptr [esp + 0x74], ebx */
  W32((uint32_t)(esp + 0x74u), ebx);
L_999401: /* 999401: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 999403: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 999405: fsub qword ptr [esp + 0x50] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x50u)));
/* 999409: fstp qword ptr [esp + 0x40] */
  WF64((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 99940d: mov edi, dword ptr [esp + 0x40] */
  edi = R32((uint32_t)(esp + 0x40u));
/* 999411: fstp qword ptr [esp + 0x50] */
  WF64((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 999415: mov ebx, dword ptr [esp + 0x44] */
  ebx = R32((uint32_t)(esp + 0x44u));
/* 999419: fld qword ptr [esp + 0x28] */
  { double v = F64((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 99941d: mov dword ptr [esp + 0x48], edi */
  W32((uint32_t)(esp + 0x48u), edi);
/* 999421: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 999423: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* 999427: mov dword ptr [esp + 0x4c], ebx */
  W32((uint32_t)(esp + 0x4cu), ebx);
/* 99942b: mov ebx, dword ptr [esp + 0x2c] */
  ebx = R32((uint32_t)(esp + 0x2cu));
/* 99942f: fsub qword ptr [esp + 0x30] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x30u)));
/* 999433: mov dword ptr [esp + 0x30], edi */
  W32((uint32_t)(esp + 0x30u), edi);
/* 999437: mov edi, dword ptr [esp + 0x74] */
  edi = R32((uint32_t)(esp + 0x74u));
/* 99943b: mov dword ptr [esp + 0x34], ebx */
  W32((uint32_t)(esp + 0x34u), ebx);
/* 99943f: fst qword ptr [esp + 0x28] */
  WF64((uint32_t)(esp + 0x28u), ST0);
/* 999443: fld dword ptr [edi + ecx] */
  { double v = F32((uint32_t)(edi + ecx)); FPUSH(v); }
/* 999446: mov ebx, dword ptr [esp + 0x2c] */
  ebx = R32((uint32_t)(esp + 0x2cu));
/* 99944a: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 99944c: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 99944e: fmul qword ptr [esp + 0x40] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x40u)));
/* 999452: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 999454: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 999456: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 999458: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 99945c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 99945e: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 999460: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 999462: fmul qword ptr [esp + 0x40] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x40u)));
/* 999466: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 999468: fld dword ptr [edx - 0xc] */
  { double v = F32((uint32_t)(edx + 0xfffffff4u)); FPUSH(v); }
/* 99946b: fsub qword ptr [esp + 0x18] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x18u)));
/* 99946f: fstp dword ptr [edi + ecx] */
  WF32((uint32_t)(edi + ecx), ST0); FPOP();
/* 999472: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* 999476: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* 999479: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 99947b: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 99947d: fld dword ptr [edx - 0xc] */
  { double v = F32((uint32_t)(edx + 0xfffffff4u)); FPUSH(v); }
/* 999480: fadd qword ptr [esp + 0x18] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x18u)));
/* 999484: fstp dword ptr [edx - 0xc] */
  WF32((uint32_t)(edx + 0xfffffff4u), ST0); FPOP();
/* 999487: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* 99948a: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 99948c: fstp dword ptr [eax - 4] */
  WF32((uint32_t)(eax + 0xfffffffcu), ST0); FPOP();
/* 99948f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 999491: fld qword ptr [esp + 0x40] */
  { double v = F64((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 999495: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 999497: fsub qword ptr [esp + 0x50] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x50u)));
/* 99949b: fld qword ptr [esp + 0x48] */
  { double v = F64((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 99949f: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9994a1: fstp qword ptr [esp + 0x48] */
  WF64((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 9994a5: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 9994a7: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 9994a9: fsub qword ptr [esp + 0x30] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x30u)));
/* 9994ad: mov dword ptr [esp + 0x30], edi */
  W32((uint32_t)(esp + 0x30u), edi);
/* 9994b1: mov edi, dword ptr [esp + 0x74] */
  edi = R32((uint32_t)(esp + 0x74u));
/* 9994b5: mov dword ptr [esp + 0x34], ebx */
  W32((uint32_t)(esp + 0x34u), ebx);
/* 9994b9: fst qword ptr [esp + 0x20] */
  WF64((uint32_t)(esp + 0x20u), ST0);
/* 9994bd: fstp qword ptr [esp + 0x28] */
  WF64((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 9994c1: fld dword ptr [esi - 4] */
  { double v = F32((uint32_t)(esi + 0xfffffffcu)); FPUSH(v); }
/* 9994c4: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 9994c7: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9994c9: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 9994cb: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9994cd: fmul qword ptr [esp + 0x20] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x20u)));
/* 9994d1: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9994d3: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 9994d7: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 9994d9: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9994db: fmul qword ptr [esp + 0x20] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x20u)));
/* 9994df: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9994e1: fstp qword ptr [esp + 0x80] */
  WF64((uint32_t)(esp + 0x80u), ST0); FPOP();
/* 9994e8: fld dword ptr [edi + eax] */
  { double v = F32((uint32_t)(edi + eax)); FPUSH(v); }
/* 9994eb: fsub qword ptr [esp + 0x18] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x18u)));
/* 9994ef: fstp dword ptr [esi - 4] */
  WF32((uint32_t)(esi + 0xfffffffcu), ST0); FPOP();
/* 9994f2: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 9994f4: fsub qword ptr [esp + 0x80] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x80u)));
/* 9994fb: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 9994fe: fld dword ptr [edi + eax] */
  { double v = F32((uint32_t)(edi + eax)); FPUSH(v); }
/* 999501: fadd qword ptr [esp + 0x18] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x18u)));
/* 999505: fstp dword ptr [edi + eax] */
  WF32((uint32_t)(edi + eax), ST0); FPOP();
/* 999508: mov edi, dword ptr [esp + 0x48] */
  edi = R32((uint32_t)(esp + 0x48u));
/* 99950c: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 99950e: mov ebx, dword ptr [esp + 0x4c] */
  ebx = R32((uint32_t)(esp + 0x4cu));
/* 999512: fadd qword ptr [esp + 0x80] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x80u)));
/* 999519: mov dword ptr [esp + 0x50], edi */
  W32((uint32_t)(esp + 0x50u), edi);
/* 99951d: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* 999521: mov dword ptr [esp + 0x54], ebx */
  W32((uint32_t)(esp + 0x54u), ebx);
/* 999525: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 999527: mov ebx, dword ptr [esp + 0x2c] */
  ebx = R32((uint32_t)(esp + 0x2cu));
/* 99952b: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 99952d: fsubrp st(1) */
  STI(1) = ST0 - STI(1);
  FPOP();
/* 99952f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 999531: fld qword ptr [esp + 0x20] */
  { double v = F64((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 999535: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 999537: fsub qword ptr [esp + 0x30] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x30u)));
/* 99953b: mov dword ptr [esp + 0x30], edi */
  W32((uint32_t)(esp + 0x30u), edi);
/* 99953f: mov dword ptr [esp + 0x34], ebx */
  W32((uint32_t)(esp + 0x34u), ebx);
/* 999543: fst qword ptr [esp + 0x28] */
  WF64((uint32_t)(esp + 0x28u), ST0);
/* 999547: fst qword ptr [esp + 0x20] */
  WF64((uint32_t)(esp + 0x20u), ST0);
/* 99954b: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* 99954f: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 999551: mov ebx, dword ptr [esp + 0x2c] */
  ebx = R32((uint32_t)(esp + 0x2cu));
/* 999555: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 999558: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 99955a: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 99955c: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 99955e: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 999560: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 999562: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 999566: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 999568: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 99956a: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 99956c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 99956e: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 999570: fld dword ptr [edx - 4] */
  { double v = F32((uint32_t)(edx + 0xfffffffcu)); FPUSH(v); }
/* 999573: fsub qword ptr [esp + 0x18] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x18u)));
/* 999577: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 999579: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 99957c: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 99957e: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 999581: fld dword ptr [edx - 4] */
  { double v = F32((uint32_t)(edx + 0xfffffffcu)); FPUSH(v); }
/* 999584: fadd qword ptr [esp + 0x18] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x18u)));
/* 999588: fstp dword ptr [edx - 4] */
  WF32((uint32_t)(edx + 0xfffffffcu), ST0); FPOP();
/* 99958b: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 99958e: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 999590: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 999593: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 999595: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 999597: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 999599: fsub qword ptr [esp + 0x50] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x50u)));
/* 99959d: fstp qword ptr [esp + 0x40] */
  WF64((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 9995a1: fstp qword ptr [esp + 0x50] */
  WF64((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 9995a5: fld qword ptr [esp + 0x40] */
  { double v = F64((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 9995a9: fld qword ptr [esp + 0x20] */
  { double v = F64((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 9995ad: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 9995af: fsub qword ptr [esp + 0x30] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x30u)));
/* 9995b3: mov dword ptr [esp + 0x30], edi */
  W32((uint32_t)(esp + 0x30u), edi);
/* 9995b7: mov dword ptr [esp + 0x34], ebx */
  W32((uint32_t)(esp + 0x34u), ebx);
/* 9995bb: fst qword ptr [esp + 0x28] */
  WF64((uint32_t)(esp + 0x28u), ST0);
/* 9995bf: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 9995c2: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 9995c5: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9995c7: fmul qword ptr [esp + 0x40] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x40u)));
/* 9995cb: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9995cd: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 9995cf: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9995d1: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 9995d5: fmul qword ptr [esp + 0x40] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x40u)));
/* 9995d9: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9995db: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 9995dd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9995df: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 9995e1: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 9995e3: fsub qword ptr [esp + 0x18] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x18u)));
/* 9995e7: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 9995ea: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 9995ed: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9995ef: fstp dword ptr [ecx + 0xc] */
  WF32((uint32_t)(ecx + 0xcu), ST0); FPOP();
/* 9995f2: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 9995f4: fadd qword ptr [esp + 0x18] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x18u)));
/* 9995f8: mov edi, dword ptr [esp + 0x58] */
  edi = R32((uint32_t)(esp + 0x58u));
/* 9995fc: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 9995fe: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 999601: mov ebx, dword ptr [esp + 0x5c] */
  ebx = R32((uint32_t)(esp + 0x5cu));
/* 999605: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 999608: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 99960a: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 99960d: mov dword ptr [esp + 0x58], edi */
  W32((uint32_t)(esp + 0x58u), edi);
/* 999611: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 999615: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 999618: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 99961b: mov dword ptr [esp + 0x5c], ebx */
  W32((uint32_t)(esp + 0x5cu), ebx);
/* 99961f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 999621: mov ebx, dword ptr [esp + 0x3c] */
  ebx = R32((uint32_t)(esp + 0x3cu));
/* 999625: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 999628: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 99962b: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 99962e: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 999631: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 999633: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 999637: jb 0x999401 */
  if (cf) goto L_999401;
L_99963d: /* 99963d: mov esi, dword ptr [esp + 0x58] */
  esi = R32((uint32_t)(esp + 0x58u));
/* 999641: mov edx, dword ptr [esp + 0x60] */
  edx = R32((uint32_t)(esp + 0x60u));
/* 999645: mov ecx, dword ptr [esp + 0x5c] */
  ecx = R32((uint32_t)(esp + 0x5cu));
/* 999649: mov edi, dword ptr [ebp + 0x1c] */
  edi = R32((uint32_t)(ebp + 0x1cu));
L_99964c: /* 99964c: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 99964e: jae 0x999709 */
  if (!cf) goto L_999709;
L_999654: /* 999654: lea eax, [edi + ecx*4] */
  eax = (uint32_t)(edi + ecx*4);
/* 999657: lea edx, [ebx + ecx] */
  edx = (uint32_t)(ebx + ecx);
/* 99965a: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 99965d: lea edx, [edi + edx*4] */
  edx = (uint32_t)(edi + edx*4);
/* 999660: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 999662: mov edi, ebx */
  edi = ebx;
/* 999664: sub edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 999666: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 99966a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_999670: /* 999670: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 999672: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 999676: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 999678: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* 99967c: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 99967f: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 999682: fsub qword ptr [esp + 0x50] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x50u)));
/* 999686: fstp qword ptr [esp + 0x40] */
  WF64((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 99968a: fstp qword ptr [esp + 0x50] */
  WF64((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 99968e: fld qword ptr [esp + 0x40] */
  { double v = F64((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 999692: fld qword ptr [esp + 0x28] */
  { double v = F64((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 999696: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 999698: fsub qword ptr [esp + 0x30] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x30u)));
/* 99969c: mov dword ptr [esp + 0x30], esi */
  W32((uint32_t)(esp + 0x30u), esi);
/* 9996a0: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 9996a4: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 9996a5: fst qword ptr [esp + 0x28] */
  WF64((uint32_t)(esp + 0x28u), ST0);
/* 9996a9: mov dword ptr [esp + 0x34], edi */
  W32((uint32_t)(esp + 0x34u), edi);
/* 9996ad: fld dword ptr [ecx + edx - 4] */
  { double v = F32((uint32_t)(ecx + edx + 0xfffffffcu)); FPUSH(v); }
/* 9996b1: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 9996b5: fld dword ptr [edx - 4] */
  { double v = F32((uint32_t)(edx + 0xfffffffcu)); FPUSH(v); }
/* 9996b8: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9996ba: fmul qword ptr [esp + 0x40] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x40u)));
/* 9996be: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9996c0: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 9996c2: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9996c4: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 9996c8: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9996ca: fmulp st(2) */
  STI(2) = STI(2) * ST0;
  FPOP();
/* 9996cc: fmul qword ptr [esp + 0x40] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x40u)));
/* 9996d0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9996d2: fld dword ptr [ecx + eax - 4] */
  { double v = F32((uint32_t)(ecx + eax + 0xfffffffcu)); FPUSH(v); }
/* 9996d6: fsub qword ptr [esp + 0x18] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x18u)));
/* 9996da: fstp dword ptr [ecx + edx - 4] */
  WF32((uint32_t)(ecx + edx + 0xfffffffcu), ST0); FPOP();
/* 9996de: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* 9996e1: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9996e3: fstp dword ptr [edx - 4] */
  WF32((uint32_t)(edx + 0xfffffffcu), ST0); FPOP();
/* 9996e6: fld dword ptr [ecx + eax - 4] */
  { double v = F32((uint32_t)(ecx + eax + 0xfffffffcu)); FPUSH(v); }
/* 9996ea: fadd qword ptr [esp + 0x18] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x18u)));
/* 9996ee: fstp dword ptr [ecx + eax - 4] */
  WF32((uint32_t)(ecx + eax + 0xfffffffcu), ST0); FPOP();
/* 9996f2: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* 9996f5: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 9996f7: fstp dword ptr [eax - 4] */
  WF32((uint32_t)(eax + 0xfffffffcu), ST0); FPOP();
/* 9996fa: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9996fc: jne 0x999670 */
  if (!zf) goto L_999670;
L_999702: /* 999702: mov edi, dword ptr [ebp + 0x1c] */
  edi = R32((uint32_t)(ebp + 0x1cu));
/* 999705: mov edx, dword ptr [esp + 0x60] */
  edx = R32((uint32_t)(esp + 0x60u));
L_999709: /* 999709: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 99970d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99970f: mov ecx, dword ptr [esp + 0x64] */
  ecx = R32((uint32_t)(esp + 0x64u));
/* 999713: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 999715: lea eax, [edx*4] */
  eax = (uint32_t)(edx*4);
/* 99971c: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 999720: mov esi, dword ptr [esp + 0x70] */
  esi = R32((uint32_t)(esp + 0x70u));
/* 999724: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 999726: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 999728: mov dword ptr [esp + 0x64], ecx */
  W32((uint32_t)(esp + 0x64u), ecx);
/* 99972c: mov ecx, dword ptr [esp + 0x6c] */
  ecx = R32((uint32_t)(esp + 0x6cu));
/* 999730: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 999732: mov dword ptr [esp + 0x70], esi */
  W32((uint32_t)(esp + 0x70u), esi);
/* 999736: mov esi, dword ptr [esp + 0x68] */
  esi = R32((uint32_t)(esp + 0x68u));
/* 99973a: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 99973c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 99973f: mov dword ptr [esp + 0x6c], ecx */
  W32((uint32_t)(esp + 0x6cu), ecx);
/* 999743: cmp dword ptr [esp + 0x10], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 999747: mov dword ptr [esp + 0x68], esi */
  W32((uint32_t)(esp + 0x68u), esi);
/* 99974b: jb 0x999380 */
  if (cf) goto L_999380;
L_999751: /* 999751: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 999754: mov esi, eax */
  esi = eax;
L_999756: /* 999756: mov ebx, edx */
  ebx = edx;
/* 999758: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99975a: shl edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 99975c: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 99975e: mov dword ptr [esp + 0x3c], ebx */
  W32((uint32_t)(esp + 0x3cu), ebx);
/* 999762: mov dword ptr [esp + 0x60], edx */
  W32((uint32_t)(esp + 0x60u), edx);
/* 999766: jbe 0x9992f6 */
  if ((cf | zf)) goto L_9992f6;
L_99976c: /* 99976c: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 99976f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 999771: je 0x9997aa */
  if (zf) goto L_9997aa;
L_999773: /* 999773: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  cf = 0;
  of = 0;
  }
/* 999775: mov dword ptr [esp + 0x3c], esi */
  W32((uint32_t)(esp + 0x3cu), esi);
/* 999779: fild dword ptr [esp + 0x3c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 99977d: jge 0x999785 */
  if ((sf == of)) goto L_999785;
L_99977f: /* 99977f: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_999785: /* 999785: jbe 0x9997a8 */
  if ((cf | zf)) goto L_9997a8;
L_999787: /* 999787: fdivr qword ptr [0xa0da58] */
  ST0 = (F64((uint32_t)(0xa0da58u))) / ST0;
/* 99978d: mov eax, ecx */
  eax = ecx;
/* 99978f: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
L_999791: /* 999791: fld dword ptr [eax + edi] */
  { double v = F32((uint32_t)(eax + edi)); FPUSH(v); }
/* 999794: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 999797: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 999798: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 99979a: fstp dword ptr [eax + edi - 4] */
  WF32((uint32_t)(eax + edi + 0xfffffffcu), ST0); FPOP();
/* 99979e: fld dword ptr [edi - 4] */
  { double v = F32((uint32_t)(edi + 0xfffffffcu)); FPUSH(v); }
/* 9997a1: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9997a3: fstp dword ptr [edi - 4] */
  WF32((uint32_t)(edi + 0xfffffffcu), ST0); FPOP();
/* 9997a6: jne 0x999791 */
  if (!zf) goto L_999791;
L_9997a8: /* 9997a8: fstp st(0) */
  STI(0) = ST0; FPOP();
L_9997aa: /* 9997aa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9997ab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9997ac: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9997ad: mov esp, ebp */
  esp = ebp;
/* 9997af: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9997b0: ret  */
  esp += 4; SPILL(); return;
}

void f_999377(void) {
  LOAD_REGS();
  goto L_999377;
L_9992f6: /* 9992f6: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9992f8: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 9992fc: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 999300: jge 0x999308 */
  if ((sf == of)) goto L_999308;
L_999302: /* 999302: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_999308: /* 999308: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 99930a: fdivr qword ptr [esp + 0x78] */
  ST0 = (F64((uint32_t)(esp + 0x78u))) / ST0;
/* 99930e: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 999316: fld qword ptr [0xa21b80] */
  { double v = F64((uint32_t)(0xa21b80u)); FPUSH(v); }
/* 99931c: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 99931e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 999320: fsin  */
  ST0 = sin(ST0); FSW_CC &= ~0x400;
/* 999322: fstp qword ptr [esp + 0x88] */
  WF64((uint32_t)(esp + 0x88u), ST0); FPOP();
/* 999329: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 99932b: fchs  */
  ST0 = -ST0;
/* 99932d: fst qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0);
/* 999331: fsin  */
  ST0 = sin(ST0); FSW_CC &= ~0x400;
/* 999333: fstp qword ptr [esp + 0x98] */
  WF64((uint32_t)(esp + 0x98u), ST0); FPOP();
/* 99933a: fcos  */
  ST0 = cos(ST0); FSW_CC &= ~0x400;
/* 99933c: fstp qword ptr [esp + 0x90] */
  WF64((uint32_t)(esp + 0x90u), ST0); FPOP();
/* 999343: fld qword ptr [esp + 0x18] */
  { double v = F64((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 999347: fcos  */
  ST0 = cos(ST0); FSW_CC &= ~0x400;
/* 999349: fst qword ptr [esp + 0xa0] */
  WF64((uint32_t)(esp + 0xa0u), ST0);
/* 999350: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 999352: jbe 0x999756 */
  if ((cf | zf)) goto L_999756;
L_999358: /* 999358: lea eax, [edi + ebx*4] */
  eax = (uint32_t)(edi + ebx*4);
/* 99935b: mov dword ptr [esp + 0x68], eax */
  W32((uint32_t)(esp + 0x68u), eax);
/* 99935f: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
/* 999362: mov dword ptr [esp + 0x70], eax */
  W32((uint32_t)(esp + 0x70u), eax);
/* 999366: lea eax, [ecx + 0xc] */
  eax = (uint32_t)(ecx + 0xcu);
/* 999369: lea ecx, [ecx + ebx*4 + 8] */
  ecx = (uint32_t)(ecx + ebx*4 + 0x8u);
/* 99936d: mov dword ptr [esp + 0x64], eax */
  W32((uint32_t)(esp + 0x64u), eax);
/* 999371: mov dword ptr [esp + 0x6c], ecx */
  W32((uint32_t)(esp + 0x6cu), ecx);
/* 999375: jmp 0x999380 */
  goto L_999380;
L_999377: /* 999377: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 99937e: mov edi, edi */
  edi = edi;
L_999380: /* 999380: mov ecx, dword ptr [esp + 0x94] */
  ecx = R32((uint32_t)(esp + 0x94u));
/* 999387: fld qword ptr [esp + 0xa0] */
  { double v = F64((uint32_t)(esp + 0xa0u)); FPUSH(v); }
/* 99938e: mov eax, dword ptr [esp + 0x90] */
  eax = R32((uint32_t)(esp + 0x90u));
/* 999395: mov dword ptr [esp + 0x54], ecx */
  W32((uint32_t)(esp + 0x54u), ecx);
/* 999399: mov ecx, dword ptr [esp + 0x8c] */
  ecx = R32((uint32_t)(esp + 0x8cu));
/* 9993a0: mov dword ptr [esp + 0x50], eax */
  W32((uint32_t)(esp + 0x50u), eax);
/* 9993a4: mov eax, dword ptr [esp + 0x88] */
  eax = R32((uint32_t)(esp + 0x88u));
/* 9993ab: mov dword ptr [esp + 0x34], ecx */
  W32((uint32_t)(esp + 0x34u), ecx);
/* 9993af: mov ecx, dword ptr [esp + 0x9c] */
  ecx = R32((uint32_t)(esp + 0x9cu));
/* 9993b6: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 9993ba: mov eax, dword ptr [esp + 0x98] */
  eax = R32((uint32_t)(esp + 0x98u));
/* 9993c1: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* 9993c5: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 9993c9: xor esi, esi */
  esi = 0;
/* 9993cb: cmp ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9993ce: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 9993d2: mov dword ptr [esp + 0x5c], ecx */
  W32((uint32_t)(esp + 0x5cu), ecx);
/* 9993d6: mov dword ptr [esp + 0x58], esi */
  W32((uint32_t)(esp + 0x58u), esi);
/* 9993da: jl 0x99964c */
  if ((sf != of)) goto L_99964c;
L_9993e0: /* 9993e0: mov ebx, dword ptr [ebp + 0x18] */
  ebx = R32((uint32_t)(ebp + 0x18u));
/* 9993e3: mov edx, dword ptr [esp + 0x64] */
  edx = R32((uint32_t)(esp + 0x64u));
/* 9993e7: mov esi, dword ptr [esp + 0x6c] */
  esi = R32((uint32_t)(esp + 0x6cu));
/* 9993eb: mov eax, dword ptr [esp + 0x70] */
  eax = R32((uint32_t)(esp + 0x70u));
/* 9993ef: mov ecx, dword ptr [esp + 0x68] */
  ecx = R32((uint32_t)(esp + 0x68u));
/* 9993f3: sub ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 9993f5: mov dword ptr [esp + 0x14], 3 */
  W32((uint32_t)(esp + 0x14u), 0x3u);
/* 9993fd: mov dword ptr [esp + 0x74], ebx */
  W32((uint32_t)(esp + 0x74u), ebx);
L_999401: /* 999401: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 999403: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 999405: fsub qword ptr [esp + 0x50] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x50u)));
/* 999409: fstp qword ptr [esp + 0x40] */
  WF64((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 99940d: mov edi, dword ptr [esp + 0x40] */
  edi = R32((uint32_t)(esp + 0x40u));
/* 999411: fstp qword ptr [esp + 0x50] */
  WF64((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 999415: mov ebx, dword ptr [esp + 0x44] */
  ebx = R32((uint32_t)(esp + 0x44u));
/* 999419: fld qword ptr [esp + 0x28] */
  { double v = F64((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 99941d: mov dword ptr [esp + 0x48], edi */
  W32((uint32_t)(esp + 0x48u), edi);
/* 999421: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 999423: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* 999427: mov dword ptr [esp + 0x4c], ebx */
  W32((uint32_t)(esp + 0x4cu), ebx);
/* 99942b: mov ebx, dword ptr [esp + 0x2c] */
  ebx = R32((uint32_t)(esp + 0x2cu));
/* 99942f: fsub qword ptr [esp + 0x30] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x30u)));
/* 999433: mov dword ptr [esp + 0x30], edi */
  W32((uint32_t)(esp + 0x30u), edi);
/* 999437: mov edi, dword ptr [esp + 0x74] */
  edi = R32((uint32_t)(esp + 0x74u));
/* 99943b: mov dword ptr [esp + 0x34], ebx */
  W32((uint32_t)(esp + 0x34u), ebx);
/* 99943f: fst qword ptr [esp + 0x28] */
  WF64((uint32_t)(esp + 0x28u), ST0);
/* 999443: fld dword ptr [edi + ecx] */
  { double v = F32((uint32_t)(edi + ecx)); FPUSH(v); }
/* 999446: mov ebx, dword ptr [esp + 0x2c] */
  ebx = R32((uint32_t)(esp + 0x2cu));
/* 99944a: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 99944c: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 99944e: fmul qword ptr [esp + 0x40] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x40u)));
/* 999452: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 999454: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 999456: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 999458: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 99945c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 99945e: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 999460: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 999462: fmul qword ptr [esp + 0x40] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x40u)));
/* 999466: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 999468: fld dword ptr [edx - 0xc] */
  { double v = F32((uint32_t)(edx + 0xfffffff4u)); FPUSH(v); }
/* 99946b: fsub qword ptr [esp + 0x18] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x18u)));
/* 99946f: fstp dword ptr [edi + ecx] */
  WF32((uint32_t)(edi + ecx), ST0); FPOP();
/* 999472: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* 999476: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* 999479: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 99947b: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 99947d: fld dword ptr [edx - 0xc] */
  { double v = F32((uint32_t)(edx + 0xfffffff4u)); FPUSH(v); }
/* 999480: fadd qword ptr [esp + 0x18] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x18u)));
/* 999484: fstp dword ptr [edx - 0xc] */
  WF32((uint32_t)(edx + 0xfffffff4u), ST0); FPOP();
/* 999487: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* 99948a: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 99948c: fstp dword ptr [eax - 4] */
  WF32((uint32_t)(eax + 0xfffffffcu), ST0); FPOP();
/* 99948f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 999491: fld qword ptr [esp + 0x40] */
  { double v = F64((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 999495: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 999497: fsub qword ptr [esp + 0x50] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x50u)));
/* 99949b: fld qword ptr [esp + 0x48] */
  { double v = F64((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 99949f: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9994a1: fstp qword ptr [esp + 0x48] */
  WF64((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 9994a5: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 9994a7: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 9994a9: fsub qword ptr [esp + 0x30] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x30u)));
/* 9994ad: mov dword ptr [esp + 0x30], edi */
  W32((uint32_t)(esp + 0x30u), edi);
/* 9994b1: mov edi, dword ptr [esp + 0x74] */
  edi = R32((uint32_t)(esp + 0x74u));
/* 9994b5: mov dword ptr [esp + 0x34], ebx */
  W32((uint32_t)(esp + 0x34u), ebx);
/* 9994b9: fst qword ptr [esp + 0x20] */
  WF64((uint32_t)(esp + 0x20u), ST0);
/* 9994bd: fstp qword ptr [esp + 0x28] */
  WF64((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 9994c1: fld dword ptr [esi - 4] */
  { double v = F32((uint32_t)(esi + 0xfffffffcu)); FPUSH(v); }
/* 9994c4: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 9994c7: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9994c9: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 9994cb: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9994cd: fmul qword ptr [esp + 0x20] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x20u)));
/* 9994d1: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9994d3: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 9994d7: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 9994d9: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9994db: fmul qword ptr [esp + 0x20] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x20u)));
/* 9994df: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9994e1: fstp qword ptr [esp + 0x80] */
  WF64((uint32_t)(esp + 0x80u), ST0); FPOP();
/* 9994e8: fld dword ptr [edi + eax] */
  { double v = F32((uint32_t)(edi + eax)); FPUSH(v); }
/* 9994eb: fsub qword ptr [esp + 0x18] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x18u)));
/* 9994ef: fstp dword ptr [esi - 4] */
  WF32((uint32_t)(esi + 0xfffffffcu), ST0); FPOP();
/* 9994f2: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 9994f4: fsub qword ptr [esp + 0x80] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x80u)));
/* 9994fb: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 9994fe: fld dword ptr [edi + eax] */
  { double v = F32((uint32_t)(edi + eax)); FPUSH(v); }
/* 999501: fadd qword ptr [esp + 0x18] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x18u)));
/* 999505: fstp dword ptr [edi + eax] */
  WF32((uint32_t)(edi + eax), ST0); FPOP();
/* 999508: mov edi, dword ptr [esp + 0x48] */
  edi = R32((uint32_t)(esp + 0x48u));
/* 99950c: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 99950e: mov ebx, dword ptr [esp + 0x4c] */
  ebx = R32((uint32_t)(esp + 0x4cu));
/* 999512: fadd qword ptr [esp + 0x80] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x80u)));
/* 999519: mov dword ptr [esp + 0x50], edi */
  W32((uint32_t)(esp + 0x50u), edi);
/* 99951d: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* 999521: mov dword ptr [esp + 0x54], ebx */
  W32((uint32_t)(esp + 0x54u), ebx);
/* 999525: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 999527: mov ebx, dword ptr [esp + 0x2c] */
  ebx = R32((uint32_t)(esp + 0x2cu));
/* 99952b: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 99952d: fsubrp st(1) */
  STI(1) = ST0 - STI(1);
  FPOP();
/* 99952f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 999531: fld qword ptr [esp + 0x20] */
  { double v = F64((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 999535: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 999537: fsub qword ptr [esp + 0x30] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x30u)));
/* 99953b: mov dword ptr [esp + 0x30], edi */
  W32((uint32_t)(esp + 0x30u), edi);
/* 99953f: mov dword ptr [esp + 0x34], ebx */
  W32((uint32_t)(esp + 0x34u), ebx);
/* 999543: fst qword ptr [esp + 0x28] */
  WF64((uint32_t)(esp + 0x28u), ST0);
/* 999547: fst qword ptr [esp + 0x20] */
  WF64((uint32_t)(esp + 0x20u), ST0);
/* 99954b: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* 99954f: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 999551: mov ebx, dword ptr [esp + 0x2c] */
  ebx = R32((uint32_t)(esp + 0x2cu));
/* 999555: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 999558: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 99955a: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 99955c: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 99955e: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 999560: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 999562: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 999566: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 999568: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 99956a: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 99956c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 99956e: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 999570: fld dword ptr [edx - 4] */
  { double v = F32((uint32_t)(edx + 0xfffffffcu)); FPUSH(v); }
/* 999573: fsub qword ptr [esp + 0x18] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x18u)));
/* 999577: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 999579: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 99957c: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 99957e: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 999581: fld dword ptr [edx - 4] */
  { double v = F32((uint32_t)(edx + 0xfffffffcu)); FPUSH(v); }
/* 999584: fadd qword ptr [esp + 0x18] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x18u)));
/* 999588: fstp dword ptr [edx - 4] */
  WF32((uint32_t)(edx + 0xfffffffcu), ST0); FPOP();
/* 99958b: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 99958e: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 999590: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 999593: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 999595: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 999597: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 999599: fsub qword ptr [esp + 0x50] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x50u)));
/* 99959d: fstp qword ptr [esp + 0x40] */
  WF64((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 9995a1: fstp qword ptr [esp + 0x50] */
  WF64((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 9995a5: fld qword ptr [esp + 0x40] */
  { double v = F64((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 9995a9: fld qword ptr [esp + 0x20] */
  { double v = F64((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 9995ad: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 9995af: fsub qword ptr [esp + 0x30] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x30u)));
/* 9995b3: mov dword ptr [esp + 0x30], edi */
  W32((uint32_t)(esp + 0x30u), edi);
/* 9995b7: mov dword ptr [esp + 0x34], ebx */
  W32((uint32_t)(esp + 0x34u), ebx);
/* 9995bb: fst qword ptr [esp + 0x28] */
  WF64((uint32_t)(esp + 0x28u), ST0);
/* 9995bf: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 9995c2: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 9995c5: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9995c7: fmul qword ptr [esp + 0x40] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x40u)));
/* 9995cb: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9995cd: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 9995cf: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9995d1: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 9995d5: fmul qword ptr [esp + 0x40] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x40u)));
/* 9995d9: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9995db: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 9995dd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9995df: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 9995e1: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 9995e3: fsub qword ptr [esp + 0x18] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x18u)));
/* 9995e7: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 9995ea: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 9995ed: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9995ef: fstp dword ptr [ecx + 0xc] */
  WF32((uint32_t)(ecx + 0xcu), ST0); FPOP();
/* 9995f2: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 9995f4: fadd qword ptr [esp + 0x18] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x18u)));
/* 9995f8: mov edi, dword ptr [esp + 0x58] */
  edi = R32((uint32_t)(esp + 0x58u));
/* 9995fc: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 9995fe: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 999601: mov ebx, dword ptr [esp + 0x5c] */
  ebx = R32((uint32_t)(esp + 0x5cu));
/* 999605: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 999608: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 99960a: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 99960d: mov dword ptr [esp + 0x58], edi */
  W32((uint32_t)(esp + 0x58u), edi);
/* 999611: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 999615: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 999618: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 99961b: mov dword ptr [esp + 0x5c], ebx */
  W32((uint32_t)(esp + 0x5cu), ebx);
/* 99961f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 999621: mov ebx, dword ptr [esp + 0x3c] */
  ebx = R32((uint32_t)(esp + 0x3cu));
/* 999625: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 999628: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 99962b: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 99962e: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 999631: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 999633: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 999637: jb 0x999401 */
  if (cf) goto L_999401;
L_99963d: /* 99963d: mov esi, dword ptr [esp + 0x58] */
  esi = R32((uint32_t)(esp + 0x58u));
/* 999641: mov edx, dword ptr [esp + 0x60] */
  edx = R32((uint32_t)(esp + 0x60u));
/* 999645: mov ecx, dword ptr [esp + 0x5c] */
  ecx = R32((uint32_t)(esp + 0x5cu));
/* 999649: mov edi, dword ptr [ebp + 0x1c] */
  edi = R32((uint32_t)(ebp + 0x1cu));
L_99964c: /* 99964c: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 99964e: jae 0x999709 */
  if (!cf) goto L_999709;
L_999654: /* 999654: lea eax, [edi + ecx*4] */
  eax = (uint32_t)(edi + ecx*4);
/* 999657: lea edx, [ebx + ecx] */
  edx = (uint32_t)(ebx + ecx);
/* 99965a: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 99965d: lea edx, [edi + edx*4] */
  edx = (uint32_t)(edi + edx*4);
/* 999660: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 999662: mov edi, ebx */
  edi = ebx;
/* 999664: sub edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 999666: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 99966a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_999670: /* 999670: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 999672: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 999676: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 999678: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* 99967c: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 99967f: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 999682: fsub qword ptr [esp + 0x50] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x50u)));
/* 999686: fstp qword ptr [esp + 0x40] */
  WF64((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 99968a: fstp qword ptr [esp + 0x50] */
  WF64((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 99968e: fld qword ptr [esp + 0x40] */
  { double v = F64((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 999692: fld qword ptr [esp + 0x28] */
  { double v = F64((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 999696: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 999698: fsub qword ptr [esp + 0x30] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x30u)));
/* 99969c: mov dword ptr [esp + 0x30], esi */
  W32((uint32_t)(esp + 0x30u), esi);
/* 9996a0: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 9996a4: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 9996a5: fst qword ptr [esp + 0x28] */
  WF64((uint32_t)(esp + 0x28u), ST0);
/* 9996a9: mov dword ptr [esp + 0x34], edi */
  W32((uint32_t)(esp + 0x34u), edi);
/* 9996ad: fld dword ptr [ecx + edx - 4] */
  { double v = F32((uint32_t)(ecx + edx + 0xfffffffcu)); FPUSH(v); }
/* 9996b1: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 9996b5: fld dword ptr [edx - 4] */
  { double v = F32((uint32_t)(edx + 0xfffffffcu)); FPUSH(v); }
/* 9996b8: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9996ba: fmul qword ptr [esp + 0x40] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x40u)));
/* 9996be: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9996c0: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 9996c2: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9996c4: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 9996c8: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9996ca: fmulp st(2) */
  STI(2) = STI(2) * ST0;
  FPOP();
/* 9996cc: fmul qword ptr [esp + 0x40] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x40u)));
/* 9996d0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9996d2: fld dword ptr [ecx + eax - 4] */
  { double v = F32((uint32_t)(ecx + eax + 0xfffffffcu)); FPUSH(v); }
/* 9996d6: fsub qword ptr [esp + 0x18] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x18u)));
/* 9996da: fstp dword ptr [ecx + edx - 4] */
  WF32((uint32_t)(ecx + edx + 0xfffffffcu), ST0); FPOP();
/* 9996de: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* 9996e1: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9996e3: fstp dword ptr [edx - 4] */
  WF32((uint32_t)(edx + 0xfffffffcu), ST0); FPOP();
/* 9996e6: fld dword ptr [ecx + eax - 4] */
  { double v = F32((uint32_t)(ecx + eax + 0xfffffffcu)); FPUSH(v); }
/* 9996ea: fadd qword ptr [esp + 0x18] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x18u)));
/* 9996ee: fstp dword ptr [ecx + eax - 4] */
  WF32((uint32_t)(ecx + eax + 0xfffffffcu), ST0); FPOP();
/* 9996f2: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* 9996f5: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 9996f7: fstp dword ptr [eax - 4] */
  WF32((uint32_t)(eax + 0xfffffffcu), ST0); FPOP();
/* 9996fa: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9996fc: jne 0x999670 */
  if (!zf) goto L_999670;
L_999702: /* 999702: mov edi, dword ptr [ebp + 0x1c] */
  edi = R32((uint32_t)(ebp + 0x1cu));
/* 999705: mov edx, dword ptr [esp + 0x60] */
  edx = R32((uint32_t)(esp + 0x60u));
L_999709: /* 999709: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 99970d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99970f: mov ecx, dword ptr [esp + 0x64] */
  ecx = R32((uint32_t)(esp + 0x64u));
/* 999713: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 999715: lea eax, [edx*4] */
  eax = (uint32_t)(edx*4);
/* 99971c: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 999720: mov esi, dword ptr [esp + 0x70] */
  esi = R32((uint32_t)(esp + 0x70u));
/* 999724: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 999726: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 999728: mov dword ptr [esp + 0x64], ecx */
  W32((uint32_t)(esp + 0x64u), ecx);
/* 99972c: mov ecx, dword ptr [esp + 0x6c] */
  ecx = R32((uint32_t)(esp + 0x6cu));
/* 999730: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 999732: mov dword ptr [esp + 0x70], esi */
  W32((uint32_t)(esp + 0x70u), esi);
/* 999736: mov esi, dword ptr [esp + 0x68] */
  esi = R32((uint32_t)(esp + 0x68u));
/* 99973a: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 99973c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 99973f: mov dword ptr [esp + 0x6c], ecx */
  W32((uint32_t)(esp + 0x6cu), ecx);
/* 999743: cmp dword ptr [esp + 0x10], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 999747: mov dword ptr [esp + 0x68], esi */
  W32((uint32_t)(esp + 0x68u), esi);
/* 99974b: jb 0x999380 */
  if (cf) goto L_999380;
L_999751: /* 999751: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 999754: mov esi, eax */
  esi = eax;
L_999756: /* 999756: mov ebx, edx */
  ebx = edx;
/* 999758: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99975a: shl edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 99975c: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 99975e: mov dword ptr [esp + 0x3c], ebx */
  W32((uint32_t)(esp + 0x3cu), ebx);
/* 999762: mov dword ptr [esp + 0x60], edx */
  W32((uint32_t)(esp + 0x60u), edx);
/* 999766: jbe 0x9992f6 */
  if ((cf | zf)) goto L_9992f6;
L_99976c: /* 99976c: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 99976f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 999771: je 0x9997aa */
  if (zf) goto L_9997aa;
L_999773: /* 999773: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  cf = 0;
  of = 0;
  }
/* 999775: mov dword ptr [esp + 0x3c], esi */
  W32((uint32_t)(esp + 0x3cu), esi);
/* 999779: fild dword ptr [esp + 0x3c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 99977d: jge 0x999785 */
  if ((sf == of)) goto L_999785;
L_99977f: /* 99977f: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_999785: /* 999785: jbe 0x9997a8 */
  if ((cf | zf)) goto L_9997a8;
L_999787: /* 999787: fdivr qword ptr [0xa0da58] */
  ST0 = (F64((uint32_t)(0xa0da58u))) / ST0;
/* 99978d: mov eax, ecx */
  eax = ecx;
/* 99978f: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
L_999791: /* 999791: fld dword ptr [eax + edi] */
  { double v = F32((uint32_t)(eax + edi)); FPUSH(v); }
/* 999794: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 999797: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 999798: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 99979a: fstp dword ptr [eax + edi - 4] */
  WF32((uint32_t)(eax + edi + 0xfffffffcu), ST0); FPOP();
/* 99979e: fld dword ptr [edi - 4] */
  { double v = F32((uint32_t)(edi + 0xfffffffcu)); FPUSH(v); }
/* 9997a1: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9997a3: fstp dword ptr [edi - 4] */
  WF32((uint32_t)(edi + 0xfffffffcu), ST0); FPOP();
/* 9997a6: jne 0x999791 */
  if (!zf) goto L_999791;
L_9997a8: /* 9997a8: fstp st(0) */
  STI(0) = ST0; FPOP();
L_9997aa: /* 9997aa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9997ab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9997ac: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9997ad: mov esp, ebp */
  esp = ebp;
/* 9997af: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9997b0: ret  */
  esp += 4; SPILL(); return;
}

void f_9997c0(void) {
  LOAD_REGS();
L_9997c0: /* 9997c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9997c1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 9997c5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9997c7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9997c8: mov edi, ecx */
  edi = ecx;
/* 9997ca: je 0x9997f3 */
  if (zf) goto L_9997f3;
L_9997cc: /* 9997cc: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 9997ce: sub eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 9997d1: je 0x9997ea */
  if (zf) goto L_9997ea;
L_9997d3: /* 9997d3: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 9997d4: jne 0x9997f3 */
  if (!zf) goto L_9997f3;
L_9997d6: /* 9997d6: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9997d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9997da: call 0x9997c0 */
  esp -= 4; W32(esp, 0x9997dfu); SPILL(); f_9997c0(); if (g_unwind) return; RELOAD();
/* 9997df: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 9997e2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9997e3: mov ecx, edi */
  ecx = edi;
/* 9997e5: call 0x9997c0 */
  esp -= 4; W32(esp, 0x9997eau); SPILL(); f_9997c0(); if (g_unwind) return; RELOAD();
L_9997ea: /* 9997ea: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9997eb: call 0x99cf5a */
  esp -= 4; W32(esp, 0x9997f0u); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 9997f0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9997f3: /* 9997f3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9997f4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9997f5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_999800(void) {
  LOAD_REGS();
L_999800: /* 999800: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 999802: call 0x99cf4e */
  esp -= 4; W32(esp, 0x999807u); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 999807: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 99980b: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 99980f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 999812: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 999818: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 99981b: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 99981e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_999830(void) {
  LOAD_REGS();
L_999830: /* 999830: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 999834: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 999837: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 999838: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 99983c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99983d: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 999841: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 999844: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 999845: movzx edi, byte ptr [eax + ebx] */
  edi = (uint32_t)(R8((uint32_t)(eax + ebx)));
/* 999849: mov eax, edi */
  eax = edi;
/* 99984b: jle 0x99986b */
  if ((zf || sf != of)) goto L_99986b;
L_99984d: /* 99984d: lea edx, [ecx + 0xc] */
  edx = (uint32_t)(ecx + 0xcu);
/* 999850: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
L_999851: /* 999851: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 999853: movzx ecx, byte ptr [ebx + ecx] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + ecx)));
/* 999857: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 999859: jle 0x99985f */
  if ((zf || sf != of)) goto L_99985f;
L_99985b: /* 99985b: mov eax, ecx */
  eax = ecx;
/* 99985d: jmp 0x999865 */
  goto L_999865;
L_99985f: /* 99985f: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 999861: jge 0x999865 */
  if ((sf == of)) goto L_999865;
L_999863: /* 999863: mov edi, ecx */
  edi = ecx;
L_999865: /* 999865: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 999868: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 999869: jne 0x999851 */
  if (!zf) goto L_999851;
L_99986b: /* 99986b: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 99986d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 99986e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99986f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 999870: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_999880(void) {
  LOAD_REGS();
L_999880: /* 999880: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 999884: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 999887: mov ecx, dword ptr [0xcf7788] */
  ecx = R32((uint32_t)(0xcf7788u));
/* 99988d: movzx eax, byte ptr [edx + ecx] */
  eax = (uint32_t)(R8((uint32_t)(edx + ecx)));
/* 999891: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 999895: mov edx, dword ptr [edx + 4] */
  edx = R32((uint32_t)(edx + 0x4u));
/* 999898: movzx ecx, byte ptr [edx + ecx] */
  ecx = (uint32_t)(R8((uint32_t)(edx + ecx)));
/* 99989c: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 99989e: ret  */
  esp += 4; SPILL(); return;
}

void f_9998a0(void) {
  LOAD_REGS();
L_9998a0: /* 9998a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9998a1: mov ebp, dword ptr [esp + 8] */
  ebp = R32((uint32_t)(esp + 0x8u));
/* 9998a5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9998a6: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 9998aa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9998ab: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 9998af: push 0x999880 */
  { uint32_t v = 0x999880u; esp -= 4; W32(esp, v); }
/* 9998b4: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 9998b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9998b7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9998b8: mov dword ptr [0xcf7788], ebp */
  W32((uint32_t)(0xcf7788u), ebp);
/* 9998be: call 0x99cc90 */
  esp -= 4; W32(esp, 0x9998c3u); SPILL(); f_99cc90(); if (g_unwind) return; RELOAD();
/* 9998c3: mov eax, esi */
  eax = esi;
/* 9998c5: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 9998c6: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9998c8: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 9998ca: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9998cd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9998ce: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9998d0: jle 0x9998f4 */
  if ((zf || sf != of)) goto L_9998f4;
L_9998d2: /* 9998d2: lea ecx, [edi + eax*8 + 4] */
  ecx = (uint32_t)(edi + eax*8 + 0x4u);
/* 9998d6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
L_9998d7: /* 9998d7: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 9998d9: mov edx, dword ptr [ecx - 8] */
  edx = R32((uint32_t)(ecx + 0xfffffff8u));
/* 9998dc: mov bl, byte ptr [esi + ebp] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + ebp))) & 0xffu);
/* 9998df: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 9998e0: cmp bl, byte ptr [edx + ebp] */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(edx + ebp)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 9998e3: jne 0x9998ed */
  if (!zf) goto L_9998ed;
L_9998e5: /* 9998e5: sub ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 9998e8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9998ea: jg 0x9998d7 */
  if ((!zf && sf == of)) goto L_9998d7;
L_9998ec: /* 9998ec: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
L_9998ed: /* 9998ed: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9998ee: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9998ef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9998f0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9998f1: ret 0xc */
  esp += 16; SPILL(); return;
L_9998f4: /* 9998f4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9998f5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9998f6: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 9998f7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9998f8: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_999900(void) {
  LOAD_REGS();
L_999900: /* 999900: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 999902: call 0x99cf4e */
  esp -= 4; W32(esp, 0x999907u); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 999907: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 99990b: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 99990f: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 999912: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 999916: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 999919: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 99991d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 999920: mov dword ptr [eax], 1 */
  W32((uint32_t)(eax), 0x1u);
/* 999926: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 999929: mov dword ptr [eax + 0x10], edx */
  W32((uint32_t)(eax + 0x10u), edx);
/* 99992c: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_999930(void) {
  LOAD_REGS();
L_999930: /* 999930: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 999934: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 999938: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 99993c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 99993d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 99993f: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 999942: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_999950(void) {
  LOAD_REGS();
L_999950: /* 999950: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 999954: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 999958: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 99995c: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 99995e: lea edx, [edx + eax*8 + 8] */
  edx = (uint32_t)(edx + eax*8 + 0x8u);
/* 999962: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 999966: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 999967: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 999969: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 99996c: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_999970(void) {
  LOAD_REGS();
L_999970: /* 999970: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 999974: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 999978: movzx eax, byte ptr [ecx + eax] */
  eax = (uint32_t)(R8((uint32_t)(ecx + eax)));
/* 99997c: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 999980: movzx ecx, byte ptr [ecx + edx] */
  ecx = (uint32_t)(R8((uint32_t)(ecx + edx)));
/* 999984: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 999986: imul eax, eax */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(eax);
  eax = (uint32_t)r;
  }
/* 999989: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_999990(void) {
  LOAD_REGS();
L_999990: /* 999990: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 999991: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 999992: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 999996: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 999997: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 999998: mov edi, ecx */
  edi = ecx;
/* 99999a: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 99999d: mov cl, byte ptr [ebp] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp))) & 0xffu);
/* 9999a0: cmp cl, byte ptr [eax] */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(eax)));
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* 9999a2: jae 0x9999b3 */
  if (!cf) goto L_9999b3;
L_9999a4: /* 9999a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9999a5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9999a6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9999a8: mov ecx, edi */
  ecx = edi;
/* 9999aa: call 0x999970 */
  esp -= 4; W32(esp, 0x9999afu); SPILL(); f_999970(); if (g_unwind) return; RELOAD();
/* 9999af: mov ebx, eax */
  ebx = eax;
/* 9999b1: jmp 0x9999cb */
  goto L_9999cb;
L_9999b3: /* 9999b3: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 9999b6: cmp cl, byte ptr [eax] */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(eax)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 9999b8: jbe 0x9999c9 */
  if ((cf | zf)) goto L_9999c9;
L_9999ba: /* 9999ba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9999bb: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9999bc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9999be: mov ecx, edi */
  ecx = edi;
/* 9999c0: call 0x999970 */
  esp -= 4; W32(esp, 0x9999c5u); SPILL(); f_999970(); if (g_unwind) return; RELOAD();
/* 9999c5: mov ebx, eax */
  ebx = eax;
/* 9999c7: jmp 0x9999cb */
  goto L_9999cb;
L_9999c9: /* 9999c9: xor ebx, ebx */
  ebx = 0;
L_9999cb: /* 9999cb: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 9999ce: xor ecx, ecx */
  ecx = 0;
/* 9999d0: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9999d2: setl cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((sf != of)) ? 1 : 0) & 0xffu);
/* 9999d5: mov esi, 1 */
  esi = 0x1u;
/* 9999da: mov eax, ecx */
  eax = ecx;
/* 9999dc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9999de: je 0x999a12 */
  if (zf) goto L_999a12;
L_9999e0: /* 9999e0: cmp esi, dword ptr [edi] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9999e2: jge 0x999a12 */
  if ((sf == of)) goto L_999a12;
L_9999e4: /* 9999e4: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 9999e7: mov cl, byte ptr [esi + ebp] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + ebp))) & 0xffu);
/* 9999ea: cmp cl, byte ptr [eax + esi] */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(eax + esi)));
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* 9999ed: jb 0x9999f7 */
  if (cf) goto L_9999f7;
L_9999ef: /* 9999ef: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 9999f2: cmp cl, byte ptr [eax + esi] */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(eax + esi)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 9999f5: jbe 0x999a03 */
  if ((cf | zf)) goto L_999a03;
L_9999f7: /* 9999f7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9999f8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9999f9: mov ecx, edi */
  ecx = edi;
/* 9999fb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9999fc: call 0x999970 */
  esp -= 4; W32(esp, 0x999a01u); SPILL(); f_999970(); if (g_unwind) return; RELOAD();
/* 999a01: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_999a03: /* 999a03: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 999a06: xor eax, eax */
  eax = 0;
/* 999a08: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 999a09: cmp ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 999a0b: setl al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(((sf != of)) ? 1 : 0) & 0xffu);
/* 999a0e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 999a10: jne 0x9999e0 */
  if (!zf) goto L_9999e0;
L_999a12: /* 999a12: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 999a13: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 999a14: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 999a15: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 999a16: ret 4 */
  esp += 8; SPILL(); return;
}

void f_999a20(void) {
  LOAD_REGS();
L_999a20: /* 999a20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 999a24: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 999a25: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 999a26: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 999a2a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 999a2b: mov esi, ecx */
  esi = ecx;
/* 999a2d: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 999a2f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_999a30: /* 999a30: mov ecx, ebx */
  ecx = ebx;
/* 999a32: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 999a33: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 999a35: je 0x999a65 */
  if (zf) goto L_999a65;
L_999a37: /* 999a37: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* 999a3a: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 999a3d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 999a3e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 999a3f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 999a40: mov ecx, esi */
  ecx = esi;
/* 999a42: call 0x999970 */
  esp -= 4; W32(esp, 0x999a47u); SPILL(); f_999970(); if (g_unwind) return; RELOAD();
/* 999a47: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 999a49: jle 0x999a63 */
  if ((zf || sf != of)) goto L_999a63;
L_999a4b: /* 999a4b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 999a4e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 999a4f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 999a50: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 999a51: mov ecx, esi */
  ecx = esi;
/* 999a53: call 0x999970 */
  esp -= 4; W32(esp, 0x999a58u); SPILL(); f_999970(); if (g_unwind) return; RELOAD();
/* 999a58: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 999a5a: jle 0x999a63 */
  if ((zf || sf != of)) goto L_999a63;
L_999a5c: /* 999a5c: mov eax, 1 */
  eax = 0x1u;
/* 999a61: jmp 0x999a30 */
  goto L_999a30;
L_999a63: /* 999a63: xor eax, eax */
  eax = 0;
L_999a65: /* 999a65: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 999a66: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 999a67: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 999a68: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 999a69: ret 4 */
  esp += 8; SPILL(); return;
}

void f_999a70(void) {
  LOAD_REGS();
L_999a70: /* 999a70: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 999a71: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 999a75: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 999a76: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 999a77: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 999a7b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 999a7c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 999a7d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 999a7e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 999a7f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 999a81: mov edi, ecx */
  edi = ecx;
/* 999a83: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 999a8b: call 0x999830 */
  esp -= 4; W32(esp, 0x999a90u); SPILL(); f_999830(); if (g_unwind) return; RELOAD();
/* 999a90: mov ebx, eax */
  ebx = eax;
/* 999a92: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 999a94: mov esi, 1 */
  esi = 0x1u;
/* 999a99: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 999a9b: jle 0x999abf */
  if ((zf || sf != of)) goto L_999abf;
L_999a9d: /* 999a9d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_999aa0: /* 999aa0: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 999aa4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 999aa5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 999aa6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 999aa7: mov ecx, edi */
  ecx = edi;
/* 999aa9: call 0x999830 */
  esp -= 4; W32(esp, 0x999aaeu); SPILL(); f_999830(); if (g_unwind) return; RELOAD();
/* 999aae: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 999ab0: jle 0x999ab8 */
  if ((zf || sf != of)) goto L_999ab8;
L_999ab2: /* 999ab2: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 999ab6: mov ebx, eax */
  ebx = eax;
L_999ab8: /* 999ab8: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 999aba: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 999abb: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 999abd: jl 0x999aa0 */
  if ((sf != of)) goto L_999aa0;
L_999abf: /* 999abf: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 999ac3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 999ac4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 999ac5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 999ac6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 999ac7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 999ac8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_999ad0(void) {
  LOAD_REGS();
L_999ad0: /* 999ad0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 999ad4: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 999ad7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 999ad8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 999ad9: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 999add: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 999ade: mov esi, ecx */
  esi = ecx;
/* 999ae0: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 999ae3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 999ae4: jne 0x999b94 */
  if (!zf) goto L_999b94;
L_999aea: /* 999aea: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 999aed: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 999af1: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 999af4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 999af6: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 999afe: jle 0x999c61 */
  if ((zf || sf != of)) goto L_999c61;
L_999b04: /* 999b04: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 999b08: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 999b0b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 999b0c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 999b0d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 999b0f: mov ecx, esi */
  ecx = esi;
/* 999b11: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 999b15: call 0x999970 */
  esp -= 4; W32(esp, 0x999b1au); SPILL(); f_999970(); if (g_unwind) return; RELOAD();
/* 999b1a: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 999b1d: mov edi, eax */
  edi = eax;
/* 999b1f: xor eax, eax */
  eax = 0;
/* 999b21: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 999b23: setl al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(((sf != of)) ? 1 : 0) & 0xffu);
/* 999b26: mov ebx, 1 */
  ebx = 0x1u;
/* 999b2b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 999b2d: je 0x999b63 */
  if (zf) goto L_999b63;
L_999b2f: /* 999b2f: nop  */
L_999b30: /* 999b30: cmp ebx, dword ptr [esi] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 999b32: jge 0x999b55 */
  if ((sf == of)) goto L_999b55;
L_999b34: /* 999b34: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 999b38: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 999b39: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 999b3a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 999b3b: mov ecx, esi */
  ecx = esi;
/* 999b3d: call 0x999970 */
  esp -= 4; W32(esp, 0x999b42u); SPILL(); f_999970(); if (g_unwind) return; RELOAD();
/* 999b42: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 999b45: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 999b47: xor eax, eax */
  eax = 0;
/* 999b49: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 999b4a: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 999b4c: setl al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(((sf != of)) ? 1 : 0) & 0xffu);
/* 999b4f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 999b51: jne 0x999b30 */
  if (!zf) goto L_999b30;
L_999b53: /* 999b53: jmp 0x999b63 */
  goto L_999b63;
L_999b55: /* 999b55: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 999b57: je 0x999b63 */
  if (zf) goto L_999b63;
L_999b59: /* 999b59: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 999b5d: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 999b60: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
L_999b63: /* 999b63: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 999b67: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 999b6b: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 999b6e: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 999b72: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 999b76: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 999b79: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 999b7a: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 999b7c: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 999b80: jl 0x999b04 */
  if ((sf != of)) goto L_999b04;
L_999b82: /* 999b82: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 999b83: mov ecx, esi */
  ecx = esi;
/* 999b85: call 0x999a20 */
  esp -= 4; W32(esp, 0x999b8au); SPILL(); f_999a20(); if (g_unwind) return; RELOAD();
/* 999b8a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 999b8b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 999b8c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 999b8d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 999b8e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 999b91: ret 8 */
  esp += 12; SPILL(); return;
L_999b94: /* 999b94: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 999b97: movzx ecx, byte ptr [edi + ebp] */
  ecx = (uint32_t)(R8((uint32_t)(edi + ebp)));
/* 999b9b: mov ebx, dword ptr [eax + 8] */
  ebx = R32((uint32_t)(eax + 0x8u));
/* 999b9e: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 999ba0: jg 0x999c01 */
  if ((!zf && sf == of)) goto L_999c01;
L_999ba2: /* 999ba2: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 999ba5: lea ecx, [edx + edi] */
  ecx = (uint32_t)(edx + edi);
/* 999ba8: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 999baa: mov byte ptr [ecx], bl */
  W8((uint32_t)(ecx), (ebx & 0xffu));
/* 999bac: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 999baf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 999bb0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 999bb1: mov ecx, esi */
  ecx = esi;
/* 999bb3: mov byte ptr [esp + 0x24], dl */
  W8((uint32_t)(esp + 0x24u), (edx & 0xffu));
/* 999bb7: call 0x999ad0 */
  esp -= 4; W32(esp, 0x999bbcu); SPILL(); f_999ad0(); if (g_unwind) return; RELOAD();
/* 999bbc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 999bbe: jne 0x999c69 */
  if (!zf) goto L_999c69;
L_999bc4: /* 999bc4: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 999bc7: mov dl, byte ptr [esp + 0x1c] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x1cu))) & 0xffu);
/* 999bcb: mov byte ptr [edi + ecx], dl */
  W8((uint32_t)(edi + ecx), (edx & 0xffu));
/* 999bce: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 999bd1: mov cl, byte ptr [eax + edi] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + edi))) & 0xffu);
/* 999bd4: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 999bd6: mov byte ptr [esp + 0x1c], cl */
  W8((uint32_t)(esp + 0x1cu), (ecx & 0xffu));
/* 999bda: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 999bdb: mov ecx, esi */
  ecx = esi;
/* 999bdd: mov byte ptr [eax], bl */
  W8((uint32_t)(eax), (ebx & 0xffu));
/* 999bdf: call 0x999990 */
  esp -= 4; W32(esp, 0x999be4u); SPILL(); f_999990(); if (g_unwind) return; RELOAD();
/* 999be4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 999be6: je 0x999bfc */
  if (zf) goto L_999bfc;
L_999be8: /* 999be8: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 999bec: mov eax, dword ptr [edx + 0x10] */
  eax = R32((uint32_t)(edx + 0x10u));
/* 999bef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 999bf0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 999bf1: mov ecx, esi */
  ecx = esi;
/* 999bf3: call 0x999ad0 */
  esp -= 4; W32(esp, 0x999bf8u); SPILL(); f_999ad0(); if (g_unwind) return; RELOAD();
/* 999bf8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 999bfa: jne 0x999c69 */
  if (!zf) goto L_999c69;
L_999bfc: /* 999bfc: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 999bff: jmp 0x999c5a */
  goto L_999c5a;
L_999c01: /* 999c01: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 999c04: mov dl, byte ptr [ecx + edi] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + edi))) & 0xffu);
/* 999c07: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 999c09: mov byte ptr [ecx], bl */
  W8((uint32_t)(ecx), (ebx & 0xffu));
/* 999c0b: mov eax, dword ptr [eax + 0x10] */
  eax = R32((uint32_t)(eax + 0x10u));
/* 999c0e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 999c0f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 999c10: mov ecx, esi */
  ecx = esi;
/* 999c12: mov byte ptr [esp + 0x24], dl */
  W8((uint32_t)(esp + 0x24u), (edx & 0xffu));
/* 999c16: call 0x999ad0 */
  esp -= 4; W32(esp, 0x999c1bu); SPILL(); f_999ad0(); if (g_unwind) return; RELOAD();
/* 999c1b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 999c1d: jne 0x999c69 */
  if (!zf) goto L_999c69;
L_999c1f: /* 999c1f: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 999c22: mov dl, byte ptr [esp + 0x1c] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x1cu))) & 0xffu);
/* 999c26: mov byte ptr [edi + ecx], dl */
  W8((uint32_t)(edi + ecx), (edx & 0xffu));
/* 999c29: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 999c2c: mov cl, byte ptr [eax + edi] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + edi))) & 0xffu);
/* 999c2f: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 999c31: mov byte ptr [esp + 0x1c], cl */
  W8((uint32_t)(esp + 0x1cu), (ecx & 0xffu));
/* 999c35: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 999c36: mov ecx, esi */
  ecx = esi;
/* 999c38: mov byte ptr [eax], bl */
  W8((uint32_t)(eax), (ebx & 0xffu));
/* 999c3a: call 0x999990 */
  esp -= 4; W32(esp, 0x999c3fu); SPILL(); f_999990(); if (g_unwind) return; RELOAD();
/* 999c3f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 999c41: je 0x999c57 */
  if (zf) goto L_999c57;
L_999c43: /* 999c43: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 999c47: mov eax, dword ptr [edx + 0xc] */
  eax = R32((uint32_t)(edx + 0xcu));
/* 999c4a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 999c4b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 999c4c: mov ecx, esi */
  ecx = esi;
/* 999c4e: call 0x999ad0 */
  esp -= 4; W32(esp, 0x999c53u); SPILL(); f_999ad0(); if (g_unwind) return; RELOAD();
/* 999c53: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 999c55: jne 0x999c69 */
  if (!zf) goto L_999c69;
L_999c57: /* 999c57: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
L_999c5a: /* 999c5a: mov dl, byte ptr [esp + 0x1c] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x1cu))) & 0xffu);
/* 999c5e: mov byte ptr [edi + ecx], dl */
  W8((uint32_t)(edi + ecx), (edx & 0xffu));
L_999c61: /* 999c61: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 999c62: mov ecx, esi */
  ecx = esi;
/* 999c64: call 0x999a20 */
  esp -= 4; W32(esp, 0x999c69u); SPILL(); f_999a20(); if (g_unwind) return; RELOAD();
L_999c69: /* 999c69: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 999c6a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 999c6b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 999c6c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 999c6d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 999c70: ret 8 */
  esp += 12; SPILL(); return;
}

void f_999c80(void) {
  LOAD_REGS();
L_999c80: /* 999c80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 999c81: mov esi, ecx */
  esi = ecx;
/* 999c83: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 999c85: xor eax, eax */
  eax = 0;
/* 999c87: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 999c89: mov dword ptr [esi + 8], 0 */
  W32((uint32_t)(esi + 0x8u), 0x0u);
/* 999c90: mov dword ptr [esi + 4], 0x7fffffff */
  W32((uint32_t)(esi + 0x4u), 0x7fffffffu);
/* 999c97: jle 0x999cb5 */
  if ((zf || sf != of)) goto L_999cb5;
L_999c99: /* 999c99: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_999ca0: /* 999ca0: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 999ca3: mov byte ptr [eax + ecx], 0xff */
  W8((uint32_t)(eax + ecx), 0xffu);
/* 999ca7: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* 999caa: mov byte ptr [eax + edx], 0 */
  W8((uint32_t)(eax + edx), 0x0u);
/* 999cae: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 999cb0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 999cb1: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 999cb3: jl 0x999ca0 */
  if ((sf != of)) goto L_999ca0;
L_999cb5: /* 999cb5: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 999cb9: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 999cbd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 999cbe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 999cbf: mov ecx, esi */
  ecx = esi;
/* 999cc1: call 0x999ad0 */
  esp -= 4; W32(esp, 0x999cc6u); SPILL(); f_999ad0(); if (g_unwind) return; RELOAD();
/* 999cc6: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 999cc9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 999cca: ret 8 */
  esp += 12; SPILL(); return;
}

void f_999cd0(void) {
  LOAD_REGS();
L_999cd0: /* 999cd0: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 999cd3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 999cd4: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 999cd8: cmp ebp, 8 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 999cdb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 999cdc: mov esi, ecx */
  esi = ecx;
/* 999cde: jg 0x999cf3 */
  if ((!zf && sf == of)) goto L_999cf3;
L_999ce0: /* 999ce0: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 999ce4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 999ce5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 999ce6: call 0x999800 */
  esp -= 4; W32(esp, 0x999cebu); SPILL(); f_999800(); if (g_unwind) return; RELOAD();
/* 999ceb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 999cec: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 999ced: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 999cf0: ret 8 */
  esp += 12; SPILL(); return;
L_999cf3: /* 999cf3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 999cf4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 999cf5: mov edi, dword ptr [esp + 0x30] */
  edi = R32((uint32_t)(esp + 0x30u));
/* 999cf9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 999cfa: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 999cfb: call 0x999a70 */
  esp -= 4; W32(esp, 0x999d00u); SPILL(); f_999a70(); if (g_unwind) return; RELOAD();
/* 999d00: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 999d01: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 999d02: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 999d03: mov ecx, esi */
  ecx = esi;
/* 999d05: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 999d09: call 0x9998a0 */
  esp -= 4; W32(esp, 0x999d0eu); SPILL(); f_9998a0(); if (g_unwind) return; RELOAD();
/* 999d0e: mov ebx, eax */
  ebx = eax;
/* 999d10: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 999d12: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 999d13: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 999d14: jge 0x999d27 */
  if ((sf == of)) goto L_999d27;
L_999d16: /* 999d16: mov ecx, esi */
  ecx = esi;
/* 999d18: call 0x999800 */
  esp -= 4; W32(esp, 0x999d1du); SPILL(); f_999800(); if (g_unwind) return; RELOAD();
/* 999d1d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 999d1e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 999d1f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 999d20: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 999d21: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 999d24: ret 8 */
  esp += 12; SPILL(); return;
L_999d27: /* 999d27: mov ecx, dword ptr [edi + ebx*8 + 4] */
  ecx = R32((uint32_t)(edi + ebx*8 + 0x4u));
/* 999d2b: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 999d2f: movzx eax, byte ptr [ecx + edx] */
  eax = (uint32_t)(R8((uint32_t)(ecx + edx)));
/* 999d33: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 999d34: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 999d38: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 999d39: mov ecx, esi */
  ecx = esi;
/* 999d3b: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 999d3f: call 0x999950 */
  esp -= 4; W32(esp, 0x999d44u); SPILL(); f_999950(); if (g_unwind) return; RELOAD();
/* 999d44: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 999d45: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 999d46: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 999d47: lea edx, [esp + 0x2c] */
  edx = (uint32_t)(esp + 0x2cu);
/* 999d4b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 999d4c: mov ecx, esi */
  ecx = esi;
/* 999d4e: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 999d52: call 0x999930 */
  esp -= 4; W32(esp, 0x999d57u); SPILL(); f_999930(); if (g_unwind) return; RELOAD();
/* 999d57: mov edi, eax */
  edi = eax;
/* 999d59: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 999d5d: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 999d60: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 999d62: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 999d63: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 999d64: mov ecx, esi */
  ecx = esi;
/* 999d66: call 0x999cd0 */
  esp -= 4; W32(esp, 0x999d6bu); SPILL(); f_999cd0(); if (g_unwind) return; RELOAD();
/* 999d6b: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 999d6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 999d6e: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 999d71: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 999d72: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 999d73: mov ecx, esi */
  ecx = esi;
/* 999d75: call 0x999cd0 */
  esp -= 4; W32(esp, 0x999d7au); SPILL(); f_999cd0(); if (g_unwind) return; RELOAD();
/* 999d7a: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 999d7e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 999d7f: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 999d83: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 999d84: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 999d85: mov ecx, esi */
  ecx = esi;
/* 999d87: call 0x999900 */
  esp -= 4; W32(esp, 0x999d8cu); SPILL(); f_999900(); if (g_unwind) return; RELOAD();
/* 999d8c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 999d8d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 999d8e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 999d8f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 999d90: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 999d93: ret 8 */
  esp += 12; SPILL(); return;
}

void f_999da0(void) {
  LOAD_REGS();
L_999da0: /* 999da0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 999da4: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 999da7: je 0x999db1 */
  if (zf) goto L_999db1;
L_999da9: /* 999da9: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 999dac: jae 0x999db1 */
  if (!cf) goto L_999db1;
L_999dae: /* 999dae: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 999db0: ret  */
  esp += 4; SPILL(); return;
L_999db1: /* 999db1: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 999db3: ret  */
  esp += 4; SPILL(); return;
}

void f_999dc0(void) {
  LOAD_REGS();
L_999dc0: /* 999dc0: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 999dc4: xor eax, eax */
  eax = 0;
/* 999dc6: test dl, 1 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 999dc9: jne 0x999ddf */
  if (!zf) goto L_999ddf;
L_999dcb: /* 999dcb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 999dcc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_999dd0: /* 999dd0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x80000000u;
  eax = r;
  }
/* 999dd1: mov esi, 1 */
  esi = 0x1u;
/* 999dd6: mov ecx, eax */
  ecx = eax;
/* 999dd8: shl esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
  }
/* 999dda: test edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 999ddc: je 0x999dd0 */
  if (zf) goto L_999dd0;
L_999dde: /* 999dde: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_999ddf: /* 999ddf: ret  */
  esp += 4; SPILL(); return;
}

void f_999de0(void) {
  LOAD_REGS();
L_999de0: /* 999de0: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 999de4: xor eax, eax */
  eax = 0;
/* 999de6: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 999de8: jbe 0x999dff */
  if ((cf | zf)) goto L_999dff;
L_999dea: /* 999dea: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 999dee: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 999def: nop  */
L_999df0: /* 999df0: mov esi, ecx */
  esi = ecx;
/* 999df2: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 999df4: and esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 999df7: or eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 999df9: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 999dfb: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 999dfc: jne 0x999df0 */
  if (!zf) goto L_999df0;
L_999dfe: /* 999dfe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_999dff: /* 999dff: ret  */
  esp += 4; SPILL(); return;
}

void f_999e00(void) {
  LOAD_REGS();
L_999e00: /* 999e00: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 999e04: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 999e08: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 999e0a: jb 0x999e13 */
  if (cf) goto L_999e13;
L_999e0c: /* 999e0c: fld qword ptr [0x9f7668] */
  { double v = F64((uint32_t)(0x9f7668u)); FPUSH(v); }
/* 999e12: ret  */
  esp += 4; SPILL(); return;
L_999e13: /* 999e13: mov edx, eax */
  edx = eax;
/* 999e15: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 999e17: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 999e19: ja 0x999e42 */
  if ((!cf && !zf)) goto L_999e42;
L_999e1b: /* 999e1b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 999e1d: mov dword ptr [esp + 8], ecx */
  W32((uint32_t)(esp + 0x8u), ecx);
/* 999e21: fild dword ptr [esp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 999e25: jge 0x999e2d */
  if ((sf == of)) goto L_999e2d;
L_999e27: /* 999e27: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_999e2d: /* 999e2d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 999e2f: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 999e33: fild dword ptr [esp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 999e37: jge 0x999e3f */
  if ((sf == of)) goto L_999e3f;
L_999e39: /* 999e39: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_999e3f: /* 999e3f: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 999e41: ret  */
  esp += 4; SPILL(); return;
L_999e42: /* 999e42: mov edx, eax */
  edx = eax;
/* 999e44: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 999e46: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 999e48: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
/* 999e4c: fild dword ptr [esp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 999e50: jge 0x999e58 */
  if ((sf == of)) goto L_999e58;
L_999e52: /* 999e52: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_999e58: /* 999e58: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 999e5a: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 999e5e: fild dword ptr [esp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 999e62: jge 0x999e6a */
  if ((sf == of)) goto L_999e6a;
L_999e64: /* 999e64: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_999e6a: /* 999e6a: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 999e6c: fchs  */
  ST0 = -ST0;
/* 999e6e: ret  */
  esp += 4; SPILL(); return;
}

void f_999e70(void) {
  LOAD_REGS();
L_999e70: /* 999e70: jmp dword ptr [0xcfaff4] */
  SPILL(); call_ind(R32(0xcfaff4u)); return; /* IFC23!??1CImmProject@@QAE@XZ */
}

void f_999e76(void) {
  LOAD_REGS();
L_999e76: /* 999e76: jmp dword ptr [0xcfaff0] */
  SPILL(); call_ind(R32(0xcfaff0u)); return; /* IFC23!?Start@CImmProject@@QAEHPBDKKPAVCImmDevice@@@Z */
}

void f_999e7c(void) {
  LOAD_REGS();
L_999e7c: /* 999e7c: jmp dword ptr [0xcfb004] */
  SPILL(); call_ind(R32(0xcfb004u)); return; /* IFC23!?Stop@CImmProject@@QAEHPBD@Z */
}

void f_999e82(void) {
  LOAD_REGS();
L_999e82: /* 999e82: jmp dword ptr [0xcfb000] */
  SPILL(); call_ind(R32(0xcfb000u)); return; /* IFC23!?CreateEffectByIndex@CImmProject@@QAEPAVCImmCompoundEffect@@HPAVCImmDevice@@K@Z */
}

void f_999e88(void) {
  LOAD_REGS();
L_999e88: /* 999e88: jmp dword ptr [0xcfaffc] */
  SPILL(); call_ind(R32(0xcfaffcu)); return; /* IFC23!?GetEffectType@CImmProject@@QAEKPBD@Z */
}

void f_999e8e(void) {
  LOAD_REGS();
L_999e8e: /* 999e8e: jmp dword ptr [0xcfaff8] */
  SPILL(); call_ind(R32(0xcfaff8u)); return; /* IFC23!?GetEffectName@CImmProject@@QAEPBDH@Z */
}

void f_999e94(void) {
  LOAD_REGS();
L_999e94: /* 999e94: jmp dword ptr [0xcfafe0] */
  SPILL(); call_ind(R32(0xcfafe0u)); return; /* IFC23!?GetNumEffects@CImmProject@@QAEHXZ */
}

void f_999e9a(void) {
  LOAD_REGS();
L_999e9a: /* 999e9a: jmp dword ptr [0xcfafe4] */
  SPILL(); call_ind(R32(0xcfafe4u)); return; /* IFC23!?OpenFile@CImmProject@@QAEHPBDPAVCImmDevice@@@Z */
}

void f_999ea0(void) {
  LOAD_REGS();
L_999ea0: /* 999ea0: jmp dword ptr [0xcfafe8] */
  SPILL(); call_ind(R32(0xcfafe8u)); return; /* IFC23!??0CImmProject@@QAE@XZ */
}

void f_999ea6(void) {
  LOAD_REGS();
L_999ea6: /* 999ea6: jmp dword ptr [0xcfafec] */
  SPILL(); call_ind(R32(0xcfafecu)); return; /* IFC23!?CreateDevice@CImmDevice@@SAPAV1@PAUHINSTANCE__@@PAUHWND__@@@Z */
}

void f_999eac(void) {
  LOAD_REGS();
L_999eac: /* 999eac: jmp dword ptr [0xcfb1c4] */
  SPILL(); call_ind(R32(0xcfb1c4u)); return; /* USER32!MessageBoxA */
}

void f_999eb2(void) {
  LOAD_REGS();
L_999eb2: /* 999eb2: jmp dword ptr [0xcfa150] */
  SPILL(); call_ind(R32(0xcfa150u)); return; /* ADVAPI32!RegCloseKey */
}

void f_999eb8(void) {
  LOAD_REGS();
L_999eb8: /* 999eb8: jmp dword ptr [0xcfa140] */
  SPILL(); call_ind(R32(0xcfa140u)); return; /* ADVAPI32!RegSetValueExA */
}

void f_999ebe(void) {
  LOAD_REGS();
L_999ebe: /* 999ebe: jmp dword ptr [0xcfa144] */
  SPILL(); call_ind(R32(0xcfa144u)); return; /* ADVAPI32!RegCreateKeyExA */
}

void f_999ec4(void) {
  LOAD_REGS();
L_999ec4: /* 999ec4: jmp dword ptr [0xcfa148] */
  SPILL(); call_ind(R32(0xcfa148u)); return; /* ADVAPI32!RegQueryValueExA */
}

void f_999eca(void) {
  LOAD_REGS();
L_999eca: /* 999eca: jmp dword ptr [0xcfa14c] */
  SPILL(); call_ind(R32(0xcfa14cu)); return; /* ADVAPI32!RegOpenKeyExA */
}

void f_999ed0(void) {
  LOAD_REGS();
L_999ed0: /* 999ed0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 999ed4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 999ed5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 999ed6: call 0x90b7e0 */
  esp -= 4; W32(esp, 0x999edbu); SPILL(); f_90b7e0(); if (g_unwind) return; RELOAD();
/* 999edb: mov esi, eax */
  esi = eax;
/* 999edd: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 999edf: jne 0x999ee5 */
  if (!zf) goto L_999ee5;
L_999ee1: /* 999ee1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 999ee2: ret 4 */
  esp += 8; SPILL(); return;
L_999ee5: /* 999ee5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 999ee6: mov dword ptr [esi + 0xb0], 0xd */
  W32((uint32_t)(esi + 0xb0u), 0xdu);
/* 999ef0: mov dword ptr [esi + 0x60], 0x922a40 */
  W32((uint32_t)(esi + 0x60u), 0x922a40u);
/* 999ef7: mov dword ptr [esi + 0x64], 6 */
  W32((uint32_t)(esi + 0x64u), 0x6u);
/* 999efe: mov dword ptr [esi + 0xa8], 0x99a1c0 */
  W32((uint32_t)(esi + 0xa8u), 0x99a1c0u);
/* 999f08: mov dword ptr [esi + 0xac], 0x90b9b0 */
  W32((uint32_t)(esi + 0xacu), 0x90b9b0u);
/* 999f12: call 0x999f20 */
  esp -= 4; W32(esp, 0x999f17u); SPILL(); f_999f20(); if (g_unwind) return; RELOAD();
/* 999f17: mov eax, esi */
  eax = esi;
/* 999f19: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 999f1a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_999f20(void) {
  LOAD_REGS();
L_999f20: /* 999f20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 999f21: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 999f22: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 999f26: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 999f27: call 0x999f90 */
  esp -= 4; W32(esp, 0x999f2cu); SPILL(); f_999f90(); if (g_unwind) return; RELOAD();
/* 999f2c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 999f2d: call 0x90bd20 */
  esp -= 4; W32(esp, 0x999f32u); SPILL(); f_90bd20(); if (g_unwind) return; RELOAD();
/* 999f32: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 999f34: je 0x999f42 */
  if (zf) goto L_999f42;
L_999f36: /* 999f36: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 999f37: call 0x999f90 */
  esp -= 4; W32(esp, 0x999f3cu); SPILL(); f_999f90(); if (g_unwind) return; RELOAD();
/* 999f3c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 999f3d: call 0x90bcb0 */
  esp -= 4; W32(esp, 0x999f42u); SPILL(); f_90bcb0(); if (g_unwind) return; RELOAD();
L_999f42: /* 999f42: xor ecx, ecx */
  ecx = 0;
/* 999f44: mov dword ptr [edi + 0xb8], ecx */
  W32((uint32_t)(edi + 0xb8u), ecx);
/* 999f4a: mov dword ptr [edi + 0xb4], ecx */
  W32((uint32_t)(edi + 0xb4u), ecx);
/* 999f50: lea eax, [edi + 0x16c] */
  eax = (uint32_t)(edi + 0x16cu);
/* 999f56: mov edx, 3 */
  edx = 0x3u;
/* 999f5b: mov esi, 0x7f7fffff */
  esi = 0x7f7fffffu;
L_999f60: /* 999f60: mov dword ptr [eax - 0xc], esi */
  W32((uint32_t)(eax + 0xfffffff4u), esi);
/* 999f63: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 999f65: mov dword ptr [eax + 0xc], esi */
  W32((uint32_t)(eax + 0xcu), esi);
/* 999f68: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 999f6b: mov dword ptr [eax + 0x24], ecx */
  W32((uint32_t)(eax + 0x24u), ecx);
/* 999f6e: mov dword ptr [eax + 0x30], ecx */
  W32((uint32_t)(eax + 0x30u), ecx);
/* 999f71: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 999f74: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 999f75: jne 0x999f60 */
  if (!zf) goto L_999f60;
L_999f77: /* 999f77: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 999f78: call 0x999f90 */
  esp -= 4; W32(esp, 0x999f7du); SPILL(); f_999f90(); if (g_unwind) return; RELOAD();
/* 999f7d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 999f7e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 999f7f: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 999f83: jmp 0x90b820 */
  SPILL(); f_90b820(); return;
}

void f_999f90(void) {
  LOAD_REGS();
L_999f90: /* 999f90: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 999f94: ret 4 */
  esp += 8; SPILL(); return;
}

void f_999fa0(void) {
  LOAD_REGS();
L_999fa0: /* 999fa0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 999fa4: mov edx, dword ptr [eax + 0xb0] */
  edx = R32((uint32_t)(eax + 0xb0u));
/* 999faa: xor ecx, ecx */
  ecx = 0;
/* 999fac: cmp edx, 0xd */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 999faf: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 999fb2: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 999fb3: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 999fb5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_999fc0(void) {
  LOAD_REGS();
L_999fc0: /* 999fc0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 999fc4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 999fc6: jl 0x999fdb */
  if ((sf != of)) goto L_999fdb;
L_999fc8: /* 999fc8: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 999fcb: jg 0x999fdb */
  if ((!zf && sf == of)) goto L_999fdb;
L_999fcd: /* 999fcd: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 999fd1: fld dword ptr [ecx + eax*4 + 0x160] */
  { double v = F32((uint32_t)(ecx + eax*4 + 0x160u)); FPUSH(v); }
/* 999fd8: ret 8 */
  esp += 12; SPILL(); return;
L_999fdb: /* 999fdb: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 999fe1: ret 8 */
  esp += 12; SPILL(); return;
}

void f_999ff0(void) {
  LOAD_REGS();
L_999ff0: /* 999ff0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 999ff4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 999ff6: jl 0x99a00b */
  if ((sf != of)) goto L_99a00b;
L_999ff8: /* 999ff8: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 999ffb: jg 0x99a00b */
  if ((!zf && sf == of)) goto L_99a00b;
L_999ffd: /* 999ffd: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 99a001: fld dword ptr [ecx + eax*4 + 0x16c] */
  { double v = F32((uint32_t)(ecx + eax*4 + 0x16cu)); FPUSH(v); }
/* 99a008: ret 8 */
  esp += 12; SPILL(); return;
L_99a00b: /* 99a00b: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 99a011: ret 8 */
  esp += 12; SPILL(); return;
}

void f_99a020(void) {
  LOAD_REGS();
L_99a020: /* 99a020: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 99a024: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 99a026: jl 0x99a03b */
  if ((sf != of)) goto L_99a03b;
L_99a028: /* 99a028: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99a02b: jg 0x99a03b */
  if ((!zf && sf == of)) goto L_99a03b;
L_99a02d: /* 99a02d: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 99a031: fld dword ptr [ecx + eax*4 + 0x178] */
  { double v = F32((uint32_t)(ecx + eax*4 + 0x178u)); FPUSH(v); }
/* 99a038: ret 8 */
  esp += 12; SPILL(); return;
L_99a03b: /* 99a03b: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 99a041: ret 8 */
  esp += 12; SPILL(); return;
}

void f_99a050(void) {
  LOAD_REGS();
L_99a050: /* 99a050: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 99a054: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 99a056: jl 0x99a06b */
  if ((sf != of)) goto L_99a06b;
L_99a058: /* 99a058: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99a05b: jg 0x99a06b */
  if ((!zf && sf == of)) goto L_99a06b;
L_99a05d: /* 99a05d: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 99a061: fld dword ptr [ecx + eax*4 + 0x184] */
  { double v = F32((uint32_t)(ecx + eax*4 + 0x184u)); FPUSH(v); }
/* 99a068: ret 8 */
  esp += 12; SPILL(); return;
L_99a06b: /* 99a06b: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 99a071: ret 8 */
  esp += 12; SPILL(); return;
}

void f_99a080(void) {
  LOAD_REGS();
L_99a080: /* 99a080: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 99a084: mov edx, dword ptr [eax + 0x190] */
  edx = R32((uint32_t)(eax + 0x190u));
/* 99a08a: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 99a08e: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 99a090: mov edx, dword ptr [eax + 0x194] */
  edx = R32((uint32_t)(eax + 0x194u));
/* 99a096: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 99a099: mov eax, dword ptr [eax + 0x198] */
  eax = R32((uint32_t)(eax + 0x198u));
/* 99a09f: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 99a0a2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_99a0b0(void) {
  LOAD_REGS();
L_99a0b0: /* 99a0b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 99a0b4: mov edx, dword ptr [eax + 0x19c] */
  edx = R32((uint32_t)(eax + 0x19cu));
/* 99a0ba: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 99a0be: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 99a0c0: mov edx, dword ptr [eax + 0x1a0] */
  edx = R32((uint32_t)(eax + 0x1a0u));
/* 99a0c6: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 99a0c9: mov eax, dword ptr [eax + 0x1a4] */
  eax = R32((uint32_t)(eax + 0x1a4u));
/* 99a0cf: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 99a0d2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_99a0e0(void) {
  LOAD_REGS();
L_99a0e0: /* 99a0e0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 99a0e4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 99a0e6: jl 0x99a0fc */
  if ((sf != of)) goto L_99a0fc;
L_99a0e8: /* 99a0e8: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99a0eb: jg 0x99a0fc */
  if ((!zf && sf == of)) goto L_99a0fc;
L_99a0ed: /* 99a0ed: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 99a0f1: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 99a0f5: fstp dword ptr [ecx + eax*4 + 0x160] */
  WF32((uint32_t)(ecx + eax*4 + 0x160u), ST0); FPOP();
L_99a0fc: /* 99a0fc: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_99a100(void) {
  LOAD_REGS();
L_99a100: /* 99a100: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 99a104: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 99a106: jl 0x99a11c */
  if ((sf != of)) goto L_99a11c;
L_99a108: /* 99a108: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99a10b: jg 0x99a11c */
  if ((!zf && sf == of)) goto L_99a11c;
L_99a10d: /* 99a10d: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 99a111: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 99a115: fstp dword ptr [ecx + eax*4 + 0x16c] */
  WF32((uint32_t)(ecx + eax*4 + 0x16cu), ST0); FPOP();
L_99a11c: /* 99a11c: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_99a120(void) {
  LOAD_REGS();
L_99a120: /* 99a120: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 99a124: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 99a126: jl 0x99a13c */
  if ((sf != of)) goto L_99a13c;
L_99a128: /* 99a128: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99a12b: jg 0x99a13c */
  if ((!zf && sf == of)) goto L_99a13c;
L_99a12d: /* 99a12d: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 99a131: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 99a135: fstp dword ptr [ecx + eax*4 + 0x178] */
  WF32((uint32_t)(ecx + eax*4 + 0x178u), ST0); FPOP();
L_99a13c: /* 99a13c: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_99a140(void) {
  LOAD_REGS();
L_99a140: /* 99a140: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 99a144: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 99a146: jl 0x99a15c */
  if ((sf != of)) goto L_99a15c;
L_99a148: /* 99a148: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99a14b: jg 0x99a15c */
  if ((!zf && sf == of)) goto L_99a15c;
L_99a14d: /* 99a14d: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 99a151: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 99a155: fstp dword ptr [ecx + eax*4 + 0x184] */
  WF32((uint32_t)(ecx + eax*4 + 0x184u), ST0); FPOP();
L_99a15c: /* 99a15c: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_99a160(void) {
  LOAD_REGS();
L_99a160: /* 99a160: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 99a164: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 99a168: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 99a16c: fstp dword ptr [eax + 0x190] */
  WF32((uint32_t)(eax + 0x190u), ST0); FPOP();
/* 99a172: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 99a176: mov dword ptr [eax + 0x194], ecx */
  W32((uint32_t)(eax + 0x194u), ecx);
/* 99a17c: mov dword ptr [eax + 0x198], edx */
  W32((uint32_t)(eax + 0x198u), edx);
/* 99a182: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_99a190(void) {
  LOAD_REGS();
L_99a190: /* 99a190: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 99a194: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 99a198: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 99a19c: fstp dword ptr [eax + 0x19c] */
  WF32((uint32_t)(eax + 0x19cu), ST0); FPOP();
/* 99a1a2: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 99a1a6: mov dword ptr [eax + 0x1a0], ecx */
  W32((uint32_t)(eax + 0x1a0u), ecx);
/* 99a1ac: mov dword ptr [eax + 0x1a4], edx */
  W32((uint32_t)(eax + 0x1a4u), edx);
/* 99a1b2: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_99a1c0(void) {
  LOAD_REGS();
L_99a1c0: /* 99a1c0: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 99a1c4: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 99a1c7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99a1c8: mov esi, dword ptr [esp + 0x4c] */
  esi = R32((uint32_t)(esp + 0x4cu));
/* 99a1cc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 99a1cd: mov edi, dword ptr [esp + 0x4c] */
  edi = R32((uint32_t)(esp + 0x4cu));
/* 99a1d1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99a1d2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99a1d3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 99a1d4: call 0x90b980 */
  esp -= 4; W32(esp, 0x99a1d9u); SPILL(); f_90b980(); if (g_unwind) return; RELOAD();
/* 99a1d9: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 99a1dd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99a1de: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99a1df: call 0x90e0f0 */
  esp -= 4; W32(esp, 0x99a1e4u); SPILL(); f_90e0f0(); if (g_unwind) return; RELOAD();
/* 99a1e4: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 99a1e8: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 99a1ec: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 99a1f0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 99a1f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99a1f2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99a1f3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 99a1f4: call 0x90c270 */
  esp -= 4; W32(esp, 0x99a1f9u); SPILL(); f_90c270(); if (g_unwind) return; RELOAD();
/* 99a1f9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 99a1fa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99a1fb: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99a1fe: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_99a210(void) {
  LOAD_REGS();
L_99a210: /* 99a210: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 99a214: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99a215: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99a216: call 0x90b7e0 */
  esp -= 4; W32(esp, 0x99a21bu); SPILL(); f_90b7e0(); if (g_unwind) return; RELOAD();
/* 99a21b: mov esi, eax */
  esi = eax;
/* 99a21d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99a21f: jne 0x99a225 */
  if (!zf) goto L_99a225;
L_99a221: /* 99a221: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99a222: ret 4 */
  esp += 8; SPILL(); return;
L_99a225: /* 99a225: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99a226: mov dword ptr [esi + 0xb0], 2 */
  W32((uint32_t)(esi + 0xb0u), 0x2u);
/* 99a230: mov dword ptr [esi + 0x60], 0x91dc90 */
  W32((uint32_t)(esi + 0x60u), 0x91dc90u);
/* 99a237: mov dword ptr [esi + 0x64], 6 */
  W32((uint32_t)(esi + 0x64u), 0x6u);
/* 99a23e: mov dword ptr [esi + 0xa8], 0x90b980 */
  W32((uint32_t)(esi + 0xa8u), 0x90b980u);
/* 99a248: mov dword ptr [esi + 0xac], 0x99a2e0 */
  W32((uint32_t)(esi + 0xacu), 0x99a2e0u);
/* 99a252: call 0x99a260 */
  esp -= 4; W32(esp, 0x99a257u); SPILL(); f_99a260(); if (g_unwind) return; RELOAD();
/* 99a257: mov eax, esi */
  eax = esi;
/* 99a259: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99a25a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_99a260(void) {
  LOAD_REGS();
L_99a260: /* 99a260: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99a261: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 99a265: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99a266: call 0x99a2a0 */
  esp -= 4; W32(esp, 0x99a26bu); SPILL(); f_99a2a0(); if (g_unwind) return; RELOAD();
/* 99a26b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99a26c: call 0x90bd20 */
  esp -= 4; W32(esp, 0x99a271u); SPILL(); f_90bd20(); if (g_unwind) return; RELOAD();
/* 99a271: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99a273: je 0x99a281 */
  if (zf) goto L_99a281;
L_99a275: /* 99a275: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99a276: call 0x99a2a0 */
  esp -= 4; W32(esp, 0x99a27bu); SPILL(); f_99a2a0(); if (g_unwind) return; RELOAD();
/* 99a27b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99a27c: call 0x90bcb0 */
  esp -= 4; W32(esp, 0x99a281u); SPILL(); f_90bcb0(); if (g_unwind) return; RELOAD();
L_99a281: /* 99a281: lea eax, [esi + 0x160] */
  eax = (uint32_t)(esi + 0x160u);
/* 99a287: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99a288: call 0x90c960 */
  esp -= 4; W32(esp, 0x99a28du); SPILL(); f_90c960(); if (g_unwind) return; RELOAD();
/* 99a28d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99a28e: call 0x99a2a0 */
  esp -= 4; W32(esp, 0x99a293u); SPILL(); f_99a2a0(); if (g_unwind) return; RELOAD();
/* 99a293: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99a294: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 99a298: jmp 0x90b820 */
  SPILL(); f_90b820(); return;
}

void f_99a2a0(void) {
  LOAD_REGS();
L_99a2a0: /* 99a2a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 99a2a4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_99a2b0(void) {
  LOAD_REGS();
L_99a2b0: /* 99a2b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 99a2b4: mov edx, dword ptr [eax + 0xb0] */
  edx = R32((uint32_t)(eax + 0xb0u));
/* 99a2ba: xor ecx, ecx */
  ecx = 0;
/* 99a2bc: cmp edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99a2bf: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 99a2c2: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 99a2c3: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 99a2c5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_99a2d0(void) {
  LOAD_REGS();
L_99a2d0: /* 99a2d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 99a2d4: add eax, 0x160 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x160u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 99a2d9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_99a2e0(void) {
  LOAD_REGS();
L_99a2e0: /* 99a2e0: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 99a2e3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99a2e4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 99a2e5: mov edi, dword ptr [esp + 0x3c] */
  edi = R32((uint32_t)(esp + 0x3cu));
/* 99a2e9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 99a2ea: call 0x99a2b0 */
  esp -= 4; W32(esp, 0x99a2efu); SPILL(); f_99a2b0(); if (g_unwind) return; RELOAD();
/* 99a2ef: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 99a2f3: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 99a2f7: mov esi, eax */
  esi = eax;
/* 99a2f9: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 99a2fd: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 99a301: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 99a305: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 99a309: mov eax, dword ptr [esi + 0x54] */
  eax = R32((uint32_t)(esi + 0x54u));
/* 99a30c: mov ecx, dword ptr [eax + 0x120] */
  ecx = R32((uint32_t)(eax + 0x120u));
/* 99a312: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 99a316: mov edx, dword ptr [esi + 0x54] */
  edx = R32((uint32_t)(esi + 0x54u));
/* 99a319: mov eax, dword ptr [edx + 0x124] */
  eax = R32((uint32_t)(edx + 0x124u));
/* 99a31f: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 99a323: mov ecx, dword ptr [esi + 0x54] */
  ecx = R32((uint32_t)(esi + 0x54u));
/* 99a326: mov eax, dword ptr [edi + 0x58] */
  eax = R32((uint32_t)(edi + 0x58u));
/* 99a329: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99a32b: mov edx, dword ptr [ecx + 0x128] */
  edx = R32((uint32_t)(ecx + 0x128u));
/* 99a331: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 99a335: je 0x99a36a */
  if (zf) goto L_99a36a;
L_99a337: /* 99a337: mov eax, dword ptr [esi + 0x58] */
  eax = R32((uint32_t)(esi + 0x58u));
/* 99a33a: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 99a33e: fsub dword ptr [eax + 0x120] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x120u)));
/* 99a344: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 99a348: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* 99a34b: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 99a34f: fsub dword ptr [ecx + 0x124] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x124u)));
/* 99a355: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 99a359: mov edx, dword ptr [esi + 0x58] */
  edx = R32((uint32_t)(esi + 0x58u));
/* 99a35c: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 99a360: fsub dword ptr [edx + 0x128] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x128u)));
/* 99a366: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
L_99a36a: /* 99a36a: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 99a36e: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 99a372: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 99a376: fmul dword ptr [esp + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x40u)));
/* 99a37a: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 99a37c: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 99a37e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 99a380: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 99a382: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 99a384: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 99a386: fsub dword ptr [0x9f48a0] */
  ST0 = ST0 - (F32((uint32_t)(0x9f48a0u)));
/* 99a38c: fabs  */
  ST0 = fabs(ST0);
/* 99a38e: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 99a390: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99a392: fcomp dword ptr [0xa0892c] */
  fpu_com(ST0, F32((uint32_t)(0xa0892cu)));
  FPOP();
/* 99a398: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99a39a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99a39d: jnp 0x99a406 */
  if (!pf) goto L_99a406;
L_99a39f: /* 99a39f: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 99a3a5: xor eax, eax */
  eax = 0;
L_99a3a7: /* 99a3a7: fld dword ptr [esp + eax*4 + 8] */
  { double v = F32((uint32_t)(esp + eax*4 + 0x8u)); FPUSH(v); }
/* 99a3ab: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 99a3ac: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99a3af: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 99a3b1: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 99a3b3: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 99a3b5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99a3b7: jl 0x99a3a7 */
  if ((sf != of)) goto L_99a3a7;
L_99a3b9: /* 99a3b9: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 99a3bf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99a3c1: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 99a3c4: jne 0x99a3ec */
  if (!zf) goto L_99a3ec;
L_99a3c6: /* 99a3c6: fsqrt  */
  ST0 = sqrt(ST0);
/* 99a3c8: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 99a3ce: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 99a3d2: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 99a3d4: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 99a3d8: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 99a3dc: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 99a3de: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 99a3e2: fmul dword ptr [esp + 0x48] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x48u)));
/* 99a3e6: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 99a3ea: jmp 0x99a406 */
  goto L_99a406;
L_99a3ec: /* 99a3ec: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99a3ee: mov dword ptr [esp + 8], 0x3f800000 */
  W32((uint32_t)(esp + 0x8u), 0x3f800000u);
/* 99a3f6: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 99a3fe: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
L_99a406: /* 99a406: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 99a40a: fabs  */
  ST0 = fabs(ST0);
/* 99a40c: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 99a410: fabs  */
  ST0 = fabs(ST0);
/* 99a412: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 99a414: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 99a416: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 99a418: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 99a41c: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 99a420: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99a422: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99a425: jp 0x99a47f */
  if (pf) goto L_99a47f;
L_99a427: /* 99a427: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 99a42b: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 99a433: fmul dword ptr [esp + 8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x8u)));
/* 99a437: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 99a439: fsqrt  */
  ST0 = sqrt(ST0);
/* 99a43b: fdivr qword ptr [0xa0da58] */
  ST0 = (F64((uint32_t)(0xa0da58u))) / ST0;
/* 99a441: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 99a445: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 99a447: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 99a44b: fmul dword ptr [esp + 8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x8u)));
/* 99a44f: fchs  */
  ST0 = -ST0;
/* 99a451: fst dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0);
/* 99a455: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 99a459: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 99a45d: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 99a461: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 99a465: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 99a469: fmul dword ptr [esp + 8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x8u)));
/* 99a46d: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 99a46f: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 99a473: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 99a477: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 99a47b: fchs  */
  ST0 = -ST0;
/* 99a47d: jmp 0x99a4d5 */
  goto L_99a4d5;
L_99a47f: /* 99a47f: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 99a483: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 99a48b: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 99a48f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 99a491: fsqrt  */
  ST0 = sqrt(ST0);
/* 99a493: fdivr qword ptr [0xa0da58] */
  ST0 = (F64((uint32_t)(0xa0da58u))) / ST0;
/* 99a499: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 99a49d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 99a49f: fchs  */
  ST0 = -ST0;
/* 99a4a1: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 99a4a5: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 99a4a9: fst dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0);
/* 99a4ad: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 99a4b1: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 99a4b5: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 99a4b9: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 99a4bb: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 99a4bf: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 99a4c3: fmul dword ptr [esp + 8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x8u)));
/* 99a4c7: fchs  */
  ST0 = -ST0;
/* 99a4c9: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 99a4cd: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 99a4d1: fmul dword ptr [esp + 8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x8u)));
L_99a4d5: /* 99a4d5: lea eax, [esi + 0xbc] */
  eax = (uint32_t)(esi + 0xbcu);
/* 99a4db: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 99a4df: mov ecx, dword ptr [esi + 0x54] */
  ecx = R32((uint32_t)(esi + 0x54u));
/* 99a4e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99a4e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99a4e4: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 99a4e8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 99a4e9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 99a4eb: call 0x90d100 */
  esp -= 4; W32(esp, 0x99a4f0u); SPILL(); f_90d100(); if (g_unwind) return; RELOAD();
/* 99a4f0: mov ecx, dword ptr [esi + 0x54] */
  ecx = R32((uint32_t)(esi + 0x54u));
/* 99a4f3: lea eax, [esi + 0xcc] */
  eax = (uint32_t)(esi + 0xccu);
/* 99a4f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99a4fa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99a4fb: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 99a4ff: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 99a500: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 99a502: call 0x90d100 */
  esp -= 4; W32(esp, 0x99a507u); SPILL(); f_90d100(); if (g_unwind) return; RELOAD();
/* 99a507: mov ecx, dword ptr [esi + 0x54] */
  ecx = R32((uint32_t)(esi + 0x54u));
/* 99a50a: lea eax, [esi + 0xdc] */
  eax = (uint32_t)(esi + 0xdcu);
/* 99a510: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99a511: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99a512: lea edx, [esp + 0x34] */
  edx = (uint32_t)(esp + 0x34u);
/* 99a516: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 99a517: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 99a519: call 0x90d100 */
  esp -= 4; W32(esp, 0x99a51eu); SPILL(); f_90d100(); if (g_unwind) return; RELOAD();
/* 99a51e: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* 99a521: lea eax, [esi + 0xfc] */
  eax = (uint32_t)(esi + 0xfcu);
/* 99a527: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99a528: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99a529: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 99a52d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 99a52e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 99a530: call 0x90d100 */
  esp -= 4; W32(esp, 0x99a535u); SPILL(); f_90d100(); if (g_unwind) return; RELOAD();
/* 99a535: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* 99a538: lea eax, [esi + 0x10c] */
  eax = (uint32_t)(esi + 0x10cu);
/* 99a53e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99a53f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99a540: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 99a544: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 99a545: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 99a547: call 0x90d100 */
  esp -= 4; W32(esp, 0x99a54cu); SPILL(); f_90d100(); if (g_unwind) return; RELOAD();
/* 99a54c: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* 99a54f: lea eax, [esi + 0x11c] */
  eax = (uint32_t)(esi + 0x11cu);
/* 99a555: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99a556: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99a557: lea edx, [esp + 0x34] */
  edx = (uint32_t)(esp + 0x34u);
/* 99a55b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 99a55c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 99a55e: call 0x90d100 */
  esp -= 4; W32(esp, 0x99a563u); SPILL(); f_90d100(); if (g_unwind) return; RELOAD();
/* 99a563: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* 99a566: lea eax, [esi + 0x12c] */
  eax = (uint32_t)(esi + 0x12cu);
/* 99a56c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99a56d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99a56e: lea edx, [esp + 0x28] */
  edx = (uint32_t)(esp + 0x28u);
/* 99a572: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 99a573: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 99a575: call 0x90d100 */
  esp -= 4; W32(esp, 0x99a57au); SPILL(); f_90d100(); if (g_unwind) return; RELOAD();
/* 99a57a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 99a57b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99a57c: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99a57f: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_99a590(void) {
  LOAD_REGS();
L_99a590: /* 99a590: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 99a594: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99a595: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 99a596: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99a597: call 0x99a2d0 */
  esp -= 4; W32(esp, 0x99a59cu); SPILL(); f_99a2d0(); if (g_unwind) return; RELOAD();
/* 99a59c: mov esi, eax */
  esi = eax;
/* 99a59e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99a59f: call 0x90c960 */
  esp -= 4; W32(esp, 0x99a5a4u); SPILL(); f_90c960(); if (g_unwind) return; RELOAD();
/* 99a5a4: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 99a5a8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 99a5a9: call 0x90c9d0 */
  esp -= 4; W32(esp, 0x99a5aeu); SPILL(); f_90c9d0(); if (g_unwind) return; RELOAD();
/* 99a5ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99a5af: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99a5b0: call 0x90ca60 */
  esp -= 4; W32(esp, 0x99a5b5u); SPILL(); f_90ca60(); if (g_unwind) return; RELOAD();
/* 99a5b5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 99a5b6: call 0x90c9e0 */
  esp -= 4; W32(esp, 0x99a5bbu); SPILL(); f_90c9e0(); if (g_unwind) return; RELOAD();
/* 99a5bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99a5bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99a5bd: call 0x90cae0 */
  esp -= 4; W32(esp, 0x99a5c2u); SPILL(); f_90cae0(); if (g_unwind) return; RELOAD();
/* 99a5c2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 99a5c3: call 0x90c9b0 */
  esp -= 4; W32(esp, 0x99a5c8u); SPILL(); f_90c9b0(); if (g_unwind) return; RELOAD();
/* 99a5c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99a5c9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99a5ca: call 0x90cb80 */
  esp -= 4; W32(esp, 0x99a5cfu); SPILL(); f_90cb80(); if (g_unwind) return; RELOAD();
/* 99a5cf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 99a5d0: call 0x90ca50 */
  esp -= 4; W32(esp, 0x99a5d5u); SPILL(); f_90ca50(); if (g_unwind) return; RELOAD();
/* 99a5d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99a5d6: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 99a5d9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 99a5da: call 0x90ca40 */
  esp -= 4; W32(esp, 0x99a5dfu); SPILL(); f_90ca40(); if (g_unwind) return; RELOAD();
/* 99a5df: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99a5e0: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 99a5e3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99a5e4: call 0x90cc60 */
  esp -= 4; W32(esp, 0x99a5e9u); SPILL(); f_90cc60(); if (g_unwind) return; RELOAD();
/* 99a5e9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 99a5ea: call 0x90ca30 */
  esp -= 4; W32(esp, 0x99a5efu); SPILL(); f_90ca30(); if (g_unwind) return; RELOAD();
/* 99a5ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99a5f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99a5f1: call 0x90cc20 */
  esp -= 4; W32(esp, 0x99a5f6u); SPILL(); f_90cc20(); if (g_unwind) return; RELOAD();
/* 99a5f6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 99a5f7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99a5f8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_99a600(void) {
  LOAD_REGS();
L_99a600: /* 99a600: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 99a604: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99a605: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99a606: call 0x90b7e0 */
  esp -= 4; W32(esp, 0x99a60bu); SPILL(); f_90b7e0(); if (g_unwind) return; RELOAD();
/* 99a60b: mov esi, eax */
  esi = eax;
/* 99a60d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99a60f: jne 0x99a615 */
  if (!zf) goto L_99a615;
L_99a611: /* 99a611: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99a612: ret 4 */
  esp += 8; SPILL(); return;
L_99a615: /* 99a615: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99a616: mov dword ptr [esi + 0xb0], 7 */
  W32((uint32_t)(esi + 0xb0u), 0x7u);
/* 99a620: mov dword ptr [esi + 0x60], 0x924a10 */
  W32((uint32_t)(esi + 0x60u), 0x924a10u);
/* 99a627: mov dword ptr [esi + 0x64], 6 */
  W32((uint32_t)(esi + 0x64u), 0x6u);
/* 99a62e: mov dword ptr [esi + 0xa8], 0x90b980 */
  W32((uint32_t)(esi + 0xa8u), 0x90b980u);
/* 99a638: mov dword ptr [esi + 0xac], 0x90b9b0 */
  W32((uint32_t)(esi + 0xacu), 0x90b9b0u);
/* 99a642: call 0x99a650 */
  esp -= 4; W32(esp, 0x99a647u); SPILL(); f_99a650(); if (g_unwind) return; RELOAD();
/* 99a647: mov eax, esi */
  eax = esi;
/* 99a649: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99a64a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_99a650(void) {
  LOAD_REGS();
L_99a650: /* 99a650: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99a651: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 99a655: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99a656: call 0x99a700 */
  esp -= 4; W32(esp, 0x99a65bu); SPILL(); f_99a700(); if (g_unwind) return; RELOAD();
/* 99a65b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99a65c: call 0x90bd20 */
  esp -= 4; W32(esp, 0x99a661u); SPILL(); f_90bd20(); if (g_unwind) return; RELOAD();
/* 99a661: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99a663: je 0x99a671 */
  if (zf) goto L_99a671;
L_99a665: /* 99a665: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99a666: call 0x99a700 */
  esp -= 4; W32(esp, 0x99a66bu); SPILL(); f_99a700(); if (g_unwind) return; RELOAD();
/* 99a66b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99a66c: call 0x90bcb0 */
  esp -= 4; W32(esp, 0x99a671u); SPILL(); f_90bcb0(); if (g_unwind) return; RELOAD();
L_99a671: /* 99a671: mov eax, 0x3f800000 */
  eax = 0x3f800000u;
/* 99a676: xor ecx, ecx */
  ecx = 0;
/* 99a678: mov dword ptr [esi + 0x1a4], eax */
  W32((uint32_t)(esi + 0x1a4u), eax);
/* 99a67e: mov dword ptr [esi + 0x174], eax */
  W32((uint32_t)(esi + 0x174u), eax);
/* 99a684: mov dword ptr [esi + 0x160], eax */
  W32((uint32_t)(esi + 0x160u), eax);
/* 99a68a: mov dword ptr [esi + 0x184], ecx */
  W32((uint32_t)(esi + 0x184u), ecx);
/* 99a690: mov dword ptr [esi + 0x170], ecx */
  W32((uint32_t)(esi + 0x170u), ecx);
/* 99a696: lea eax, [esi + 0x1b4] */
  eax = (uint32_t)(esi + 0x1b4u);
/* 99a69c: mov edx, 3 */
  edx = 0x3u;
L_99a6a1: /* 99a6a1: mov dword ptr [eax - 0xc], ecx */
  W32((uint32_t)(eax + 0xfffffff4u), ecx);
/* 99a6a4: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 99a6a6: mov dword ptr [eax - 0x3c], ecx */
  W32((uint32_t)(eax + 0xffffffc4u), ecx);
/* 99a6a9: mov dword ptr [eax - 0x50], ecx */
  W32((uint32_t)(eax + 0xffffffb0u), ecx);
/* 99a6ac: mov dword ptr [eax - 0x2c], ecx */
  W32((uint32_t)(eax + 0xffffffd4u), ecx);
/* 99a6af: mov dword ptr [eax - 0x1c], ecx */
  W32((uint32_t)(eax + 0xffffffe4u), ecx);
/* 99a6b2: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 99a6b5: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 99a6b6: jne 0x99a6a1 */
  if (!zf) goto L_99a6a1;
L_99a6b8: /* 99a6b8: mov eax, 0x7f7fffff */
  eax = 0x7f7fffffu;
/* 99a6bd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99a6be: mov dword ptr [esi + 0x1c0], eax */
  W32((uint32_t)(esi + 0x1c0u), eax);
/* 99a6c4: mov dword ptr [esi + 0x1c4], eax */
  W32((uint32_t)(esi + 0x1c4u), eax);
/* 99a6ca: mov dword ptr [esi + 0x1c8], eax */
  W32((uint32_t)(esi + 0x1c8u), eax);
/* 99a6d0: mov dword ptr [esi + 0x1cc], eax */
  W32((uint32_t)(esi + 0x1ccu), eax);
/* 99a6d6: mov dword ptr [esi + 0x1d0], eax */
  W32((uint32_t)(esi + 0x1d0u), eax);
/* 99a6dc: mov dword ptr [esi + 0x1d4], eax */
  W32((uint32_t)(esi + 0x1d4u), eax);
/* 99a6e2: call 0x99a700 */
  esp -= 4; W32(esp, 0x99a6e7u); SPILL(); f_99a700(); if (g_unwind) return; RELOAD();
/* 99a6e7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99a6e8: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 99a6ec: jmp 0x90b820 */
  SPILL(); f_90b820(); return;
}

void f_99a700(void) {
  LOAD_REGS();
L_99a700: /* 99a700: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 99a704: ret 4 */
  esp += 8; SPILL(); return;
}

void f_99a710(void) {
  LOAD_REGS();
L_99a710: /* 99a710: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 99a714: mov edx, dword ptr [eax + 0xb0] */
  edx = R32((uint32_t)(eax + 0xb0u));
/* 99a71a: xor ecx, ecx */
  ecx = 0;
/* 99a71c: cmp edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99a71f: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 99a722: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 99a723: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 99a725: ret 4 */
  esp += 8; SPILL(); return;
}

void f_99a730(void) {
  LOAD_REGS();
L_99a730: /* 99a730: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 99a734: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99a736: jne 0x99a744 */
  if (!zf) goto L_99a744;
L_99a738: /* 99a738: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 99a73c: lea ecx, [eax + 0xec] */
  ecx = (uint32_t)(eax + 0xecu);
/* 99a742: jmp 0x99a74e */
  goto L_99a74e;
L_99a744: /* 99a744: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 99a748: add ecx, 0x12c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x12cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_99a74e: /* 99a74e: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 99a752: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 99a754: mov edx, 3 */
  edx = 0x3u;
/* 99a759: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99a75a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_99a760: /* 99a760: mov esi, dword ptr [ecx + eax] */
  esi = R32((uint32_t)(ecx + eax));
/* 99a763: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 99a765: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 99a768: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 99a769: jne 0x99a760 */
  if (!zf) goto L_99a760;
L_99a76b: /* 99a76b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99a76c: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_99a770(void) {
  LOAD_REGS();
L_99a770: /* 99a770: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 99a774: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99a776: jne 0x99a784 */
  if (!zf) goto L_99a784;
L_99a778: /* 99a778: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 99a77c: lea ecx, [eax + 0x160] */
  ecx = (uint32_t)(eax + 0x160u);
/* 99a782: jmp 0x99a78e */
  goto L_99a78e;
L_99a784: /* 99a784: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 99a788: add ecx, 0x174 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x174u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_99a78e: /* 99a78e: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 99a792: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 99a794: mov edx, 4 */
  edx = 0x4u;
/* 99a799: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99a79a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_99a7a0: /* 99a7a0: mov esi, dword ptr [ecx + eax] */
  esi = R32((uint32_t)(ecx + eax));
/* 99a7a3: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 99a7a5: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 99a7a8: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 99a7a9: jne 0x99a7a0 */
  if (!zf) goto L_99a7a0;
L_99a7ab: /* 99a7ab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99a7ac: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_99a7b0(void) {
  LOAD_REGS();
L_99a7b0: /* 99a7b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 99a7b4: mov edx, dword ptr [eax + 0x188] */
  edx = R32((uint32_t)(eax + 0x188u));
/* 99a7ba: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 99a7be: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 99a7c0: mov edx, dword ptr [eax + 0x18c] */
  edx = R32((uint32_t)(eax + 0x18cu));
/* 99a7c6: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 99a7c9: mov eax, dword ptr [eax + 0x190] */
  eax = R32((uint32_t)(eax + 0x190u));
/* 99a7cf: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 99a7d2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_99a7e0(void) {
  LOAD_REGS();
L_99a7e0: /* 99a7e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 99a7e4: mov edx, dword ptr [eax + 0x198] */
  edx = R32((uint32_t)(eax + 0x198u));
/* 99a7ea: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 99a7ee: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 99a7f0: mov edx, dword ptr [eax + 0x19c] */
  edx = R32((uint32_t)(eax + 0x19cu));
/* 99a7f6: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 99a7f9: mov eax, dword ptr [eax + 0x1a0] */
  eax = R32((uint32_t)(eax + 0x1a0u));
/* 99a7ff: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 99a802: ret 8 */
  esp += 12; SPILL(); return;
}

void f_99a810(void) {
  LOAD_REGS();
L_99a810: /* 99a810: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 99a814: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 99a818: xor eax, eax */
  eax = 0;
/* 99a81a: add ecx, 0x1a4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1a4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 99a820: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_99a821: /* 99a821: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 99a823: mov dword ptr [edx + eax*4], esi */
  W32((uint32_t)(edx + eax*4), esi);
/* 99a826: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 99a827: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 99a82a: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99a82d: jl 0x99a821 */
  if ((sf != of)) goto L_99a821;
L_99a82f: /* 99a82f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99a830: ret 8 */
  esp += 12; SPILL(); return;
}

void f_99a840(void) {
  LOAD_REGS();
L_99a840: /* 99a840: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 99a844: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 99a848: xor eax, eax */
  eax = 0;
/* 99a84a: add ecx, 0x1b4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1b4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 99a850: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_99a851: /* 99a851: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 99a853: mov dword ptr [edx + eax*4], esi */
  W32((uint32_t)(edx + eax*4), esi);
/* 99a856: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 99a857: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 99a85a: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99a85d: jl 0x99a851 */
  if ((sf != of)) goto L_99a851;
L_99a85f: /* 99a85f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99a860: ret 8 */
  esp += 12; SPILL(); return;
}

void f_99a870(void) {
  LOAD_REGS();
L_99a870: /* 99a870: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 99a874: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 99a878: xor eax, eax */
  eax = 0;
/* 99a87a: add ecx, 0x1c0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1c0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 99a880: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_99a881: /* 99a881: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 99a883: mov dword ptr [edx + eax*4], esi */
  W32((uint32_t)(edx + eax*4), esi);
/* 99a886: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 99a887: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 99a88a: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99a88d: jl 0x99a881 */
  if ((sf != of)) goto L_99a881;
L_99a88f: /* 99a88f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99a890: ret 8 */
  esp += 12; SPILL(); return;
}

void f_99a8a0(void) {
  LOAD_REGS();
L_99a8a0: /* 99a8a0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 99a8a4: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 99a8a8: xor eax, eax */
  eax = 0;
/* 99a8aa: add ecx, 0x1cc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1ccu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 99a8b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_99a8b1: /* 99a8b1: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 99a8b3: mov dword ptr [edx + eax*4], esi */
  W32((uint32_t)(edx + eax*4), esi);
/* 99a8b6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 99a8b7: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 99a8ba: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99a8bd: jl 0x99a8b1 */
  if ((sf != of)) goto L_99a8b1;
L_99a8bf: /* 99a8bf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99a8c0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_99a8d0(void) {
  LOAD_REGS();
L_99a8d0: /* 99a8d0: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 99a8d4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99a8d6: jne 0x99a8e3 */
  if (!zf) goto L_99a8e3;
L_99a8d8: /* 99a8d8: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 99a8dc: add eax, 0xec */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xecu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 99a8e1: jmp 0x99a8ed */
  goto L_99a8ed;
L_99a8e3: /* 99a8e3: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 99a8e7: lea eax, [ecx + 0x12c] */
  eax = (uint32_t)(ecx + 0x12cu);
L_99a8ed: /* 99a8ed: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 99a8f1: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 99a8f5: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 99a8f7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 99a8fb: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 99a8fe: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 99a901: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_99a910(void) {
  LOAD_REGS();
L_99a910: /* 99a910: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 99a914: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99a916: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 99a91a: jne 0x99a92e */
  if (!zf) goto L_99a92e;
L_99a91c: /* 99a91c: lea eax, [ecx + 0x160] */
  eax = (uint32_t)(ecx + 0x160u);
/* 99a922: mov dword ptr [ecx + 0x170], 1 */
  W32((uint32_t)(ecx + 0x170u), 0x1u);
/* 99a92c: jmp 0x99a93e */
  goto L_99a93e;
L_99a92e: /* 99a92e: lea eax, [ecx + 0x174] */
  eax = (uint32_t)(ecx + 0x174u);
/* 99a934: mov dword ptr [ecx + 0x184], 1 */
  W32((uint32_t)(ecx + 0x184u), 0x1u);
L_99a93e: /* 99a93e: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 99a942: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 99a946: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 99a948: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 99a94c: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 99a94f: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 99a953: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 99a956: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 99a959: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_99a960(void) {
  LOAD_REGS();
L_99a960: /* 99a960: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 99a964: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 99a968: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 99a96c: mov dword ptr [eax + 0x188], ecx */
  W32((uint32_t)(eax + 0x188u), ecx);
/* 99a972: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 99a976: mov dword ptr [eax + 0x18c], edx */
  W32((uint32_t)(eax + 0x18cu), edx);
/* 99a97c: mov dword ptr [eax + 0x190], ecx */
  W32((uint32_t)(eax + 0x190u), ecx);
/* 99a982: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_99a990(void) {
  LOAD_REGS();
L_99a990: /* 99a990: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 99a994: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 99a998: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 99a99c: mov dword ptr [eax + 0x198], ecx */
  W32((uint32_t)(eax + 0x198u), ecx);
/* 99a9a2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 99a9a6: mov dword ptr [eax + 0x19c], edx */
  W32((uint32_t)(eax + 0x19cu), edx);
/* 99a9ac: mov dword ptr [eax + 0x1a0], ecx */
  W32((uint32_t)(eax + 0x1a0u), ecx);
/* 99a9b2: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_99a9c0(void) {
  LOAD_REGS();
L_99a9c0: /* 99a9c0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 99a9c4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 99a9c6: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 99a9ca: mov dword ptr [eax + 0x1a4], edx */
  W32((uint32_t)(eax + 0x1a4u), edx);
/* 99a9d0: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 99a9d3: mov dword ptr [eax + 0x1a8], edx */
  W32((uint32_t)(eax + 0x1a8u), edx);
/* 99a9d9: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 99a9dc: mov dword ptr [eax + 0x1ac], edx */
  W32((uint32_t)(eax + 0x1acu), edx);
/* 99a9e2: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 99a9e5: mov dword ptr [eax + 0x1b0], ecx */
  W32((uint32_t)(eax + 0x1b0u), ecx);
/* 99a9eb: ret 8 */
  esp += 12; SPILL(); return;
}

void f_99a9f0(void) {
  LOAD_REGS();
L_99a9f0: /* 99a9f0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 99a9f4: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 99a9f8: xor eax, eax */
  eax = 0;
/* 99a9fa: add ecx, 0x1b4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1b4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 99aa00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_99aa01: /* 99aa01: mov esi, dword ptr [edx + eax*4] */
  esi = R32((uint32_t)(edx + eax*4));
/* 99aa04: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 99aa06: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 99aa07: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 99aa0a: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99aa0d: jl 0x99aa01 */
  if ((sf != of)) goto L_99aa01;
L_99aa0f: /* 99aa0f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99aa10: ret 8 */
  esp += 12; SPILL(); return;
}

void f_99aa20(void) {
  LOAD_REGS();
L_99aa20: /* 99aa20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 99aa24: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 99aa28: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 99aa2c: fstp dword ptr [eax + 0x1c0] */
  WF32((uint32_t)(eax + 0x1c0u), ST0); FPOP();
/* 99aa32: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 99aa36: mov dword ptr [eax + 0x1c4], ecx */
  W32((uint32_t)(eax + 0x1c4u), ecx);
/* 99aa3c: mov dword ptr [eax + 0x1c8], edx */
  W32((uint32_t)(eax + 0x1c8u), edx);
/* 99aa42: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_99aa50(void) {
  LOAD_REGS();
L_99aa50: /* 99aa50: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 99aa54: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 99aa58: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 99aa5c: fstp dword ptr [eax + 0x1cc] */
  WF32((uint32_t)(eax + 0x1ccu), ST0); FPOP();
/* 99aa62: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 99aa66: mov dword ptr [eax + 0x1d0], ecx */
  W32((uint32_t)(eax + 0x1d0u), ecx);
/* 99aa6c: mov dword ptr [eax + 0x1d4], edx */
  W32((uint32_t)(eax + 0x1d4u), edx);
/* 99aa72: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_99aa80(void) {
  LOAD_REGS();
L_99aa80: /* 99aa80: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 99aa84: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99aa85: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99aa86: call 0x90b7e0 */
  esp -= 4; W32(esp, 0x99aa8bu); SPILL(); f_90b7e0(); if (g_unwind) return; RELOAD();
/* 99aa8b: mov esi, eax */
  esi = eax;
/* 99aa8d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99aa8f: jne 0x99aa95 */
  if (!zf) goto L_99aa95;
L_99aa91: /* 99aa91: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99aa92: ret 4 */
  esp += 8; SPILL(); return;
L_99aa95: /* 99aa95: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99aa96: mov dword ptr [esi + 0xb0], 8 */
  W32((uint32_t)(esi + 0xb0u), 0x8u);
/* 99aaa0: mov dword ptr [esi + 0x60], 0x91fd90 */
  W32((uint32_t)(esi + 0x60u), 0x91fd90u);
/* 99aaa7: mov dword ptr [esi + 0x64], 4 */
  W32((uint32_t)(esi + 0x64u), 0x4u);
/* 99aaae: mov dword ptr [esi + 0xa8], 0x90b980 */
  W32((uint32_t)(esi + 0xa8u), 0x90b980u);
/* 99aab8: mov dword ptr [esi + 0xac], 0x90b9b0 */
  W32((uint32_t)(esi + 0xacu), 0x90b9b0u);
/* 99aac2: call 0x99aad0 */
  esp -= 4; W32(esp, 0x99aac7u); SPILL(); f_99aad0(); if (g_unwind) return; RELOAD();
/* 99aac7: mov eax, esi */
  eax = esi;
/* 99aac9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99aaca: ret 4 */
  esp += 8; SPILL(); return;
}

void f_99aad0(void) {
  LOAD_REGS();
L_99aad0: /* 99aad0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99aad1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 99aad5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99aad6: call 0x99ab10 */
  esp -= 4; W32(esp, 0x99aadbu); SPILL(); f_99ab10(); if (g_unwind) return; RELOAD();
/* 99aadb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99aadc: call 0x90bd20 */
  esp -= 4; W32(esp, 0x99aae1u); SPILL(); f_90bd20(); if (g_unwind) return; RELOAD();
/* 99aae1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99aae3: je 0x99aaf1 */
  if (zf) goto L_99aaf1;
L_99aae5: /* 99aae5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99aae6: call 0x99ab10 */
  esp -= 4; W32(esp, 0x99aaebu); SPILL(); f_99ab10(); if (g_unwind) return; RELOAD();
/* 99aaeb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99aaec: call 0x90bcb0 */
  esp -= 4; W32(esp, 0x99aaf1u); SPILL(); f_90bcb0(); if (g_unwind) return; RELOAD();
L_99aaf1: /* 99aaf1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99aaf2: call 0x99ab10 */
  esp -= 4; W32(esp, 0x99aaf7u); SPILL(); f_99ab10(); if (g_unwind) return; RELOAD();
/* 99aaf7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99aaf8: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 99aafc: jmp 0x90b820 */
  SPILL(); f_90b820(); return;
}

void f_99ab10(void) {
  LOAD_REGS();
L_99ab10: /* 99ab10: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 99ab14: ret 4 */
  esp += 8; SPILL(); return;
}

void f_99ab20(void) {
  LOAD_REGS();
L_99ab20: /* 99ab20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 99ab24: mov edx, dword ptr [eax + 0xb0] */
  edx = R32((uint32_t)(eax + 0xb0u));
/* 99ab2a: xor ecx, ecx */
  ecx = 0;
/* 99ab2c: cmp edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99ab2f: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 99ab32: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 99ab33: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 99ab35: ret 4 */
  esp += 8; SPILL(); return;
}

void f_99ab40(void) {
  LOAD_REGS();
L_99ab40: /* 99ab40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99ab41: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 99ab43: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x99ab49u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 99ab49: mov esi, eax */
  esi = eax;
/* 99ab4b: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 99ab4f: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 99ab52: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 99ab56: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99ab59: mov dword ptr [esi + 8], 1 */
  W32((uint32_t)(esi + 0x8u), 0x1u);
/* 99ab60: jle 0x99ab73 */
  if ((zf || sf != of)) goto L_99ab73;
L_99ab62: /* 99ab62: mov ecx, 1 */
  ecx = 0x1u;
L_99ab67: /* 99ab67: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 99ab69: shl ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 99ab6b: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99ab6e: jg 0x99ab67 */
  if ((!zf && sf == of)) goto L_99ab67;
L_99ab70: /* 99ab70: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
L_99ab73: /* 99ab73: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 99ab76: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 99ab79: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99ab7a: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x99ab80u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 99ab80: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 99ab83: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 99ab85: xor eax, eax */
  eax = 0;
/* 99ab87: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 99ab89: jle 0x99aba1 */
  if ((zf || sf != of)) goto L_99aba1;
L_99ab8b: /* 99ab8b: nop  */
/* 99ab8c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_99ab90: /* 99ab90: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 99ab92: mov dword ptr [edx + eax*4], 0 */
  W32((uint32_t)(edx + eax*4), 0x0u);
/* 99ab99: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 99ab9c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 99ab9d: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99ab9f: jl 0x99ab90 */
  if ((sf != of)) goto L_99ab90;
L_99aba1: /* 99aba1: mov eax, esi */
  eax = esi;
/* 99aba3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99aba4: ret  */
  esp += 4; SPILL(); return;
}

void f_99abb0(void) {
  LOAD_REGS();
L_99abb0: /* 99abb0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99abb1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 99abb5: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 99abb7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99abb8: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x99abbeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 99abbe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99abbf: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x99abc5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 99abc5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99abc6: ret  */
  esp += 4; SPILL(); return;
}

void f_99abd0(void) {
  LOAD_REGS();
L_99abd0: /* 99abd0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99abd1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 99abd2: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 99abd4: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x99abdau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 99abda: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 99abdc: mov esi, eax */
  esi = eax;
/* 99abde: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x99abe4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 99abe4: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 99abe8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 99abea: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 99abec: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 99abed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99abee: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 99abf1: call dword ptr [0xb02208] */
  { uint32_t t = R32((uint32_t)(0xb02208u)); esp -= 4; W32(esp, 0x99abf7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 99abf7: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 99abf9: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x99abffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 99abff: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 99ac01: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 99ac03: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 99ac04: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99ac05: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* 99ac08: call dword ptr [0xb02208] */
  { uint32_t t = R32((uint32_t)(0xb02208u)); esp -= 4; W32(esp, 0x99ac0eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 99ac0e: mov eax, 0x66666667 */
  eax = 0x66666667u;
/* 99ac13: imul edi */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(edi); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* 99ac15: sar edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 99ac18: mov eax, edx */
  eax = edx;
/* 99ac1a: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 99ac1d: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 99ac1f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 99ac20: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 99ac21: call 0x99ab40 */
  esp -= 4; W32(esp, 0x99ac26u); SPILL(); f_99ab40(); if (g_unwind) return; RELOAD();
/* 99ac26: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 99ac29: lea eax, [esi + 0x14] */
  eax = (uint32_t)(esi + 0x14u);
/* 99ac2c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99ac2f: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 99ac32: mov dword ptr [eax], eax */
  W32((uint32_t)(eax), eax);
/* 99ac34: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 99ac35: mov dword ptr [esi + 4], esi */
  W32((uint32_t)(esi + 0x4u), esi);
/* 99ac38: mov dword ptr [esi], esi */
  W32((uint32_t)(esi), esi);
/* 99ac3a: mov eax, esi */
  eax = esi;
/* 99ac3c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99ac3d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_99ac40(void) {
  LOAD_REGS();
L_99ac40: /* 99ac40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99ac41: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 99ac45: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 99ac48: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99ac49: call 0x99abb0 */
  esp -= 4; W32(esp, 0x99ac4eu); SPILL(); f_99abb0(); if (g_unwind) return; RELOAD();
/* 99ac4e: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 99ac51: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99ac54: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99ac55: call dword ptr [0xb0220c] */
  { uint32_t t = R32((uint32_t)(0xb0220cu)); esp -= 4; W32(esp, 0x99ac5bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 99ac5b: mov edx, dword ptr [esi + 0x30] */
  edx = R32((uint32_t)(esi + 0x30u));
/* 99ac5e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 99ac5f: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x99ac65u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 99ac65: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 99ac68: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99ac69: call dword ptr [0xb0220c] */
  { uint32_t t = R32((uint32_t)(0xb0220cu)); esp -= 4; W32(esp, 0x99ac6fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 99ac6f: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 99ac72: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99ac73: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x99ac79u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 99ac79: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99ac7a: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x99ac80u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 99ac80: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99ac81: ret 4 */
  esp += 8; SPILL(); return;
}

void f_99ae60(void) {
  LOAD_REGS();
L_99ae60: /* 99ae60: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 99ae64: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 99ae68: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 99ae69: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99ae6a: mov esi, dword ptr [eax + 0x1c] */
  esi = R32((uint32_t)(eax + 0x1cu));
/* 99ae6d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 99ae6e: mov edi, dword ptr [ecx + 0x1c] */
  edi = R32((uint32_t)(ecx + 0x1cu));
/* 99ae71: mov eax, edi */
  eax = edi;
/* 99ae73: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 99ae75: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 99ae78: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 99ae79: mov edx, eax */
  edx = eax;
/* 99ae7b: not edx */
  edx = ~edx;
/* 99ae7d: mov ecx, edx */
  ecx = edx;
/* 99ae7f: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 99ae81: mov ebx, eax */
  ebx = eax;
/* 99ae83: and ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 99ae85: and ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 99ae87: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 99ae89: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 99ae8b: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 99ae8f: or ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 99ae91: shl ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 99ae94: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 99ae96: mov eax, dword ptr [edx + 0x28] */
  eax = R32((uint32_t)(edx + 0x28u));
/* 99ae99: mov edx, ecx */
  edx = ecx;
/* 99ae9b: sar edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 16;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 99ae9e: mov esi, ecx */
  esi = ecx;
/* 99aea0: and esi, 0xffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 99aea6: xor edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 99aea8: mov esi, dword ptr [eax + 8] */
  esi = R32((uint32_t)(eax + 0x8u));
/* 99aeab: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 99aead: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 99aeae: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 99aeb0: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 99aeb3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99aeb5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 99aeb6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99aeb7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 99aeb8: je 0x99aecc */
  if (zf) goto L_99aecc;
L_99aeba: /* 99aeba: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_99aec0: /* 99aec0: cmp dword ptr [eax + 8], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x8u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99aec3: je 0x99aed1 */
  if (zf) goto L_99aed1;
L_99aec5: /* 99aec5: mov eax, dword ptr [eax + 0x10] */
  eax = R32((uint32_t)(eax + 0x10u));
/* 99aec8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99aeca: jne 0x99aec0 */
  if (!zf) goto L_99aec0;
L_99aecc: /* 99aecc: xor eax, eax */
  eax = 0;
/* 99aece: ret 0xc */
  esp += 16; SPILL(); return;
L_99aed1: /* 99aed1: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 99aed4: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_99aee0(void) {
  LOAD_REGS();
L_99aee0: /* 99aee0: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 99aee4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 99aee5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 99aee6: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 99aeea: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99aeeb: mov esi, dword ptr [ebp + 0x1c] */
  esi = R32((uint32_t)(ebp + 0x1cu));
/* 99aeee: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 99aeef: mov edi, dword ptr [eax + 0x1c] */
  edi = R32((uint32_t)(eax + 0x1cu));
/* 99aef2: mov eax, edi */
  eax = edi;
/* 99aef4: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 99aef6: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 99aef9: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 99aefa: mov edx, eax */
  edx = eax;
/* 99aefc: not edx */
  edx = ~edx;
/* 99aefe: mov ecx, edx */
  ecx = edx;
/* 99af00: and ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 99af02: mov ebx, eax */
  ebx = eax;
/* 99af04: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 99af06: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 99af0a: and ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 99af0c: or ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 99af0e: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 99af10: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 99af12: shl ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 99af15: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 99af17: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 99af1a: mov ebx, ecx */
  ebx = ecx;
/* 99af1c: sar ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 16;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 99af1f: mov edx, ebx */
  edx = ebx;
/* 99af21: and edx, 0xffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 99af27: xor ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 99af29: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 99af2c: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 99af2e: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 99af2f: and ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 99af31: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 99af34: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99af36: je 0x99af48 */
  if (zf) goto L_99af48;
L_99af38: /* 99af38: cmp dword ptr [eax + 8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99af3b: je 0x99afc5 */
  if (zf) goto L_99afc5;
L_99af41: /* 99af41: mov eax, dword ptr [eax + 0x10] */
  eax = R32((uint32_t)(eax + 0x10u));
/* 99af44: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99af46: jne 0x99af38 */
  if (!zf) goto L_99af38;
L_99af48: /* 99af48: mov eax, dword ptr [edi + 0x30] */
  eax = R32((uint32_t)(edi + 0x30u));
/* 99af4b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99af4c: call dword ptr [0xb02214] */
  { uint32_t t = R32((uint32_t)(0xb02214u)); esp -= 4; W32(esp, 0x99af52u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 99af52: mov esi, eax */
  esi = eax;
/* 99af54: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99af56: je 0x99aff9 */
  if (zf) goto L_99aff9;
L_99af5c: /* 99af5c: mov dword ptr [esi + 8], ebx */
  W32((uint32_t)(esi + 0x8u), ebx);
/* 99af5f: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 99af62: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99af63: call dword ptr [0xb02214] */
  { uint32_t t = R32((uint32_t)(0xb02214u)); esp -= 4; W32(esp, 0x99af69u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 99af69: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 99af6d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 99af6e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 99af6f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99af70: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 99af73: call 0x92a410 */
  esp -= 4; W32(esp, 0x99af78u); SPILL(); f_92a410(); if (g_unwind) return; RELOAD();
/* 99af78: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 99af7b: mov dword ptr [eax + 8], 1 */
  W32((uint32_t)(eax + 0x8u), 0x1u);
/* 99af82: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 99af85: mov edx, dword ptr [edi + 0x28] */
  edx = R32((uint32_t)(edi + 0x28u));
/* 99af88: mov eax, ecx */
  eax = ecx;
/* 99af8a: and ecx, 0xffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 99af90: sar eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 16;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 99af93: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 99af95: mov ecx, dword ptr [edx + 8] */
  ecx = R32((uint32_t)(edx + 0x8u));
/* 99af98: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 99af99: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 99af9b: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 99af9d: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 99afa0: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* 99afa3: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 99afa5: mov dword ptr [edx + eax*4], esi */
  W32((uint32_t)(edx + eax*4), esi);
/* 99afa8: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 99afaa: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 99afad: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 99afaf: mov ecx, eax */
  ecx = eax;
/* 99afb1: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 99afb4: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 99afb7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 99afb8: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 99afba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99afbb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 99afbc: mov eax, 1 */
  eax = 0x1u;
/* 99afc1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 99afc2: ret 0xc */
  esp += 16; SPILL(); return;
L_99afc5: /* 99afc5: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 99afc8: cmp dword ptr [ecx + 8], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x8u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99afcc: je 0x99afd7 */
  if (zf) goto L_99afd7;
L_99afce: /* 99afce: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 99afcf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99afd0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 99afd1: xor eax, eax */
  eax = 0;
/* 99afd3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 99afd4: ret 0xc */
  esp += 16; SPILL(); return;
L_99afd7: /* 99afd7: mov dword ptr [ecx + 8], 2 */
  W32((uint32_t)(ecx + 0x8u), 0x2u);
/* 99afde: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 99afe0: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 99afe3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 99afe4: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 99afe7: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 99afea: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 99afec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99afed: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 99afee: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 99aff0: mov eax, 1 */
  eax = 0x1u;
/* 99aff5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 99aff6: ret 0xc */
  esp += 16; SPILL(); return;
L_99aff9: /* 99aff9: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 99affd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99affe: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 99afff: call dword ptr [edi + 0x34] */
  { uint32_t t = R32((uint32_t)(edi + 0x34u)); esp -= 4; W32(esp, 0x99b002u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 99b002: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 99b003: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99b004: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 99b005: mov eax, 1 */
  eax = 0x1u;
/* 99b00a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 99b00b: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_99b010(void) {
  LOAD_REGS();
L_99b010: /* 99b010: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 99b014: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 99b018: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 99b019: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99b01a: mov esi, dword ptr [eax + 0x1c] */
  esi = R32((uint32_t)(eax + 0x1cu));
/* 99b01d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 99b01e: mov edi, dword ptr [ecx + 0x1c] */
  edi = R32((uint32_t)(ecx + 0x1cu));
/* 99b021: mov eax, edi */
  eax = edi;
/* 99b023: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 99b025: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 99b028: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 99b029: mov edx, eax */
  edx = eax;
/* 99b02b: mov ebx, eax */
  ebx = eax;
/* 99b02d: and ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 99b02f: not edx */
  edx = ~edx;
/* 99b031: mov ecx, edx */
  ecx = edx;
/* 99b033: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 99b035: and ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 99b037: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 99b039: or ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 99b03b: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 99b03f: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 99b041: mov edx, dword ptr [ebx + 0x28] */
  edx = R32((uint32_t)(ebx + 0x28u));
/* 99b044: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 99b046: shl ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 99b049: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 99b04b: mov eax, ecx */
  eax = ecx;
/* 99b04d: sar eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 16;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 99b050: mov esi, ecx */
  esi = ecx;
/* 99b052: and esi, 0xffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 99b058: xor eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 99b05a: mov esi, dword ptr [edx + 8] */
  esi = R32((uint32_t)(edx + 0x8u));
/* 99b05d: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 99b05e: and esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 99b060: mov esi, dword ptr [edi + esi*4] */
  esi = R32((uint32_t)(edi + esi*4));
/* 99b063: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99b065: je 0x99b11f */
  if (zf) goto L_99b11f;
L_99b06b: /* 99b06b: nop  */
/* 99b06c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_99b070: /* 99b070: cmp dword ptr [esi + 8], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x8u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99b073: je 0x99b087 */
  if (zf) goto L_99b087;
L_99b075: /* 99b075: mov esi, dword ptr [esi + 0x10] */
  esi = R32((uint32_t)(esi + 0x10u));
/* 99b078: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99b07a: jne 0x99b070 */
  if (!zf) goto L_99b070;
L_99b07c: /* 99b07c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 99b07d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99b07e: mov eax, 1 */
  eax = 0x1u;
/* 99b083: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 99b084: ret 0xc */
  esp += 16; SPILL(); return;
L_99b087: /* 99b087: mov edi, dword ptr [esi + 0xc] */
  edi = R32((uint32_t)(esi + 0xcu));
/* 99b08a: mov edi, dword ptr [edi + 8] */
  edi = R32((uint32_t)(edi + 0x8u));
/* 99b08d: cmp edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99b090: je 0x99b0a4 */
  if (zf) goto L_99b0a4;
L_99b092: /* 99b092: cmp edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99b095: je 0x99b09f */
  if (zf) goto L_99b09f;
L_99b097: /* 99b097: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 99b098: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99b099: xor eax, eax */
  eax = 0;
/* 99b09b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 99b09c: ret 0xc */
  esp += 16; SPILL(); return;
L_99b09f: /* 99b09f: cmp edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99b0a2: jne 0x99b100 */
  if (!zf) goto L_99b100;
L_99b0a4: /* 99b0a4: mov edi, dword ptr [edx + 8] */
  edi = R32((uint32_t)(edx + 0x8u));
/* 99b0a7: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 99b0a9: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 99b0aa: and edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 99b0ac: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* 99b0af: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99b0b1: lea edx, [edx + edi*4] */
  edx = (uint32_t)(edx + edi*4);
/* 99b0b4: je 0x99b0cd */
  if (zf) goto L_99b0cd;
L_99b0b6: /* 99b0b6: cmp dword ptr [eax + 8], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x8u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99b0b9: je 0x99b0c6 */
  if (zf) goto L_99b0c6;
L_99b0bb: /* 99b0bb: lea edx, [eax + 0x10] */
  edx = (uint32_t)(eax + 0x10u);
/* 99b0be: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 99b0c0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99b0c2: jne 0x99b0b6 */
  if (!zf) goto L_99b0b6;
L_99b0c4: /* 99b0c4: jmp 0x99b0cd */
  goto L_99b0cd;
L_99b0c6: /* 99b0c6: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 99b0c8: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 99b0cb: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
L_99b0cd: /* 99b0cd: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 99b0cf: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 99b0d2: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 99b0d5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 99b0d8: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 99b0da: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 99b0dc: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 99b0df: mov ecx, dword ptr [ebx + 0x2c] */
  ecx = R32((uint32_t)(ebx + 0x2cu));
/* 99b0e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99b0e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99b0e4: call dword ptr [0xb02218] */
  { uint32_t t = R32((uint32_t)(0xb02218u)); esp -= 4; W32(esp, 0x99b0eau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 99b0ea: mov edx, dword ptr [ebx + 0x30] */
  edx = R32((uint32_t)(ebx + 0x30u));
/* 99b0ed: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99b0ee: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 99b0ef: call dword ptr [0xb02218] */
  { uint32_t t = R32((uint32_t)(0xb02218u)); esp -= 4; W32(esp, 0x99b0f5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 99b0f5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 99b0f6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99b0f7: mov eax, 1 */
  eax = 0x1u;
/* 99b0fc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 99b0fd: ret 0xc */
  esp += 16; SPILL(); return;
L_99b100: /* 99b100: mov ecx, dword ptr [ebx + 0x14] */
  ecx = R32((uint32_t)(ebx + 0x14u));
/* 99b103: lea eax, [ebx + 0x14] */
  eax = (uint32_t)(ebx + 0x14u);
/* 99b106: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 99b108: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 99b10b: mov edx, ecx */
  edx = ecx;
/* 99b10d: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 99b110: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 99b113: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 99b115: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 99b118: mov dword ptr [ecx + 8], 3 */
  W32((uint32_t)(ecx + 0x8u), 0x3u);
L_99b11f: /* 99b11f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 99b120: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99b121: mov eax, 1 */
  eax = 0x1u;
/* 99b126: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 99b127: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_99b130(void) {
  LOAD_REGS();
L_99b130: /* 99b130: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99b131: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 99b132: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 99b136: mov esi, dword ptr [edi + 0x14] */
  esi = R32((uint32_t)(edi + 0x14u));
/* 99b139: lea eax, [edi + 0x14] */
  eax = (uint32_t)(edi + 0x14u);
/* 99b13c: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99b13e: je 0x99b1ab */
  if (zf) goto L_99b1ab;
L_99b140: /* 99b140: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 99b141: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
L_99b142: /* 99b142: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 99b145: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 99b148: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 99b14a: mov ecx, edx */
  ecx = edx;
/* 99b14c: sar ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 16;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 99b14f: mov ebp, edx */
  ebp = edx;
/* 99b151: and ebp, 0xffff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 99b157: xor ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 99b159: mov ebp, dword ptr [eax + 8] */
  ebp = R32((uint32_t)(eax + 0x8u));
/* 99b15c: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 99b15e: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  ebp = r;
  }
/* 99b15f: and ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 99b161: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 99b164: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 99b166: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99b168: je 0x99b187 */
  if (zf) goto L_99b187;
L_99b16a: /* 99b16a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_99b170: /* 99b170: cmp dword ptr [eax + 8], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99b173: je 0x99b180 */
  if (zf) goto L_99b180;
L_99b175: /* 99b175: lea ecx, [eax + 0x10] */
  ecx = (uint32_t)(eax + 0x10u);
/* 99b178: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 99b17a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99b17c: jne 0x99b170 */
  if (!zf) goto L_99b170;
L_99b17e: /* 99b17e: jmp 0x99b187 */
  goto L_99b187;
L_99b180: /* 99b180: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 99b182: mov eax, dword ptr [edx + 0x10] */
  eax = R32((uint32_t)(edx + 0x10u));
/* 99b185: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
L_99b187: /* 99b187: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 99b18a: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 99b18d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99b18e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 99b18f: call dword ptr [0xb02218] */
  { uint32_t t = R32((uint32_t)(0xb02218u)); esp -= 4; W32(esp, 0x99b195u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 99b195: mov eax, dword ptr [edi + 0x30] */
  eax = R32((uint32_t)(edi + 0x30u));
/* 99b198: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99b199: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99b19a: call dword ptr [0xb02218] */
  { uint32_t t = R32((uint32_t)(0xb02218u)); esp -= 4; W32(esp, 0x99b1a0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 99b1a0: lea eax, [edi + 0x14] */
  eax = (uint32_t)(edi + 0x14u);
/* 99b1a3: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99b1a5: mov esi, ebx */
  esi = ebx;
/* 99b1a7: jne 0x99b142 */
  if (!zf) goto L_99b142;
L_99b1a9: /* 99b1a9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 99b1aa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_99b1ab: /* 99b1ab: mov dword ptr [eax], eax */
  W32((uint32_t)(eax), eax);
/* 99b1ad: mov dword ptr [edi + 0x18], eax */
  W32((uint32_t)(edi + 0x18u), eax);
/* 99b1b0: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 99b1b2: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99b1b4: je 0x99b1cc */
  if (zf) goto L_99b1cc;
L_99b1b6: /* 99b1b6: mov ecx, 2 */
  ecx = 0x2u;
/* 99b1bb: nop  */
/* 99b1bc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_99b1c0: /* 99b1c0: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 99b1c3: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 99b1c6: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 99b1c8: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99b1ca: jne 0x99b1c0 */
  if (!zf) goto L_99b1c0;
L_99b1cc: /* 99b1cc: mov dword ptr [edi], edi */
  W32((uint32_t)(edi), edi);
/* 99b1ce: mov dword ptr [edi + 4], edi */
  W32((uint32_t)(edi + 0x4u), edi);
/* 99b1d1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 99b1d2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99b1d3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_99b1e0(void) {
  LOAD_REGS();
L_99b1e0: /* 99b1e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99b1e1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 99b1e5: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 99b1e8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 99b1e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99b1ea: call dword ptr [0xb02220] */
  { uint32_t t = R32((uint32_t)(0xb02220u)); esp -= 4; W32(esp, 0x99b1f0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 99b1f0: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 99b1f3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99b1f4: mov edi, eax */
  edi = eax;
/* 99b1f6: call dword ptr [0xb0221c] */
  { uint32_t t = R32((uint32_t)(0xb0221cu)); esp -= 4; W32(esp, 0x99b1fcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 99b1fc: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 99b1fe: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 99b1ff: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99b200: ret 4 */
  esp += 8; SPILL(); return;
}

void f_99b210(void) {
  LOAD_REGS();
L_99b210: /* 99b210: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 99b214: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 99b218: mov dword ptr [ecx + 0x34], eax */
  W32((uint32_t)(ecx + 0x34u), eax);
/* 99b21b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_99b230(void) {
  LOAD_REGS();
L_99b230: /* 99b230: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 99b234: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 99b238: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 99b23a: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 99b23c: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 99b23f: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 99b242: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 99b245: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 99b249: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* 99b24c: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 99b250: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 99b253: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 99b256: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 99b259: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 99b25c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 99b25e: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 99b260: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 99b262: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 99b264: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 99b268: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 99b26a: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 99b26d: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 99b26f: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 99b271: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 99b273: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 99b275: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 99b278: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 99b27a: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 99b27e: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 99b282: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 99b286: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 99b28c: fst dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0);
/* 99b290: fcomp dword ptr [esp + 0x1c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x1cu)));
  FPOP();
/* 99b294: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99b296: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 99b299: jne 0x99b2d5 */
  if (!zf) goto L_99b2d5;
L_99b29b: /* 99b29b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 99b29d: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 99b2a1: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 99b2a4: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 99b2a6: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 99b2a8: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 99b2aa: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 99b2ad: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 99b2b1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 99b2b3: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 99b2b7: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 99b2b9: fsubr dword ptr [esp + 4] */
  ST0 = (F32((uint32_t)(esp + 0x4u))) - ST0;
/* 99b2bd: fdiv dword ptr [esp + 8] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x8u)));
/* 99b2c1: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 99b2c3: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 99b2c5: mov eax, 1 */
  eax = 0x1u;
/* 99b2ca: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 99b2ce: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 99b2d0: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 99b2d2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99b2d4: ret  */
  esp += 4; SPILL(); return;
L_99b2d5: /* 99b2d5: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 99b2d9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99b2db: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 99b2df: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99b2e1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99b2e3: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 99b2e7: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 99b2e9: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 99b2ef: xor eax, eax */
  eax = 0;
/* 99b2f1: ret  */
  esp += 4; SPILL(); return;
}

void f_99b300(void) {
  LOAD_REGS();
L_99b300: /* 99b300: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 99b303: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 99b307: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 99b30b: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 99b30d: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 99b30f: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 99b312: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 99b315: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 99b318: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 99b31c: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* 99b31f: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 99b323: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 99b326: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 99b329: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 99b32b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 99b32d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 99b32f: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 99b331: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 99b333: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 99b335: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 99b337: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 99b339: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 99b33b: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 99b33f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99b341: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99b343: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99b345: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 99b348: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 99b34b: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 99b34e: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 99b351: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 99b353: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 99b355: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 99b357: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 99b359: fst dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0);
/* 99b35d: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 99b361: fsubr dword ptr [esp + 0xc] */
  ST0 = (F32((uint32_t)(esp + 0xcu))) - ST0;
/* 99b365: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 99b369: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 99b36b: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 99b36d: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 99b36f: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 99b372: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 99b374: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 99b376: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 99b379: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 99b37b: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 99b37f: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 99b382: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 99b384: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 99b387: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 99b389: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 99b38b: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 99b38d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 99b38f: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 99b393: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 99b397: fmul dword ptr [0xa214dc] */
  ST0 = ST0 * (F32((uint32_t)(0xa214dcu)));
/* 99b39d: fcomp dword ptr [esp + 0x20] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x20u)));
  FPOP();
/* 99b3a1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99b3a3: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99b3a6: jp 0x99b5a0 */
  if (pf) goto L_99b5a0;
L_99b3ac: /* 99b3ac: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 99b3b0: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 99b3b4: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 99b3b8: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 99b3bc: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 99b3be: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 99b3c2: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 99b3c6: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 99b3ca: fcomp dword ptr [esp + 4] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x4u)));
  FPOP();
/* 99b3ce: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99b3d0: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 99b3d3: jne 0x99b3db */
  if (!zf) goto L_99b3db;
L_99b3d5: /* 99b3d5: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 99b3d9: jmp 0x99b3f6 */
  goto L_99b3f6;
L_99b3db: /* 99b3db: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 99b3df: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 99b3e3: fcomp dword ptr [esp + 4] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x4u)));
  FPOP();
/* 99b3e7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99b3e9: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99b3ec: jp 0x99b4b6 */
  if (pf) goto L_99b4b6;
L_99b3f2: /* 99b3f2: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
L_99b3f6: /* 99b3f6: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 99b3fa: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 99b3fc: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 99b400: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 99b402: fsub dword ptr [esp] */
  ST0 = ST0 - (F32((uint32_t)(esp)));
/* 99b406: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 99b40a: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 99b40e: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 99b412: fcomp dword ptr [esp + 0x2c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x2cu)));
  FPOP();
/* 99b416: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99b418: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 99b41b: jne 0x99b423 */
  if (!zf) goto L_99b423;
L_99b41d: /* 99b41d: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 99b421: jmp 0x99b43a */
  goto L_99b43a;
L_99b423: /* 99b423: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 99b427: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 99b42b: fcomp dword ptr [esp + 0x2c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x2cu)));
  FPOP();
/* 99b42f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99b431: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99b434: jp 0x99b4a9 */
  if (pf) goto L_99b4a9;
L_99b436: /* 99b436: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
L_99b43a: /* 99b43a: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 99b43e: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 99b440: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 99b444: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 99b446: fadd dword ptr [esp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x10u)));
/* 99b44a: fcom dword ptr [esp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x18u)));
/* 99b44e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99b450: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99b453: jp 0x99b459 */
  if (pf) goto L_99b459;
L_99b455: /* 99b455: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 99b457: jmp 0x99b45d */
  goto L_99b45d;
L_99b459: /* 99b459: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
L_99b45d: /* 99b45d: fcomp dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
  FPOP();
/* 99b461: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99b463: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99b466: jp 0x99b483 */
  if (pf) goto L_99b483;
L_99b468: /* 99b468: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99b46a: mov eax, 1 */
  eax = 0x1u;
/* 99b46f: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 99b473: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 99b475: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 99b479: mov dword ptr [ecx], 0 */
  W32((uint32_t)(ecx), 0x0u);
/* 99b47f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99b482: ret  */
  esp += 4; SPILL(); return;
L_99b483: /* 99b483: fcom dword ptr [esp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x18u)));
/* 99b487: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99b489: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99b48c: jnp 0x99b494 */
  if (!pf) goto L_99b494;
L_99b48e: /* 99b48e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99b490: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
L_99b494: /* 99b494: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 99b496: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 99b49a: mov dword ptr [ecx], 0 */
  W32((uint32_t)(ecx), 0x0u);
/* 99b4a0: mov eax, 1 */
  eax = 0x1u;
/* 99b4a5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99b4a8: ret  */
  esp += 4; SPILL(); return;
L_99b4a9: /* 99b4a9: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 99b4ad: fdiv dword ptr [esp + 0xc] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0xcu)));
/* 99b4b1: jmp 0x99b587 */
  goto L_99b587;
L_99b4b6: /* 99b4b6: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 99b4ba: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 99b4be: fsub dword ptr [esp] */
  ST0 = ST0 - (F32((uint32_t)(esp)));
/* 99b4c2: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 99b4c6: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 99b4ca: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 99b4ce: fcomp dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
  FPOP();
/* 99b4d2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99b4d4: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 99b4d7: jne 0x99b4df */
  if (!zf) goto L_99b4df;
L_99b4d9: /* 99b4d9: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 99b4dd: jmp 0x99b4f6 */
  goto L_99b4f6;
L_99b4df: /* 99b4df: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 99b4e3: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 99b4e7: fcomp dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
  FPOP();
/* 99b4eb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99b4ed: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99b4f0: jp 0x99b56d */
  if (pf) goto L_99b56d;
L_99b4f2: /* 99b4f2: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
L_99b4f6: /* 99b4f6: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 99b4fa: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 99b4fc: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 99b500: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 99b502: fadd dword ptr [esp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x10u)));
/* 99b506: fcom dword ptr [esp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x18u)));
/* 99b50a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99b50c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99b50f: jp 0x99b515 */
  if (pf) goto L_99b515;
L_99b511: /* 99b511: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 99b513: jmp 0x99b519 */
  goto L_99b519;
L_99b515: /* 99b515: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
L_99b519: /* 99b519: fcomp dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
  FPOP();
/* 99b51d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99b51f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99b522: jp 0x99b543 */
  if (pf) goto L_99b543;
L_99b524: /* 99b524: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 99b528: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99b52a: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 99b52e: mov eax, 1 */
  eax = 0x1u;
/* 99b533: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 99b535: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 99b539: mov dword ptr [ecx], 0 */
  W32((uint32_t)(ecx), 0x0u);
/* 99b53f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99b542: ret  */
  esp += 4; SPILL(); return;
L_99b543: /* 99b543: fcom dword ptr [esp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x18u)));
/* 99b547: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99b549: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99b54c: jnp 0x99b554 */
  if (!pf) goto L_99b554;
L_99b54e: /* 99b54e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99b550: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
L_99b554: /* 99b554: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 99b558: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 99b55a: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 99b55e: mov dword ptr [ecx], 0 */
  W32((uint32_t)(ecx), 0x0u);
/* 99b564: mov eax, 1 */
  eax = 0x1u;
/* 99b569: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99b56c: ret  */
  esp += 4; SPILL(); return;
L_99b56d: /* 99b56d: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 99b573: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 99b577: fdiv dword ptr [esp + 0x20] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x20u)));
/* 99b57b: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 99b57f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 99b581: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 99b583: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
L_99b587: /* 99b587: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 99b58b: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 99b58f: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 99b591: mov dword ptr [ecx], 0 */
  W32((uint32_t)(ecx), 0x0u);
/* 99b597: mov eax, 1 */
  eax = 0x1u;
/* 99b59c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99b59f: ret  */
  esp += 4; SPILL(); return;
L_99b5a0: /* 99b5a0: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 99b5a4: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 99b5aa: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99b5ac: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 99b5af: jne 0x99b5bf */
  if (!zf) goto L_99b5bf;
L_99b5b1: /* 99b5b1: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 99b5b5: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 99b5b9: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 99b5bd: jmp 0x99b5cb */
  goto L_99b5cb;
L_99b5bf: /* 99b5bf: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 99b5c3: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 99b5c7: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
L_99b5cb: /* 99b5cb: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 99b5cf: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 99b5d3: fadd dword ptr [esp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x10u)));
/* 99b5d7: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 99b5db: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 99b5df: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 99b5e1: fadd dword ptr [esp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x10u)));
/* 99b5e5: fst dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0);
/* 99b5e9: fcomp dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
  FPOP();
/* 99b5ed: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99b5ef: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99b5f2: jp 0x99b614 */
  if (pf) goto L_99b614;
L_99b5f4: /* 99b5f4: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 99b5f8: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 99b5fc: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 99b600: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 99b602: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 99b606: mov dword ptr [edx], 0 */
  W32((uint32_t)(edx), 0x0u);
/* 99b60c: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 99b60e: xor eax, eax */
  eax = 0;
/* 99b610: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99b613: ret  */
  esp += 4; SPILL(); return;
L_99b614: /* 99b614: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99b616: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 99b61a: fcomp dword ptr [esp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x18u)));
  FPOP();
/* 99b61e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99b620: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 99b623: jne 0x99b649 */
  if (!zf) goto L_99b649;
L_99b625: /* 99b625: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 99b629: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 99b62d: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 99b631: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 99b633: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 99b637: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 99b63b: mov dword ptr [edx], 0 */
  W32((uint32_t)(edx), 0x0u);
/* 99b641: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 99b643: xor eax, eax */
  eax = 0;
/* 99b645: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99b648: ret  */
  esp += 4; SPILL(); return;
L_99b649: /* 99b649: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 99b64d: fcomp dword ptr [esp + 0x28] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x28u)));
  FPOP();
/* 99b651: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99b653: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99b656: jp 0x99b65e */
  if (pf) goto L_99b65e;
L_99b658: /* 99b658: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 99b65c: jmp 0x99b662 */
  goto L_99b662;
L_99b65e: /* 99b65e: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
L_99b662: /* 99b662: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 99b666: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 99b668: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 99b66a: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 99b66e: fcomp dword ptr [esp + 0x24] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x24u)));
  FPOP();
/* 99b672: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99b674: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99b677: jp 0x99b67f */
  if (pf) goto L_99b67f;
L_99b679: /* 99b679: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 99b67d: jmp 0x99b683 */
  goto L_99b683;
L_99b67f: /* 99b67f: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
L_99b683: /* 99b683: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 99b687: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 99b689: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 99b68d: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 99b68f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99b691: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 99b695: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 99b697: fsub dword ptr [esp] */
  ST0 = ST0 - (F32((uint32_t)(esp)));
/* 99b69b: fdiv dword ptr [esp + 0xc] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0xcu)));
/* 99b69f: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 99b6a1: xor eax, eax */
  eax = 0;
/* 99b6a3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99b6a6: ret  */
  esp += 4; SPILL(); return;
}

void f_99b6b0(void) {
  LOAD_REGS();
L_99b6b0: /* 99b6b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99b6b1: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 99b6b5: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 99b6b9: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 99b6bb: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 99b6bd: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 99b6c0: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 99b6c3: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 99b6c6: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 99b6ca: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* 99b6cd: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 99b6d1: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 99b6d4: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 99b6d7: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 99b6da: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 99b6dd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 99b6df: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 99b6e1: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 99b6e3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 99b6e5: fst dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0);
/* 99b6e9: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 99b6ed: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 99b6f3: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 99b6f7: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 99b6f9: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 99b6fc: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 99b6fe: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 99b701: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 99b703: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 99b705: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 99b707: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 99b709: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 99b70d: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 99b70f: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 99b712: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 99b714: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 99b716: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 99b718: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 99b71b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 99b71d: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 99b721: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 99b725: fcomp dword ptr [0xa214dc] */
  fpu_com(ST0, F32((uint32_t)(0xa214dcu)));
  FPOP();
/* 99b72b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99b72d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 99b730: jne 0x99b90e */
  if (!zf) goto L_99b90e;
L_99b736: /* 99b736: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 99b73a: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 99b73e: fsubr dword ptr [esp + 0xc] */
  ST0 = (F32((uint32_t)(esp + 0xcu))) - ST0;
/* 99b742: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 99b746: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 99b74a: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 99b74e: fcomp dword ptr [esp] */
  fpu_com(ST0, F32((uint32_t)(esp)));
  FPOP();
/* 99b752: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99b754: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 99b757: jne 0x99b75f */
  if (!zf) goto L_99b75f;
L_99b759: /* 99b759: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 99b75d: jmp 0x99b77a */
  goto L_99b77a;
L_99b75f: /* 99b75f: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 99b763: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 99b767: fcomp dword ptr [esp] */
  fpu_com(ST0, F32((uint32_t)(esp)));
  FPOP();
/* 99b76b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99b76d: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99b770: jp 0x99b82a */
  if (pf) goto L_99b82a;
L_99b776: /* 99b776: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
L_99b77a: /* 99b77a: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 99b77e: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 99b780: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 99b784: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 99b786: fsub dword ptr [esp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x1cu)));
/* 99b78a: fst dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0);
/* 99b78e: fcomp dword ptr [esp + 0x20] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x20u)));
  FPOP();
/* 99b792: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99b794: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99b797: jp 0x99b7bc */
  if (pf) goto L_99b7bc;
L_99b799: /* 99b799: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 99b79d: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
L_99b7a1: /* 99b7a1: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 99b7a3: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 99b7a7: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 99b7a9: fadd dword ptr [esp + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xcu)));
/* 99b7ad: fcom dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
/* 99b7b1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99b7b3: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99b7b6: jp 0x99b7de */
  if (pf) goto L_99b7de;
L_99b7b8: /* 99b7b8: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 99b7ba: jmp 0x99b7e2 */
  goto L_99b7e2;
L_99b7bc: /* 99b7bc: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 99b7c0: fcomp dword ptr [esp + 0x24] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x24u)));
  FPOP();
/* 99b7c4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99b7c6: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 99b7c9: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 99b7cd: jne 0x99b7d5 */
  if (!zf) goto L_99b7d5;
L_99b7cf: /* 99b7cf: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 99b7d3: jmp 0x99b7a1 */
  goto L_99b7a1;
L_99b7d5: /* 99b7d5: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 99b7d9: jmp 0x99b8fb */
  goto L_99b8fb;
L_99b7de: /* 99b7de: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
L_99b7e2: /* 99b7e2: fcomp dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
  FPOP();
/* 99b7e6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99b7e8: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99b7eb: jp 0x99b806 */
  if (pf) goto L_99b806;
L_99b7ed: /* 99b7ed: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99b7ef: mov eax, 1 */
  eax = 0x1u;
/* 99b7f4: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 99b7f8: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 99b7fa: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 99b7fe: mov dword ptr [ecx], 0 */
  W32((uint32_t)(ecx), 0x0u);
/* 99b804: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 99b805: ret  */
  esp += 4; SPILL(); return;
L_99b806: /* 99b806: fcom dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
/* 99b80a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99b80c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99b80f: jnp 0x99b817 */
  if (!pf) goto L_99b817;
L_99b811: /* 99b811: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99b813: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
L_99b817: /* 99b817: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 99b819: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 99b81d: mov dword ptr [ecx], 0 */
  W32((uint32_t)(ecx), 0x0u);
/* 99b823: mov eax, 1 */
  eax = 0x1u;
/* 99b828: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 99b829: ret  */
  esp += 4; SPILL(); return;
L_99b82a: /* 99b82a: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 99b82e: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 99b832: fsub dword ptr [esp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x1cu)));
/* 99b836: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 99b83a: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 99b83e: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 99b842: fcomp dword ptr [esp + 0x1c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x1cu)));
  FPOP();
/* 99b846: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99b848: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 99b84b: jne 0x99b853 */
  if (!zf) goto L_99b853;
L_99b84d: /* 99b84d: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 99b851: jmp 0x99b86a */
  goto L_99b86a;
L_99b853: /* 99b853: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 99b857: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 99b85b: fcomp dword ptr [esp + 0x1c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x1cu)));
  FPOP();
/* 99b85f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99b861: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99b864: jp 0x99b8dd */
  if (pf) goto L_99b8dd;
L_99b866: /* 99b866: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
L_99b86a: /* 99b86a: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 99b86e: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 99b870: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 99b874: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 99b876: fadd dword ptr [esp + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xcu)));
/* 99b87a: fcom dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
/* 99b87e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99b880: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99b883: jp 0x99b889 */
  if (pf) goto L_99b889;
L_99b885: /* 99b885: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 99b887: jmp 0x99b88d */
  goto L_99b88d;
L_99b889: /* 99b889: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
L_99b88d: /* 99b88d: fcomp dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
  FPOP();
/* 99b891: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99b893: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99b896: jp 0x99b8b5 */
  if (pf) goto L_99b8b5;
L_99b898: /* 99b898: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 99b89c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99b89e: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 99b8a2: mov eax, 1 */
  eax = 0x1u;
/* 99b8a7: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 99b8a9: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 99b8ad: mov dword ptr [ecx], 0 */
  W32((uint32_t)(ecx), 0x0u);
/* 99b8b3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 99b8b4: ret  */
  esp += 4; SPILL(); return;
L_99b8b5: /* 99b8b5: fcom dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
/* 99b8b9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99b8bb: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99b8be: jnp 0x99b8c6 */
  if (!pf) goto L_99b8c6;
L_99b8c0: /* 99b8c0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99b8c2: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
L_99b8c6: /* 99b8c6: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 99b8ca: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 99b8cc: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 99b8d0: mov dword ptr [ecx], 0 */
  W32((uint32_t)(ecx), 0x0u);
/* 99b8d6: mov eax, 1 */
  eax = 0x1u;
/* 99b8db: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 99b8dc: ret  */
  esp += 4; SPILL(); return;
L_99b8dd: /* 99b8dd: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 99b8e3: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 99b8e7: fdiv dword ptr [esp + 8] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x8u)));
/* 99b8eb: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 99b8ef: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 99b8f3: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 99b8f5: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 99b8f7: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
L_99b8fb: /* 99b8fb: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 99b8ff: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 99b901: mov dword ptr [ecx], 0 */
  W32((uint32_t)(ecx), 0x0u);
/* 99b907: mov eax, 1 */
  eax = 0x1u;
/* 99b90c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 99b90d: ret  */
  esp += 4; SPILL(); return;
L_99b90e: /* 99b90e: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 99b912: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 99b918: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99b91a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 99b91d: jne 0x99b92d */
  if (!zf) goto L_99b92d;
L_99b91f: /* 99b91f: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 99b923: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 99b927: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
/* 99b92b: jmp 0x99b939 */
  goto L_99b939;
L_99b92d: /* 99b92d: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 99b931: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 99b935: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
L_99b939: /* 99b939: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 99b93d: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 99b941: fadd dword ptr [esp + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xcu)));
/* 99b945: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 99b949: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 99b94d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 99b94f: fadd dword ptr [esp + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xcu)));
/* 99b953: fst dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0);
/* 99b957: fcomp dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
  FPOP();
/* 99b95b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99b95d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99b960: jp 0x99b980 */
  if (pf) goto L_99b980;
L_99b962: /* 99b962: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 99b966: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 99b96a: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 99b96e: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 99b970: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 99b974: mov dword ptr [edx], 0 */
  W32((uint32_t)(edx), 0x0u);
/* 99b97a: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 99b97c: xor eax, eax */
  eax = 0;
/* 99b97e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 99b97f: ret  */
  esp += 4; SPILL(); return;
L_99b980: /* 99b980: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99b982: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 99b986: fcomp dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
  FPOP();
/* 99b98a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99b98c: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 99b98f: jne 0x99b9b3 */
  if (!zf) goto L_99b9b3;
L_99b991: /* 99b991: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 99b995: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 99b999: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 99b99d: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 99b99f: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 99b9a3: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 99b9a7: mov dword ptr [edx], 0 */
  W32((uint32_t)(edx), 0x0u);
/* 99b9ad: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 99b9af: xor eax, eax */
  eax = 0;
/* 99b9b1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 99b9b2: ret  */
  esp += 4; SPILL(); return;
L_99b9b3: /* 99b9b3: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 99b9b7: fcomp dword ptr [esp + 0x24] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x24u)));
  FPOP();
/* 99b9bb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99b9bd: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99b9c0: jp 0x99b9c8 */
  if (pf) goto L_99b9c8;
L_99b9c2: /* 99b9c2: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 99b9c6: jmp 0x99b9cc */
  goto L_99b9cc;
L_99b9c8: /* 99b9c8: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
L_99b9cc: /* 99b9cc: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 99b9d0: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 99b9d2: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 99b9d4: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 99b9d8: fcomp dword ptr [esp + 0x20] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x20u)));
  FPOP();
/* 99b9dc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99b9de: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99b9e1: jp 0x99b9e9 */
  if (pf) goto L_99b9e9;
L_99b9e3: /* 99b9e3: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 99b9e7: jmp 0x99b9ed */
  goto L_99b9ed;
L_99b9e9: /* 99b9e9: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
L_99b9ed: /* 99b9ed: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 99b9f1: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 99b9f3: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 99b9f7: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 99b9f9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99b9fb: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 99b9ff: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 99ba01: fsub dword ptr [esp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x1cu)));
/* 99ba05: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 99ba07: xor eax, eax */
  eax = 0;
/* 99ba09: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 99ba0a: ret  */
  esp += 4; SPILL(); return;
}

void f_99ba10(void) {
  LOAD_REGS();
L_99ba10: /* 99ba10: mov eax, dword ptr [0xcf77ac] */
  eax = R32((uint32_t)(0xcf77acu));
/* 99ba15: lea ecx, [esp + eax*4 - 0x10] */
  ecx = (uint32_t)(esp + eax*4 + 0xfffffff0u);
/* 99ba19: lea edx, [esp - 0x10] */
  edx = (uint32_t)(esp + 0xfffffff0u);
/* 99ba1d: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 99ba20: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 99ba22: jae 0x99ba3f */
  if (!cf) goto L_99ba3f;
L_99ba24: /* 99ba24: xor eax, eax */
  eax = 0;
L_99ba26: /* 99ba26: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 99ba2a: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 99ba2d: fmul dword ptr [eax + 0xcf7798] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcf7798u)));
/* 99ba33: lea edx, [esp + eax] */
  edx = (uint32_t)(esp + eax);
/* 99ba37: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 99ba39: fstp dword ptr [esp + eax - 4] */
  WF32((uint32_t)(esp + eax + 0xfffffffcu), ST0); FPOP();
/* 99ba3d: jb 0x99ba26 */
  if (cf) goto L_99ba26;
L_99ba3f: /* 99ba3f: lea eax, [esp] */
  eax = (uint32_t)(esp);
/* 99ba43: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 99ba45: jae 0x99ba69 */
  if (!cf) goto L_99ba69;
L_99ba47: /* 99ba47: xor eax, eax */
  eax = 0;
/* 99ba49: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_99ba50: /* 99ba50: fld dword ptr [eax + 0xcf778c] */
  { double v = F32((uint32_t)(eax + 0xcf778cu)); FPUSH(v); }
/* 99ba56: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 99ba59: fadd dword ptr [esp + eax - 4] */
  ST0 = ST0 + (F32((uint32_t)(esp + eax + 0xfffffffcu)));
/* 99ba5d: lea edx, [esp + eax] */
  edx = (uint32_t)(esp + eax);
/* 99ba61: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 99ba63: fstp dword ptr [esp + eax - 4] */
  WF32((uint32_t)(esp + eax + 0xfffffffcu), ST0); FPOP();
/* 99ba67: jb 0x99ba50 */
  if (cf) goto L_99ba50;
L_99ba69: /* 99ba69: lea eax, [esp] */
  eax = (uint32_t)(esp);
/* 99ba6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99ba6e: call dword ptr [0xcf77b0] */
  { uint32_t t = R32((uint32_t)(0xcf77b0u)); esp -= 4; W32(esp, 0x99ba74u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 99ba74: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99ba77: ret  */
  esp += 4; SPILL(); return;
}

void f_99ba80(void) {
  LOAD_REGS();
L_99ba80: /* 99ba80: mov eax, dword ptr [0xcf77ac] */
  eax = R32((uint32_t)(0xcf77acu));
/* 99ba85: lea ecx, [esp + eax*4 - 0x20] */
  ecx = (uint32_t)(esp + eax*4 + 0xffffffe0u);
/* 99ba89: lea edx, [esp - 0x20] */
  edx = (uint32_t)(esp + 0xffffffe0u);
/* 99ba8d: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 99ba90: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 99ba92: jae 0x99baaf */
  if (!cf) goto L_99baaf;
L_99ba94: /* 99ba94: xor eax, eax */
  eax = 0;
L_99ba96: /* 99ba96: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 99ba9a: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 99ba9d: fmul dword ptr [eax + 0xcf7798] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcf7798u)));
/* 99baa3: lea edx, [esp + eax] */
  edx = (uint32_t)(esp + eax);
/* 99baa7: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 99baa9: fstp dword ptr [esp + eax - 4] */
  WF32((uint32_t)(esp + eax + 0xfffffffcu), ST0); FPOP();
/* 99baad: jb 0x99ba96 */
  if (cf) goto L_99ba96;
L_99baaf: /* 99baaf: lea eax, [esp] */
  eax = (uint32_t)(esp);
/* 99bab3: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 99bab5: jae 0x99bad9 */
  if (!cf) goto L_99bad9;
L_99bab7: /* 99bab7: xor eax, eax */
  eax = 0;
/* 99bab9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_99bac0: /* 99bac0: fld dword ptr [eax + 0xcf778c] */
  { double v = F32((uint32_t)(eax + 0xcf778cu)); FPUSH(v); }
/* 99bac6: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 99bac9: fadd dword ptr [esp + eax - 4] */
  ST0 = ST0 + (F32((uint32_t)(esp + eax + 0xfffffffcu)));
/* 99bacd: lea edx, [esp + eax] */
  edx = (uint32_t)(esp + eax);
/* 99bad1: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 99bad3: fstp dword ptr [esp + eax - 4] */
  WF32((uint32_t)(esp + eax + 0xfffffffcu), ST0); FPOP();
/* 99bad7: jb 0x99bac0 */
  if (cf) goto L_99bac0;
L_99bad9: /* 99bad9: lea eax, [esp] */
  eax = (uint32_t)(esp);
/* 99badd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99bade: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 99bae2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99bae3: call dword ptr [0xcf77b4] */
  { uint32_t t = R32((uint32_t)(0xcf77b4u)); esp -= 4; W32(esp, 0x99bae9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 99bae9: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 99baef: mov edx, dword ptr [0xcf77ac] */
  edx = R32((uint32_t)(0xcf77acu));
/* 99baf5: lea ecx, [esp + edx*4 + 0x18] */
  ecx = (uint32_t)(esp + edx*4 + 0x18u);
/* 99baf9: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 99bafd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99bb00: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 99bb02: jae 0x99bb1d */
  if (!cf) goto L_99bb1d;
L_99bb04: /* 99bb04: xor eax, eax */
  eax = 0;
L_99bb06: /* 99bb06: fld dword ptr [eax + 0xcf779c] */
  { double v = F32((uint32_t)(eax + 0xcf779cu)); FPUSH(v); }
/* 99bb0c: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 99bb0f: fmul dword ptr [esp + eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + eax + 0xcu)));
/* 99bb13: lea edx, [esp + eax + 0x10] */
  edx = (uint32_t)(esp + eax + 0x10u);
/* 99bb17: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 99bb19: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 99bb1b: jb 0x99bb06 */
  if (cf) goto L_99bb06;
L_99bb1d: /* 99bb1d: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99bb20: ret  */
  esp += 4; SPILL(); return;
}

void f_99bb30(void) {
  LOAD_REGS();
L_99bb30: /* 99bb30: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 99bb31: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 99bb35: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 99bb37: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 99bb38: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99bb39: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 99bb3a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99bb3b: call dword ptr [esp + 0x30] */
  { uint32_t t = R32((uint32_t)(esp + 0x30u)); esp -= 4; W32(esp, 0x99bb3fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 99bb3f: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
/* 99bb43: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 99bb47: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 99bb4a: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 99bb4c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99bb4d: call dword ptr [esp + 0x34] */
  { uint32_t t = R32((uint32_t)(esp + 0x34u)); esp -= 4; W32(esp, 0x99bb51u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 99bb51: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 99bb53: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* 99bb57: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 99bb59: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99bb5c: fcomp dword ptr [ebp] */
  fpu_com(ST0, F32((uint32_t)(ebp)));
  FPOP();
/* 99bb5f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99bb61: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 99bb64: jne 0x99bb78 */
  if (!zf) goto L_99bb78;
L_99bb66: /* 99bb66: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 99bb68: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 99bb6a: mov dword ptr [ebx], edx */
  W32((uint32_t)(ebx), edx);
/* 99bb6c: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 99bb6e: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 99bb71: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 99bb73: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 99bb75: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
L_99bb78: /* 99bb78: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 99bb7a: fsub dword ptr [ebx] */
  ST0 = ST0 - (F32((uint32_t)(ebx)));
/* 99bb7c: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 99bb80: fmul dword ptr [0xa21bd8] */
  ST0 = ST0 * (F32((uint32_t)(0xa21bd8u)));
/* 99bb86: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 99bb88: fst dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0);
/* 99bb8c: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 99bb90: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 99bb92: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99bb93: call dword ptr [esp + 0x30] */
  { uint32_t t = R32((uint32_t)(esp + 0x30u)); esp -= 4; W32(esp, 0x99bb97u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 99bb97: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 99bb99: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 99bb9d: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 99bba0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99bba3: fcomp dword ptr [edi] */
  fpu_com(ST0, F32((uint32_t)(edi)));
  FPOP();
/* 99bba5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99bba7: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99bbaa: jp 0x99bd8f */
  if (pf) goto L_99bd8f;
L_99bbb0: /* 99bbb0: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 99bbb2: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 99bbb6: fsub dword ptr [edx] */
  ST0 = ST0 - (F32((uint32_t)(edx)));
/* 99bbb8: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 99bbbc: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 99bbbe: fsub dword ptr [ebp] */
  ST0 = ST0 - (F32((uint32_t)(ebp)));
/* 99bbc1: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 99bbc3: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 99bbc5: fsub dword ptr [ebx] */
  ST0 = ST0 - (F32((uint32_t)(ebx)));
/* 99bbc7: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 99bbc9: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 99bbcb: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 99bbcd: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 99bbcf: fsub st(3) */
  ST0 = ST0 - STI(3);
/* 99bbd1: fst dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0);
/* 99bbd5: fabs  */
  ST0 = fabs(ST0);
/* 99bbd7: fcom dword ptr [0xa21be0] */
  fpu_com(ST0, F32((uint32_t)(0xa21be0u)));
/* 99bbdd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99bbdf: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 99bbe2: je 0x99bbec */
  if (zf) goto L_99bbec;
L_99bbe4: /* 99bbe4: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99bbe6: fld dword ptr [0xa21be0] */
  { double v = F32((uint32_t)(0xa21be0u)); FPUSH(v); }
L_99bbec: /* 99bbec: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 99bbf0: fcomp qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
  FPOP();
/* 99bbf6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99bbf8: fabs  */
  ST0 = fabs(ST0);
/* 99bbfa: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 99bbfd: je 0x99bc01 */
  if (zf) goto L_99bc01;
L_99bbff: /* 99bbff: fchs  */
  ST0 = -ST0;
L_99bc01: /* 99bc01: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 99bc03: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 99bc05: fxch st(4) */
  { double t = ST0; ST0 = STI(4); STI(4) = t; }
/* 99bc07: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 99bc09: fsubp st(4) */
  STI(4) = STI(4) - ST0;
  FPOP();
/* 99bc0b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 99bc0d: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 99bc0f: fdivp st(3) */
  STI(3) = STI(3) / ST0;
  FPOP();
/* 99bc11: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 99bc13: fsubr dword ptr [esi] */
  ST0 = (F32((uint32_t)(esi))) - ST0;
/* 99bc15: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 99bc19: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 99bc1b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99bc1d: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 99bc1f: fsub dword ptr [esi] */
  ST0 = ST0 - (F32((uint32_t)(esi)));
/* 99bc21: fst dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0);
/* 99bc25: fmul dword ptr [0xa21bdc] */
  ST0 = ST0 * (F32((uint32_t)(0xa21bdcu)));
/* 99bc2b: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 99bc2d: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 99bc31: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 99bc33: fsub dword ptr [esp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x18u)));
/* 99bc37: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 99bc3b: fsub dword ptr [ebx] */
  ST0 = ST0 - (F32((uint32_t)(ebx)));
/* 99bc3d: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 99bc3f: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 99bc45: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99bc47: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 99bc4a: jne 0x99bc8f */
  if (!zf) goto L_99bc8f;
L_99bc4c: /* 99bc4c: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 99bc50: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99bc51: call dword ptr [esp + 0x30] */
  { uint32_t t = R32((uint32_t)(esp + 0x30u)); esp -= 4; W32(esp, 0x99bc55u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 99bc55: fcom dword ptr [ebp] */
  fpu_com(ST0, F32((uint32_t)(ebp)));
/* 99bc58: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99bc5b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99bc5d: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99bc60: jnp 0x99bd69 */
  if (!pf) goto L_99bd69;
L_99bc66: /* 99bc66: fcom dword ptr [edi] */
  fpu_com(ST0, F32((uint32_t)(edi)));
/* 99bc68: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99bc6a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 99bc6d: je 0x99bd86 */
  if (zf) goto L_99bd86;
L_99bc73: /* 99bc73: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99bc75: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 99bc77: fsub dword ptr [esi] */
  ST0 = ST0 - (F32((uint32_t)(esi)));
/* 99bc79: fmul dword ptr [0xa21bd8] */
  ST0 = ST0 * (F32((uint32_t)(0xa21bd8u)));
/* 99bc7f: fadd dword ptr [ebx] */
  ST0 = ST0 + (F32((uint32_t)(ebx)));
/* 99bc81: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 99bc85: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 99bc89: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 99bc8a: jmp 0x99bd2e */
  goto L_99bd2e;
L_99bc8f: /* 99bc8f: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 99bc93: fsub dword ptr [esp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x24u)));
/* 99bc97: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 99bc99: fsub dword ptr [esp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x18u)));
/* 99bc9d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 99bc9f: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 99bca5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99bca7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 99bcaa: jne 0x99bcf5 */
  if (!zf) goto L_99bcf5;
L_99bcac: /* 99bcac: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 99bcb0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99bcb2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99bcb3: call dword ptr [esp + 0x30] */
  { uint32_t t = R32((uint32_t)(esp + 0x30u)); esp -= 4; W32(esp, 0x99bcb7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 99bcb7: fcom dword ptr [ebp] */
  fpu_com(ST0, F32((uint32_t)(ebp)));
/* 99bcba: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99bcbd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99bcbf: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99bcc2: jp 0x99bd35 */
  if (pf) goto L_99bd35;
L_99bcc4: /* 99bcc4: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 99bcc6: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 99bcca: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 99bcce: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 99bcd0: mov dword ptr [ebx], edx */
  W32((uint32_t)(ebx), edx);
/* 99bcd2: fsub dword ptr [esi] */
  ST0 = ST0 - (F32((uint32_t)(esi)));
/* 99bcd4: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 99bcd7: fmul dword ptr [0xa21bd8] */
  ST0 = ST0 * (F32((uint32_t)(0xa21bd8u)));
/* 99bcdd: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 99bcdf: fadd dword ptr [esp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x18u)));
/* 99bce3: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 99bce7: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 99bceb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99bcec: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 99bcef: call dword ptr [esp + 0x30] */
  { uint32_t t = R32((uint32_t)(esp + 0x30u)); esp -= 4; W32(esp, 0x99bcf3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 99bcf3: jmp 0x99bd32 */
  goto L_99bd32;
L_99bcf5: /* 99bcf5: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 99bcf9: fsub dword ptr [ebx] */
  ST0 = ST0 - (F32((uint32_t)(ebx)));
/* 99bcfb: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 99bcfd: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 99bd03: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99bd05: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99bd07: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 99bd0a: jne 0x99bd19 */
  if (!zf) goto L_99bd19;
L_99bd0c: /* 99bd0c: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 99bd10: mov eax, edx */
  eax = edx;
/* 99bd12: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 99bd16: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99bd17: jmp 0x99bd2e */
  goto L_99bd2e;
L_99bd19: /* 99bd19: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 99bd1d: fmul dword ptr [0xa21bd8] */
  ST0 = ST0 * (F32((uint32_t)(0xa21bd8u)));
/* 99bd23: fadd dword ptr [ebx] */
  ST0 = ST0 + (F32((uint32_t)(ebx)));
/* 99bd25: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 99bd29: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 99bd2d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
L_99bd2e: /* 99bd2e: call dword ptr [esp + 0x30] */
  { uint32_t t = R32((uint32_t)(esp + 0x30u)); esp -= 4; W32(esp, 0x99bd32u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_99bd32: /* 99bd32: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_99bd35: /* 99bd35: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 99bd37: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 99bd3b: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 99bd3d: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 99bd3f: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 99bd43: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 99bd45: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 99bd49: mov dword ptr [ebx], edx */
  W32((uint32_t)(ebx), edx);
/* 99bd4b: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 99bd4d: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 99bd4f: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* 99bd52: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 99bd54: fst dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0);
/* 99bd57: fcomp dword ptr [edi] */
  fpu_com(ST0, F32((uint32_t)(edi)));
  FPOP();
/* 99bd59: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99bd5b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99bd5e: jnp 0x99bbb0 */
  if (!pf) goto L_99bbb0;
L_99bd64: /* 99bd64: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 99bd65: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99bd66: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 99bd67: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 99bd68: ret  */
  esp += 4; SPILL(); return;
L_99bd69: /* 99bd69: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 99bd6b: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 99bd6f: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 99bd73: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 99bd75: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 99bd79: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 99bd7b: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 99bd7d: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 99bd7f: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 99bd81: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 99bd82: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99bd83: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 99bd84: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 99bd85: ret  */
  esp += 4; SPILL(); return;
L_99bd86: /* 99bd86: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 99bd8a: mov dword ptr [ebx], edx */
  W32((uint32_t)(ebx), edx);
/* 99bd8c: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
L_99bd8f: /* 99bd8f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 99bd90: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99bd91: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 99bd92: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 99bd93: ret  */
  esp += 4; SPILL(); return;
}

void f_99bda0(void) {
  LOAD_REGS();
L_99bda0: /* 99bda0: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 99bda4: sub esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 99bda7: fcomp dword ptr [esp + 0x4c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x4cu)));
  FPOP();
/* 99bdab: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99bdad: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99bdb0: jp 0x99bdbc */
  if (pf) goto L_99bdbc;
L_99bdb2: /* 99bdb2: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 99bdb6: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 99bdba: jmp 0x99bdc4 */
  goto L_99bdc4;
L_99bdbc: /* 99bdbc: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 99bdc0: mov dword ptr [esp + 4], ecx */
  W32((uint32_t)(esp + 0x4u), ecx);
L_99bdc4: /* 99bdc4: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 99bdc8: fcomp dword ptr [esp + 0x4c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x4cu)));
  FPOP();
/* 99bdcc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99bdce: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 99bdd1: jne 0x99bddd */
  if (!zf) goto L_99bddd;
L_99bdd3: /* 99bdd3: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 99bdd7: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
/* 99bddb: jmp 0x99bde5 */
  goto L_99bde5;
L_99bddd: /* 99bddd: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 99bde1: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
L_99bde5: /* 99bde5: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 99bde9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99bdea: mov esi, ecx */
  esi = ecx;
/* 99bdec: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 99bded: mov edx, ecx */
  edx = ecx;
/* 99bdef: mov eax, ecx */
  eax = ecx;
/* 99bdf1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99bdf2: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 99bdf6: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 99bdfa: mov dword ptr [esp + 0x50], eax */
  W32((uint32_t)(esp + 0x50u), eax);
/* 99bdfe: call dword ptr [esp + 0x5c] */
  { uint32_t t = R32((uint32_t)(esp + 0x5cu)); esp -= 4; W32(esp, 0x99be02u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 99be02: fst dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0);
/* 99be06: fst dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0);
/* 99be0a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99be0b: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 99be0f: call dword ptr [esp + 0x64] */
  { uint32_t t = R32((uint32_t)(esp + 0x64u)); esp -= 4; W32(esp, 0x99be13u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 99be13: fstp dword ptr [esp + 0x58] */
  WF32((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 99be17: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99be1a: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 99be1e: mov edx, ecx */
  edx = ecx;
/* 99be20: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 99be24: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 99be28: mov dword ptr [esp + 0x54], 0 */
  W32((uint32_t)(esp + 0x54u), 0x0u);
/* 99be30: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 99be38: mov edi, 0x64 */
  edi = 0x64u;
/* 99be3d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_99be40: /* 99be40: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 99be44: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 99be45: fadd dword ptr [esp + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xcu)));
/* 99be49: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 99be4f: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 99be53: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 99be57: fabs  */
  ST0 = fabs(ST0);
/* 99be59: fadd dword ptr [0xa21be4] */
  ST0 = ST0 + (F32((uint32_t)(0xa21be4u)));
/* 99be5f: fmul dword ptr [esp + 0x60] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x60u)));
/* 99be63: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 99be65: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 99be67: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 99be6b: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 99be6f: fsub dword ptr [esp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0xcu)));
/* 99be73: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 99be77: fsub dword ptr [esp + 0x3c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x3cu)));
/* 99be7b: fabs  */
  ST0 = fabs(ST0);
/* 99be7d: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 99be7f: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 99be85: fsubr dword ptr [esp + 0x34] */
  ST0 = (F32((uint32_t)(esp + 0x34u))) - ST0;
/* 99be89: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 99be8b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99be8d: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 99be90: je 0x99c220 */
  if (zf) goto L_99c220;
L_99be96: /* 99be96: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 99be9a: fabs  */
  ST0 = fabs(ST0);
/* 99be9c: fcomp st(2) */
  fpu_com(ST0, STI(2));
  FPOP();
/* 99be9e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99bea0: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 99bea3: jne 0x99c04f */
  if (!zf) goto L_99c04f;
L_99bea9: /* 99bea9: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 99beab: fst dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0);
/* 99beaf: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 99beb3: fcomp dword ptr [esp + 0x50] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x50u)));
  FPOP();
/* 99beb7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99beb9: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99bebc: jnp 0x99bed6 */
  if (!pf) goto L_99bed6;
L_99bebe: /* 99bebe: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99bec0: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 99bec4: fsub dword ptr [esp + 0x4c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x4cu)));
/* 99bec8: fmul dword ptr [esp + 0x50] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x50u)));
/* 99becc: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 99bed0: fsub dword ptr [esp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x20u)));
/* 99bed4: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
L_99bed6: /* 99bed6: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 99beda: fcomp dword ptr [esp + 0x50] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x50u)));
  FPOP();
/* 99bede: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99bee0: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99bee3: jnp 0x99beff */
  if (!pf) goto L_99beff;
L_99bee5: /* 99bee5: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 99bee9: fsub dword ptr [esp + 0x4c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x4cu)));
/* 99beed: fmul dword ptr [esp + 0x50] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x50u)));
/* 99bef1: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 99bef5: fsub dword ptr [esp + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x28u)));
/* 99bef9: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 99befb: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
L_99beff: /* 99beff: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 99bf03: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 99bf05: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 99bf09: fadd dword ptr [esp + 0x4c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x4cu)));
/* 99bf0d: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 99bf11: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 99bf15: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 99bf17: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 99bf19: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 99bf1d: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 99bf1f: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 99bf25: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99bf27: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 99bf2a: jne 0x99bf46 */
  if (!zf) goto L_99bf46;
L_99bf2c: /* 99bf2c: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 99bf30: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 99bf32: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 99bf38: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99bf3a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99bf3d: jp 0x99bf46 */
  if (pf) goto L_99bf46;
L_99bf3f: /* 99bf3f: mov ecx, 1 */
  ecx = 0x1u;
/* 99bf44: jmp 0x99bf48 */
  goto L_99bf48;
L_99bf46: /* 99bf46: xor ecx, ecx */
  ecx = 0;
L_99bf48: /* 99bf48: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 99bf4c: fsub dword ptr [esp + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x38u)));
/* 99bf50: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 99bf54: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 99bf58: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 99bf5a: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 99bf60: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99bf62: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 99bf65: jne 0x99bf83 */
  if (!zf) goto L_99bf83;
L_99bf67: /* 99bf67: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 99bf6b: fmul dword ptr [esp + 0x50] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x50u)));
/* 99bf6f: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 99bf75: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99bf77: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99bf7a: jp 0x99bf83 */
  if (pf) goto L_99bf83;
L_99bf7c: /* 99bf7c: mov eax, 1 */
  eax = 0x1u;
/* 99bf81: jmp 0x99bf85 */
  goto L_99bf85;
L_99bf83: /* 99bf83: xor eax, eax */
  eax = 0;
L_99bf85: /* 99bf85: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99bf87: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 99bf8b: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 99bf8f: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 99bf93: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
/* 99bf97: jne 0x99c000 */
  if (!zf) goto L_99c000;
L_99bf99: /* 99bf99: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99bf9b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99bf9d: je 0x99c051 */
  if (zf) goto L_99c051;
L_99bfa3: /* 99bfa3: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 99bfa7: mov dword ptr [esp + 0x54], ecx */
  W32((uint32_t)(esp + 0x54u), ecx);
L_99bfab: /* 99bfab: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 99bfaf: fabs  */
  ST0 = fabs(ST0);
/* 99bfb1: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 99bfb5: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 99bfbb: fabs  */
  ST0 = fabs(ST0);
/* 99bfbd: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 99bfbf: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 99bfc1: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 99bfc3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99bfc5: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 99bfc8: jne 0x99c051 */
  if (!zf) goto L_99c051;
L_99bfce: /* 99bfce: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 99bfd2: fadd dword ptr [esp + 0x4c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x4cu)));
/* 99bfd6: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 99bfda: fsubr st(1) */
  ST0 = STI(1) - ST0;
/* 99bfdc: fcomp dword ptr [esp + 0x34] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x34u)));
  FPOP();
/* 99bfe0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99bfe2: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99bfe5: jnp 0x99c030 */
  if (!pf) goto L_99c030;
L_99bfe7: /* 99bfe7: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 99bfeb: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 99bfed: fcomp dword ptr [esp + 0x34] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x34u)));
  FPOP();
/* 99bff1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99bff3: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99bff5: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99bff8: jp 0x99c082 */
  if (pf) goto L_99c082;
L_99bffe: /* 99bffe: jmp 0x99c032 */
  goto L_99c032;
L_99c000: /* 99c000: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99c002: je 0x99c01b */
  if (zf) goto L_99c01b;
L_99c004: /* 99c004: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 99c006: fabs  */
  ST0 = fabs(ST0);
/* 99c008: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 99c00c: fabs  */
  ST0 = fabs(ST0);
/* 99c00e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 99c010: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 99c012: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 99c014: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99c016: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 99c019: jne 0x99c021 */
  if (!zf) goto L_99c021;
L_99c01b: /* 99c01b: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 99c01f: jmp 0x99bfab */
  goto L_99bfab;
L_99c021: /* 99c021: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 99c025: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99c027: mov dword ptr [esp + 0x54], eax */
  W32((uint32_t)(esp + 0x54u), eax);
/* 99c02b: jmp 0x99bfab */
  goto L_99bfab;
L_99c030: /* 99c030: fstp st(0) */
  STI(0) = ST0; FPOP();
L_99c032: /* 99c032: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 99c036: fsub dword ptr [esp + 0x4c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x4cu)));
/* 99c03a: fcomp qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
  FPOP();
/* 99c040: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 99c042: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99c044: fabs  */
  ST0 = fabs(ST0);
/* 99c046: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 99c049: je 0x99c07e */
  if (zf) goto L_99c07e;
L_99c04b: /* 99c04b: fchs  */
  ST0 = -ST0;
/* 99c04d: jmp 0x99c07e */
  goto L_99c07e;
L_99c04f: /* 99c04f: fstp st(0) */
  STI(0) = ST0; FPOP();
L_99c051: /* 99c051: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 99c055: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 99c05b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99c05d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 99c060: jne 0x99c068 */
  if (!zf) goto L_99c068;
L_99c062: /* 99c062: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 99c066: jmp 0x99c06c */
  goto L_99c06c;
L_99c068: /* 99c068: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
L_99c06c: /* 99c06c: fsub dword ptr [esp + 0x4c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x4cu)));
/* 99c070: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 99c074: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 99c078: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
L_99c07e: /* 99c07e: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
L_99c082: /* 99c082: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 99c086: fabs  */
  ST0 = fabs(ST0);
/* 99c088: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 99c08a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99c08c: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 99c08f: jne 0x99c0b1 */
  if (!zf) goto L_99c0b1;
L_99c091: /* 99c091: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99c093: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 99c097: fadd dword ptr [esp + 0x4c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x4cu)));
/* 99c09b: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 99c09f: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 99c0a3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99c0a4: call dword ptr [esp + 0x5c] */
  { uint32_t t = R32((uint32_t)(esp + 0x5cu)); esp -= 4; W32(esp, 0x99c0a8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 99c0a8: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 99c0ac: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99c0af: jmp 0x99c0ed */
  goto L_99c0ed;
L_99c0b1: /* 99c0b1: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 99c0b5: fcomp qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
  FPOP();
/* 99c0bb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99c0bd: fabs  */
  ST0 = fabs(ST0);
/* 99c0bf: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 99c0c2: je 0x99c0c6 */
  if (zf) goto L_99c0c6;
L_99c0c4: /* 99c0c4: fchs  */
  ST0 = -ST0;
L_99c0c6: /* 99c0c6: fadd dword ptr [esp + 0x4c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x4cu)));
/* 99c0ca: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 99c0ce: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 99c0d2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99c0d3: call dword ptr [esp + 0x5c] */
  { uint32_t t = R32((uint32_t)(esp + 0x5cu)); esp -= 4; W32(esp, 0x99c0d7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 99c0d7: fst dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0);
/* 99c0db: fcomp dword ptr [esp + 0x28] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x28u)));
  FPOP();
/* 99c0df: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99c0e2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99c0e4: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 99c0e7: je 0x99c238 */
  if (zf) goto L_99c238;
L_99c0ed: /* 99c0ed: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99c0ee: call dword ptr [esp + 0x60] */
  { uint32_t t = R32((uint32_t)(esp + 0x60u)); esp -= 4; W32(esp, 0x99c0f2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 99c0f2: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 99c0f6: fcom dword ptr [esp + 0x28] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x28u)));
/* 99c0fa: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99c0fd: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 99c101: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99c103: fcomp dword ptr [esp + 0x4c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x4cu)));
  FPOP();
/* 99c107: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99c10a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99c10c: jp 0x99c16a */
  if (pf) goto L_99c16a;
L_99c10e: /* 99c10e: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 99c111: jne 0x99c11d */
  if (!zf) goto L_99c11d;
L_99c113: /* 99c113: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 99c117: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 99c11b: jmp 0x99c125 */
  goto L_99c125;
L_99c11d: /* 99c11d: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 99c121: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
L_99c125: /* 99c125: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 99c129: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 99c12d: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 99c131: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 99c135: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 99c139: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* 99c13d: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 99c141: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 99c145: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 99c149: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 99c14d: fstp dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 99c151: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 99c155: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 99c159: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
/* 99c15d: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 99c161: mov dword ptr [esp + 0x4c], ecx */
  W32((uint32_t)(esp + 0x4cu), ecx);
/* 99c165: jmp 0x99c204 */
  goto L_99c204;
L_99c16a: /* 99c16a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99c16d: jp 0x99c179 */
  if (pf) goto L_99c179;
L_99c16f: /* 99c16f: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 99c173: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 99c177: jmp 0x99c181 */
  goto L_99c181;
L_99c179: /* 99c179: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 99c17d: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
L_99c181: /* 99c181: fcom dword ptr [esp + 0x2c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x2cu)));
/* 99c185: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99c187: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99c18a: jnp 0x99c1d6 */
  if (!pf) goto L_99c1d6;
L_99c18c: /* 99c18c: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 99c190: fcomp dword ptr [esp + 0x4c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x4cu)));
  FPOP();
/* 99c194: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99c196: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99c199: jnp 0x99c1d6 */
  if (!pf) goto L_99c1d6;
L_99c19b: /* 99c19b: fcom dword ptr [esp + 0x30] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x30u)));
/* 99c19f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99c1a1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99c1a4: jnp 0x99c1c4 */
  if (!pf) goto L_99c1c4;
L_99c1a6: /* 99c1a6: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 99c1aa: fcomp dword ptr [esp + 0x4c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x4cu)));
  FPOP();
/* 99c1ae: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99c1b0: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99c1b3: jnp 0x99c1c4 */
  if (!pf) goto L_99c1c4;
L_99c1b5: /* 99c1b5: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 99c1b9: fcomp dword ptr [esp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x18u)));
  FPOP();
/* 99c1bd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99c1bf: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99c1c2: jp 0x99c200 */
  if (pf) goto L_99c200;
L_99c1c4: /* 99c1c4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 99c1c8: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 99c1cc: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 99c1d0: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 99c1d4: jmp 0x99c204 */
  goto L_99c204;
L_99c1d6: /* 99c1d6: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 99c1da: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 99c1de: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 99c1e2: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 99c1e6: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 99c1ea: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 99c1ee: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 99c1f2: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 99c1f6: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 99c1fa: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 99c1fe: jmp 0x99c204 */
  goto L_99c204;
L_99c200: /* 99c200: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99c202: fstp st(0) */
  STI(0) = ST0; FPOP();
L_99c204: /* 99c204: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 99c206: jg 0x99be40 */
  if ((!zf && sf == of)) goto L_99be40;
L_99c20c: /* 99c20c: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 99c210: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 99c212: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99c213: call dword ptr [esp + 0x5c] */
  { uint32_t t = R32((uint32_t)(esp + 0x5cu)); esp -= 4; W32(esp, 0x99c217u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 99c217: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99c21a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 99c21b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99c21c: add esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99c21f: ret  */
  esp += 4; SPILL(); return;
L_99c220: /* 99c220: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 99c224: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99c226: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99c228: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 99c229: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 99c22d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99c22e: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 99c230: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 99c234: add esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99c237: ret  */
  esp += 4; SPILL(); return;
L_99c238: /* 99c238: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 99c23c: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 99c240: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 99c241: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 99c243: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 99c247: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99c248: add esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99c24b: ret  */
  esp += 4; SPILL(); return;
}

void f_99c250(void) {
  LOAD_REGS();
L_99c250: /* 99c250: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99c251: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 99c255: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 99c259: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 99c25a: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 99c25e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99c25f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 99c260: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 99c264: mov dword ptr [0xcf77b0], eax */
  W32((uint32_t)(0xcf77b0u), eax);
/* 99c269: mov dword ptr [0xcf77b4], ecx */
  W32((uint32_t)(0xcf77b4u), ecx);
/* 99c26f: mov eax, 0xcf778c */
  eax = 0xcf778cu;
/* 99c274: lea ecx, [edi*4 + 0xcf778c] */
  ecx = (uint32_t)(edi*4 + 0xcf778cu);
/* 99c27b: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 99c27d: mov dword ptr [0xcf77ac], edi */
  W32((uint32_t)(0xcf77acu), edi);
/* 99c283: jbe 0x99c29c */
  if ((cf | zf)) goto L_99c29c;
L_99c285: /* 99c285: mov edx, ebx */
  edx = ebx;
/* 99c287: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 99c289: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_99c290: /* 99c290: mov esi, dword ptr [edx + eax] */
  esi = R32((uint32_t)(edx + eax));
/* 99c293: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 99c295: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 99c298: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 99c29a: jb 0x99c290 */
  if (cf) goto L_99c290;
L_99c29c: /* 99c29c: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 99c2a0: mov eax, 0xcf779c */
  eax = 0xcf779cu;
/* 99c2a5: lea ecx, [edi*4 + 0xcf779c] */
  ecx = (uint32_t)(edi*4 + 0xcf779cu);
/* 99c2ac: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 99c2ae: jbe 0x99c2c2 */
  if ((cf | zf)) goto L_99c2c2;
L_99c2b0: /* 99c2b0: mov edx, esi */
  edx = esi;
/* 99c2b2: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 99c2b4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
L_99c2b5: /* 99c2b5: mov ebp, dword ptr [edx + eax] */
  ebp = R32((uint32_t)(edx + eax));
/* 99c2b8: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
/* 99c2ba: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 99c2bd: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 99c2bf: jb 0x99c2b5 */
  if (cf) goto L_99c2b5;
L_99c2c1: /* 99c2c1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_99c2c2: /* 99c2c2: push 0x99ba10 */
  { uint32_t v = 0x99ba10u; esp -= 4; W32(esp, v); }
/* 99c2c7: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 99c2cb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 99c2cc: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 99c2d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99c2d1: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 99c2d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99c2d6: lea edx, [esp + 0x24] */
  edx = (uint32_t)(esp + 0x24u);
/* 99c2da: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 99c2db: lea eax, [esp + 0x38] */
  eax = (uint32_t)(esp + 0x38u);
/* 99c2df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99c2e0: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 99c2e4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99c2e5: mov dword ptr [esp + 0x44], 0 */
  W32((uint32_t)(esp + 0x44u), 0x0u);
/* 99c2ed: mov dword ptr [esp + 0x40], 0x3f800000 */
  W32((uint32_t)(esp + 0x40u), 0x3f800000u);
/* 99c2f5: call 0x99bb30 */
  esp -= 4; W32(esp, 0x99c2fau); SPILL(); f_99bb30(); if (g_unwind) return; RELOAD();
/* 99c2fa: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 99c2fe: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 99c302: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 99c306: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 99c307: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 99c30b: push 0x99ba80 */
  { uint32_t v = 0x99ba80u; esp -= 4; W32(esp, v); }
/* 99c310: push 0x99ba10 */
  { uint32_t v = 0x99ba10u; esp -= 4; W32(esp, v); }
/* 99c315: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99c316: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99c317: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 99c318: lea eax, [esp + 0x58] */
  eax = (uint32_t)(esp + 0x58u);
/* 99c31c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99c31d: call 0x99bda0 */
  esp -= 4; W32(esp, 0x99c322u); SPILL(); f_99bda0(); if (g_unwind) return; RELOAD();
/* 99c322: lea edi, [ebx + edi*4] */
  edi = (uint32_t)(ebx + edi*4);
/* 99c325: add esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99c328: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 99c32a: mov eax, ebx */
  eax = ebx;
/* 99c32c: jae 0x99c34a */
  if (!cf) goto L_99c34a;
L_99c32e: /* 99c32e: mov edx, ebx */
  edx = ebx;
/* 99c330: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 99c332: sub esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
L_99c334: /* 99c334: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 99c338: lea ecx, [esi + eax] */
  ecx = (uint32_t)(esi + eax);
/* 99c33b: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 99c33d: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 99c340: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 99c342: fadd dword ptr [ecx + edx] */
  ST0 = ST0 + (F32((uint32_t)(ecx + edx)));
/* 99c345: fstp dword ptr [eax - 4] */
  WF32((uint32_t)(eax + 0xfffffffcu), ST0); FPOP();
/* 99c348: jb 0x99c334 */
  if (cf) goto L_99c334;
L_99c34a: /* 99c34a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 99c34b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99c34c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 99c34d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 99c34e: ret  */
  esp += 4; SPILL(); return;
}
