#include "recomp.h"
#include "rec_mod.h"

void f_7c77e0(void) {
  LOAD_REGS();
L_7c77e0: /* 7c77e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7c77e1: mov ebp, esp */
  ebp = esp;
/* 7c77e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7c77e5: push 0x9cf930 */
  { uint32_t v = 0x9cf930u; esp -= 4; W32(esp, v); }
/* 7c77ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7c77f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c77f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7c77f8: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c77fb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c77fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c77fd: mov esi, dword ptr [ecx + 0xb4] */
  esi = R32((uint32_t)(ecx + 0xb4u));
/* 7c7803: xor ebx, ebx */
  ebx = 0;
/* 7c7805: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c7807: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c7808: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7c780b: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7c780e: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7c7811: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 7c7814: je 0x7c78c8 */
  if (zf) goto L_7c78c8;
L_7c781a: /* 7c781a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_7c7820: /* 7c7820: cmp ebx, dword ptr [esi + 0x30] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c7823: jge 0x7c78c8 */
  if ((sf == of)) goto L_7c78c8;
L_7c7829: /* 7c7829: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 7c782c: mov ecx, dword ptr [eax + ebx*4] */
  ecx = R32((uint32_t)(eax + ebx*4));
/* 7c782f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c7831: je 0x7c7895 */
  if (zf) goto L_7c7895;
L_7c7833: /* 7c7833: mov eax, dword ptr [ecx + 0x80] */
  eax = R32((uint32_t)(ecx + 0x80u));
/* 7c7839: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c783c: jne 0x7c7895 */
  if (!zf) goto L_7c7895;
L_7c783e: /* 7c783e: push 0xb80c70 */
  { uint32_t v = 0xb80c70u; esp -= 4; W32(esp, v); }
/* 7c7843: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7c7849u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7c7849: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c784b: je 0x7c7895 */
  if (zf) goto L_7c7895;
L_7c784d: /* 7c784d: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 7c7850: mov esi, dword ptr [ecx + ebx*4] */
  esi = R32((uint32_t)(ecx + ebx*4));
/* 7c7853: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c7855: je 0x7c786c */
  if (zf) goto L_7c786c;
L_7c7857: /* 7c7857: push 0xb80c70 */
  { uint32_t v = 0xb80c70u; esp -= 4; W32(esp, v); }
/* 7c785c: mov ecx, esi */
  ecx = esi;
/* 7c785e: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7c7864u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7c7864: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c7866: je 0x7c786c */
  if (zf) goto L_7c786c;
L_7c7868: /* 7c7868: mov edi, esi */
  edi = esi;
/* 7c786a: jmp 0x7c786e */
  goto L_7c786e;
L_7c786c: /* 7c786c: xor edi, edi */
  edi = 0;
L_7c786e: /* 7c786e: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c7871: cmp dword ptr [edi + 0x33c], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x33cu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c7877: jne 0x7c7892 */
  if (!zf) goto L_7c7892;
L_7c7879: /* 7c7879: mov esi, edx */
  esi = edx;
/* 7c787b: add esi, 0x430 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x430u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7c7881: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7c7883: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7c7885: mov ecx, esi */
  ecx = esi;
/* 7c7887: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7c788du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7c788d: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7c788f: mov dword ptr [ecx + eax*4], edi */
  W32((uint32_t)(ecx + eax*4), edi);
L_7c7892: /* 7c7892: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
L_7c7895: /* 7c7895: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7c7896: jmp 0x7c7820 */
  goto L_7c7820;
L_7c78c8: /* 7c78c8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c78cb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c78cc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c78cd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c78d4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c78d5: mov esp, ebp */
  esp = ebp;
/* 7c78d7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c78d8: ret  */
  esp += 4; SPILL(); return;
}

void f_7c7898(void) {
  LOAD_REGS();
L_7c7898: /* 7c7898: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7c789b: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7c78a0: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 7c78a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c78a4: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 7c78a7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c78acu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7c78ac(); return;
}

void f_7c78ac(void) {
  LOAD_REGS();
L_7c78ac: /* 7c78ac: push 0xa0e608 */
  { uint32_t v = 0xa0e608u; esp -= 4; W32(esp, v); }
/* 7c78b1: push 0xad43a0 */
  { uint32_t v = 0xad43a0u; esp -= 4; W32(esp, v); }
/* 7c78b6: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7c78bcu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7c78bc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c78bf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c78c1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c78c3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c78c8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7c78c8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c78cb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c78cc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c78cd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c78d4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c78d5: mov esp, ebp */
  esp = ebp;
/* 7c78d7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c78d8: ret  */
  esp += 4; SPILL(); return;
}

void f_7c7920(void) {
  LOAD_REGS();
L_7c7920: /* 7c7920: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7c7921: mov ebp, esp */
  ebp = esp;
/* 7c7923: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7c7925: push 0x9cf940 */
  { uint32_t v = 0x9cf940u; esp -= 4; W32(esp, v); }
/* 7c792a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7c7930: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c7931: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7c7938: sub esp, 0x88 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x88u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c793e: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 7c7943: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c7944: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c7945: mov esi, ecx */
  esi = ecx;
/* 7c7947: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7c7949: xor ebx, ebx */
  ebx = 0;
/* 7c794b: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c794d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c794e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7c7951: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7c7954: je 0x7c7e3b */
  if (zf) goto L_7c7e3b;
L_7c795a: /* 7c795a: mov al, byte ptr [esi + 0x80] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x80u))) & 0xffu);
/* 7c7960: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 7c7962: js 0x7c7e3b */
  if (sf) goto L_7c7e3b;
L_7c7968: /* 7c7968: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 7c796e: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7c7970: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7c7972: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7c7974: push 0xad43a8 */
  { uint32_t v = 0xad43a8u; esp -= 4; W32(esp, v); }
/* 7c7979: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7c797cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c797c: mov eax, dword ptr [esi + 0x344] */
  eax = R32((uint32_t)(esi + 0x344u));
/* 7c7982: imul eax, dword ptr [esi + 0x348] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(esi + 0x348u)));
  eax = (uint32_t)r;
  }
/* 7c7989: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 7c798a: and edx, 0x1f */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7c798d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c798f: sar eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 7c7992: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7c7995: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c7996: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7c7999: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7c799c: call dword ptr [0xcfa598] */
  esp -= 4; W32(esp, 0x7c79a2u); SPILL(); f_4e301c(); if (g_unwind) return; /* Core!?appCeil@@YAHM@Z */ RELOAD();
/* 7c79a2: mov ecx, dword ptr [esi + 0x3b0] */
  ecx = R32((uint32_t)(esi + 0x3b0u));
/* 7c79a8: mov edi, dword ptr [0xcfa53c] */
  edi = R32((uint32_t)(0xcfa53cu));
/* 7c79ae: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c79b1: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7c79b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c79b5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c79b6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c79b7: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7c79b9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c79b9: mov edx, dword ptr [esi + 0x344] */
  edx = R32((uint32_t)(esi + 0x344u));
/* 7c79bf: imul edx, dword ptr [esi + 0x348] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(esi + 0x348u)));
  edx = (uint32_t)r;
  }
/* 7c79c6: mov eax, dword ptr [esi + 0x3d4] */
  eax = R32((uint32_t)(esi + 0x3d4u));
/* 7c79cc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c79cf: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 7c79d2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c79d3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c79d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c79d5: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7c79d7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c79d7: mov ecx, dword ptr [esi + 0x344] */
  ecx = R32((uint32_t)(esi + 0x344u));
/* 7c79dd: imul ecx, dword ptr [esi + 0x348] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(esi + 0x348u)));
  ecx = (uint32_t)r;
  }
/* 7c79e4: mov edx, dword ptr [esi + 0x3e0] */
  edx = R32((uint32_t)(esi + 0x3e0u));
/* 7c79ea: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c79ed: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 7c79f0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c79f1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c79f2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c79f3: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7c79f5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c79f5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7c79f8: /* 7c79f8: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 7c79fe: cmp ebx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c7a01: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 7c7a04: jge 0x7c7bb9 */
  if ((sf == of)) goto L_7c7bb9;
L_7c7a0a: /* 7c7a0a: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7c7a0d: mov edi, dword ptr [eax + ebx*4] */
  edi = R32((uint32_t)(eax + ebx*4));
/* 7c7a10: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c7a12: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 7c7a15: je 0x7c7a2c */
  if (zf) goto L_7c7a2c;
L_7c7a17: /* 7c7a17: push 0xb6f6a8 */
  { uint32_t v = 0xb6f6a8u; esp -= 4; W32(esp, v); }
/* 7c7a1c: mov ecx, edi */
  ecx = edi;
/* 7c7a1e: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7c7a24u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7c7a24: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c7a26: je 0x7c7a2c */
  if (zf) goto L_7c7a2c;
L_7c7a28: /* 7c7a28: mov eax, edi */
  eax = edi;
/* 7c7a2a: jmp 0x7c7a2e */
  goto L_7c7a2e;
L_7c7a2c: /* 7c7a2c: xor eax, eax */
  eax = 0;
L_7c7a2e: /* 7c7a2e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c7a30: je 0x7c7bb3 */
  if (zf) goto L_7c7bb3;
L_7c7a36: /* 7c7a36: mov ecx, dword ptr [edi + 0x80] */
  ecx = R32((uint32_t)(edi + 0x80u));
/* 7c7a3c: test ch, 2 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c7a3f: jne 0x7c7bb3 */
  if (!zf) goto L_7c7bb3;
L_7c7a45: /* 7c7a45: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c7a47: je 0x7c7a52 */
  if (zf) goto L_7c7a52;
L_7c7a49: /* 7c7a49: test byte ptr [eax + 0x3b4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x3b4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c7a50: jne 0x7c7a8e */
  if (!zf) goto L_7c7a8e;
L_7c7a52: /* 7c7a52: push 0xce7998 */
  { uint32_t v = 0xce7998u; esp -= 4; W32(esp, v); }
/* 7c7a57: mov ecx, edi */
  ecx = edi;
/* 7c7a59: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7c7a5fu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7c7a5f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c7a61: je 0x7c7bb3 */
  if (zf) goto L_7c7bb3;
L_7c7a67: /* 7c7a67: mov edi, dword ptr [edi + 0x54] */
  edi = R32((uint32_t)(edi + 0x54u));
/* 7c7a6a: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c7a6c: je 0x7c7bb3 */
  if (zf) goto L_7c7bb3;
L_7c7a72: /* 7c7a72: mov eax, dword ptr [edi + 0x104] */
  eax = R32((uint32_t)(edi + 0x104u));
/* 7c7a78: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c7a7a: je 0x7c7bb3 */
  if (zf) goto L_7c7bb3;
L_7c7a80: /* 7c7a80: mov eax, dword ptr [edi + 0x124] */
  eax = R32((uint32_t)(edi + 0x124u));
/* 7c7a86: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c7a88: je 0x7c7bb3 */
  if (zf) goto L_7c7bb3;
L_7c7a8e: /* 7c7a8e: mov ebx, 1 */
  ebx = 0x1u;
L_7c7a93: /* 7c7a93: mov ecx, dword ptr [esi + 0x344] */
  ecx = R32((uint32_t)(esi + 0x344u));
/* 7c7a99: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 7c7a9a: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c7a9c: jge 0x7c7bb0 */
  if ((sf == of)) goto L_7c7bb0;
L_7c7aa2: /* 7c7aa2: mov edi, 1 */
  edi = 0x1u;
L_7c7aa7: /* 7c7aa7: mov edx, dword ptr [esi + 0x348] */
  edx = R32((uint32_t)(esi + 0x348u));
/* 7c7aad: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 7c7aae: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c7ab0: jge 0x7c7baa */
  if ((sf == of)) goto L_7c7baa;
L_7c7ab6: /* 7c7ab6: mov eax, dword ptr [esi + 0x344] */
  eax = R32((uint32_t)(esi + 0x344u));
/* 7c7abc: imul eax, edi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edi);
  eax = (uint32_t)r;
  }
/* 7c7abf: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c7ac1: mov ecx, eax */
  ecx = eax;
/* 7c7ac3: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 7c7ac6: mov edx, 1 */
  edx = 0x1u;
/* 7c7acb: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 7c7acd: mov ecx, dword ptr [esi + 0x3b0] */
  ecx = R32((uint32_t)(esi + 0x3b0u));
/* 7c7ad3: sar eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 7c7ad6: test dword ptr [ecx + eax*4], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c7ad9: jne 0x7c7ba4 */
  if (!zf) goto L_7c7ba4;
L_7c7adf: /* 7c7adf: xor eax, eax */
  eax = 0;
/* 7c7ae1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c7ae2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c7ae3: lea edx, [ebp - 0x34] */
  edx = (uint32_t)(ebp + 0xffffffccu);
/* 7c7ae6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c7ae7: mov ecx, esi */
  ecx = esi;
/* 7c7ae9: mov dword ptr [ebp - 0x70], eax */
  W32((uint32_t)(ebp + 0xffffff90u), eax);
/* 7c7aec: mov dword ptr [ebp - 0x6c], eax */
  W32((uint32_t)(ebp + 0xffffff94u), eax);
/* 7c7aef: mov dword ptr [ebp - 0x68], eax */
  W32((uint32_t)(ebp + 0xffffff98u), eax);
/* 7c7af2: mov dword ptr [ebp - 0x64], eax */
  W32((uint32_t)(ebp + 0xffffff9cu), eax);
/* 7c7af5: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* 7c7af8: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 7c7afb: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
/* 7c7afe: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
/* 7c7b01: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 7c7b04: mov dword ptr [ebp - 0x4c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x3f800000u);
/* 7c7b0b: mov dword ptr [ebp - 0x48], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffb8u), 0xffffffffu);
/* 7c7b12: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 7c7b15: call 0x6c408e */
  esp -= 4; W32(esp, 0x7c7b1au); SPILL(); f_6c408e(); if (g_unwind) return; RELOAD();
/* 7c7b1a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c7b1d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7c7b1f: call dword ptr [eax + 0xc8] */
  { uint32_t t = R32((uint32_t)(eax + 0xc8u)); esp -= 4; W32(esp, 0x7c7b25u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c7b25: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7c7b27: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7c7b2a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c7b2c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c7b2f: mov eax, esp */
  eax = esp;
/* 7c7b31: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 7c7b38: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7c7b3b: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7c7b3d: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 7c7b44: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7c7b47: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7c7b4a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c7b4d: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 7c7b54: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7c7b57: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7c7b5a: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 7c7b5d: mov eax, esp */
  eax = esp;
/* 7c7b5f: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7c7b61: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7c7b64: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7c7b67: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7c7b6a: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7c7b6d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c7b70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c7b71: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 7c7b74: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c7b75: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7c7b78: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0x7c7b7bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c7b7b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c7b7d: jne 0x7c7ba4 */
  if (!zf) goto L_7c7ba4;
L_7c7b7f: /* 7c7b7f: mov ecx, dword ptr [esi + 0x344] */
  ecx = R32((uint32_t)(esi + 0x344u));
/* 7c7b85: mov eax, dword ptr [esi + 0x3b0] */
  eax = R32((uint32_t)(esi + 0x3b0u));
/* 7c7b8b: imul ecx, edi */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edi);
  ecx = (uint32_t)r;
  }
/* 7c7b8e: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7c7b90: mov edx, ecx */
  edx = ecx;
/* 7c7b92: sar edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 7c7b95: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 7c7b98: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 7c7b9b: mov edx, 1 */
  edx = 0x1u;
/* 7c7ba0: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 7c7ba2: or dword ptr [eax], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax), r);
  }
L_7c7ba4: /* 7c7ba4: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7c7ba5: jmp 0x7c7aa7 */
  goto L_7c7aa7;
L_7c7baa: /* 7c7baa: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7c7bab: jmp 0x7c7a93 */
  goto L_7c7a93;
L_7c7bb0: /* 7c7bb0: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
L_7c7bb3: /* 7c7bb3: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7c7bb4: jmp 0x7c79f8 */
  goto L_7c79f8;
L_7c7bb9: /* 7c7bb9: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 7c7bc0: mov edi, 1 */
  edi = 0x1u;
L_7c7bc5: /* 7c7bc5: mov eax, dword ptr [esi + 0x344] */
  eax = R32((uint32_t)(esi + 0x344u));
/* 7c7bcb: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 7c7bcc: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c7bce: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 7c7bd1: jge 0x7c7e2f */
  if ((sf == of)) goto L_7c7e2f;
L_7c7bd7: /* 7c7bd7: mov ebx, 1 */
  ebx = 0x1u;
L_7c7bdc: /* 7c7bdc: mov ecx, dword ptr [esi + 0x348] */
  ecx = R32((uint32_t)(esi + 0x348u));
/* 7c7be2: lea edx, [ecx - 1] */
  edx = (uint32_t)(ecx + 0xffffffffu);
/* 7c7be5: cmp ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c7be7: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 7c7bea: jge 0x7c7e29 */
  if ((sf == of)) goto L_7c7e29;
L_7c7bf0: /* 7c7bf0: mov edi, dword ptr [esi + 0x344] */
  edi = R32((uint32_t)(esi + 0x344u));
/* 7c7bf6: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 7c7bfb: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7c7bfd: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7c7bff: add ecx, -2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7c7c02: sub edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 7c7c05: imul ecx, edi */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edi);
  ecx = (uint32_t)r;
  }
/* 7c7c08: push 0xad43e4 */
  { uint32_t v = 0xad43e4u; esp -= 4; W32(esp, v); }
/* 7c7c0d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c7c0e: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7c7c11: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c7c12: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c7c13: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x7c7c16u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c7c16: mov eax, dword ptr [esi + 0x344] */
  eax = R32((uint32_t)(esi + 0x344u));
/* 7c7c1c: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7c7c1f: imul eax, ebx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ebx);
  eax = (uint32_t)r;
  }
/* 7c7c22: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7c7c25: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c7c27: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c7c2a: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7c7c2b: mov ecx, eax */
  ecx = eax;
/* 7c7c2d: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 7c7c30: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 7c7c33: mov edx, 1 */
  edx = 0x1u;
/* 7c7c38: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 7c7c3a: mov ecx, dword ptr [esi + 0x3b0] */
  ecx = R32((uint32_t)(esi + 0x3b0u));
/* 7c7c40: sar eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 7c7c43: test dword ptr [ecx + eax*4], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c7c46: jne 0x7c7e23 */
  if (!zf) goto L_7c7e23;
L_7c7c4c: /* 7c7c4c: xor eax, eax */
  eax = 0;
/* 7c7c4e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c7c4f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c7c50: lea edx, [ebp - 0x40] */
  edx = (uint32_t)(ebp + 0xffffffc0u);
/* 7c7c53: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c7c54: mov ecx, esi */
  ecx = esi;
/* 7c7c56: mov dword ptr [ebp - 0x70], eax */
  W32((uint32_t)(ebp + 0xffffff90u), eax);
/* 7c7c59: mov dword ptr [ebp - 0x6c], eax */
  W32((uint32_t)(ebp + 0xffffff94u), eax);
/* 7c7c5c: mov dword ptr [ebp - 0x68], eax */
  W32((uint32_t)(ebp + 0xffffff98u), eax);
/* 7c7c5f: mov dword ptr [ebp - 0x64], eax */
  W32((uint32_t)(ebp + 0xffffff9cu), eax);
/* 7c7c62: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* 7c7c65: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 7c7c68: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
/* 7c7c6b: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
/* 7c7c6e: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 7c7c71: mov dword ptr [ebp - 0x4c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x3f800000u);
/* 7c7c78: mov dword ptr [ebp - 0x48], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffb8u), 0xffffffffu);
/* 7c7c7f: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 7c7c82: call 0x6c408e */
  esp -= 4; W32(esp, 0x7c7c87u); SPILL(); f_6c408e(); if (g_unwind) return; RELOAD();
/* 7c7c87: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 7c7c8d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c7c8f: je 0x7c7cfd */
  if (zf) goto L_7c7cfd;
L_7c7c91: /* 7c7c91: mov eax, dword ptr [eax + 0x8c] */
  eax = R32((uint32_t)(eax + 0x8cu));
/* 7c7c97: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c7c99: mov dword ptr [ebp - 0x8c], eax */
  W32((uint32_t)(ebp + 0xffffff74u), eax);
/* 7c7c9f: je 0x7c7cfd */
  if (zf) goto L_7c7cfd;
L_7c7ca1: /* 7c7ca1: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7c7ca3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c7ca5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c7ca8: mov ecx, esp */
  ecx = esp;
/* 7c7caa: mov dword ptr [ebp - 0x7c], 0 */
  W32((uint32_t)(ebp + 0xffffff84u), 0x0u);
/* 7c7cb1: mov edx, dword ptr [ebp - 0x7c] */
  edx = R32((uint32_t)(ebp + 0xffffff84u));
/* 7c7cb4: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7c7cb6: mov dword ptr [ebp - 0x78], 0 */
  W32((uint32_t)(ebp + 0xffffff88u), 0x0u);
/* 7c7cbd: mov edx, dword ptr [ebp - 0x78] */
  edx = R32((uint32_t)(ebp + 0xffffff88u));
/* 7c7cc0: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7c7cc3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c7cc6: mov dword ptr [ebp - 0x74], 0 */
  W32((uint32_t)(ebp + 0xffffff8cu), 0x0u);
/* 7c7ccd: mov edx, dword ptr [ebp - 0x74] */
  edx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 7c7cd0: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7c7cd3: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 7c7cd6: mov ecx, esp */
  ecx = esp;
/* 7c7cd8: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7c7cda: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7c7cdd: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7c7ce0: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7c7ce3: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7c7ce6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c7ce8: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 7c7ceb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c7cec: mov ecx, dword ptr [ebp - 0x8c] */
  ecx = R32((uint32_t)(ebp + 0xffffff74u));
/* 7c7cf2: call dword ptr [eax + 0x68] */
  { uint32_t t = R32((uint32_t)(eax + 0x68u)); esp -= 4; W32(esp, 0x7c7cf5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c7cf5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c7cf7: je 0x7c7df2 */
  if (zf) goto L_7c7df2;
L_7c7cfd: /* 7c7cfd: mov ecx, dword ptr [esi + 0x3bc] */
  ecx = R32((uint32_t)(esi + 0x3bcu));
/* 7c7d03: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c7d05: je 0x7c7e23 */
  if (zf) goto L_7c7e23;
L_7c7d0b: /* 7c7d0b: push 0xce9010 */
  { uint32_t v = 0xce9010u; esp -= 4; W32(esp, v); }
/* 7c7d10: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7c7d16u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7c7d16: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c7d18: je 0x7c7e23 */
  if (zf) goto L_7c7e23;
L_7c7d1e: /* 7c7d1e: mov ecx, dword ptr [esi + 0x3bc] */
  ecx = R32((uint32_t)(esi + 0x3bcu));
/* 7c7d24: mov eax, dword ptr [ecx + 0x80] */
  eax = R32((uint32_t)(ecx + 0x80u));
/* 7c7d2a: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c7d2d: jne 0x7c7e23 */
  if (!zf) goto L_7c7e23;
L_7c7d33: /* 7c7d33: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 7c7d36: mov edi, dword ptr [ebp - 0x38] */
  edi = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7c7d39: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7c7d3c: mov ebx, eax */
  ebx = eax;
/* 7c7d3e: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 7c7d41: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7c7d43: mov dword ptr [ebp - 0x2c], edi */
  W32((uint32_t)(ebp + 0xffffffd4u), edi);
/* 7c7d46: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 7c7d49: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 7c7d4c: mov dword ptr [ebp - 0x2c], 0x49000000 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x49000000u);
/* 7c7d53: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 7c7d56: mov dword ptr [ebp - 0x20], 0xc9000000 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0xc9000000u);
/* 7c7d5d: call dword ptr [eax + 0xc8] */
  { uint32_t t = R32((uint32_t)(eax + 0xc8u)); esp -= 4; W32(esp, 0x7c7d63u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c7d63: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c7d65: push 0x86 */
  { uint32_t v = 0x86u; esp -= 4; W32(esp, v); }
/* 7c7d6a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c7d6d: mov ecx, esp */
  ecx = esp;
/* 7c7d6f: mov dword ptr [ebp - 0x88], 0 */
  W32((uint32_t)(ebp + 0xffffff78u), 0x0u);
/* 7c7d79: mov edi, dword ptr [ebp - 0x88] */
  edi = R32((uint32_t)(ebp + 0xffffff78u));
/* 7c7d7f: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7c7d81: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7c7d83: mov dword ptr [ebp - 0x84], 0 */
  W32((uint32_t)(ebp + 0xffffff7cu), 0x0u);
/* 7c7d8d: mov edi, dword ptr [ebp - 0x84] */
  edi = R32((uint32_t)(ebp + 0xffffff7cu));
/* 7c7d93: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 7c7d96: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c7d99: mov dword ptr [ebp - 0x80], 0 */
  W32((uint32_t)(ebp + 0xffffff80u), 0x0u);
/* 7c7da0: mov edi, dword ptr [ebp - 0x80] */
  edi = R32((uint32_t)(ebp + 0xffffff80u));
/* 7c7da3: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 7c7da6: mov edi, dword ptr [ebp - 0x30] */
  edi = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7c7da9: mov ecx, esp */
  ecx = esp;
/* 7c7dab: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 7c7dad: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 7c7db0: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7c7db3: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 7c7db6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c7db9: mov ecx, esp */
  ecx = esp;
/* 7c7dbb: mov edi, ebx */
  edi = ebx;
/* 7c7dbd: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7c7dbf: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7c7dc2: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 7c7dc5: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7c7dc8: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 7c7dcb: mov ecx, dword ptr [esi + 0x3bc] */
  ecx = R32((uint32_t)(esi + 0x3bcu));
/* 7c7dd1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c7dd2: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 7c7dd5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c7dd6: mov ecx, eax */
  ecx = eax;
/* 7c7dd8: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0x7c7ddbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c7ddb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c7ddd: jne 0x7c7e1d */
  if (!zf) goto L_7c7e1d;
L_7c7ddf: /* 7c7ddf: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 7c7de2: fcomp dword ptr [ebp - 0x38] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffc8u)));
  FPOP();
/* 7c7de5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c7de7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c7dea: jne 0x7c7e1d */
  if (!zf) goto L_7c7e1d;
L_7c7dec: /* 7c7dec: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c7def: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
L_7c7df2: /* 7c7df2: mov ecx, dword ptr [esi + 0x344] */
  ecx = R32((uint32_t)(esi + 0x344u));
/* 7c7df8: mov eax, dword ptr [esi + 0x3b0] */
  eax = R32((uint32_t)(esi + 0x3b0u));
/* 7c7dfe: imul ecx, ebx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(ebx);
  ecx = (uint32_t)r;
  }
/* 7c7e01: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7c7e03: mov edx, ecx */
  edx = ecx;
/* 7c7e05: sar edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 7c7e08: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 7c7e0b: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 7c7e0e: mov edx, 1 */
  edx = 0x1u;
/* 7c7e13: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 7c7e15: or dword ptr [eax], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax), r);
  }
/* 7c7e17: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7c7e18: jmp 0x7c7bdc */
  goto L_7c7bdc;
L_7c7e1d: /* 7c7e1d: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c7e20: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
L_7c7e23: /* 7c7e23: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7c7e24: jmp 0x7c7bdc */
  goto L_7c7bdc;
L_7c7e29: /* 7c7e29: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7c7e2a: jmp 0x7c7bc5 */
  goto L_7c7bc5;
L_7c7e2f: /* 7c7e2f: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 7c7e34: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7c7e36: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7c7e38: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7c7e3bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7c7e3b: /* 7c7e3b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c7e3e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c7e3f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c7e40: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c7e47: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c7e48: mov esp, ebp */
  esp = ebp;
/* 7c7e4a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c7e4b: ret  */
  esp += 4; SPILL(); return;
}

void f_7c7e4c(void) {
  LOAD_REGS();
L_7c7e4c: /* 7c7e4c: mov eax, dword ptr [ebp - 0x94] */
  eax = R32((uint32_t)(ebp + 0xffffff6cu));
/* 7c7e52: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7c7e57: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* 7c7e5d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c7e5e: mov dword ptr [ebp - 0x90], eax */
  W32((uint32_t)(ebp + 0xffffff70u), eax);
/* 7c7e64: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c7e69u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7c7e69(); return;
}

void f_7c7e69(void) {
  LOAD_REGS();
L_7c7e69: /* 7c7e69: push 0xa0e668 */
  { uint32_t v = 0xa0e668u; esp -= 4; W32(esp, v); }
/* 7c7e6e: push 0xad4420 */
  { uint32_t v = 0xad4420u; esp -= 4; W32(esp, v); }
/* 7c7e73: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7c7e79u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7c7e79: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c7e7c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c7e7e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c7e80: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c7e85u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7c7e85: guest_badaddr(0x7c7e85); return;
}

void f_7c7ff0(void) {
  LOAD_REGS();
L_7c7ff0: /* 7c7ff0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7c7ff1: mov ebp, esp */
  ebp = esp;
/* 7c7ff3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7c7ff5: push 0x9cf950 */
  { uint32_t v = 0x9cf950u; esp -= 4; W32(esp, v); }
/* 7c7ffa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7c8000: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c8001: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7c8008: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c800b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c800c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c800d: mov esi, ecx */
  esi = ecx;
/* 7c800f: mov eax, dword ptr [esi + 0x344] */
  eax = R32((uint32_t)(esi + 0x344u));
/* 7c8015: xor ebx, ebx */
  ebx = 0;
/* 7c8017: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c8019: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c801a: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7c801d: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7c8020: jge 0x7c802a */
  if ((sf == of)) goto L_7c802a;
L_7c8022: /* 7c8022: mov dword ptr [esi + 0x344], ebx */
  W32((uint32_t)(esi + 0x344u), ebx);
/* 7c8028: jmp 0x7c803b */
  goto L_7c803b;
L_7c802a: /* 7c802a: cmp eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c802f: jle 0x7c803b */
  if ((zf || sf != of)) goto L_7c803b;
L_7c8031: /* 7c8031: mov dword ptr [esi + 0x344], 0xff */
  W32((uint32_t)(esi + 0x344u), 0xffu);
L_7c803b: /* 7c803b: mov eax, dword ptr [esi + 0x348] */
  eax = R32((uint32_t)(esi + 0x348u));
/* 7c8041: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c8043: jge 0x7c804d */
  if ((sf == of)) goto L_7c804d;
L_7c8045: /* 7c8045: mov dword ptr [esi + 0x348], ebx */
  W32((uint32_t)(esi + 0x348u), ebx);
/* 7c804b: jmp 0x7c805e */
  goto L_7c805e;
L_7c804d: /* 7c804d: cmp eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c8052: jle 0x7c805e */
  if ((zf || sf != of)) goto L_7c805e;
L_7c8054: /* 7c8054: mov dword ptr [esi + 0x348], 0xff */
  W32((uint32_t)(esi + 0x348u), 0xffu);
L_7c805e: /* 7c805e: mov edi, dword ptr [esi + 0x348] */
  edi = R32((uint32_t)(esi + 0x348u));
/* 7c8064: imul edi, dword ptr [esi + 0x344] */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(R32((uint32_t)(esi + 0x344u)));
  edi = (uint32_t)r;
  }
/* 7c806b: mov eax, dword ptr [esi + 0x3d8] */
  eax = R32((uint32_t)(esi + 0x3d8u));
/* 7c8071: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c8073: je 0x7c8131 */
  if (zf) goto L_7c8131;
L_7c8079: /* 7c8079: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c807b: jle 0x7c80cf */
  if ((zf || sf != of)) goto L_7c80cf;
L_7c807d: /* 7c807d: lea ecx, [esi + 0x3d4] */
  ecx = (uint32_t)(esi + 0x3d4u);
/* 7c8083: xor eax, eax */
  eax = 0;
L_7c8085: /* 7c8085: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c8088: jge 0x7c808d */
  if ((sf == of)) goto L_7c808d;
L_7c808a: /* 7c808a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7c808b: jmp 0x7c8085 */
  goto L_7c8085;
L_7c808d: /* 7c808d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c808e: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7c8090: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7c8096u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7c8096: lea ecx, [esi + 0x3e0] */
  ecx = (uint32_t)(esi + 0x3e0u);
/* 7c809c: xor eax, eax */
  eax = 0;
/* 7c809e: mov edi, edi */
  edi = edi;
L_7c80a0: /* 7c80a0: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c80a3: jge 0x7c80a8 */
  if ((sf == of)) goto L_7c80a8;
L_7c80a5: /* 7c80a5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7c80a6: jmp 0x7c80a0 */
  goto L_7c80a0;
L_7c80a8: /* 7c80a8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c80a9: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7c80ab: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7c80b1u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7c80b1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c80b2: lea ecx, [esi + 0x3b0] */
  ecx = (uint32_t)(esi + 0x3b0u);
/* 7c80b8: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7c80ba: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7c80c0u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7c80c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c80c1: lea ecx, [esi + 0x3ec] */
  ecx = (uint32_t)(esi + 0x3ecu);
/* 7c80c7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7c80c9: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7c80cfu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
L_7c80cf: /* 7c80cf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c80d0: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7c80d2: lea ecx, [esi + 0x3d4] */
  ecx = (uint32_t)(esi + 0x3d4u);
/* 7c80d8: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x7c80deu); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 7c80de: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c80df: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7c80e1: lea ecx, [esi + 0x3e0] */
  ecx = (uint32_t)(esi + 0x3e0u);
/* 7c80e7: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x7c80edu); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 7c80ed: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c80ee: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7c80f0: lea ecx, [esi + 0x3ec] */
  ecx = (uint32_t)(esi + 0x3ecu);
/* 7c80f6: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x7c80fcu); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 7c80fc: shr edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 7c80ff: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7c8101: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 7c8104: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7c8107: jge 0x7c810f */
  if ((sf == of)) goto L_7c810f;
L_7c8109: /* 7c8109: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_7c810f: /* 7c810f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c8110: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7c8113: call dword ptr [0xcfa598] */
  esp -= 4; W32(esp, 0x7c8119u); SPILL(); f_4e301c(); if (g_unwind) return; /* Core!?appCeil@@YAHM@Z */ RELOAD();
/* 7c8119: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c811c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c811d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7c811f: lea ecx, [esi + 0x3b0] */
  ecx = (uint32_t)(esi + 0x3b0u);
/* 7c8125: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x7c812bu); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 7c812b: mov dword ptr [esi + 0x3f8], ebx */
  W32((uint32_t)(esi + 0x3f8u), ebx);
L_7c8131: /* 7c8131: cmp byte ptr [esi + 0x33c], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x33cu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7c8138: jne 0x7c8177 */
  if (!zf) goto L_7c8177;
L_7c813a: /* 7c813a: mov eax, dword ptr [esi + 0x344] */
  eax = R32((uint32_t)(esi + 0x344u));
/* 7c8140: mov ecx, dword ptr [esi + 0x348] */
  ecx = R32((uint32_t)(esi + 0x348u));
/* 7c8146: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 7c8147: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7c814a: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7c814d: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 7c814e: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7c8151: fmul dword ptr [esi + 0x340] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x340u)));
/* 7c8157: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 7c815d: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 7c8160: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7c8163: fmul dword ptr [esi + 0x340] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x340u)));
/* 7c8169: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 7c816f: fmul dword ptr [0xa0e47c] */
  ST0 = ST0 * (F32((uint32_t)(0xa0e47cu)));
/* 7c8175: jmp 0x7c81ac */
  goto L_7c81ac;
L_7c8177: /* 7c8177: mov edx, dword ptr [esi + 0x344] */
  edx = R32((uint32_t)(esi + 0x344u));
/* 7c817d: mov eax, dword ptr [esi + 0x348] */
  eax = R32((uint32_t)(esi + 0x348u));
/* 7c8183: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 7c8184: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 7c8187: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7c818a: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 7c818b: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7c818e: fmul dword ptr [esi + 0x340] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x340u)));
/* 7c8194: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 7c819a: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 7c819d: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7c81a0: fmul dword ptr [esi + 0x340] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x340u)));
/* 7c81a6: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
L_7c81ac: /* 7c81ac: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7c81af: lea edi, [esi + 0x3fc] */
  edi = (uint32_t)(esi + 0x3fcu);
/* 7c81b5: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7c81b8: mov ecx, edi */
  ecx = edi;
/* 7c81ba: fchs  */
  ST0 = -ST0;
/* 7c81bc: mov dword ptr [esi + 0x420], ebx */
  W32((uint32_t)(esi + 0x420u), ebx);
/* 7c81c2: fstp dword ptr [esi + 0x418] */
  WF32((uint32_t)(esi + 0x418u), ST0); FPOP();
/* 7c81c8: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7c81cb: fchs  */
  ST0 = -ST0;
/* 7c81cd: fstp dword ptr [esi + 0x41c] */
  WF32((uint32_t)(esi + 0x41cu), ST0); FPOP();
/* 7c81d3: call dword ptr [0xcfa644] */
  esp -= 4; W32(esp, 0x7c81d9u); SPILL(); f_4e303a(); if (g_unwind) return; /* Core!?Init@FBox@@QAEXXZ */ RELOAD();
/* 7c81d9: mov ecx, dword ptr [esi + 0x418] */
  ecx = R32((uint32_t)(esi + 0x418u));
/* 7c81df: mov eax, dword ptr [esi + 0x420] */
  eax = R32((uint32_t)(esi + 0x420u));
/* 7c81e5: mov edx, dword ptr [esi + 0x41c] */
  edx = R32((uint32_t)(esi + 0x41cu));
/* 7c81eb: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 7c81ee: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 7c81f1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c81f2: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 7c81f5: mov ecx, edi */
  ecx = edi;
/* 7c81f7: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 7c81fa: mov dword ptr [ebp - 0x24], 0xc0a00000 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0xc0a00000u);
/* 7c8201: call dword ptr [0xcfa560] */
  esp -= 4; W32(esp, 0x7c8207u); SPILL(); f_4e1b09(); if (g_unwind) return; /* Core!??YFBox@@QAEAAV0@ABVFVector@@@Z */ RELOAD();
/* 7c8207: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c820a: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7c820d: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 7c8210: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c8211: mov ecx, edi */
  ecx = edi;
/* 7c8213: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 7c8216: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 7c8219: mov dword ptr [ebp - 0x24], 0x40a00000 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x40a00000u);
/* 7c8220: call dword ptr [0xcfa560] */
  esp -= 4; W32(esp, 0x7c8226u); SPILL(); f_4e1b09(); if (g_unwind) return; /* Core!??YFBox@@QAEAAV0@ABVFVector@@@Z */ RELOAD();
/* 7c8226: cmp dword ptr [esi + 0xb4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xb4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c822c: je 0x7c8235 */
  if (zf) goto L_7c8235;
L_7c822e: /* 7c822e: mov ecx, esi */
  ecx = esi;
/* 7c8230: call 0x6c1262 */
  esp -= 4; W32(esp, 0x7c8235u); SPILL(); f_6c1262(); if (g_unwind) return; RELOAD();
L_7c8235: /* 7c8235: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c8238: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c8239: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c823a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c8241: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c8242: mov esp, ebp */
  esp = ebp;
/* 7c8244: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c8245: ret  */
  esp += 4; SPILL(); return;
}

void f_7c8246(void) {
  LOAD_REGS();
L_7c8246: /* 7c8246: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7c8249: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7c824e: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 7c8251: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c8252: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 7c8255: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c825au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7c825a(); return;
}

void f_7c825a(void) {
  LOAD_REGS();
L_7c825a: /* 7c825a: push 0xa0e6c8 */
  { uint32_t v = 0xa0e6c8u; esp -= 4; W32(esp, v); }
/* 7c825f: push 0xad4430 */
  { uint32_t v = 0xad4430u; esp -= 4; W32(esp, v); }
/* 7c8264: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7c826au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7c826a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c826d: xor ebx, ebx */
  ebx = 0;
/* 7c826f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c8270: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c8271: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c8276u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7c8276: guest_badaddr(0x7c8276); return;
}

void f_7c8330(void) {
  LOAD_REGS();
L_7c8330: /* 7c8330: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7c8331: mov ebp, esp */
  ebp = esp;
/* 7c8333: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7c8335: push 0x9cf960 */
  { uint32_t v = 0x9cf960u; esp -= 4; W32(esp, v); }
/* 7c833a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7c8340: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c8341: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7c8348: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c834b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c834c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c834d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c834e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7c8351: mov esi, ecx */
  esi = ecx;
/* 7c8353: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7c835a: call 0x6cb45b */
  esp -= 4; W32(esp, 0x7c835fu); SPILL(); f_6cb45b(); if (g_unwind) return; RELOAD();
/* 7c835f: mov ecx, esi */
  ecx = esi;
/* 7c8361: call 0x6c1a82 */
  esp -= 4; W32(esp, 0x7c8366u); SPILL(); f_6c1a82(); if (g_unwind) return; RELOAD();
/* 7c8366: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c8369: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c836a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c836b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c8372: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c8373: mov esp, ebp */
  esp = ebp;
/* 7c8375: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c8376: ret  */
  esp += 4; SPILL(); return;
}

void f_7c8377(void) {
  LOAD_REGS();
L_7c8377: /* 7c8377: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7c837a: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7c837f: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7c8382: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c8383: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7c8386: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c838bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7c838b(); return;
}

void f_7c838b(void) {
  LOAD_REGS();
L_7c838b: /* 7c838b: push 0xa0e708 */
  { uint32_t v = 0xa0e708u; esp -= 4; W32(esp, v); }
/* 7c8390: push 0xad4438 */
  { uint32_t v = 0xad4438u; esp -= 4; W32(esp, v); }
/* 7c8395: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7c839bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7c839b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c839e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c83a0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c83a2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c83a7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7c83a7: guest_badaddr(0x7c83a7); return;
}

void f_7c83d0(void) {
  LOAD_REGS();
L_7c83d0: /* 7c83d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7c83d1: mov ebp, esp */
  ebp = esp;
/* 7c83d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7c83d5: push 0x9cf970 */
  { uint32_t v = 0x9cf970u; esp -= 4; W32(esp, v); }
/* 7c83da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7c83e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c83e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7c83e8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c83eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c83ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c83ed: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c83ee: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7c83f1: mov esi, ecx */
  esi = ecx;
/* 7c83f3: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7c83fa: call 0x6c45ed */
  esp -= 4; W32(esp, 0x7c83ffu); SPILL(); f_6c45ed(); if (g_unwind) return; RELOAD();
/* 7c83ff: mov ecx, esi */
  ecx = esi;
/* 7c8401: call 0x6c1a82 */
  esp -= 4; W32(esp, 0x7c8406u); SPILL(); f_6c1a82(); if (g_unwind) return; RELOAD();
/* 7c8406: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c8409: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c840a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c840b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c8412: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c8413: mov esp, ebp */
  esp = ebp;
/* 7c8415: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c8416: ret  */
  esp += 4; SPILL(); return;
}

void f_7c8417(void) {
  LOAD_REGS();
L_7c8417: /* 7c8417: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7c841a: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7c841f: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7c8422: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c8423: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7c8426: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c842bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7c842b(); return;
}

void f_7c842b(void) {
  LOAD_REGS();
L_7c842b: /* 7c842b: push 0xa0e758 */
  { uint32_t v = 0xa0e758u; esp -= 4; W32(esp, v); }
/* 7c8430: push 0xad4440 */
  { uint32_t v = 0xad4440u; esp -= 4; W32(esp, v); }
/* 7c8435: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7c843bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7c843b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c843e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c8440: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c8442: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c8447u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7c8447: guest_badaddr(0x7c8447); return;
}

void f_7c8470(void) {
  LOAD_REGS();
L_7c8470: /* 7c8470: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7c8471: mov ebp, esp */
  ebp = esp;
/* 7c8473: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7c8475: push 0x9cf980 */
  { uint32_t v = 0x9cf980u; esp -= 4; W32(esp, v); }
/* 7c847a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7c8480: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c8481: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7c8488: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c848b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c848c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c848d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c848e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7c8491: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7c8498: call 0x6c1a82 */
  esp -= 4; W32(esp, 0x7c849du); SPILL(); f_6c1a82(); if (g_unwind) return; RELOAD();
/* 7c849d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c84a0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c84a1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c84a2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c84a9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c84aa: mov esp, ebp */
  esp = ebp;
/* 7c84ac: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c84ad: ret  */
  esp += 4; SPILL(); return;
}

void f_7c84ae(void) {
  LOAD_REGS();
L_7c84ae: /* 7c84ae: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7c84b1: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7c84b6: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7c84b9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c84ba: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7c84bd: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c84c2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7c84c2(); return;
}

void f_7c84c2(void) {
  LOAD_REGS();
L_7c84c2: /* 7c84c2: push 0xa0e7b0 */
  { uint32_t v = 0xa0e7b0u; esp -= 4; W32(esp, v); }
/* 7c84c7: push 0xad4448 */
  { uint32_t v = 0xad4448u; esp -= 4; W32(esp, v); }
/* 7c84cc: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7c84d2u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7c84d2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c84d5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c84d7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c84d9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c84deu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7c84de: guest_badaddr(0x7c84de); return;
}

void f_7c8500(void) {
  LOAD_REGS();
L_7c8500: /* 7c8500: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7c8501: mov ebp, esp */
  ebp = esp;
/* 7c8503: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7c8505: push 0x9cf990 */
  { uint32_t v = 0x9cf990u; esp -= 4; W32(esp, v); }
/* 7c850a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7c8510: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c8511: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7c8518: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c851b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c851c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c851d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c851e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7c8521: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7c8528: call 0x6c1a82 */
  esp -= 4; W32(esp, 0x7c852du); SPILL(); f_6c1a82(); if (g_unwind) return; RELOAD();
/* 7c852d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c8530: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c8531: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c8532: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c8539: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c853a: mov esp, ebp */
  esp = ebp;
/* 7c853c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c853d: ret  */
  esp += 4; SPILL(); return;
}

void f_7c853e(void) {
  LOAD_REGS();
L_7c853e: /* 7c853e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7c8541: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7c8546: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7c8549: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c854a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7c854d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c8552u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7c8552(); return;
}

void f_7c8552(void) {
  LOAD_REGS();
L_7c8552: /* 7c8552: push 0xa0e7fc */
  { uint32_t v = 0xa0e7fcu; esp -= 4; W32(esp, v); }
/* 7c8557: push 0xad4450 */
  { uint32_t v = 0xad4450u; esp -= 4; W32(esp, v); }
/* 7c855c: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7c8562u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7c8562: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c8565: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c8567: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c8569: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c856eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7c856e: guest_badaddr(0x7c856e); return;
}

void f_7c8590(void) {
  LOAD_REGS();
L_7c8590: /* 7c8590: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7c8591: mov ebp, esp */
  ebp = esp;
/* 7c8593: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7c8595: push 0x9cf9a0 */
  { uint32_t v = 0x9cf9a0u; esp -= 4; W32(esp, v); }
/* 7c859a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7c85a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c85a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7c85a8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c85ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c85ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c85ad: mov esi, ecx */
  esi = ecx;
/* 7c85af: mov eax, dword ptr [esi + 0x42c] */
  eax = R32((uint32_t)(esi + 0x42cu));
/* 7c85b5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c85b7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c85b8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7c85bb: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7c85c2: jne 0x7c85f3 */
  if (!zf) goto L_7c85f3;
L_7c85c4: /* 7c85c4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c85c6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c85c7: mov ecx, esp */
  ecx = esp;
/* 7c85c9: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 7c85cc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c85ce: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7c85d4u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7c85d4: mov ecx, esi */
  ecx = esi;
/* 7c85d6: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7c85dcu); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7c85dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c85dd: push 0xb80740 */
  { uint32_t v = 0xb80740u; esp -= 4; W32(esp, v); }
/* 7c85e2: call 0x6c3125 */
  esp -= 4; W32(esp, 0x7c85e7u); SPILL(); f_6c3125(); if (g_unwind) return; RELOAD();
/* 7c85e7: mov dword ptr [esi + 0x42c], eax */
  W32((uint32_t)(esi + 0x42cu), eax);
/* 7c85ed: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c85f0: mov dword ptr [eax + 0x54], esi */
  W32((uint32_t)(eax + 0x54u), esi);
L_7c85f3: /* 7c85f3: mov eax, dword ptr [esi + 0x42c] */
  eax = R32((uint32_t)(esi + 0x42cu));
/* 7c85f9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c85fc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c85fd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c85fe: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c8605: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c8606: mov esp, ebp */
  esp = ebp;
/* 7c8608: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c8609: ret  */
  esp += 4; SPILL(); return;
}

void f_7c860a(void) {
  LOAD_REGS();
L_7c860a: /* 7c860a: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7c860d: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7c8612: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7c8615: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c8616: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7c8619: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c861eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7c861e(); return;
}

void f_7c861e(void) {
  LOAD_REGS();
L_7c861e: /* 7c861e: push 0xa0e840 */
  { uint32_t v = 0xa0e840u; esp -= 4; W32(esp, v); }
/* 7c8623: push 0xad4460 */
  { uint32_t v = 0xad4460u; esp -= 4; W32(esp, v); }
/* 7c8628: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7c862eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7c862e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c8631: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c8633: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c8635: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c863au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7c863a: guest_badaddr(0x7c863a); return;
}

void f_7c8670(void) {
  LOAD_REGS();
L_7c8670: /* 7c8670: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 7c8673: mov eax, dword ptr [ecx + 0xb4] */
  eax = R32((uint32_t)(ecx + 0xb4u));
/* 7c8679: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c867b: je 0x7c8696 */
  if (zf) goto L_7c8696;
L_7c867d: /* 7c867d: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7c8680: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7c8682: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c8684: je 0x7c8696 */
  if (zf) goto L_7c8696;
L_7c8686: /* 7c8686: mov dl, byte ptr [eax + 0x3f0] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x3f0u))) & 0xffu);
/* 7c868c: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c868e: jne 0x7c8696 */
  if (!zf) goto L_7c8696;
L_7c8690: /* 7c8690: mov eax, 0x90 */
  eax = 0x90u;
/* 7c8695: ret  */
  esp += 4; SPILL(); return;
L_7c8696: /* 7c8696: mov eax, dword ptr [ecx + 0x348] */
  eax = R32((uint32_t)(ecx + 0x348u));
/* 7c869c: imul eax, dword ptr [ecx + 0x344] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ecx + 0x344u)));
  eax = (uint32_t)r;
  }
/* 7c86a3: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 7c86a6: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7c86a9: ret  */
  esp += 4; SPILL(); return;
}

void f_7c86c0(void) {
  LOAD_REGS();
L_7c86c0: /* 7c86c0: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 7c86c3: mov eax, dword ptr [ecx + 0xb4] */
  eax = R32((uint32_t)(ecx + 0xb4u));
/* 7c86c9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c86cb: je 0x7c86e5 */
  if (zf) goto L_7c86e5;
L_7c86cd: /* 7c86cd: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7c86d0: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7c86d2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c86d4: je 0x7c86e5 */
  if (zf) goto L_7c86e5;
L_7c86d6: /* 7c86d6: mov dl, byte ptr [eax + 0x3f0] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x3f0u))) & 0xffu);
/* 7c86dc: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c86de: jne 0x7c86e5 */
  if (!zf) goto L_7c86e5;
L_7c86e0: /* 7c86e0: jmp 0x6cabf5 */
  SPILL(); f_6cabf5(); return;
L_7c86e5: /* 7c86e5: jmp 0x6c7dc4 */
  SPILL(); f_6c7dc4(); return;
}

void f_7c8700(void) {
  LOAD_REGS();
L_7c8700: /* 7c8700: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 7c8703: mov eax, dword ptr [ecx + 0xb4] */
  eax = R32((uint32_t)(ecx + 0xb4u));
/* 7c8709: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c870b: je 0x7c8726 */
  if (zf) goto L_7c8726;
L_7c870d: /* 7c870d: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7c8710: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7c8712: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c8714: je 0x7c8726 */
  if (zf) goto L_7c8726;
L_7c8716: /* 7c8716: mov dl, byte ptr [eax + 0x3f0] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x3f0u))) & 0xffu);
/* 7c871c: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c871e: jne 0x7c8726 */
  if (!zf) goto L_7c8726;
L_7c8720: /* 7c8720: mov eax, 0xc */
  eax = 0xcu;
/* 7c8725: ret  */
  esp += 4; SPILL(); return;
L_7c8726: /* 7c8726: mov eax, dword ptr [ecx + 0x348] */
  eax = R32((uint32_t)(ecx + 0x348u));
/* 7c872c: mov ecx, dword ptr [ecx + 0x344] */
  ecx = R32((uint32_t)(ecx + 0x344u));
/* 7c8732: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 7c8733: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 7c8734: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* 7c8737: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 7c873a: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7c873d: ret  */
  esp += 4; SPILL(); return;
}

void f_7c8750(void) {
  LOAD_REGS();
L_7c8750: /* 7c8750: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 7c8753: mov eax, dword ptr [ecx + 0xb4] */
  eax = R32((uint32_t)(ecx + 0xb4u));
/* 7c8759: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c875b: je 0x7c8775 */
  if (zf) goto L_7c8775;
L_7c875d: /* 7c875d: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7c8760: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7c8762: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c8764: je 0x7c8775 */
  if (zf) goto L_7c8775;
L_7c8766: /* 7c8766: mov dl, byte ptr [eax + 0x3f0] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x3f0u))) & 0xffu);
/* 7c876c: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c876e: jne 0x7c8775 */
  if (!zf) goto L_7c8775;
L_7c8770: /* 7c8770: jmp 0x6cc70c */
  SPILL(); f_6cc70c(); return;
L_7c8775: /* 7c8775: jmp 0x6c2c5c */
  SPILL(); f_6c2c5c(); return;
}

void f_7c8790(void) {
  LOAD_REGS();
L_7c8790: /* 7c8790: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7c8791: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c8792: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c8793: mov edi, ecx */
  edi = ecx;
/* 7c8795: mov ebp, dword ptr [edi + 4] */
  ebp = R32((uint32_t)(edi + 0x4u));
/* 7c8798: xor esi, esi */
  esi = 0;
/* 7c879a: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7c879c: jle 0x7c87c0 */
  if ((zf || sf != of)) goto L_7c87c0;
L_7c879e: /* 7c879e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c879f: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
L_7c87a3: /* 7c87a3: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7c87a5: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 7c87a8: cmp ecx, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c87aa: jne 0x7c87b7 */
  if (!zf) goto L_7c87b7;
L_7c87ac: /* 7c87ac: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7c87ae: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c87af: mov ecx, edi */
  ecx = edi;
/* 7c87b1: call 0x6c1d7f */
  esp -= 4; W32(esp, 0x7c87b6u); SPILL(); f_6c1d7f(); if (g_unwind) return; RELOAD();
/* 7c87b6: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
L_7c87b7: /* 7c87b7: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7c87ba: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7c87bb: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c87bd: jl 0x7c87a3 */
  if ((sf != of)) goto L_7c87a3;
L_7c87bf: /* 7c87bf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_7c87c0: /* 7c87c0: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 7c87c3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c87c4: mov eax, ebp */
  eax = ebp;
/* 7c87c6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c87c7: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7c87c9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c87ca: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7c87e0(void) {
  LOAD_REGS();
L_7c87e0: /* 7c87e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7c87e1: mov ebp, esp */
  ebp = esp;
/* 7c87e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7c87e5: push 0x9cf9b0 */
  { uint32_t v = 0x9cf9b0u; esp -= 4; W32(esp, v); }
/* 7c87ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7c87f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c87f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7c87f8: sub esp, 0x8c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c87fe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c87ff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c8800: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7c8803: mov eax, dword ptr [ecx + 0xb4] */
  eax = R32((uint32_t)(ecx + 0xb4u));
/* 7c8809: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c880b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c880c: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7c880f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7c8816: je 0x7c882f */
  if (zf) goto L_7c882f;
L_7c8818: /* 7c8818: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7c881b: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7c881d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c881f: je 0x7c882f */
  if (zf) goto L_7c882f;
L_7c8821: /* 7c8821: mov dl, byte ptr [eax + 0x3f0] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x3f0u))) & 0xffu);
/* 7c8827: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c8829: je 0x7c8a3c */
  if (zf) goto L_7c8a3c;
L_7c882f: /* 7c882f: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 7c8832: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c8833: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7c8836: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 7c8839: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c883a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c883b: call 0x6ccea5 */
  esp -= 4; W32(esp, 0x7c8840u); SPILL(); f_6ccea5(); if (g_unwind) return; RELOAD();
/* 7c8840: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c8843: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7c8845: lea edx, [ebp - 0x98] */
  edx = (uint32_t)(ebp + 0xffffff68u);
/* 7c884b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c884c: call dword ptr [eax + 0xbc] */
  { uint32_t t = R32((uint32_t)(eax + 0xbcu)); esp -= 4; W32(esp, 0x7c8852u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c8852: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 7c8855: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7c8858: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 7c885b: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7c885e: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 7c8861: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7c8863: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 7c8866: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 7c8869: mov dword ptr [ebp - 0x28], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x3f800000u);
/* 7c8870: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 7c8873: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 7c8876: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7c8879: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7c887c: lea edi, [ebp - 0x48] */
  edi = (uint32_t)(ebp + 0xffffffb8u);
/* 7c887f: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7c8881: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 7c8883: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7c8885: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 7c8888: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7c888a: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 7c888d: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7c888f: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 7c8892: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7c8895: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 7c8898: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7c889b: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 7c889e: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7c88a1: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 7c88a4: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7c88a7: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 7c88aa: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7c88ac: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7c88ae: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7c88b0: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7c88b2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c88b4: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7c88b7: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 7c88ba: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7c88bd: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 7c88c0: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7c88c3: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 7c88c6: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7c88c9: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 7c88cc: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7c88ce: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7c88d0: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7c88d2: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7c88d4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c88d6: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7c88d9: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 7c88dc: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7c88df: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 7c88e2: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7c88e5: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 7c88e8: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7c88eb: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 7c88ee: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7c88f0: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7c88f2: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7c88f4: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7c88f6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c88f8: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7c88fa: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 7c88fc: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7c88fe: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 7c8901: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 7c8904: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 7c8907: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 7c890a: mov edx, dword ptr [ebp - 0x48] */
  edx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 7c890d: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7c8910: mov dword ptr [ebp - 0x4c], ecx */
  W32((uint32_t)(ebp + 0xffffffb4u), ecx);
/* 7c8913: lea ecx, [ebp - 0x98] */
  ecx = (uint32_t)(ebp + 0xffffff68u);
/* 7c8919: mov dword ptr [ebp - 0x54], edx */
  W32((uint32_t)(ebp + 0xffffffacu), edx);
/* 7c891c: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 7c891f: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7c8925u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7c8925: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 7c8928: fcomp dword ptr [0x9f7c0c] */
  fpu_com(ST0, F32((uint32_t)(0x9f7c0cu)));
  FPOP();
/* 7c892e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c8930: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c8933: jne 0x7c8a28 */
  if (!zf) goto L_7c8a28;
L_7c8939: /* 7c8939: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 7c893c: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c893f: fdiv dword ptr [edx + 0x340] */
  ST0 = ST0 / (F32((uint32_t)(edx + 0x340u)));
/* 7c8945: mov edi, dword ptr [0xcfa598] */
  edi = R32((uint32_t)(0xcfa598u));
/* 7c894b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c894c: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7c894f: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7c8951u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c8951: mov esi, eax */
  esi = eax;
/* 7c8953: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c8956: mov cl, byte ptr [eax + 0x33c] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x33cu))) & 0xffu);
/* 7c895c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c895f: cmp cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7c8962: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c8963: jne 0x7c8976 */
  if (!zf) goto L_7c8976;
L_7c8965: /* 7c8965: fld dword ptr [eax + 0x340] */
  { double v = F32((uint32_t)(eax + 0x340u)); FPUSH(v); }
/* 7c896b: fmul dword ptr [0xa0e47c] */
  ST0 = ST0 * (F32((uint32_t)(0xa0e47cu)));
/* 7c8971: fdivr dword ptr [ebp + 0x10] */
  ST0 = (F32((uint32_t)(ebp + 0x10u))) / ST0;
/* 7c8974: jmp 0x7c897f */
  goto L_7c897f;
L_7c8976: /* 7c8976: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 7c8979: fdiv dword ptr [eax + 0x340] */
  ST0 = ST0 / (F32((uint32_t)(eax + 0x340u)));
L_7c897f: /* 7c897f: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7c8982: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7c8984u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c8984: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7c8987: mov ecx, eax */
  ecx = eax;
/* 7c8989: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7c898c: mov ebx, eax */
  ebx = eax;
/* 7c898e: sub ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 7c8990: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7c8992: mov eax, edx */
  eax = edx;
/* 7c8994: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7c8996: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c8999: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7c899b: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 7c899e: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 7c89a1: mov edi, eax */
  edi = eax;
L_7c89a3: /* 7c89a3: cmp edi, dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c89a6: jg 0x7c8a3c */
  if ((!zf && sf == of)) goto L_7c8a3c;
L_7c89ac: /* 7c89ac: mov esi, ebx */
  esi = ebx;
/* 7c89ae: mov edi, edi */
  edi = edi;
L_7c89b0: /* 7c89b0: cmp esi, dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c89b3: jg 0x7c8a22 */
  if ((!zf && sf == of)) goto L_7c8a22;
L_7c89b5: /* 7c89b5: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c89b8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c89b9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c89ba: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 7c89bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c89be: call 0x6c8684 */
  esp -= 4; W32(esp, 0x7c89c3u); SPILL(); f_6c8684(); if (g_unwind) return; RELOAD();
/* 7c89c3: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 7c89c6: fsub dword ptr [ebp - 0x54] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffacu)));
/* 7c89c9: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 7c89cc: fsub dword ptr [ebp - 0x50] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb0u)));
/* 7c89cf: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7c89d1: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7c89d3: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 7c89d5: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 7c89d7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c89d9: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 7c89db: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7c89dd: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 7c89e0: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* 7c89e3: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 7c89e5: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 7c89e7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c89e9: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7c89ec: jp 0x7c8a1b */
  if (pf) goto L_7c8a1b;
L_7c89ee: /* 7c89ee: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 7c89f0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c89f3: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 7c89f6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7c89f8: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x7c89feu); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 7c89fe: fst qword ptr [ebp - 0x40] */
  WF64((uint32_t)(ebp + 0xffffffc0u), ST0);
/* 7c8a01: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c8a04: fdiv dword ptr [ebp + 0x10] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0x10u)));
/* 7c8a07: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c8a08: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c8a0b: fmul dword ptr [ebp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xcu)));
/* 7c8a0e: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7c8a11: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c8a12: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c8a13: call 0x6c849a */
  esp -= 4; W32(esp, 0x7c8a18u); SPILL(); f_6c849a(); if (g_unwind) return; RELOAD();
/* 7c8a18: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7c8a19: jmp 0x7c89b0 */
  goto L_7c89b0;
L_7c8a1b: /* 7c8a1b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7c8a1d: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7c8a1e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7c8a20: jmp 0x7c89b0 */
  goto L_7c89b0;
L_7c8a22: /* 7c8a22: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7c8a23: jmp 0x7c89a3 */
  goto L_7c89a3;
L_7c8a28: /* 7c8a28: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7c8a2b: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7c8a2e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7c8a31: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c8a32: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c8a35: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c8a36: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c8a37: call 0x6c849a */
  esp -= 4; W32(esp, 0x7c8a3cu); SPILL(); f_6c849a(); if (g_unwind) return; RELOAD();
L_7c8a3c: /* 7c8a3c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c8a3f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c8a40: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c8a41: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c8a48: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c8a49: mov esp, ebp */
  esp = ebp;
/* 7c8a4b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c8a4c: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_7c8a4f(void) {
  LOAD_REGS();
L_7c8a4f: /* 7c8a4f: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 7c8a52: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7c8a57: lea edx, [ebp - 0x38] */
  edx = (uint32_t)(ebp + 0xffffffc8u);
/* 7c8a5a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c8a5b: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 7c8a5e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c8a63u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7c8a63(); return;
}

void f_7c8a63(void) {
  LOAD_REGS();
L_7c8a63: /* 7c8a63: push 0xa0e88c */
  { uint32_t v = 0xa0e88cu; esp -= 4; W32(esp, v); }
/* 7c8a68: push 0xad4378 */
  { uint32_t v = 0xad4378u; esp -= 4; W32(esp, v); }
/* 7c8a6d: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7c8a73u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7c8a73: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c8a76: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c8a78: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c8a7a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c8a7fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7c8a7f: guest_badaddr(0x7c8a7f); return;
}

void f_7c8b30(void) {
  LOAD_REGS();
L_7c8b30: /* 7c8b30: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7c8b31: mov ebp, esp */
  ebp = esp;
/* 7c8b33: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7c8b35: push 0x9cf9e0 */
  { uint32_t v = 0x9cf9e0u; esp -= 4; W32(esp, v); }
/* 7c8b3a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7c8b40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c8b41: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7c8b48: sub esp, 0xa8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xa8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c8b4e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c8b4f: mov eax, ecx */
  eax = ecx;
/* 7c8b51: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c8b52: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7c8b55: mov cl, byte ptr [eax + 0x3c0] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x3c0u))) & 0xffu);
/* 7c8b5b: xor ebx, ebx */
  ebx = 0;
/* 7c8b5d: test cl, 2 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c8b60: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c8b61: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7c8b64: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7c8b67: je 0x7c8c34 */
  if (zf) goto L_7c8c34;
L_7c8b6d: /* 7c8b6d: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7c8b70: add ecx, 0x54 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7c8b73: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
/* 7c8b76: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 7c8b79: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 7c8b7c: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 7c8b7f: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 7c8b82: mov dword ptr [ebp - 0x20], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x3f800000u);
/* 7c8b89: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 7c8b8c: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7c8b8f: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7c8b92: lea edi, [ebp - 0x44] */
  edi = (uint32_t)(ebp + 0xffffffbcu);
/* 7c8b95: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7c8b97: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 7c8b99: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7c8b9b: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 7c8b9e: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7c8ba0: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 7c8ba3: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7c8ba5: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 7c8ba8: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7c8bab: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 7c8bae: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7c8bb1: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 7c8bb4: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7c8bb7: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 7c8bba: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7c8bbd: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 7c8bc0: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7c8bc2: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7c8bc4: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7c8bc6: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7c8bc8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c8bca: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7c8bcd: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 7c8bd0: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7c8bd3: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 7c8bd6: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7c8bd9: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 7c8bdc: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7c8bdf: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 7c8be2: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7c8be4: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7c8be6: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7c8be8: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7c8bea: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c8bec: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7c8bef: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 7c8bf2: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7c8bf5: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 7c8bf8: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7c8bfb: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 7c8bfe: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7c8c01: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 7c8c04: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7c8c06: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7c8c08: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7c8c0a: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7c8c0c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c8c0e: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7c8c10: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 7c8c12: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7c8c14: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 7c8c17: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 7c8c1a: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 7c8c1d: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 7c8c20: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c8c23: fcomp dword ptr [eax + 0x3c4] */
  fpu_com(ST0, F32((uint32_t)(eax + 0x3c4u)));
  FPOP();
/* 7c8c29: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c8c2b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7c8c2e: jnp 0x7c8f9a */
  if (!pf) goto L_7c8f9a;
L_7c8c34: /* 7c8c34: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7c8c36: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 7c8c39: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c8c3c: cmp dword ptr [eax + 0x344], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x344u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c8c42: jle 0x7c8ef7 */
  if ((zf || sf != of)) goto L_7c8ef7;
L_7c8c48: /* 7c8c48: cmp dword ptr [eax + 0x348], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x348u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c8c4e: jle 0x7c8ef7 */
  if ((zf || sf != of)) goto L_7c8ef7;
L_7c8c54: /* 7c8c54: cmp dword ptr [eax + 0x3d8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x3d8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c8c5a: jle 0x7c8ef7 */
  if ((zf || sf != of)) goto L_7c8ef7;
L_7c8c60: /* 7c8c60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c8c61: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 7c8c64: call 0x6c3e8b */
  esp -= 4; W32(esp, 0x7c8c69u); SPILL(); f_6c3e8b(); if (g_unwind) return; RELOAD();
/* 7c8c69: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c8c6c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c8c6d: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7c8c70: call 0x6c184d */
  esp -= 4; W32(esp, 0x7c8c75u); SPILL(); f_6c184d(); if (g_unwind) return; RELOAD();
/* 7c8c75: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 7c8c78: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7c8c7a: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x7c8c7cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c8c7c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c8c7f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7c8c81: lea edx, [ebp - 0xb4] */
  edx = (uint32_t)(ebp + 0xffffff4cu);
/* 7c8c87: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c8c88: call dword ptr [eax + 0xb8] */
  { uint32_t t = R32((uint32_t)(eax + 0xb8u)); esp -= 4; W32(esp, 0x7c8c8eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c8c8e: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 7c8c91: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7c8c93: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c8c94: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c8c95: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7c8c99: call dword ptr [edx + 0x38] */
  { uint32_t t = R32((uint32_t)(edx + 0x38u)); esp -= 4; W32(esp, 0x7c8c9cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c8c9c: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* 7c8ca2: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7c8ca5: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7c8cabu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7c8cab: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c8cae: test byte ptr [esi + 0x86], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x86u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c8cb5: je 0x7c8cc5 */
  if (zf) goto L_7c8cc5;
L_7c8cb7: /* 7c8cb7: mov ecx, dword ptr [esi + 0x5c] */
  ecx = R32((uint32_t)(esi + 0x5cu));
/* 7c8cba: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c8cbc: je 0x7c8cc5 */
  if (zf) goto L_7c8cc5;
L_7c8cbe: /* 7c8cbe: call 0x6cadd5 */
  esp -= 4; W32(esp, 0x7c8cc3u); SPILL(); f_6cadd5(); if (g_unwind) return; RELOAD();
/* 7c8cc3: jmp 0x7c8cc7 */
  goto L_7c8cc7;
L_7c8cc5: /* 7c8cc5: mov eax, esi */
  eax = esi;
L_7c8cc7: /* 7c8cc7: mov ecx, dword ptr [eax + 0x84] */
  ecx = R32((uint32_t)(eax + 0x84u));
/* 7c8ccd: test ch, 0x20 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c8cd0: jne 0x7c8db1 */
  if (!zf) goto L_7c8db1;
L_7c8cd6: /* 7c8cd6: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7c8cd9: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7c8cdc: call 0x6cbd7a */
  esp -= 4; W32(esp, 0x7c8ce1u); SPILL(); f_6cbd7a(); if (g_unwind) return; RELOAD();
/* 7c8ce1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c8ce3: je 0x7c8db1 */
  if (zf) goto L_7c8db1;
L_7c8ce9: /* 7c8ce9: fld dword ptr [esi + 0x40c] */
  { double v = F32((uint32_t)(esi + 0x40cu)); FPUSH(v); }
/* 7c8cef: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c8cf2: fsub dword ptr [esi + 0x400] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x400u)));
/* 7c8cf8: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 7c8cfe: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 7c8d02: fld dword ptr [esi + 0x408] */
  { double v = F32((uint32_t)(esi + 0x408u)); FPUSH(v); }
/* 7c8d08: fsub dword ptr [esi + 0x3fc] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x3fcu)));
/* 7c8d0e: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 7c8d14: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7c8d17: call 0x6c47be */
  esp -= 4; W32(esp, 0x7c8d1cu); SPILL(); f_6c47be(); if (g_unwind) return; RELOAD();
/* 7c8d1c: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c8d1f: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7c8d22: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7c8d25: mov ecx, esp */
  ecx = esp;
/* 7c8d27: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 7c8d2a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c8d2b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c8d2e: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 7c8d35: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7c8d38: mov eax, esp */
  eax = esp;
/* 7c8d3a: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 7c8d3c: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 7c8d43: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7c8d46: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7c8d49: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 7c8d50: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7c8d53: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 7c8d56: call dword ptr [0xcfa5a0] */
  esp -= 4; W32(esp, 0x7c8d5cu); SPILL(); f_4e3a21(); if (g_unwind) return; /* Core!??0FSphere@@QAE@VFVector@@M@Z */ RELOAD();
/* 7c8d5c: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7c8d5f: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 7c8d62: mov edx, dword ptr [edx + 4] */
  edx = R32((uint32_t)(edx + 0x4u));
/* 7c8d65: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7c8d67: mov edx, dword ptr [edx + 0x30] */
  edx = R32((uint32_t)(edx + 0x30u));
/* 7c8d6a: mov esi, dword ptr [edx + 0x540] */
  esi = R32((uint32_t)(edx + 0x540u));
/* 7c8d70: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7c8d73: xor eax, eax */
  eax = 0;
/* 7c8d75: cmp esi, 7 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c8d78: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7c8d7b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c8d7c: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7c8d7f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c8d80: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7c8d82: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7c8d84: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7c8d86: call dword ptr [eax + 0x24] */
  { uint32_t t = R32((uint32_t)(eax + 0x24u)); esp -= 4; W32(esp, 0x7c8d89u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c8d89: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 7c8d8c: xor esi, esi */
  esi = 0;
/* 7c8d8e: mov edi, edi */
  edi = edi;
L_7c8d90: /* 7c8d90: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c8d92: je 0x7c8df8 */
  if (zf) goto L_7c8df8;
L_7c8d94: /* 7c8d94: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7c8d96: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 7c8d99: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7c8d9b: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 7c8da0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c8da1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c8da2: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x7c8da5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c8da5: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 7c8da8: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7c8dab: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 7c8dae: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7c8daf: jmp 0x7c8d90 */
  goto L_7c8d90;
L_7c8db1: /* 7c8db1: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c8db4: mov ecx, esp */
  ecx = esp;
/* 7c8db6: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 7c8db9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c8dba: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c8dbd: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 7c8dc4: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7c8dc7: mov edx, esp */
  edx = esp;
/* 7c8dc9: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7c8dcb: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 7c8dd2: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7c8dd5: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 7c8dd8: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 7c8ddf: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7c8de2: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 7c8de5: call dword ptr [0xcfa5a0] */
  esp -= 4; W32(esp, 0x7c8debu); SPILL(); f_4e3a21(); if (g_unwind) return; /* Core!??0FSphere@@QAE@VFVector@@M@Z */ RELOAD();
/* 7c8deb: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 7c8dee: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7c8df0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c8df1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c8df2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c8df3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c8df4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c8df5: call dword ptr [edx + 0x24] */
  { uint32_t t = R32((uint32_t)(edx + 0x24u)); esp -= 4; W32(esp, 0x7c8df8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7c8df8: /* 7c8df8: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7c8dfb: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7c8dfe: call 0x6c84a9 */
  esp -= 4; W32(esp, 0x7c8e03u); SPILL(); f_6c84a9(); if (g_unwind) return; RELOAD();
/* 7c8e03: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c8e05: je 0x7c8e51 */
  if (zf) goto L_7c8e51;
L_7c8e07: /* 7c8e07: cmp dword ptr [0xb8020c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb8020cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c8e0d: jne 0x7c8e4a */
  if (!zf) goto L_7c8e4a;
L_7c8e0f: /* 7c8e0f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c8e10: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c8e11: mov ecx, esp */
  ecx = esp;
/* 7c8e13: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 7c8e16: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c8e17: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7c8e1du); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7c8e1d: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7c8e1f: push 0xb88020 */
  { uint32_t v = 0xb88020u; esp -= 4; W32(esp, v); }
/* 7c8e24: call 0x6cc630 */
  esp -= 4; W32(esp, 0x7c8e29u); SPILL(); f_6cc630(); if (g_unwind) return; RELOAD();
/* 7c8e29: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 7c8e2f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c8e32: push 0xb8020c */
  { uint32_t v = 0xb8020cu; esp -= 4; W32(esp, v); }
/* 7c8e37: mov dword ptr [0xb8020c], eax */
  W32((uint32_t)(0xb8020cu), eax);
/* 7c8e3c: call 0x6c1203 */
  esp -= 4; W32(esp, 0x7c8e41u); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
/* 7c8e41: mov eax, dword ptr [0xb8020c] */
  eax = R32((uint32_t)(0xb8020cu));
/* 7c8e46: or dword ptr [eax + 0x5c], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x5cu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x5cu), r);
  }
L_7c8e4a: /* 7c8e4a: mov eax, dword ptr [0xb8020c] */
  eax = R32((uint32_t)(0xb8020cu));
/* 7c8e4f: jmp 0x7c8e68 */
  goto L_7c8e68;
L_7c8e51: /* 7c8e51: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c8e54: cmp dword ptr [eax + 0x2a4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x2a4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c8e5a: je 0x7c8e66 */
  if (zf) goto L_7c8e66;
L_7c8e5c: /* 7c8e5c: mov ecx, dword ptr [eax + 0x2a0] */
  ecx = R32((uint32_t)(eax + 0x2a0u));
/* 7c8e62: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7c8e64: jmp 0x7c8e68 */
  goto L_7c8e68;
L_7c8e66: /* 7c8e66: xor eax, eax */
  eax = 0;
L_7c8e68: /* 7c8e68: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 7c8e6b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7c8e6d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c8e6e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c8e6f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c8e70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c8e71: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x7c8e74u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c8e74: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 7c8e77: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7c8e79: lea edx, [ebp - 0x6c] */
  edx = (uint32_t)(ebp + 0xffffff94u);
/* 7c8e7c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c8e7d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c8e7e: call dword ptr [eax + 0x50] */
  { uint32_t t = R32((uint32_t)(eax + 0x50u)); esp -= 4; W32(esp, 0x7c8e81u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c8e81: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 7c8e84: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7c8e86: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c8e87: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 7c8e8a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c8e8b: call dword ptr [edx + 0x58] */
  { uint32_t t = R32((uint32_t)(edx + 0x58u)); esp -= 4; W32(esp, 0x7c8e8eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c8e8e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c8e91: mov edx, dword ptr [ecx + 0xb4] */
  edx = R32((uint32_t)(ecx + 0xb4u));
/* 7c8e97: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c8e99: je 0x7c8ebd */
  if (zf) goto L_7c8ebd;
L_7c8e9b: /* 7c8e9b: mov edx, dword ptr [edx + 0x2c] */
  edx = R32((uint32_t)(edx + 0x2cu));
/* 7c8e9e: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 7c8ea0: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c8ea2: je 0x7c8ebd */
  if (zf) goto L_7c8ebd;
L_7c8ea4: /* 7c8ea4: cmp byte ptr [edx + 0x3f0], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x3f0u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7c8eaa: jne 0x7c8ebd */
  if (!zf) goto L_7c8ebd;
L_7c8eac: /* 7c8eac: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 7c8eaf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7c8eb1: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 7c8eb3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c8eb4: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7c8eb6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c8eb7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c8eb8: call dword ptr [edx + 0x5c] */
  { uint32_t t = R32((uint32_t)(edx + 0x5cu)); esp -= 4; W32(esp, 0x7c8ebbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c8ebb: jmp 0x7c8eec */
  goto L_7c8eec;
L_7c8ebd: /* 7c8ebd: mov edi, dword ptr [ecx + 0x348] */
  edi = R32((uint32_t)(ecx + 0x348u));
/* 7c8ec3: mov edx, dword ptr [ecx + 0x344] */
  edx = R32((uint32_t)(ecx + 0x344u));
/* 7c8ec9: lea ecx, [edx - 1] */
  ecx = (uint32_t)(edx + 0xffffffffu);
/* 7c8ecc: imul edx, edi */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(edi);
  edx = (uint32_t)r;
  }
/* 7c8ecf: lea esi, [edi + edi - 2] */
  esi = (uint32_t)(edi + edi + 0xfffffffeu);
/* 7c8ed3: imul esi, ecx */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(ecx);
  esi = (uint32_t)r;
  }
/* 7c8ed6: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 7c8ed9: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 7c8edb: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 7c8edc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c8edd: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 7c8ee0: xor ebx, ebx */
  ebx = 0;
/* 7c8ee2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c8ee3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c8ee4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c8ee5: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7c8ee8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c8ee9: call dword ptr [eax + 0x5c] */
  { uint32_t t = R32((uint32_t)(eax + 0x5cu)); esp -= 4; W32(esp, 0x7c8eecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7c8eec: /* 7c8eec: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 7c8eef: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7c8ef1: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x7c8ef4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c8ef4: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
L_7c8ef7: /* 7c8ef7: test byte ptr [eax + 0x3c0], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x3c0u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c8efe: je 0x7c8f7f */
  if (zf) goto L_7c8f7f;
L_7c8f00: /* 7c8f00: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 7c8f03: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7c8f05: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c8f06: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 7c8f09: call 0x6c460b */
  esp -= 4; W32(esp, 0x7c8f0eu); SPILL(); f_6c460b(); if (g_unwind) return; RELOAD();
/* 7c8f0e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c8f11: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7c8f13: lea eax, [ebp - 0xb4] */
  eax = (uint32_t)(ebp + 0xffffff4cu);
/* 7c8f19: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c8f1a: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7c8f1e: call dword ptr [edx + 0xb8] */
  { uint32_t t = R32((uint32_t)(edx + 0xb8u)); esp -= 4; W32(esp, 0x7c8f24u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c8f24: mov cl, 0xff */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0xffu) & 0xffu);
/* 7c8f26: mov byte ptr [ebp - 0x1c], cl */
  W8((uint32_t)(ebp + 0xffffffe4u), (ecx & 0xffu));
/* 7c8f29: mov byte ptr [ebp - 0x1b], cl */
  W8((uint32_t)(ebp + 0xffffffe5u), (ecx & 0xffu));
/* 7c8f2c: mov byte ptr [ebp - 0x1a], cl */
  W8((uint32_t)(ebp + 0xffffffe6u), (ecx & 0xffu));
/* 7c8f2f: mov byte ptr [ebp - 0x19], cl */
  W8((uint32_t)(ebp + 0xffffffe7u), (ecx & 0xffu));
/* 7c8f32: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c8f33: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 7c8f36: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c8f37: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c8f3a: add ecx, 0x3fc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3fcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7c8f40: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7c8f44: call dword ptr [0xcfa638] */
  esp -= 4; W32(esp, 0x7c8f4au); SPILL(); f_4e2806(); if (g_unwind) return; /* Core!?TransformBy@FBox@@QBE?AV1@ABVFMatrix@@@Z */ RELOAD();
/* 7c8f4a: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7c8f4d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c8f4e: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c8f51: mov esi, eax */
  esi = eax;
/* 7c8f53: mov edi, esp */
  edi = esp;
/* 7c8f55: mov ecx, 7 */
  ecx = 0x7u;
/* 7c8f5a: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7c8f5c: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 7c8f5f: call 0x6c9eb7 */
  esp -= 4; W32(esp, 0x7c8f64u); SPILL(); f_6c9eb7(); if (g_unwind) return; RELOAD();
/* 7c8f64: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* 7c8f6a: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7c8f6e: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7c8f74u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7c8f74: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 7c8f77: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7c8f7a: call 0x6cadcb */
  esp -= 4; W32(esp, 0x7c8f7fu); SPILL(); f_6cadcb(); if (g_unwind) return; RELOAD();
L_7c8f7f: /* 7c8f7f: mov edx, dword ptr [0xce8220] */
  edx = R32((uint32_t)(0xce8220u));
/* 7c8f85: mov eax, dword ptr [0xce84ac] */
  eax = R32((uint32_t)(0xce84acu));
/* 7c8f8a: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 7c8f8d: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7c8f8f: mov esi, dword ptr [ebp - 0x30] */
  esi = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7c8f92: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7c8f94: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7c8f96: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7c8f98: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
L_7c8f9a: /* 7c8f9a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c8f9d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c8f9e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c8f9f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c8fa6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c8fa7: mov esp, ebp */
  esp = ebp;
/* 7c8fa9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c8faa: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_7c8fad(void) {
  LOAD_REGS();
L_7c8fad: /* 7c8fad: mov eax, dword ptr [ebp - 0x58] */
  eax = R32((uint32_t)(ebp + 0xffffffa8u));
/* 7c8fb0: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7c8fb5: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7c8fb8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c8fb9: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 7c8fbc: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c8fc1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7c8fc1(); return;
}

void f_7c8fc1(void) {
  LOAD_REGS();
L_7c8fc1: /* 7c8fc1: push 0xa0e8c8 */
  { uint32_t v = 0xa0e8c8u; esp -= 4; W32(esp, v); }
/* 7c8fc6: push 0xad4428 */
  { uint32_t v = 0xad4428u; esp -= 4; W32(esp, v); }
/* 7c8fcb: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7c8fd1u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7c8fd1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c8fd4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c8fd6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c8fd8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c8fddu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7c8fdd: guest_badaddr(0x7c8fdd); return;
}

void f_7c9110(void) {
  LOAD_REGS();
L_7c9110: /* 7c9110: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7c9111: mov ebp, esp */
  ebp = esp;
/* 7c9113: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7c9115: push 0x9cfa00 */
  { uint32_t v = 0x9cfa00u; esp -= 4; W32(esp, v); }
/* 7c911a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7c9120: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c9121: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7c9128: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c912b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c912c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c912d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c912e: mov esi, ecx */
  esi = ecx;
/* 7c9130: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 7c9136: mov edi, 0x200 */
  edi = 0x200u;
/* 7c913b: test edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c913d: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7c9140: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7c9147: jne 0x7c9226 */
  if (!zf) goto L_7c9226;
L_7c914d: /* 7c914d: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 7c9153: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c9155: je 0x7c9226 */
  if (zf) goto L_7c9226;
L_7c915b: /* 7c915b: push 0xb80210 */
  { uint32_t v = 0xb80210u; esp -= 4; W32(esp, v); }
/* 7c9160: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7c9166u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7c9166: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c9168: je 0x7c9226 */
  if (zf) goto L_7c9226;
L_7c916e: /* 7c916e: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 7c9174: test dword ptr [eax + 0x80], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x80u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c917a: jne 0x7c9226 */
  if (!zf) goto L_7c9226;
L_7c9180: /* 7c9180: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 7c9183: fadd dword ptr [esi + 0x350] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x350u)));
/* 7c9189: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 7c918c: fstp dword ptr [esi + 0x350] */
  WF32((uint32_t)(esi + 0x350u), ST0); FPOP();
/* 7c9192: fld dword ptr [esi + 0x340] */
  { double v = F32((uint32_t)(esi + 0x340u)); FPUSH(v); }
/* 7c9198: fcomp dword ptr [0xa087d0] */
  fpu_com(ST0, F32((uint32_t)(0xa087d0u)));
  FPOP();
/* 7c919e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c91a0: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c91a3: jne 0x7c9200 */
  if (!zf) goto L_7c9200;
L_7c91a5: /* 7c91a5: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 7c91ab: fdiv dword ptr [esi + 0x340] */
  ST0 = ST0 / (F32((uint32_t)(esi + 0x340u)));
/* 7c91b1: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 7c91b4: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 7c91b7: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7c91ba: call 0x99cc5c */
  esp -= 4; W32(esp, 0x7c91bfu); SPILL(); f_99cc5c(); if (g_unwind) return; RELOAD();
/* 7c91bf: fmul dword ptr [esi + 0x340] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x340u)));
/* 7c91c5: movzx ecx, byte ptr [esi + 0x344] */
  ecx = (uint32_t)(R8((uint32_t)(esi + 0x344u)));
/* 7c91cc: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 7c91cf: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c91d2: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 7c91d5: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 7c91db: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c91dd: fmul qword ptr [0xa0e970] */
  ST0 = ST0 * (F64((uint32_t)(0xa0e970u)));
/* 7c91e3: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 7c91e6: call dword ptr [0xcfa614] */
  esp -= 4; W32(esp, 0x7c91ecu); SPILL(); f_4e3e0e(); if (g_unwind) return; /* Core!?appSin@@YANN@Z */ RELOAD();
/* 7c91ec: fstp qword ptr [ebp - 0x18] */
  WF64((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7c91ef: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c91f2: fld dword ptr [esi + 0x348] */
  { double v = F32((uint32_t)(esi + 0x348u)); FPUSH(v); }
/* 7c91f8: fmul qword ptr [ebp - 0x18] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xffffffe8u)));
/* 7c91fb: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 7c91fe: jmp 0x7c9209 */
  goto L_7c9209;
L_7c9200: /* 7c9200: mov edx, dword ptr [esi + 0x348] */
  edx = R32((uint32_t)(esi + 0x348u));
/* 7c9206: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
L_7c9209: /* 7c9209: mov eax, dword ptr [esi + 0x34c] */
  eax = R32((uint32_t)(esi + 0x34cu));
/* 7c920f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7c9212: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c9213: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c9214: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 7c921a: lea edx, [esi + 0x170] */
  edx = (uint32_t)(esi + 0x170u);
/* 7c9220: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c9221: call 0x6cac68 */
  esp -= 4; W32(esp, 0x7c9226u); SPILL(); f_6cac68(); if (g_unwind) return; RELOAD();
L_7c9226: /* 7c9226: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c9229: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c922a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c922b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c9232: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c9233: mov esp, ebp */
  esp = ebp;
/* 7c9235: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c9236: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7c9239(void) {
  LOAD_REGS();
L_7c9239: /* 7c9239: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7c923c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7c9241: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7c9244: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c9245: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 7c9248: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c924du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7c924d(); return;
}

void f_7c924d(void) {
  LOAD_REGS();
L_7c924d: /* 7c924d: push 0xa0e908 */
  { uint32_t v = 0xa0e908u; esp -= 4; W32(esp, v); }
/* 7c9252: push 0xad4498 */
  { uint32_t v = 0xad4498u; esp -= 4; W32(esp, v); }
/* 7c9257: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7c925du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7c925d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c9260: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c9262: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c9264: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c9269u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7c9269: guest_badaddr(0x7c9269); return;
}

void f_7c92d0(void) {
  LOAD_REGS();
L_7c92d0: /* 7c92d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7c92d1: mov ebp, esp */
  ebp = esp;
/* 7c92d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7c92d5: push 0x9cfa10 */
  { uint32_t v = 0x9cfa10u; esp -= 4; W32(esp, v); }
/* 7c92da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7c92e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c92e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7c92e8: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c92eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c92ec: mov ebx, dword ptr [ecx + 0xb4] */
  ebx = R32((uint32_t)(ecx + 0xb4u));
/* 7c92f2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c92f3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c92f4: xor edi, edi */
  edi = 0;
/* 7c92f6: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c92f8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7c92fb: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7c92fe: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 7c9301: je 0x7c938c */
  if (zf) goto L_7c938c;
L_7c9307: /* 7c9307: cmp edi, dword ptr [ebx + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c930a: jge 0x7c9365 */
  if ((sf == of)) goto L_7c9365;
L_7c930c: /* 7c930c: mov eax, dword ptr [ebx + 0x2c] */
  eax = R32((uint32_t)(ebx + 0x2cu));
/* 7c930f: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* 7c9312: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c9314: je 0x7c9362 */
  if (zf) goto L_7c9362;
L_7c9316: /* 7c9316: mov eax, dword ptr [ecx + 0x80] */
  eax = R32((uint32_t)(ecx + 0x80u));
/* 7c931c: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c931f: jne 0x7c9362 */
  if (!zf) goto L_7c9362;
L_7c9321: /* 7c9321: push 0xb80210 */
  { uint32_t v = 0xb80210u; esp -= 4; W32(esp, v); }
/* 7c9326: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7c932cu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7c932c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c932e: je 0x7c9362 */
  if (zf) goto L_7c9362;
L_7c9330: /* 7c9330: mov ecx, dword ptr [ebx + 0x2c] */
  ecx = R32((uint32_t)(ebx + 0x2cu));
/* 7c9333: mov esi, dword ptr [ecx + edi*4] */
  esi = R32((uint32_t)(ecx + edi*4));
/* 7c9336: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c9338: je 0x7c934b */
  if (zf) goto L_7c934b;
L_7c933a: /* 7c933a: push 0xb80210 */
  { uint32_t v = 0xb80210u; esp -= 4; W32(esp, v); }
/* 7c933f: mov ecx, esi */
  ecx = esi;
/* 7c9341: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7c9347u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7c9347: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c9349: jne 0x7c934d */
  if (!zf) goto L_7c934d;
L_7c934b: /* 7c934b: xor esi, esi */
  esi = 0;
L_7c934d: /* 7c934d: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c9350: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 7c9353: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c9354: lea ecx, [esi + 0x430] */
  ecx = (uint32_t)(esi + 0x430u);
/* 7c935a: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 7c935d: call 0x6c82e2 */
  esp -= 4; W32(esp, 0x7c9362u); SPILL(); f_6c82e2(); if (g_unwind) return; RELOAD();
L_7c9362: /* 7c9362: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7c9363: jmp 0x7c9307 */
  goto L_7c9307;
L_7c9365: /* 7c9365: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c9368: mov eax, dword ptr [ecx + 0x33c] */
  eax = R32((uint32_t)(ecx + 0x33cu));
/* 7c936e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c9370: je 0x7c938c */
  if (zf) goto L_7c938c;
L_7c9372: /* 7c9372: lea esi, [eax + 0x430] */
  esi = (uint32_t)(eax + 0x430u);
/* 7c9378: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7c937a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7c937c: mov ecx, esi */
  ecx = esi;
/* 7c937e: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7c9384u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7c9384: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7c9386: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c9389: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
L_7c938c: /* 7c938c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c938f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c9390: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c9391: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c9398: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c9399: mov esp, ebp */
  esp = ebp;
/* 7c939b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c939c: ret  */
  esp += 4; SPILL(); return;
}

void f_7c939d(void) {
  LOAD_REGS();
L_7c939d: /* 7c939d: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7c93a0: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7c93a5: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 7c93a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c93a9: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 7c93ac: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c93b1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7c93b1(); return;
}

void f_7c93b1(void) {
  LOAD_REGS();
L_7c93b1: /* 7c93b1: push 0xa0e980 */
  { uint32_t v = 0xa0e980u; esp -= 4; W32(esp, v); }
/* 7c93b6: push 0xad44a0 */
  { uint32_t v = 0xad44a0u; esp -= 4; W32(esp, v); }
/* 7c93bb: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7c93c1u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7c93c1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c93c4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c93c6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c93c8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c93cdu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7c93cd: guest_badaddr(0x7c93cd); return;
}

void f_7c9410(void) {
  LOAD_REGS();
L_7c9410: /* 7c9410: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7c9411: mov ebp, esp */
  ebp = esp;
/* 7c9413: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7c9415: push 0x9cfa20 */
  { uint32_t v = 0x9cfa20u; esp -= 4; W32(esp, v); }
/* 7c941a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7c9420: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c9421: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7c9428: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c942b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c942c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c942d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c942e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7c9431: mov esi, ecx */
  esi = ecx;
/* 7c9433: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7c943a: call 0x6c1ee7 */
  esp -= 4; W32(esp, 0x7c943fu); SPILL(); f_6c1ee7(); if (g_unwind) return; RELOAD();
/* 7c943f: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 7c9445: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c9447: je 0x7c945b */
  if (zf) goto L_7c945b;
L_7c9449: /* 7c9449: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7c944c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c944d: lea ecx, [eax + 0x430] */
  ecx = (uint32_t)(eax + 0x430u);
/* 7c9453: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 7c9456: call 0x6c82e2 */
  esp -= 4; W32(esp, 0x7c945bu); SPILL(); f_6c82e2(); if (g_unwind) return; RELOAD();
L_7c945b: /* 7c945b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c945e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c945f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c9460: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c9467: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c9468: mov esp, ebp */
  esp = ebp;
/* 7c946a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c946b: ret  */
  esp += 4; SPILL(); return;
}

void f_7c946c(void) {
  LOAD_REGS();
L_7c946c: /* 7c946c: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7c946f: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7c9474: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 7c9477: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c9478: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 7c947b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c9480u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7c9480(); return;
}

void f_7c9480(void) {
  LOAD_REGS();
L_7c9480: /* 7c9480: push 0xa0e9e0 */
  { uint32_t v = 0xa0e9e0u; esp -= 4; W32(esp, v); }
/* 7c9485: push 0xad44a8 */
  { uint32_t v = 0xad44a8u; esp -= 4; W32(esp, v); }
/* 7c948a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7c9490u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7c9490: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c9493: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c9495: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c9497: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c949cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7c949c: guest_badaddr(0x7c949c); return;
}

void f_7c94d0(void) {
  LOAD_REGS();
L_7c94d0: /* 7c94d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7c94d1: mov ebp, esp */
  ebp = esp;
/* 7c94d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7c94d5: push 0x9cfa30 */
  { uint32_t v = 0x9cfa30u; esp -= 4; W32(esp, v); }
/* 7c94da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7c94e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c94e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7c94e8: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c94eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c94ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c94ed: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7c94f0: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7c94f3: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7c94f6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7c94f7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c94f8: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7c94fb: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7c94fe: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 7c9501: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c9502: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7c9507: mov edi, ecx */
  edi = ecx;
/* 7c9509: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7c950c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c950d: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7c9514: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7c9517u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c9517: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7c951a: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7c951d: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 7c9524: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7c9527: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7c9528: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7c952b: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7c952e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c952f: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7c9534: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c9535: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7c9538u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c9538: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7c953b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7c953e: mov dword ptr [ebp + 8], 0 */
  W32((uint32_t)(ebp + 0x8u), 0x0u);
/* 7c9545: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7c9548: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7c9549: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7c954c: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7c954f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c9550: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7c9555: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c9556: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7c9559u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c9559: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 7c955c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7c955d: mov eax, edx */
  eax = edx;
/* 7c955f: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 7c9562: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7c9565: jne 0x7c957d */
  if (!zf) goto L_7c957d;
L_7c9567: /* 7c9567: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7c956a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7c956b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c956d: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7c9570: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 7c9576: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c9577: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x7c957du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7c957d: /* 7c957d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7c9580: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c9583: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c9584: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c9585: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 7c9588: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c9589: mov ecx, edi */
  ecx = edi;
/* 7c958b: call 0x6cac68 */
  esp -= 4; W32(esp, 0x7c9590u); SPILL(); f_6cac68(); if (g_unwind) return; RELOAD();
/* 7c9590: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c9593: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c9594: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c9595: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c959c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c959d: mov esp, ebp */
  esp = ebp;
/* 7c959f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c95a0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7c95a3(void) {
  LOAD_REGS();
L_7c95a3: /* 7c95a3: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7c95a6: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7c95ab: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7c95ae: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c95af: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7c95b2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c95b7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7c95b7(); return;
}

void f_7c95b7(void) {
  LOAD_REGS();
L_7c95b7: /* 7c95b7: push 0xa0ea30 */
  { uint32_t v = 0xa0ea30u; esp -= 4; W32(esp, v); }
/* 7c95bc: push 0xad436c */
  { uint32_t v = 0xad436cu; esp -= 4; W32(esp, v); }
/* 7c95c1: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7c95c7u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7c95c7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c95ca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c95cc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c95ce: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c95d3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7c95d3: guest_badaddr(0x7c95d3); return;
}

void f_7c9630(void) {
  LOAD_REGS();
L_7c9630: /* 7c9630: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7c9631: mov ebp, esp */
  ebp = esp;
/* 7c9633: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7c9635: push 0x9cfa40 */
  { uint32_t v = 0x9cfa40u; esp -= 4; W32(esp, v); }
/* 7c963a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7c9640: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c9641: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7c9648: sub esp, 0xa0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xa0u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c964e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c964f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c9650: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c9651: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7c9654: mov eax, dword ptr [ecx + 0xb4] */
  eax = R32((uint32_t)(ecx + 0xb4u));
/* 7c965a: xor edi, edi */
  edi = 0;
/* 7c965c: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c965e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7c9661: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 7c9664: je 0x7c967d */
  if (zf) goto L_7c967d;
L_7c9666: /* 7c9666: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7c9669: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7c966b: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c966d: je 0x7c967d */
  if (zf) goto L_7c967d;
L_7c966f: /* 7c966f: mov dl, byte ptr [eax + 0x3f0] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x3f0u))) & 0xffu);
/* 7c9675: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c9677: je 0x7c9cd9 */
  if (zf) goto L_7c9cd9;
L_7c967d: /* 7c967d: mov ebx, 0x200 */
  ebx = 0x200u;
L_7c9682: /* 7c9682: cmp edi, dword ptr [ecx + 0x114] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x114u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c9688: jge 0x7c9700 */
  if ((sf == of)) goto L_7c9700;
L_7c968a: /* 7c968a: mov edx, dword ptr [ecx + 0x110] */
  edx = R32((uint32_t)(ecx + 0x110u));
/* 7c9690: mov esi, dword ptr [edx + edi*4] */
  esi = R32((uint32_t)(edx + edi*4));
/* 7c9693: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c9695: je 0x7c96fd */
  if (zf) goto L_7c96fd;
L_7c9697: /* 7c9697: test dword ptr [esi + 0x84], 0x40000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x84u))); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c96a1: je 0x7c96fd */
  if (zf) goto L_7c96fd;
L_7c96a3: /* 7c96a3: test dword ptr [esi + 0x80], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x80u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c96a9: jne 0x7c96fd */
  if (!zf) goto L_7c96fd;
L_7c96ab: /* 7c96ab: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7c96ad: lea edx, [ebp - 0x9c] */
  edx = (uint32_t)(ebp + 0xffffff64u);
/* 7c96b3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c96b4: call dword ptr [eax + 0xb0] */
  { uint32_t t = R32((uint32_t)(eax + 0xb0u)); esp -= 4; W32(esp, 0x7c96bau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c96ba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c96bb: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 7c96be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c96bf: lea ecx, [esi + 0x188] */
  ecx = (uint32_t)(esi + 0x188u);
/* 7c96c5: call dword ptr [0xcfa888] */
  esp -= 4; W32(esp, 0x7c96cbu); SPILL(); f_4e24e6(); if (g_unwind) return; /* Core!?TransformVectorBy@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 7c96cb: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7c96ce: call dword ptr [0xcfa8a0] */
  esp -= 4; W32(esp, 0x7c96d4u); SPILL(); f_4e23dd(); if (g_unwind) return; /* Core!?Size2D@FVector@@QBEMXZ */ RELOAD();
/* 7c96d4: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 7c96d7: mov ecx, dword ptr [esi + 0x2d4] */
  ecx = R32((uint32_t)(esi + 0x2d4u));
/* 7c96dd: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 7c96e0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c96e1: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c96e4: fmul dword ptr [ecx + 0x398] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x398u)));
/* 7c96ea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c96eb: add esi, 0x170 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7c96f1: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7c96f4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c96f5: call 0x6cac68 */
  esp -= 4; W32(esp, 0x7c96fau); SPILL(); f_6cac68(); if (g_unwind) return; RELOAD();
/* 7c96fa: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_7c96fd: /* 7c96fd: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7c96fe: jmp 0x7c9682 */
  goto L_7c9682;
L_7c9700: /* 7c9700: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 7c9703: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c9704: fmul dword ptr [ecx + 0x358] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x358u)));
/* 7c970a: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7c970d: call dword ptr [0xcfa3dc] */
  esp -= 4; W32(esp, 0x7c9713u); SPILL(); f_4e392c(); if (g_unwind) return; /* Core!?appFloor@@YAHM@Z */ RELOAD();
/* 7c9713: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c9716: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c9719: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 7c971c: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
L_7c9723: /* 7c9723: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7c9726: cmp dword ptr [ebp - 0x2c], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c9729: mov edi, dword ptr [0xcfa5ec] */
  edi = R32((uint32_t)(0xcfa5ecu));
/* 7c972f: jge 0x7c97ac */
  if ((sf == of)) goto L_7c97ac;
L_7c9731: /* 7c9731: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7c9733u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c9733: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c9736: mov ecx, dword ptr [ecx + 0x344] */
  ecx = R32((uint32_t)(ecx + 0x344u));
/* 7c973c: sub ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 7c973f: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 7c9740: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x7c9740);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 7c9742: mov ebx, edx */
  ebx = edx;
/* 7c9744: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7c9745: mov dword ptr [ebp - 0x30], ebx */
  W32((uint32_t)(ebp + 0xffffffd0u), ebx);
/* 7c9748: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7c974au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c974a: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c974d: mov ecx, dword ptr [esi + 0x348] */
  ecx = R32((uint32_t)(esi + 0x348u));
/* 7c9753: sub ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 7c9756: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 7c9757: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x7c9757);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 7c9759: mov ecx, dword ptr [esi + 0x344] */
  ecx = R32((uint32_t)(esi + 0x344u));
/* 7c975f: mov eax, dword ptr [esi + 0x3b0] */
  eax = R32((uint32_t)(esi + 0x3b0u));
/* 7c9765: mov edi, edx */
  edi = edx;
/* 7c9767: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7c9768: imul ecx, edi */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edi);
  ecx = (uint32_t)r;
  }
/* 7c976b: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7c976d: mov edx, ecx */
  edx = ecx;
/* 7c976f: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 7c9772: mov ebx, 1 */
  ebx = 0x1u;
/* 7c9777: shl ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
  }
/* 7c9779: sar edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 7c977c: test dword ptr [eax + edx*4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + edx*4))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c977f: jne 0x7c97a4 */
  if (!zf) goto L_7c97a4;
L_7c9781: /* 7c9781: lea ecx, [esi + 0x35c] */
  ecx = (uint32_t)(esi + 0x35cu);
/* 7c9787: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x7c978du); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 7c978d: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7c9790: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7c9793: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7c9796: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c9797: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c979a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c979b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c979c: call 0x6c849a */
  esp -= 4; W32(esp, 0x7c97a1u); SPILL(); f_6c849a(); if (g_unwind) return; RELOAD();
/* 7c97a1: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
L_7c97a4: /* 7c97a4: inc dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd4u), r);
  }
/* 7c97a7: jmp 0x7c9723 */
  goto L_7c9723;
L_7c97ac: /* 7c97ac: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 7c97b1: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c97b4: je 0x7c9992 */
  if (zf) goto L_7c9992;
L_7c97ba: /* 7c97ba: test byte ptr [esi + 0x364], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x364u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c97c1: je 0x7c9992 */
  if (zf) goto L_7c9992;
L_7c97c7: /* 7c97c7: fld dword ptr [esi + 0x368] */
  { double v = F32((uint32_t)(esi + 0x368u)); FPUSH(v); }
/* 7c97cd: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 7c97d0: fmul qword ptr [0xa0e2d8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0e2d8u)));
/* 7c97d6: fadd dword ptr [esi + 0x428] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x428u)));
/* 7c97dc: fstp dword ptr [esi + 0x428] */
  WF32((uint32_t)(esi + 0x428u), ST0); FPOP();
/* 7c97e2: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c97e5: mov edx, dword ptr [ecx + 0x344] */
  edx = R32((uint32_t)(ecx + 0x344u));
/* 7c97eb: mov al, byte ptr [ecx + 0x33c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x33cu))) & 0xffu);
/* 7c97f1: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 7c97f2: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 7c97f5: fild dword ptr [ebp - 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 7c97f8: cmp al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7c97fa: mov eax, dword ptr [ecx + 0x348] */
  eax = R32((uint32_t)(ecx + 0x348u));
/* 7c9800: fmul dword ptr [ecx + 0x340] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x340u)));
/* 7c9806: fmul dword ptr [0xa0d56c] */
  ST0 = ST0 * (F32((uint32_t)(0xa0d56cu)));
/* 7c980c: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 7c980f: jne 0x7c9826 */
  if (!zf) goto L_7c9826;
L_7c9811: /* 7c9811: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 7c9812: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 7c9815: fild dword ptr [ebp - 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 7c9818: fmul dword ptr [ecx + 0x340] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x340u)));
/* 7c981e: fmul dword ptr [0xa0ead0] */
  ST0 = ST0 * (F32((uint32_t)(0xa0ead0u)));
/* 7c9824: jmp 0x7c9839 */
  goto L_7c9839;
L_7c9826: /* 7c9826: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 7c9827: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 7c982a: fild dword ptr [ebp - 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 7c982d: fmul dword ptr [ecx + 0x340] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x340u)));
/* 7c9833: fmul dword ptr [0xa0d56c] */
  ST0 = ST0 * (F32((uint32_t)(0xa0d56cu)));
L_7c9839: /* 7c9839: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7c983c: fcomp dword ptr [ebp - 0x1c] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe4u)));
  FPOP();
/* 7c983f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c9841: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c9844: je 0x7c984c */
  if (zf) goto L_7c984c;
L_7c9846: /* 7c9846: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7c9849: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
L_7c984c: /* 7c984c: fld dword ptr [ecx + 0x428] */
  { double v = F32((uint32_t)(ecx + 0x428u)); FPUSH(v); }
/* 7c9852: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c9855: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 7c9858: call dword ptr [0xcfa614] */
  esp -= 4; W32(esp, 0x7c985eu); SPILL(); f_4e3e0e(); if (g_unwind) return; /* Core!?appSin@@YANN@Z */ RELOAD();
/* 7c985e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c9861: fstp qword ptr [ebp - 0x28] */
  WF64((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 7c9864: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7c9867: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c986a: fmul qword ptr [ebp - 0x28] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xffffffd8u)));
/* 7c986d: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c9870: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 7c9873: fld dword ptr [eax + 0x428] */
  { double v = F32((uint32_t)(eax + 0x428u)); FPUSH(v); }
/* 7c9879: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 7c987c: call dword ptr [0xcfa89c] */
  esp -= 4; W32(esp, 0x7c9882u); SPILL(); f_4e1807(); if (g_unwind) return; /* Core!?appCos@@YANN@Z */ RELOAD();
/* 7c9882: fstp qword ptr [ebp - 0x28] */
  WF64((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 7c9885: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7c9888: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c988b: fmul qword ptr [ebp - 0x28] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xffffffd8u)));
/* 7c988e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7c9890: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c9893: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 7c9896: lea eax, [ebp - 0xac] */
  eax = (uint32_t)(ebp + 0xffffff54u);
/* 7c989c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c989d: call dword ptr [edx + 0xb8] */
  { uint32_t t = R32((uint32_t)(edx + 0xb8u)); esp -= 4; W32(esp, 0x7c98a3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c98a3: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7c98a6: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 7c98a9: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 7c98ac: lea eax, [ebp - 0x68] */
  eax = (uint32_t)(ebp + 0xffffff98u);
/* 7c98af: mov dword ptr [ebp - 0x68], ecx */
  W32((uint32_t)(ebp + 0xffffff98u), ecx);
/* 7c98b2: mov dword ptr [ebp - 0x64], edx */
  W32((uint32_t)(ebp + 0xffffff9cu), edx);
/* 7c98b5: mov dword ptr [ebp - 0x60], 0 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x0u);
/* 7c98bc: mov dword ptr [ebp - 0x5c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x3f800000u);
/* 7c98c3: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 7c98c6: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7c98c9: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7c98cc: lea edi, [ebp - 0x48] */
  edi = (uint32_t)(ebp + 0xffffffb8u);
/* 7c98cf: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7c98d1: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 7c98d3: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7c98d5: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 7c98d8: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7c98da: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 7c98dd: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7c98df: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 7c98e2: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7c98e5: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 7c98e8: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7c98eb: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 7c98ee: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7c98f1: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 7c98f4: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7c98f7: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 7c98fa: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7c98fc: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7c98fe: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7c9900: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7c9902: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c9904: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7c9907: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 7c990a: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7c990d: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 7c9910: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7c9913: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 7c9916: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7c9919: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 7c991c: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7c991e: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7c9920: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7c9922: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7c9924: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c9926: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7c9929: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 7c992c: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7c992f: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 7c9932: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7c9935: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 7c9938: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7c993b: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 7c993e: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7c9940: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7c9942: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7c9944: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7c9946: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c9948: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7c994a: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 7c994c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7c994e: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 7c9951: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 7c9954: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 7c9957: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 7c995a: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7c995d: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 7c9960: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 7c9963: lea ecx, [ebp - 0xac] */
  ecx = (uint32_t)(ebp + 0xffffff54u);
/* 7c9969: mov dword ptr [ebp - 0x54], edx */
  W32((uint32_t)(ebp + 0xffffffacu), edx);
/* 7c996c: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 7c996f: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7c9975u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7c9975: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c9978: mov edx, dword ptr [ecx + 0x370] */
  edx = R32((uint32_t)(ecx + 0x370u));
/* 7c997e: mov eax, dword ptr [ecx + 0x36c] */
  eax = R32((uint32_t)(ecx + 0x36cu));
/* 7c9984: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c9985: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c9986: lea edx, [ebp - 0x58] */
  edx = (uint32_t)(ebp + 0xffffffa8u);
/* 7c9989: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c998a: call 0x6cac68 */
  esp -= 4; W32(esp, 0x7c998fu); SPILL(); f_6cac68(); if (g_unwind) return; RELOAD();
/* 7c998f: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
L_7c9992: /* 7c9992: xor edi, edi */
  edi = 0;
L_7c9994: /* 7c9994: cmp edi, dword ptr [esi + 0x434] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x434u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c999a: jge 0x7c99b8 */
  if ((sf == of)) goto L_7c99b8;
L_7c999c: /* 7c999c: mov eax, dword ptr [esi + 0x430] */
  eax = R32((uint32_t)(esi + 0x430u));
/* 7c99a2: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* 7c99a5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c99a7: je 0x7c99b5 */
  if (zf) goto L_7c99b5;
L_7c99a9: /* 7c99a9: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7c99ac: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c99ad: call 0x6cb726 */
  esp -= 4; W32(esp, 0x7c99b2u); SPILL(); f_6cb726(); if (g_unwind) return; RELOAD();
/* 7c99b2: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
L_7c99b5: /* 7c99b5: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7c99b6: jmp 0x7c9994 */
  goto L_7c9994;
L_7c99b8: /* 7c99b8: mov eax, dword ptr [esi + 0x3f8] */
  eax = R32((uint32_t)(esi + 0x3f8u));
/* 7c99be: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c99c0: lea eax, [esi + 0x3d4] */
  eax = (uint32_t)(esi + 0x3d4u);
/* 7c99c6: jne 0x7c99e0 */
  if (!zf) goto L_7c99e0;
L_7c99c8: /* 7c99c8: lea ecx, [esi + 0x3e0] */
  ecx = (uint32_t)(esi + 0x3e0u);
/* 7c99ce: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 7c99d1: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 7c99d4: mov dword ptr [esi + 0x3f8], 1 */
  W32((uint32_t)(esi + 0x3f8u), 0x1u);
/* 7c99de: jmp 0x7c99f6 */
  goto L_7c99f6;
L_7c99e0: /* 7c99e0: lea edx, [esi + 0x3e0] */
  edx = (uint32_t)(esi + 0x3e0u);
/* 7c99e6: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 7c99e9: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 7c99ec: mov dword ptr [esi + 0x3f8], 0 */
  W32((uint32_t)(esi + 0x3f8u), 0x0u);
L_7c99f6: /* 7c99f6: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7c99f8: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 7c99fb: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 7c99fe: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c9a01: fmul dword ptr [eax + 0x354] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x354u)));
/* 7c9a07: mov cl, byte ptr [eax + 0x33c] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x33cu))) & 0xffu);
/* 7c9a0d: cmp cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7c9a10: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 7c9a16: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7c9a19: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 7c9a1c: fmul dword ptr [eax + 0x350] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x350u)));
/* 7c9a22: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7c9a24: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7c9a26: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 7c9a29: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7c9a2b: fld dword ptr [eax + 0x340] */
  { double v = F32((uint32_t)(eax + 0x340u)); FPUSH(v); }
/* 7c9a31: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7c9a33: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7c9a35: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 7c9a3b: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 7c9a3e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7c9a40: jne 0x7c9cec */
  if (!zf) goto L_7c9cec;
L_7c9a46: /* 7c9a46: mov ebx, 1 */
  ebx = 0x1u;
/* 7c9a4b: jmp 0x7c9a50 */
  goto L_7c9a50;
L_7c9a50: /* 7c9a50: mov ecx, dword ptr [eax + 0x348] */
  ecx = R32((uint32_t)(eax + 0x348u));
/* 7c9a56: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 7c9a57: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c9a59: jge 0x7c9cbe */
  if ((sf == of)) goto L_7c9cbe;
L_7c9a5f: /* 7c9a5f: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c9a62: mov esi, 1 */
  esi = 0x1u;
/* 7c9a67: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 7c9a6a: je 0x7c9b94 */
  if (zf) goto L_7c9b94;
L_7c9a70: /* 7c9a70: mov ecx, dword ptr [eax + 0x344] */
  ecx = R32((uint32_t)(eax + 0x344u));
/* 7c9a76: lea edx, [ecx - 1] */
  edx = (uint32_t)(ecx + 0xffffffffu);
/* 7c9a79: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c9a7b: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7c9a7e: jge 0x7c9cb8 */
  if ((sf == of)) goto L_7c9cb8;
L_7c9a84: /* 7c9a84: mov eax, dword ptr [eax + 0x3b0] */
  eax = R32((uint32_t)(eax + 0x3b0u));
/* 7c9a8a: mov edx, ebx */
  edx = ebx;
/* 7c9a8c: imul edx, ecx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ecx);
  edx = (uint32_t)r;
  }
/* 7c9a8f: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7c9a91: mov ecx, edx */
  ecx = edx;
/* 7c9a93: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7c9a96: mov edi, 1 */
  edi = 0x1u;
/* 7c9a9b: mov esi, edx */
  esi = edx;
/* 7c9a9d: sar esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  cf = ((int32_t)(int32_t)a >> (c - 1)) & 1;
  of = 0;
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  esi = r;
  }
/* 7c9aa0: shl edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
  }
/* 7c9aa2: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 7c9aa5: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7c9aa8: test edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c9aaa: jne 0x7c9b88 */
  if (!zf) goto L_7c9b88;
L_7c9ab0: /* 7c9ab0: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 7c9ab3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7c9ab5: fld dword ptr [eax + edx*4 - 4] */
  { double v = F32((uint32_t)(eax + edx*4 + 0xfffffffcu)); FPUSH(v); }
/* 7c9ab9: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7c9abc: lea edi, [ebx - 1] */
  edi = (uint32_t)(ebx + 0xffffffffu);
/* 7c9abf: imul edi, ecx */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(ecx);
  edi = (uint32_t)r;
  }
/* 7c9ac2: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7c9ac4: lea edi, [eax + edi*4] */
  edi = (uint32_t)(eax + edi*4);
/* 7c9ac7: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 7c9aca: lea edi, [ebx + 1] */
  edi = (uint32_t)(ebx + 0x1u);
/* 7c9acd: imul edi, ecx */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(ecx);
  edi = (uint32_t)r;
  }
/* 7c9ad0: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7c9ad2: lea ecx, [eax + edi*4] */
  ecx = (uint32_t)(eax + edi*4);
/* 7c9ad5: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7c9ad8: fadd dword ptr [eax + edx*4 + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + edx*4 + 0x4u)));
/* 7c9adc: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* 7c9adf: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 7c9ae2: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* 7c9ae4: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 7c9ae6: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7c9ae9: fld dword ptr [eax + edx*4] */
  { double v = F32((uint32_t)(eax + edx*4)); FPUSH(v); }
/* 7c9aec: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 7c9aee: fmul dword ptr [0x9f7fc4] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7fc4u)));
/* 7c9af4: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 7c9af7: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7c9af9: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 7c9afc: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 7c9aff: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7c9b01: fld dword ptr [eax + edx*4] */
  { double v = F32((uint32_t)(eax + edx*4)); FPUSH(v); }
/* 7c9b04: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 7c9b06: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c9b08: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 7c9b0a: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 7c9b0c: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c9b0f: mov eax, dword ptr [edx + 0x344] */
  eax = R32((uint32_t)(edx + 0x344u));
/* 7c9b15: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 7c9b18: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 7c9b1a: imul eax, ebx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ebx);
  eax = (uint32_t)r;
  }
/* 7c9b1d: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c9b1f: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 7c9b22: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 7c9b24: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 7c9b26: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c9b29: mov ecx, dword ptr [eax + 0x344] */
  ecx = R32((uint32_t)(eax + 0x344u));
/* 7c9b2f: movzx edx, byte ptr [eax + 0x38c] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x38cu)));
/* 7c9b36: imul ecx, ebx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(ebx);
  ecx = (uint32_t)r;
  }
/* 7c9b39: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 7c9b3c: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7c9b3e: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7c9b40: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c9b41: fld dword ptr [edx + ecx*4] */
  { double v = F32((uint32_t)(edx + ecx*4)); FPUSH(v); }
/* 7c9b44: fmul dword ptr [eax + 0x388] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x388u)));
/* 7c9b4a: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7c9b4c: fmul dword ptr [eax + 0x384] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x384u)));
/* 7c9b52: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c9b54: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7c9b57: call dword ptr [0xcfa5d8] */
  esp -= 4; W32(esp, 0x7c9b5du); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* 7c9b5d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c9b60: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7c9b62: jge 0x7c9b68 */
  if ((sf == of)) goto L_7c9b68;
L_7c9b64: /* 7c9b64: xor eax, eax */
  eax = 0;
/* 7c9b66: jmp 0x7c9b71 */
  goto L_7c9b71;
L_7c9b68: /* 7c9b68: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7c9b6b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c9b6d: jl 0x7c9b71 */
  if ((sf != of)) goto L_7c9b71;
L_7c9b6f: /* 7c9b6f: mov eax, ecx */
  eax = ecx;
L_7c9b71: /* 7c9b71: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c9b74: mov edx, dword ptr [ecx + 0x344] */
  edx = R32((uint32_t)(ecx + 0x344u));
/* 7c9b7a: mov edi, dword ptr [ecx + 0x3ec] */
  edi = R32((uint32_t)(ecx + 0x3ecu));
/* 7c9b80: imul edx, ebx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ebx);
  edx = (uint32_t)r;
  }
/* 7c9b83: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7c9b85: mov byte ptr [edx + esi], al */
  W8((uint32_t)(edx + esi), (eax & 0xffu));
L_7c9b88: /* 7c9b88: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c9b8b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7c9b8c: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 7c9b8f: jmp 0x7c9a70 */
  goto L_7c9a70;
L_7c9b94: /* 7c9b94: mov ecx, dword ptr [eax + 0x344] */
  ecx = R32((uint32_t)(eax + 0x344u));
/* 7c9b9a: lea edx, [ecx - 1] */
  edx = (uint32_t)(ecx + 0xffffffffu);
/* 7c9b9d: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c9b9f: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7c9ba2: jge 0x7c9cb8 */
  if ((sf == of)) goto L_7c9cb8;
L_7c9ba8: /* 7c9ba8: mov eax, dword ptr [eax + 0x3b0] */
  eax = R32((uint32_t)(eax + 0x3b0u));
/* 7c9bae: mov edx, ebx */
  edx = ebx;
/* 7c9bb0: imul edx, ecx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ecx);
  edx = (uint32_t)r;
  }
/* 7c9bb3: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7c9bb5: mov ecx, edx */
  ecx = edx;
/* 7c9bb7: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7c9bba: mov edi, 1 */
  edi = 0x1u;
/* 7c9bbf: mov esi, edx */
  esi = edx;
/* 7c9bc1: sar esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  cf = ((int32_t)(int32_t)a >> (c - 1)) & 1;
  of = 0;
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  esi = r;
  }
/* 7c9bc4: shl edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
  }
/* 7c9bc6: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 7c9bc9: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7c9bcc: test edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c9bce: jne 0x7c9cac */
  if (!zf) goto L_7c9cac;
L_7c9bd4: /* 7c9bd4: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 7c9bd7: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7c9bd9: fld dword ptr [eax + edx*4 - 4] */
  { double v = F32((uint32_t)(eax + edx*4 + 0xfffffffcu)); FPUSH(v); }
/* 7c9bdd: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7c9be0: lea edi, [ebx - 1] */
  edi = (uint32_t)(ebx + 0xffffffffu);
/* 7c9be3: imul edi, ecx */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(ecx);
  edi = (uint32_t)r;
  }
/* 7c9be6: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7c9be8: lea edi, [eax + edi*4] */
  edi = (uint32_t)(eax + edi*4);
/* 7c9beb: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 7c9bee: lea edi, [ebx + 1] */
  edi = (uint32_t)(ebx + 0x1u);
/* 7c9bf1: imul edi, ecx */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(ecx);
  edi = (uint32_t)r;
  }
/* 7c9bf4: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7c9bf6: lea ecx, [eax + edi*4] */
  ecx = (uint32_t)(eax + edi*4);
/* 7c9bf9: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7c9bfc: fadd dword ptr [eax + edx*4 + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + edx*4 + 0x4u)));
/* 7c9c00: fadd dword ptr [ecx - 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 7c9c03: fadd dword ptr [edi - 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0xfffffffcu)));
/* 7c9c06: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* 7c9c08: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 7c9c0a: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7c9c0d: fld dword ptr [eax + edx*4] */
  { double v = F32((uint32_t)(eax + edx*4)); FPUSH(v); }
/* 7c9c10: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 7c9c12: fmul dword ptr [0x9f7fc4] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7fc4u)));
/* 7c9c18: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 7c9c1b: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7c9c1d: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 7c9c20: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 7c9c23: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7c9c25: fld dword ptr [eax + edx*4] */
  { double v = F32((uint32_t)(eax + edx*4)); FPUSH(v); }
/* 7c9c28: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 7c9c2a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c9c2c: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 7c9c2e: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 7c9c30: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c9c33: mov eax, dword ptr [edx + 0x344] */
  eax = R32((uint32_t)(edx + 0x344u));
/* 7c9c39: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 7c9c3c: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 7c9c3e: imul eax, ebx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ebx);
  eax = (uint32_t)r;
  }
/* 7c9c41: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c9c43: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 7c9c46: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 7c9c48: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 7c9c4a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c9c4d: mov ecx, dword ptr [eax + 0x344] */
  ecx = R32((uint32_t)(eax + 0x344u));
/* 7c9c53: movzx edx, byte ptr [eax + 0x38c] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x38cu)));
/* 7c9c5a: imul ecx, ebx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(ebx);
  ecx = (uint32_t)r;
  }
/* 7c9c5d: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 7c9c60: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7c9c62: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7c9c64: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c9c65: fld dword ptr [edx + ecx*4] */
  { double v = F32((uint32_t)(edx + ecx*4)); FPUSH(v); }
/* 7c9c68: fmul dword ptr [eax + 0x388] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x388u)));
/* 7c9c6e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7c9c70: fmul dword ptr [eax + 0x384] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x384u)));
/* 7c9c76: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c9c78: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7c9c7b: call dword ptr [0xcfa5d8] */
  esp -= 4; W32(esp, 0x7c9c81u); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* 7c9c81: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c9c84: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7c9c86: jge 0x7c9c8c */
  if ((sf == of)) goto L_7c9c8c;
L_7c9c88: /* 7c9c88: xor eax, eax */
  eax = 0;
/* 7c9c8a: jmp 0x7c9c95 */
  goto L_7c9c95;
L_7c9c8c: /* 7c9c8c: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7c9c8f: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c9c91: jl 0x7c9c95 */
  if ((sf != of)) goto L_7c9c95;
L_7c9c93: /* 7c9c93: mov eax, ecx */
  eax = ecx;
L_7c9c95: /* 7c9c95: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c9c98: mov edx, dword ptr [ecx + 0x344] */
  edx = R32((uint32_t)(ecx + 0x344u));
/* 7c9c9e: mov edi, dword ptr [ecx + 0x3ec] */
  edi = R32((uint32_t)(ecx + 0x3ecu));
/* 7c9ca4: imul edx, ebx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ebx);
  edx = (uint32_t)r;
  }
/* 7c9ca7: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7c9ca9: mov byte ptr [edx + esi], al */
  W8((uint32_t)(edx + esi), (eax & 0xffu));
L_7c9cac: /* 7c9cac: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c9caf: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7c9cb0: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 7c9cb3: jmp 0x7c9b94 */
  goto L_7c9b94;
L_7c9cb8: /* 7c9cb8: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7c9cb9: jmp 0x7c9a50 */
  goto L_7c9a50;
L_7c9cbe: /* 7c9cbe: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 7c9cc3: mov ecx, dword ptr [0xce84a4] */
  ecx = R32((uint32_t)(0xce84a4u));
/* 7c9cc9: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 7c9ccc: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
L_7c9cce: /* 7c9cce: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7c9cd1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7c9cd3: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7c9cd5: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7c9cd7: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
L_7c9cd9: /* 7c9cd9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c9cdc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c9cdd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c9cde: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c9ce5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c9ce6: mov esp, ebp */
  esp = ebp;
/* 7c9ce8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c9ce9: ret 4 */
  esp += 8; SPILL(); return;
L_7c9cec: /* 7c9cec: mov edi, 1 */
  edi = 0x1u;
L_7c9cf1: /* 7c9cf1: mov edx, dword ptr [eax + 0x348] */
  edx = R32((uint32_t)(eax + 0x348u));
/* 7c9cf7: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 7c9cf8: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c9cfa: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 7c9cfd: jge 0x7c9e26 */
  if ((sf == of)) goto L_7c9e26;
L_7c9d03: /* 7c9d03: mov esi, 1 */
  esi = 0x1u;
/* 7c9d08: jmp 0x7c9d10 */
  goto L_7c9d10;
L_7c9d10: /* 7c9d10: mov ecx, dword ptr [eax + 0x344] */
  ecx = R32((uint32_t)(eax + 0x344u));
/* 7c9d16: lea edx, [ecx - 1] */
  edx = (uint32_t)(ecx + 0xffffffffu);
/* 7c9d19: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c9d1b: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7c9d1e: jge 0x7c9e20 */
  if ((sf == of)) goto L_7c9e20;
L_7c9d24: /* 7c9d24: mov eax, dword ptr [eax + 0x3b0] */
  eax = R32((uint32_t)(eax + 0x3b0u));
/* 7c9d2a: imul edi, ecx */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(ecx);
  edi = (uint32_t)r;
  }
/* 7c9d2d: lea edx, [edi + esi] */
  edx = (uint32_t)(edi + esi);
/* 7c9d30: mov ecx, edx */
  ecx = edx;
/* 7c9d32: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7c9d35: mov ebx, 1 */
  ebx = 0x1u;
/* 7c9d3a: mov edi, edx */
  edi = edx;
/* 7c9d3c: sar edi, 5 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  cf = ((int32_t)(int32_t)a >> (c - 1)) & 1;
  of = 0;
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  edi = r;
  }
/* 7c9d3f: shl ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
  }
/* 7c9d41: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* 7c9d44: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7c9d47: test ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c9d49: jne 0x7c9e17 */
  if (!zf) goto L_7c9e17;
L_7c9d4f: /* 7c9d4f: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 7c9d52: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7c9d54: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7c9d57: lea ebx, [edi - 1] */
  ebx = (uint32_t)(edi + 0xffffffffu);
/* 7c9d5a: imul ebx, ecx */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(ecx);
  ebx = (uint32_t)r;
  }
/* 7c9d5d: add ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 7c9d5f: fld dword ptr [eax + ebx*4] */
  { double v = F32((uint32_t)(eax + ebx*4)); FPUSH(v); }
/* 7c9d62: lea ebx, [edi + 1] */
  ebx = (uint32_t)(edi + 0x1u);
/* 7c9d65: imul ebx, ecx */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(ecx);
  ebx = (uint32_t)r;
  }
/* 7c9d68: add ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 7c9d6a: fadd dword ptr [eax + ebx*4] */
  ST0 = ST0 + (F32((uint32_t)(eax + ebx*4)));
/* 7c9d6d: mov ebx, dword ptr [ebp - 0x2c] */
  ebx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7c9d70: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 7c9d72: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 7c9d75: fadd dword ptr [eax + edx*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + edx*4 + 0xfffffffcu)));
/* 7c9d79: fadd dword ptr [eax + edx*4 + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + edx*4 + 0x4u)));
/* 7c9d7d: fld dword ptr [eax + edx*4] */
  { double v = F32((uint32_t)(eax + edx*4)); FPUSH(v); }
/* 7c9d80: fmul dword ptr [0xa0a848] */
  ST0 = ST0 * (F32((uint32_t)(0xa0a848u)));
/* 7c9d86: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7c9d88: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 7c9d8b: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 7c9d8e: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7c9d90: fld dword ptr [eax + edx*4] */
  { double v = F32((uint32_t)(eax + edx*4)); FPUSH(v); }
/* 7c9d93: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 7c9d95: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c9d97: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 7c9d99: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 7c9d9b: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c9d9e: mov eax, dword ptr [edx + 0x344] */
  eax = R32((uint32_t)(edx + 0x344u));
/* 7c9da4: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 7c9da7: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 7c9da9: imul eax, edi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edi);
  eax = (uint32_t)r;
  }
/* 7c9dac: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c9dae: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 7c9db1: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 7c9db3: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 7c9db5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c9db8: mov ecx, dword ptr [eax + 0x344] */
  ecx = R32((uint32_t)(eax + 0x344u));
/* 7c9dbe: movzx edx, byte ptr [eax + 0x38c] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x38cu)));
/* 7c9dc5: imul ecx, edi */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edi);
  ecx = (uint32_t)r;
  }
/* 7c9dc8: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 7c9dcb: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7c9dcd: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7c9dcf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c9dd0: fld dword ptr [edx + ecx*4] */
  { double v = F32((uint32_t)(edx + ecx*4)); FPUSH(v); }
/* 7c9dd3: fmul dword ptr [eax + 0x388] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x388u)));
/* 7c9dd9: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7c9ddb: fmul dword ptr [eax + 0x384] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x384u)));
/* 7c9de1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c9de3: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7c9de6: call dword ptr [0xcfa5d8] */
  esp -= 4; W32(esp, 0x7c9decu); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* 7c9dec: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c9def: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7c9df1: jge 0x7c9df7 */
  if ((sf == of)) goto L_7c9df7;
L_7c9df3: /* 7c9df3: xor eax, eax */
  eax = 0;
/* 7c9df5: jmp 0x7c9e00 */
  goto L_7c9e00;
L_7c9df7: /* 7c9df7: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7c9dfa: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c9dfc: jl 0x7c9e00 */
  if ((sf != of)) goto L_7c9e00;
L_7c9dfe: /* 7c9dfe: mov eax, ecx */
  eax = ecx;
L_7c9e00: /* 7c9e00: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c9e03: mov edx, dword ptr [ecx + 0x344] */
  edx = R32((uint32_t)(ecx + 0x344u));
/* 7c9e09: mov ebx, dword ptr [ecx + 0x3ec] */
  ebx = R32((uint32_t)(ecx + 0x3ecu));
/* 7c9e0f: imul edx, edi */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(edi);
  edx = (uint32_t)r;
  }
/* 7c9e12: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7c9e14: mov byte ptr [edx + esi], al */
  W8((uint32_t)(edx + esi), (eax & 0xffu));
L_7c9e17: /* 7c9e17: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c9e1a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7c9e1b: jmp 0x7c9d10 */
  goto L_7c9d10;
L_7c9e20: /* 7c9e20: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7c9e21: jmp 0x7c9cf1 */
  goto L_7c9cf1;
L_7c9e26: /* 7c9e26: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 7c9e2b: mov ecx, dword ptr [0xce84a4] */
  ecx = R32((uint32_t)(0xce84a4u));
/* 7c9e31: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 7c9e34: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7c9e36: jmp 0x7c9cce */
  goto L_7c9cce;
}

void f_7c9a4d(void) {
  LOAD_REGS();
L_7c9a4d: /* 7c9a4d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7c9a50: /* 7c9a50: mov ecx, dword ptr [eax + 0x348] */
  ecx = R32((uint32_t)(eax + 0x348u));
/* 7c9a56: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 7c9a57: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c9a59: jge 0x7c9cbe */
  if ((sf == of)) goto L_7c9cbe;
L_7c9a5f: /* 7c9a5f: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c9a62: mov esi, 1 */
  esi = 0x1u;
/* 7c9a67: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 7c9a6a: je 0x7c9b94 */
  if (zf) goto L_7c9b94;
L_7c9a70: /* 7c9a70: mov ecx, dword ptr [eax + 0x344] */
  ecx = R32((uint32_t)(eax + 0x344u));
/* 7c9a76: lea edx, [ecx - 1] */
  edx = (uint32_t)(ecx + 0xffffffffu);
/* 7c9a79: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c9a7b: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7c9a7e: jge 0x7c9cb8 */
  if ((sf == of)) goto L_7c9cb8;
L_7c9a84: /* 7c9a84: mov eax, dword ptr [eax + 0x3b0] */
  eax = R32((uint32_t)(eax + 0x3b0u));
/* 7c9a8a: mov edx, ebx */
  edx = ebx;
/* 7c9a8c: imul edx, ecx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ecx);
  edx = (uint32_t)r;
  }
/* 7c9a8f: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7c9a91: mov ecx, edx */
  ecx = edx;
/* 7c9a93: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7c9a96: mov edi, 1 */
  edi = 0x1u;
/* 7c9a9b: mov esi, edx */
  esi = edx;
/* 7c9a9d: sar esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  cf = ((int32_t)(int32_t)a >> (c - 1)) & 1;
  of = 0;
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  esi = r;
  }
/* 7c9aa0: shl edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
  }
/* 7c9aa2: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 7c9aa5: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7c9aa8: test edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c9aaa: jne 0x7c9b88 */
  if (!zf) goto L_7c9b88;
L_7c9ab0: /* 7c9ab0: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 7c9ab3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7c9ab5: fld dword ptr [eax + edx*4 - 4] */
  { double v = F32((uint32_t)(eax + edx*4 + 0xfffffffcu)); FPUSH(v); }
/* 7c9ab9: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7c9abc: lea edi, [ebx - 1] */
  edi = (uint32_t)(ebx + 0xffffffffu);
/* 7c9abf: imul edi, ecx */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(ecx);
  edi = (uint32_t)r;
  }
/* 7c9ac2: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7c9ac4: lea edi, [eax + edi*4] */
  edi = (uint32_t)(eax + edi*4);
/* 7c9ac7: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 7c9aca: lea edi, [ebx + 1] */
  edi = (uint32_t)(ebx + 0x1u);
/* 7c9acd: imul edi, ecx */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(ecx);
  edi = (uint32_t)r;
  }
/* 7c9ad0: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7c9ad2: lea ecx, [eax + edi*4] */
  ecx = (uint32_t)(eax + edi*4);
/* 7c9ad5: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7c9ad8: fadd dword ptr [eax + edx*4 + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + edx*4 + 0x4u)));
/* 7c9adc: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* 7c9adf: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 7c9ae2: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* 7c9ae4: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 7c9ae6: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7c9ae9: fld dword ptr [eax + edx*4] */
  { double v = F32((uint32_t)(eax + edx*4)); FPUSH(v); }
/* 7c9aec: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 7c9aee: fmul dword ptr [0x9f7fc4] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7fc4u)));
/* 7c9af4: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 7c9af7: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7c9af9: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 7c9afc: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 7c9aff: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7c9b01: fld dword ptr [eax + edx*4] */
  { double v = F32((uint32_t)(eax + edx*4)); FPUSH(v); }
/* 7c9b04: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 7c9b06: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c9b08: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 7c9b0a: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 7c9b0c: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c9b0f: mov eax, dword ptr [edx + 0x344] */
  eax = R32((uint32_t)(edx + 0x344u));
/* 7c9b15: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 7c9b18: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 7c9b1a: imul eax, ebx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ebx);
  eax = (uint32_t)r;
  }
/* 7c9b1d: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c9b1f: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 7c9b22: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 7c9b24: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 7c9b26: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c9b29: mov ecx, dword ptr [eax + 0x344] */
  ecx = R32((uint32_t)(eax + 0x344u));
/* 7c9b2f: movzx edx, byte ptr [eax + 0x38c] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x38cu)));
/* 7c9b36: imul ecx, ebx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(ebx);
  ecx = (uint32_t)r;
  }
/* 7c9b39: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 7c9b3c: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7c9b3e: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7c9b40: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c9b41: fld dword ptr [edx + ecx*4] */
  { double v = F32((uint32_t)(edx + ecx*4)); FPUSH(v); }
/* 7c9b44: fmul dword ptr [eax + 0x388] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x388u)));
/* 7c9b4a: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7c9b4c: fmul dword ptr [eax + 0x384] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x384u)));
/* 7c9b52: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c9b54: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7c9b57: call dword ptr [0xcfa5d8] */
  esp -= 4; W32(esp, 0x7c9b5du); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* 7c9b5d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c9b60: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7c9b62: jge 0x7c9b68 */
  if ((sf == of)) goto L_7c9b68;
L_7c9b64: /* 7c9b64: xor eax, eax */
  eax = 0;
/* 7c9b66: jmp 0x7c9b71 */
  goto L_7c9b71;
L_7c9b68: /* 7c9b68: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7c9b6b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c9b6d: jl 0x7c9b71 */
  if ((sf != of)) goto L_7c9b71;
L_7c9b6f: /* 7c9b6f: mov eax, ecx */
  eax = ecx;
L_7c9b71: /* 7c9b71: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c9b74: mov edx, dword ptr [ecx + 0x344] */
  edx = R32((uint32_t)(ecx + 0x344u));
/* 7c9b7a: mov edi, dword ptr [ecx + 0x3ec] */
  edi = R32((uint32_t)(ecx + 0x3ecu));
/* 7c9b80: imul edx, ebx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ebx);
  edx = (uint32_t)r;
  }
/* 7c9b83: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7c9b85: mov byte ptr [edx + esi], al */
  W8((uint32_t)(edx + esi), (eax & 0xffu));
L_7c9b88: /* 7c9b88: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c9b8b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7c9b8c: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 7c9b8f: jmp 0x7c9a70 */
  goto L_7c9a70;
L_7c9b94: /* 7c9b94: mov ecx, dword ptr [eax + 0x344] */
  ecx = R32((uint32_t)(eax + 0x344u));
/* 7c9b9a: lea edx, [ecx - 1] */
  edx = (uint32_t)(ecx + 0xffffffffu);
/* 7c9b9d: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c9b9f: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7c9ba2: jge 0x7c9cb8 */
  if ((sf == of)) goto L_7c9cb8;
L_7c9ba8: /* 7c9ba8: mov eax, dword ptr [eax + 0x3b0] */
  eax = R32((uint32_t)(eax + 0x3b0u));
/* 7c9bae: mov edx, ebx */
  edx = ebx;
/* 7c9bb0: imul edx, ecx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ecx);
  edx = (uint32_t)r;
  }
/* 7c9bb3: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7c9bb5: mov ecx, edx */
  ecx = edx;
/* 7c9bb7: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7c9bba: mov edi, 1 */
  edi = 0x1u;
/* 7c9bbf: mov esi, edx */
  esi = edx;
/* 7c9bc1: sar esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  cf = ((int32_t)(int32_t)a >> (c - 1)) & 1;
  of = 0;
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  esi = r;
  }
/* 7c9bc4: shl edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
  }
/* 7c9bc6: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 7c9bc9: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7c9bcc: test edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c9bce: jne 0x7c9cac */
  if (!zf) goto L_7c9cac;
L_7c9bd4: /* 7c9bd4: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 7c9bd7: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7c9bd9: fld dword ptr [eax + edx*4 - 4] */
  { double v = F32((uint32_t)(eax + edx*4 + 0xfffffffcu)); FPUSH(v); }
/* 7c9bdd: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7c9be0: lea edi, [ebx - 1] */
  edi = (uint32_t)(ebx + 0xffffffffu);
/* 7c9be3: imul edi, ecx */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(ecx);
  edi = (uint32_t)r;
  }
/* 7c9be6: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7c9be8: lea edi, [eax + edi*4] */
  edi = (uint32_t)(eax + edi*4);
/* 7c9beb: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 7c9bee: lea edi, [ebx + 1] */
  edi = (uint32_t)(ebx + 0x1u);
/* 7c9bf1: imul edi, ecx */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(ecx);
  edi = (uint32_t)r;
  }
/* 7c9bf4: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7c9bf6: lea ecx, [eax + edi*4] */
  ecx = (uint32_t)(eax + edi*4);
/* 7c9bf9: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7c9bfc: fadd dword ptr [eax + edx*4 + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + edx*4 + 0x4u)));
/* 7c9c00: fadd dword ptr [ecx - 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 7c9c03: fadd dword ptr [edi - 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0xfffffffcu)));
/* 7c9c06: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* 7c9c08: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 7c9c0a: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7c9c0d: fld dword ptr [eax + edx*4] */
  { double v = F32((uint32_t)(eax + edx*4)); FPUSH(v); }
/* 7c9c10: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 7c9c12: fmul dword ptr [0x9f7fc4] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7fc4u)));
/* 7c9c18: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 7c9c1b: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7c9c1d: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 7c9c20: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 7c9c23: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7c9c25: fld dword ptr [eax + edx*4] */
  { double v = F32((uint32_t)(eax + edx*4)); FPUSH(v); }
/* 7c9c28: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 7c9c2a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c9c2c: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 7c9c2e: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 7c9c30: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c9c33: mov eax, dword ptr [edx + 0x344] */
  eax = R32((uint32_t)(edx + 0x344u));
/* 7c9c39: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 7c9c3c: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 7c9c3e: imul eax, ebx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ebx);
  eax = (uint32_t)r;
  }
/* 7c9c41: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c9c43: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 7c9c46: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 7c9c48: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 7c9c4a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c9c4d: mov ecx, dword ptr [eax + 0x344] */
  ecx = R32((uint32_t)(eax + 0x344u));
/* 7c9c53: movzx edx, byte ptr [eax + 0x38c] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x38cu)));
/* 7c9c5a: imul ecx, ebx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(ebx);
  ecx = (uint32_t)r;
  }
/* 7c9c5d: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 7c9c60: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7c9c62: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7c9c64: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c9c65: fld dword ptr [edx + ecx*4] */
  { double v = F32((uint32_t)(edx + ecx*4)); FPUSH(v); }
/* 7c9c68: fmul dword ptr [eax + 0x388] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x388u)));
/* 7c9c6e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7c9c70: fmul dword ptr [eax + 0x384] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x384u)));
/* 7c9c76: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c9c78: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7c9c7b: call dword ptr [0xcfa5d8] */
  esp -= 4; W32(esp, 0x7c9c81u); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* 7c9c81: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c9c84: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7c9c86: jge 0x7c9c8c */
  if ((sf == of)) goto L_7c9c8c;
L_7c9c88: /* 7c9c88: xor eax, eax */
  eax = 0;
/* 7c9c8a: jmp 0x7c9c95 */
  goto L_7c9c95;
L_7c9c8c: /* 7c9c8c: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7c9c8f: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c9c91: jl 0x7c9c95 */
  if ((sf != of)) goto L_7c9c95;
L_7c9c93: /* 7c9c93: mov eax, ecx */
  eax = ecx;
L_7c9c95: /* 7c9c95: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c9c98: mov edx, dword ptr [ecx + 0x344] */
  edx = R32((uint32_t)(ecx + 0x344u));
/* 7c9c9e: mov edi, dword ptr [ecx + 0x3ec] */
  edi = R32((uint32_t)(ecx + 0x3ecu));
/* 7c9ca4: imul edx, ebx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ebx);
  edx = (uint32_t)r;
  }
/* 7c9ca7: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7c9ca9: mov byte ptr [edx + esi], al */
  W8((uint32_t)(edx + esi), (eax & 0xffu));
L_7c9cac: /* 7c9cac: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c9caf: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7c9cb0: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 7c9cb3: jmp 0x7c9b94 */
  goto L_7c9b94;
L_7c9cb8: /* 7c9cb8: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7c9cb9: jmp 0x7c9a50 */
  goto L_7c9a50;
L_7c9cbe: /* 7c9cbe: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 7c9cc3: mov ecx, dword ptr [0xce84a4] */
  ecx = R32((uint32_t)(0xce84a4u));
/* 7c9cc9: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 7c9ccc: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7c9cce: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7c9cd1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7c9cd3: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7c9cd5: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7c9cd7: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7c9cd9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c9cdc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c9cdd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c9cde: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c9ce5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c9ce6: mov esp, ebp */
  esp = ebp;
/* 7c9ce8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c9ce9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7c9cec(void) {
  LOAD_REGS();
  goto L_7c9cec;
L_7c9cce: /* 7c9cce: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7c9cd1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7c9cd3: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7c9cd5: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7c9cd7: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7c9cd9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c9cdc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c9cdd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c9cde: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c9ce5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c9ce6: mov esp, ebp */
  esp = ebp;
/* 7c9ce8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c9ce9: ret 4 */
  esp += 8; SPILL(); return;
L_7c9cec: /* 7c9cec: mov edi, 1 */
  edi = 0x1u;
L_7c9cf1: /* 7c9cf1: mov edx, dword ptr [eax + 0x348] */
  edx = R32((uint32_t)(eax + 0x348u));
/* 7c9cf7: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 7c9cf8: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c9cfa: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 7c9cfd: jge 0x7c9e26 */
  if ((sf == of)) goto L_7c9e26;
L_7c9d03: /* 7c9d03: mov esi, 1 */
  esi = 0x1u;
/* 7c9d08: jmp 0x7c9d10 */
  goto L_7c9d10;
L_7c9d10: /* 7c9d10: mov ecx, dword ptr [eax + 0x344] */
  ecx = R32((uint32_t)(eax + 0x344u));
/* 7c9d16: lea edx, [ecx - 1] */
  edx = (uint32_t)(ecx + 0xffffffffu);
/* 7c9d19: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c9d1b: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7c9d1e: jge 0x7c9e20 */
  if ((sf == of)) goto L_7c9e20;
L_7c9d24: /* 7c9d24: mov eax, dword ptr [eax + 0x3b0] */
  eax = R32((uint32_t)(eax + 0x3b0u));
/* 7c9d2a: imul edi, ecx */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(ecx);
  edi = (uint32_t)r;
  }
/* 7c9d2d: lea edx, [edi + esi] */
  edx = (uint32_t)(edi + esi);
/* 7c9d30: mov ecx, edx */
  ecx = edx;
/* 7c9d32: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7c9d35: mov ebx, 1 */
  ebx = 0x1u;
/* 7c9d3a: mov edi, edx */
  edi = edx;
/* 7c9d3c: sar edi, 5 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  cf = ((int32_t)(int32_t)a >> (c - 1)) & 1;
  of = 0;
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  edi = r;
  }
/* 7c9d3f: shl ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
  }
/* 7c9d41: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* 7c9d44: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7c9d47: test ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c9d49: jne 0x7c9e17 */
  if (!zf) goto L_7c9e17;
L_7c9d4f: /* 7c9d4f: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 7c9d52: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7c9d54: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7c9d57: lea ebx, [edi - 1] */
  ebx = (uint32_t)(edi + 0xffffffffu);
/* 7c9d5a: imul ebx, ecx */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(ecx);
  ebx = (uint32_t)r;
  }
/* 7c9d5d: add ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 7c9d5f: fld dword ptr [eax + ebx*4] */
  { double v = F32((uint32_t)(eax + ebx*4)); FPUSH(v); }
/* 7c9d62: lea ebx, [edi + 1] */
  ebx = (uint32_t)(edi + 0x1u);
/* 7c9d65: imul ebx, ecx */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(ecx);
  ebx = (uint32_t)r;
  }
/* 7c9d68: add ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 7c9d6a: fadd dword ptr [eax + ebx*4] */
  ST0 = ST0 + (F32((uint32_t)(eax + ebx*4)));
/* 7c9d6d: mov ebx, dword ptr [ebp - 0x2c] */
  ebx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7c9d70: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 7c9d72: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 7c9d75: fadd dword ptr [eax + edx*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + edx*4 + 0xfffffffcu)));
/* 7c9d79: fadd dword ptr [eax + edx*4 + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + edx*4 + 0x4u)));
/* 7c9d7d: fld dword ptr [eax + edx*4] */
  { double v = F32((uint32_t)(eax + edx*4)); FPUSH(v); }
/* 7c9d80: fmul dword ptr [0xa0a848] */
  ST0 = ST0 * (F32((uint32_t)(0xa0a848u)));
/* 7c9d86: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7c9d88: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 7c9d8b: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 7c9d8e: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7c9d90: fld dword ptr [eax + edx*4] */
  { double v = F32((uint32_t)(eax + edx*4)); FPUSH(v); }
/* 7c9d93: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 7c9d95: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c9d97: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 7c9d99: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 7c9d9b: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c9d9e: mov eax, dword ptr [edx + 0x344] */
  eax = R32((uint32_t)(edx + 0x344u));
/* 7c9da4: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 7c9da7: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 7c9da9: imul eax, edi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edi);
  eax = (uint32_t)r;
  }
/* 7c9dac: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c9dae: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 7c9db1: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 7c9db3: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 7c9db5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c9db8: mov ecx, dword ptr [eax + 0x344] */
  ecx = R32((uint32_t)(eax + 0x344u));
/* 7c9dbe: movzx edx, byte ptr [eax + 0x38c] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x38cu)));
/* 7c9dc5: imul ecx, edi */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edi);
  ecx = (uint32_t)r;
  }
/* 7c9dc8: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 7c9dcb: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7c9dcd: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7c9dcf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c9dd0: fld dword ptr [edx + ecx*4] */
  { double v = F32((uint32_t)(edx + ecx*4)); FPUSH(v); }
/* 7c9dd3: fmul dword ptr [eax + 0x388] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x388u)));
/* 7c9dd9: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7c9ddb: fmul dword ptr [eax + 0x384] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x384u)));
/* 7c9de1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c9de3: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7c9de6: call dword ptr [0xcfa5d8] */
  esp -= 4; W32(esp, 0x7c9decu); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* 7c9dec: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c9def: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7c9df1: jge 0x7c9df7 */
  if ((sf == of)) goto L_7c9df7;
L_7c9df3: /* 7c9df3: xor eax, eax */
  eax = 0;
/* 7c9df5: jmp 0x7c9e00 */
  goto L_7c9e00;
L_7c9df7: /* 7c9df7: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7c9dfa: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c9dfc: jl 0x7c9e00 */
  if ((sf != of)) goto L_7c9e00;
L_7c9dfe: /* 7c9dfe: mov eax, ecx */
  eax = ecx;
L_7c9e00: /* 7c9e00: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c9e03: mov edx, dword ptr [ecx + 0x344] */
  edx = R32((uint32_t)(ecx + 0x344u));
/* 7c9e09: mov ebx, dword ptr [ecx + 0x3ec] */
  ebx = R32((uint32_t)(ecx + 0x3ecu));
/* 7c9e0f: imul edx, edi */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(edi);
  edx = (uint32_t)r;
  }
/* 7c9e12: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7c9e14: mov byte ptr [edx + esi], al */
  W8((uint32_t)(edx + esi), (eax & 0xffu));
L_7c9e17: /* 7c9e17: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c9e1a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7c9e1b: jmp 0x7c9d10 */
  goto L_7c9d10;
L_7c9e20: /* 7c9e20: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7c9e21: jmp 0x7c9cf1 */
  goto L_7c9cf1;
L_7c9e26: /* 7c9e26: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 7c9e2b: mov ecx, dword ptr [0xce84a4] */
  ecx = R32((uint32_t)(0xce84a4u));
/* 7c9e31: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 7c9e34: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7c9e36: jmp 0x7c9cce */
  goto L_7c9cce;
}

void f_7c9d0a(void) {
  LOAD_REGS();
  goto L_7c9d0a;
L_7c9cce: /* 7c9cce: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7c9cd1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7c9cd3: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7c9cd5: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7c9cd7: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7c9cd9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c9cdc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c9cdd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c9cde: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c9ce5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c9ce6: mov esp, ebp */
  esp = ebp;
/* 7c9ce8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c9ce9: ret 4 */
  esp += 8; SPILL(); return;
L_7c9cf1: /* 7c9cf1: mov edx, dword ptr [eax + 0x348] */
  edx = R32((uint32_t)(eax + 0x348u));
/* 7c9cf7: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 7c9cf8: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c9cfa: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 7c9cfd: jge 0x7c9e26 */
  if ((sf == of)) goto L_7c9e26;
L_7c9d03: /* 7c9d03: mov esi, 1 */
  esi = 0x1u;
/* 7c9d08: jmp 0x7c9d10 */
  goto L_7c9d10;
L_7c9d0a: /* 7c9d0a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_7c9d10: /* 7c9d10: mov ecx, dword ptr [eax + 0x344] */
  ecx = R32((uint32_t)(eax + 0x344u));
/* 7c9d16: lea edx, [ecx - 1] */
  edx = (uint32_t)(ecx + 0xffffffffu);
/* 7c9d19: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c9d1b: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7c9d1e: jge 0x7c9e20 */
  if ((sf == of)) goto L_7c9e20;
L_7c9d24: /* 7c9d24: mov eax, dword ptr [eax + 0x3b0] */
  eax = R32((uint32_t)(eax + 0x3b0u));
/* 7c9d2a: imul edi, ecx */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(ecx);
  edi = (uint32_t)r;
  }
/* 7c9d2d: lea edx, [edi + esi] */
  edx = (uint32_t)(edi + esi);
/* 7c9d30: mov ecx, edx */
  ecx = edx;
/* 7c9d32: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7c9d35: mov ebx, 1 */
  ebx = 0x1u;
/* 7c9d3a: mov edi, edx */
  edi = edx;
/* 7c9d3c: sar edi, 5 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  cf = ((int32_t)(int32_t)a >> (c - 1)) & 1;
  of = 0;
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  edi = r;
  }
/* 7c9d3f: shl ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
  }
/* 7c9d41: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* 7c9d44: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7c9d47: test ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c9d49: jne 0x7c9e17 */
  if (!zf) goto L_7c9e17;
L_7c9d4f: /* 7c9d4f: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 7c9d52: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7c9d54: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7c9d57: lea ebx, [edi - 1] */
  ebx = (uint32_t)(edi + 0xffffffffu);
/* 7c9d5a: imul ebx, ecx */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(ecx);
  ebx = (uint32_t)r;
  }
/* 7c9d5d: add ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 7c9d5f: fld dword ptr [eax + ebx*4] */
  { double v = F32((uint32_t)(eax + ebx*4)); FPUSH(v); }
/* 7c9d62: lea ebx, [edi + 1] */
  ebx = (uint32_t)(edi + 0x1u);
/* 7c9d65: imul ebx, ecx */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(ecx);
  ebx = (uint32_t)r;
  }
/* 7c9d68: add ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 7c9d6a: fadd dword ptr [eax + ebx*4] */
  ST0 = ST0 + (F32((uint32_t)(eax + ebx*4)));
/* 7c9d6d: mov ebx, dword ptr [ebp - 0x2c] */
  ebx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7c9d70: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 7c9d72: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 7c9d75: fadd dword ptr [eax + edx*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + edx*4 + 0xfffffffcu)));
/* 7c9d79: fadd dword ptr [eax + edx*4 + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + edx*4 + 0x4u)));
/* 7c9d7d: fld dword ptr [eax + edx*4] */
  { double v = F32((uint32_t)(eax + edx*4)); FPUSH(v); }
/* 7c9d80: fmul dword ptr [0xa0a848] */
  ST0 = ST0 * (F32((uint32_t)(0xa0a848u)));
/* 7c9d86: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7c9d88: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 7c9d8b: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 7c9d8e: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7c9d90: fld dword ptr [eax + edx*4] */
  { double v = F32((uint32_t)(eax + edx*4)); FPUSH(v); }
/* 7c9d93: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 7c9d95: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c9d97: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 7c9d99: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 7c9d9b: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c9d9e: mov eax, dword ptr [edx + 0x344] */
  eax = R32((uint32_t)(edx + 0x344u));
/* 7c9da4: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 7c9da7: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 7c9da9: imul eax, edi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edi);
  eax = (uint32_t)r;
  }
/* 7c9dac: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c9dae: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 7c9db1: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 7c9db3: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 7c9db5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c9db8: mov ecx, dword ptr [eax + 0x344] */
  ecx = R32((uint32_t)(eax + 0x344u));
/* 7c9dbe: movzx edx, byte ptr [eax + 0x38c] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x38cu)));
/* 7c9dc5: imul ecx, edi */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edi);
  ecx = (uint32_t)r;
  }
/* 7c9dc8: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 7c9dcb: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7c9dcd: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7c9dcf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c9dd0: fld dword ptr [edx + ecx*4] */
  { double v = F32((uint32_t)(edx + ecx*4)); FPUSH(v); }
/* 7c9dd3: fmul dword ptr [eax + 0x388] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x388u)));
/* 7c9dd9: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7c9ddb: fmul dword ptr [eax + 0x384] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x384u)));
/* 7c9de1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c9de3: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7c9de6: call dword ptr [0xcfa5d8] */
  esp -= 4; W32(esp, 0x7c9decu); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* 7c9dec: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c9def: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7c9df1: jge 0x7c9df7 */
  if ((sf == of)) goto L_7c9df7;
L_7c9df3: /* 7c9df3: xor eax, eax */
  eax = 0;
/* 7c9df5: jmp 0x7c9e00 */
  goto L_7c9e00;
L_7c9df7: /* 7c9df7: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7c9dfa: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c9dfc: jl 0x7c9e00 */
  if ((sf != of)) goto L_7c9e00;
L_7c9dfe: /* 7c9dfe: mov eax, ecx */
  eax = ecx;
L_7c9e00: /* 7c9e00: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c9e03: mov edx, dword ptr [ecx + 0x344] */
  edx = R32((uint32_t)(ecx + 0x344u));
/* 7c9e09: mov ebx, dword ptr [ecx + 0x3ec] */
  ebx = R32((uint32_t)(ecx + 0x3ecu));
/* 7c9e0f: imul edx, edi */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(edi);
  edx = (uint32_t)r;
  }
/* 7c9e12: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7c9e14: mov byte ptr [edx + esi], al */
  W8((uint32_t)(edx + esi), (eax & 0xffu));
L_7c9e17: /* 7c9e17: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c9e1a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7c9e1b: jmp 0x7c9d10 */
  goto L_7c9d10;
L_7c9e20: /* 7c9e20: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7c9e21: jmp 0x7c9cf1 */
  goto L_7c9cf1;
L_7c9e26: /* 7c9e26: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 7c9e2b: mov ecx, dword ptr [0xce84a4] */
  ecx = R32((uint32_t)(0xce84a4u));
/* 7c9e31: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 7c9e34: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7c9e36: jmp 0x7c9cce */
  goto L_7c9cce;
}

void f_7c9e3b(void) {
  LOAD_REGS();
L_7c9e3b: /* 7c9e3b: mov edx, dword ptr [ebp - 0x6c] */
  edx = R32((uint32_t)(ebp + 0xffffff94u));
/* 7c9e3e: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7c9e43: lea eax, [ebp - 0x4c] */
  eax = (uint32_t)(ebp + 0xffffffb4u);
/* 7c9e46: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c9e47: mov dword ptr [ebp - 0x4c], edx */
  W32((uint32_t)(ebp + 0xffffffb4u), edx);
/* 7c9e4a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c9e4fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7c9e4f(); return;
}

void f_7c9e4f(void) {
  LOAD_REGS();
L_7c9e4f: /* 7c9e4f: push 0xa0ea78 */
  { uint32_t v = 0xa0ea78u; esp -= 4; W32(esp, v); }
/* 7c9e54: push 0xad4468 */
  { uint32_t v = 0xad4468u; esp -= 4; W32(esp, v); }
/* 7c9e59: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7c9e5fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7c9e5f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c9e62: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c9e64: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c9e66: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c9e6bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7c9e6b: guest_badaddr(0x7c9e6b); return;
}

void f_7ca080(void) {
  LOAD_REGS();
L_7ca080: /* 7ca080: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7ca081: mov ebp, esp */
  ebp = esp;
/* 7ca083: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7ca085: push 0x9cfa50 */
  { uint32_t v = 0x9cfa50u; esp -= 4; W32(esp, v); }
/* 7ca08a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7ca090: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ca091: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7ca098: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ca09b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7ca09e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ca09f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ca0a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ca0a1: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 7ca0a4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7ca0a7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ca0a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ca0a9: mov esi, ecx */
  esi = ecx;
/* 7ca0ab: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7ca0b2: call 0x6c9aa7 */
  esp -= 4; W32(esp, 0x7ca0b7u); SPILL(); f_6c9aa7(); if (g_unwind) return; RELOAD();
/* 7ca0b7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ca0b9: jne 0x7ca0ce */
  if (!zf) goto L_7ca0ce;
L_7ca0bb: /* 7ca0bb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ca0be: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ca0c5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ca0c6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ca0c7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ca0c8: mov esp, ebp */
  esp = ebp;
/* 7ca0ca: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ca0cb: ret 8 */
  esp += 12; SPILL(); return;
L_7ca0ce: /* 7ca0ce: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 7ca0d4: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ca0d7: jne 0x7ca1bb */
  if (!zf) goto L_7ca1bb;
L_7ca0dd: /* 7ca0dd: cmp edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ca0e0: jne 0x7ca0f1 */
  if (!zf) goto L_7ca0f1;
L_7ca0e2: /* 7ca0e2: mov ecx, dword ptr [0xcfa504] */
  ecx = R32((uint32_t)(0xcfa504u));
/* 7ca0e8: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ca0eb: je 0x7ca1bb */
  if (zf) goto L_7ca1bb;
L_7ca0f1: /* 7ca0f1: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 7ca0f7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ca0f9: je 0x7ca112 */
  if (zf) goto L_7ca112;
L_7ca0fb: /* 7ca0fb: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 7ca0fe: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7ca100: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ca102: je 0x7ca112 */
  if (zf) goto L_7ca112;
L_7ca104: /* 7ca104: mov cl, byte ptr [eax + 0x3f0] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x3f0u))) & 0xffu);
/* 7ca10a: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ca10c: je 0x7ca1bb */
  if (zf) goto L_7ca1bb;
L_7ca112: /* 7ca112: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 7ca118: mov eax, dword ptr [esi + 0x43c] */
  eax = R32((uint32_t)(esi + 0x43cu));
/* 7ca11e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ca120: fdiv dword ptr [esi + 0x3cc] */
  ST0 = ST0 / (F32((uint32_t)(esi + 0x3ccu)));
/* 7ca126: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 7ca129: jne 0x7ca167 */
  if (!zf) goto L_7ca167;
L_7ca12b: /* 7ca12b: mov ecx, esi */
  ecx = esi;
/* 7ca12d: call 0x6cc009 */
  esp -= 4; W32(esp, 0x7ca132u); SPILL(); f_6cc009(); if (g_unwind) return; RELOAD();
/* 7ca132: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 7ca138: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
L_7ca13b: /* 7ca13b: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 7ca13e: fcomp dword ptr [esi + 0x3c8] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x3c8u)));
  FPOP();
/* 7ca144: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7ca146: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7ca149: jp 0x7ca15b */
  if (pf) goto L_7ca15b;
L_7ca14b: /* 7ca14b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ca14c: mov ecx, esi */
  ecx = esi;
/* 7ca14e: call 0x6cb2e4 */
  esp -= 4; W32(esp, 0x7ca153u); SPILL(); f_6cb2e4(); if (g_unwind) return; RELOAD();
/* 7ca153: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7ca156: fadd dword ptr [ebp + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xcu)));
/* 7ca159: jmp 0x7ca13b */
  goto L_7ca13b;
L_7ca15b: /* 7ca15b: mov dword ptr [esi + 0x43c], 1 */
  W32((uint32_t)(esi + 0x43cu), 0x1u);
/* 7ca165: jmp 0x7ca16a */
  goto L_7ca16a;
L_7ca167: /* 7ca167: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
L_7ca16a: /* 7ca16a: mov eax, dword ptr [esi + 0xb0] */
  eax = R32((uint32_t)(esi + 0xb0u));
/* 7ca170: fld dword ptr [eax + 0x3ac] */
  { double v = F32((uint32_t)(eax + 0x3acu)); FPUSH(v); }
/* 7ca176: fsub dword ptr [esi + 0xd4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xd4u)));
/* 7ca17c: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 7ca182: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7ca184: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ca187: je 0x7ca1bb */
  if (zf) goto L_7ca1bb;
L_7ca189: /* 7ca189: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 7ca18c: fadd dword ptr [esi + 0x424] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x424u)));
L_7ca192: /* 7ca192: fstp dword ptr [esi + 0x424] */
  WF32((uint32_t)(esi + 0x424u), ST0); FPOP();
/* 7ca198: fld dword ptr [esi + 0x424] */
  { double v = F32((uint32_t)(esi + 0x424u)); FPUSH(v); }
/* 7ca19e: fcomp dword ptr [ebp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xcu)));
  FPOP();
/* 7ca1a1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7ca1a3: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ca1a6: jne 0x7ca1bb */
  if (!zf) goto L_7ca1bb;
L_7ca1a8: /* 7ca1a8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ca1a9: mov ecx, esi */
  ecx = esi;
/* 7ca1ab: call 0x6cb2e4 */
  esp -= 4; W32(esp, 0x7ca1b0u); SPILL(); f_6cb2e4(); if (g_unwind) return; RELOAD();
/* 7ca1b0: fld dword ptr [esi + 0x424] */
  { double v = F32((uint32_t)(esi + 0x424u)); FPUSH(v); }
/* 7ca1b6: fsub dword ptr [ebp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xcu)));
/* 7ca1b9: jmp 0x7ca192 */
  goto L_7ca192;
L_7ca1bb: /* 7ca1bb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ca1be: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ca1bf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ca1c0: mov eax, 1 */
  eax = 0x1u;
/* 7ca1c5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ca1cc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ca1cd: mov esp, ebp */
  esp = ebp;
/* 7ca1cf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ca1d0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7ca1d3(void) {
  LOAD_REGS();
L_7ca1d3: /* 7ca1d3: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7ca1d6: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7ca1db: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 7ca1de: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ca1df: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7ca1e2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ca1e7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7ca1e7(); return;
}

void f_7ca1e7(void) {
  LOAD_REGS();
L_7ca1e7: /* 7ca1e7: push 0xa0ead4 */
  { uint32_t v = 0xa0ead4u; esp -= 4; W32(esp, v); }
/* 7ca1ec: push 0xad4470 */
  { uint32_t v = 0xad4470u; esp -= 4; W32(esp, v); }
/* 7ca1f1: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7ca1f7u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7ca1f7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ca1fa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ca1fc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ca1fe: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ca203u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7ca203: guest_badaddr(0x7ca203); return;
}

void f_7ca280(void) {
  LOAD_REGS();
L_7ca280: /* 7ca280: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7ca281: mov ebp, esp */
  ebp = esp;
/* 7ca283: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7ca285: push 0x9cfa60 */
  { uint32_t v = 0x9cfa60u; esp -= 4; W32(esp, v); }
/* 7ca28a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7ca290: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ca291: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7ca298: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ca29b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7ca29e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ca29f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ca2a0: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 7ca2a3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ca2a4: mov edi, dword ptr [0xcfa280] */
  edi = R32((uint32_t)(0xcfa280u));
/* 7ca2aa: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7ca2ad: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ca2ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ca2af: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7ca2b6: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ca2b8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ca2b8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ca2bb: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 7ca2be: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ca2bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ca2c0: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ca2c2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ca2c2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ca2c5: lea edx, [esi + 8] */
  edx = (uint32_t)(esi + 0x8u);
/* 7ca2c8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ca2c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ca2ca: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ca2ccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ca2cc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ca2cf: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7ca2d2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ca2d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ca2d4: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ca2d6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ca2d6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ca2d9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ca2dc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ca2dd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ca2de: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ca2e5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ca2e6: mov esp, ebp */
  esp = ebp;
/* 7ca2e8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ca2e9: ret  */
  esp += 4; SPILL(); return;
}

void f_7ca2ea(void) {
  LOAD_REGS();
L_7ca2ea: /* 7ca2ea: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7ca2ed: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7ca2f2: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7ca2f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ca2f6: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7ca2f9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ca2feu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7ca2fe(); return;
}

void f_7ca2fe(void) {
  LOAD_REGS();
L_7ca2fe: /* 7ca2fe: push 0xa0eb10 */
  { uint32_t v = 0xa0eb10u; esp -= 4; W32(esp, v); }
/* 7ca303: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 7ca308: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7ca30eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7ca30e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ca311: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ca313: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ca315: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ca31au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7ca31a: guest_badaddr(0x7ca31a); return;
}

void f_7ca350(void) {
  LOAD_REGS();
L_7ca350: /* 7ca350: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ca351: mov esi, ecx */
  esi = ecx;
/* 7ca353: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7ca359u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7ca359: mov eax, esi */
  eax = esi;
/* 7ca35b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ca35c: ret  */
  esp += 4; SPILL(); return;
}

void f_7ca370(void) {
  LOAD_REGS();
L_7ca370: /* 7ca370: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7ca374: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ca375: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 7ca377: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x7ca37du); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 7ca37d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7ca390(void) {
  LOAD_REGS();
L_7ca390: /* 7ca390: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ca391: mov esi, ecx */
  esi = ecx;
/* 7ca393: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7ca399u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7ca399: mov eax, esi */
  eax = esi;
/* 7ca39b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ca39c: ret  */
  esp += 4; SPILL(); return;
}

void f_7ca3b0(void) {
  LOAD_REGS();
L_7ca3b0: /* 7ca3b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7ca3b4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7ca3b6: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7ca3b9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7ca3bb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7ca3d0(void) {
  LOAD_REGS();
L_7ca3d0: /* 7ca3d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ca3d1: mov esi, ecx */
  esi = ecx;
/* 7ca3d3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7ca3d9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7ca3d9: mov eax, esi */
  eax = esi;
/* 7ca3db: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ca3dc: ret  */
  esp += 4; SPILL(); return;
}

void f_7ca3f0(void) {
  LOAD_REGS();
L_7ca3f0: /* 7ca3f0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7ca3f4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7ca3f6: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7ca3f9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7ca3fb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7ca410(void) {
  LOAD_REGS();
L_7ca410: /* 7ca410: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7ca414: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 7ca416: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ca417: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x7ca41du); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 7ca41d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7ca430(void) {
  LOAD_REGS();
L_7ca430: /* 7ca430: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7ca434: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7ca436: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ca437: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x7ca43du); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 7ca43d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7ca450(void) {
  LOAD_REGS();
L_7ca450: /* 7ca450: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7ca454: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7ca456: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ca457: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7ca45du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7ca45d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7ca470(void) {
  LOAD_REGS();
L_7ca470: /* 7ca470: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ca471: mov esi, ecx */
  esi = ecx;
/* 7ca473: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7ca479u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7ca479: mov eax, esi */
  eax = esi;
/* 7ca47b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ca47c: ret  */
  esp += 4; SPILL(); return;
}

void f_7ca490(void) {
  LOAD_REGS();
L_7ca490: /* 7ca490: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ca491: mov esi, ecx */
  esi = ecx;
/* 7ca493: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7ca499u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7ca499: mov eax, esi */
  eax = esi;
/* 7ca49b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ca49c: ret  */
  esp += 4; SPILL(); return;
}

void f_7ca4b0(void) {
  LOAD_REGS();
L_7ca4b0: /* 7ca4b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7ca4b4: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 7ca4b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ca4b7: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x7ca4bdu); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 7ca4bd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7ca4d0(void) {
  LOAD_REGS();
L_7ca4d0: /* 7ca4d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7ca4d4: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 7ca4d6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ca4d7: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x7ca4ddu); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 7ca4dd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7ca4f0(void) {
  LOAD_REGS();
L_7ca4f0: /* 7ca4f0: mov eax, ecx */
  eax = ecx;
/* 7ca4f2: ret  */
  esp += 4; SPILL(); return;
}

void f_7ca510(void) {
  LOAD_REGS();
L_7ca510: /* 7ca510: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 7ca514: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 7ca518: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ca519: mov esi, dword ptr [0xcfa354] */
  esi = R32((uint32_t)(0xcfa354u));
/* 7ca51f: lea ecx, [eax + 6] */
  ecx = (uint32_t)(eax + 0x6u);
/* 7ca522: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ca523: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7ca526: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ca527: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ca528: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7ca52au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ca52a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ca52d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ca52e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7ca530u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ca530: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ca533: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ca534: ret  */
  esp += 4; SPILL(); return;
}

void f_7ca550(void) {
  LOAD_REGS();
L_7ca550: /* 7ca550: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7ca554: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7ca556: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ca557: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x7ca55du); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 7ca55d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7ca570(void) {
  LOAD_REGS();
L_7ca570: /* 7ca570: mov eax, 1 */
  eax = 0x1u;
/* 7ca575: ret  */
  esp += 4; SPILL(); return;
}

void f_7ca590(void) {
  LOAD_REGS();
L_7ca590: /* 7ca590: mov eax, 1 */
  eax = 0x1u;
/* 7ca595: ret  */
  esp += 4; SPILL(); return;
}

void f_7ca5b0(void) {
  LOAD_REGS();
L_7ca5b0: /* 7ca5b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ca5b1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 7ca5b5: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 7ca5b7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7ca5b9: mov ecx, esi */
  ecx = esi;
/* 7ca5bb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7ca5c1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7ca5c1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7ca5c3: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7ca5c6: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7ca5c8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ca5c9: ret  */
  esp += 4; SPILL(); return;
}

void f_7ca5e0(void) {
  LOAD_REGS();
L_7ca5e0: /* 7ca5e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ca5e1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 7ca5e5: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 7ca5e7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7ca5e9: mov ecx, esi */
  ecx = esi;
/* 7ca5eb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7ca5f1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7ca5f1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7ca5f3: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7ca5f6: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7ca5f8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ca5f9: ret  */
  esp += 4; SPILL(); return;
}

void f_7ca610(void) {
  LOAD_REGS();
L_7ca610: /* 7ca610: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7ca611: mov ebp, esp */
  ebp = esp;
/* 7ca613: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7ca615: push 0x9cfa70 */
  { uint32_t v = 0x9cfa70u; esp -= 4; W32(esp, v); }
/* 7ca61a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7ca620: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ca621: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7ca628: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ca62b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7ca62e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ca62f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ca630: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 7ca633: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ca634: mov edi, dword ptr [0xcfa280] */
  edi = R32((uint32_t)(0xcfa280u));
/* 7ca63a: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7ca63d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ca63e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ca63f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7ca646: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ca648u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ca648: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ca64b: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 7ca64e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ca64f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ca650: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ca652u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ca652: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ca655: lea edx, [esi + 8] */
  edx = (uint32_t)(esi + 0x8u);
/* 7ca658: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ca659: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ca65a: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ca65cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ca65c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ca65f: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 7ca662: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ca663: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ca664: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ca666u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ca666: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ca669: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7ca66c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ca66d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ca66e: call dword ptr [0xcfa1b8] */
  esp -= 4; W32(esp, 0x7ca674u); SPILL(); f_4e40e8(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAE@Z */ RELOAD();
/* 7ca674: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ca677: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ca67a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ca67b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ca67c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ca683: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ca684: mov esp, ebp */
  esp = ebp;
/* 7ca686: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ca687: ret  */
  esp += 4; SPILL(); return;
}

void f_7ca688(void) {
  LOAD_REGS();
L_7ca688: /* 7ca688: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7ca68b: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7ca690: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7ca693: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ca694: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7ca697: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ca69cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7ca69c(); return;
}

void f_7ca69c(void) {
  LOAD_REGS();
L_7ca69c: /* 7ca69c: push 0xa0eb40 */
  { uint32_t v = 0xa0eb40u; esp -= 4; W32(esp, v); }
/* 7ca6a1: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 7ca6a6: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7ca6acu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7ca6ac: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ca6af: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ca6b1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ca6b3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ca6b8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7ca6b8: guest_badaddr(0x7ca6b8); return;
}

void f_7ca6f0(void) {
  LOAD_REGS();
L_7ca6f0: /* 7ca6f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ca6f1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7ca6f3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7ca6f5: mov esi, ecx */
  esi = ecx;
/* 7ca6f7: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7ca6fdu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7ca6fd: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 7ca701: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7ca703: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 7ca705: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 7ca708: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ca709: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7ca720(void) {
  LOAD_REGS();
L_7ca720: /* 7ca720: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7ca721: mov ebp, esp */
  ebp = esp;
/* 7ca723: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7ca725: push 0x9cfa80 */
  { uint32_t v = 0x9cfa80u; esp -= 4; W32(esp, v); }
/* 7ca72a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7ca730: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ca731: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7ca738: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ca73b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ca73c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ca73d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7ca740: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ca741: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 7ca744: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7ca747: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7ca749: xor ebx, ebx */
  ebx = 0;
/* 7ca74b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ca74c: mov ecx, edi */
  ecx = edi;
/* 7ca74e: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7ca751: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x7ca757u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 7ca757: mov ecx, esi */
  ecx = esi;
/* 7ca759: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x7ca75fu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 7ca75f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ca761: je 0x7ca7cb */
  if (zf) goto L_7ca7cb;
L_7ca763: /* 7ca763: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 7ca766: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ca767: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ca768: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x7ca76eu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 7ca76e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7ca771: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ca774: xor eax, eax */
  eax = 0;
L_7ca776: /* 7ca776: cmp eax, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ca779: jge 0x7ca77e */
  if ((sf == of)) goto L_7ca77e;
L_7ca77b: /* 7ca77b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7ca77c: jmp 0x7ca776 */
  goto L_7ca776;
L_7ca77e: /* 7ca77e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ca77f: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7ca781: mov ecx, edi */
  ecx = edi;
/* 7ca783: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7ca789u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7ca789: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 7ca78c: mov ebx, dword ptr [0xcfa354] */
  ebx = R32((uint32_t)(0xcfa354u));
L_7ca792: /* 7ca792: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ca795: cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ca798: jge 0x7ca80c */
  if ((sf == of)) goto L_7ca80c;
L_7ca79a: /* 7ca79a: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7ca79c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7ca79e: mov ecx, edi */
  ecx = edi;
/* 7ca7a0: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7ca7a6u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7ca7a6: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7ca7a8: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7ca7ab: lea esi, [edx + eax*8] */
  esi = (uint32_t)(edx + eax*8);
/* 7ca7ae: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 7ca7b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ca7b2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ca7b3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7ca7b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ca7b5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ca7b8: add esi, 6 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7ca7bb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ca7bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ca7bd: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7ca7bfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ca7bf: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ca7c2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ca7c5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7ca7c6: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7ca7c9: jmp 0x7ca792 */
  goto L_7ca792;
L_7ca7cb: /* 7ca7cb: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
/* 7ca7ce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ca7cf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ca7d0: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x7ca7d6u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 7ca7d6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ca7d9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7ca7e0: /* 7ca7e0: cmp ebx, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ca7e3: jge 0x7ca80c */
  if ((sf == of)) goto L_7ca80c;
L_7ca7e5: /* 7ca7e5: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7ca7e7: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7ca7ea: lea esi, [edx + ebx*8] */
  esi = (uint32_t)(edx + ebx*8);
/* 7ca7ed: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 7ca7f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ca7f1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ca7f2: call dword ptr [0xcfa354] */
  esp -= 4; W32(esp, 0x7ca7f8u); SPILL(); f_4e4147(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAG@Z */ RELOAD();
/* 7ca7f8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ca7fb: add esi, 6 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7ca7fe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ca7ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ca800: call dword ptr [0xcfa354] */
  esp -= 4; W32(esp, 0x7ca806u); SPILL(); f_4e4147(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAG@Z */ RELOAD();
/* 7ca806: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ca809: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7ca80a: jmp 0x7ca7e0 */
  goto L_7ca7e0;
L_7ca80c: /* 7ca80c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ca80f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7ca812: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ca813: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ca814: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ca81b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ca81c: mov esp, ebp */
  esp = ebp;
/* 7ca81e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ca81f: ret  */
  esp += 4; SPILL(); return;
}

void f_7ca820(void) {
  LOAD_REGS();
L_7ca820: /* 7ca820: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7ca823: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7ca828: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 7ca82b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ca82c: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 7ca82f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ca834u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7ca834(); return;
}

void f_7ca834(void) {
  LOAD_REGS();
L_7ca834: /* 7ca834: push 0xa0eb68 */
  { uint32_t v = 0xa0eb68u; esp -= 4; W32(esp, v); }
/* 7ca839: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 7ca83e: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7ca844u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7ca844: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ca847: xor ebx, ebx */
  ebx = 0;
/* 7ca849: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ca84a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ca84b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ca850u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7ca850: guest_badaddr(0x7ca850); return;
}

void f_7ca8b0(void) {
  LOAD_REGS();
L_7ca8b0: /* 7ca8b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7ca8b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ca8b5: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 7ca8b7: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7ca8bdu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7ca8bd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7ca8d0(void) {
  LOAD_REGS();
L_7ca8d0: /* 7ca8d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ca8d1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7ca8d2: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 7ca8d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ca8d9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ca8da: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 7ca8de: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7ca8e0: mov esi, ecx */
  esi = ecx;
/* 7ca8e2: jge 0x7ca8f8 */
  if ((sf == of)) goto L_7ca8f8;
L_7ca8e4: /* 7ca8e4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 7ca8e9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7ca8ee: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 7ca8f3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7ca8f5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ca8f5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7ca8f8: /* 7ca8f8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ca8fb: jle 0x7ca911 */
  if ((zf || sf != of)) goto L_7ca911;
L_7ca8fd: /* 7ca8fd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7ca902: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7ca907: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7ca90c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7ca90eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ca90e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7ca911: /* 7ca911: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 7ca915: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7ca918: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 7ca91b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ca91d: jle 0x7ca933 */
  if ((zf || sf != of)) goto L_7ca933;
L_7ca91f: /* 7ca91f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7ca924: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7ca929: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7ca92e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7ca930u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ca930: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7ca933: /* 7ca933: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 7ca935: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ca936: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ca937: mov ecx, esi */
  ecx = esi;
/* 7ca939: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7ca93fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7ca93f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ca940: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ca941: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ca942: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ca943: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7ca970(void) {
  LOAD_REGS();
L_7ca970: /* 7ca970: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7ca971: mov ebp, esp */
  ebp = esp;
/* 7ca973: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7ca975: push 0x9cfa90 */
  { uint32_t v = 0x9cfa90u; esp -= 4; W32(esp, v); }
/* 7ca97a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7ca980: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ca981: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7ca988: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ca98b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ca98c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 7ca98f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ca990: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 7ca993: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ca994: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7ca997: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 7ca999: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ca99a: mov ecx, esi */
  ecx = esi;
/* 7ca99c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7ca9a3: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x7ca9a9u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 7ca9a9: mov ecx, ebx */
  ecx = ebx;
/* 7ca9ab: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x7ca9b1u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 7ca9b1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ca9b3: je 0x7caa06 */
  if (zf) goto L_7caa06;
L_7ca9b5: /* 7ca9b5: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7ca9b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ca9b9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ca9ba: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x7ca9c0u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 7ca9c0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ca9c3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ca9c6: xor eax, eax */
  eax = 0;
L_7ca9c8: /* 7ca9c8: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ca9cb: jge 0x7ca9d0 */
  if ((sf == of)) goto L_7ca9d0;
L_7ca9cd: /* 7ca9cd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7ca9ce: jmp 0x7ca9c8 */
  goto L_7ca9c8;
L_7ca9d0: /* 7ca9d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ca9d1: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 7ca9d3: mov ecx, esi */
  ecx = esi;
/* 7ca9d5: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7ca9dbu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7ca9db: xor edi, edi */
  edi = 0;
/* 7ca9dd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7ca9e0: /* 7ca9e0: cmp edi, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ca9e3: jge 0x7caa30 */
  if ((sf == of)) goto L_7caa30;
L_7ca9e5: /* 7ca9e5: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 7ca9e7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7ca9e9: mov ecx, esi */
  ecx = esi;
/* 7ca9eb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7ca9f1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7ca9f1: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7ca9f3: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 7ca9f6: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 7ca9f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ca9fa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ca9fb: call 0x6c6857 */
  esp -= 4; W32(esp, 0x7caa00u); SPILL(); f_6c6857(); if (g_unwind) return; RELOAD();
/* 7caa00: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7caa03: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7caa04: jmp 0x7ca9e0 */
  goto L_7ca9e0;
L_7caa06: /* 7caa06: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 7caa09: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7caa0a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7caa0b: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x7caa11u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 7caa11: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7caa14: xor edi, edi */
  edi = 0;
L_7caa16: /* 7caa16: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7caa19: jge 0x7caa30 */
  if ((sf == of)) goto L_7caa30;
L_7caa1b: /* 7caa1b: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7caa1d: lea eax, [edi + edi*4] */
  eax = (uint32_t)(edi + edi*4);
/* 7caa20: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 7caa23: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7caa24: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7caa25: call 0x6c6857 */
  esp -= 4; W32(esp, 0x7caa2au); SPILL(); f_6c6857(); if (g_unwind) return; RELOAD();
/* 7caa2a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7caa2d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7caa2e: jmp 0x7caa16 */
  goto L_7caa16;
L_7caa30: /* 7caa30: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7caa33: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7caa34: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7caa35: mov eax, ebx */
  eax = ebx;
/* 7caa37: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7caa3e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7caa3f: mov esp, ebp */
  esp = ebp;
/* 7caa41: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7caa42: ret  */
  esp += 4; SPILL(); return;
}

void f_7caa43(void) {
  LOAD_REGS();
L_7caa43: /* 7caa43: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7caa46: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7caa4b: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7caa4e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7caa4f: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7caa52: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7caa57u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7caa57(); return;
}

void f_7caa57(void) {
  LOAD_REGS();
L_7caa57: /* 7caa57: push 0xa0eb80 */
  { uint32_t v = 0xa0eb80u; esp -= 4; W32(esp, v); }
/* 7caa5c: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 7caa61: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7caa67u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7caa67: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7caa6a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7caa6c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7caa6e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7caa73u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7caa73: guest_badaddr(0x7caa73); return;
}

void f_7caad0(void) {
  LOAD_REGS();
L_7caad0: /* 7caad0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7caad1: mov ebp, esp */
  ebp = esp;
/* 7caad3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7caad5: push 0x9cfaa0 */
  { uint32_t v = 0x9cfaa0u; esp -= 4; W32(esp, v); }
/* 7caada: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7caae0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7caae1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7caae8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7caaeb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7caaec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7caaed: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 7caaf0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7caaf1: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 7caaf4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7caaf7: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7caaf9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7caafa: mov ecx, esi */
  ecx = esi;
/* 7caafc: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7cab03: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x7cab09u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 7cab09: mov ecx, edi */
  ecx = edi;
/* 7cab0b: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x7cab11u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 7cab11: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cab13: je 0x7cab61 */
  if (zf) goto L_7cab61;
L_7cab15: /* 7cab15: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7cab18: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cab19: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7cab1a: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x7cab20u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 7cab20: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7cab23: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cab26: xor eax, eax */
  eax = 0;
L_7cab28: /* 7cab28: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cab2b: jge 0x7cab30 */
  if ((sf == of)) goto L_7cab30;
L_7cab2d: /* 7cab2d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7cab2e: jmp 0x7cab28 */
  goto L_7cab28;
L_7cab30: /* 7cab30: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cab31: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7cab33: mov ecx, esi */
  ecx = esi;
/* 7cab35: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7cab3bu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7cab3b: xor ebx, ebx */
  ebx = 0;
/* 7cab3d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7cab40: /* 7cab40: cmp ebx, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cab43: jge 0x7cab86 */
  if ((sf == of)) goto L_7cab86;
L_7cab45: /* 7cab45: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7cab47: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7cab49: mov ecx, esi */
  ecx = esi;
/* 7cab4b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7cab51u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7cab51: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7cab53: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7cab55: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 7cab58: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cab59: mov ecx, edi */
  ecx = edi;
/* 7cab5b: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x7cab5eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cab5e: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7cab5f: jmp 0x7cab40 */
  goto L_7cab40;
L_7cab61: /* 7cab61: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 7cab64: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cab65: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7cab66: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x7cab6cu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 7cab6c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cab6f: xor ebx, ebx */
  ebx = 0;
L_7cab71: /* 7cab71: cmp ebx, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cab74: jge 0x7cab86 */
  if ((sf == of)) goto L_7cab86;
L_7cab76: /* 7cab76: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7cab78: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7cab7a: lea eax, [eax + ebx*4] */
  eax = (uint32_t)(eax + ebx*4);
/* 7cab7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cab7e: mov ecx, edi */
  ecx = edi;
/* 7cab80: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x7cab83u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cab83: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7cab84: jmp 0x7cab71 */
  goto L_7cab71;
L_7cab86: /* 7cab86: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7cab89: mov eax, edi */
  eax = edi;
/* 7cab8b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7cab8c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cab8d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7cab94: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7cab95: mov esp, ebp */
  esp = ebp;
/* 7cab97: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7cab98: ret  */
  esp += 4; SPILL(); return;
}

void f_7cab99(void) {
  LOAD_REGS();
L_7cab99: /* 7cab99: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7cab9c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7caba1: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7caba4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7caba5: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7caba8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7cabadu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7cabad(); return;
}

void f_7cabad(void) {
  LOAD_REGS();
L_7cabad: /* 7cabad: push 0xa0eb98 */
  { uint32_t v = 0xa0eb98u; esp -= 4; W32(esp, v); }
/* 7cabb2: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 7cabb7: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7cabbdu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7cabbd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cabc0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cabc2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cabc4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7cabc9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7cabc9: guest_badaddr(0x7cabc9); return;
}

void f_7cac10(void) {
  LOAD_REGS();
L_7cac10: /* 7cac10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cac11: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 7cac15: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7cac16: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 7cac1a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7cac1b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cac1c: call 0x6c8904 */
  esp -= 4; W32(esp, 0x7cac21u); SPILL(); f_6c8904(); if (g_unwind) return; RELOAD();
/* 7cac21: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cac24: mov ecx, esi */
  ecx = esi;
/* 7cac26: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x7cac2cu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 7cac2c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cac2e: je 0x7cac37 */
  if (zf) goto L_7cac37;
L_7cac30: /* 7cac30: mov ecx, edi */
  ecx = edi;
/* 7cac32: call 0x6c38eb */
  esp -= 4; W32(esp, 0x7cac37u); SPILL(); f_6c38eb(); if (g_unwind) return; RELOAD();
L_7cac37: /* 7cac37: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7cac38: mov eax, esi */
  eax = esi;
/* 7cac3a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cac3b: ret  */
  esp += 4; SPILL(); return;
}

void f_7cac50(void) {
  LOAD_REGS();
L_7cac50: /* 7cac50: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7cac51: mov ebp, esp */
  ebp = esp;
/* 7cac53: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7cac55: push 0x9cfab0 */
  { uint32_t v = 0x9cfab0u; esp -= 4; W32(esp, v); }
/* 7cac5a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7cac60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cac61: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7cac68: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7cac6b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7cac6c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 7cac6f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cac70: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 7cac73: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7cac74: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7cac77: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 7cac79: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7cac7a: mov ecx, esi */
  ecx = esi;
/* 7cac7c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7cac83: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x7cac89u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 7cac89: mov ecx, ebx */
  ecx = ebx;
/* 7cac8b: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x7cac91u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 7cac91: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cac93: je 0x7cace5 */
  if (zf) goto L_7cace5;
L_7cac95: /* 7cac95: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7cac98: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cac99: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7cac9a: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x7caca0u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 7caca0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7caca3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7caca6: xor eax, eax */
  eax = 0;
L_7caca8: /* 7caca8: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cacab: jge 0x7cacb0 */
  if ((sf == of)) goto L_7cacb0;
L_7cacad: /* 7cacad: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7cacae: jmp 0x7caca8 */
  goto L_7caca8;
L_7cacb0: /* 7cacb0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cacb1: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 7cacb3: mov ecx, esi */
  ecx = esi;
/* 7cacb5: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7cacbbu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7cacbb: xor edi, edi */
  edi = 0;
/* 7cacbd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7cacc0: /* 7cacc0: cmp edi, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cacc3: jge 0x7cad10 */
  if ((sf == of)) goto L_7cad10;
L_7cacc5: /* 7cacc5: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 7cacc7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7cacc9: mov ecx, esi */
  ecx = esi;
/* 7caccb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7cacd1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7cacd1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7cacd3: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7cacd6: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7cacd8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cacd9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7cacda: call 0x6cb13b */
  esp -= 4; W32(esp, 0x7cacdfu); SPILL(); f_6cb13b(); if (g_unwind) return; RELOAD();
/* 7cacdf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cace2: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7cace3: jmp 0x7cacc0 */
  goto L_7cacc0;
L_7cace5: /* 7cace5: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 7cace8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cace9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7cacea: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x7cacf0u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 7cacf0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cacf3: xor edi, edi */
  edi = 0;
L_7cacf5: /* 7cacf5: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cacf8: jge 0x7cad10 */
  if ((sf == of)) goto L_7cad10;
L_7cacfa: /* 7cacfa: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7cacfc: mov ecx, edi */
  ecx = edi;
/* 7cacfe: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 7cad01: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7cad03: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cad04: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7cad05: call 0x6cb13b */
  esp -= 4; W32(esp, 0x7cad0au); SPILL(); f_6cb13b(); if (g_unwind) return; RELOAD();
/* 7cad0a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cad0d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7cad0e: jmp 0x7cacf5 */
  goto L_7cacf5;
L_7cad10: /* 7cad10: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7cad13: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7cad14: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cad15: mov eax, ebx */
  eax = ebx;
/* 7cad17: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7cad1e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7cad1f: mov esp, ebp */
  esp = ebp;
/* 7cad21: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7cad22: ret  */
  esp += 4; SPILL(); return;
}

void f_7cad23(void) {
  LOAD_REGS();
L_7cad23: /* 7cad23: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7cad26: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7cad2b: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 7cad2e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cad2f: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 7cad32: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7cad37u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7cad37(); return;
}

void f_7cad37(void) {
  LOAD_REGS();
L_7cad37: /* 7cad37: push 0xa0ebb0 */
  { uint32_t v = 0xa0ebb0u; esp -= 4; W32(esp, v); }
/* 7cad3c: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 7cad41: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7cad47u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7cad47: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cad4a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cad4c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cad4e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7cad53u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7cad53: guest_badaddr(0x7cad53); return;
}

void f_7cadb0(void) {
  LOAD_REGS();
L_7cadb0: /* 7cadb0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7cadb2: push 0x9cfac9 */
  { uint32_t v = 0x9cfac9u; esp -= 4; W32(esp, v); }
/* 7cadb7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7cadbd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cadbe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7cadc5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cadc6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7cadc7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cadc8: mov esi, ecx */
  esi = ecx;
/* 7cadca: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7cadcb: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 7cadcf: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 7cadd2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7cadd4: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 7cadda: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 7cade2: jge 0x7cadf8 */
  if ((sf == of)) goto L_7cadf8;
L_7cade4: /* 7cade4: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7cade9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7cadee: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7cadf3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7cadf5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cadf5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7cadf8: /* 7cadf8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cadfb: jle 0x7cae11 */
  if ((zf || sf != of)) goto L_7cae11;
L_7cadfd: /* 7cadfd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7cae02: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7cae07: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7cae0c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7cae0eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cae0e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7cae11: /* 7cae11: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 7cae13: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7cae14: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cae16: mov ecx, esi */
  ecx = esi;
/* 7cae18: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7cae1eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7cae1e: mov ecx, esi */
  ecx = esi;
/* 7cae20: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 7cae28: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x7cae2eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 7cae2e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7cae32: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7cae33: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cae34: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7cae35: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7cae3c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cae3f: ret  */
  esp += 4; SPILL(); return;
}

void f_7cae70(void) {
  LOAD_REGS();
L_7cae70: /* 7cae70: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7cae73: jmp 0x6c34e0 */
  SPILL(); f_6c34e0(); return;
}

void f_7cae90(void) {
  LOAD_REGS();
L_7cae90: /* 7cae90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7cae91: mov ebp, esp */
  ebp = esp;
/* 7cae93: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7cae95: push 0x9cfae0 */
  { uint32_t v = 0x9cfae0u; esp -= 4; W32(esp, v); }
/* 7cae9a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7caea0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7caea1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7caea8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7caeab: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7caeae: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7caeb0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7caeb1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7caeb2: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 7caeb5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7caeb6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7caeb9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7caeba: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7caec1: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x7caec4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7caec4: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7caec7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7caec8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7caec9: call 0x6c4016 */
  esp -= 4; W32(esp, 0x7caeceu); SPILL(); f_6c4016(); if (g_unwind) return; RELOAD();
/* 7caece: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7caed1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7caed4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7caed5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7caed6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7caedd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7caede: mov esp, ebp */
  esp = ebp;
/* 7caee0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7caee1: ret  */
  esp += 4; SPILL(); return;
}

void f_7caee2(void) {
  LOAD_REGS();
L_7caee2: /* 7caee2: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7caee5: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7caeea: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7caeed: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7caeee: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7caef1: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7caef6u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7caef6(); return;
}

void f_7caef6(void) {
  LOAD_REGS();
L_7caef6: /* 7caef6: push 0xa0ebc8 */
  { uint32_t v = 0xa0ebc8u; esp -= 4; W32(esp, v); }
/* 7caefb: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 7caf00: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7caf06u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7caf06: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7caf09: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7caf0b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7caf0d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7caf12u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7caf12: guest_badaddr(0x7caf12); return;
}

void f_7caf50(void) {
  LOAD_REGS();
L_7caf50: /* 7caf50: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7caf52: push 0x9cfaf8 */
  { uint32_t v = 0x9cfaf8u; esp -= 4; W32(esp, v); }
/* 7caf57: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7caf5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7caf5e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7caf65: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7caf66: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7caf67: mov esi, ecx */
  esi = ecx;
/* 7caf69: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7caf6d: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7caf73u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7caf73: xor eax, eax */
  eax = 0;
/* 7caf75: mov ecx, esi */
  ecx = esi;
/* 7caf77: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 7caf7b: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7caf7e: mov dword ptr [esi + 0x10], 8 */
  W32((uint32_t)(esi + 0x10u), 0x8u);
/* 7caf85: call 0x6c38eb */
  esp -= 4; W32(esp, 0x7caf8au); SPILL(); f_6c38eb(); if (g_unwind) return; RELOAD();
/* 7caf8a: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7caf8e: mov eax, esi */
  eax = esi;
/* 7caf90: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7caf91: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7caf98: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7caf9b: ret  */
  esp += 4; SPILL(); return;
}

void f_7cafc0(void) {
  LOAD_REGS();
L_7cafc0: /* 7cafc0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cafc1: mov esi, ecx */
  esi = ecx;
/* 7cafc3: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 7cafc6: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7cafccu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7cafcc: mov eax, esi */
  eax = esi;
/* 7cafce: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cafcf: ret  */
  esp += 4; SPILL(); return;
}

void f_7cafe0(void) {
  LOAD_REGS();
L_7cafe0: /* 7cafe0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cafe1: mov esi, ecx */
  esi = ecx;
/* 7cafe3: call 0x6c65b4 */
  esp -= 4; W32(esp, 0x7cafe8u); SPILL(); f_6c65b4(); if (g_unwind) return; RELOAD();
/* 7cafe8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7cafed: je 0x7caffc */
  if (zf) goto L_7caffc;
L_7cafef: /* 7cafef: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 7caff4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7caff6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7caff8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7caff9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7caffcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7caffc: /* 7caffc: mov eax, esi */
  eax = esi;
/* 7caffe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cafff: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7cb020(void) {
  LOAD_REGS();
L_7cb020: /* 7cb020: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7cb022: push 0x9cfb18 */
  { uint32_t v = 0x9cfb18u; esp -= 4; W32(esp, v); }
/* 7cb027: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7cb02d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cb02e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7cb035: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cb036: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cb037: mov esi, ecx */
  esi = ecx;
/* 7cb039: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7cb03d: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7cb043u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7cb043: xor eax, eax */
  eax = 0;
/* 7cb045: mov ecx, esi */
  ecx = esi;
/* 7cb047: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 7cb04b: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7cb04e: mov dword ptr [esi + 0x10], 8 */
  W32((uint32_t)(esi + 0x10u), 0x8u);
/* 7cb055: call 0x6c38eb */
  esp -= 4; W32(esp, 0x7cb05au); SPILL(); f_6c38eb(); if (g_unwind) return; RELOAD();
/* 7cb05a: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7cb05e: mov eax, esi */
  eax = esi;
/* 7cb060: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cb061: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7cb068: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cb06b: ret  */
  esp += 4; SPILL(); return;
}

void f_7cb090(void) {
  LOAD_REGS();
L_7cb090: /* 7cb090: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7cb091: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 7cb095: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7cb097: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7cb098: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cb099: mov esi, dword ptr [0xcfa2fc] */
  esi = R32((uint32_t)(0xcfa2fcu));
/* 7cb09f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7cb0a0: mov ebp, ecx */
  ebp = ecx;
/* 7cb0a2: jge 0x7cb0b8 */
  if ((sf == of)) goto L_7cb0b8;
L_7cb0a4: /* 7cb0a4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 7cb0a9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7cb0ae: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 7cb0b3: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7cb0b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cb0b5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7cb0b8: /* 7cb0b8: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cb0bb: jle 0x7cb0d1 */
  if ((zf || sf != of)) goto L_7cb0d1;
L_7cb0bd: /* 7cb0bd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7cb0c2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7cb0c7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7cb0cc: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7cb0ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cb0ce: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7cb0d1: /* 7cb0d1: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 7cb0d5: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 7cb0d8: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cb0db: jle 0x7cb0f1 */
  if ((zf || sf != of)) goto L_7cb0f1;
L_7cb0dd: /* 7cb0dd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7cb0e2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7cb0e7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7cb0ec: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7cb0eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cb0ee: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7cb0f1: /* 7cb0f1: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cb0f3: jge 0x7cb110 */
  if ((sf == of)) goto L_7cb110;
L_7cb0f5: /* 7cb0f5: mov esi, ebx */
  esi = ebx;
/* 7cb0f7: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 7cb0fa: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 7cb0fc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7cb100: /* 7cb100: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 7cb103: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7cb105: call 0x6c65b4 */
  esp -= 4; W32(esp, 0x7cb10au); SPILL(); f_6c65b4(); if (g_unwind) return; RELOAD();
/* 7cb10a: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7cb10d: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 7cb10e: jne 0x7cb100 */
  if (!zf) goto L_7cb100;
L_7cb110: /* 7cb110: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 7cb114: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 7cb116: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cb117: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7cb118: mov ecx, ebp */
  ecx = ebp;
/* 7cb11a: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7cb120u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7cb120: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7cb121: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cb122: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7cb123: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7cb124: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7cb160(void) {
  LOAD_REGS();
L_7cb160: /* 7cb160: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cb161: mov esi, ecx */
  esi = ecx;
/* 7cb163: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7cb166: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7cb167: xor edi, edi */
  edi = 0;
/* 7cb169: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7cb16b: jle 0x7cb185 */
  if ((zf || sf != of)) goto L_7cb185;
L_7cb16d: /* 7cb16d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7cb16e: xor ebx, ebx */
  ebx = 0;
L_7cb170: /* 7cb170: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7cb172: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7cb174: call 0x6c65b4 */
  esp -= 4; W32(esp, 0x7cb179u); SPILL(); f_6c65b4(); if (g_unwind) return; RELOAD();
/* 7cb179: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7cb17c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7cb17d: add ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 7cb180: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cb182: jl 0x7cb170 */
  if ((sf != of)) goto L_7cb170;
L_7cb184: /* 7cb184: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_7cb185: /* 7cb185: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 7cb189: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cb18a: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 7cb18c: mov ecx, esi */
  ecx = esi;
/* 7cb18e: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7cb194u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7cb194: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7cb195: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cb196: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7cb1b0(void) {
  LOAD_REGS();
L_7cb1b0: /* 7cb1b0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7cb1b2: push 0x9cfb57 */
  { uint32_t v = 0x9cfb57u; esp -= 4; W32(esp, v); }
/* 7cb1b7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7cb1bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cb1be: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7cb1c5: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7cb1c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cb1c9: mov esi, ecx */
  esi = ecx;
/* 7cb1cb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7cb1cc: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 7cb1d0: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x7cb1d6u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 7cb1d6: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 7cb1d9: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 7cb1e1: mov dword ptr [esi], 0xa05c78 */
  W32((uint32_t)(esi), 0xa05c78u);
/* 7cb1e7: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7cb1edu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7cb1ed: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* 7cb1f0: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* 7cb1f5: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7cb1fbu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7cb1fb: lea edi, [esi + 0x40] */
  edi = (uint32_t)(esi + 0x40u);
/* 7cb1fe: mov ecx, edi */
  ecx = edi;
/* 7cb200: mov byte ptr [esp + 0x18], 2 */
  W8((uint32_t)(esp + 0x18u), 0x2u);
/* 7cb205: mov dword ptr [esp + 0xc], edi */
  W32((uint32_t)(esp + 0xcu), edi);
/* 7cb209: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7cb20fu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7cb20f: mov ecx, edi */
  ecx = edi;
/* 7cb211: mov byte ptr [esp + 0x18], 3 */
  W8((uint32_t)(esp + 0x18u), 0x3u);
/* 7cb216: mov dword ptr [edi + 0xc], 0 */
  W32((uint32_t)(edi + 0xcu), 0x0u);
/* 7cb21d: mov dword ptr [edi + 0x10], 8 */
  W32((uint32_t)(edi + 0x10u), 0x8u);
/* 7cb224: call 0x6c38eb */
  esp -= 4; W32(esp, 0x7cb229u); SPILL(); f_6c38eb(); if (g_unwind) return; RELOAD();
/* 7cb229: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7cb22d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7cb22e: mov eax, esi */
  eax = esi;
/* 7cb230: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cb231: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7cb238: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cb23b: ret  */
  esp += 4; SPILL(); return;
}

void f_7cb270(void) {
  LOAD_REGS();
L_7cb270: /* 7cb270: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7cb272: push 0x9cfb79 */
  { uint32_t v = 0x9cfb79u; esp -= 4; W32(esp, v); }
/* 7cb277: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7cb27d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cb27e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7cb285: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cb286: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cb287: mov esi, ecx */
  esi = ecx;
/* 7cb289: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7cb28d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7cb290: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cb291: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cb293: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 7cb29b: call 0x6cbbe0 */
  esp -= 4; W32(esp, 0x7cb2a0u); SPILL(); f_6cbbe0(); if (g_unwind) return; RELOAD();
/* 7cb2a0: mov ecx, esi */
  ecx = esi;
/* 7cb2a2: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 7cb2aa: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x7cb2b0u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 7cb2b0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7cb2b4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cb2b5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7cb2bc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cb2bf: ret  */
  esp += 4; SPILL(); return;
}

void f_7cb2e0(void) {
  LOAD_REGS();
L_7cb2e0: /* 7cb2e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7cb2e1: mov ebp, esp */
  ebp = esp;
/* 7cb2e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7cb2e5: push 0x9cfb90 */
  { uint32_t v = 0x9cfb90u; esp -= 4; W32(esp, v); }
/* 7cb2ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7cb2f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cb2f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7cb2f8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7cb2fb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7cb2fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cb2fd: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7cb300: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7cb301: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 7cb304: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7cb307: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 7cb309: xor ebx, ebx */
  ebx = 0;
/* 7cb30b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cb30c: mov ecx, edi */
  ecx = edi;
/* 7cb30e: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7cb311: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x7cb317u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 7cb317: mov ecx, esi */
  ecx = esi;
/* 7cb319: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x7cb31fu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 7cb31f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7cb321: je 0x7cb37c */
  if (zf) goto L_7cb37c;
L_7cb323: /* 7cb323: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7cb326: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cb327: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cb328: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x7cb32eu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 7cb32e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7cb331: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cb334: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cb335: mov ecx, edi */
  ecx = edi;
/* 7cb337: call 0x6c4089 */
  esp -= 4; W32(esp, 0x7cb33cu); SPILL(); f_6c4089(); if (g_unwind) return; RELOAD();
/* 7cb33c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7cb340: /* 7cb340: cmp ebx, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cb343: jge 0x7cb3b0 */
  if ((sf == of)) goto L_7cb3b0;
L_7cb345: /* 7cb345: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 7cb347: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7cb349: mov ecx, edi */
  ecx = edi;
/* 7cb34b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7cb351u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7cb351: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 7cb353: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7cb356: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 7cb358: mov esi, eax */
  esi = eax;
/* 7cb35a: je 0x7cb367 */
  if (zf) goto L_7cb367;
L_7cb35c: /* 7cb35c: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 7cb35f: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7cb365u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7cb365: jmp 0x7cb369 */
  goto L_7cb369;
L_7cb367: /* 7cb367: xor esi, esi */
  esi = 0;
L_7cb369: /* 7cb369: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7cb36c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cb36d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7cb36e: call 0x6c30e4 */
  esp -= 4; W32(esp, 0x7cb373u); SPILL(); f_6c30e4(); if (g_unwind) return; RELOAD();
/* 7cb373: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7cb376: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cb379: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7cb37a: jmp 0x7cb340 */
  goto L_7cb340;
L_7cb37c: /* 7cb37c: lea ebx, [edi + 4] */
  ebx = (uint32_t)(edi + 0x4u);
/* 7cb37f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7cb380: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cb381: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x7cb387u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 7cb387: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cb38a: xor esi, esi */
  esi = 0;
/* 7cb38c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7cb390: /* 7cb390: cmp esi, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cb392: jge 0x7cb3ad */
  if ((sf == of)) goto L_7cb3ad;
L_7cb394: /* 7cb394: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7cb396: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7cb399: mov eax, esi */
  eax = esi;
/* 7cb39b: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7cb39e: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7cb3a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cb3a1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cb3a2: call 0x6c30e4 */
  esp -= 4; W32(esp, 0x7cb3a7u); SPILL(); f_6c30e4(); if (g_unwind) return; RELOAD();
/* 7cb3a7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cb3aa: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7cb3ab: jmp 0x7cb390 */
  goto L_7cb390;
L_7cb3ad: /* 7cb3ad: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_7cb3b0: /* 7cb3b0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7cb3b3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7cb3b4: mov eax, esi */
  eax = esi;
/* 7cb3b6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cb3b7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7cb3be: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7cb3bf: mov esp, ebp */
  esp = ebp;
/* 7cb3c1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7cb3c2: ret  */
  esp += 4; SPILL(); return;
}

void f_7cb3c3(void) {
  LOAD_REGS();
L_7cb3c3: /* 7cb3c3: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7cb3c6: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7cb3cb: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 7cb3ce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cb3cf: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 7cb3d2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7cb3d7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7cb3d7(); return;
}

void f_7cb3d7(void) {
  LOAD_REGS();
L_7cb3d7: /* 7cb3d7: push 0xa0ebec */
  { uint32_t v = 0xa0ebecu; esp -= 4; W32(esp, v); }
/* 7cb3dc: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 7cb3e1: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7cb3e7u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7cb3e7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cb3ea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cb3ec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cb3ee: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7cb3f3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7cb3f3: guest_badaddr(0x7cb3f3); return;
}

void f_7cb450(void) {
  LOAD_REGS();
L_7cb450: /* 7cb450: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7cb451: mov ebp, esp */
  ebp = esp;
/* 7cb453: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7cb455: push 0x9cfbb1 */
  { uint32_t v = 0x9cfbb1u; esp -= 4; W32(esp, v); }
/* 7cb45a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7cb460: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cb461: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7cb468: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7cb46b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7cb46c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cb46d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7cb470: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7cb471: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7cb474: mov edi, ecx */
  edi = ecx;
/* 7cb476: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cb477: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 7cb47a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7cb481: call dword ptr [0xcfa29c] */
  esp -= 4; W32(esp, 0x7cb487u); SPILL(); f_4e1519(); if (g_unwind) return; /* Core!?Serialize@UObject@@UAEXAAVFArchive@@@Z */ RELOAD();
/* 7cb487: mov eax, dword ptr [0xcfa408] */
  eax = R32((uint32_t)(0xcfa408u));
/* 7cb48c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7cb48e: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 7cb491: mov ecx, esi */
  ecx = esi;
/* 7cb493: mov dword ptr [eax], 1 */
  W32((uint32_t)(eax), 0x1u);
/* 7cb499: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x7cb49fu); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 7cb49f: cmp eax, 0x7a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7au);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cb4a2: jge 0x7cb5b8 */
  if ((sf == of)) goto L_7cb5b8;
L_7cb4a8: /* 7cb4a8: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7cb4ab: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7cb4b1u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7cb4b1: lea edx, [ebp - 0x38] */
  edx = (uint32_t)(ebp + 0xffffffc8u);
/* 7cb4b4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7cb4b5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cb4b6: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7cb4ba: call 0x6cc36a */
  esp -= 4; W32(esp, 0x7cb4bfu); SPILL(); f_6cc36a(); if (g_unwind) return; RELOAD();
/* 7cb4bf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cb4c2: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7cb4c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cb4c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cb4c7: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x7cb4cdu); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* 7cb4cd: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7cb4d0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cb4d3: xor ecx, ecx */
  ecx = 0;
/* 7cb4d5: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7cb4d8: jmp 0x7cb4e0 */
  goto L_7cb4e0;
L_7cb4e0: /* 7cb4e0: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 7cb4e3: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cb4e5: jge 0x7cb59a */
  if ((sf == of)) goto L_7cb59a;
L_7cb4eb: /* 7cb4eb: mov esi, ecx */
  esi = ecx;
/* 7cb4ed: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 7cb4f0: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7cb4f2: lea edx, [esi + eax] */
  edx = (uint32_t)(esi + eax);
/* 7cb4f5: lea ebx, [edi + 0x34] */
  ebx = (uint32_t)(edi + 0x34u);
/* 7cb4f8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7cb4fa: mov ecx, ebx */
  ecx = ebx;
/* 7cb4fc: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 7cb4ff: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7cb505u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7cb505: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7cb508: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 7cb50a: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 7cb50c: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 7cb50f: xor ebx, ebx */
  ebx = 0;
L_7cb511: /* 7cb511: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7cb514: cmp ebx, dword ptr [esi + eax + 8] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + eax + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cb518: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 7cb51b: jge 0x7cb58b */
  if ((sf == of)) goto L_7cb58b;
L_7cb51d: /* 7cb51d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7cb51f: add edi, 0x28 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7cb522: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 7cb524: mov ecx, edi */
  ecx = edi;
/* 7cb526: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x7cb52cu); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 7cb52c: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 7cb52e: mov dl, byte ptr [ebp - 0x14] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffecu))) & 0xffu);
/* 7cb531: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 7cb534: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7cb537: mov byte ptr [ecx + eax + 0x10], dl */
  W8((uint32_t)(ecx + eax + 0x10u), (edx & 0xffu));
/* 7cb53b: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7cb53e: mov edx, dword ptr [esi + edx + 4] */
  edx = R32((uint32_t)(esi + edx + 0x4u));
/* 7cb542: mov ecx, ebx */
  ecx = ebx;
/* 7cb544: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 7cb546: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 7cb549: mov edx, dword ptr [ecx + edx] */
  edx = R32((uint32_t)(ecx + edx));
/* 7cb54c: mov dword ptr [eax + ebx], edx */
  W32((uint32_t)(eax + ebx), edx);
/* 7cb54f: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7cb552: mov edx, dword ptr [esi + edx + 4] */
  edx = R32((uint32_t)(esi + edx + 0x4u));
/* 7cb556: mov edx, dword ptr [edx + ecx + 4] */
  edx = R32((uint32_t)(edx + ecx + 0x4u));
/* 7cb55a: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 7cb55c: mov dword ptr [ebx + eax + 4], edx */
  W32((uint32_t)(ebx + eax + 0x4u), edx);
/* 7cb560: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7cb563: mov edx, dword ptr [esi + edx + 4] */
  edx = R32((uint32_t)(esi + edx + 0x4u));
/* 7cb567: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 7cb569: mov edx, dword ptr [edx + ecx + 8] */
  edx = R32((uint32_t)(edx + ecx + 0x8u));
/* 7cb56d: mov dword ptr [ebx + eax + 8], edx */
  W32((uint32_t)(ebx + eax + 0x8u), edx);
/* 7cb571: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7cb574: mov edx, dword ptr [esi + edx + 4] */
  edx = R32((uint32_t)(esi + edx + 0x4u));
/* 7cb578: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* 7cb57a: mov ecx, dword ptr [edx + ecx + 0xc] */
  ecx = R32((uint32_t)(edx + ecx + 0xcu));
/* 7cb57e: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7cb581: mov dword ptr [edi + eax + 0xc], ecx */
  W32((uint32_t)(edi + eax + 0xcu), ecx);
/* 7cb585: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7cb588: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7cb589: jmp 0x7cb511 */
  goto L_7cb511;
L_7cb58b: /* 7cb58b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7cb58e: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7cb591: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7cb592: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7cb595: jmp 0x7cb4e0 */
  goto L_7cb4e0;
L_7cb59a: /* 7cb59a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7cb59b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cb59d: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7cb5a0: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7cb5a4: call 0x6cbbe0 */
  esp -= 4; W32(esp, 0x7cb5a9u); SPILL(); f_6cbbe0(); if (g_unwind) return; RELOAD();
/* 7cb5a9: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7cb5ac: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7cb5b0: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x7cb5b6u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 7cb5b6: jmp 0x7cb5d2 */
  goto L_7cb5d2;
L_7cb5b8: /* 7cb5b8: lea edx, [edi + 0x28] */
  edx = (uint32_t)(edi + 0x28u);
/* 7cb5bb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7cb5bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cb5bd: call 0x6cbc9e */
  esp -= 4; W32(esp, 0x7cb5c2u); SPILL(); f_6cbc9e(); if (g_unwind) return; RELOAD();
/* 7cb5c2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cb5c5: lea ecx, [edi + 0x34] */
  ecx = (uint32_t)(edi + 0x34u);
/* 7cb5c8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cb5c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cb5ca: call 0x6c8760 */
  esp -= 4; W32(esp, 0x7cb5cfu); SPILL(); f_6c8760(); if (g_unwind) return; RELOAD();
/* 7cb5cf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7cb5d2: /* 7cb5d2: mov ecx, esi */
  ecx = esi;
/* 7cb5d4: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x7cb5dau); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 7cb5da: cmp eax, 0x77 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x77u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cb5dd: jl 0x7cb5ed */
  if ((sf != of)) goto L_7cb5ed;
L_7cb5df: /* 7cb5df: lea edx, [edi + 0x58] */
  edx = (uint32_t)(edi + 0x58u);
/* 7cb5e2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7cb5e3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cb5e4: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x7cb5eau); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* 7cb5ea: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7cb5ed: /* 7cb5ed: mov eax, dword ptr [0xcfa408] */
  eax = R32((uint32_t)(0xcfa408u));
/* 7cb5f2: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7cb5f5: jne 0x7cb63a */
  if (!zf) goto L_7cb63a;
L_7cb5f7: /* 7cb5f7: xor ebx, ebx */
  ebx = 0;
/* 7cb5f9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7cb600: /* 7cb600: cmp ebx, dword ptr [edi + 0x38] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x38u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cb603: jge 0x7cb63a */
  if ((sf == of)) goto L_7cb63a;
L_7cb605: /* 7cb605: mov ecx, dword ptr [edi + 0x34] */
  ecx = R32((uint32_t)(edi + 0x34u));
/* 7cb608: cmp dword ptr [ecx + ebx*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + ebx*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7cb60c: je 0x7cb637 */
  if (zf) goto L_7cb637;
L_7cb60e: /* 7cb60e: xor esi, esi */
  esi = 0;
L_7cb610: /* 7cb610: mov edx, dword ptr [edi + 0x34] */
  edx = R32((uint32_t)(edi + 0x34u));
/* 7cb613: mov eax, dword ptr [edx + ebx*4] */
  eax = R32((uint32_t)(edx + ebx*4));
/* 7cb616: cmp esi, dword ptr [eax + 0xb0] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0xb0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cb61c: jge 0x7cb634 */
  if ((sf == of)) goto L_7cb634;
L_7cb61e: /* 7cb61e: mov edx, dword ptr [eax + 0xac] */
  edx = R32((uint32_t)(eax + 0xacu));
/* 7cb624: lea ecx, [esi + esi*4] */
  ecx = (uint32_t)(esi + esi*4);
/* 7cb627: mov eax, dword ptr [edx + ecx*8 + 0x10] */
  eax = R32((uint32_t)(edx + ecx*8 + 0x10u));
/* 7cb62b: lea ecx, [edx + ecx*8 + 0x10] */
  ecx = (uint32_t)(edx + ecx*8 + 0x10u);
/* 7cb62f: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x7cb631u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cb631: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7cb632: jmp 0x7cb610 */
  goto L_7cb610;
L_7cb634: /* 7cb634: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_7cb637: /* 7cb637: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7cb638: jmp 0x7cb600 */
  goto L_7cb600;
L_7cb63a: /* 7cb63a: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7cb63d: mov edx, dword ptr [0xcfa408] */
  edx = R32((uint32_t)(0xcfa408u));
/* 7cb643: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 7cb645: mov ecx, esi */
  ecx = esi;
/* 7cb647: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x7cb64du); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 7cb64d: cmp eax, 0x45 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x45u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cb650: jl 0x7cb693 */
  if ((sf != of)) goto L_7cb693;
L_7cb652: /* 7cb652: lea ebx, [edi + 0x40] */
  ebx = (uint32_t)(edi + 0x40u);
/* 7cb655: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7cb656: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cb657: call 0x6c8904 */
  esp -= 4; W32(esp, 0x7cb65cu); SPILL(); f_6c8904(); if (g_unwind) return; RELOAD();
/* 7cb65c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cb65f: mov ecx, esi */
  ecx = esi;
/* 7cb661: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x7cb667u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 7cb667: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cb669: je 0x7cb672 */
  if (zf) goto L_7cb672;
L_7cb66b: /* 7cb66b: mov ecx, ebx */
  ecx = ebx;
/* 7cb66d: call 0x6c38eb */
  esp -= 4; W32(esp, 0x7cb672u); SPILL(); f_6c38eb(); if (g_unwind) return; RELOAD();
L_7cb672: /* 7cb672: add edi, 0x54 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7cb675: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7cb676: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cb677: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x7cb67du); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* 7cb67d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cb680: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7cb683: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7cb68a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7cb68b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cb68c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7cb68d: mov esp, ebp */
  esp = ebp;
/* 7cb68f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7cb690: ret 4 */
  esp += 8; SPILL(); return;
L_7cb693: /* 7cb693: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7cb696: mov dword ptr [edi + 0x54], 0 */
  W32((uint32_t)(edi + 0x54u), 0x0u);
/* 7cb69d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7cb69e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cb69f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7cb6a6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7cb6a7: mov esp, ebp */
  esp = ebp;
/* 7cb6a9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7cb6aa: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7cb4da(void) {
  LOAD_REGS();
L_7cb4da: /* 7cb4da: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_7cb4e0: /* 7cb4e0: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 7cb4e3: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cb4e5: jge 0x7cb59a */
  if ((sf == of)) goto L_7cb59a;
L_7cb4eb: /* 7cb4eb: mov esi, ecx */
  esi = ecx;
/* 7cb4ed: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 7cb4f0: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7cb4f2: lea edx, [esi + eax] */
  edx = (uint32_t)(esi + eax);
/* 7cb4f5: lea ebx, [edi + 0x34] */
  ebx = (uint32_t)(edi + 0x34u);
/* 7cb4f8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7cb4fa: mov ecx, ebx */
  ecx = ebx;
/* 7cb4fc: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 7cb4ff: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7cb505u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7cb505: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7cb508: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 7cb50a: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 7cb50c: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 7cb50f: xor ebx, ebx */
  ebx = 0;
L_7cb511: /* 7cb511: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7cb514: cmp ebx, dword ptr [esi + eax + 8] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + eax + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cb518: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 7cb51b: jge 0x7cb58b */
  if ((sf == of)) goto L_7cb58b;
L_7cb51d: /* 7cb51d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7cb51f: add edi, 0x28 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7cb522: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 7cb524: mov ecx, edi */
  ecx = edi;
/* 7cb526: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x7cb52cu); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 7cb52c: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 7cb52e: mov dl, byte ptr [ebp - 0x14] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffecu))) & 0xffu);
/* 7cb531: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 7cb534: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7cb537: mov byte ptr [ecx + eax + 0x10], dl */
  W8((uint32_t)(ecx + eax + 0x10u), (edx & 0xffu));
/* 7cb53b: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7cb53e: mov edx, dword ptr [esi + edx + 4] */
  edx = R32((uint32_t)(esi + edx + 0x4u));
/* 7cb542: mov ecx, ebx */
  ecx = ebx;
/* 7cb544: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 7cb546: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 7cb549: mov edx, dword ptr [ecx + edx] */
  edx = R32((uint32_t)(ecx + edx));
/* 7cb54c: mov dword ptr [eax + ebx], edx */
  W32((uint32_t)(eax + ebx), edx);
/* 7cb54f: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7cb552: mov edx, dword ptr [esi + edx + 4] */
  edx = R32((uint32_t)(esi + edx + 0x4u));
/* 7cb556: mov edx, dword ptr [edx + ecx + 4] */
  edx = R32((uint32_t)(edx + ecx + 0x4u));
/* 7cb55a: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 7cb55c: mov dword ptr [ebx + eax + 4], edx */
  W32((uint32_t)(ebx + eax + 0x4u), edx);
/* 7cb560: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7cb563: mov edx, dword ptr [esi + edx + 4] */
  edx = R32((uint32_t)(esi + edx + 0x4u));
/* 7cb567: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 7cb569: mov edx, dword ptr [edx + ecx + 8] */
  edx = R32((uint32_t)(edx + ecx + 0x8u));
/* 7cb56d: mov dword ptr [ebx + eax + 8], edx */
  W32((uint32_t)(ebx + eax + 0x8u), edx);
/* 7cb571: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7cb574: mov edx, dword ptr [esi + edx + 4] */
  edx = R32((uint32_t)(esi + edx + 0x4u));
/* 7cb578: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* 7cb57a: mov ecx, dword ptr [edx + ecx + 0xc] */
  ecx = R32((uint32_t)(edx + ecx + 0xcu));
/* 7cb57e: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7cb581: mov dword ptr [edi + eax + 0xc], ecx */
  W32((uint32_t)(edi + eax + 0xcu), ecx);
/* 7cb585: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7cb588: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7cb589: jmp 0x7cb511 */
  goto L_7cb511;
L_7cb58b: /* 7cb58b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7cb58e: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7cb591: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7cb592: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7cb595: jmp 0x7cb4e0 */
  goto L_7cb4e0;
L_7cb59a: /* 7cb59a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7cb59b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cb59d: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7cb5a0: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7cb5a4: call 0x6cbbe0 */
  esp -= 4; W32(esp, 0x7cb5a9u); SPILL(); f_6cbbe0(); if (g_unwind) return; RELOAD();
/* 7cb5a9: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7cb5ac: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7cb5b0: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x7cb5b6u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 7cb5b6: jmp 0x7cb5d2 */
  goto L_7cb5d2;
L_7cb5d2: /* 7cb5d2: mov ecx, esi */
  ecx = esi;
/* 7cb5d4: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x7cb5dau); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 7cb5da: cmp eax, 0x77 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x77u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cb5dd: jl 0x7cb5ed */
  if ((sf != of)) goto L_7cb5ed;
L_7cb5df: /* 7cb5df: lea edx, [edi + 0x58] */
  edx = (uint32_t)(edi + 0x58u);
/* 7cb5e2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7cb5e3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cb5e4: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x7cb5eau); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* 7cb5ea: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7cb5ed: /* 7cb5ed: mov eax, dword ptr [0xcfa408] */
  eax = R32((uint32_t)(0xcfa408u));
/* 7cb5f2: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7cb5f5: jne 0x7cb63a */
  if (!zf) goto L_7cb63a;
L_7cb5f7: /* 7cb5f7: xor ebx, ebx */
  ebx = 0;
/* 7cb5f9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7cb600: /* 7cb600: cmp ebx, dword ptr [edi + 0x38] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x38u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cb603: jge 0x7cb63a */
  if ((sf == of)) goto L_7cb63a;
L_7cb605: /* 7cb605: mov ecx, dword ptr [edi + 0x34] */
  ecx = R32((uint32_t)(edi + 0x34u));
/* 7cb608: cmp dword ptr [ecx + ebx*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + ebx*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7cb60c: je 0x7cb637 */
  if (zf) goto L_7cb637;
L_7cb60e: /* 7cb60e: xor esi, esi */
  esi = 0;
L_7cb610: /* 7cb610: mov edx, dword ptr [edi + 0x34] */
  edx = R32((uint32_t)(edi + 0x34u));
/* 7cb613: mov eax, dword ptr [edx + ebx*4] */
  eax = R32((uint32_t)(edx + ebx*4));
/* 7cb616: cmp esi, dword ptr [eax + 0xb0] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0xb0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cb61c: jge 0x7cb634 */
  if ((sf == of)) goto L_7cb634;
L_7cb61e: /* 7cb61e: mov edx, dword ptr [eax + 0xac] */
  edx = R32((uint32_t)(eax + 0xacu));
/* 7cb624: lea ecx, [esi + esi*4] */
  ecx = (uint32_t)(esi + esi*4);
/* 7cb627: mov eax, dword ptr [edx + ecx*8 + 0x10] */
  eax = R32((uint32_t)(edx + ecx*8 + 0x10u));
/* 7cb62b: lea ecx, [edx + ecx*8 + 0x10] */
  ecx = (uint32_t)(edx + ecx*8 + 0x10u);
/* 7cb62f: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x7cb631u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cb631: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7cb632: jmp 0x7cb610 */
  goto L_7cb610;
L_7cb634: /* 7cb634: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_7cb637: /* 7cb637: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7cb638: jmp 0x7cb600 */
  goto L_7cb600;
L_7cb63a: /* 7cb63a: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7cb63d: mov edx, dword ptr [0xcfa408] */
  edx = R32((uint32_t)(0xcfa408u));
/* 7cb643: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 7cb645: mov ecx, esi */
  ecx = esi;
/* 7cb647: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x7cb64du); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 7cb64d: cmp eax, 0x45 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x45u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cb650: jl 0x7cb693 */
  if ((sf != of)) goto L_7cb693;
L_7cb652: /* 7cb652: lea ebx, [edi + 0x40] */
  ebx = (uint32_t)(edi + 0x40u);
/* 7cb655: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7cb656: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cb657: call 0x6c8904 */
  esp -= 4; W32(esp, 0x7cb65cu); SPILL(); f_6c8904(); if (g_unwind) return; RELOAD();
/* 7cb65c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cb65f: mov ecx, esi */
  ecx = esi;
/* 7cb661: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x7cb667u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 7cb667: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cb669: je 0x7cb672 */
  if (zf) goto L_7cb672;
L_7cb66b: /* 7cb66b: mov ecx, ebx */
  ecx = ebx;
/* 7cb66d: call 0x6c38eb */
  esp -= 4; W32(esp, 0x7cb672u); SPILL(); f_6c38eb(); if (g_unwind) return; RELOAD();
L_7cb672: /* 7cb672: add edi, 0x54 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7cb675: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7cb676: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cb677: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x7cb67du); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* 7cb67d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cb680: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7cb683: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7cb68a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7cb68b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cb68c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7cb68d: mov esp, ebp */
  esp = ebp;
/* 7cb68f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7cb690: ret 4 */
  esp += 8; SPILL(); return;
L_7cb693: /* 7cb693: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7cb696: mov dword ptr [edi + 0x54], 0 */
  W32((uint32_t)(edi + 0x54u), 0x0u);
/* 7cb69d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7cb69e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cb69f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7cb6a6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7cb6a7: mov esp, ebp */
  esp = ebp;
/* 7cb6a9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7cb6aa: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7cb6ad(void) {
  LOAD_REGS();
L_7cb6ad: /* 7cb6ad: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7cb6b0: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7cb6b5: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7cb6b8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cb6b9: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 7cb6bc: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7cb6c1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7cb6c1(); return;
}

void f_7cb6c1(void) {
  LOAD_REGS();
L_7cb6c1: /* 7cb6c1: mov esi, dword ptr [0xcfa1ec] */
  esi = R32((uint32_t)(0xcfa1ecu));
/* 7cb6c7: push 0xa0ec04 */
  { uint32_t v = 0xa0ec04u; esp -= 4; W32(esp, v); }
/* 7cb6cc: push 0xad4618 */
  { uint32_t v = 0xad4618u; esp -= 4; W32(esp, v); }
/* 7cb6d1: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7cb6d3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cb6d3: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7cb6d6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cb6d9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cb6db: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x7cb6e1u); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 7cb6e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cb6e2: push 0xad4620 */
  { uint32_t v = 0xad4620u; esp -= 4; W32(esp, v); }
/* 7cb6e7: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7cb6e9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cb6e9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cb6ec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cb6ee: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cb6f0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7cb6f5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7cb6f5: guest_badaddr(0x7cb6f5); return;
}

void f_7cb7b0(void) {
  LOAD_REGS();
L_7cb7b0: /* 7cb7b0: mov ax, word ptr [esp + 4] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x4u))) & 0xffffu);
/* 7cb7b5: cmp ax, 0x30 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x30u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 7cb7b9: jb 0x7cb7c7 */
  if (cf) goto L_7cb7c7;
L_7cb7bb: /* 7cb7bb: cmp ax, 0x39 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x39u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 7cb7bf: ja 0x7cb7c7 */
  if ((!cf && !zf)) goto L_7cb7c7;
L_7cb7c1: /* 7cb7c1: mov eax, 1 */
  eax = 0x1u;
/* 7cb7c6: ret  */
  esp += 4; SPILL(); return;
L_7cb7c7: /* 7cb7c7: xor eax, eax */
  eax = 0;
/* 7cb7c9: ret  */
  esp += 4; SPILL(); return;
}

void f_7cb7e0(void) {
  LOAD_REGS();
L_7cb7e0: /* 7cb7e0: xor eax, eax */
  eax = 0;
/* 7cb7e2: ret  */
  esp += 4; SPILL(); return;
}

void f_7cb800(void) {
  LOAD_REGS();
L_7cb800: /* 7cb800: jmp 0x6cca40 */
  SPILL(); f_6cca40(); return;
}

void f_7cb820(void) {
  LOAD_REGS();
L_7cb820: /* 7cb820: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7cb824: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7cb828: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7cb82a: cmp edx, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7cb82c: jne 0x7cb84c */
  if (!zf) goto L_7cb84c;
L_7cb82e: /* 7cb82e: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7cb831: cmp edx, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7cb834: jne 0x7cb84c */
  if (!zf) goto L_7cb84c;
L_7cb836: /* 7cb836: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 7cb839: cmp edx, dword ptr [ecx + 8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7cb83c: jne 0x7cb84c */
  if (!zf) goto L_7cb84c;
L_7cb83e: /* 7cb83e: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 7cb841: cmp eax, dword ptr [ecx + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7cb844: jne 0x7cb84c */
  if (!zf) goto L_7cb84c;
L_7cb846: /* 7cb846: mov eax, 1 */
  eax = 0x1u;
/* 7cb84b: ret  */
  esp += 4; SPILL(); return;
L_7cb84c: /* 7cb84c: xor eax, eax */
  eax = 0;
/* 7cb84e: ret  */
  esp += 4; SPILL(); return;
}

void f_7cb860(void) {
  LOAD_REGS();
L_7cb860: /* 7cb860: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7cb864: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 7cb868: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7cb86a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7cb86b: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x7cb86eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cb86e: ret  */
  esp += 4; SPILL(); return;
}

void f_7cb880(void) {
  LOAD_REGS();
L_7cb880: /* 7cb880: mov eax, 0xcf2728 */
  eax = 0xcf2728u;
/* 7cb885: ret  */
  esp += 4; SPILL(); return;
}

void f_7cb8a0(void) {
  LOAD_REGS();
L_7cb8a0: /* 7cb8a0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 7cb8a5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7cb8a7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 7cb8ab: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 7cb8af: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cb8b1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cb8b3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cb8b4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 7cb8b8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cb8ba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7cb8bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cb8bc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cb8bd: push 0xcf2728 */
  { uint32_t v = 0xcf2728u; esp -= 4; W32(esp, v); }
/* 7cb8c2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x7cb8c8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 7cb8c8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cb8cb: ret  */
  esp += 4; SPILL(); return;
}

void f_7cb8e0(void) {
  LOAD_REGS();
L_7cb8e0: /* 7cb8e0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7cb8e4: mov edx, ecx */
  edx = ecx;
/* 7cb8e6: imul edx, edx, 0xed */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0xedu);
  edx = (uint32_t)r;
  }
/* 7cb8ec: mov eax, ecx */
  eax = ecx;
/* 7cb8ee: sar eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 16;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 7cb8f1: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7cb8f3: shl ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 7cb8f6: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7cb8f8: xor eax, 0x93fe92ce */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x93fe92ceu);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7cb8fd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7cb910(void) {
  LOAD_REGS();
L_7cb910: /* 7cb910: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7cb911: mov ebp, esp */
  ebp = esp;
/* 7cb913: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7cb915: push 0x9cfbd0 */
  { uint32_t v = 0x9cfbd0u; esp -= 4; W32(esp, v); }
/* 7cb91a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7cb920: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cb921: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7cb928: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7cb92b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7cb92c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cb92d: mov esi, ecx */
  esi = ecx;
/* 7cb92f: mov eax, dword ptr [esi + 0x110] */
  eax = R32((uint32_t)(esi + 0x110u));
/* 7cb935: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cb937: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7cb938: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7cb93b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7cb942: je 0x7cb94c */
  if (zf) goto L_7cb94c;
L_7cb944: /* 7cb944: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7cb946: call dword ptr [eax + 0xdc] */
  { uint32_t t = R32((uint32_t)(eax + 0xdcu)); esp -= 4; W32(esp, 0x7cb94cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7cb94c: /* 7cb94c: mov dword ptr [esi + 0x108], 0 */
  W32((uint32_t)(esi + 0x108u), 0x0u);
/* 7cb956: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7cb95c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7cb95e: push 0xad4bc8 */
  { uint32_t v = 0xad4bc8u; esp -= 4; W32(esp, v); }
/* 7cb963: push 0x2fb */
  { uint32_t v = 0x2fbu; esp -= 4; W32(esp, v); }
/* 7cb968: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7cb969: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x7cb96fu); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 7cb96f: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 7cb974: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cb977: mov dword ptr [eax + 0x15218], 1 */
  W32((uint32_t)(eax + 0x15218u), 0x1u);
/* 7cb981: call 0x6c560f */
  esp -= 4; W32(esp, 0x7cb986u); SPILL(); f_6c560f(); if (g_unwind) return; RELOAD();
/* 7cb986: mov ecx, esi */
  ecx = esi;
/* 7cb988: call 0x6c7c98 */
  esp -= 4; W32(esp, 0x7cb98du); SPILL(); f_6c7c98(); if (g_unwind) return; RELOAD();
/* 7cb98d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7cb990: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7cb991: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cb992: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7cb999: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7cb99a: mov esp, ebp */
  esp = ebp;
/* 7cb99c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7cb99d: ret  */
  esp += 4; SPILL(); return;
}

void f_7cb99e(void) {
  LOAD_REGS();
L_7cb99e: /* 7cb99e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7cb9a1: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7cb9a6: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7cb9a9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7cb9aa: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7cb9ad: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7cb9b2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7cb9b2(); return;
}

void f_7cb9b2(void) {
  LOAD_REGS();
L_7cb9b2: /* 7cb9b2: push 0xa0ec2c */
  { uint32_t v = 0xa0ec2cu; esp -= 4; W32(esp, v); }
/* 7cb9b7: push 0xad4bf4 */
  { uint32_t v = 0xad4bf4u; esp -= 4; W32(esp, v); }
/* 7cb9bc: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7cb9c2u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7cb9c2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cb9c5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cb9c7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cb9c9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7cb9ceu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7cb9ce: guest_badaddr(0x7cb9ce); return;
}

void f_7cba00(void) {
  LOAD_REGS();
L_7cba00: /* 7cba00: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7cba01: mov ebp, esp */
  ebp = esp;
/* 7cba03: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7cba05: push 0x9cfbe0 */
  { uint32_t v = 0x9cfbe0u; esp -= 4; W32(esp, v); }
/* 7cba0a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7cba10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cba11: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7cba18: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7cba1b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7cba1c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cba1d: mov esi, ecx */
  esi = ecx;
/* 7cba1f: mov eax, dword ptr [esi + 0x110] */
  eax = R32((uint32_t)(esi + 0x110u));
/* 7cba25: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cba27: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7cba28: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7cba2b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7cba32: je 0x7cba82 */
  if (zf) goto L_7cba82;
L_7cba34: /* 7cba34: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* 7cba37: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cba39: je 0x7cba67 */
  if (zf) goto L_7cba67;
L_7cba3b: /* 7cba3b: mov eax, dword ptr [eax + 0x38] */
  eax = R32((uint32_t)(eax + 0x38u));
/* 7cba3e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cba40: je 0x7cba67 */
  if (zf) goto L_7cba67;
L_7cba42: /* 7cba42: mov eax, dword ptr [eax + 0xeb4] */
  eax = R32((uint32_t)(eax + 0xeb4u));
/* 7cba48: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cba4a: je 0x7cba67 */
  if (zf) goto L_7cba67;
L_7cba4c: /* 7cba4c: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7cba4e: mov ecx, eax */
  ecx = eax;
/* 7cba50: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x7cba53u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cba53: mov eax, dword ptr [esi + 0x110] */
  eax = R32((uint32_t)(esi + 0x110u));
/* 7cba59: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 7cba5c: mov ecx, dword ptr [ecx + 0x38] */
  ecx = R32((uint32_t)(ecx + 0x38u));
/* 7cba5f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7cba61: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0x7cba67u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7cba67: /* 7cba67: mov ecx, dword ptr [esi + 0x110] */
  ecx = R32((uint32_t)(esi + 0x110u));
/* 7cba6d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cba6f: je 0x7cba78 */
  if (zf) goto L_7cba78;
L_7cba71: /* 7cba71: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7cba73: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7cba75: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x7cba78u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7cba78: /* 7cba78: mov dword ptr [esi + 0x110], 0 */
  W32((uint32_t)(esi + 0x110u), 0x0u);
L_7cba82: /* 7cba82: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7cba85: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7cba86: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cba87: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7cba8e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7cba8f: mov esp, ebp */
  esp = ebp;
/* 7cba91: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7cba92: ret  */
  esp += 4; SPILL(); return;
}

void f_7cba93(void) {
  LOAD_REGS();
L_7cba93: /* 7cba93: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7cba96: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7cba9b: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7cba9e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7cba9f: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7cbaa2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7cbaa7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7cbaa7(); return;
}

void f_7cbaa7(void) {
  LOAD_REGS();
L_7cbaa7: /* 7cbaa7: push 0xa0ec60 */
  { uint32_t v = 0xa0ec60u; esp -= 4; W32(esp, v); }
/* 7cbaac: push 0xad502c */
  { uint32_t v = 0xad502cu; esp -= 4; W32(esp, v); }
/* 7cbab1: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7cbab7u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7cbab7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cbaba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cbabc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cbabe: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7cbac3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7cbac3: guest_badaddr(0x7cbac3); return;
}

void f_7cbb10(void) {
  LOAD_REGS();
L_7cbb10: /* 7cbb10: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7cbb11: mov ebp, esp */
  ebp = esp;
/* 7cbb13: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7cbb15: push 0x9cfbf0 */
  { uint32_t v = 0x9cfbf0u; esp -= 4; W32(esp, v); }
/* 7cbb1a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7cbb20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cbb21: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7cbb28: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7cbb2b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7cbb2c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cbb2d: mov esi, ecx */
  esi = ecx;
/* 7cbb2f: mov eax, dword ptr [esi + 0x17c] */
  eax = R32((uint32_t)(esi + 0x17cu));
/* 7cbb35: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cbb37: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7cbb38: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7cbb3b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7cbb42: je 0x7cbb8f */
  if (zf) goto L_7cbb8f;
L_7cbb44: /* 7cbb44: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7cbb49: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7cbb4b: push 0xad5234 */
  { uint32_t v = 0xad5234u; esp -= 4; W32(esp, v); }
/* 7cbb50: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cbb51: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7cbb57u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7cbb57: mov edx, dword ptr [0xcfa508] */
  edx = R32((uint32_t)(0xcfa508u));
/* 7cbb5d: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7cbb5f: mov ecx, dword ptr [esi + 0x17c] */
  ecx = R32((uint32_t)(esi + 0x17cu));
/* 7cbb65: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cbb68: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cbb6a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cbb6b: push 0xad5264 */
  { uint32_t v = 0xad5264u; esp -= 4; W32(esp, v); }
/* 7cbb70: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7cbb72: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cbb74: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cbb75: call dword ptr [0xcfa830] */
  esp -= 4; W32(esp, 0x7cbb7bu); SPILL(); f_4e3bac(); if (g_unwind) return; /* Core!?SavePackage@UObject@@SAHPAV1@0KPBGPAVFOutputDevice@@PAVULinkerLoad@@@Z */ RELOAD();
/* 7cbb7b: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cbb7e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7cbb81: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7cbb88: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7cbb89: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cbb8a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7cbb8b: mov esp, ebp */
  esp = ebp;
/* 7cbb8d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7cbb8e: ret  */
  esp += 4; SPILL(); return;
L_7cbb8f: /* 7cbb8f: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 7cbb95: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7cbb97: push 0xad5280 */
  { uint32_t v = 0xad5280u; esp -= 4; W32(esp, v); }
/* 7cbb9c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cbb9d: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7cbba3u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7cbba3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7cbba6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cbba9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7cbbaa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cbbab: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7cbbb2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7cbbb3: mov esp, ebp */
  esp = ebp;
/* 7cbbb5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7cbbb6: ret  */
  esp += 4; SPILL(); return;
}

void f_7cbbb7(void) {
  LOAD_REGS();
L_7cbbb7: /* 7cbbb7: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7cbbba: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7cbbbf: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7cbbc2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7cbbc3: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7cbbc6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7cbbcbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7cbbcb(); return;
}

void f_7cbbcb(void) {
  LOAD_REGS();
L_7cbbcb: /* 7cbbcb: push 0xa0eca0 */
  { uint32_t v = 0xa0eca0u; esp -= 4; W32(esp, v); }
/* 7cbbd0: push 0xad52b8 */
  { uint32_t v = 0xad52b8u; esp -= 4; W32(esp, v); }
/* 7cbbd5: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7cbbdbu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7cbbdb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cbbde: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cbbe0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cbbe2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7cbbe7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7cbbe7: guest_badaddr(0x7cbbe7); return;
}

void f_7cbc30(void) {
  LOAD_REGS();
L_7cbc30: /* 7cbc30: mov ecx, dword ptr [ecx + 0x108] */
  ecx = R32((uint32_t)(ecx + 0x108u));
/* 7cbc36: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cbc38: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x7cbc3eu); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 7cbc3e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cbc3f: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7cbc44: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7cbc46: push 0xad5650 */
  { uint32_t v = 0xad5650u; esp -= 4; W32(esp, v); }
/* 7cbc4b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cbc4c: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7cbc52u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7cbc52: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cbc55: ret  */
  esp += 4; SPILL(); return;
}

void f_7cbc70(void) {
  LOAD_REGS();
L_7cbc70: /* 7cbc70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7cbc71: mov ebp, esp */
  ebp = esp;
/* 7cbc73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7cbc75: push 0x9cfc00 */
  { uint32_t v = 0x9cfc00u; esp -= 4; W32(esp, v); }
/* 7cbc7a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7cbc80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cbc81: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7cbc88: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7cbc8b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7cbc8c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cbc8d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7cbc8e: add ecx, 0x208 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x208u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7cbc94: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7cbc97: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7cbc9e: call dword ptr [0xcfa838] */
  esp -= 4; W32(esp, 0x7cbca4u); SPILL(); f_4e1a0f(); if (g_unwind) return; /* Core!?Empty@FString@@QAEXXZ */ RELOAD();
/* 7cbca4: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7cbca9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7cbcab: push 0xadb7b0 */
  { uint32_t v = 0xadb7b0u; esp -= 4; W32(esp, v); }
/* 7cbcb0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cbcb1: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7cbcb7u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7cbcb7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7cbcba: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cbcbd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7cbcbe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cbcbf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7cbcc6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7cbcc7: mov esp, ebp */
  esp = ebp;
/* 7cbcc9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7cbcca: ret  */
  esp += 4; SPILL(); return;
}

void f_7cbccb(void) {
  LOAD_REGS();
L_7cbccb: /* 7cbccb: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7cbcce: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7cbcd3: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7cbcd6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cbcd7: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7cbcda: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7cbcdfu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7cbcdf(); return;
}

void f_7cbcdf(void) {
  LOAD_REGS();
L_7cbcdf: /* 7cbcdf: push 0xa0ece4 */
  { uint32_t v = 0xa0ece4u; esp -= 4; W32(esp, v); }
/* 7cbce4: push 0xadb7e0 */
  { uint32_t v = 0xadb7e0u; esp -= 4; W32(esp, v); }
/* 7cbce9: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7cbcefu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7cbcef: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cbcf2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cbcf4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cbcf6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7cbcfbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7cbcfb: guest_badaddr(0x7cbcfb); return;
}

void f_7cbd30(void) {
  LOAD_REGS();
L_7cbd30: /* 7cbd30: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7cbd31: mov ebp, esp */
  ebp = esp;
/* 7cbd33: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7cbd35: push 0x9cfc10 */
  { uint32_t v = 0x9cfc10u; esp -= 4; W32(esp, v); }
/* 7cbd3a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7cbd40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cbd41: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7cbd48: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7cbd4b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7cbd4c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cbd4d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7cbd4e: add ecx, 0x214 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x214u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7cbd54: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7cbd57: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7cbd5e: call dword ptr [0xcfa838] */
  esp -= 4; W32(esp, 0x7cbd64u); SPILL(); f_4e1a0f(); if (g_unwind) return; /* Core!?Empty@FString@@QAEXXZ */ RELOAD();
/* 7cbd64: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7cbd67: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7cbd68: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cbd69: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7cbd70: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7cbd71: mov esp, ebp */
  esp = ebp;
/* 7cbd73: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7cbd74: ret  */
  esp += 4; SPILL(); return;
}

void f_7cbd75(void) {
  LOAD_REGS();
L_7cbd75: /* 7cbd75: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7cbd78: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7cbd7d: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7cbd80: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cbd81: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7cbd84: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7cbd89u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7cbd89(); return;
}

void f_7cbd89(void) {
  LOAD_REGS();
L_7cbd89: /* 7cbd89: push 0xa0ed28 */
  { uint32_t v = 0xa0ed28u; esp -= 4; W32(esp, v); }
/* 7cbd8e: push 0xadb7e8 */
  { uint32_t v = 0xadb7e8u; esp -= 4; W32(esp, v); }
/* 7cbd93: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7cbd99u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7cbd99: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cbd9c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cbd9e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cbda0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7cbda5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7cbda5: guest_badaddr(0x7cbda5); return;
}

void f_7cbdd0(void) {
  LOAD_REGS();
L_7cbdd0: /* 7cbdd0: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_7cbdf0(void) {
  LOAD_REGS();
L_7cbdf0: /* 7cbdf0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7cbdf4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cbdf6: je 0x7cbe06 */
  if (zf) goto L_7cbe06;
L_7cbdf8: /* 7cbdf8: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 7cbdfc: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 7cbe00: mov dword ptr [eax + 0x3c], ecx */
  W32((uint32_t)(eax + 0x3cu), ecx);
/* 7cbe03: mov dword ptr [eax + 0x40], edx */
  W32((uint32_t)(eax + 0x40u), edx);
L_7cbe06: /* 7cbe06: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_7cbe20(void) {
  LOAD_REGS();
L_7cbe20: /* 7cbe20: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_7cbe40(void) {
  LOAD_REGS();
L_7cbe40: /* 7cbe40: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_7cbe60(void) {
  LOAD_REGS();
L_7cbe60: /* 7cbe60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7cbe61: mov ebp, esp */
  ebp = esp;
/* 7cbe63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7cbe65: push 0x9cfc4a */
  { uint32_t v = 0x9cfc4au; esp -= 4; W32(esp, v); }
/* 7cbe6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7cbe70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cbe71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7cbe78: sub esp, 0x90 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x90u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7cbe7e: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 7cbe85: mov eax, dword ptr [0xcfa3b0] */
  eax = R32((uint32_t)(0xcfa3b0u));
/* 7cbe8a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7cbe8c: mov eax, dword ptr [0xcfa3b4] */
  eax = R32((uint32_t)(0xcfa3b4u));
/* 7cbe91: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7cbe93: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7cbe95: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7cbe96: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cbe97: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7cbe98: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7cbe9b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cbe9c: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7cbe9f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cbea1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cbea2: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7cbea9: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x7cbeacu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cbeac: mov edi, eax */
  edi = eax;
/* 7cbeae: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cbeb0: jne 0x7cbed7 */
  if (!zf) goto L_7cbed7;
L_7cbeb2: /* 7cbeb2: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7cbeb5: push 0xb81b7c */
  { uint32_t v = 0xb81b7cu; esp -= 4; W32(esp, v); }
/* 7cbeba: mov ecx, esi */
  ecx = esi;
/* 7cbebc: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7cbec2u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
L_7cbec2: /* 7cbec2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7cbec5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7cbec6: mov eax, esi */
  eax = esi;
/* 7cbec8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cbec9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7cbed0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7cbed1: mov esp, ebp */
  esp = ebp;
/* 7cbed3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7cbed4: ret 8 */
  esp += 12; SPILL(); return;
L_7cbed7: /* 7cbed7: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 7cbedd: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7cbedf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7cbee1: push 0xb81b80 */
  { uint32_t v = 0xb81b80u; esp -= 4; W32(esp, v); }
/* 7cbee6: push 0xffff */
  { uint32_t v = 0xffffu; esp -= 4; W32(esp, v); }
/* 7cbeeb: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x7cbeedu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cbeed: mov ebx, eax */
  ebx = eax;
/* 7cbeef: lea eax, [ebp - 0x9c] */
  eax = (uint32_t)(ebp + 0xffffff64u);
/* 7cbef5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cbef6: mov dword ptr [ebp + 0xc], ebx */
  W32((uint32_t)(ebp + 0xcu), ebx);
/* 7cbef9: call dword ptr [0xcfa658] */
  esp -= 4; W32(esp, 0x7cbeffu); SPILL(); f_4e2423(); if (g_unwind) return; /* Core!?appMD5Init@@YAXPAUFMD5Context@@@Z */ RELOAD();
/* 7cbeff: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7cbf02: /* 7cbf02: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7cbf04: mov ecx, edi */
  ecx = edi;
/* 7cbf06: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x7cbf09u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cbf09: mov esi, eax */
  esi = eax;
/* 7cbf0b: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7cbf0d: mov ecx, edi */
  ecx = edi;
/* 7cbf0f: call dword ptr [eax + 0x2c] */
  { uint32_t t = R32((uint32_t)(eax + 0x2cu)); esp -= 4; W32(esp, 0x7cbf12u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cbf12: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cbf14: jge 0x7cbf52 */
  if ((sf == of)) goto L_7cbf52;
L_7cbf16: /* 7cbf16: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7cbf18: mov ecx, edi */
  ecx = edi;
/* 7cbf1a: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x7cbf1du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cbf1d: mov esi, eax */
  esi = eax;
/* 7cbf1f: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7cbf21: mov ecx, edi */
  ecx = edi;
/* 7cbf23: call dword ptr [eax + 0x28] */
  { uint32_t t = R32((uint32_t)(eax + 0x28u)); esp -= 4; W32(esp, 0x7cbf26u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cbf26: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 7cbf28: cmp esi, 0xffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cbf2e: jle 0x7cbf35 */
  if ((zf || sf != of)) goto L_7cbf35;
L_7cbf30: /* 7cbf30: mov esi, 0xffff */
  esi = 0xffffu;
L_7cbf35: /* 7cbf35: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7cbf37: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cbf38: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7cbf39: mov ecx, edi */
  ecx = edi;
/* 7cbf3b: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x7cbf3eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cbf3e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cbf3f: lea eax, [ebp - 0x9c] */
  eax = (uint32_t)(ebp + 0xffffff64u);
/* 7cbf45: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7cbf46: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cbf47: call dword ptr [0xcfa654] */
  esp -= 4; W32(esp, 0x7cbf4du); SPILL(); f_4e41d8(); if (g_unwind) return; /* Core!?appMD5Update@@YAXPAUFMD5Context@@PAEH@Z */ RELOAD();
/* 7cbf4d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cbf50: jmp 0x7cbf02 */
  goto L_7cbf02;
L_7cbf52: /* 7cbf52: lea ecx, [ebp - 0x9c] */
  ecx = (uint32_t)(ebp + 0xffffff64u);
/* 7cbf58: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cbf59: lea edx, [ebp - 0x44] */
  edx = (uint32_t)(ebp + 0xffffffbcu);
/* 7cbf5c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7cbf5d: call dword ptr [0xcfa650] */
  esp -= 4; W32(esp, 0x7cbf63u); SPILL(); f_4e281a(); if (g_unwind) return; /* Core!?appMD5Final@@YAXPAEPAUFMD5Context@@@Z */ RELOAD();
/* 7cbf63: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cbf66: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7cbf69: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7cbf6fu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7cbf6f: mov ebx, dword ptr [0xcfa540] */
  ebx = R32((uint32_t)(0xcfa540u));
/* 7cbf75: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7cbf79: xor esi, esi */
  esi = 0;
/* 7cbf7b: jmp 0x7cbf80 */
  goto L_7cbf80;
L_7cbf80: /* 7cbf80: cmp esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cbf83: jge 0x7cbfb7 */
  if ((sf == of)) goto L_7cbfb7;
L_7cbf85: /* 7cbf85: movzx eax, byte ptr [ebp + esi - 0x44] */
  eax = (uint32_t)(R8((uint32_t)(ebp + esi + 0xffffffbcu)));
/* 7cbf8a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cbf8b: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7cbf8e: push 0xadb840 */
  { uint32_t v = 0xadb840u; esp -= 4; W32(esp, v); }
/* 7cbf93: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cbf94: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7cbf96u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cbf96: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cbf99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cbf9a: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7cbf9d: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7cbfa1: call dword ptr [0xcfa5c0] */
  esp -= 4; W32(esp, 0x7cbfa7u); SPILL(); f_4e3792(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7cbfa7: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7cbfaa: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7cbfae: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7cbfb4u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7cbfb4: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7cbfb5: jmp 0x7cbf80 */
  goto L_7cbf80;
L_7cbfb7: /* 7cbfb7: mov edx, dword ptr [0xcfa1a4] */
  edx = R32((uint32_t)(0xcfa1a4u));
/* 7cbfbd: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7cbfbf: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7cbfc2: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7cbfc4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7cbfc5: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x7cbfc8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cbfc8: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cbfca: je 0x7cbfd4 */
  if (zf) goto L_7cbfd4;
L_7cbfcc: /* 7cbfcc: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7cbfce: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7cbfd0: mov ecx, edi */
  ecx = edi;
/* 7cbfd2: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x7cbfd4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7cbfd4: /* 7cbfd4: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7cbfd7: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7cbfda: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cbfdb: mov ecx, esi */
  ecx = esi;
/* 7cbfdd: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x7cbfe3u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 7cbfe3: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7cbfe6: or eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 7cbfe9: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7cbfec: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7cbfef: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7cbff3: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7cbff9u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7cbff9: jmp 0x7cbec2 */
  goto L_7cbec2;
}

void f_7cbed7(void) {
  LOAD_REGS();
  goto L_7cbed7;
L_7cbec2: /* 7cbec2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7cbec5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7cbec6: mov eax, esi */
  eax = esi;
/* 7cbec8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cbec9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7cbed0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7cbed1: mov esp, ebp */
  esp = ebp;
/* 7cbed3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7cbed4: ret 8 */
  esp += 12; SPILL(); return;
L_7cbed7: /* 7cbed7: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 7cbedd: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7cbedf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7cbee1: push 0xb81b80 */
  { uint32_t v = 0xb81b80u; esp -= 4; W32(esp, v); }
/* 7cbee6: push 0xffff */
  { uint32_t v = 0xffffu; esp -= 4; W32(esp, v); }
/* 7cbeeb: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x7cbeedu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cbeed: mov ebx, eax */
  ebx = eax;
/* 7cbeef: lea eax, [ebp - 0x9c] */
  eax = (uint32_t)(ebp + 0xffffff64u);
/* 7cbef5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cbef6: mov dword ptr [ebp + 0xc], ebx */
  W32((uint32_t)(ebp + 0xcu), ebx);
/* 7cbef9: call dword ptr [0xcfa658] */
  esp -= 4; W32(esp, 0x7cbeffu); SPILL(); f_4e2423(); if (g_unwind) return; /* Core!?appMD5Init@@YAXPAUFMD5Context@@@Z */ RELOAD();
/* 7cbeff: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7cbf02: /* 7cbf02: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7cbf04: mov ecx, edi */
  ecx = edi;
/* 7cbf06: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x7cbf09u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cbf09: mov esi, eax */
  esi = eax;
/* 7cbf0b: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7cbf0d: mov ecx, edi */
  ecx = edi;
/* 7cbf0f: call dword ptr [eax + 0x2c] */
  { uint32_t t = R32((uint32_t)(eax + 0x2cu)); esp -= 4; W32(esp, 0x7cbf12u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cbf12: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cbf14: jge 0x7cbf52 */
  if ((sf == of)) goto L_7cbf52;
L_7cbf16: /* 7cbf16: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7cbf18: mov ecx, edi */
  ecx = edi;
/* 7cbf1a: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x7cbf1du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cbf1d: mov esi, eax */
  esi = eax;
/* 7cbf1f: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7cbf21: mov ecx, edi */
  ecx = edi;
/* 7cbf23: call dword ptr [eax + 0x28] */
  { uint32_t t = R32((uint32_t)(eax + 0x28u)); esp -= 4; W32(esp, 0x7cbf26u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cbf26: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 7cbf28: cmp esi, 0xffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cbf2e: jle 0x7cbf35 */
  if ((zf || sf != of)) goto L_7cbf35;
L_7cbf30: /* 7cbf30: mov esi, 0xffff */
  esi = 0xffffu;
L_7cbf35: /* 7cbf35: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7cbf37: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cbf38: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7cbf39: mov ecx, edi */
  ecx = edi;
/* 7cbf3b: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x7cbf3eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cbf3e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cbf3f: lea eax, [ebp - 0x9c] */
  eax = (uint32_t)(ebp + 0xffffff64u);
/* 7cbf45: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7cbf46: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cbf47: call dword ptr [0xcfa654] */
  esp -= 4; W32(esp, 0x7cbf4du); SPILL(); f_4e41d8(); if (g_unwind) return; /* Core!?appMD5Update@@YAXPAUFMD5Context@@PAEH@Z */ RELOAD();
/* 7cbf4d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cbf50: jmp 0x7cbf02 */
  goto L_7cbf02;
L_7cbf52: /* 7cbf52: lea ecx, [ebp - 0x9c] */
  ecx = (uint32_t)(ebp + 0xffffff64u);
/* 7cbf58: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cbf59: lea edx, [ebp - 0x44] */
  edx = (uint32_t)(ebp + 0xffffffbcu);
/* 7cbf5c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7cbf5d: call dword ptr [0xcfa650] */
  esp -= 4; W32(esp, 0x7cbf63u); SPILL(); f_4e281a(); if (g_unwind) return; /* Core!?appMD5Final@@YAXPAEPAUFMD5Context@@@Z */ RELOAD();
/* 7cbf63: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cbf66: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7cbf69: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7cbf6fu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7cbf6f: mov ebx, dword ptr [0xcfa540] */
  ebx = R32((uint32_t)(0xcfa540u));
/* 7cbf75: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7cbf79: xor esi, esi */
  esi = 0;
/* 7cbf7b: jmp 0x7cbf80 */
  goto L_7cbf80;
L_7cbf80: /* 7cbf80: cmp esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cbf83: jge 0x7cbfb7 */
  if ((sf == of)) goto L_7cbfb7;
L_7cbf85: /* 7cbf85: movzx eax, byte ptr [ebp + esi - 0x44] */
  eax = (uint32_t)(R8((uint32_t)(ebp + esi + 0xffffffbcu)));
/* 7cbf8a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cbf8b: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7cbf8e: push 0xadb840 */
  { uint32_t v = 0xadb840u; esp -= 4; W32(esp, v); }
/* 7cbf93: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cbf94: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7cbf96u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cbf96: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cbf99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cbf9a: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7cbf9d: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7cbfa1: call dword ptr [0xcfa5c0] */
  esp -= 4; W32(esp, 0x7cbfa7u); SPILL(); f_4e3792(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7cbfa7: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7cbfaa: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7cbfae: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7cbfb4u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7cbfb4: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7cbfb5: jmp 0x7cbf80 */
  goto L_7cbf80;
L_7cbfb7: /* 7cbfb7: mov edx, dword ptr [0xcfa1a4] */
  edx = R32((uint32_t)(0xcfa1a4u));
/* 7cbfbd: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7cbfbf: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7cbfc2: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7cbfc4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7cbfc5: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x7cbfc8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cbfc8: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cbfca: je 0x7cbfd4 */
  if (zf) goto L_7cbfd4;
L_7cbfcc: /* 7cbfcc: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7cbfce: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7cbfd0: mov ecx, edi */
  ecx = edi;
/* 7cbfd2: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x7cbfd4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7cbfd4: /* 7cbfd4: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7cbfd7: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7cbfda: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cbfdb: mov ecx, esi */
  ecx = esi;
/* 7cbfdd: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x7cbfe3u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 7cbfe3: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7cbfe6: or eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 7cbfe9: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7cbfec: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7cbfef: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7cbff3: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7cbff9u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7cbff9: jmp 0x7cbec2 */
  goto L_7cbec2;
}

void f_7cbf52(void) {
  LOAD_REGS();
  goto L_7cbf52;
L_7cbec2: /* 7cbec2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7cbec5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7cbec6: mov eax, esi */
  eax = esi;
/* 7cbec8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cbec9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7cbed0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7cbed1: mov esp, ebp */
  esp = ebp;
/* 7cbed3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7cbed4: ret 8 */
  esp += 12; SPILL(); return;
L_7cbf52: /* 7cbf52: lea ecx, [ebp - 0x9c] */
  ecx = (uint32_t)(ebp + 0xffffff64u);
/* 7cbf58: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cbf59: lea edx, [ebp - 0x44] */
  edx = (uint32_t)(ebp + 0xffffffbcu);
/* 7cbf5c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7cbf5d: call dword ptr [0xcfa650] */
  esp -= 4; W32(esp, 0x7cbf63u); SPILL(); f_4e281a(); if (g_unwind) return; /* Core!?appMD5Final@@YAXPAEPAUFMD5Context@@@Z */ RELOAD();
/* 7cbf63: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cbf66: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7cbf69: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7cbf6fu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7cbf6f: mov ebx, dword ptr [0xcfa540] */
  ebx = R32((uint32_t)(0xcfa540u));
/* 7cbf75: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7cbf79: xor esi, esi */
  esi = 0;
/* 7cbf7b: jmp 0x7cbf80 */
  goto L_7cbf80;
L_7cbf80: /* 7cbf80: cmp esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cbf83: jge 0x7cbfb7 */
  if ((sf == of)) goto L_7cbfb7;
L_7cbf85: /* 7cbf85: movzx eax, byte ptr [ebp + esi - 0x44] */
  eax = (uint32_t)(R8((uint32_t)(ebp + esi + 0xffffffbcu)));
/* 7cbf8a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cbf8b: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7cbf8e: push 0xadb840 */
  { uint32_t v = 0xadb840u; esp -= 4; W32(esp, v); }
/* 7cbf93: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cbf94: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7cbf96u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cbf96: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cbf99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cbf9a: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7cbf9d: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7cbfa1: call dword ptr [0xcfa5c0] */
  esp -= 4; W32(esp, 0x7cbfa7u); SPILL(); f_4e3792(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7cbfa7: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7cbfaa: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7cbfae: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7cbfb4u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7cbfb4: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7cbfb5: jmp 0x7cbf80 */
  goto L_7cbf80;
L_7cbfb7: /* 7cbfb7: mov edx, dword ptr [0xcfa1a4] */
  edx = R32((uint32_t)(0xcfa1a4u));
/* 7cbfbd: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7cbfbf: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7cbfc2: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7cbfc4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7cbfc5: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x7cbfc8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cbfc8: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cbfca: je 0x7cbfd4 */
  if (zf) goto L_7cbfd4;
L_7cbfcc: /* 7cbfcc: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7cbfce: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7cbfd0: mov ecx, edi */
  ecx = edi;
/* 7cbfd2: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x7cbfd4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7cbfd4: /* 7cbfd4: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7cbfd7: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7cbfda: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cbfdb: mov ecx, esi */
  ecx = esi;
/* 7cbfdd: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x7cbfe3u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 7cbfe3: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7cbfe6: or eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 7cbfe9: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7cbfec: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7cbfef: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7cbff3: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7cbff9u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7cbff9: jmp 0x7cbec2 */
  goto L_7cbec2;
}

void f_7cbf7d(void) {
  LOAD_REGS();
  goto L_7cbf7d;
L_7cbec2: /* 7cbec2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7cbec5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7cbec6: mov eax, esi */
  eax = esi;
/* 7cbec8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cbec9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7cbed0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7cbed1: mov esp, ebp */
  esp = ebp;
/* 7cbed3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7cbed4: ret 8 */
  esp += 12; SPILL(); return;
L_7cbf7d: /* 7cbf7d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7cbf80: /* 7cbf80: cmp esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cbf83: jge 0x7cbfb7 */
  if ((sf == of)) goto L_7cbfb7;
L_7cbf85: /* 7cbf85: movzx eax, byte ptr [ebp + esi - 0x44] */
  eax = (uint32_t)(R8((uint32_t)(ebp + esi + 0xffffffbcu)));
/* 7cbf8a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cbf8b: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7cbf8e: push 0xadb840 */
  { uint32_t v = 0xadb840u; esp -= 4; W32(esp, v); }
/* 7cbf93: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cbf94: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7cbf96u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cbf96: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cbf99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cbf9a: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7cbf9d: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7cbfa1: call dword ptr [0xcfa5c0] */
  esp -= 4; W32(esp, 0x7cbfa7u); SPILL(); f_4e3792(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7cbfa7: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7cbfaa: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7cbfae: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7cbfb4u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7cbfb4: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7cbfb5: jmp 0x7cbf80 */
  goto L_7cbf80;
L_7cbfb7: /* 7cbfb7: mov edx, dword ptr [0xcfa1a4] */
  edx = R32((uint32_t)(0xcfa1a4u));
/* 7cbfbd: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7cbfbf: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7cbfc2: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7cbfc4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7cbfc5: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x7cbfc8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cbfc8: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cbfca: je 0x7cbfd4 */
  if (zf) goto L_7cbfd4;
L_7cbfcc: /* 7cbfcc: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7cbfce: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7cbfd0: mov ecx, edi */
  ecx = edi;
/* 7cbfd2: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x7cbfd4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7cbfd4: /* 7cbfd4: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7cbfd7: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7cbfda: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cbfdb: mov ecx, esi */
  ecx = esi;
/* 7cbfdd: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x7cbfe3u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 7cbfe3: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7cbfe6: or eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 7cbfe9: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7cbfec: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7cbfef: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7cbff3: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7cbff9u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7cbff9: jmp 0x7cbec2 */
  goto L_7cbec2;
}

void f_7cbffe(void) {
  LOAD_REGS();
L_7cbffe: /* 7cbffe: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7cc001: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7cc006: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 7cc009: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cc00a: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 7cc00d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7cc012u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7cc012(); return;
}

void f_7cc012(void) {
  LOAD_REGS();
L_7cc012: /* 7cc012: push 0xa0ed6c */
  { uint32_t v = 0xa0ed6cu; esp -= 4; W32(esp, v); }
/* 7cc017: push 0xadb84c */
  { uint32_t v = 0xadb84cu; esp -= 4; W32(esp, v); }
/* 7cc01c: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7cc022u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7cc022: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cc025: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cc027: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cc029: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7cc02eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7cc02e: guest_badaddr(0x7cc02e); return;
}

void f_7cc0b0(void) {
  LOAD_REGS();
L_7cc0b0: /* 7cc0b0: inc dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ecx + 0x4u), r);
  }
/* 7cc0b3: ret  */
  esp += 4; SPILL(); return;
}

void f_7cc0d0(void) {
  LOAD_REGS();
L_7cc0d0: /* 7cc0d0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7cc0d2: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 7cc0d5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cc0d6: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 7cc0d9: xor edx, edx */
  edx = 0;
/* 7cc0db: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cc0dd: setl dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)(((sf != of)) ? 1 : 0) & 0xffu);
/* 7cc0e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cc0e1: mov eax, edx */
  eax = edx;
/* 7cc0e3: ret  */
  esp += 4; SPILL(); return;
}

void f_7cc100(void) {
  LOAD_REGS();
L_7cc100: /* 7cc100: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7cc103: ret  */
  esp += 4; SPILL(); return;
}

void f_7cc120(void) {
  LOAD_REGS();
L_7cc120: /* 7cc120: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cc121: mov esi, ecx */
  esi = ecx;
/* 7cc123: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7cc129u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7cc129: mov eax, esi */
  eax = esi;
/* 7cc12b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cc12c: ret  */
  esp += 4; SPILL(); return;
}

void f_7cc140(void) {
  LOAD_REGS();
L_7cc140: /* 7cc140: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cc141: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cc143: mov esi, ecx */
  esi = ecx;
/* 7cc145: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x7cc14bu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 7cc14b: mov eax, esi */
  eax = esi;
/* 7cc14d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cc14e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7cc170(void) {
  LOAD_REGS();
L_7cc170: /* 7cc170: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7cc172: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7cc176: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 7cc179: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7cc190(void) {
  LOAD_REGS();
L_7cc190: /* 7cc190: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7cc194: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7cc196: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cc197: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7cc19du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7cc19d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7cc1b0(void) {
  LOAD_REGS();
L_7cc1b0: /* 7cc1b0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7cc1b2: push 0x9cfc7c */
  { uint32_t v = 0x9cfc7cu; esp -= 4; W32(esp, v); }
/* 7cc1b7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7cc1bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cc1be: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7cc1c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cc1c6: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 7cc1ca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cc1cb: mov esi, ecx */
  esi = ecx;
/* 7cc1cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cc1ce: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 7cc1d1: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 7cc1d5: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7cc1dbu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7cc1db: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 7cc1df: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cc1e0: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 7cc1e3: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 7cc1eb: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7cc1f1u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7cc1f1: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7cc1f5: mov eax, esi */
  eax = esi;
/* 7cc1f7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cc1f8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7cc1ff: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cc202: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7cc230(void) {
  LOAD_REGS();
L_7cc230: /* 7cc230: mov eax, 1 */
  eax = 0x1u;
/* 7cc235: ret  */
  esp += 4; SPILL(); return;
}

void f_7cc250(void) {
  LOAD_REGS();
L_7cc250: /* 7cc250: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 7cc254: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7cc258: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7cc25a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cc25b: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 7cc25d: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7cc25f: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 7cc261: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cc262: ret  */
  esp += 4; SPILL(); return;
}

void f_7cc280(void) {
  LOAD_REGS();
L_7cc280: /* 7cc280: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 7cc284: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7cc288: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 7cc28c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cc28d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cc28e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7cc28f: call dword ptr [0xcfa800] */
  esp -= 4; W32(esp, 0x7cc295u); SPILL(); f_4e1415(); if (g_unwind) return; /* Core!?StaticClass@UClass@@SAPAV1@XZ */ RELOAD();
/* 7cc295: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cc296: call dword ptr [0xcfa8a4] */
  esp -= 4; W32(esp, 0x7cc29cu); SPILL(); f_4e3c65(); if (g_unwind) return; /* Core!?StaticFindObject@UObject@@SAPAV1@PAVUClass@@PAV1@PBGH@Z */ RELOAD();
/* 7cc29c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cc29f: ret  */
  esp += 4; SPILL(); return;
}

void f_7cc2b0(void) {
  LOAD_REGS();
L_7cc2b0: /* 7cc2b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cc2b1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 7cc2b5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cc2b7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7cc2b8: je 0x7cc2d9 */
  if (zf) goto L_7cc2d9;
L_7cc2ba: /* 7cc2ba: mov eax, dword ptr [0xcfa8a8] */
  eax = R32((uint32_t)(0xcfa8a8u));
/* 7cc2bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cc2c0: mov ecx, esi */
  ecx = esi;
/* 7cc2c2: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7cc2c8u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7cc2c8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cc2ca: jne 0x7cc303 */
  if (!zf) goto L_7cc303;
L_7cc2cc: /* 7cc2cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cc2cd: mov ecx, esi */
  ecx = esi;
/* 7cc2cf: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x7cc2d5u); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 7cc2d5: mov edi, eax */
  edi = eax;
/* 7cc2d7: jmp 0x7cc2de */
  goto L_7cc2de;
L_7cc2d9: /* 7cc2d9: mov edi, 0xadba00 */
  edi = 0xadba00u;
L_7cc2de: /* 7cc2de: mov ecx, dword ptr [0xcfa8a8] */
  ecx = R32((uint32_t)(0xcfa8a8u));
/* 7cc2e4: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7cc2eau); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7cc2ea: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 7cc2f0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7cc2f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cc2f3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7cc2f4: push 0xadba0c */
  { uint32_t v = 0xadba0cu; esp -= 4; W32(esp, v); }
/* 7cc2f9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7cc2fa: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7cc300u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7cc300: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7cc303: /* 7cc303: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7cc304: mov eax, esi */
  eax = esi;
/* 7cc306: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cc307: ret  */
  esp += 4; SPILL(); return;
}

void f_7cc330(void) {
  LOAD_REGS();
L_7cc330: /* 7cc330: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 7cc334: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7cc338: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 7cc33c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cc33d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cc33e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7cc33f: call dword ptr [0xcfa800] */
  esp -= 4; W32(esp, 0x7cc345u); SPILL(); f_4e1415(); if (g_unwind) return; /* Core!?StaticClass@UClass@@SAPAV1@XZ */ RELOAD();
/* 7cc345: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cc346: call dword ptr [0xcfa5f8] */
  esp -= 4; W32(esp, 0x7cc34cu); SPILL(); f_4e2252(); if (g_unwind) return; /* Core!?StaticFindObjectChecked@UObject@@SAPAV1@PAVUClass@@PAV1@PBGH@Z */ RELOAD();
/* 7cc34c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cc34f: ret  */
  esp += 4; SPILL(); return;
}

void f_7cc360(void) {
  LOAD_REGS();
L_7cc360: /* 7cc360: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cc361: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 7cc365: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cc367: je 0x7cc380 */
  if (zf) goto L_7cc380;
L_7cc369: /* 7cc369: call dword ptr [0xcfa8ac] */
  esp -= 4; W32(esp, 0x7cc36fu); SPILL(); f_4e36bb(); if (g_unwind) return; /* Core!?StaticClass@UObjectProperty@@SAPAVUClass@@XZ */ RELOAD();
/* 7cc36f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cc370: mov ecx, esi */
  ecx = esi;
/* 7cc372: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7cc378u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7cc378: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cc37a: je 0x7cc380 */
  if (zf) goto L_7cc380;
L_7cc37c: /* 7cc37c: mov eax, esi */
  eax = esi;
/* 7cc37e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cc37f: ret  */
  esp += 4; SPILL(); return;
L_7cc380: /* 7cc380: xor eax, eax */
  eax = 0;
/* 7cc382: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cc383: ret  */
  esp += 4; SPILL(); return;
}

void f_7cc3a0(void) {
  LOAD_REGS();
L_7cc3a0: /* 7cc3a0: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 7cc3a3: xor eax, eax */
  eax = 0;
/* 7cc3a5: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cc3a7: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 7cc3aa: ret  */
  esp += 4; SPILL(); return;
}

void f_7cc3c0(void) {
  LOAD_REGS();
L_7cc3c0: /* 7cc3c0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7cc3c3: ret  */
  esp += 4; SPILL(); return;
}

void f_7cc3e0(void) {
  LOAD_REGS();
L_7cc3e0: /* 7cc3e0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7cc3e3: ret  */
  esp += 4; SPILL(); return;
}

void f_7cc400(void) {
  LOAD_REGS();
L_7cc400: /* 7cc400: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cc401: mov esi, ecx */
  esi = ecx;
/* 7cc403: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7cc406: je 0x7cc44b */
  if (zf) goto L_7cc44b;
L_7cc408: /* 7cc408: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7cc40b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cc40d: je 0x7cc433 */
  if (zf) goto L_7cc433;
L_7cc40f: /* 7cc40f: nop  */
L_7cc410: /* 7cc410: call dword ptr [0xcfa5fc] */
  esp -= 4; W32(esp, 0x7cc416u); SPILL(); f_4e374c(); if (g_unwind) return; /* Core!?StaticClass@UProperty@@SAPAVUClass@@XZ */ RELOAD();
/* 7cc416: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7cc419: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cc41a: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7cc420u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7cc420: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cc422: jne 0x7cc44b */
  if (!zf) goto L_7cc44b;
L_7cc424: /* 7cc424: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7cc427: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7cc42a: mov eax, ecx */
  eax = ecx;
/* 7cc42c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cc42e: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 7cc431: jne 0x7cc410 */
  if (!zf) goto L_7cc410;
L_7cc433: /* 7cc433: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7cc435: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7cc437: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0x7cc43au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cc43a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cc43c: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 7cc43e: je 0x7cc446 */
  if (zf) goto L_7cc446;
L_7cc440: /* 7cc440: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* 7cc443: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
L_7cc446: /* 7cc446: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7cc449: jne 0x7cc408 */
  if (!zf) goto L_7cc408;
L_7cc44b: /* 7cc44b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cc44c: ret  */
  esp += 4; SPILL(); return;
}

void f_7cc470(void) {
  LOAD_REGS();
L_7cc470: /* 7cc470: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7cc474: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 7cc478: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7cc47a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7cc47b: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x7cc47eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cc47e: ret  */
  esp += 4; SPILL(); return;
}

void f_7cc490(void) {
  LOAD_REGS();
L_7cc490: /* 7cc490: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 7cc495: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7cc497: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 7cc49b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 7cc49f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cc4a1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cc4a3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cc4a4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 7cc4a8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cc4aa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7cc4ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cc4ac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cc4ad: push 0xb7eb78 */
  { uint32_t v = 0xb7eb78u; esp -= 4; W32(esp, v); }
/* 7cc4b2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x7cc4b8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 7cc4b8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cc4bb: ret  */
  esp += 4; SPILL(); return;
}

void f_7cc4d0(void) {
  LOAD_REGS();
L_7cc4d0: /* 7cc4d0: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 7cc4d3: xor eax, eax */
  eax = 0;
/* 7cc4d5: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cc4d7: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 7cc4da: ret  */
  esp += 4; SPILL(); return;
}

void f_7cc4f0(void) {
  LOAD_REGS();
L_7cc4f0: /* 7cc4f0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7cc4f3: ret  */
  esp += 4; SPILL(); return;
}

void f_7cc510(void) {
  LOAD_REGS();
L_7cc510: /* 7cc510: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7cc511: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7cc512: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 7cc518: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cc519: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7cc51a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 7cc51e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7cc520: mov esi, ecx */
  esi = ecx;
/* 7cc522: jge 0x7cc538 */
  if ((sf == of)) goto L_7cc538;
L_7cc524: /* 7cc524: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 7cc529: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7cc52e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 7cc533: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7cc535u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cc535: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7cc538: /* 7cc538: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cc53b: jle 0x7cc551 */
  if ((zf || sf != of)) goto L_7cc551;
L_7cc53d: /* 7cc53d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7cc542: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7cc547: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7cc54c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7cc54eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cc54e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7cc551: /* 7cc551: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 7cc555: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7cc558: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 7cc55b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cc55d: jle 0x7cc573 */
  if ((zf || sf != of)) goto L_7cc573;
L_7cc55f: /* 7cc55f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7cc564: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7cc569: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7cc56e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7cc570u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cc570: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7cc573: /* 7cc573: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7cc575: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7cc576: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7cc577: mov ecx, esi */
  ecx = esi;
/* 7cc579: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7cc57fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7cc57f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7cc580: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cc581: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7cc582: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7cc583: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7cc5b0(void) {
  LOAD_REGS();
L_7cc5b0: /* 7cc5b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cc5b1: mov esi, ecx */
  esi = ecx;
/* 7cc5b3: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7cc5b6: je 0x7cc600 */
  if (zf) goto L_7cc600;
L_7cc5b8: /* 7cc5b8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7cc5b9: mov edi, 0x8000 */
  edi = 0x8000u;
/* 7cc5be: mov edi, edi */
  edi = edi;
L_7cc5c0: /* 7cc5c0: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7cc5c3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cc5c5: je 0x7cc5e7 */
  if (zf) goto L_7cc5e7;
L_7cc5c7: /* 7cc5c7: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7cc5ca: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7cc5d0u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7cc5d0: test dword ptr [eax + 0x498], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x498u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cc5d6: jne 0x7cc5ff */
  if (!zf) goto L_7cc5ff;
L_7cc5d8: /* 7cc5d8: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7cc5db: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7cc5de: mov eax, ecx */
  eax = ecx;
/* 7cc5e0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cc5e2: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 7cc5e5: jne 0x7cc5c7 */
  if (!zf) goto L_7cc5c7;
L_7cc5e7: /* 7cc5e7: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7cc5e9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7cc5eb: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0x7cc5eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cc5ee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cc5f0: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 7cc5f2: je 0x7cc5fa */
  if (zf) goto L_7cc5fa;
L_7cc5f4: /* 7cc5f4: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* 7cc5f7: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
L_7cc5fa: /* 7cc5fa: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7cc5fd: jne 0x7cc5c0 */
  if (!zf) goto L_7cc5c0;
L_7cc5ff: /* 7cc5ff: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_7cc600: /* 7cc600: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cc601: ret  */
  esp += 4; SPILL(); return;
}

void f_7cc630(void) {
  LOAD_REGS();
L_7cc630: /* 7cc630: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7cc634: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7cc636: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 7cc639: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 7cc63c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7cc650(void) {
  LOAD_REGS();
L_7cc650: /* 7cc650: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7cc651: mov ebp, esp */
  ebp = esp;
/* 7cc653: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7cc655: push 0x9cfc90 */
  { uint32_t v = 0x9cfc90u; esp -= 4; W32(esp, v); }
/* 7cc65a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7cc660: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cc661: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7cc668: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7cc66b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7cc66c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cc66d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7cc66e: mov edi, ecx */
  edi = ecx;
/* 7cc670: mov eax, dword ptr [edi + 0x30] */
  eax = R32((uint32_t)(edi + 0x30u));
/* 7cc673: xor ebx, ebx */
  ebx = 0;
/* 7cc675: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7cc677: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7cc67a: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7cc67d: je 0x7cc6f8 */
  if (zf) goto L_7cc6f8;
L_7cc67f: /* 7cc67f: cmp dword ptr [eax + 0x30], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x30u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7cc682: je 0x7cc6f8 */
  if (zf) goto L_7cc6f8;
L_7cc684: /* 7cc684: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7cc687: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 7cc689: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7cc68b: je 0x7cc6f8 */
  if (zf) goto L_7cc6f8;
L_7cc68d: /* 7cc68d: mov ecx, dword ptr [esi + 0x68] */
  ecx = R32((uint32_t)(esi + 0x68u));
/* 7cc690: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7cc692: je 0x7cc6f8 */
  if (zf) goto L_7cc6f8;
L_7cc694: /* 7cc694: cmp dword ptr [esi + 0x148], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x148u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7cc69a: je 0x7cc6f8 */
  if (zf) goto L_7cc6f8;
L_7cc69c: /* 7cc69c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7cc69e: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0x7cc6a1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cc6a1: mov ecx, dword ptr [esi + 0x148] */
  ecx = R32((uint32_t)(esi + 0x148u));
/* 7cc6a7: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7cc6a9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7cc6aa: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7cc6ac: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 7cc6b1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7cc6b3: mov byte ptr [ebp - 0x14], bl */
  W8((uint32_t)(ebp + 0xffffffecu), (ebx & 0xffu));
/* 7cc6b6: mov byte ptr [ebp - 0x13], bl */
  W8((uint32_t)(ebp + 0xffffffedu), (ebx & 0xffu));
/* 7cc6b9: mov byte ptr [ebp - 0x12], bl */
  W8((uint32_t)(ebp + 0xffffffeeu), (ebx & 0xffu));
/* 7cc6bc: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 7cc6c0: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7cc6c3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7cc6c4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7cc6c5: call dword ptr [eax + 0x10] */
  { uint32_t t = R32((uint32_t)(eax + 0x10u)); esp -= 4; W32(esp, 0x7cc6c8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cc6c8: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7cc6ca: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7cc6cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7cc6cc: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7cc6ce: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cc6cf: mov ecx, edi */
  ecx = edi;
/* 7cc6d1: call dword ptr [eax + 0x88] */
  { uint32_t t = R32((uint32_t)(eax + 0x88u)); esp -= 4; W32(esp, 0x7cc6d7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cc6d7: mov ecx, dword ptr [esi + 0x68] */
  ecx = R32((uint32_t)(esi + 0x68u));
/* 7cc6da: mov ecx, dword ptr [ecx + 0x9c] */
  ecx = R32((uint32_t)(ecx + 0x9cu));
/* 7cc6e0: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7cc6e2: je 0x7cc6e9 */
  if (zf) goto L_7cc6e9;
L_7cc6e4: /* 7cc6e4: call 0x6c6a00 */
  esp -= 4; W32(esp, 0x7cc6e9u); SPILL(); f_6c6a00(); if (g_unwind) return; RELOAD();
L_7cc6e9: /* 7cc6e9: cmp dword ptr [esi + 0x158], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x158u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7cc6ef: je 0x7cc6f8 */
  if (zf) goto L_7cc6f8;
L_7cc6f1: /* 7cc6f1: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7cc6f3: mov ecx, esi */
  ecx = esi;
/* 7cc6f5: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x7cc6f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7cc6f8: /* 7cc6f8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7cc6fb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7cc6fc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cc6fd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7cc704: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7cc705: mov esp, ebp */
  esp = ebp;
/* 7cc707: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7cc708: ret  */
  esp += 4; SPILL(); return;
}

void f_7cc709(void) {
  LOAD_REGS();
L_7cc709: /* 7cc709: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7cc70c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7cc711: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7cc714: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cc715: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7cc718: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7cc71du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7cc71d(); return;
}

void f_7cc71d(void) {
  LOAD_REGS();
L_7cc71d: /* 7cc71d: push 0xa0eda8 */
  { uint32_t v = 0xa0eda8u; esp -= 4; W32(esp, v); }
/* 7cc722: push 0xad4658 */
  { uint32_t v = 0xad4658u; esp -= 4; W32(esp, v); }
/* 7cc727: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7cc72du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7cc72d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cc730: xor ebx, ebx */
  ebx = 0;
/* 7cc732: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7cc733: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7cc734: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7cc739u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7cc739: guest_badaddr(0x7cc739); return;
}

void f_7cc780(void) {
  LOAD_REGS();
L_7cc780: /* 7cc780: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7cc781: mov ebp, esp */
  ebp = esp;
/* 7cc783: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7cc785: push 0x9cfca0 */
  { uint32_t v = 0x9cfca0u; esp -= 4; W32(esp, v); }
/* 7cc78a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7cc790: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cc791: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7cc798: sub esp, 0x40c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7cc79e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7cc79f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cc7a0: mov esi, ecx */
  esi = ecx;
/* 7cc7a2: mov ecx, dword ptr [esi + 0x110] */
  ecx = R32((uint32_t)(esi + 0x110u));
/* 7cc7a8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cc7aa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7cc7ab: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7cc7ae: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7cc7b5: je 0x7cc8c2 */
  if (zf) goto L_7cc8c2;
L_7cc7bb: /* 7cc7bb: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 7cc7be: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cc7c0: je 0x7cc8c2 */
  if (zf) goto L_7cc8c2;
L_7cc7c6: /* 7cc7c6: mov edx, dword ptr [eax + 0x30] */
  edx = R32((uint32_t)(eax + 0x30u));
/* 7cc7c9: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cc7cb: je 0x7cc8c2 */
  if (zf) goto L_7cc8c2;
L_7cc7d1: /* 7cc7d1: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7cc7d4: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7cc7d6: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 7cc7d9: mov edx, dword ptr [eax + 0xb0] */
  edx = R32((uint32_t)(eax + 0xb0u));
/* 7cc7df: fld dword ptr [eax + 0x6d0] */
  { double v = F32((uint32_t)(eax + 0x6d0u)); FPUSH(v); }
/* 7cc7e5: fcomp dword ptr [edx + 0x3ac] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x3acu)));
  FPOP();
/* 7cc7eb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7cc7ed: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7cc7f0: jp 0x7cc8c2 */
  if (pf) goto L_7cc8c2;
L_7cc7f6: /* 7cc7f6: mov eax, dword ptr [ecx + 0x88] */
  eax = R32((uint32_t)(ecx + 0x88u));
/* 7cc7fc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cc7fe: je 0x7cc835 */
  if (zf) goto L_7cc835;
L_7cc800: /* 7cc800: mov edi, dword ptr [0xcfa8b4] */
  edi = R32((uint32_t)(0xcfa8b4u));
/* 7cc806: lea eax, [ebp - 0x418] */
  eax = (uint32_t)(ebp + 0xfffffbe8u);
/* 7cc80c: push 0xb81b00 */
  { uint32_t v = 0xb81b00u; esp -= 4; W32(esp, v); }
/* 7cc811: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cc812: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7cc814u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cc814: mov ecx, dword ptr [esi + 0x110] */
  ecx = R32((uint32_t)(esi + 0x110u));
/* 7cc81a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cc81d: add ecx, 0x60 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7cc820: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7cc826u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7cc826: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cc827: lea ecx, [ebp - 0x218] */
  ecx = (uint32_t)(ebp + 0xfffffde8u);
/* 7cc82d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cc82e: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7cc830u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cc830: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cc833: jmp 0x7cc8a5 */
  goto L_7cc8a5;
L_7cc835: /* 7cc835: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cc837: push 0xad4668 */
  { uint32_t v = 0xad4668u; esp -= 4; W32(esp, v); }
/* 7cc83c: push 0xad4678 */
  { uint32_t v = 0xad4678u; esp -= 4; W32(esp, v); }
/* 7cc841: call dword ptr [0xcfa8b0] */
  esp -= 4; W32(esp, 0x7cc847u); SPILL(); f_4e1b04(); if (g_unwind) return; /* Core!?LocalizeProgress@@YAPBGPBG00@Z */ RELOAD();
/* 7cc847: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cc84a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cc84b: lea edx, [ebp - 0x418] */
  edx = (uint32_t)(ebp + 0xfffffbe8u);
/* 7cc851: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7cc852: call dword ptr [0xcfa8b4] */
  esp -= 4; W32(esp, 0x7cc858u); SPILL(); f_4e4183(); if (g_unwind) return; /* Core!?appSprintf@@YAHPAGPBGZZ */ RELOAD();
/* 7cc858: mov ecx, dword ptr [esi + 0x110] */
  ecx = R32((uint32_t)(esi + 0x110u));
/* 7cc85e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cc861: add ecx, 0x60 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7cc864: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7cc86au); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7cc86a: mov ecx, dword ptr [esi + 0x110] */
  ecx = R32((uint32_t)(esi + 0x110u));
/* 7cc870: add ecx, 0x50 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7cc873: mov ebx, eax */
  ebx = eax;
/* 7cc875: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7cc87bu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7cc87b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cc87d: push 0xad4698 */
  { uint32_t v = 0xad4698u; esp -= 4; W32(esp, v); }
/* 7cc882: push 0xad46a8 */
  { uint32_t v = 0xad46a8u; esp -= 4; W32(esp, v); }
/* 7cc887: mov edi, eax */
  edi = eax;
/* 7cc889: call dword ptr [0xcfa8b0] */
  esp -= 4; W32(esp, 0x7cc88fu); SPILL(); f_4e1b04(); if (g_unwind) return; /* Core!?LocalizeProgress@@YAPBGPBG00@Z */ RELOAD();
/* 7cc88f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cc892: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7cc893: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7cc894: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cc895: lea eax, [ebp - 0x218] */
  eax = (uint32_t)(ebp + 0xfffffde8u);
/* 7cc89b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cc89c: call dword ptr [0xcfa8b4] */
  esp -= 4; W32(esp, 0x7cc8a2u); SPILL(); f_4e4183(); if (g_unwind) return; /* Core!?appSprintf@@YAHPAGPBGZZ */ RELOAD();
/* 7cc8a2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7cc8a5: /* 7cc8a5: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7cc8a7: push 0x42700000 */
  { uint32_t v = 0x42700000u; esp -= 4; W32(esp, v); }
/* 7cc8ac: lea eax, [ebp - 0x218] */
  eax = (uint32_t)(ebp + 0xfffffde8u);
/* 7cc8b2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cc8b3: lea ecx, [ebp - 0x418] */
  ecx = (uint32_t)(ebp + 0xfffffbe8u);
/* 7cc8b9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cc8ba: mov ecx, esi */
  ecx = esi;
/* 7cc8bc: call dword ptr [edx + 0xac] */
  { uint32_t t = R32((uint32_t)(edx + 0xacu)); esp -= 4; W32(esp, 0x7cc8c2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7cc8c2: /* 7cc8c2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7cc8c5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7cc8c6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cc8c7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7cc8ce: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7cc8cf: mov esp, ebp */
  esp = ebp;
/* 7cc8d1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7cc8d2: ret  */
  esp += 4; SPILL(); return;
}

void f_7cc8d3(void) {
  LOAD_REGS();
L_7cc8d3: /* 7cc8d3: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7cc8d6: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7cc8db: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7cc8de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cc8df: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7cc8e2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7cc8e7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7cc8e7(); return;
}

void f_7cc8e7(void) {
  LOAD_REGS();
L_7cc8e7: /* 7cc8e7: push 0xa0edd0 */
  { uint32_t v = 0xa0edd0u; esp -= 4; W32(esp, v); }
/* 7cc8ec: push 0xad46c4 */
  { uint32_t v = 0xad46c4u; esp -= 4; W32(esp, v); }
/* 7cc8f1: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7cc8f7u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7cc8f7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cc8fa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cc8fc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cc8fe: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7cc903u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7cc903: guest_badaddr(0x7cc903); return;
}

void f_7cc980(void) {
  LOAD_REGS();
L_7cc980: /* 7cc980: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7cc981: mov ebx, ecx */
  ebx = ecx;
/* 7cc983: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7cc989: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 7cc98c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7cc98d: xor edi, edi */
  edi = 0;
/* 7cc98f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7cc991: jle 0x7cc9cc */
  if ((zf || sf != of)) goto L_7cc9cc;
L_7cc993: /* 7cc993: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7cc994: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_7cc995: /* 7cc995: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7cc998: mov esi, dword ptr [eax + edi*4] */
  esi = R32((uint32_t)(eax + edi*4));
/* 7cc99b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cc99d: je 0x7cc9bc */
  if (zf) goto L_7cc9bc;
L_7cc99f: /* 7cc99f: mov ecx, dword ptr [0xb7e558] */
  ecx = R32((uint32_t)(0xb7e558u));
/* 7cc9a5: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* 7cc9a7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cc9a9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cc9ab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cc9ad: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cc9ae: mov ecx, esi */
  ecx = esi;
/* 7cc9b0: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7cc9b6u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7cc9b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cc9b7: mov ecx, esi */
  ecx = esi;
/* 7cc9b9: call dword ptr [ebp + 0x10] */
  { uint32_t t = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, 0x7cc9bcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7cc9bc: /* 7cc9bc: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7cc9c2: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 7cc9c5: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7cc9c6: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cc9c8: jl 0x7cc995 */
  if ((sf != of)) goto L_7cc995;
L_7cc9ca: /* 7cc9ca: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cc9cb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_7cc9cc: /* 7cc9cc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7cc9cd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7cc9ce: ret  */
  esp += 4; SPILL(); return;
}

void f_7cc9f0(void) {
  LOAD_REGS();
L_7cc9f0: /* 7cc9f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7cc9f1: mov ebp, esp */
  ebp = esp;
/* 7cc9f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7cc9f5: push 0x9cfcb0 */
  { uint32_t v = 0x9cfcb0u; esp -= 4; W32(esp, v); }
/* 7cc9fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7cca00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cca01: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7cca08: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7cca0b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7cca0c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cca0d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7cca0e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 7cca11: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7cca14: mov esi, ecx */
  esi = ecx;
/* 7cca16: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7cca17: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 7cca1a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7cca21: call 0x6c2572 */
  esp -= 4; W32(esp, 0x7cca26u); SPILL(); f_6c2572(); if (g_unwind) return; RELOAD();
/* 7cca26: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7cca28: lea ecx, [esi + 0x108] */
  ecx = (uint32_t)(esi + 0x108u);
/* 7cca2e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cca2f: mov ecx, edi */
  ecx = edi;
/* 7cca31: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x7cca34u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cca34: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7cca36: lea ecx, [esi + 0x10c] */
  ecx = (uint32_t)(esi + 0x10cu);
/* 7cca3c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cca3d: mov ecx, eax */
  ecx = eax;
/* 7cca3f: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x7cca42u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cca42: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7cca44: add esi, 0x110 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x110u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7cca4a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cca4b: mov ecx, eax */
  ecx = eax;
/* 7cca4d: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x7cca50u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cca50: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7cca53: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7cca54: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cca55: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7cca5c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7cca5d: mov esp, ebp */
  esp = ebp;
/* 7cca5f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7cca60: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7cca63(void) {
  LOAD_REGS();
L_7cca63: /* 7cca63: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7cca66: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7cca6b: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7cca6e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cca6f: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7cca72: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7cca77u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7cca77(); return;
}

void f_7cca77(void) {
  LOAD_REGS();
L_7cca77: /* 7cca77: mov esi, dword ptr [0xcfa1ec] */
  esi = R32((uint32_t)(0xcfa1ecu));
/* 7cca7d: push 0xa0ee28 */
  { uint32_t v = 0xa0ee28u; esp -= 4; W32(esp, v); }
/* 7cca82: push 0xad5018 */
  { uint32_t v = 0xad5018u; esp -= 4; W32(esp, v); }
/* 7cca87: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7cca89u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cca89: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7cca8c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cca8f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cca91: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x7cca97u); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 7cca97: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cca98: push 0xad5020 */
  { uint32_t v = 0xad5020u; esp -= 4; W32(esp, v); }
/* 7cca9d: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7cca9fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cca9f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ccaa2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ccaa4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ccaa6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ccaabu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7ccaab: guest_badaddr(0x7ccaab); return;
}

void f_7ccae0(void) {
  LOAD_REGS();
L_7ccae0: /* 7ccae0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7ccae1: mov ebp, esp */
  ebp = esp;
/* 7ccae3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7ccae5: push 0x9cfcc9 */
  { uint32_t v = 0x9cfcc9u; esp -= 4; W32(esp, v); }
/* 7ccaea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7ccaf0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ccaf1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7ccaf8: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ccafb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ccafc: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 7ccaff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ccb00: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ccb01: xor edi, edi */
  edi = 0;
/* 7ccb03: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7ccb06: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 7ccb09: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7ccb10: /* 7ccb10: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7ccb13: cmp edi, dword ptr [esi + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ccb16: jge 0x7ccbe9 */
  if ((sf == of)) goto L_7ccbe9;
L_7ccb1c: /* 7ccb1c: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7ccb1f: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7ccb25u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7ccb25: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 7ccb28: mov esi, dword ptr [eax + edi*4] */
  esi = R32((uint32_t)(eax + edi*4));
/* 7ccb2b: mov ecx, esi */
  ecx = esi;
/* 7ccb2d: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7ccb31: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7ccb37u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7ccb37: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7ccb3d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7ccb3f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ccb40: push 0xad5038 */
  { uint32_t v = 0xad5038u; esp -= 4; W32(esp, v); }
/* 7ccb45: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* 7ccb4a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ccb4b: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x7ccb51u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 7ccb51: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 7ccb54: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 7ccb56: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ccb59: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7ccb5c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ccb5d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ccb5e: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7ccb60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ccb61: mov ecx, ebx */
  ecx = ebx;
/* 7ccb63: call dword ptr [eax + 0xb8] */
  { uint32_t t = R32((uint32_t)(eax + 0xb8u)); esp -= 4; W32(esp, 0x7ccb69u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ccb69: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ccb6b: jne 0x7ccb8d */
  if (!zf) goto L_7ccb8d;
L_7ccb6d: /* 7ccb6d: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7ccb70: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7ccb76u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7ccb76: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ccb77: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 7ccb7c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7ccb7e: push 0xad5080 */
  { uint32_t v = 0xad5080u; esp -= 4; W32(esp, v); }
/* 7ccb83: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ccb84: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7ccb8au); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7ccb8a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7ccb8d: /* 7ccb8d: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7ccb90: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7ccb94: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7ccb9au); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7ccb9a: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7ccb9b: jmp 0x7ccb10 */
  goto L_7ccb10;
L_7ccbe9: /* 7ccbe9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ccbec: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ccbed: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ccbee: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ccbf5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ccbf6: mov esp, ebp */
  esp = ebp;
/* 7ccbf8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ccbf9: ret  */
  esp += 4; SPILL(); return;
}

void f_7ccba0(void) {
  LOAD_REGS();
L_7ccba0: /* 7ccba0: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7ccba3: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7ccba8: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7ccbab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ccbac: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7ccbaf: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ccbb4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7ccbb4(); return;
}

void f_7ccbb4(void) {
  LOAD_REGS();
L_7ccbb4: /* 7ccbb4: mov esi, dword ptr [0xcfa1ec] */
  esi = R32((uint32_t)(0xcfa1ecu));
/* 7ccbba: push 0xa0ee60 */
  { uint32_t v = 0xa0ee60u; esp -= 4; W32(esp, v); }
/* 7ccbbf: push 0xad5088 */
  { uint32_t v = 0xad5088u; esp -= 4; W32(esp, v); }
/* 7ccbc4: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7ccbc6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ccbc6: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7ccbc9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ccbcc: add ecx, 0x60 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7ccbcf: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7ccbd5u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7ccbd5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ccbd6: push 0xad5090 */
  { uint32_t v = 0xad5090u; esp -= 4; W32(esp, v); }
/* 7ccbdb: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7ccbddu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ccbdd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ccbe0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ccbe2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ccbe4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ccbe9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7ccbe9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ccbec: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ccbed: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ccbee: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ccbf5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ccbf6: mov esp, ebp */
  esp = ebp;
/* 7ccbf8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ccbf9: ret  */
  esp += 4; SPILL(); return;
}

void f_7ccc50(void) {
  LOAD_REGS();
L_7ccc50: /* 7ccc50: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7ccc51: mov ebp, esp */
  ebp = esp;
/* 7ccc53: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7ccc55: push 0x9cfce0 */
  { uint32_t v = 0x9cfce0u; esp -= 4; W32(esp, v); }
/* 7ccc5a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7ccc60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ccc61: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7ccc68: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ccc6b: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 7ccc6e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ccc6f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ccc70: xor esi, esi */
  esi = 0;
/* 7ccc72: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ccc74: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ccc75: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7ccc78: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7ccc7b: je 0x7ccc9b */
  if (zf) goto L_7ccc9b;
L_7ccc7d: /* 7ccc7d: cmp dword ptr [eax + 0x30], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x30u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ccc80: je 0x7ccc9b */
  if (zf) goto L_7ccc9b;
L_7ccc82: /* 7ccc82: xor eax, eax */
  eax = 0;
L_7ccc84: /* 7ccc84: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 7ccc87: cmp eax, dword ptr [edx + 0x30] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ccc8a: jge 0x7ccc9b */
  if ((sf == of)) goto L_7ccc9b;
L_7ccc8c: /* 7ccc8c: mov edx, dword ptr [edx + 0x2c] */
  edx = R32((uint32_t)(edx + 0x2cu));
/* 7ccc8f: mov edx, dword ptr [edx + eax*4] */
  edx = R32((uint32_t)(edx + eax*4));
/* 7ccc92: mov dword ptr [edx + 0x11c], esi */
  W32((uint32_t)(edx + 0x11cu), esi);
/* 7ccc98: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7ccc99: jmp 0x7ccc84 */
  goto L_7ccc84;
L_7ccc9b: /* 7ccc9b: mov ecx, dword ptr [ecx + 0x34] */
  ecx = R32((uint32_t)(ecx + 0x34u));
/* 7ccc9e: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ccca0: je 0x7cccb8 */
  if (zf) goto L_7cccb8;
L_7ccca2: /* 7ccca2: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 7ccca8: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 7cccaa: mov eax, dword ptr [ecx + 0x28] */
  eax = R32((uint32_t)(ecx + 0x28u));
/* 7cccad: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7cccb0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7cccb1: push 0xad5634 */
  { uint32_t v = 0xad5634u; esp -= 4; W32(esp, v); }
/* 7cccb6: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x7cccb8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7cccb8: /* 7cccb8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7cccbb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7cccbc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cccbd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7cccc4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7cccc5: mov esp, ebp */
  esp = ebp;
/* 7cccc7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7cccc8: ret  */
  esp += 4; SPILL(); return;
}

void f_7cccc9(void) {
  LOAD_REGS();
L_7cccc9: /* 7cccc9: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7ccccc: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7cccd1: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7cccd4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cccd5: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7cccd8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7cccddu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7cccdd(); return;
}
