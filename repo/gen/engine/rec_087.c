#include "recomp.h"
#include "rec_mod.h"

void f_891f19(void) {
  LOAD_REGS();
  goto L_891f19;
L_891ec3: /* 891ec3: mov ecx, edi */
  ecx = edi;
/* 891ec5: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x891ecbu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 891ecb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 891ecc: mov ecx, ebx */
  ecx = ebx;
/* 891ece: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x891ed4u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 891ed4: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 891eda: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 891edc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 891edd: push 0xae7800 */
  { uint32_t v = 0xae7800u; esp -= 4; W32(esp, v); }
/* 891ee2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 891ee3: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x891ee9u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 891ee9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_891eec: /* 891eec: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 891eed: mov eax, esi */
  eax = esi;
/* 891eef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 891ef0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 891ef1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 891ef2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 891ef5: ret  */
  esp += 4; SPILL(); return;
L_891ef6: /* 891ef6: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 891efa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
/* 891f00: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 891f02: mov dword ptr [ecx + ebp*4], 0xffffffff */
  W32((uint32_t)(ecx + ebp*4), 0xffffffffu);
/* 891f09: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 891f0c: xor esi, esi */
  esi = 0;
/* 891f0e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 891f10: jle 0x891f5e */
  if ((zf || sf != of)) goto L_891f5e;
L_891f12: /* 891f12: shl ebp, 6 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebp = r;
  }
/* 891f15: xor edi, edi */
  edi = 0;
/* 891f17: jmp 0x891f20 */
  goto L_891f20;
L_891f19: /* 891f19: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_891f20: /* 891f20: mov edx, dword ptr [ebx + 0x2c] */
  edx = R32((uint32_t)(ebx + 0x2cu));
/* 891f23: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 891f27: mov ecx, dword ptr [eax + 0x1dc] */
  ecx = R32((uint32_t)(eax + 0x1dcu));
/* 891f2d: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 891f2f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 891f30: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 891f32: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x891f38u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 891f38: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 891f3a: jne 0x891f49 */
  if (!zf) goto L_891f49;
L_891f3c: /* 891f3c: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 891f3f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 891f40: add edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 891f43: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 891f45: jl 0x891f20 */
  if ((sf != of)) goto L_891f20;
L_891f47: /* 891f47: jmp 0x891f5a */
  goto L_891f5a;
L_891f49: /* 891f49: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 891f4d: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 891f51: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 891f53: mov dword ptr [edx + eax*4], esi */
  W32((uint32_t)(edx + eax*4), esi);
/* 891f56: inc dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x14u), r);
  }
L_891f5a: /* 891f5a: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
L_891f5e: /* 891f5e: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 891f62: mov eax, dword ptr [edi + 0x1e0] */
  eax = R32((uint32_t)(edi + 0x1e0u));
/* 891f68: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 891f69: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 891f6b: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 891f6f: jl 0x891ef6 */
  if ((sf != of)) goto L_891ef6;
L_891f71: /* 891f71: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 891f75: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 891f77: jne 0x891eec */
  if (!zf) goto L_891eec;
L_891f7d: /* 891f7d: jmp 0x891ec3 */
  goto L_891ec3;
}

void f_891fe0(void) {
  LOAD_REGS();
L_891fe0: /* 891fe0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 891fe1: mov ebp, esp */
  ebp = esp;
/* 891fe3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 891fe5: push 0x9d5780 */
  { uint32_t v = 0x9d5780u; esp -= 4; W32(esp, v); }
/* 891fea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 891ff0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 891ff1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 891ff8: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 891ffb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 891ffc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 891ffd: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 892000: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 892001: xor edi, edi */
  edi = 0;
/* 892003: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 892006: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 892007: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 89200a: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 89200d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 89200f: mov ecx, esi */
  ecx = esi;
/* 892011: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 892014: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 892018: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x89201eu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 89201e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 892021: mov eax, dword ptr [eax + 0x1e0] */
  eax = R32((uint32_t)(eax + 0x1e0u));
/* 892027: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 892029: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 89202c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89202d: mov ecx, esi */
  ecx = esi;
/* 89202f: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 892033: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x892039u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 892039: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 89203c: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 89203f: nop  */
L_892040: /* 892040: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 892043: cmp edi, dword ptr [ecx + 0x1e0] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x1e0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 892049: jge 0x8920a6 */
  if ((sf == of)) goto L_8920a6;
L_89204b: /* 89204b: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 89204e: mov eax, dword ptr [edx + 0xc] */
  eax = R32((uint32_t)(edx + 0xcu));
/* 892051: mov dword ptr [eax + edi*4], 0xffffffff */
  W32((uint32_t)(eax + edi*4), 0xffffffffu);
/* 892058: xor esi, esi */
  esi = 0;
/* 89205a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_892060: /* 892060: cmp esi, dword ptr [ebx + 0x1e0] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x1e0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 892066: jge 0x8920a0 */
  if ((sf == of)) goto L_8920a0;
L_892068: /* 892068: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 89206b: mov eax, dword ptr [edx + 0x1dc] */
  eax = R32((uint32_t)(edx + 0x1dcu));
/* 892071: mov ecx, edi */
  ecx = edi;
/* 892073: shl ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 892076: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 892078: mov eax, dword ptr [ebx + 0x1dc] */
  eax = R32((uint32_t)(ebx + 0x1dcu));
/* 89207e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89207f: mov ecx, esi */
  ecx = esi;
/* 892081: shl ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 892084: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 892086: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x89208cu); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 89208c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89208e: je 0x8920a3 */
  if (zf) goto L_8920a3;
L_892090: /* 892090: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 892093: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 892096: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 892099: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 89209a: mov dword ptr [ecx + edi*4], esi */
  W32((uint32_t)(ecx + edi*4), esi);
/* 89209d: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_8920a0: /* 8920a0: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8920a1: jmp 0x892040 */
  goto L_892040;
L_8920a3: /* 8920a3: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8920a4: jmp 0x892060 */
  goto L_892060;
L_8920a6: /* 8920a6: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8920a9: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8920ab: jne 0x8920d9 */
  if (!zf) goto L_8920d9;
L_8920ad: /* 8920ad: mov ecx, ebx */
  ecx = ebx;
/* 8920af: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8920b5u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8920b5: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8920b8: mov esi, eax */
  esi = eax;
/* 8920ba: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8920c0u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8920c0: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 8920c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8920c7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8920c8: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8920ca: push 0xae78b0 */
  { uint32_t v = 0xae78b0u; esp -= 4; W32(esp, v); }
/* 8920cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8920d0: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8920d6u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8920d6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8920d9: /* 8920d9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8920dc: mov eax, edi */
  eax = edi;
/* 8920de: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8920df: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8920e0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8920e7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8920e8: mov esp, ebp */
  esp = ebp;
/* 8920ea: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8920eb: ret  */
  esp += 4; SPILL(); return;
}

void f_8920ec(void) {
  LOAD_REGS();
L_8920ec: /* 8920ec: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8920ef: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8920f4: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 8920f7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8920f8: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8920fb: call 0x99caf8 */
  esp -= 4; W32(esp, 0x892100u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_892100(); return;
}

void f_892100(void) {
  LOAD_REGS();
L_892100: /* 892100: push 0xa1a370 */
  { uint32_t v = 0xa1a370u; esp -= 4; W32(esp, v); }
/* 892105: push 0xae78a8 */
  { uint32_t v = 0xae78a8u; esp -= 4; W32(esp, v); }
/* 89210a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x892110u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 892110: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 892113: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 892115: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 892117: call 0x99caf8 */
  esp -= 4; W32(esp, 0x89211cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_89211c(); return;
}

void f_89211c(void) {
  LOAD_REGS();
L_89211c: /* 89211c: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 89211f: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 892124: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 892127: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 892128: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 89212b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x892130u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_892130(); return;
}

void f_892130(void) {
  LOAD_REGS();
L_892130: /* 892130: push 0xa1a358 */
  { uint32_t v = 0xa1a358u; esp -= 4; W32(esp, v); }
/* 892135: push 0xae78a0 */
  { uint32_t v = 0xae78a0u; esp -= 4; W32(esp, v); }
/* 89213a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x892140u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 892140: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 892143: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 892145: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 892147: call 0x99caf8 */
  esp -= 4; W32(esp, 0x89214cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_89214c(); return;
}

void f_89214c(void) {
  LOAD_REGS();
L_89214c: /* 89214c: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 89214f: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 892154: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 892157: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 892158: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 89215b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x892160u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_892160(); return;
}

void f_892160(void) {
  LOAD_REGS();
L_892160: /* 892160: push 0xa1a2f0 */
  { uint32_t v = 0xa1a2f0u; esp -= 4; W32(esp, v); }
/* 892165: push 0xae7950 */
  { uint32_t v = 0xae7950u; esp -= 4; W32(esp, v); }
/* 89216a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x892170u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 892170: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 892173: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 892175: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 892177: call 0x99caf8 */
  esp -= 4; W32(esp, 0x89217cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_89217c: guest_badaddr(0x89217c); return;
}

void f_8921f0(void) {
  LOAD_REGS();
L_8921f0: /* 8921f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8921f1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8921f2: mov esi, ecx */
  esi = ecx;
/* 8921f4: mov eax, dword ptr [esi + 0xac] */
  eax = R32((uint32_t)(esi + 0xacu));
/* 8921fa: xor ebp, ebp */
  ebp = 0;
/* 8921fc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8921fe: jle 0x892263 */
  if ((zf || sf != of)) goto L_892263;
L_892200: /* 892200: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 892201: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 892202: xor ebx, ebx */
  ebx = 0;
L_892204: /* 892204: mov eax, dword ptr [esi + 0xa8] */
  eax = R32((uint32_t)(esi + 0xa8u));
/* 89220a: cmp dword ptr [ebx + eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89220e: je 0x892253 */
  if (zf) goto L_892253;
L_892210: /* 892210: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 892212: mov ecx, eax */
  ecx = eax;
/* 892214: lea edi, [ebx + ecx] */
  edi = (uint32_t)(ebx + ecx);
/* 892217: mov ecx, esi */
  ecx = esi;
/* 892219: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0x89221fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89221f: cmp dword ptr [edi + 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 892222: je 0x892253 */
  if (zf) goto L_892253;
L_892224: /* 892224: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 892226: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 892228: lea eax, [edi + 0xc] */
  eax = (uint32_t)(edi + 0xcu);
/* 89222b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89222c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89222d: mov ecx, esi */
  ecx = esi;
/* 89222f: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0x892235u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 892235: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 892236: call 0x6c9f48 */
  esp -= 4; W32(esp, 0x89223bu); SPILL(); f_6c9f48(); if (g_unwind) return; RELOAD();
/* 89223b: mov edi, dword ptr [esi + 0xa8] */
  edi = R32((uint32_t)(esi + 0xa8u));
/* 892241: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 892243: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 892246: mov ecx, esi */
  ecx = esi;
/* 892248: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 89224a: call dword ptr [eax + 0x94] */
  { uint32_t t = R32((uint32_t)(eax + 0x94u)); esp -= 4; W32(esp, 0x892250u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 892250: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
L_892253: /* 892253: mov eax, dword ptr [esi + 0xac] */
  eax = R32((uint32_t)(esi + 0xacu));
/* 892259: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 89225a: add ebx, 0x18 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 89225d: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89225f: jl 0x892204 */
  if ((sf != of)) goto L_892204;
L_892261: /* 892261: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 892262: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_892263: /* 892263: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 892264: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 892265: ret  */
  esp += 4; SPILL(); return;
}

void f_892290(void) {
  LOAD_REGS();
L_892290: /* 892290: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 892294: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 892295: mov esi, ecx */
  esi = ecx;
/* 892297: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 892299: lea ecx, [esi + 0x130] */
  ecx = (uint32_t)(esi + 0x130u);
/* 89229f: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 8922a1: mov dword ptr [esi + 0x54], eax */
  W32((uint32_t)(esi + 0x54u), eax);
/* 8922a4: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8922aau); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8922aa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8922ac: lea ecx, [esi + 0x13c] */
  ecx = (uint32_t)(esi + 0x13cu);
/* 8922b2: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8922b4: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8922bau); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8922ba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8922bc: lea ecx, [esi + 0xb4] */
  ecx = (uint32_t)(esi + 0xb4u);
/* 8922c2: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 8922c4: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8922cau); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8922ca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8922cc: lea ecx, [esi + 0x104] */
  ecx = (uint32_t)(esi + 0x104u);
/* 8922d2: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* 8922d4: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8922dau); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8922da: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8922dc: lea ecx, [esi + 0x110] */
  ecx = (uint32_t)(esi + 0x110u);
/* 8922e2: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 8922e4: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8922eau); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8922ea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8922ec: lea ecx, [esi + 0x11c] */
  ecx = (uint32_t)(esi + 0x11cu);
/* 8922f2: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 8922f4: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8922fau); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8922fa: mov eax, dword ptr [esi + 0x54] */
  eax = R32((uint32_t)(esi + 0x54u));
/* 8922fd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8922ff: je 0x89230b */
  if (zf) goto L_89230b;
L_892301: /* 892301: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 892303: mov ecx, esi */
  ecx = esi;
/* 892305: call dword ptr [edx + 0x12c] */
  { uint32_t t = R32((uint32_t)(edx + 0x12cu)); esp -= 4; W32(esp, 0x89230bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_89230b: /* 89230b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 89230c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_892330(void) {
  LOAD_REGS();
L_892330: /* 892330: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 892331: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 892335: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 892336: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 892337: mov esi, ecx */
  esi = ecx;
/* 892339: call 0x6c2b21 */
  esp -= 4; W32(esp, 0x89233eu); SPILL(); f_6c2b21(); if (g_unwind) return; RELOAD();
/* 89233e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 892340: je 0x892376 */
  if (zf) goto L_892376;
L_892342: /* 892342: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 892343: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 892345: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 892346: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 89234a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89234b: mov ecx, esi */
  ecx = esi;
/* 89234d: call 0x6c1a69 */
  esp -= 4; W32(esp, 0x892352u); SPILL(); f_6c1a69(); if (g_unwind) return; RELOAD();
/* 892352: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 892354: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 892355: mov ecx, esi */
  ecx = esi;
/* 892357: call dword ptr [edi + 0xb4] */
  { uint32_t t = R32((uint32_t)(edi + 0xb4u)); esp -= 4; W32(esp, 0x89235du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89235d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89235e: mov ecx, esi */
  ecx = esi;
/* 892360: call dword ptr [edi + 0xc8] */
  { uint32_t t = R32((uint32_t)(edi + 0xc8u)); esp -= 4; W32(esp, 0x892366u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 892366: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 89236c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 89236d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89236f: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 892372: jp 0x89237c */
  if (pf) goto L_89237c;
L_892374: /* 892374: fstp st(0) */
  STI(0) = ST0; FPOP();
L_892376: /* 892376: fld dword ptr [0xa15b48] */
  { double v = F32((uint32_t)(0xa15b48u)); FPUSH(v); }
L_89237c: /* 89237c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 89237d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 89237e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8923b0(void) {
  LOAD_REGS();
L_8923b0: /* 8923b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8923b1: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 8923b5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8923b7: mov dword ptr [esp], 0 */
  W32((uint32_t)(esp), 0x0u);
/* 8923bf: je 0x8923d7 */
  if (zf) goto L_8923d7;
L_8923c1: /* 8923c1: lea ecx, [esp] */
  ecx = (uint32_t)(esp);
/* 8923c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8923c6: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 8923ca: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8923cb: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 8923ce: call 0x6c9390 */
  esp -= 4; W32(esp, 0x8923d3u); SPILL(); f_6c9390(); if (g_unwind) return; RELOAD();
/* 8923d3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 8923d4: ret 8 */
  esp += 12; SPILL(); return;
L_8923d7: /* 8923d7: xor eax, eax */
  eax = 0;
/* 8923d9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 8923da: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8923f0(void) {
  LOAD_REGS();
L_8923f0: /* 8923f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8923f1: mov ebp, esp */
  ebp = esp;
/* 8923f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8923f5: push 0x9d5790 */
  { uint32_t v = 0x9d5790u; esp -= 4; W32(esp, v); }
/* 8923fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 892400: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 892401: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 892408: sub esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89240b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 89240c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 89240d: mov ebx, ecx */
  ebx = ecx;
/* 89240f: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 892411: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 892412: xor esi, esi */
  esi = 0;
/* 892414: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 892417: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 89241a: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 89241d: call dword ptr [eax + 0x94] */
  { uint32_t t = R32((uint32_t)(eax + 0x94u)); esp -= 4; W32(esp, 0x892423u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 892423: mov edi, eax */
  edi = eax;
/* 892425: cmp dword ptr [edi + 0x1f0], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x1f0u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89242b: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 89242e: je 0x8925a7 */
  if (zf) goto L_8925a7;
L_892434: /* 892434: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 892437: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 892439: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 89243b: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 89243e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89243f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 892440: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 892441: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 892442: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 892443: mov ecx, ebx */
  ecx = ebx;
/* 892445: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 892448: call dword ptr [edx + 0x114] */
  { uint32_t t = R32((uint32_t)(edx + 0x114u)); esp -= 4; W32(esp, 0x89244eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89244e: mov eax, dword ptr [ebx + 0xb8] */
  eax = R32((uint32_t)(ebx + 0xb8u));
/* 892454: mov edi, dword ptr [edi + 0x1e0] */
  edi = R32((uint32_t)(edi + 0x1e0u));
/* 89245a: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89245c: jle 0x892460 */
  if ((zf || sf != of)) goto L_892460;
L_89245e: /* 89245e: mov edi, eax */
  edi = eax;
L_892460: /* 892460: cmp edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 892463: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 892466: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 892469: jle 0x892476 */
  if ((zf || sf != of)) goto L_892476;
L_89246b: /* 89246b: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 89246c: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 89246f: mov dword ptr [ebp - 0x14], 1 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x1u);
L_892476: /* 892476: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 892479: xor eax, eax */
  eax = 0;
/* 89247b: jmp 0x892480 */
  goto L_892480;
L_892480: /* 892480: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 892483: jge 0x892488 */
  if ((sf == of)) goto L_892488;
L_892485: /* 892485: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 892486: jmp 0x892480 */
  goto L_892480;
L_892488: /* 892488: lea eax, [edi + edi] */
  eax = (uint32_t)(edi + edi);
/* 89248b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89248c: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 89248e: mov ecx, esi */
  ecx = esi;
/* 892490: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x892496u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 892496: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 892498: lea eax, [edi + edi] */
  eax = (uint32_t)(edi + edi);
/* 89249b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89249c: mov ecx, esi */
  ecx = esi;
/* 89249e: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8924a4u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8924a4: xor edx, edx */
  edx = 0;
L_8924a6: /* 8924a6: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8924a8: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 8924ab: jge 0x892592 */
  if ((sf == of)) goto L_892592;
L_8924b1: /* 8924b1: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8924b4: mov edi, dword ptr [ebx + 0xb4] */
  edi = R32((uint32_t)(ebx + 0xb4u));
/* 8924ba: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 8924bc: lea ecx, [edx + edx] */
  ecx = (uint32_t)(edx + edx);
/* 8924bf: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8924c1: lea eax, [edx + edx*2] */
  eax = (uint32_t)(edx + edx*2);
/* 8924c4: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8924c7: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8924c9: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 8924cb: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 8924ce: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8924d1: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8924d3: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
/* 8924d5: mov ebx, dword ptr [edi + 4] */
  ebx = R32((uint32_t)(edi + 0x4u));
/* 8924d8: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 8924db: mov edi, dword ptr [edi + 8] */
  edi = R32((uint32_t)(edi + 0x8u));
/* 8924de: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8924e1: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* 8924e4: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8924e7: mov edi, dword ptr [edi + 0x1dc] */
  edi = R32((uint32_t)(edi + 0x1dcu));
/* 8924ed: mov esi, edx */
  esi = edx;
/* 8924ef: shl esi, 6 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 8924f2: mov edi, dword ptr [edi + esi + 0x34] */
  edi = R32((uint32_t)(edi + esi + 0x34u));
/* 8924f6: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8924f8: je 0x892557 */
  if (zf) goto L_892557;
L_8924fa: /* 8924fa: mov esi, dword ptr [ebx + 0xb4] */
  esi = R32((uint32_t)(ebx + 0xb4u));
/* 892500: lea edx, [edi + edi*2] */
  edx = (uint32_t)(edi + edi*2);
/* 892503: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 892506: fld dword ptr [edx + esi + 8] */
  { double v = F32((uint32_t)(edx + esi + 0x8u)); FPUSH(v); }
/* 89250a: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 89250c: fsub dword ptr [esi + eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax + 0x8u)));
/* 892510: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 892513: fsub dword ptr [esi + eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax + 0x4u)));
/* 892517: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 892519: fsub dword ptr [esi + eax] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax)));
/* 89251c: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 89251f: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 892521: lea eax, [edx + ecx + 0xc] */
  eax = (uint32_t)(edx + ecx + 0xcu);
/* 892525: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 892528: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 89252b: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 89252d: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 892530: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 892533: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 892536: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 892539: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 89253c: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 89253f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 892541: lea ecx, [eax + ecx + 0xc] */
  ecx = (uint32_t)(eax + ecx + 0xcu);
/* 892545: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x89254bu); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 89254b: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 89254e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 892551: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 892552: jmp 0x8924a6 */
  goto L_8924a6;
L_892557: /* 892557: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 89255a: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 89255c: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 89255f: lea eax, [edx + ecx + 0xc] */
  eax = (uint32_t)(edx + ecx + 0xcu);
/* 892563: mov dword ptr [ebp - 0x44], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x3f800000u);
/* 89256a: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 89256d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 89256f: mov dword ptr [ebp - 0x40], 0 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x0u);
/* 892576: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 892579: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 89257c: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 89257f: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* 892586: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 892589: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 89258c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 89258d: jmp 0x8924a6 */
  goto L_8924a6;
L_892592: /* 892592: mov eax, edi */
  eax = edi;
/* 892594: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 892597: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 89259e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 89259f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8925a0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8925a1: mov esp, ebp */
  esp = ebp;
/* 8925a3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8925a4: ret 0xc */
  esp += 16; SPILL(); return;
L_8925a7: /* 8925a7: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8925aa: xor eax, eax */
  eax = 0;
/* 8925ac: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8925b0: /* 8925b0: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8925b3: jge 0x8925b8 */
  if ((sf == of)) goto L_8925b8;
L_8925b5: /* 8925b5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8925b6: jmp 0x8925b0 */
  goto L_8925b0;
L_8925b8: /* 8925b8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8925b9: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8925bb: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8925c1u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8925c1: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 8925c7: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8925c9: push 0xae7cd8 */
  { uint32_t v = 0xae7cd8u; esp -= 4; W32(esp, v); }
/* 8925ce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8925cf: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8925d5u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8925d5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8925d8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8925db: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8925dc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8925dd: xor eax, eax */
  eax = 0;
/* 8925df: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8925e6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8925e7: mov esp, ebp */
  esp = ebp;
/* 8925e9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8925ea: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_89247d(void) {
  LOAD_REGS();
L_89247d: /* 89247d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_892480: /* 892480: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 892483: jge 0x892488 */
  if ((sf == of)) goto L_892488;
L_892485: /* 892485: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 892486: jmp 0x892480 */
  goto L_892480;
L_892488: /* 892488: lea eax, [edi + edi] */
  eax = (uint32_t)(edi + edi);
/* 89248b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89248c: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 89248e: mov ecx, esi */
  ecx = esi;
/* 892490: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x892496u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 892496: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 892498: lea eax, [edi + edi] */
  eax = (uint32_t)(edi + edi);
/* 89249b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89249c: mov ecx, esi */
  ecx = esi;
/* 89249e: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8924a4u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8924a4: xor edx, edx */
  edx = 0;
L_8924a6: /* 8924a6: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8924a8: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 8924ab: jge 0x892592 */
  if ((sf == of)) goto L_892592;
L_8924b1: /* 8924b1: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8924b4: mov edi, dword ptr [ebx + 0xb4] */
  edi = R32((uint32_t)(ebx + 0xb4u));
/* 8924ba: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 8924bc: lea ecx, [edx + edx] */
  ecx = (uint32_t)(edx + edx);
/* 8924bf: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8924c1: lea eax, [edx + edx*2] */
  eax = (uint32_t)(edx + edx*2);
/* 8924c4: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8924c7: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8924c9: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 8924cb: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 8924ce: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8924d1: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8924d3: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
/* 8924d5: mov ebx, dword ptr [edi + 4] */
  ebx = R32((uint32_t)(edi + 0x4u));
/* 8924d8: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 8924db: mov edi, dword ptr [edi + 8] */
  edi = R32((uint32_t)(edi + 0x8u));
/* 8924de: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8924e1: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* 8924e4: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8924e7: mov edi, dword ptr [edi + 0x1dc] */
  edi = R32((uint32_t)(edi + 0x1dcu));
/* 8924ed: mov esi, edx */
  esi = edx;
/* 8924ef: shl esi, 6 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 8924f2: mov edi, dword ptr [edi + esi + 0x34] */
  edi = R32((uint32_t)(edi + esi + 0x34u));
/* 8924f6: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8924f8: je 0x892557 */
  if (zf) goto L_892557;
L_8924fa: /* 8924fa: mov esi, dword ptr [ebx + 0xb4] */
  esi = R32((uint32_t)(ebx + 0xb4u));
/* 892500: lea edx, [edi + edi*2] */
  edx = (uint32_t)(edi + edi*2);
/* 892503: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 892506: fld dword ptr [edx + esi + 8] */
  { double v = F32((uint32_t)(edx + esi + 0x8u)); FPUSH(v); }
/* 89250a: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 89250c: fsub dword ptr [esi + eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax + 0x8u)));
/* 892510: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 892513: fsub dword ptr [esi + eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax + 0x4u)));
/* 892517: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 892519: fsub dword ptr [esi + eax] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax)));
/* 89251c: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 89251f: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 892521: lea eax, [edx + ecx + 0xc] */
  eax = (uint32_t)(edx + ecx + 0xcu);
/* 892525: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 892528: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 89252b: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 89252d: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 892530: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 892533: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 892536: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 892539: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 89253c: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 89253f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 892541: lea ecx, [eax + ecx + 0xc] */
  ecx = (uint32_t)(eax + ecx + 0xcu);
/* 892545: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x89254bu); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 89254b: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 89254e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 892551: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 892552: jmp 0x8924a6 */
  goto L_8924a6;
L_892557: /* 892557: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 89255a: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 89255c: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 89255f: lea eax, [edx + ecx + 0xc] */
  eax = (uint32_t)(edx + ecx + 0xcu);
/* 892563: mov dword ptr [ebp - 0x44], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x3f800000u);
/* 89256a: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 89256d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 89256f: mov dword ptr [ebp - 0x40], 0 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x0u);
/* 892576: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 892579: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 89257c: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 89257f: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* 892586: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 892589: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 89258c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 89258d: jmp 0x8924a6 */
  goto L_8924a6;
L_892592: /* 892592: mov eax, edi */
  eax = edi;
/* 892594: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 892597: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 89259e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 89259f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8925a0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8925a1: mov esp, ebp */
  esp = ebp;
/* 8925a3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8925a4: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_8925ed(void) {
  LOAD_REGS();
L_8925ed: /* 8925ed: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8925f0: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8925f5: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 8925f8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8925f9: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 8925fc: call 0x99caf8 */
  esp -= 4; W32(esp, 0x892601u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_892601(); return;
}

void f_892601(void) {
  LOAD_REGS();
L_892601: /* 892601: push 0xa1a390 */
  { uint32_t v = 0xa1a390u; esp -= 4; W32(esp, v); }
/* 892606: push 0xae7d74 */
  { uint32_t v = 0xae7d74u; esp -= 4; W32(esp, v); }
/* 89260b: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x892611u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 892611: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 892614: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 892616: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 892618: call 0x99caf8 */
  esp -= 4; W32(esp, 0x89261du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_89261d: guest_badaddr(0x89261d); return;
}

void f_8926b0(void) {
  LOAD_REGS();
L_8926b0: /* 8926b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8926b1: mov ebp, esp */
  ebp = esp;
/* 8926b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8926b5: push 0x9d57a0 */
  { uint32_t v = 0x9d57a0u; esp -= 4; W32(esp, v); }
/* 8926ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8926c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8926c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8926c8: sub esp, 0x14c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8926ce: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8926cf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8926d0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8926d1: mov ebx, ecx */
  ebx = ecx;
/* 8926d3: xor esi, esi */
  esi = 0;
/* 8926d5: lea ecx, [ebp - 0x98] */
  ecx = (uint32_t)(ebp + 0xffffff68u);
/* 8926db: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8926de: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 8926e1: call dword ptr [0xcfa434] */
  esp -= 4; W32(esp, 0x8926e7u); SPILL(); f_4e125d(); if (g_unwind) return; /* Core!??0FCoords@@QAE@XZ */ RELOAD();
/* 8926e7: lea ecx, [ebp - 0xc8] */
  ecx = (uint32_t)(ebp + 0xffffff38u);
/* 8926ed: call dword ptr [0xcfa434] */
  esp -= 4; W32(esp, 0x8926f3u); SPILL(); f_4e125d(); if (g_unwind) return; /* Core!??0FCoords@@QAE@XZ */ RELOAD();
/* 8926f3: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8926f6: add eax, 0xac */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xacu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8926fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8926fc: lea ecx, [ebx + 0x2ec] */
  ecx = (uint32_t)(ebx + 0x2ecu);
/* 892702: call 0x6c65c3 */
  esp -= 4; W32(esp, 0x892707u); SPILL(); f_6c65c3(); if (g_unwind) return; RELOAD();
/* 892707: or edi, 0xffffffff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 89270a: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89270d: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 892710: je 0x8927b4 */
  if (zf) goto L_8927b4;
L_892716: /* 892716: mov ecx, dword ptr [ebx + 0x2f8] */
  ecx = R32((uint32_t)(ebx + 0x2f8u));
/* 89271c: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 89271f: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
L_892722: /* 892722: cmp esi, dword ptr [ebx + 0x1e0] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x1e0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 892728: jge 0x892747 */
  if ((sf == of)) goto L_892747;
L_89272a: /* 89272a: mov edx, dword ptr [ebx + 0x1dc] */
  edx = R32((uint32_t)(ebx + 0x1dcu));
/* 892730: mov eax, esi */
  eax = esi;
/* 892732: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 892735: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 892737: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 892738: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 89273b: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x892741u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 892741: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 892743: je 0x8927ae */
  if (zf) goto L_8927ae;
L_892745: /* 892745: mov edi, esi */
  edi = esi;
L_892747: /* 892747: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89274a: jle 0x892839 */
  if ((zf || sf != of)) goto L_892839;
L_892750: /* 892750: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 892753: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 892755: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 892756: mov ecx, ebx */
  ecx = ebx;
/* 892758: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x89275eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89275e: mov eax, dword ptr [esi + 0xec] */
  eax = R32((uint32_t)(esi + 0xecu));
/* 892764: cmp dword ptr [eax + 0xb8], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xb8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89276a: jle 0x892839 */
  if ((zf || sf != of)) goto L_892839;
L_892770: /* 892770: mov esi, dword ptr [eax + 0xb4] */
  esi = R32((uint32_t)(eax + 0xb4u));
/* 892776: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 892779: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 89277c: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 89277f: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 892781: mov ecx, 0xc */
  ecx = 0xcu;
/* 892786: lea edi, [ebp - 0x98] */
  edi = (uint32_t)(ebp + 0xffffff68u);
/* 89278c: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89278e: mov esi, dword ptr [ebx + 0x304] */
  esi = R32((uint32_t)(ebx + 0x304u));
/* 892794: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 892797: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 89279a: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 89279c: mov ecx, 0xc */
  ecx = 0xcu;
/* 8927a1: lea edi, [ebp - 0xc8] */
  edi = (uint32_t)(ebp + 0xffffff38u);
/* 8927a7: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8927a9: jmp 0x892843 */
  goto L_892843;
L_8927ae: /* 8927ae: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8927af: jmp 0x892722 */
  goto L_892722;
L_8927b4: /* 8927b4: cmp esi, dword ptr [ebx + 0x1e0] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x1e0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8927ba: jge 0x8927df */
  if ((sf == of)) goto L_8927df;
L_8927bc: /* 8927bc: mov edx, dword ptr [ebx + 0x1dc] */
  edx = R32((uint32_t)(ebx + 0x1dcu));
/* 8927c2: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8927c5: mov eax, esi */
  eax = esi;
/* 8927c7: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8927ca: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8927cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8927cd: add ecx, 0xac */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xacu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8927d3: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x8927d9u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 8927d9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8927db: je 0x892833 */
  if (zf) goto L_892833;
L_8927dd: /* 8927dd: mov edi, esi */
  edi = esi;
L_8927df: /* 8927df: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8927e2: jle 0x892839 */
  if ((zf || sf != of)) goto L_892839;
L_8927e4: /* 8927e4: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8927e7: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8927e9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8927ea: mov ecx, ebx */
  ecx = ebx;
/* 8927ec: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x8927f2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8927f2: mov eax, dword ptr [esi + 0xec] */
  eax = R32((uint32_t)(esi + 0xecu));
/* 8927f8: cmp dword ptr [eax + 0xb8], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xb8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8927fe: jle 0x892839 */
  if ((zf || sf != of)) goto L_892839;
L_892800: /* 892800: mov esi, dword ptr [eax + 0xb4] */
  esi = R32((uint32_t)(eax + 0xb4u));
/* 892806: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 892809: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 89280c: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 89280e: mov ecx, 0xc */
  ecx = 0xcu;
/* 892813: lea edi, [ebp - 0x98] */
  edi = (uint32_t)(ebp + 0xffffff68u);
/* 892819: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89281b: mov esi, dword ptr [0xcfa1c4] */
  esi = R32((uint32_t)(0xcfa1c4u));
/* 892821: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 892824: mov ecx, 0xc */
  ecx = 0xcu;
/* 892829: lea edi, [ebp - 0xc8] */
  edi = (uint32_t)(ebp + 0xffffff38u);
/* 89282f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 892831: jmp 0x892843 */
  goto L_892843;
L_892833: /* 892833: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 892834: jmp 0x8927b4 */
  goto L_8927b4;
L_892839: /* 892839: xor eax, eax */
  eax = 0;
/* 89283b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89283d: je 0x89298b */
  if (zf) goto L_89298b;
L_892843: /* 892843: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 892846: mov edi, dword ptr [edx + 0xec] */
  edi = R32((uint32_t)(edx + 0xecu));
/* 89284c: lea eax, [ebp - 0x98] */
  eax = (uint32_t)(ebp + 0xffffff68u);
/* 892852: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 892853: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 892856: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 892857: lea ecx, [ebp - 0xc8] */
  ecx = (uint32_t)(ebp + 0xffffff38u);
/* 89285d: call dword ptr [0xcfab50] */
  esp -= 4; W32(esp, 0x892863u); SPILL(); f_4e39bd(); if (g_unwind) return; /* Core!?ApplyPivot@FCoords@@QBE?AV1@ABV1@@Z */ RELOAD();
/* 892863: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 892866: lea edx, [ebp - 0x5c] */
  edx = (uint32_t)(ebp + 0xffffffa4u);
/* 892869: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89286a: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 89286d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89286e: lea ecx, [esi + 0x208] */
  ecx = (uint32_t)(esi + 0x208u);
/* 892874: call dword ptr [0xcfa888] */
  esp -= 4; W32(esp, 0x89287au); SPILL(); f_4e24e6(); if (g_unwind) return; /* Core!?TransformVectorBy@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 89287a: lea ecx, [esi + 0x214] */
  ecx = (uint32_t)(esi + 0x214u);
/* 892880: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 892881: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 892887: lea edx, [ebp - 0xf8] */
  edx = (uint32_t)(ebp + 0xffffff08u);
/* 89288d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89288e: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 892891: call dword ptr [0xcfa1d0] */
  esp -= 4; W32(esp, 0x892897u); SPILL(); f_4e2086(); if (g_unwind) return; /* Core!??KFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 892897: test byte ptr [esi + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 89289e: je 0x8928b6 */
  if (zf) goto L_8928b6;
L_8928a0: /* 8928a0: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 8928a6: mov ecx, dword ptr [eax + 0xec] */
  ecx = R32((uint32_t)(eax + 0xecu));
/* 8928ac: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8928ae: je 0x8928b6 */
  if (zf) goto L_8928b6;
L_8928b0: /* 8928b0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8928b2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8928b3: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x8928b6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8928b6: /* 8928b6: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 8928b9: add edi, 0xc0 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xc0u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8928bf: fadd dword ptr [ebp - 0x5c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa4u)));
/* 8928c2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8928c3: lea ecx, [ebp - 0x158] */
  ecx = (uint32_t)(ebp + 0xfffffea8u);
/* 8928c9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8928ca: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 8928cd: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 8928d0: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 8928d3: fadd dword ptr [ebp - 0x58] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 8928d6: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 8928d9: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8928dc: fadd dword ptr [ebp - 0x54] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffacu)));
/* 8928df: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 8928e2: call dword ptr [0xcfa564] */
  esp -= 4; W32(esp, 0x8928e8u); SPILL(); f_4e1721(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 8928e8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8928ea: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8928ed: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8928f0: lea ebx, [esi + 0x170] */
  ebx = (uint32_t)(esi + 0x170u);
/* 8928f6: mov dword ptr [ebx], ecx */
  W32((uint32_t)(ebx), ecx);
/* 8928f8: mov dword ptr [ebx + 4], edx */
  W32((uint32_t)(ebx + 0x4u), edx);
/* 8928fb: lea edx, [ebp - 0xf8] */
  edx = (uint32_t)(ebp + 0xffffff08u);
/* 892901: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 892902: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 892905: mov dword ptr [ebx + 8], eax */
  W32((uint32_t)(ebx + 0x8u), eax);
/* 892908: call dword ptr [0xcfaba4] */
  esp -= 4; W32(esp, 0x89290eu); SPILL(); f_4e2d33(); if (g_unwind) return; /* Core!??XFCoords@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 89290e: lea eax, [ebp - 0x158] */
  eax = (uint32_t)(ebp + 0xfffffea8u);
/* 892914: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 892915: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 892918: call dword ptr [0xcfa2f8] */
  esp -= 4; W32(esp, 0x89291eu); SPILL(); f_4e1c17(); if (g_unwind) return; /* Core!?Transpose@FCoords@@QBE?AV1@XZ */ RELOAD();
/* 89291e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 89291f: lea ecx, [ebp - 0x128] */
  ecx = (uint32_t)(ebp + 0xfffffed8u);
/* 892925: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 892926: mov ecx, eax */
  ecx = eax;
/* 892928: call dword ptr [0xcfa564] */
  esp -= 4; W32(esp, 0x89292eu); SPILL(); f_4e1721(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 89292e: lea edx, [ebp - 0x68] */
  edx = (uint32_t)(ebp + 0xffffff98u);
/* 892931: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 892932: lea ecx, [ebp - 0x128] */
  ecx = (uint32_t)(ebp + 0xfffffed8u);
/* 892938: call dword ptr [0xcfa568] */
  esp -= 4; W32(esp, 0x89293eu); SPILL(); f_4e1a69(); if (g_unwind) return; /* Core!?OrthoRotation@FCoords@@QBE?AVFRotator@@XZ */ RELOAD();
/* 89293e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 892940: lea ecx, [esi + 0x17c] */
  ecx = (uint32_t)(esi + 0x17cu);
/* 892946: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 892948: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 89294b: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 89294e: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 892951: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 892954: test byte ptr [esi + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 89295b: je 0x892973 */
  if (zf) goto L_892973;
L_89295d: /* 89295d: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 892963: mov ecx, dword ptr [eax + 0xec] */
  ecx = R32((uint32_t)(eax + 0xecu));
/* 892969: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89296b: je 0x892973 */
  if (zf) goto L_892973;
L_89296d: /* 89296d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 89296f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 892970: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x892973u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_892973: /* 892973: mov eax, 1 */
  eax = 0x1u;
/* 892978: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 89297b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 892982: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 892983: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 892984: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 892985: mov esp, ebp */
  esp = ebp;
/* 892987: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 892988: ret 8 */
  esp += 12; SPILL(); return;
L_89298b: /* 89298b: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 89298e: add ecx, 0xac */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xacu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 892994: call dword ptr [0xcfa56c] */
  esp -= 4; W32(esp, 0x89299au); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* 89299a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89299b: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 8929a0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8929a2: push 0xae8160 */
  { uint32_t v = 0xae8160u; esp -= 4; W32(esp, v); }
/* 8929a7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8929a8: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8929aeu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8929ae: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8929b1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8929b4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8929b5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8929b6: xor eax, eax */
  eax = 0;
/* 8929b8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8929bf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8929c0: mov esp, ebp */
  esp = ebp;
/* 8929c2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8929c3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8929c6(void) {
  LOAD_REGS();
L_8929c6: /* 8929c6: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8929c9: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8929ce: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8929d1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8929d2: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8929d5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8929dau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8929da(); return;
}

void f_8929da(void) {
  LOAD_REGS();
L_8929da: /* 8929da: push 0xa1a400 */
  { uint32_t v = 0xa1a400u; esp -= 4; W32(esp, v); }
/* 8929df: push 0xae81a4 */
  { uint32_t v = 0xae81a4u; esp -= 4; W32(esp, v); }
/* 8929e4: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8929eau); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8929ea: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8929ed: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8929ef: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8929f1: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8929f6u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8929f6: guest_badaddr(0x8929f6); return;
}

void f_892ae0(void) {
  LOAD_REGS();
L_892ae0: /* 892ae0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 892ae1: mov ebp, esp */
  ebp = esp;
/* 892ae3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 892ae5: push 0x9d57b0 */
  { uint32_t v = 0x9d57b0u; esp -= 4; W32(esp, v); }
/* 892aea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 892af0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 892af1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 892af8: sub esp, 0xf0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xf0u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 892afe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 892aff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 892b00: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 892b03: mov ecx, dword ptr [ecx + 0x2c] */
  ecx = R32((uint32_t)(ecx + 0x2cu));
/* 892b06: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 892b08: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 892b09: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 892b0c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 892b13: je 0x892e36 */
  if (zf) goto L_892e36;
L_892b19: /* 892b19: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 892b1e: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 892b21: je 0x892b41 */
  if (zf) goto L_892b41;
L_892b23: /* 892b23: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x892b29u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 892b29: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 892b2f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 892b31: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 892b32: push 0xae81d0 */
  { uint32_t v = 0xae81d0u; esp -= 4; W32(esp, v); }
/* 892b37: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 892b38: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x892b3eu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 892b3e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_892b41: /* 892b41: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 892b44: lea ecx, [eax + 0x170] */
  ecx = (uint32_t)(eax + 0x170u);
/* 892b4a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 892b4c: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 892b4f: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 892b52: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 892b55: add eax, 0x17c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 892b5a: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 892b5c: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 892b5f: mov ebx, dword ptr [eax + 8] */
  ebx = R32((uint32_t)(eax + 0x8u));
/* 892b62: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 892b65: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 892b68: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 892b6a: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 892b6d: je 0x892b86 */
  if (zf) goto L_892b86;
L_892b6f: /* 892b6f: push 0xce2cc8 */
  { uint32_t v = 0xce2cc8u; esp -= 4; W32(esp, v); }
/* 892b74: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x892b7au); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 892b7a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 892b7c: je 0x892b86 */
  if (zf) goto L_892b86;
L_892b7e: /* 892b7e: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 892b81: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
/* 892b84: jmp 0x892b8d */
  goto L_892b8d;
L_892b86: /* 892b86: mov dword ptr [ebp + 8], 0 */
  W32((uint32_t)(ebp + 0x8u), 0x0u);
L_892b8d: /* 892b8d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 892b8f: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 892b92: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x892b98u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 892b98: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 892b9b: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 892b9e: add ecx, 0x30 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 892ba1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 892ba2: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x892ba8u); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 892ba8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 892baa: je 0x892c73 */
  if (zf) goto L_892c73;
L_892bb0: /* 892bb0: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 892bb3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 892bb5: je 0x892d10 */
  if (zf) goto L_892d10;
L_892bbb: /* 892bbb: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 892bbe: test byte ptr [eax + 0x4c], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x4cu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 892bc2: jne 0x892d10 */
  if (!zf) goto L_892d10;
L_892bc8: /* 892bc8: mov edx, dword ptr [eax + 0x30] */
  edx = R32((uint32_t)(eax + 0x30u));
/* 892bcb: add eax, 0x30 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 892bce: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 892bcf: call 0x6cceaa */
  esp -= 4; W32(esp, 0x892bd4u); SPILL(); f_6cceaa(); if (g_unwind) return; RELOAD();
/* 892bd4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 892bd7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 892bd8: lea eax, [ebp - 0x9c] */
  eax = (uint32_t)(ebp + 0xffffff64u);
/* 892bde: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 892bdf: call 0x6c5060 */
  esp -= 4; W32(esp, 0x892be4u); SPILL(); f_6c5060(); if (g_unwind) return; RELOAD();
/* 892be4: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 892be7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 892be8: lea ecx, [ebp - 0x9c] */
  ecx = (uint32_t)(ebp + 0xffffff64u);
/* 892bee: call dword ptr [0xcfaba8] */
  esp -= 4; W32(esp, 0x892bf4u); SPILL(); f_4e405c(); if (g_unwind) return; /* Core!?Inverse@FCoords@@QBE?AV1@XZ */ RELOAD();
/* 892bf4: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 892bf7: lea edx, [ebp - 0x6c] */
  edx = (uint32_t)(ebp + 0xffffff94u);
/* 892bfa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 892bfb: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 892bfe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 892bff: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* 892c02: call dword ptr [0xcfa888] */
  esp -= 4; W32(esp, 0x892c08u); SPILL(); f_4e24e6(); if (g_unwind) return; /* Core!?TransformVectorBy@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 892c08: fld dword ptr [ebp - 0x94] */
  { double v = F32((uint32_t)(ebp + 0xffffff6cu)); FPUSH(v); }
/* 892c0e: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 892c11: add esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 892c14: fld dword ptr [ebp - 0x98] */
  { double v = F32((uint32_t)(ebp + 0xffffff68u)); FPUSH(v); }
/* 892c1a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 892c1b: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 892c1e: fld dword ptr [ebp - 0x9c] */
  { double v = F32((uint32_t)(ebp + 0xffffff64u)); FPUSH(v); }
/* 892c24: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 892c26: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 892c29: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 892c2c: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 892c2f: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 892c32: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 892c35: lea ecx, [ebp - 0xcc] */
  ecx = (uint32_t)(ebp + 0xffffff34u);
/* 892c3b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 892c3c: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 892c3f: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 892c45: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 892c48: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 892c4b: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 892c4e: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 892c51: call dword ptr [0xcfa1d0] */
  esp -= 4; W32(esp, 0x892c57u); SPILL(); f_4e2086(); if (g_unwind) return; /* Core!??KFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 892c57: lea edx, [ebp - 0x6c] */
  edx = (uint32_t)(ebp + 0xffffff94u);
/* 892c5a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 892c5b: lea ecx, [ebp - 0xfc] */
  ecx = (uint32_t)(ebp + 0xffffff04u);
/* 892c61: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 892c62: mov ecx, eax */
  ecx = eax;
/* 892c64: call dword ptr [0xcfa564] */
  esp -= 4; W32(esp, 0x892c6au); SPILL(); f_4e1721(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 892c6a: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 892c6d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 892c6e: jmp 0x892d00 */
  goto L_892d00;
L_892c73: /* 892c73: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 892c76: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 892c7c: add eax, 0x17c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 892c81: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 892c82: lea eax, [ebp - 0x6c] */
  eax = (uint32_t)(ebp + 0xffffff94u);
/* 892c85: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 892c86: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 892c89: call dword ptr [0xcfa2d0] */
  esp -= 4; W32(esp, 0x892c8fu); SPILL(); f_4e1bd1(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 892c8f: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 892c92: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 892c95: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 892c96: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 892c99: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 892c9a: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* 892c9d: call dword ptr [0xcfa888] */
  esp -= 4; W32(esp, 0x892ca3u); SPILL(); f_4e24e6(); if (g_unwind) return; /* Core!?TransformVectorBy@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 892ca3: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 892ca6: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 892ca9: add esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 892cac: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 892caf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 892cb0: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 892cb3: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 892cb6: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 892cb8: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 892cbb: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 892cbe: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 892cc1: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 892cc4: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 892cc7: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 892cca: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 892cd0: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 892cd3: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 892cd6: lea eax, [ebp - 0xfc] */
  eax = (uint32_t)(ebp + 0xffffff04u);
/* 892cdc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 892cdd: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 892ce0: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 892ce3: call dword ptr [0xcfa1d0] */
  esp -= 4; W32(esp, 0x892ce9u); SPILL(); f_4e2086(); if (g_unwind) return; /* Core!??KFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 892ce9: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 892cec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 892ced: lea edx, [ebp - 0xcc] */
  edx = (uint32_t)(ebp + 0xffffff34u);
/* 892cf3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 892cf4: mov ecx, eax */
  ecx = eax;
/* 892cf6: call dword ptr [0xcfa564] */
  esp -= 4; W32(esp, 0x892cfcu); SPILL(); f_4e1721(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 892cfc: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 892cff: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
L_892d00: /* 892d00: mov ecx, eax */
  ecx = eax;
/* 892d02: call dword ptr [0xcfa568] */
  esp -= 4; W32(esp, 0x892d08u); SPILL(); f_4e1a69(); if (g_unwind) return; /* Core!?OrthoRotation@FCoords@@QBE?AVFRotator@@XZ */ RELOAD();
/* 892d08: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 892d0a: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 892d0d: mov ebx, dword ptr [eax + 8] */
  ebx = R32((uint32_t)(eax + 0x8u));
L_892d10: /* 892d10: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 892d13: mov edx, dword ptr [eax + 0xb4] */
  edx = R32((uint32_t)(eax + 0xb4u));
/* 892d19: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 892d1b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 892d1c: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 892d21: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 892d23: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 892d25: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 892d26: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 892d29: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 892d2b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 892d2e: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 892d31: mov edx, esp */
  edx = esp;
/* 892d33: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 892d35: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 892d38: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 892d3b: mov dword ptr [edx + 8], ebx */
  W32((uint32_t)(edx + 0x8u), ebx);
/* 892d3e: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 892d41: mov eax, esp */
  eax = esp;
/* 892d43: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 892d45: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 892d48: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 892d49: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 892d4c: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 892d4f: mov ecx, esp */
  ecx = esp;
/* 892d51: mov dword ptr [ebp - 0x38], esp */
  W32((uint32_t)(ebp + 0xffffffc8u), esp);
/* 892d54: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 892d56: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x892d5cu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 892d5c: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 892d5f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 892d62: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 892d65: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 892d67: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 892d68: call dword ptr [edx + 0xac] */
  { uint32_t t = R32((uint32_t)(edx + 0xacu)); esp -= 4; W32(esp, 0x892d6eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 892d6e: mov esi, eax */
  esi = eax;
/* 892d70: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 892d72: je 0x892e36 */
  if (zf) goto L_892e36;
L_892d78: /* 892d78: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 892d7a: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 892d7d: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x892d83u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 892d83: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 892d86: lea ebx, [edi + 0x50] */
  ebx = (uint32_t)(edi + 0x50u);
/* 892d89: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 892d8a: mov ecx, ebx */
  ecx = ebx;
/* 892d8c: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x892d92u); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 892d92: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 892d94: je 0x892d9e */
  if (zf) goto L_892d9e;
L_892d96: /* 892d96: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 892d98: mov dword ptr [esi + 0x100], edx */
  W32((uint32_t)(esi + 0x100u), edx);
L_892d9e: /* 892d9e: mov eax, dword ptr [edi + 0x54] */
  eax = R32((uint32_t)(edi + 0x54u));
/* 892da1: mov dword ptr [esi + 0x284], eax */
  W32((uint32_t)(esi + 0x284u), eax);
/* 892da7: lea ecx, [edi + 0x58] */
  ecx = (uint32_t)(edi + 0x58u);
/* 892daa: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 892dac: lea edx, [esi + 0x288] */
  edx = (uint32_t)(esi + 0x288u);
/* 892db2: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 892db4: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 892db7: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 892dba: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 892dbd: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 892dc0: test byte ptr [edi + 0x4c], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x4cu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 892dc4: je 0x892e29 */
  if (zf) goto L_892e29;
L_892dc6: /* 892dc6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 892dc9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 892dcb: je 0x892e29 */
  if (zf) goto L_892e29;
L_892dcd: /* 892dcd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 892dcf: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 892dd2: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x892dd8u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 892dd8: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 892ddb: lea ebx, [edi + 0x30] */
  ebx = (uint32_t)(edi + 0x30u);
/* 892dde: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 892ddf: mov ecx, ebx */
  ecx = ebx;
/* 892de1: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x892de7u); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 892de7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 892de9: je 0x892e29 */
  if (zf) goto L_892e29;
L_892deb: /* 892deb: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 892ded: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 892df0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 892df1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 892df2: call 0x6c4b8d */
  esp -= 4; W32(esp, 0x892df7u); SPILL(); f_6c4b8d(); if (g_unwind) return; RELOAD();
/* 892df7: lea ecx, [edi + 0x34] */
  ecx = (uint32_t)(edi + 0x34u);
/* 892dfa: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 892dfc: lea edx, [esi + 0x208] */
  edx = (uint32_t)(esi + 0x208u);
/* 892e02: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 892e04: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 892e07: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 892e0a: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 892e0d: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 892e10: lea edx, [edi + 0x40] */
  edx = (uint32_t)(edi + 0x40u);
/* 892e13: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 892e15: lea eax, [esi + 0x214] */
  eax = (uint32_t)(esi + 0x214u);
/* 892e1b: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 892e1d: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 892e20: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 892e23: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 892e26: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
L_892e29: /* 892e29: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 892e2e: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 892e31: je 0x892e36 */
  if (zf) goto L_892e36;
L_892e33: /* 892e33: mov dword ptr [edi + 0x64], esi */
  W32((uint32_t)(edi + 0x64u), esi);
L_892e36: /* 892e36: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 892e39: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 892e3a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 892e3b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 892e42: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 892e43: mov esp, ebp */
  esp = ebp;
/* 892e45: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 892e46: ret 8 */
  esp += 12; SPILL(); return;
}

void f_892e49(void) {
  LOAD_REGS();
L_892e49: /* 892e49: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 892e4c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 892e51: lea edx, [ebp - 0x34] */
  edx = (uint32_t)(ebp + 0xffffffccu);
/* 892e54: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 892e55: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 892e58: call 0x99caf8 */
  esp -= 4; W32(esp, 0x892e5du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_892e5d(); return;
}

void f_892e5d(void) {
  LOAD_REGS();
L_892e5d: /* 892e5d: push 0xa1a458 */
  { uint32_t v = 0xa1a458u; esp -= 4; W32(esp, v); }
/* 892e62: push 0xae8210 */
  { uint32_t v = 0xae8210u; esp -= 4; W32(esp, v); }
/* 892e67: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x892e6du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 892e6d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 892e70: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 892e72: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 892e74: call 0x99caf8 */
  esp -= 4; W32(esp, 0x892e79u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_892e79: guest_badaddr(0x892e79); return;
}

void f_892f70(void) {
  LOAD_REGS();
L_892f70: /* 892f70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 892f71: mov ebp, esp */
  ebp = esp;
/* 892f73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 892f75: push 0x9d57c0 */
  { uint32_t v = 0x9d57c0u; esp -= 4; W32(esp, v); }
/* 892f7a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 892f80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 892f81: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 892f88: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 892f8b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 892f8c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 892f8d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 892f8e: mov esi, ecx */
  esi = ecx;
/* 892f90: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 892f93: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 892f95: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 892f98: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 892f9b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 892fa2: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x892fa8u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 892fa8: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 892fab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 892fac: lea ecx, [esi + 0x2c] */
  ecx = (uint32_t)(esi + 0x2cu);
/* 892faf: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x892fb5u); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 892fb5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 892fb7: je 0x89306f */
  if (zf) goto L_89306f;
L_892fbd: /* 892fbd: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 892fc0: mov eax, dword ptr [edi + 0xb4] */
  eax = R32((uint32_t)(edi + 0xb4u));
/* 892fc6: mov eax, dword ptr [eax + 0x30] */
  eax = R32((uint32_t)(eax + 0x30u));
/* 892fc9: lea ebx, [eax - 1] */
  ebx = (uint32_t)(eax + 0xffffffffu);
/* 892fcc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_892fd0: /* 892fd0: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 892fd2: jl 0x89306f */
  if ((sf != of)) goto L_89306f;
L_892fd8: /* 892fd8: mov eax, dword ptr [edi + 0xb4] */
  eax = R32((uint32_t)(edi + 0xb4u));
/* 892fde: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 892fe1: mov esi, dword ptr [ecx + ebx*4] */
  esi = R32((uint32_t)(ecx + ebx*4));
/* 892fe4: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 892fe6: je 0x89303c */
  if (zf) goto L_89303c;
L_892fe8: /* 892fe8: cmp dword ptr [esi + 0x58], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x58u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 892feb: jne 0x89303c */
  if (!zf) goto L_89303c;
L_892fed: /* 892fed: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 892ff0: add edx, 0x2c */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 892ff3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 892ff4: lea ecx, [esi + 0x100] */
  ecx = (uint32_t)(esi + 0x100u);
/* 892ffa: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x893000u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 893000: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 893002: je 0x89303c */
  if (zf) goto L_89303c;
L_893004: /* 893004: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 893007: test byte ptr [eax + 0x30], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x30u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 89300b: je 0x89302b */
  if (zf) goto L_89302b;
L_89300d: /* 89300d: push 0xcc6848 */
  { uint32_t v = 0xcc6848u; esp -= 4; W32(esp, v); }
/* 893012: mov ecx, esi */
  ecx = esi;
/* 893014: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x89301au); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 89301a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89301c: je 0x89302b */
  if (zf) goto L_89302b;
L_89301e: /* 89301e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 893020: mov ecx, esi */
  ecx = esi;
/* 893022: call dword ptr [edx + 0x198] */
  { uint32_t t = R32((uint32_t)(edx + 0x198u)); esp -= 4; W32(esp, 0x893028u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 893028: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 893029: jmp 0x892fd0 */
  goto L_892fd0;
L_89302b: /* 89302b: mov ecx, dword ptr [edi + 0xb4] */
  ecx = R32((uint32_t)(edi + 0xb4u));
/* 893031: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 893033: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 893035: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 893036: call dword ptr [eax + 0xa4] */
  { uint32_t t = R32((uint32_t)(eax + 0xa4u)); esp -= 4; W32(esp, 0x89303cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_89303c: /* 89303c: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 89303d: jmp 0x892fd0 */
  goto L_892fd0;
L_89306f: /* 89306f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 893072: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 893073: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 893074: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 89307b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 89307c: mov esp, ebp */
  esp = ebp;
/* 89307e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 89307f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_89303f(void) {
  LOAD_REGS();
L_89303f: /* 89303f: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 893042: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 893047: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 89304a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89304b: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 89304e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x893053u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_893053(); return;
}

void f_893053(void) {
  LOAD_REGS();
L_893053: /* 893053: push 0xa1a498 */
  { uint32_t v = 0xa1a498u; esp -= 4; W32(esp, v); }
/* 893058: push 0xae8240 */
  { uint32_t v = 0xae8240u; esp -= 4; W32(esp, v); }
/* 89305d: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x893063u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 893063: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 893066: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 893068: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89306a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x89306fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 89306f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 893072: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 893073: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 893074: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 89307b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 89307c: mov esp, ebp */
  esp = ebp;
/* 89307e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 89307f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8930e0(void) {
  LOAD_REGS();
L_8930e0: /* 8930e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8930e1: mov ebp, esp */
  ebp = esp;
/* 8930e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8930e5: push 0x9d57d0 */
  { uint32_t v = 0x9d57d0u; esp -= 4; W32(esp, v); }
/* 8930ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8930f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8930f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8930f8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8930fb: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 893100: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 893102: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 893103: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 893104: mov ebx, ecx */
  ebx = ecx;
/* 893106: xor ecx, ecx */
  ecx = 0;
/* 893108: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89310a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 89310b: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 89310e: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* 893111: je 0x89314b */
  if (zf) goto L_89314b;
L_893113: /* 893113: mov ecx, ebx */
  ecx = ebx;
/* 893115: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x89311bu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 89311b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89311c: push 0xae8410 */
  { uint32_t v = 0xae8410u; esp -= 4; W32(esp, v); }
L_893121: /* 893121: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 893127: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 893129: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* 89312e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89312f: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x893135u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 893135: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_893138: /* 893138: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 89313b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 893142: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 893143: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 893144: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 893145: mov esp, ebp */
  esp = ebp;
/* 893147: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 893148: ret 8 */
  esp += 12; SPILL(); return;
L_89314b: /* 89314b: cmp dword ptr [ebx + 0x2c], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x2cu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89314e: je 0x893138 */
  if (zf) goto L_893138;
L_893150: /* 893150: xor esi, esi */
  esi = 0;
L_893152: /* 893152: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 893155: mov eax, dword ptr [eax + 0xb4] */
  eax = R32((uint32_t)(eax + 0xb4u));
/* 89315b: cmp ecx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89315e: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 893161: jge 0x8931a4 */
  if ((sf == of)) goto L_8931a4;
L_893163: /* 893163: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 893166: mov edi, dword ptr [edx + ecx*4] */
  edi = R32((uint32_t)(edx + ecx*4));
/* 893169: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89316b: je 0x893252 */
  if (zf) goto L_893252;
L_893171: /* 893171: mov eax, dword ptr [edi + 0x80] */
  eax = R32((uint32_t)(edi + 0x80u));
/* 893177: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 89317a: jne 0x893252 */
  if (!zf) goto L_893252;
L_893180: /* 893180: push 0xcda028 */
  { uint32_t v = 0xcda028u; esp -= 4; W32(esp, v); }
/* 893185: mov ecx, edi */
  ecx = edi;
/* 893187: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x89318du); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 89318d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89318f: je 0x89324f */
  if (zf) goto L_89324f;
L_893195: /* 893195: test byte ptr [edi + 0x374], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x374u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 89319c: je 0x89324f */
  if (zf) goto L_89324f;
L_8931a2: /* 8931a2: mov esi, edi */
  esi = edi;
L_8931a4: /* 8931a4: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8931a6: je 0x893258 */
  if (zf) goto L_893258;
L_8931ac: /* 8931ac: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8931ae: lea edi, [esi + 0x388] */
  edi = (uint32_t)(esi + 0x388u);
/* 8931b4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8931b6: mov ecx, edi */
  ecx = edi;
/* 8931b8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8931beu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8931be: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8931c0: mov edx, dword ptr [ebx + 0x2c] */
  edx = R32((uint32_t)(ebx + 0x2cu));
/* 8931c3: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 8931c6: fld dword ptr [esi + 0x378] */
  { double v = F32((uint32_t)(esi + 0x378u)); FPUSH(v); }
/* 8931cc: fdiv dword ptr [esi + 0x368] */
  ST0 = ST0 / (F32((uint32_t)(esi + 0x368u)));
/* 8931d2: mov eax, dword ptr [ebx + 0x2c] */
  eax = R32((uint32_t)(ebx + 0x2cu));
/* 8931d5: fstp dword ptr [eax + 0x44] */
  WF32((uint32_t)(eax + 0x44u), ST0); FPOP();
/* 8931d8: mov eax, dword ptr [ebx + 0x2c] */
  eax = R32((uint32_t)(ebx + 0x2cu));
/* 8931db: fld dword ptr [eax + 0x2c] */
  { double v = F32((uint32_t)(eax + 0x2cu)); FPUSH(v); }
/* 8931de: fadd dword ptr [esi + 0x378] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x378u)));
/* 8931e4: fdiv dword ptr [esi + 0x368] */
  ST0 = ST0 / (F32((uint32_t)(esi + 0x368u)));
/* 8931ea: fstp dword ptr [eax + 0x48] */
  WF32((uint32_t)(eax + 0x48u), ST0); FPOP();
/* 8931ed: mov eax, dword ptr [ebx + 0x2c] */
  eax = R32((uint32_t)(ebx + 0x2cu));
/* 8931f0: fld dword ptr [eax + 0x48] */
  { double v = F32((uint32_t)(eax + 0x48u)); FPUSH(v); }
/* 8931f3: fsub dword ptr [eax + 0x44] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x44u)));
/* 8931f6: fstp dword ptr [eax + 0x4c] */
  WF32((uint32_t)(eax + 0x4cu), ST0); FPOP();
/* 8931f9: mov ecx, dword ptr [ebx + 0x2c] */
  ecx = R32((uint32_t)(ebx + 0x2cu));
/* 8931fc: mov byte ptr [ecx + 0x34], 1 */
  W8((uint32_t)(ecx + 0x34u), 0x1u);
/* 893200: mov ecx, esi */
  ecx = esi;
/* 893202: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x893208u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 893208: mov ecx, dword ptr [ebx + 0x2c] */
  ecx = R32((uint32_t)(ebx + 0x2cu));
/* 89320b: mov esi, eax */
  esi = eax;
/* 89320d: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x893213u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 893213: mov ecx, ebx */
  ecx = ebx;
/* 893215: mov edi, eax */
  edi = eax;
/* 893217: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x89321du); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 89321d: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 893223: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 893224: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 893225: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 893226: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 893228: push 0xae8468 */
  { uint32_t v = 0xae8468u; esp -= 4; W32(esp, v); }
/* 89322d: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* 893232: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 893233: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x893239u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 893239: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 89323c: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89323f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 893240: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 893241: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 893248: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 893249: mov esp, ebp */
  esp = ebp;
/* 89324b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 89324c: ret 8 */
  esp += 12; SPILL(); return;
L_89324f: /* 89324f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_893252: /* 893252: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 893253: jmp 0x893152 */
  goto L_893152;
L_893258: /* 893258: mov ecx, ebx */
  ecx = ebx;
/* 89325a: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x893260u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 893260: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 893261: push 0xae84e8 */
  { uint32_t v = 0xae84e8u; esp -= 4; W32(esp, v); }
/* 893266: jmp 0x893121 */
  goto L_893121;
}

void f_89326b(void) {
  LOAD_REGS();
L_89326b: /* 89326b: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 89326e: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 893273: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 893276: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 893277: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 89327a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x89327fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_89327f(); return;
}

void f_89327f(void) {
  LOAD_REGS();
L_89327f: /* 89327f: push 0xa1a4f0 */
  { uint32_t v = 0xa1a4f0u; esp -= 4; W32(esp, v); }
/* 893284: push 0xae8568 */
  { uint32_t v = 0xae8568u; esp -= 4; W32(esp, v); }
/* 893289: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x89328fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 89328f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 893292: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 893294: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 893296: call 0x99caf8 */
  esp -= 4; W32(esp, 0x89329bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_89329b: guest_badaddr(0x89329b); return;
}

void f_893310(void) {
  LOAD_REGS();
L_893310: /* 893310: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 893311: mov ebp, esp */
  ebp = esp;
/* 893313: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 893315: push 0x9d57e0 */
  { uint32_t v = 0x9d57e0u; esp -= 4; W32(esp, v); }
/* 89331a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 893320: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 893321: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 893328: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89332b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 89332c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 89332d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 893330: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 893331: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 893334: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 893337: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 893339: xor ebx, ebx */
  ebx = 0;
/* 89333b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 89333c: mov ecx, edi */
  ecx = edi;
/* 89333e: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 893341: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x893347u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 893347: mov ecx, esi */
  ecx = esi;
/* 893349: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x89334fu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 89334f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 893351: je 0x8933bf */
  if (zf) goto L_8933bf;
L_893353: /* 893353: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 893356: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 893357: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 893358: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x89335eu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 89335e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 893361: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 893364: xor eax, eax */
  eax = 0;
L_893366: /* 893366: cmp eax, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 893369: jge 0x89336e */
  if ((sf == of)) goto L_89336e;
L_89336b: /* 89336b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 89336c: jmp 0x893366 */
  goto L_893366;
L_89336e: /* 89336e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89336f: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 893371: mov ecx, edi */
  ecx = edi;
/* 893373: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x893379u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 893379: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_893380: /* 893380: cmp ebx, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 893383: jge 0x8933f1 */
  if ((sf == of)) goto L_8933f1;
L_893385: /* 893385: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 893387: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 893389: mov ecx, edi */
  ecx = edi;
/* 89338b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x893391u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 893391: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 893394: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 893396: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 893399: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  ecx = r;
  }
/* 89339b: je 0x8933b0 */
  if (zf) goto L_8933b0;
L_89339d: /* 89339d: call dword ptr [0xcfa434] */
  esp -= 4; W32(esp, 0x8933a3u); SPILL(); f_4e125d(); if (g_unwind) return; /* Core!??0FCoords@@QAE@XZ */ RELOAD();
/* 8933a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8933a4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8933a5: call 0x6c97d2 */
  esp -= 4; W32(esp, 0x8933aau); SPILL(); f_6c97d2(); if (g_unwind) return; RELOAD();
/* 8933aa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8933ad: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8933ae: jmp 0x893380 */
  goto L_893380;
L_8933b0: /* 8933b0: xor eax, eax */
  eax = 0;
/* 8933b2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8933b3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8933b4: call 0x6c97d2 */
  esp -= 4; W32(esp, 0x8933b9u); SPILL(); f_6c97d2(); if (g_unwind) return; RELOAD();
/* 8933b9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8933bc: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8933bd: jmp 0x893380 */
  goto L_893380;
L_8933bf: /* 8933bf: lea ebx, [edi + 4] */
  ebx = (uint32_t)(edi + 0x4u);
/* 8933c2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8933c3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8933c4: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x8933cau); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 8933ca: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8933cd: xor esi, esi */
  esi = 0;
/* 8933cf: nop  */
L_8933d0: /* 8933d0: cmp esi, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8933d2: jge 0x8933ee */
  if ((sf == of)) goto L_8933ee;
L_8933d4: /* 8933d4: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8933d6: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8933d9: lea ecx, [esi + esi*2] */
  ecx = (uint32_t)(esi + esi*2);
/* 8933dc: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8933df: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8933e1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8933e2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8933e3: call 0x6c97d2 */
  esp -= 4; W32(esp, 0x8933e8u); SPILL(); f_6c97d2(); if (g_unwind) return; RELOAD();
/* 8933e8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8933eb: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8933ec: jmp 0x8933d0 */
  goto L_8933d0;
L_8933ee: /* 8933ee: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_8933f1: /* 8933f1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8933f4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8933f5: mov eax, esi */
  eax = esi;
/* 8933f7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8933f8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8933ff: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 893400: mov esp, ebp */
  esp = ebp;
/* 893402: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 893403: ret  */
  esp += 4; SPILL(); return;
}

void f_893404(void) {
  LOAD_REGS();
L_893404: /* 893404: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 893407: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 89340c: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 89340f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 893410: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 893413: call 0x99caf8 */
  esp -= 4; W32(esp, 0x893418u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_893418(); return;
}

void f_893418(void) {
  LOAD_REGS();
L_893418: /* 893418: push 0xa1a540 */
  { uint32_t v = 0xa1a540u; esp -= 4; W32(esp, v); }
/* 89341d: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 893422: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x893428u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 893428: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89342b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89342d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89342f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x893434u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_893434: guest_badaddr(0x893434); return;
}

void f_893490(void) {
  LOAD_REGS();
L_893490: /* 893490: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 893491: mov ebp, esp */
  ebp = esp;
/* 893493: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 893495: push 0x9d57f0 */
  { uint32_t v = 0x9d57f0u; esp -= 4; W32(esp, v); }
/* 89349a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8934a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8934a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8934a8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8934ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8934ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8934ad: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8934b0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8934b1: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 8934b4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8934b7: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 8934b9: xor ebx, ebx */
  ebx = 0;
/* 8934bb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8934bc: mov ecx, edi */
  ecx = edi;
/* 8934be: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 8934c1: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x8934c7u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 8934c7: mov ecx, esi */
  ecx = esi;
/* 8934c9: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x8934cfu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 8934cf: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8934d1: je 0x89354b */
  if (zf) goto L_89354b;
L_8934d3: /* 8934d3: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8934d6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8934d7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8934d8: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x8934deu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 8934de: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8934e1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8934e4: xor eax, eax */
  eax = 0;
L_8934e6: /* 8934e6: cmp eax, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8934e9: jge 0x8934ee */
  if ((sf == of)) goto L_8934ee;
L_8934eb: /* 8934eb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8934ec: jmp 0x8934e6 */
  goto L_8934e6;
L_8934ee: /* 8934ee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8934ef: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 8934f1: mov ecx, edi */
  ecx = edi;
/* 8934f3: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8934f9u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8934f9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_893500: /* 893500: cmp ebx, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 893503: jge 0x893580 */
  if ((sf == of)) goto L_893580;
L_893505: /* 893505: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 893507: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 893509: mov ecx, edi */
  ecx = edi;
/* 89350b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x893511u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 893511: imul eax, eax, 0x70 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x70u);
  eax = (uint32_t)r;
  }
/* 893514: add eax, dword ptr [edi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 893516: mov esi, eax */
  esi = eax;
/* 893518: je 0x893536 */
  if (zf) goto L_893536;
L_89351a: /* 89351a: mov ecx, esi */
  ecx = esi;
/* 89351c: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x893522u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 893522: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 893525: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x89352bu); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 89352b: lea ecx, [esi + 0x6c] */
  ecx = (uint32_t)(esi + 0x6cu);
/* 89352e: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x893534u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 893534: jmp 0x893538 */
  goto L_893538;
L_893536: /* 893536: xor esi, esi */
  esi = 0;
L_893538: /* 893538: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 89353b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 89353c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89353d: call 0x6cceb9 */
  esp -= 4; W32(esp, 0x893542u); SPILL(); f_6cceb9(); if (g_unwind) return; RELOAD();
/* 893542: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 893545: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 893548: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 893549: jmp 0x893500 */
  goto L_893500;
L_89354b: /* 89354b: lea ebx, [edi + 4] */
  ebx = (uint32_t)(edi + 0x4u);
/* 89354e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 89354f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 893550: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x893556u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 893556: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 893559: xor esi, esi */
  esi = 0;
/* 89355b: jmp 0x893560 */
  goto L_893560;
L_893560: /* 893560: cmp esi, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 893562: jge 0x89357d */
  if ((sf == of)) goto L_89357d;
L_893564: /* 893564: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 893566: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 893569: mov edx, esi */
  edx = esi;
/* 89356b: imul edx, edx, 0x70 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x70u);
  edx = (uint32_t)r;
  }
/* 89356e: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 893570: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 893571: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 893572: call 0x6cceb9 */
  esp -= 4; W32(esp, 0x893577u); SPILL(); f_6cceb9(); if (g_unwind) return; RELOAD();
/* 893577: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89357a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 89357b: jmp 0x893560 */
  goto L_893560;
L_89357d: /* 89357d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_893580: /* 893580: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 893583: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 893584: mov eax, esi */
  eax = esi;
/* 893586: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 893587: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 89358e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 89358f: mov esp, ebp */
  esp = ebp;
/* 893591: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 893592: ret  */
  esp += 4; SPILL(); return;
}

void f_89355d(void) {
  LOAD_REGS();
L_89355d: /* 89355d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_893560: /* 893560: cmp esi, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 893562: jge 0x89357d */
  if ((sf == of)) goto L_89357d;
L_893564: /* 893564: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 893566: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 893569: mov edx, esi */
  edx = esi;
/* 89356b: imul edx, edx, 0x70 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x70u);
  edx = (uint32_t)r;
  }
/* 89356e: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 893570: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 893571: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 893572: call 0x6cceb9 */
  esp -= 4; W32(esp, 0x893577u); SPILL(); f_6cceb9(); if (g_unwind) return; RELOAD();
/* 893577: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89357a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 89357b: jmp 0x893560 */
  goto L_893560;
L_89357d: /* 89357d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 893580: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 893583: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 893584: mov eax, esi */
  eax = esi;
/* 893586: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 893587: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 89358e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 89358f: mov esp, ebp */
  esp = ebp;
/* 893591: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 893592: ret  */
  esp += 4; SPILL(); return;
}

void f_893593(void) {
  LOAD_REGS();
L_893593: /* 893593: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 893596: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 89359b: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 89359e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89359f: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8935a2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8935a7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8935a7(); return;
}

void f_8935a7(void) {
  LOAD_REGS();
L_8935a7: /* 8935a7: push 0xa1a558 */
  { uint32_t v = 0xa1a558u; esp -= 4; W32(esp, v); }
/* 8935ac: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 8935b1: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8935b7u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8935b7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8935ba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8935bc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8935be: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8935c3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8935c3: guest_badaddr(0x8935c3); return;
}

void f_893620(void) {
  LOAD_REGS();
L_893620: /* 893620: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 893621: mov ebp, esp */
  ebp = esp;
/* 893623: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 893625: push 0x9d5800 */
  { uint32_t v = 0x9d5800u; esp -= 4; W32(esp, v); }
/* 89362a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 893630: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 893631: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 893638: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89363b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 89363c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 89363d: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 893640: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 893641: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 893644: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 893647: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* 893649: xor ebx, ebx */
  ebx = 0;
/* 89364b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 89364c: mov ecx, esi */
  ecx = esi;
/* 89364e: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 893651: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x893657u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 893657: mov ecx, edi */
  ecx = edi;
/* 893659: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x89365fu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 89365f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 893661: je 0x893716 */
  if (zf) goto L_893716;
L_893667: /* 893667: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 89366a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89366b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 89366c: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x893672u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 893672: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 893675: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 893678: xor eax, eax */
  eax = 0;
/* 89367a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_893680: /* 893680: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 893683: jge 0x893688 */
  if ((sf == of)) goto L_893688;
L_893685: /* 893685: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 893686: jmp 0x893680 */
  goto L_893680;
L_893688: /* 893688: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 893689: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* 89368b: mov ecx, esi */
  ecx = esi;
/* 89368d: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x893693u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 893693: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 893696: mov ebx, dword ptr [0xcfa1b4] */
  ebx = R32((uint32_t)(0xcfa1b4u));
/* 89369c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8936a0: /* 8936a0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8936a3: cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8936a6: jge 0x89377f */
  if ((sf == of)) goto L_89377f;
L_8936ac: /* 8936ac: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* 8936ae: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8936b0: mov ecx, esi */
  ecx = esi;
/* 8936b2: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8936b8u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8936b8: imul eax, eax, 0x3c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x3cu);
  eax = (uint32_t)r;
  }
/* 8936bb: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 8936bd: mov esi, eax */
  esi = eax;
/* 8936bf: je 0x8936d5 */
  if (zf) goto L_8936d5;
L_8936c1: /* 8936c1: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 8936c4: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x8936cau); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 8936ca: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 8936cd: call dword ptr [0xcfa434] */
  esp -= 4; W32(esp, 0x8936d3u); SPILL(); f_4e125d(); if (g_unwind) return; /* Core!??0FCoords@@QAE@XZ */ RELOAD();
/* 8936d3: jmp 0x8936d7 */
  goto L_8936d7;
L_8936d5: /* 8936d5: xor esi, esi */
  esi = 0;
L_8936d7: /* 8936d7: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8936da: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8936db: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8936dc: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x8936e2u); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* 8936e2: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8936e4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8936e7: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 8936ea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8936eb: mov ecx, eax */
  ecx = eax;
/* 8936ed: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x8936f0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8936f0: lea edx, [esi + 8] */
  edx = (uint32_t)(esi + 0x8u);
/* 8936f3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8936f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8936f5: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8936f7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8936f7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8936fa: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8936fd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8936fe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8936ff: call 0x6c97d2 */
  esp -= 4; W32(esp, 0x893704u); SPILL(); f_6c97d2(); if (g_unwind) return; RELOAD();
/* 893704: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 893707: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 89370a: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 89370d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 893710: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 893711: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 893714: jmp 0x8936a0 */
  goto L_8936a0;
L_893716: /* 893716: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 893719: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89371a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 89371b: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x893721u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 893721: mov ebx, dword ptr [0xcfa280] */
  ebx = R32((uint32_t)(0xcfa280u));
/* 893727: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89372a: xor edi, edi */
  edi = 0;
/* 89372c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_893730: /* 893730: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 893733: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 893735: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 893738: jge 0x89377c */
  if ((sf == of)) goto L_89377c;
L_89373a: /* 89373a: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 89373d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 89373f: mov esi, edi */
  esi = edi;
/* 893741: imul esi, esi, 0x3c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x3cu);
  esi = (uint32_t)r;
  }
/* 893744: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 893746: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 893749: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 89374a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89374b: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x89374du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89374d: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 89374f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 893752: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 893755: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 893756: mov ecx, eax */
  ecx = eax;
/* 893758: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x89375bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89375b: lea edx, [esi + 8] */
  edx = (uint32_t)(esi + 0x8u);
/* 89375e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89375f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 893760: call dword ptr [0xcfa1b4] */
  esp -= 4; W32(esp, 0x893766u); SPILL(); f_4e415b(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAM@Z */ RELOAD();
/* 893766: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 893769: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 89376c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 89376d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89376e: call 0x6c97d2 */
  esp -= 4; W32(esp, 0x893773u); SPILL(); f_6c97d2(); if (g_unwind) return; RELOAD();
/* 893773: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 893776: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 893779: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 89377a: jmp 0x893730 */
  goto L_893730;
L_89377c: /* 89377c: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
L_89377f: /* 89377f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 893782: mov eax, edi */
  eax = edi;
/* 893784: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 893785: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 893786: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 89378d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 89378e: mov esp, ebp */
  esp = ebp;
/* 893790: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 893791: ret  */
  esp += 4; SPILL(); return;
}

void f_893792(void) {
  LOAD_REGS();
L_893792: /* 893792: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 893795: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 89379a: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 89379d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89379e: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8937a1: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8937a6u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8937a6(); return;
}

void f_8937a6(void) {
  LOAD_REGS();
L_8937a6: /* 8937a6: push 0xa1a570 */
  { uint32_t v = 0xa1a570u; esp -= 4; W32(esp, v); }
/* 8937ab: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 8937b0: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8937b6u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8937b6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8937b9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8937bb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8937bd: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8937c2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8937c2: guest_badaddr(0x8937c2); return;
}

void f_893840(void) {
  LOAD_REGS();
L_893840: /* 893840: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 893841: mov ebp, esp */
  ebp = esp;
/* 893843: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 893845: push 0x9d5810 */
  { uint32_t v = 0x9d5810u; esp -= 4; W32(esp, v); }
/* 89384a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 893850: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 893851: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 893858: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89385b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 89385c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 89385d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 893860: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 893861: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 893864: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 893867: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 893869: xor ebx, ebx */
  ebx = 0;
/* 89386b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 89386c: mov ecx, edi */
  ecx = edi;
/* 89386e: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 893871: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x893877u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 893877: mov ecx, esi */
  ecx = esi;
/* 893879: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x89387fu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 89387f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 893881: je 0x8938f3 */
  if (zf) goto L_8938f3;
L_893883: /* 893883: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 893886: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 893887: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 893888: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x89388eu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 89388e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 893891: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 893894: xor eax, eax */
  eax = 0;
L_893896: /* 893896: cmp eax, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 893899: jge 0x89389e */
  if ((sf == of)) goto L_89389e;
L_89389b: /* 89389b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 89389c: jmp 0x893896 */
  goto L_893896;
L_89389e: /* 89389e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89389f: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 8938a1: mov ecx, edi */
  ecx = edi;
/* 8938a3: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8938a9u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8938a9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8938b0: /* 8938b0: cmp ebx, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8938b3: jge 0x893923 */
  if ((sf == of)) goto L_893923;
L_8938b5: /* 8938b5: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 8938b7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8938b9: mov ecx, edi */
  ecx = edi;
/* 8938bb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8938c1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8938c1: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 8938c4: add eax, dword ptr [edi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 8938c6: mov esi, eax */
  esi = eax;
/* 8938c8: je 0x8938de */
  if (zf) goto L_8938de;
L_8938ca: /* 8938ca: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 8938cd: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x8938d3u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 8938d3: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 8938d6: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x8938dcu); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 8938dc: jmp 0x8938e0 */
  goto L_8938e0;
L_8938de: /* 8938de: xor esi, esi */
  esi = 0;
L_8938e0: /* 8938e0: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8938e3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8938e4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8938e5: call 0x6cc2e3 */
  esp -= 4; W32(esp, 0x8938eau); SPILL(); f_6cc2e3(); if (g_unwind) return; RELOAD();
/* 8938ea: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8938ed: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8938f0: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8938f1: jmp 0x8938b0 */
  goto L_8938b0;
L_8938f3: /* 8938f3: lea ebx, [edi + 4] */
  ebx = (uint32_t)(edi + 0x4u);
/* 8938f6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8938f7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8938f8: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x8938feu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 8938fe: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 893901: xor esi, esi */
  esi = 0;
L_893903: /* 893903: cmp esi, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 893905: jge 0x893920 */
  if ((sf == of)) goto L_893920;
L_893907: /* 893907: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 893909: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 89390c: mov edx, esi */
  edx = esi;
/* 89390e: imul edx, edx, 0x2c */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x2cu);
  edx = (uint32_t)r;
  }
/* 893911: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 893913: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 893914: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 893915: call 0x6cc2e3 */
  esp -= 4; W32(esp, 0x89391au); SPILL(); f_6cc2e3(); if (g_unwind) return; RELOAD();
/* 89391a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89391d: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 89391e: jmp 0x893903 */
  goto L_893903;
L_893920: /* 893920: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_893923: /* 893923: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 893926: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 893927: mov eax, esi */
  eax = esi;
/* 893929: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 89392a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 893931: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 893932: mov esp, ebp */
  esp = ebp;
/* 893934: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 893935: ret  */
  esp += 4; SPILL(); return;
}

void f_893936(void) {
  LOAD_REGS();
L_893936: /* 893936: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 893939: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 89393e: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 893941: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 893942: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 893945: call 0x99caf8 */
  esp -= 4; W32(esp, 0x89394au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_89394a(); return;
}

void f_89394a(void) {
  LOAD_REGS();
L_89394a: /* 89394a: push 0xa1a588 */
  { uint32_t v = 0xa1a588u; esp -= 4; W32(esp, v); }
/* 89394f: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 893954: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x89395au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 89395a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89395d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89395f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 893961: call 0x99caf8 */
  esp -= 4; W32(esp, 0x893966u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_893966: guest_badaddr(0x893966); return;
}

void f_8939c0(void) {
  LOAD_REGS();
L_8939c0: /* 8939c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8939c1: mov ebp, esp */
  ebp = esp;
/* 8939c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8939c5: push 0x9d5820 */
  { uint32_t v = 0x9d5820u; esp -= 4; W32(esp, v); }
/* 8939ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8939d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8939d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8939d8: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8939db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8939dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8939dd: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8939e0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8939e1: mov ecx, esi */
  ecx = esi;
/* 8939e3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8939e6: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8939ed: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x8939f3u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 8939f3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8939f5: mov ecx, esi */
  ecx = esi;
/* 8939f7: je 0x893aae */
  if (zf) goto L_893aae;
L_8939fd: /* 8939fd: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 893a04: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x893a0au); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 893a0a: cmp eax, 0x3d */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 893a0d: jg 0x893a3a */
  if ((!zf && sf == of)) goto L_893a3a;
L_893a0f: /* 893a0f: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 893a12: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 893a14: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 893a15: mov ecx, esi */
  ecx = esi;
/* 893a17: call dword ptr [eax + 0x40] */
  { uint32_t t = R32((uint32_t)(eax + 0x40u)); esp -= 4; W32(esp, 0x893a1au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 893a1a: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 893a1d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 893a1e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 893a1f: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x893a25u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 893a25: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 893a27: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 893a2a: mov ecx, esi */
  ecx = esi;
/* 893a2c: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x893a2fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 893a2f: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 893a32: lea edx, [eax + ecx*2] */
  edx = (uint32_t)(eax + ecx*2);
/* 893a35: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 893a38: jmp 0x893a80 */
  goto L_893a80;
L_893a3a: /* 893a3a: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 893a3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 893a3e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 893a3f: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x893a45u); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* 893a45: mov ecx, dword ptr [0xcfa40c] */
  ecx = R32((uint32_t)(0xcfa40cu));
/* 893a4b: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 893a4d: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 893a50: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 893a53: test al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 893a55: je 0x893a78 */
  if (zf) goto L_893a78;
L_893a57: /* 893a57: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 893a59: je 0x893a6a */
  if (zf) goto L_893a6a;
L_893a5b: /* 893a5b: lea eax, [edi + 0xc] */
  eax = (uint32_t)(edi + 0xcu);
/* 893a5e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 893a5f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 893a60: call 0x6c67cb */
  esp -= 4; W32(esp, 0x893a65u); SPILL(); f_6c67cb(); if (g_unwind) return; RELOAD();
/* 893a65: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 893a68: jmp 0x893a80 */
  goto L_893a80;
L_893a6a: /* 893a6a: xor eax, eax */
  eax = 0;
/* 893a6c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 893a6d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 893a6e: call 0x6c67cb */
  esp -= 4; W32(esp, 0x893a73u); SPILL(); f_6c67cb(); if (g_unwind) return; RELOAD();
/* 893a73: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 893a76: jmp 0x893a80 */
  goto L_893a80;
L_893a78: /* 893a78: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 893a7a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 893a7b: mov ecx, esi */
  ecx = esi;
/* 893a7d: call dword ptr [edx + 0x40] */
  { uint32_t t = R32((uint32_t)(edx + 0x40u)); esp -= 4; W32(esp, 0x893a80u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_893a80: /* 893a80: mov eax, dword ptr [0xcfa408] */
  eax = R32((uint32_t)(0xcfa408u));
/* 893a85: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 893a88: jne 0x893a90 */
  if (!zf) goto L_893a90;
L_893a8a: /* 893a8a: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 893a8c: mov ecx, edi */
  ecx = edi;
/* 893a8e: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x893a90u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_893a90: /* 893a90: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 893a93: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 893a95: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 893a96: mov ecx, esi */
  ecx = esi;
/* 893a98: call dword ptr [eax + 0x3c] */
  { uint32_t t = R32((uint32_t)(eax + 0x3cu)); esp -= 4; W32(esp, 0x893a9bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 893a9b: mov eax, esi */
  eax = esi;
/* 893a9d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 893aa0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 893aa7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 893aa8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 893aa9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 893aaa: mov esp, ebp */
  esp = ebp;
/* 893aac: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 893aad: ret  */
  esp += 4; SPILL(); return;
L_893aae: /* 893aae: call dword ptr [0xcfa404] */
  esp -= 4; W32(esp, 0x893ab4u); SPILL(); f_4e423c(); if (g_unwind) return; /* Core!?IsSaving@FArchive@@QAEHXZ */ RELOAD();
/* 893ab4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 893ab6: je 0x893b34 */
  if (zf) goto L_893b34;
L_893ab8: /* 893ab8: mov ecx, esi */
  ecx = esi;
/* 893aba: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x893ac0u); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 893ac0: cmp eax, 0x3d */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 893ac3: jle 0x893b34 */
  if ((zf || sf != of)) goto L_893b34;
L_893ac5: /* 893ac5: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 893ac7: mov ecx, esi */
  ecx = esi;
/* 893ac9: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x893accu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 893acc: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 893acf: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 893ad2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 893ad4: je 0x893adb */
  if (zf) goto L_893adb;
L_893ad6: /* 893ad6: lea edi, [eax + 0xc] */
  edi = (uint32_t)(eax + 0xcu);
/* 893ad9: jmp 0x893add */
  goto L_893add;
L_893adb: /* 893adb: xor edi, edi */
  edi = 0;
L_893add: /* 893add: mov ebx, dword ptr [0xcfa280] */
  ebx = R32((uint32_t)(0xcfa280u));
/* 893ae3: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 893ae6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 893ae7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 893ae8: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x893aeau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 893aea: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 893aed: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 893aee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 893aef: call 0x6c67cb */
  esp -= 4; W32(esp, 0x893af4u); SPILL(); f_6c67cb(); if (g_unwind) return; RELOAD();
/* 893af4: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 893af6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 893af9: mov ecx, esi */
  ecx = esi;
/* 893afb: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x893afeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 893afe: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 893b01: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 893b04: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 893b06: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 893b07: mov ecx, esi */
  ecx = esi;
/* 893b09: call dword ptr [eax + 0x3c] */
  { uint32_t t = R32((uint32_t)(eax + 0x3cu)); esp -= 4; W32(esp, 0x893b0cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 893b0c: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 893b0f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 893b10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 893b11: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x893b13u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 893b13: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 893b16: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 893b18: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 893b1b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 893b1c: mov ecx, esi */
  ecx = esi;
/* 893b1e: call dword ptr [eax + 0x3c] */
  { uint32_t t = R32((uint32_t)(eax + 0x3cu)); esp -= 4; W32(esp, 0x893b21u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 893b21: mov eax, esi */
  eax = esi;
/* 893b23: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 893b26: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 893b2d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 893b2e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 893b2f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 893b30: mov esp, ebp */
  esp = ebp;
/* 893b32: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 893b33: ret  */
  esp += 4; SPILL(); return;
L_893b34: /* 893b34: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 893b37: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 893b39: je 0x893b40 */
  if (zf) goto L_893b40;
L_893b3b: /* 893b3b: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 893b3e: jmp 0x893b42 */
  goto L_893b42;
L_893b40: /* 893b40: xor eax, eax */
  eax = 0;
L_893b42: /* 893b42: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 893b43: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 893b44: call 0x6c67cb */
  esp -= 4; W32(esp, 0x893b49u); SPILL(); f_6c67cb(); if (g_unwind) return; RELOAD();
/* 893b49: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 893b4c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 893b4f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 893b50: mov eax, esi */
  eax = esi;
/* 893b52: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 893b53: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 893b5a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 893b5b: mov esp, ebp */
  esp = ebp;
/* 893b5d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 893b5e: ret  */
  esp += 4; SPILL(); return;
}

void f_893b5f(void) {
  LOAD_REGS();
L_893b5f: /* 893b5f: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 893b62: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 893b67: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 893b6a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 893b6b: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 893b6e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x893b73u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_893b73(); return;
}

void f_893b73(void) {
  LOAD_REGS();
L_893b73: /* 893b73: push 0xa1a5a0 */
  { uint32_t v = 0xa1a5a0u; esp -= 4; W32(esp, v); }
/* 893b78: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 893b7d: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x893b83u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 893b83: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 893b86: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 893b88: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 893b8a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x893b8fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_893b8f: guest_badaddr(0x893b8f); return;
}

void f_893c10(void) {
  LOAD_REGS();
L_893c10: /* 893c10: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 893c11: mov ebp, esp */
  ebp = esp;
/* 893c13: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 893c15: push 0x9d5830 */
  { uint32_t v = 0x9d5830u; esp -= 4; W32(esp, v); }
/* 893c1a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 893c20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 893c21: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 893c28: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 893c2b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 893c2c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 893c2d: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 893c30: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 893c31: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 893c34: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 893c37: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 893c39: xor ebx, ebx */
  ebx = 0;
/* 893c3b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 893c3c: mov ecx, esi */
  ecx = esi;
/* 893c3e: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 893c41: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x893c47u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 893c47: mov ecx, edi */
  ecx = edi;
/* 893c49: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x893c4fu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 893c4f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 893c51: je 0x893d0f */
  if (zf) goto L_893d0f;
L_893c57: /* 893c57: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 893c5a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 893c5b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 893c5c: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x893c62u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 893c62: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 893c65: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 893c68: xor eax, eax */
  eax = 0;
/* 893c6a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_893c70: /* 893c70: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 893c73: jge 0x893c78 */
  if ((sf == of)) goto L_893c78;
L_893c75: /* 893c75: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 893c76: jmp 0x893c70 */
  goto L_893c70;
L_893c78: /* 893c78: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 893c79: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 893c7b: mov ecx, esi */
  ecx = esi;
/* 893c7d: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x893c83u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 893c83: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 893c86: mov ebx, dword ptr [0xcfa280] */
  ebx = R32((uint32_t)(0xcfa280u));
/* 893c8c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_893c90: /* 893c90: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 893c93: cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 893c96: jge 0x893d7c */
  if ((sf == of)) goto L_893d7c;
L_893c9c: /* 893c9c: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 893c9e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 893ca0: mov ecx, esi */
  ecx = esi;
/* 893ca2: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x893ca8u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 893ca8: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 893caa: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 893cad: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 893caf: mov esi, eax */
  esi = eax;
/* 893cb1: je 0x893cc6 */
  if (zf) goto L_893cc6;
L_893cb3: /* 893cb3: mov ecx, esi */
  ecx = esi;
/* 893cb5: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x893cbbu); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 893cbb: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 893cbe: call dword ptr [0xcfa2d8] */
  esp -= 4; W32(esp, 0x893cc4u); SPILL(); f_4e36de(); if (g_unwind) return; /* Core!??0FQuat@@QAE@XZ */ RELOAD();
/* 893cc4: jmp 0x893cc8 */
  goto L_893cc8;
L_893cc6: /* 893cc6: xor esi, esi */
  esi = 0;
L_893cc8: /* 893cc8: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 893ccb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 893ccd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 893cce: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x893cd1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 893cd1: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 893cd4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 893cd5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 893cd6: call dword ptr [0xcfa27c] */
  esp -= 4; W32(esp, 0x893cdcu); SPILL(); f_4e4165(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAK@Z */ RELOAD();
/* 893cdc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 893cdf: lea edx, [esi + 8] */
  edx = (uint32_t)(esi + 0x8u);
/* 893ce2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 893ce3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 893ce4: call 0x6c6e88 */
  esp -= 4; W32(esp, 0x893ce9u); SPILL(); f_6c6e88(); if (g_unwind) return; RELOAD();
/* 893ce9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 893cec: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 893cef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 893cf0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 893cf1: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x893cf3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 893cf3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 893cf6: add esi, 0x34 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 893cf9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 893cfa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 893cfb: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x893cfdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 893cfd: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 893d00: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 893d03: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 893d06: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 893d09: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 893d0a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 893d0d: jmp 0x893c90 */
  goto L_893c90;
L_893d0f: /* 893d0f: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 893d12: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 893d13: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 893d14: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x893d1au); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 893d1a: mov ebx, dword ptr [0xcfa280] */
  ebx = R32((uint32_t)(0xcfa280u));
/* 893d20: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 893d23: xor edi, edi */
  edi = 0;
L_893d25: /* 893d25: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 893d28: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 893d2a: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 893d2d: jge 0x893d79 */
  if ((sf == of)) goto L_893d79;
L_893d2f: /* 893d2f: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 893d32: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 893d34: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 893d37: mov esi, edi */
  esi = edi;
/* 893d39: shl esi, 6 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 893d3c: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 893d3e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 893d40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 893d41: call dword ptr [eax + 0x1c] */
  { uint32_t t = R32((uint32_t)(eax + 0x1cu)); esp -= 4; W32(esp, 0x893d44u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 893d44: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 893d47: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 893d48: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 893d49: call dword ptr [0xcfa27c] */
  esp -= 4; W32(esp, 0x893d4fu); SPILL(); f_4e4165(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAK@Z */ RELOAD();
/* 893d4f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 893d52: lea edx, [esi + 8] */
  edx = (uint32_t)(esi + 0x8u);
/* 893d55: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 893d56: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 893d57: call 0x6c6e88 */
  esp -= 4; W32(esp, 0x893d5cu); SPILL(); f_6c6e88(); if (g_unwind) return; RELOAD();
/* 893d5c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 893d5f: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 893d62: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 893d63: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 893d64: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x893d66u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 893d66: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 893d69: add esi, 0x34 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 893d6c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 893d6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 893d6e: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x893d70u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 893d70: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 893d73: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 893d76: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 893d77: jmp 0x893d25 */
  goto L_893d25;
L_893d79: /* 893d79: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
L_893d7c: /* 893d7c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 893d7f: mov eax, edi */
  eax = edi;
/* 893d81: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 893d82: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 893d83: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 893d8a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 893d8b: mov esp, ebp */
  esp = ebp;
/* 893d8d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 893d8e: ret  */
  esp += 4; SPILL(); return;
}

void f_893d8f(void) {
  LOAD_REGS();
L_893d8f: /* 893d8f: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 893d92: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 893d97: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 893d9a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 893d9b: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 893d9e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x893da3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_893da3(); return;
}

void f_893da3(void) {
  LOAD_REGS();
L_893da3: /* 893da3: push 0xa1a5c0 */
  { uint32_t v = 0xa1a5c0u; esp -= 4; W32(esp, v); }
/* 893da8: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 893dad: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x893db3u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 893db3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 893db6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 893db8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 893dba: call 0x99caf8 */
  esp -= 4; W32(esp, 0x893dbfu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_893dbf: guest_badaddr(0x893dbf); return;
}

void f_893e30(void) {
  LOAD_REGS();
L_893e30: /* 893e30: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 893e31: mov ebp, esp */
  ebp = esp;
/* 893e33: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 893e35: push 0x9d5840 */
  { uint32_t v = 0x9d5840u; esp -= 4; W32(esp, v); }
/* 893e3a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 893e40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 893e41: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 893e48: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 893e4b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 893e4c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 893e4d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 893e50: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 893e51: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 893e54: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 893e57: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 893e59: xor ebx, ebx */
  ebx = 0;
/* 893e5b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 893e5c: mov ecx, edi */
  ecx = edi;
/* 893e5e: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 893e61: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x893e67u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 893e67: mov ecx, esi */
  ecx = esi;
/* 893e69: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x893e6fu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 893e6f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 893e71: je 0x893ed8 */
  if (zf) goto L_893ed8;
L_893e73: /* 893e73: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 893e76: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 893e77: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 893e78: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x893e7eu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 893e7e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 893e81: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 893e84: xor eax, eax */
  eax = 0;
L_893e86: /* 893e86: cmp eax, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 893e89: jge 0x893e8e */
  if ((sf == of)) goto L_893e8e;
L_893e8b: /* 893e8b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 893e8c: jmp 0x893e86 */
  goto L_893e86;
L_893e8e: /* 893e8e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 893e8f: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 893e91: mov ecx, edi */
  ecx = edi;
/* 893e93: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x893e99u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 893e99: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 893e9c: mov ebx, dword ptr [0xcfa354] */
  ebx = R32((uint32_t)(0xcfa354u));
L_893ea2: /* 893ea2: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 893ea5: cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 893ea8: jge 0x893f0f */
  if ((sf == of)) goto L_893f0f;
L_893eaa: /* 893eaa: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 893eac: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 893eae: mov ecx, edi */
  ecx = edi;
/* 893eb0: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x893eb6u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 893eb6: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 893eb8: lea esi, [edx + eax*4] */
  esi = (uint32_t)(edx + eax*4);
/* 893ebb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 893ebe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 893ebf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 893ec0: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x893ec2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 893ec2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 893ec5: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 893ec8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 893ec9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 893eca: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x893eccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 893ecc: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 893ecf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 893ed2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 893ed3: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 893ed6: jmp 0x893ea2 */
  goto L_893ea2;
L_893ed8: /* 893ed8: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
/* 893edb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 893edc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 893edd: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x893ee3u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 893ee3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_893ee6: /* 893ee6: cmp ebx, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 893ee9: jge 0x893f0f */
  if ((sf == of)) goto L_893f0f;
L_893eeb: /* 893eeb: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 893eed: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 893ef0: lea esi, [ecx + ebx*4] */
  esi = (uint32_t)(ecx + ebx*4);
/* 893ef3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 893ef4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 893ef5: call dword ptr [0xcfa354] */
  esp -= 4; W32(esp, 0x893efbu); SPILL(); f_4e4147(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAG@Z */ RELOAD();
/* 893efb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 893efe: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 893f01: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 893f02: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 893f03: call dword ptr [0xcfa354] */
  esp -= 4; W32(esp, 0x893f09u); SPILL(); f_4e4147(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAG@Z */ RELOAD();
/* 893f09: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 893f0c: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 893f0d: jmp 0x893ee6 */
  goto L_893ee6;
L_893f0f: /* 893f0f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 893f12: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 893f15: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 893f16: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 893f17: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 893f1e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 893f1f: mov esp, ebp */
  esp = ebp;
/* 893f21: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 893f22: ret  */
  esp += 4; SPILL(); return;
}

void f_893f23(void) {
  LOAD_REGS();
L_893f23: /* 893f23: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 893f26: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 893f2b: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 893f2e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 893f2f: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 893f32: call 0x99caf8 */
  esp -= 4; W32(esp, 0x893f37u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_893f37(); return;
}

void f_893f37(void) {
  LOAD_REGS();
L_893f37: /* 893f37: push 0xa1a5d8 */
  { uint32_t v = 0xa1a5d8u; esp -= 4; W32(esp, v); }
/* 893f3c: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 893f41: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x893f47u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 893f47: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 893f4a: xor ebx, ebx */
  ebx = 0;
/* 893f4c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 893f4d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 893f4e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x893f53u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_893f53: guest_badaddr(0x893f53); return;
}

void f_893fb0(void) {
  LOAD_REGS();
L_893fb0: /* 893fb0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 893fb1: mov ebp, esp */
  ebp = esp;
/* 893fb3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 893fb5: push 0x9d5850 */
  { uint32_t v = 0x9d5850u; esp -= 4; W32(esp, v); }
/* 893fba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 893fc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 893fc1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 893fc8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 893fcb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 893fcc: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 893fcf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 893fd0: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 893fd3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 893fd4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 893fd7: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 893fd9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 893fda: mov ecx, esi */
  ecx = esi;
/* 893fdc: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 893fe3: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x893fe9u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 893fe9: mov ecx, ebx */
  ecx = ebx;
/* 893feb: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x893ff1u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 893ff1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 893ff3: je 0x894045 */
  if (zf) goto L_894045;
L_893ff5: /* 893ff5: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 893ff8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 893ff9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 893ffa: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x894000u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 894000: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 894003: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 894006: xor eax, eax */
  eax = 0;
L_894008: /* 894008: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89400b: jge 0x894010 */
  if ((sf == of)) goto L_894010;
L_89400d: /* 89400d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 89400e: jmp 0x894008 */
  goto L_894008;
L_894010: /* 894010: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 894011: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 894013: mov ecx, esi */
  ecx = esi;
/* 894015: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x89401bu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 89401b: xor edi, edi */
  edi = 0;
/* 89401d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_894020: /* 894020: cmp edi, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 894023: jge 0x894070 */
  if ((sf == of)) goto L_894070;
L_894025: /* 894025: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 894027: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 894029: mov ecx, esi */
  ecx = esi;
/* 89402b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x894031u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 894031: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 894033: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 894036: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 894038: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 894039: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 89403a: call 0x6cc1c1 */
  esp -= 4; W32(esp, 0x89403fu); SPILL(); f_6cc1c1(); if (g_unwind) return; RELOAD();
/* 89403f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 894042: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 894043: jmp 0x894020 */
  goto L_894020;
L_894045: /* 894045: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 894048: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 894049: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 89404a: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x894050u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 894050: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 894053: xor edi, edi */
  edi = 0;
L_894055: /* 894055: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 894058: jge 0x894070 */
  if ((sf == of)) goto L_894070;
L_89405a: /* 89405a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 89405c: mov ecx, edi */
  ecx = edi;
/* 89405e: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 894061: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 894063: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 894064: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 894065: call 0x6cc1c1 */
  esp -= 4; W32(esp, 0x89406au); SPILL(); f_6cc1c1(); if (g_unwind) return; RELOAD();
/* 89406a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89406d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 89406e: jmp 0x894055 */
  goto L_894055;
L_894070: /* 894070: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 894073: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 894074: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 894075: mov eax, ebx */
  eax = ebx;
/* 894077: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 89407e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 89407f: mov esp, ebp */
  esp = ebp;
/* 894081: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 894082: ret  */
  esp += 4; SPILL(); return;
}

void f_894083(void) {
  LOAD_REGS();
L_894083: /* 894083: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 894086: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 89408b: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 89408e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89408f: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 894092: call 0x99caf8 */
  esp -= 4; W32(esp, 0x894097u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_894097(); return;
}

void f_894097(void) {
  LOAD_REGS();
L_894097: /* 894097: push 0xa1a5f0 */
  { uint32_t v = 0xa1a5f0u; esp -= 4; W32(esp, v); }
/* 89409c: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 8940a1: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8940a7u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8940a7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8940aa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8940ac: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8940ae: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8940b3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8940b3: guest_badaddr(0x8940b3); return;
}

void f_894110(void) {
  LOAD_REGS();
L_894110: /* 894110: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 894111: mov ebp, esp */
  ebp = esp;
/* 894113: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 894115: push 0x9d5860 */
  { uint32_t v = 0x9d5860u; esp -= 4; W32(esp, v); }
/* 89411a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 894120: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 894121: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 894128: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89412b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 89412c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 89412d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 894130: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 894131: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 894134: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 894137: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 894139: xor ebx, ebx */
  ebx = 0;
/* 89413b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 89413c: mov ecx, edi */
  ecx = edi;
/* 89413e: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 894141: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x894147u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 894147: mov ecx, esi */
  ecx = esi;
/* 894149: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x89414fu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 89414f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 894151: je 0x89420a */
  if (zf) goto L_89420a;
L_894157: /* 894157: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 89415a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89415b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 89415c: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x894162u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 894162: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 894165: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 894168: xor eax, eax */
  eax = 0;
/* 89416a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_894170: /* 894170: cmp eax, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 894173: jge 0x894178 */
  if ((sf == of)) goto L_894178;
L_894175: /* 894175: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 894176: jmp 0x894170 */
  goto L_894170;
L_894178: /* 894178: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 894179: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 89417b: mov ecx, edi */
  ecx = edi;
/* 89417d: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x894183u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 894183: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 894186: jmp 0x894190 */
  goto L_894190;
L_894190: /* 894190: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 894193: cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 894196: jge 0x89426d */
  if ((sf == of)) goto L_89426d;
L_89419c: /* 89419c: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 89419e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8941a0: mov ecx, edi */
  ecx = edi;
/* 8941a2: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8941a8u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8941a8: lea edx, [eax + eax*4] */
  edx = (uint32_t)(eax + eax*4);
/* 8941ab: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8941ad: lea esi, [eax + edx*4] */
  esi = (uint32_t)(eax + edx*4);
/* 8941b0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8941b2: je 0x8941c0 */
  if (zf) goto L_8941c0;
L_8941b4: /* 8941b4: mov ecx, esi */
  ecx = esi;
/* 8941b6: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x8941bcu); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 8941bc: mov ebx, esi */
  ebx = esi;
/* 8941be: jmp 0x8941c2 */
  goto L_8941c2;
L_8941c0: /* 8941c0: xor ebx, ebx */
  ebx = 0;
L_8941c2: /* 8941c2: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8941c5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8941c7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8941c8: lea esi, [ebx + 4] */
  esi = (uint32_t)(ebx + 0x4u);
/* 8941cb: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x8941ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8941ce: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8941cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8941d0: call dword ptr [0xcfa1b4] */
  esp -= 4; W32(esp, 0x8941d6u); SPILL(); f_4e415b(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAM@Z */ RELOAD();
/* 8941d6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8941d9: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 8941dc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8941dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8941de: call dword ptr [0xcfa1b4] */
  esp -= 4; W32(esp, 0x8941e4u); SPILL(); f_4e415b(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAM@Z */ RELOAD();
/* 8941e4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8941e7: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8941ea: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8941eb: mov esi, dword ptr [0xcfa1b4] */
  esi = R32((uint32_t)(0xcfa1b4u));
/* 8941f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8941f2: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8941f4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8941f4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8941f7: add ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8941fa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8941fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8941fc: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8941feu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8941fe: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 894201: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 894204: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 894205: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 894208: jmp 0x894190 */
  goto L_894190;
L_89420a: /* 89420a: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
/* 89420d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89420e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 89420f: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x894215u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 894215: mov ebx, dword ptr [0xcfa1b4] */
  ebx = R32((uint32_t)(0xcfa1b4u));
/* 89421b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89421e: xor eax, eax */
  eax = 0;
/* 894220: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_894223: /* 894223: cmp eax, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 894226: jge 0x89426d */
  if ((sf == of)) goto L_89426d;
L_894228: /* 894228: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 89422b: lea edx, [eax + eax*4] */
  edx = (uint32_t)(eax + eax*4);
/* 89422e: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 894230: lea edi, [eax + edx*4] */
  edi = (uint32_t)(eax + edx*4);
/* 894233: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 894235: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 894236: lea esi, [edi + 4] */
  esi = (uint32_t)(edi + 0x4u);
/* 894239: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x89423cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89423c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 89423d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89423e: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x894240u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 894240: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 894243: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 894246: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 894247: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 894248: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x89424au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89424a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89424d: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 894250: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 894251: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 894252: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x894254u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 894254: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 894257: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 89425a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 89425b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89425c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x89425eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89425e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 894261: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 894264: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 894267: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 894268: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 89426b: jmp 0x894223 */
  goto L_894223;
L_89426d: /* 89426d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 894270: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 894273: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 894274: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 894275: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 89427c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 89427d: mov esp, ebp */
  esp = ebp;
/* 89427f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 894280: ret  */
  esp += 4; SPILL(); return;
}

void f_894188(void) {
  LOAD_REGS();
L_894188: /* 894188: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 89418f: nop  */
L_894190: /* 894190: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 894193: cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 894196: jge 0x89426d */
  if ((sf == of)) goto L_89426d;
L_89419c: /* 89419c: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 89419e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8941a0: mov ecx, edi */
  ecx = edi;
/* 8941a2: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8941a8u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8941a8: lea edx, [eax + eax*4] */
  edx = (uint32_t)(eax + eax*4);
/* 8941ab: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8941ad: lea esi, [eax + edx*4] */
  esi = (uint32_t)(eax + edx*4);
/* 8941b0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8941b2: je 0x8941c0 */
  if (zf) goto L_8941c0;
L_8941b4: /* 8941b4: mov ecx, esi */
  ecx = esi;
/* 8941b6: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x8941bcu); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 8941bc: mov ebx, esi */
  ebx = esi;
/* 8941be: jmp 0x8941c2 */
  goto L_8941c2;
L_8941c0: /* 8941c0: xor ebx, ebx */
  ebx = 0;
L_8941c2: /* 8941c2: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8941c5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8941c7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8941c8: lea esi, [ebx + 4] */
  esi = (uint32_t)(ebx + 0x4u);
/* 8941cb: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x8941ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8941ce: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8941cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8941d0: call dword ptr [0xcfa1b4] */
  esp -= 4; W32(esp, 0x8941d6u); SPILL(); f_4e415b(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAM@Z */ RELOAD();
/* 8941d6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8941d9: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 8941dc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8941dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8941de: call dword ptr [0xcfa1b4] */
  esp -= 4; W32(esp, 0x8941e4u); SPILL(); f_4e415b(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAM@Z */ RELOAD();
/* 8941e4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8941e7: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8941ea: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8941eb: mov esi, dword ptr [0xcfa1b4] */
  esi = R32((uint32_t)(0xcfa1b4u));
/* 8941f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8941f2: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8941f4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8941f4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8941f7: add ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8941fa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8941fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8941fc: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8941feu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8941fe: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 894201: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 894204: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 894205: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 894208: jmp 0x894190 */
  goto L_894190;
L_89426d: /* 89426d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 894270: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 894273: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 894274: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 894275: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 89427c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 89427d: mov esp, ebp */
  esp = ebp;
/* 89427f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 894280: ret  */
  esp += 4; SPILL(); return;
}

void f_894281(void) {
  LOAD_REGS();
L_894281: /* 894281: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 894284: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 894289: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 89428c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89428d: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 894290: call 0x99caf8 */
  esp -= 4; W32(esp, 0x894295u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_894295(); return;
}

void f_894295(void) {
  LOAD_REGS();
L_894295: /* 894295: push 0xa1a608 */
  { uint32_t v = 0xa1a608u; esp -= 4; W32(esp, v); }
/* 89429a: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 89429f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8942a5u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8942a5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8942a8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8942aa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8942ac: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8942b1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8942b1: guest_badaddr(0x8942b1); return;
}

void f_894330(void) {
  LOAD_REGS();
L_894330: /* 894330: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 894331: mov ebp, esp */
  ebp = esp;
/* 894333: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 894335: push 0x9d5870 */
  { uint32_t v = 0x9d5870u; esp -= 4; W32(esp, v); }
/* 89433a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 894340: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 894341: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 894348: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89434b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 89434c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 89434d: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 894350: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 894351: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 894354: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 894357: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 894359: xor ebx, ebx */
  ebx = 0;
/* 89435b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 89435c: mov ecx, esi */
  ecx = esi;
/* 89435e: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 894361: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x894367u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 894367: mov ecx, edi */
  ecx = edi;
/* 894369: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x89436fu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 89436f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 894371: je 0x8943db */
  if (zf) goto L_8943db;
L_894373: /* 894373: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 894376: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 894377: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 894378: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x89437eu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 89437e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 894381: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 894384: xor eax, eax */
  eax = 0;
L_894386: /* 894386: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 894389: jge 0x89438e */
  if ((sf == of)) goto L_89438e;
L_89438b: /* 89438b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 89438c: jmp 0x894386 */
  goto L_894386;
L_89438e: /* 89438e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89438f: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 894391: mov ecx, esi */
  ecx = esi;
/* 894393: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x894399u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 894399: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8943a0: /* 8943a0: cmp ebx, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8943a3: jge 0x894410 */
  if ((sf == of)) goto L_894410;
L_8943a5: /* 8943a5: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 8943a7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8943a9: mov ecx, esi */
  ecx = esi;
/* 8943ab: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8943b1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8943b1: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 8943b4: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 8943b6: mov edi, eax */
  edi = eax;
/* 8943b8: je 0x8943c6 */
  if (zf) goto L_8943c6;
L_8943ba: /* 8943ba: mov ecx, edi */
  ecx = edi;
/* 8943bc: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x8943c2u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 8943c2: mov eax, edi */
  eax = edi;
/* 8943c4: jmp 0x8943c8 */
  goto L_8943c8;
L_8943c6: /* 8943c6: xor eax, eax */
  eax = 0;
L_8943c8: /* 8943c8: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8943cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8943cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8943cd: call 0x6c22d9 */
  esp -= 4; W32(esp, 0x8943d2u); SPILL(); f_6c22d9(); if (g_unwind) return; RELOAD();
/* 8943d2: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8943d5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8943d8: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8943d9: jmp 0x8943a0 */
  goto L_8943a0;
L_8943db: /* 8943db: lea ebx, [esi + 4] */
  ebx = (uint32_t)(esi + 0x4u);
/* 8943de: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8943df: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8943e0: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x8943e6u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 8943e6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8943e9: xor edi, edi */
  edi = 0;
/* 8943eb: jmp 0x8943f0 */
  goto L_8943f0;
L_8943f0: /* 8943f0: cmp edi, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8943f2: jge 0x89440d */
  if ((sf == of)) goto L_89440d;
L_8943f4: /* 8943f4: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8943f6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8943f9: mov edx, edi */
  edx = edi;
/* 8943fb: imul edx, edx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x1cu);
  edx = (uint32_t)r;
  }
/* 8943fe: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 894400: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 894401: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 894402: call 0x6c22d9 */
  esp -= 4; W32(esp, 0x894407u); SPILL(); f_6c22d9(); if (g_unwind) return; RELOAD();
/* 894407: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89440a: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 89440b: jmp 0x8943f0 */
  goto L_8943f0;
L_89440d: /* 89440d: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
L_894410: /* 894410: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 894413: mov eax, edi */
  eax = edi;
/* 894415: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 894416: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 894417: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 89441e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 89441f: mov esp, ebp */
  esp = ebp;
/* 894421: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 894422: ret  */
  esp += 4; SPILL(); return;
}

void f_8943ed(void) {
  LOAD_REGS();
L_8943ed: /* 8943ed: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8943f0: /* 8943f0: cmp edi, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8943f2: jge 0x89440d */
  if ((sf == of)) goto L_89440d;
L_8943f4: /* 8943f4: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8943f6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8943f9: mov edx, edi */
  edx = edi;
/* 8943fb: imul edx, edx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x1cu);
  edx = (uint32_t)r;
  }
/* 8943fe: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 894400: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 894401: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 894402: call 0x6c22d9 */
  esp -= 4; W32(esp, 0x894407u); SPILL(); f_6c22d9(); if (g_unwind) return; RELOAD();
/* 894407: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89440a: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 89440b: jmp 0x8943f0 */
  goto L_8943f0;
L_89440d: /* 89440d: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 894410: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 894413: mov eax, edi */
  eax = edi;
/* 894415: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 894416: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 894417: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 89441e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 89441f: mov esp, ebp */
  esp = ebp;
/* 894421: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 894422: ret  */
  esp += 4; SPILL(); return;
}

void f_894423(void) {
  LOAD_REGS();
L_894423: /* 894423: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 894426: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 89442b: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 89442e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89442f: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 894432: call 0x99caf8 */
  esp -= 4; W32(esp, 0x894437u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_894437(); return;
}

void f_894437(void) {
  LOAD_REGS();
L_894437: /* 894437: push 0xa1a620 */
  { uint32_t v = 0xa1a620u; esp -= 4; W32(esp, v); }
/* 89443c: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 894441: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x894447u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 894447: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89444a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89444c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89444e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x894453u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_894453: guest_badaddr(0x894453); return;
}

void f_8944b0(void) {
  LOAD_REGS();
L_8944b0: /* 8944b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8944b1: mov ebp, esp */
  ebp = esp;
/* 8944b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8944b5: push 0x9d5880 */
  { uint32_t v = 0x9d5880u; esp -= 4; W32(esp, v); }
/* 8944ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8944c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8944c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8944c8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8944cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8944cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8944cd: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 8944d0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8944d1: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8944d4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8944d7: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8944d9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8944da: mov ecx, esi */
  ecx = esi;
/* 8944dc: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8944e3: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x8944e9u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 8944e9: mov ecx, edi */
  ecx = edi;
/* 8944eb: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x8944f1u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 8944f1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8944f3: je 0x894541 */
  if (zf) goto L_894541;
L_8944f5: /* 8944f5: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8944f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8944f9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8944fa: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x894500u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 894500: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 894503: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 894506: xor eax, eax */
  eax = 0;
L_894508: /* 894508: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89450b: jge 0x894510 */
  if ((sf == of)) goto L_894510;
L_89450d: /* 89450d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 89450e: jmp 0x894508 */
  goto L_894508;
L_894510: /* 894510: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 894511: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 894513: mov ecx, esi */
  ecx = esi;
/* 894515: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x89451bu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 89451b: xor ebx, ebx */
  ebx = 0;
/* 89451d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_894520: /* 894520: cmp ebx, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 894523: jge 0x894566 */
  if ((sf == of)) goto L_894566;
L_894525: /* 894525: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 894527: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 894529: mov ecx, esi */
  ecx = esi;
/* 89452b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x894531u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 894531: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 894533: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 894535: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 894538: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 894539: mov ecx, edi */
  ecx = edi;
/* 89453b: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x89453eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89453e: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 89453f: jmp 0x894520 */
  goto L_894520;
L_894541: /* 894541: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 894544: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 894545: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 894546: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x89454cu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 89454c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89454f: xor ebx, ebx */
  ebx = 0;
L_894551: /* 894551: cmp ebx, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 894554: jge 0x894566 */
  if ((sf == of)) goto L_894566;
L_894556: /* 894556: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 894558: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 89455a: lea eax, [eax + ebx*4] */
  eax = (uint32_t)(eax + ebx*4);
/* 89455d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89455e: mov ecx, edi */
  ecx = edi;
/* 894560: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x894563u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 894563: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 894564: jmp 0x894551 */
  goto L_894551;
L_894566: /* 894566: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 894569: mov eax, edi */
  eax = edi;
/* 89456b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 89456c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 89456d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 894574: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 894575: mov esp, ebp */
  esp = ebp;
/* 894577: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 894578: ret  */
  esp += 4; SPILL(); return;
}

void f_894579(void) {
  LOAD_REGS();
L_894579: /* 894579: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 89457c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 894581: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 894584: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 894585: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 894588: call 0x99caf8 */
  esp -= 4; W32(esp, 0x89458du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_89458d(); return;
}

void f_89458d(void) {
  LOAD_REGS();
L_89458d: /* 89458d: push 0xa1a638 */
  { uint32_t v = 0xa1a638u; esp -= 4; W32(esp, v); }
/* 894592: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 894597: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x89459du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 89459d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8945a0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8945a2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8945a4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8945a9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8945a9: guest_badaddr(0x8945a9); return;
}

void f_8945f0(void) {
  LOAD_REGS();
L_8945f0: /* 8945f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8945f1: mov ebp, esp */
  ebp = esp;
/* 8945f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8945f5: push 0x9d5890 */
  { uint32_t v = 0x9d5890u; esp -= 4; W32(esp, v); }
/* 8945fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 894600: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 894601: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 894608: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89460b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 89460c: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 89460f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 894610: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 894613: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 894614: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 894617: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 894619: xor edi, edi */
  edi = 0;
/* 89461b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 89461c: mov ecx, ebx */
  ecx = ebx;
/* 89461e: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 894621: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x894627u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 894627: mov ecx, esi */
  ecx = esi;
/* 894629: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x89462fu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 89462f: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 894631: je 0x8946ca */
  if (zf) goto L_8946ca;
L_894637: /* 894637: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 89463a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89463b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 89463c: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x894642u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 894642: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 894645: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 894648: xor eax, eax */
  eax = 0;
/* 89464a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_894650: /* 894650: cmp eax, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 894653: jge 0x894658 */
  if ((sf == of)) goto L_894658;
L_894655: /* 894655: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 894656: jmp 0x894650 */
  goto L_894650;
L_894658: /* 894658: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 894659: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 89465b: mov ecx, ebx */
  ecx = ebx;
/* 89465d: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x894663u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 894663: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 894666: mov edi, dword ptr [0xcfa27c] */
  edi = R32((uint32_t)(0xcfa27cu));
/* 89466c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_894670: /* 894670: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 894673: cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 894676: jge 0x89470d */
  if ((sf == of)) goto L_89470d;
L_89467c: /* 89467c: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 89467e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 894680: mov ecx, ebx */
  ecx = ebx;
/* 894682: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x894688u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 894688: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 89468b: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 89468d: lea esi, [eax + edx*4] */
  esi = (uint32_t)(eax + edx*4);
/* 894690: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 894692: je 0x89469e */
  if (zf) goto L_89469e;
L_894694: /* 894694: mov ecx, esi */
  ecx = esi;
/* 894696: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x89469cu); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 89469c: jmp 0x8946a0 */
  goto L_8946a0;
L_89469e: /* 89469e: xor esi, esi */
  esi = 0;
L_8946a0: /* 8946a0: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8946a3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8946a5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8946a6: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x8946a9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8946a9: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 8946ac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8946ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8946ae: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8946b0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8946b0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8946b3: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8946b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8946b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8946b8: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x8946beu); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* 8946be: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8946c1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8946c4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8946c5: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8946c8: jmp 0x894670 */
  goto L_894670;
L_8946ca: /* 8946ca: lea eax, [ebx + 4] */
  eax = (uint32_t)(ebx + 0x4u);
/* 8946cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8946ce: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8946cf: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x8946d5u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 8946d5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8946d8: /* 8946d8: cmp edi, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8946db: jge 0x89470d */
  if ((sf == of)) goto L_89470d;
L_8946dd: /* 8946dd: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8946df: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8946e2: lea edx, [edi + edi*2] */
  edx = (uint32_t)(edi + edi*2);
/* 8946e5: lea esi, [eax + edx*4] */
  esi = (uint32_t)(eax + edx*4);
/* 8946e8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8946ea: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8946eb: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x8946eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8946ee: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 8946f1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8946f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8946f3: call dword ptr [0xcfa27c] */
  esp -= 4; W32(esp, 0x8946f9u); SPILL(); f_4e4165(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAK@Z */ RELOAD();
/* 8946f9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8946fc: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8946ff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 894700: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 894701: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x894707u); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* 894707: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89470a: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 89470b: jmp 0x8946d8 */
  goto L_8946d8;
L_89470d: /* 89470d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 894710: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 894713: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 894714: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 894715: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 89471c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 89471d: mov esp, ebp */
  esp = ebp;
/* 89471f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 894720: ret  */
  esp += 4; SPILL(); return;
}

void f_894721(void) {
  LOAD_REGS();
L_894721: /* 894721: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 894724: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 894729: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 89472c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89472d: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 894730: call 0x99caf8 */
  esp -= 4; W32(esp, 0x894735u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_894735(); return;
}

void f_894735(void) {
  LOAD_REGS();
L_894735: /* 894735: push 0xa1a650 */
  { uint32_t v = 0xa1a650u; esp -= 4; W32(esp, v); }
/* 89473a: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 89473f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x894745u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 894745: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 894748: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89474a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89474c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x894751u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_894751: guest_badaddr(0x894751); return;
}

void f_8947c0(void) {
  LOAD_REGS();
L_8947c0: /* 8947c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8947c2: push 0x9d58a9 */
  { uint32_t v = 0x9d58a9u; esp -= 4; W32(esp, v); }
/* 8947c7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8947cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8947ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8947d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8947d6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8947d7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8947d8: mov esi, ecx */
  esi = ecx;
/* 8947da: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8947db: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 8947df: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 8947e2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8947e4: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 8947ea: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 8947f2: jge 0x894808 */
  if ((sf == of)) goto L_894808;
L_8947f4: /* 8947f4: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 8947f9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8947fe: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 894803: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x894805u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 894805: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_894808: /* 894808: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89480b: jle 0x894821 */
  if ((zf || sf != of)) goto L_894821;
L_89480d: /* 89480d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 894812: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 894817: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 89481c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x89481eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89481e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_894821: /* 894821: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 894823: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 894824: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 894826: mov ecx, esi */
  ecx = esi;
/* 894828: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x89482eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 89482e: mov ecx, esi */
  ecx = esi;
/* 894830: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 894838: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x89483eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 89483e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 894842: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 894843: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 894844: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 894845: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 89484c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89484f: ret  */
  esp += 4; SPILL(); return;
}

void f_894880(void) {
  LOAD_REGS();
L_894880: /* 894880: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 894882: push 0x9d58c9 */
  { uint32_t v = 0x9d58c9u; esp -= 4; W32(esp, v); }
/* 894887: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 89488d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89488e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 894895: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 894896: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 894897: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 894898: mov esi, ecx */
  esi = ecx;
/* 89489a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 89489b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 89489f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 8948a2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8948a4: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 8948aa: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 8948b2: jge 0x8948c8 */
  if ((sf == of)) goto L_8948c8;
L_8948b4: /* 8948b4: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 8948b9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8948be: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 8948c3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8948c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8948c5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8948c8: /* 8948c8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8948cb: jle 0x8948e1 */
  if ((zf || sf != of)) goto L_8948e1;
L_8948cd: /* 8948cd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 8948d2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8948d7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 8948dc: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8948deu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8948de: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8948e1: /* 8948e1: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 8948e3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8948e4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8948e6: mov ecx, esi */
  ecx = esi;
/* 8948e8: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x8948eeu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 8948ee: mov ecx, esi */
  ecx = esi;
/* 8948f0: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 8948f8: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x8948feu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 8948fe: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 894902: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 894903: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 894904: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 894905: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 89490c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89490f: ret  */
  esp += 4; SPILL(); return;
}

void f_894940(void) {
  LOAD_REGS();
L_894940: /* 894940: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 894942: push 0x9d58e9 */
  { uint32_t v = 0x9d58e9u; esp -= 4; W32(esp, v); }
/* 894947: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 89494d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89494e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 894955: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 894956: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 894957: mov esi, ecx */
  esi = ecx;
/* 894959: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 89495d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 894960: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 894961: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 894963: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 89496b: call 0x6c7a18 */
  esp -= 4; W32(esp, 0x894970u); SPILL(); f_6c7a18(); if (g_unwind) return; RELOAD();
/* 894970: mov ecx, esi */
  ecx = esi;
/* 894972: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 89497a: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x894980u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 894980: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 894984: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 894985: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 89498c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89498f: ret  */
  esp += 4; SPILL(); return;
}

void f_8949b0(void) {
  LOAD_REGS();
L_8949b0: /* 8949b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8949b1: mov ebp, esp */
  ebp = esp;
/* 8949b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8949b5: push 0x9d5900 */
  { uint32_t v = 0x9d5900u; esp -= 4; W32(esp, v); }
/* 8949ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8949c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8949c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8949c8: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8949cb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8949ce: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8949d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8949d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8949d2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8949d3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8949d6: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8949dd: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8949e0: je 0x8949ea */
  if (zf) goto L_8949ea;
L_8949e2: /* 8949e2: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* 8949e5: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8949e8: jmp 0x8949f1 */
  goto L_8949f1;
L_8949ea: /* 8949ea: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
L_8949f1: /* 8949f1: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 8949f4: call 0x6c1212 */
  esp -= 4; W32(esp, 0x8949f9u); SPILL(); f_6c1212(); if (g_unwind) return; RELOAD();
/* 8949f9: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8949fc: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8949fe: je 0x894a35 */
  if (zf) goto L_894a35;
L_894a00: /* 894a00: mov ecx, esi */
  ecx = esi;
/* 894a02: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x894a08u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 894a08: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 894a0b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 894a0c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 894a0d: call dword ptr [0xcfa340] */
  esp -= 4; W32(esp, 0x894a13u); SPILL(); f_4e26df(); if (g_unwind) return; /* Core!?appStricmp@@YAHPBG0@Z */ RELOAD();
/* 894a13: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 894a16: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 894a18: jne 0x894a2d */
  if (!zf) goto L_894a2d;
L_894a1a: /* 894a1a: mov eax, esi */
  eax = esi;
/* 894a1c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 894a1f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 894a26: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 894a27: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 894a28: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 894a29: mov esp, ebp */
  esp = ebp;
/* 894a2b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 894a2c: ret  */
  esp += 4; SPILL(); return;
L_894a2d: /* 894a2d: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 894a30: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 894a33: jmp 0x8949f1 */
  goto L_8949f1;
L_894a35: /* 894a35: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 894a38: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 894a39: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 894a3a: xor eax, eax */
  eax = 0;
/* 894a3c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 894a43: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 894a44: mov esp, ebp */
  esp = ebp;
/* 894a46: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 894a47: ret  */
  esp += 4; SPILL(); return;
}

void f_894a48(void) {
  LOAD_REGS();
L_894a48: /* 894a48: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 894a4b: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 894a50: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 894a53: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 894a54: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 894a57: call 0x99caf8 */
  esp -= 4; W32(esp, 0x894a5cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_894a5c(); return;
}

void f_894a5c(void) {
  LOAD_REGS();
L_894a5c: /* 894a5c: push 0xa1a668 */
  { uint32_t v = 0xa1a668u; esp -= 4; W32(esp, v); }
/* 894a61: push 0xae8678 */
  { uint32_t v = 0xae8678u; esp -= 4; W32(esp, v); }
/* 894a66: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x894a6cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 894a6c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 894a6f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 894a71: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 894a73: call 0x99caf8 */
  esp -= 4; W32(esp, 0x894a78u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_894a78: guest_badaddr(0x894a78); return;
}

void f_894ac0(void) {
  LOAD_REGS();
L_894ac0: /* 894ac0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 894ac4: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 894ac8: lea ecx, [eax + 0xc] */
  ecx = (uint32_t)(eax + 0xcu);
/* 894acb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 894acc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 894acd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 894ace: call 0x6c67cb */
  esp -= 4; W32(esp, 0x894ad3u); SPILL(); f_6c67cb(); if (g_unwind) return; RELOAD();
/* 894ad3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 894ad6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 894ad7: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x894addu); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* 894add: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 894ae0: ret  */
  esp += 4; SPILL(); return;
}

void f_894b00(void) {
  LOAD_REGS();
L_894b00: /* 894b00: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 894b01: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 894b05: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 894b06: mov esi, ecx */
  esi = ecx;
/* 894b08: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 894b0b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 894b0c: xor edi, edi */
  edi = 0;
/* 894b0e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 894b10: jle 0x894b2a */
  if ((zf || sf != of)) goto L_894b2a;
L_894b12: /* 894b12: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 894b14: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 894b15: lea ecx, [eax + edi*4] */
  ecx = (uint32_t)(eax + edi*4);
/* 894b18: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x894b1eu); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 894b1e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 894b20: jne 0x894b43 */
  if (!zf) goto L_894b43;
L_894b22: /* 894b22: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 894b25: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 894b26: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 894b28: jl 0x894b12 */
  if ((sf != of)) goto L_894b12;
L_894b2a: /* 894b2a: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 894b2c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 894b2e: mov ecx, esi */
  ecx = esi;
/* 894b30: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x894b36u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 894b36: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 894b38: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 894b3a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 894b3b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 894b3c: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 894b3f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 894b40: ret 4 */
  esp += 8; SPILL(); return;
L_894b43: /* 894b43: mov eax, edi */
  eax = edi;
/* 894b45: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 894b46: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 894b47: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 894b48: ret 4 */
  esp += 8; SPILL(); return;
}

void f_894b70(void) {
  LOAD_REGS();
L_894b70: /* 894b70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 894b71: mov ebp, esp */
  ebp = esp;
/* 894b73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 894b75: push 0x9d5910 */
  { uint32_t v = 0x9d5910u; esp -= 4; W32(esp, v); }
/* 894b7a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 894b80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 894b81: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 894b88: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 894b8b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 894b8c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 894b8f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 894b90: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 894b93: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 894b94: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 894b97: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 894b99: xor edi, edi */
  edi = 0;
/* 894b9b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 894b9c: mov ecx, esi */
  ecx = esi;
/* 894b9e: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 894ba1: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x894ba7u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 894ba7: mov ecx, ebx */
  ecx = ebx;
/* 894ba9: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x894bafu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 894baf: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 894bb1: je 0x894c0b */
  if (zf) goto L_894c0b;
L_894bb3: /* 894bb3: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 894bb6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 894bb7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 894bb8: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x894bbeu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 894bbe: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 894bc1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 894bc4: xor eax, eax */
  eax = 0;
L_894bc6: /* 894bc6: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 894bc9: jge 0x894bce */
  if ((sf == of)) goto L_894bce;
L_894bcb: /* 894bcb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 894bcc: jmp 0x894bc6 */
  goto L_894bc6;
L_894bce: /* 894bce: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 894bcf: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 894bd1: mov ecx, esi */
  ecx = esi;
/* 894bd3: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x894bd9u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 894bd9: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 894bdc: mov edi, dword ptr [0xcfa1b4] */
  edi = R32((uint32_t)(0xcfa1b4u));
L_894be2: /* 894be2: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 894be5: cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 894be8: jge 0x894c38 */
  if ((sf == of)) goto L_894c38;
L_894bea: /* 894bea: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 894bec: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 894bee: mov ecx, esi */
  ecx = esi;
/* 894bf0: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x894bf6u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 894bf6: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 894bf8: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 894bfb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 894bfc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 894bfd: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x894bffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 894bff: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 894c02: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 894c05: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 894c06: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 894c09: jmp 0x894be2 */
  goto L_894be2;
L_894c0b: /* 894c0b: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 894c0e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 894c0f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 894c10: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x894c16u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 894c16: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 894c19: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_894c20: /* 894c20: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 894c23: jge 0x894c38 */
  if ((sf == of)) goto L_894c38;
L_894c25: /* 894c25: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 894c27: lea ecx, [eax + edi*4] */
  ecx = (uint32_t)(eax + edi*4);
/* 894c2a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 894c2b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 894c2c: call dword ptr [0xcfa1b4] */
  esp -= 4; W32(esp, 0x894c32u); SPILL(); f_4e415b(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAM@Z */ RELOAD();
/* 894c32: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 894c35: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 894c36: jmp 0x894c20 */
  goto L_894c20;
L_894c38: /* 894c38: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 894c3b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 894c3c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 894c3d: mov eax, ebx */
  eax = ebx;
/* 894c3f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 894c46: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 894c47: mov esp, ebp */
  esp = ebp;
/* 894c49: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 894c4a: ret  */
  esp += 4; SPILL(); return;
}

void f_894c4b(void) {
  LOAD_REGS();
L_894c4b: /* 894c4b: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 894c4e: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 894c53: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 894c56: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 894c57: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 894c5a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x894c5fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_894c5f(); return;
}

void f_894c5f(void) {
  LOAD_REGS();
L_894c5f: /* 894c5f: push 0xa1a680 */
  { uint32_t v = 0xa1a680u; esp -= 4; W32(esp, v); }
/* 894c64: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 894c69: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x894c6fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 894c6f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 894c72: xor edi, edi */
  edi = 0;
/* 894c74: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 894c75: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 894c76: call 0x99caf8 */
  esp -= 4; W32(esp, 0x894c7bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_894c7b: guest_badaddr(0x894c7b); return;
}

void f_894cd0(void) {
  LOAD_REGS();
L_894cd0: /* 894cd0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 894cd1: mov ebp, esp */
  ebp = esp;
/* 894cd3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 894cd5: push 0x9d5920 */
  { uint32_t v = 0x9d5920u; esp -= 4; W32(esp, v); }
/* 894cda: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 894ce0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 894ce1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 894ce8: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 894ceb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 894cec: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 894cef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 894cf0: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 894cf3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 894cf4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 894cf7: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 894cf9: xor edi, edi */
  edi = 0;
/* 894cfb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 894cfc: mov ecx, esi */
  ecx = esi;
/* 894cfe: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 894d01: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x894d07u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 894d07: mov ecx, ebx */
  ecx = ebx;
/* 894d09: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x894d0fu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 894d0f: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 894d11: je 0x894db6 */
  if (zf) goto L_894db6;
L_894d17: /* 894d17: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 894d1a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 894d1b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 894d1c: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x894d22u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 894d22: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 894d25: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 894d28: xor eax, eax */
  eax = 0;
/* 894d2a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_894d30: /* 894d30: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 894d33: jge 0x894d38 */
  if ((sf == of)) goto L_894d38;
L_894d35: /* 894d35: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 894d36: jmp 0x894d30 */
  goto L_894d30;
L_894d38: /* 894d38: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 894d39: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 894d3b: mov ecx, esi */
  ecx = esi;
/* 894d3d: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x894d43u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 894d43: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 894d46: mov edi, dword ptr [0xcfa1b4] */
  edi = R32((uint32_t)(0xcfa1b4u));
/* 894d4c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_894d50: /* 894d50: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 894d53: cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 894d56: jge 0x894e17 */
  if ((sf == of)) goto L_894e17;
L_894d5c: /* 894d5c: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 894d5e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 894d60: mov ecx, esi */
  ecx = esi;
/* 894d62: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x894d68u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 894d68: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 894d6a: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 894d6d: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 894d6f: je 0x894d7d */
  if (zf) goto L_894d7d;
L_894d71: /* 894d71: mov ecx, eax */
  ecx = eax;
/* 894d73: call dword ptr [0xcfa2d8] */
  esp -= 4; W32(esp, 0x894d79u); SPILL(); f_4e36de(); if (g_unwind) return; /* Core!??0FQuat@@QAE@XZ */ RELOAD();
/* 894d79: mov esi, eax */
  esi = eax;
/* 894d7b: jmp 0x894d7f */
  goto L_894d7f;
L_894d7d: /* 894d7d: xor esi, esi */
  esi = 0;
L_894d7f: /* 894d7f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 894d82: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 894d83: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 894d84: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x894d86u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 894d86: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 894d89: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 894d8c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 894d8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 894d8e: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x894d90u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 894d90: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 894d93: lea edx, [esi + 8] */
  edx = (uint32_t)(esi + 0x8u);
/* 894d96: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 894d97: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 894d98: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x894d9au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 894d9a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 894d9d: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 894da0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 894da1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 894da2: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x894da4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 894da4: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 894da7: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 894daa: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 894dad: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 894db0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 894db1: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 894db4: jmp 0x894d50 */
  goto L_894d50;
L_894db6: /* 894db6: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 894db9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 894dba: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 894dbb: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x894dc1u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 894dc1: mov edi, dword ptr [0xcfa1b4] */
  edi = R32((uint32_t)(0xcfa1b4u));
/* 894dc7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 894dca: xor ebx, ebx */
  ebx = 0;
/* 894dcc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_894dd0: /* 894dd0: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 894dd3: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 894dd5: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 894dd8: jge 0x894e14 */
  if ((sf == of)) goto L_894e14;
L_894dda: /* 894dda: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 894ddd: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 894ddf: mov esi, ebx */
  esi = ebx;
/* 894de1: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 894de4: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 894de6: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 894de9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 894dea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 894deb: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x894dedu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 894ded: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 894df0: lea edx, [esi + 4] */
  edx = (uint32_t)(esi + 0x4u);
/* 894df3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 894df4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 894df5: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x894df7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 894df7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 894dfa: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 894dfd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 894dfe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 894dff: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x894e01u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 894e01: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 894e04: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 894e07: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 894e08: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 894e09: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x894e0bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 894e0b: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 894e0e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 894e11: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 894e12: jmp 0x894dd0 */
  goto L_894dd0;
L_894e14: /* 894e14: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
L_894e17: /* 894e17: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 894e1a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 894e1b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 894e1c: mov eax, ebx */
  eax = ebx;
/* 894e1e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 894e25: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 894e26: mov esp, ebp */
  esp = ebp;
/* 894e28: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 894e29: ret  */
  esp += 4; SPILL(); return;
}

void f_894e2a(void) {
  LOAD_REGS();
L_894e2a: /* 894e2a: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 894e2d: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 894e32: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 894e35: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 894e36: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 894e39: call 0x99caf8 */
  esp -= 4; W32(esp, 0x894e3eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_894e3e(); return;
}

void f_894e3e(void) {
  LOAD_REGS();
L_894e3e: /* 894e3e: push 0xa1a698 */
  { uint32_t v = 0xa1a698u; esp -= 4; W32(esp, v); }
/* 894e43: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 894e48: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x894e4eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 894e4e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 894e51: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 894e53: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 894e55: call 0x99caf8 */
  esp -= 4; W32(esp, 0x894e5au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_894e5a: guest_badaddr(0x894e5a); return;
}

void f_894ed0(void) {
  LOAD_REGS();
L_894ed0: /* 894ed0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 894ed1: mov ebp, esp */
  ebp = esp;
/* 894ed3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 894ed5: push 0x9d5930 */
  { uint32_t v = 0x9d5930u; esp -= 4; W32(esp, v); }
/* 894eda: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 894ee0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 894ee1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 894ee8: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 894eeb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 894eec: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 894eef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 894ef0: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 894ef3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 894ef4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 894ef7: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 894ef9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 894efa: mov ecx, esi */
  ecx = esi;
/* 894efc: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 894f03: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x894f09u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 894f09: mov ecx, ebx */
  ecx = ebx;
/* 894f0b: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x894f11u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 894f11: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 894f13: je 0x894fac */
  if (zf) goto L_894fac;
L_894f19: /* 894f19: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 894f1c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 894f1d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 894f1e: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x894f24u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 894f24: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 894f27: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 894f2a: xor eax, eax */
  eax = 0;
/* 894f2c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_894f30: /* 894f30: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 894f33: jge 0x894f38 */
  if ((sf == of)) goto L_894f38;
L_894f35: /* 894f35: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 894f36: jmp 0x894f30 */
  goto L_894f30;
L_894f38: /* 894f38: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 894f39: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 894f3b: mov ecx, esi */
  ecx = esi;
/* 894f3d: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x894f43u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 894f43: mov edi, dword ptr [0xcfa1b4] */
  edi = R32((uint32_t)(0xcfa1b4u));
/* 894f49: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
L_894f50: /* 894f50: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 894f53: cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 894f56: jge 0x89500d */
  if ((sf == of)) goto L_89500d;
L_894f5c: /* 894f5c: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 894f5e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 894f60: mov ecx, esi */
  ecx = esi;
/* 894f62: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x894f68u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 894f68: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 894f6a: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 894f6d: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 894f70: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 894f72: mov esi, eax */
  esi = eax;
/* 894f74: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 894f75: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 894f76: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x894f78u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 894f78: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 894f7b: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 894f7e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 894f7f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 894f80: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x894f82u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 894f82: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 894f85: lea edx, [esi + 8] */
  edx = (uint32_t)(esi + 0x8u);
/* 894f88: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 894f89: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 894f8a: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x894f8cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 894f8c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 894f8f: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 894f92: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 894f93: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 894f94: call dword ptr [0xcfa27c] */
  esp -= 4; W32(esp, 0x894f9au); SPILL(); f_4e4165(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAK@Z */ RELOAD();
/* 894f9a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 894f9d: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 894fa0: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 894fa3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 894fa6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 894fa7: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 894faa: jmp 0x894f50 */
  goto L_894f50;
L_894fac: /* 894fac: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 894faf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 894fb0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 894fb1: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x894fb7u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 894fb7: mov edi, dword ptr [0xcfa1b4] */
  edi = R32((uint32_t)(0xcfa1b4u));
/* 894fbd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 894fc0: xor ebx, ebx */
  ebx = 0;
L_894fc2: /* 894fc2: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 894fc5: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 894fc7: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 894fca: jge 0x89500a */
  if ((sf == of)) goto L_89500a;
L_894fcc: /* 894fcc: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 894fcf: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 894fd1: mov esi, ebx */
  esi = ebx;
/* 894fd3: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 894fd6: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 894fd8: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 894fdb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 894fdc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 894fdd: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x894fdfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 894fdf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 894fe2: lea edx, [esi + 4] */
  edx = (uint32_t)(esi + 0x4u);
/* 894fe5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 894fe6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 894fe7: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x894fe9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 894fe9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 894fec: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 894fef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 894ff0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 894ff1: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x894ff3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 894ff3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 894ff6: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 894ff9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 894ffa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 894ffb: call dword ptr [0xcfa27c] */
  esp -= 4; W32(esp, 0x895001u); SPILL(); f_4e4165(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAK@Z */ RELOAD();
/* 895001: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 895004: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 895007: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 895008: jmp 0x894fc2 */
  goto L_894fc2;
L_89500a: /* 89500a: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
L_89500d: /* 89500d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 895010: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 895011: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 895012: mov eax, ebx */
  eax = ebx;
/* 895014: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 89501b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 89501c: mov esp, ebp */
  esp = ebp;
/* 89501e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 89501f: ret  */
  esp += 4; SPILL(); return;
}

void f_895020(void) {
  LOAD_REGS();
L_895020: /* 895020: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 895023: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 895028: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 89502b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89502c: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 89502f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x895034u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_895034(); return;
}

void f_895034(void) {
  LOAD_REGS();
L_895034: /* 895034: push 0xa1a6b0 */
  { uint32_t v = 0xa1a6b0u; esp -= 4; W32(esp, v); }
/* 895039: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 89503e: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x895044u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 895044: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 895047: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 895049: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89504b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x895050u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_895050: guest_badaddr(0x895050); return;
}

void f_8950d0(void) {
  LOAD_REGS();
L_8950d0: /* 8950d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8950d1: mov ebp, esp */
  ebp = esp;
/* 8950d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8950d5: push 0x9d5940 */
  { uint32_t v = 0x9d5940u; esp -= 4; W32(esp, v); }
/* 8950da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8950e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8950e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8950e8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8950eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8950ec: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8950ef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8950f0: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 8950f3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8950f4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8950f7: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8950f9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8950fa: mov ecx, esi */
  ecx = esi;
/* 8950fc: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 895103: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x895109u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 895109: mov ecx, ebx */
  ecx = ebx;
/* 89510b: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x895111u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 895111: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 895113: je 0x895166 */
  if (zf) goto L_895166;
L_895115: /* 895115: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 895118: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 895119: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 89511a: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x895120u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 895120: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 895123: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 895126: xor eax, eax */
  eax = 0;
L_895128: /* 895128: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89512b: jge 0x895130 */
  if ((sf == of)) goto L_895130;
L_89512d: /* 89512d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 89512e: jmp 0x895128 */
  goto L_895128;
L_895130: /* 895130: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 895131: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 895133: mov ecx, esi */
  ecx = esi;
/* 895135: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x89513bu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 89513b: xor edi, edi */
  edi = 0;
/* 89513d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_895140: /* 895140: cmp edi, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 895143: jge 0x895190 */
  if ((sf == of)) goto L_895190;
L_895145: /* 895145: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 895147: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 895149: mov ecx, esi */
  ecx = esi;
/* 89514b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x895151u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 895151: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 895153: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 895156: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 895159: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89515a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 89515b: call 0x6c3c4c */
  esp -= 4; W32(esp, 0x895160u); SPILL(); f_6c3c4c(); if (g_unwind) return; RELOAD();
/* 895160: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 895163: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 895164: jmp 0x895140 */
  goto L_895140;
L_895166: /* 895166: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 895169: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89516a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 89516b: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x895171u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 895171: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 895174: xor edi, edi */
  edi = 0;
L_895176: /* 895176: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 895179: jge 0x895190 */
  if ((sf == of)) goto L_895190;
L_89517b: /* 89517b: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 89517d: lea eax, [edi + edi*4] */
  eax = (uint32_t)(edi + edi*4);
/* 895180: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 895183: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 895184: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 895185: call 0x6c3c4c */
  esp -= 4; W32(esp, 0x89518au); SPILL(); f_6c3c4c(); if (g_unwind) return; RELOAD();
/* 89518a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89518d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 89518e: jmp 0x895176 */
  goto L_895176;
L_895190: /* 895190: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 895193: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 895194: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 895195: mov eax, ebx */
  eax = ebx;
/* 895197: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 89519e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 89519f: mov esp, ebp */
  esp = ebp;
/* 8951a1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8951a2: ret  */
  esp += 4; SPILL(); return;
}

void f_8951a3(void) {
  LOAD_REGS();
L_8951a3: /* 8951a3: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8951a6: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8951ab: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 8951ae: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8951af: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8951b2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8951b7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8951b7(); return;
}

void f_8951b7(void) {
  LOAD_REGS();
L_8951b7: /* 8951b7: push 0xa1a6c8 */
  { uint32_t v = 0xa1a6c8u; esp -= 4; W32(esp, v); }
/* 8951bc: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 8951c1: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8951c7u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8951c7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8951ca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8951cc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8951ce: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8951d3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8951d3: guest_badaddr(0x8951d3); return;
}

void f_895230(void) {
  LOAD_REGS();
L_895230: /* 895230: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 895231: mov ebp, esp */
  ebp = esp;
/* 895233: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 895235: push 0x9d5950 */
  { uint32_t v = 0x9d5950u; esp -= 4; W32(esp, v); }
/* 89523a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 895240: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 895241: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 895248: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89524b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 89524c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 89524d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 895250: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 895251: mov ecx, esi */
  ecx = esi;
/* 895253: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 895256: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 89525d: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x895263u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 895263: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 895265: mov ecx, esi */
  ecx = esi;
/* 895267: je 0x895321 */
  if (zf) goto L_895321;
L_89526d: /* 89526d: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 895274: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x89527au); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 89527a: cmp eax, 0x3d */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89527d: jg 0x8952ad */
  if ((!zf && sf == of)) goto L_8952ad;
L_89527f: /* 89527f: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 895282: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 895284: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 895285: mov ecx, esi */
  ecx = esi;
/* 895287: call dword ptr [eax + 0x40] */
  { uint32_t t = R32((uint32_t)(eax + 0x40u)); esp -= 4; W32(esp, 0x89528au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89528a: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 89528d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89528e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 89528f: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x895295u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 895295: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 895297: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89529a: mov ecx, esi */
  ecx = esi;
/* 89529c: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x89529fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89529f: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8952a2: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 8952a5: lea edx, [eax + ecx*4] */
  edx = (uint32_t)(eax + ecx*4);
/* 8952a8: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8952ab: jmp 0x8952f3 */
  goto L_8952f3;
L_8952ad: /* 8952ad: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8952b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8952b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8952b2: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x8952b8u); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* 8952b8: mov ecx, dword ptr [0xcfa40c] */
  ecx = R32((uint32_t)(0xcfa40cu));
/* 8952be: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 8952c0: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 8952c3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8952c6: test al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8952c8: je 0x8952eb */
  if (zf) goto L_8952eb;
L_8952ca: /* 8952ca: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8952cc: je 0x8952dd */
  if (zf) goto L_8952dd;
L_8952ce: /* 8952ce: lea eax, [edi + 0xc] */
  eax = (uint32_t)(edi + 0xcu);
/* 8952d1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8952d2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8952d3: call 0x6c1505 */
  esp -= 4; W32(esp, 0x8952d8u); SPILL(); f_6c1505(); if (g_unwind) return; RELOAD();
/* 8952d8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8952db: jmp 0x8952f3 */
  goto L_8952f3;
L_8952dd: /* 8952dd: xor eax, eax */
  eax = 0;
/* 8952df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8952e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8952e1: call 0x6c1505 */
  esp -= 4; W32(esp, 0x8952e6u); SPILL(); f_6c1505(); if (g_unwind) return; RELOAD();
/* 8952e6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8952e9: jmp 0x8952f3 */
  goto L_8952f3;
L_8952eb: /* 8952eb: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8952ed: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8952ee: mov ecx, esi */
  ecx = esi;
/* 8952f0: call dword ptr [edx + 0x40] */
  { uint32_t t = R32((uint32_t)(edx + 0x40u)); esp -= 4; W32(esp, 0x8952f3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8952f3: /* 8952f3: mov eax, dword ptr [0xcfa408] */
  eax = R32((uint32_t)(0xcfa408u));
/* 8952f8: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8952fb: jne 0x895303 */
  if (!zf) goto L_895303;
L_8952fd: /* 8952fd: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8952ff: mov ecx, edi */
  ecx = edi;
/* 895301: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x895303u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_895303: /* 895303: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 895306: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 895308: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 895309: mov ecx, esi */
  ecx = esi;
/* 89530b: call dword ptr [eax + 0x3c] */
  { uint32_t t = R32((uint32_t)(eax + 0x3cu)); esp -= 4; W32(esp, 0x89530eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89530e: mov eax, esi */
  eax = esi;
/* 895310: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 895313: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 89531a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 89531b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 89531c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 89531d: mov esp, ebp */
  esp = ebp;
/* 89531f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 895320: ret  */
  esp += 4; SPILL(); return;
L_895321: /* 895321: call dword ptr [0xcfa404] */
  esp -= 4; W32(esp, 0x895327u); SPILL(); f_4e423c(); if (g_unwind) return; /* Core!?IsSaving@FArchive@@QAEHXZ */ RELOAD();
/* 895327: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 895329: je 0x8953a7 */
  if (zf) goto L_8953a7;
L_89532b: /* 89532b: mov ecx, esi */
  ecx = esi;
/* 89532d: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x895333u); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 895333: cmp eax, 0x3d */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 895336: jle 0x8953a7 */
  if ((zf || sf != of)) goto L_8953a7;
L_895338: /* 895338: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 89533a: mov ecx, esi */
  ecx = esi;
/* 89533c: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x89533fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89533f: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 895342: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 895345: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 895347: je 0x89534e */
  if (zf) goto L_89534e;
L_895349: /* 895349: lea edi, [eax + 0xc] */
  edi = (uint32_t)(eax + 0xcu);
/* 89534c: jmp 0x895350 */
  goto L_895350;
L_89534e: /* 89534e: xor edi, edi */
  edi = 0;
L_895350: /* 895350: mov ebx, dword ptr [0xcfa280] */
  ebx = R32((uint32_t)(0xcfa280u));
/* 895356: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 895359: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89535a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 89535b: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x89535du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89535d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 895360: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 895361: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 895362: call 0x6c1505 */
  esp -= 4; W32(esp, 0x895367u); SPILL(); f_6c1505(); if (g_unwind) return; RELOAD();
/* 895367: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 895369: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89536c: mov ecx, esi */
  ecx = esi;
/* 89536e: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x895371u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 895371: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 895374: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 895377: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 895379: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89537a: mov ecx, esi */
  ecx = esi;
/* 89537c: call dword ptr [eax + 0x3c] */
  { uint32_t t = R32((uint32_t)(eax + 0x3cu)); esp -= 4; W32(esp, 0x89537fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89537f: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 895382: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 895383: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 895384: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x895386u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 895386: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 895389: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 89538b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89538e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89538f: mov ecx, esi */
  ecx = esi;
/* 895391: call dword ptr [eax + 0x3c] */
  { uint32_t t = R32((uint32_t)(eax + 0x3cu)); esp -= 4; W32(esp, 0x895394u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 895394: mov eax, esi */
  eax = esi;
/* 895396: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 895399: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8953a0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8953a1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8953a2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8953a3: mov esp, ebp */
  esp = ebp;
/* 8953a5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8953a6: ret  */
  esp += 4; SPILL(); return;
L_8953a7: /* 8953a7: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8953aa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8953ac: je 0x8953b3 */
  if (zf) goto L_8953b3;
L_8953ae: /* 8953ae: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8953b1: jmp 0x8953b5 */
  goto L_8953b5;
L_8953b3: /* 8953b3: xor eax, eax */
  eax = 0;
L_8953b5: /* 8953b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8953b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8953b7: call 0x6c1505 */
  esp -= 4; W32(esp, 0x8953bcu); SPILL(); f_6c1505(); if (g_unwind) return; RELOAD();
/* 8953bc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8953bf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8953c2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8953c3: mov eax, esi */
  eax = esi;
/* 8953c5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8953c6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8953cd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8953ce: mov esp, ebp */
  esp = ebp;
/* 8953d0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8953d1: ret  */
  esp += 4; SPILL(); return;
}

void f_8953d2(void) {
  LOAD_REGS();
L_8953d2: /* 8953d2: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8953d5: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8953da: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 8953dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8953de: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 8953e1: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8953e6u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8953e6(); return;
}

void f_8953e6(void) {
  LOAD_REGS();
L_8953e6: /* 8953e6: push 0xa1a6e0 */
  { uint32_t v = 0xa1a6e0u; esp -= 4; W32(esp, v); }
/* 8953eb: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 8953f0: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8953f6u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8953f6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8953f9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8953fb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8953fd: call 0x99caf8 */
  esp -= 4; W32(esp, 0x895402u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_895402: guest_badaddr(0x895402); return;
}

void f_895490(void) {
  LOAD_REGS();
L_895490: /* 895490: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 895491: mov ebp, esp */
  ebp = esp;
/* 895493: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 895495: push 0x9d5960 */
  { uint32_t v = 0x9d5960u; esp -= 4; W32(esp, v); }
/* 89549a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8954a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8954a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8954a8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8954ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8954ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8954ad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8954ae: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8954b1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8954b4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8954b5: mov esi, ecx */
  esi = ecx;
/* 8954b7: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8954be: call 0x6c86d9 */
  esp -= 4; W32(esp, 0x8954c3u); SPILL(); f_6c86d9(); if (g_unwind) return; RELOAD();
/* 8954c3: mov ecx, edi */
  ecx = edi;
/* 8954c5: call dword ptr [0xcfa42c] */
  esp -= 4; W32(esp, 0x8954cbu); SPILL(); f_4e4101(); if (g_unwind) return; /* Core!?IsPersistent@FArchive@@QAEHXZ */ RELOAD();
/* 8954cb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8954cd: jne 0x895585 */
  if (!zf) goto L_895585;
L_8954d3: /* 8954d3: lea eax, [esi + 0xf8] */
  eax = (uint32_t)(esi + 0xf8u);
/* 8954d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8954da: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8954db: call 0x6c7ec3 */
  esp -= 4; W32(esp, 0x8954e0u); SPILL(); f_6c7ec3(); if (g_unwind) return; RELOAD();
/* 8954e0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8954e3: lea ecx, [esi + 0x104] */
  ecx = (uint32_t)(esi + 0x104u);
/* 8954e9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8954ea: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8954eb: call 0x6c6bfe */
  esp -= 4; W32(esp, 0x8954f0u); SPILL(); f_6c6bfe(); if (g_unwind) return; RELOAD();
/* 8954f0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8954f3: lea edx, [esi + 0x110] */
  edx = (uint32_t)(esi + 0x110u);
/* 8954f9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8954fa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8954fb: call 0x6c621c */
  esp -= 4; W32(esp, 0x895500u); SPILL(); f_6c621c(); if (g_unwind) return; RELOAD();
/* 895500: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 895503: lea eax, [esi + 0xf0] */
  eax = (uint32_t)(esi + 0xf0u);
/* 895509: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89550a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 89550b: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x895511u); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* 895511: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 895514: lea ecx, [esi + 0xf4] */
  ecx = (uint32_t)(esi + 0xf4u);
/* 89551a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89551b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 89551c: call dword ptr [0xcfa1b4] */
  esp -= 4; W32(esp, 0x895522u); SPILL(); f_4e415b(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAM@Z */ RELOAD();
/* 895522: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 895525: lea edx, [esi + 0x130] */
  edx = (uint32_t)(esi + 0x130u);
/* 89552b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89552c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 89552d: call 0x6c7f6d */
  esp -= 4; W32(esp, 0x895532u); SPILL(); f_6c7f6d(); if (g_unwind) return; RELOAD();
/* 895532: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 895535: lea eax, [esi + 0x13c] */
  eax = (uint32_t)(esi + 0x13cu);
/* 89553b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89553c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 89553d: call 0x6c1505 */
  esp -= 4; W32(esp, 0x895542u); SPILL(); f_6c1505(); if (g_unwind) return; RELOAD();
/* 895542: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 895545: lea ecx, [esi + 0x148] */
  ecx = (uint32_t)(esi + 0x148u);
/* 89554b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89554c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 89554d: call 0x6c90bb */
  esp -= 4; W32(esp, 0x895552u); SPILL(); f_6c90bb(); if (g_unwind) return; RELOAD();
/* 895552: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 895555: lea edx, [esi + 0x170] */
  edx = (uint32_t)(esi + 0x170u);
/* 89555b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89555c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 89555d: call 0x6c1505 */
  esp -= 4; W32(esp, 0x895562u); SPILL(); f_6c1505(); if (g_unwind) return; RELOAD();
/* 895562: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 895565: lea eax, [esi + 0x17c] */
  eax = (uint32_t)(esi + 0x17cu);
/* 89556b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89556c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 89556d: call 0x6c90bb */
  esp -= 4; W32(esp, 0x895572u); SPILL(); f_6c90bb(); if (g_unwind) return; RELOAD();
/* 895572: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 895575: add esi, 0xb4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xb4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 89557b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 89557c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 89557d: call 0x6c765d */
  esp -= 4; W32(esp, 0x895582u); SPILL(); f_6c765d(); if (g_unwind) return; RELOAD();
/* 895582: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_895585: /* 895585: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 895588: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 895589: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 89558a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 895591: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 895592: mov esp, ebp */
  esp = ebp;
/* 895594: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 895595: ret 4 */
  esp += 8; SPILL(); return;
}

void f_895598(void) {
  LOAD_REGS();
L_895598: /* 895598: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 89559b: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8955a0: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 8955a3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8955a4: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8955a7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8955acu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8955ac(); return;
}

void f_8955ac(void) {
  LOAD_REGS();
L_8955ac: /* 8955ac: push 0xa1a700 */
  { uint32_t v = 0xa1a700u; esp -= 4; W32(esp, v); }
/* 8955b1: push 0xae77ac */
  { uint32_t v = 0xae77acu; esp -= 4; W32(esp, v); }
/* 8955b6: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8955bcu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8955bc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8955bf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8955c1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8955c3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8955c8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8955c8: guest_badaddr(0x8955c8); return;
}

void f_895620(void) {
  LOAD_REGS();
L_895620: /* 895620: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 895621: mov ebp, esp */
  ebp = esp;
/* 895623: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 895625: push 0x9d5970 */
  { uint32_t v = 0x9d5970u; esp -= 4; W32(esp, v); }
/* 89562a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 895630: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 895631: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 895638: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89563b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 89563c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 89563d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 89563e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 895641: mov esi, ecx */
  esi = ecx;
/* 895643: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 895645: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 895648: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 89564f: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x895655u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 895655: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 895658: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 895659: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 89565c: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x895662u); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 895662: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 895664: je 0x89572b */
  if (zf) goto L_89572b;
L_89566a: /* 89566a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89566c: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 89566f: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x895675u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 895675: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 895678: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 895679: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 89567c: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x895682u); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 895682: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 895684: je 0x89572b */
  if (zf) goto L_89572b;
L_89568a: /* 89568a: mov edi, dword ptr [esi + 0x2f0] */
  edi = R32((uint32_t)(esi + 0x2f0u));
/* 895690: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 895693: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 895694: lea ecx, [esi + 0x2ec] */
  ecx = (uint32_t)(esi + 0x2ecu);
/* 89569a: call 0x6c2469 */
  esp -= 4; W32(esp, 0x89569fu); SPILL(); f_6c2469(); if (g_unwind) return; RELOAD();
/* 89569f: mov ecx, dword ptr [esi + 0x2f0] */
  ecx = R32((uint32_t)(esi + 0x2f0u));
/* 8956a5: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8956a7: jne 0x8956d3 */
  if (!zf) goto L_8956d3;
L_8956a9: /* 8956a9: cmp dword ptr [esi + 0x308], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x308u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8956af: jne 0x895713 */
  if (!zf) goto L_895713;
L_8956b1: /* 8956b1: cmp dword ptr [esi + 0x2fc], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x2fcu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8956b7: jne 0x895713 */
  if (!zf) goto L_895713;
L_8956b9: /* 8956b9: mov ecx, dword ptr [esi + 0x2f8] */
  ecx = R32((uint32_t)(esi + 0x2f8u));
/* 8956bf: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8956c2: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 8956c5: mov edi, dword ptr [esi + 0x304] */
  edi = R32((uint32_t)(esi + 0x304u));
/* 8956cb: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8956ce: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8956d1: jmp 0x895707 */
  goto L_895707;
L_8956d3: /* 8956d3: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8956d5: lea edi, [esi + 0x2f8] */
  edi = (uint32_t)(esi + 0x2f8u);
/* 8956db: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8956dd: mov ecx, edi */
  ecx = edi;
/* 8956df: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8956e5u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8956e5: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8956e7: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8956ea: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 8956ec: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 8956ef: add esi, 0x304 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x304u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8956f5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8956f7: mov ecx, esi */
  ecx = esi;
/* 8956f9: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8956ffu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8956ff: lea edi, [eax + eax*2] */
  edi = (uint32_t)(eax + eax*2);
/* 895702: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 895704: shl edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
L_895707: /* 895707: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 89570a: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 89570c: mov ecx, 0xc */
  ecx = 0xcu;
/* 895711: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_895713: /* 895713: mov eax, 1 */
  eax = 0x1u;
/* 895718: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 89571b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 895722: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 895723: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 895724: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 895725: mov esp, ebp */
  esp = ebp;
/* 895727: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 895728: ret 0xc */
  esp += 16; SPILL(); return;
L_89572b: /* 89572b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 89572e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 89572f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 895730: xor eax, eax */
  eax = 0;
/* 895732: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 895739: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 89573a: mov esp, ebp */
  esp = ebp;
/* 89573c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 89573d: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_895740(void) {
  LOAD_REGS();
L_895740: /* 895740: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 895743: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 895748: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 89574b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89574c: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 89574f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x895754u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_895754(); return;
}

void f_895754(void) {
  LOAD_REGS();
L_895754: /* 895754: push 0xa1a750 */
  { uint32_t v = 0xa1a750u; esp -= 4; W32(esp, v); }
/* 895759: push 0xae7bb0 */
  { uint32_t v = 0xae7bb0u; esp -= 4; W32(esp, v); }
/* 89575e: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x895764u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 895764: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 895767: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 895769: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89576b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x895770u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_895770: guest_badaddr(0x895770); return;
}

void f_8957e0(void) {
  LOAD_REGS();
L_8957e0: /* 8957e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8957e2: push 0x9d5988 */
  { uint32_t v = 0x9d5988u; esp -= 4; W32(esp, v); }
/* 8957e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8957ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8957ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8957f5: sub esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8957f8: mov eax, dword ptr [esp + 0x6c] */
  eax = R32((uint32_t)(esp + 0x6cu));
/* 8957fc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8957fd: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8957fe: mov ebp, dword ptr [eax + 0x10] */
  ebp = R32((uint32_t)(eax + 0x10u));
/* 895801: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 895802: mov esi, dword ptr [esp + 0x6c] */
  esi = R32((uint32_t)(esp + 0x6cu));
/* 895806: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 895807: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 895808: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 89580a: mov ecx, esi */
  ecx = esi;
/* 89580c: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x895812u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 895812: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 895814: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 895815: mov ecx, esi */
  ecx = esi;
/* 895817: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x89581du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 89581d: mov edi, dword ptr [esp + 0x74] */
  edi = R32((uint32_t)(esp + 0x74u));
/* 895821: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 895822: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 895824: mov ecx, edi */
  ecx = edi;
/* 895826: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x89582cu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 89582c: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 89582e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 89582f: mov ecx, edi */
  ecx = edi;
/* 895831: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x895837u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 895837: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 89583b: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x895841u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 895841: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 895842: xor ebx, ebx */
  ebx = 0;
/* 895844: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 895846: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 89584a: mov dword ptr [esp + 0x64], ebx */
  W32((uint32_t)(esp + 0x64u), ebx);
/* 89584e: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x895854u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 895854: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 895856: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 895857: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 89585b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x895861u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 895861: cmp ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 895863: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 895867: jle 0x895932 */
  if ((zf || sf != of)) goto L_895932;
L_89586d: /* 89586d: xor edi, edi */
  edi = 0;
/* 89586f: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
L_895873: /* 895873: mov ecx, dword ptr [esp + 0x7c] */
  ecx = R32((uint32_t)(esp + 0x7cu));
/* 895877: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 89587a: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 89587e: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 895881: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 895883: jge 0x8958dd */
  if ((sf == of)) goto L_8958dd;
L_895885: /* 895885: mov ecx, dword ptr [esp + 0x64] */
  ecx = R32((uint32_t)(esp + 0x64u));
/* 895889: mov edx, dword ptr [ecx + 0x1dc] */
  edx = R32((uint32_t)(ecx + 0x1dcu));
/* 89588f: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 895893: lea ecx, [edx + eax + 0x18] */
  ecx = (uint32_t)(edx + eax + 0x18u);
/* 895897: mov edx, dword ptr [esp + 0x74] */
  edx = R32((uint32_t)(esp + 0x74u));
/* 89589b: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 89589d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 89589f: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8958a1: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 8958a3: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8958a6: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8958a9: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8958ac: mov edx, dword ptr [esp + 0x64] */
  edx = R32((uint32_t)(esp + 0x64u));
/* 8958b0: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8958b3: mov eax, dword ptr [edx + 0x1dc] */
  eax = R32((uint32_t)(edx + 0x1dcu));
/* 8958b9: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8958bd: lea edx, [eax + ecx + 8] */
  edx = (uint32_t)(eax + ecx + 0x8u);
/* 8958c1: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8958c3: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8958c5: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8958c7: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8958c9: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 8958cc: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 8958cf: mov ecx, dword ptr [edx + 8] */
  ecx = R32((uint32_t)(edx + 0x8u));
/* 8958d2: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8958d5: mov edx, dword ptr [edx + 0xc] */
  edx = R32((uint32_t)(edx + 0xcu));
/* 8958d8: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 8958db: jmp 0x89590e */
  goto L_89590e;
L_8958dd: /* 8958dd: mov ecx, dword ptr [esp + 0x84] */
  ecx = R32((uint32_t)(esp + 0x84u));
/* 8958e4: mov edx, dword ptr [esp + 0x74] */
  edx = R32((uint32_t)(esp + 0x74u));
/* 8958e8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8958ea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8958eb: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8958ed: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8958ef: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8958f1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8958f2: mov ecx, dword ptr [esp + 0x8c] */
  ecx = R32((uint32_t)(esp + 0x8cu));
/* 8958f9: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8958fb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8958fc: mov edx, dword ptr [esp + 0x88] */
  edx = R32((uint32_t)(esp + 0x88u));
/* 895903: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 895904: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 895905: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 895906: call 0x6c9f4d */
  esp -= 4; W32(esp, 0x89590bu); SPILL(); f_6c9f4d(); if (g_unwind) return; RELOAD();
/* 89590b: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_89590e: /* 89590e: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 895912: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 895916: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 895917: add edx, 0x40 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 89591a: add edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 89591d: add ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 895920: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 895922: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 895926: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 89592a: jl 0x895873 */
  if ((sf != of)) goto L_895873;
L_895930: /* 895930: xor ebx, ebx */
  ebx = 0;
L_895932: /* 895932: mov eax, dword ptr [esp + 0x64] */
  eax = R32((uint32_t)(esp + 0x64u));
/* 895936: cmp dword ptr [eax + 0x1e0], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x1e0u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89593c: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 895940: jle 0x8959e0 */
  if ((zf || sf != of)) goto L_8959e0;
L_895946: /* 895946: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 89594a: mov dword ptr [esp + 0x7c], ebx */
  W32((uint32_t)(esp + 0x7cu), ebx);
/* 89594e: jmp 0x895954 */
  goto L_895954;
L_895950: /* 895950: mov esi, dword ptr [esp + 0x70] */
  esi = R32((uint32_t)(esp + 0x70u));
L_895954: /* 895954: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 895958: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 89595a: lea edi, [ebx + ecx] */
  edi = (uint32_t)(ebx + ecx);
/* 89595d: add edx, dword ptr [esp + 0x7c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x7cu)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 895961: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 895963: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 895966: mov eax, esp */
  eax = esp;
/* 895968: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 89596a: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 89596d: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 895970: mov ecx, dword ptr [edx + 8] */
  ecx = R32((uint32_t)(edx + 0x8u));
/* 895973: mov edx, dword ptr [edx + 0xc] */
  edx = R32((uint32_t)(edx + 0xcu));
/* 895976: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 895979: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 89597d: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 895980: call 0x6c867a */
  esp -= 4; W32(esp, 0x895985u); SPILL(); f_6c867a(); if (g_unwind) return; RELOAD();
/* 895985: mov esi, eax */
  esi = eax;
/* 895987: mov eax, dword ptr [esp + 0x74] */
  eax = R32((uint32_t)(esp + 0x74u));
/* 89598b: mov ecx, 0xc */
  ecx = 0xcu;
/* 895990: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 895992: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 895994: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 895998: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 89599c: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 89599e: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 8959a0: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8959a2: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 8959a4: mov esi, dword ptr [edx + 4] */
  esi = R32((uint32_t)(edx + 0x4u));
/* 8959a7: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 8959aa: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8959ad: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 8959b0: mov edx, dword ptr [esp + 0x7c] */
  edx = R32((uint32_t)(esp + 0x7cu));
/* 8959b4: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 8959b8: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8959bb: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8959be: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 8959c2: mov ecx, dword ptr [esp + 0x64] */
  ecx = R32((uint32_t)(esp + 0x64u));
/* 8959c6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8959c7: mov dword ptr [esp + 0x7c], edx */
  W32((uint32_t)(esp + 0x7cu), edx);
/* 8959cb: mov edx, dword ptr [ecx + 0x1e0] */
  edx = R32((uint32_t)(ecx + 0x1e0u));
/* 8959d1: add ebx, 0x30 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8959d4: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8959d6: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 8959da: jl 0x895950 */
  if ((sf != of)) goto L_895950;
L_8959e0: /* 8959e0: cmp ebp, 1 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8959e3: jle 0x895a3c */
  if ((zf || sf != of)) goto L_895a3c;
L_8959e5: /* 8959e5: mov dword ptr [esp + 0x74], 0x30 */
  W32((uint32_t)(esp + 0x74u), 0x30u);
/* 8959ed: mov ebx, 0x40 */
  ebx = 0x40u;
/* 8959f2: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  ebp = r;
  }
L_8959f3: /* 8959f3: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 8959f7: mov edx, dword ptr [esp + 0x74] */
  edx = R32((uint32_t)(esp + 0x74u));
/* 8959fb: mov eax, dword ptr [esp + 0x64] */
  eax = R32((uint32_t)(esp + 0x64u));
/* 8959ff: lea edi, [edx + ecx] */
  edi = (uint32_t)(edx + ecx);
/* 895a02: mov edx, dword ptr [eax + 0x1dc] */
  edx = R32((uint32_t)(eax + 0x1dcu));
/* 895a08: mov eax, dword ptr [edx + ebx + 0x34] */
  eax = R32((uint32_t)(edx + ebx + 0x34u));
/* 895a0c: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 895a0f: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 895a12: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 895a14: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 895a15: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* 895a19: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 895a1a: mov ecx, edi */
  ecx = edi;
/* 895a1c: call dword ptr [0xcfab50] */
  esp -= 4; W32(esp, 0x895a22u); SPILL(); f_4e39bd(); if (g_unwind) return; /* Core!?ApplyPivot@FCoords@@QBE?AV1@ABV1@@Z */ RELOAD();
/* 895a22: mov ecx, 0xc */
  ecx = 0xcu;
/* 895a27: mov esi, eax */
  esi = eax;
/* 895a29: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 895a2b: mov ecx, dword ptr [esp + 0x74] */
  ecx = R32((uint32_t)(esp + 0x74u));
/* 895a2f: add ecx, 0x30 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 895a32: add ebx, 0x40 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 895a35: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 895a36: mov dword ptr [esp + 0x74], ecx */
  W32((uint32_t)(esp + 0x74u), ecx);
/* 895a3a: jne 0x8959f3 */
  if (!zf) goto L_8959f3;
L_895a3c: /* 895a3c: mov eax, dword ptr [esp + 0x6c] */
  eax = R32((uint32_t)(esp + 0x6cu));
/* 895a40: mov edi, dword ptr [esp + 0x68] */
  edi = R32((uint32_t)(esp + 0x68u));
/* 895a44: lea esi, [eax + eax*2] */
  esi = (uint32_t)(eax + eax*2);
/* 895a47: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 895a4b: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 895a4e: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 895a50: mov ecx, 0xc */
  ecx = 0xcu;
/* 895a55: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 895a57: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 895a5b: mov dword ptr [esp + 0x5c], 0xffffffff */
  W32((uint32_t)(esp + 0x5cu), 0xffffffffu);
/* 895a63: call 0x6c31ac */
  esp -= 4; W32(esp, 0x895a68u); SPILL(); f_6c31ac(); if (g_unwind) return; RELOAD();
/* 895a68: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 895a6c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 895a6d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 895a6e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 895a6f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 895a76: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 895a77: add esp, 0x50 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 895a7a: ret  */
  esp += 4; SPILL(); return;
}

void f_895b30(void) {
  LOAD_REGS();
L_895b30: /* 895b30: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 895b32: push 0x9d59cc */
  { uint32_t v = 0x9d59ccu; esp -= 4; W32(esp, v); }
/* 895b37: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 895b3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 895b3e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 895b45: sub esp, 0xfc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 895b4b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 895b4c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 895b4d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 895b4e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 895b4f: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 895b51: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 895b53: lea ecx, [esp + 0x84] */
  ecx = (uint32_t)(esp + 0x84u);
/* 895b5a: mov dword ptr [esp + 0xa8], eax */
  W32((uint32_t)(esp + 0xa8u), eax);
/* 895b61: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x895b67u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 895b67: xor edi, edi */
  edi = 0;
/* 895b69: lea ecx, [esp + 0x90] */
  ecx = (uint32_t)(esp + 0x90u);
/* 895b70: mov dword ptr [esp + 0x114], edi */
  W32((uint32_t)(esp + 0x114u), edi);
/* 895b77: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x895b7du); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 895b7d: mov esi, dword ptr [esp + 0x120] */
  esi = R32((uint32_t)(esp + 0x120u));
/* 895b84: mov ebp, dword ptr [esi + 0xf0] */
  ebp = R32((uint32_t)(esi + 0xf0u));
/* 895b8a: mov eax, dword ptr [esp + 0x11c] */
  eax = R32((uint32_t)(esp + 0x11cu));
/* 895b91: imul ebp, ebp, 0x11c */
  { int64_t r = (int64_t)(int32_t)(ebp) * (int64_t)(int32_t)(0x11cu);
  ebp = (uint32_t)r;
  }
/* 895b97: mov ebx, dword ptr [eax + 0x1ec] */
  ebx = R32((uint32_t)(eax + 0x1ecu));
/* 895b9d: mov eax, dword ptr [esi + 0xb8] */
  eax = R32((uint32_t)(esi + 0xb8u));
/* 895ba3: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 895ba5: add ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 895ba7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 895ba8: lea ecx, [esp + 0x98] */
  ecx = (uint32_t)(esp + 0x98u);
/* 895baf: mov byte ptr [esp + 0x11c], 1 */
  W8((uint32_t)(esp + 0x11cu), 0x1u);
/* 895bb7: mov dword ptr [esp + 0x70], ebp */
  W32((uint32_t)(esp + 0x70u), ebp);
/* 895bbb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x895bc1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 895bc1: mov eax, dword ptr [ebp + 0x10c] */
  eax = R32((uint32_t)(ebp + 0x10cu));
/* 895bc7: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 895bca: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 895bcc: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 895bce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 895bcf: lea ecx, [esp + 0x8c] */
  ecx = (uint32_t)(esp + 0x8cu);
/* 895bd6: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x895bdcu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 895bdc: cmp dword ptr [esi + 0xb8], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xb8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 895be2: mov dword ptr [esp + 0x44], edi */
  W32((uint32_t)(esp + 0x44u), edi);
/* 895be6: jle 0x895ed1 */
  if ((zf || sf != of)) goto L_895ed1;
L_895bec: /* 895bec: xor edx, edx */
  edx = 0;
/* 895bee: mov dword ptr [esp + 0x48], edx */
  W32((uint32_t)(esp + 0x48u), edx);
/* 895bf2: jmp 0x895c00 */
  goto L_895c00;
L_895bf4: /* 895bf4: mov esi, dword ptr [esp + 0x120] */
  esi = R32((uint32_t)(esp + 0x120u));
/* 895bfb: jmp 0x895c00 */
  goto L_895c00;
L_895c00: /* 895c00: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 895c06: mov esi, dword ptr [esp + 0x90] */
  esi = R32((uint32_t)(esp + 0x90u));
/* 895c0d: mov eax, dword ptr [esp + 0x11c] */
  eax = R32((uint32_t)(esp + 0x11cu));
/* 895c14: mov eax, dword ptr [eax + 0x2d4] */
  eax = R32((uint32_t)(eax + 0x2d4u));
/* 895c1a: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 895c1c: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 895c1e: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 895c20: mov esi, ecx */
  esi = ecx;
/* 895c22: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 895c24: mov edi, edx */
  edi = edx;
/* 895c26: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 895c28: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* 895c2b: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 895c2e: mov esi, dword ptr [esi + 8] */
  esi = R32((uint32_t)(esi + 0x8u));
/* 895c31: mov dword ptr [edi + 8], esi */
  W32((uint32_t)(edi + 0x8u), esi);
/* 895c34: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 895c37: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 895c3a: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 895c3d: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 895c40: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 895c42: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 895c44: fmul dword ptr [ecx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xcu)));
/* 895c47: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 895c49: fadd dword ptr [edx] */
  ST0 = ST0 + (F32((uint32_t)(edx)));
/* 895c4b: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 895c4d: fld dword ptr [ecx + 0x20] */
  { double v = F32((uint32_t)(ecx + 0x20u)); FPUSH(v); }
/* 895c50: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 895c53: fld dword ptr [ecx + 0x1c] */
  { double v = F32((uint32_t)(ecx + 0x1cu)); FPUSH(v); }
/* 895c56: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 895c59: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 895c5b: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 895c5d: fmul dword ptr [ecx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x18u)));
/* 895c60: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 895c62: fadd dword ptr [edx + 4] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x4u)));
/* 895c65: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 895c68: fld dword ptr [ecx + 0x2c] */
  { double v = F32((uint32_t)(ecx + 0x2cu)); FPUSH(v); }
/* 895c6b: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 895c6e: fld dword ptr [ecx + 0x28] */
  { double v = F32((uint32_t)(ecx + 0x28u)); FPUSH(v); }
/* 895c71: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 895c74: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 895c76: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 895c78: fmul dword ptr [ecx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x24u)));
/* 895c7b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 895c7d: fadd dword ptr [edx + 8] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x8u)));
/* 895c80: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 895c83: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 895c86: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 895c88: fmul dword ptr [eax + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x2cu)));
/* 895c8b: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 895c8f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 895c91: fmul dword ptr [eax + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x28u)));
/* 895c94: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 895c98: fmul dword ptr [eax + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x24u)));
/* 895c9b: fstp dword ptr [esp + 0x78] */
  WF32((uint32_t)(esp + 0x78u), ST0); FPOP();
/* 895c9f: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 895ca2: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 895ca4: fmul dword ptr [eax + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x20u)));
/* 895ca7: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 895ca9: fmul dword ptr [eax + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x1cu)));
/* 895cac: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 895cb0: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 895cb2: fmul dword ptr [eax + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x18u)));
/* 895cb5: fstp dword ptr [esp + 0x9c] */
  WF32((uint32_t)(esp + 0x9cu), ST0); FPOP();
/* 895cbc: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 895cbf: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 895cc1: fmul dword ptr [eax + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x14u)));
/* 895cc4: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 895cc8: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 895cca: fmul dword ptr [eax + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x10u)));
/* 895ccd: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 895cd1: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 895cd4: fstp dword ptr [esp + 0xac] */
  WF32((uint32_t)(esp + 0xacu), ST0); FPOP();
/* 895cdb: fadd dword ptr [esp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x10u)));
/* 895cdf: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 895ce3: fadd dword ptr [esp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1cu)));
/* 895ce7: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 895ceb: fld dword ptr [esp + 0xac] */
  { double v = F32((uint32_t)(esp + 0xacu)); FPUSH(v); }
/* 895cf2: fadd dword ptr [esp + 0x9c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x9cu)));
/* 895cf9: fstp dword ptr [esp + 0x6c] */
  WF32((uint32_t)(esp + 0x6cu), ST0); FPOP();
/* 895cfd: lea esi, [edx + 0xc] */
  esi = (uint32_t)(edx + 0xcu);
/* 895d00: fadd dword ptr [esp + 0x40] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x40u)));
/* 895d04: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 895d08: fadd dword ptr [esp + 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x3cu)));
/* 895d0c: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 895d10: fadd dword ptr [esp + 0x78] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x78u)));
/* 895d14: fstp dword ptr [esp + 0x5c] */
  WF32((uint32_t)(esp + 0x5cu), ST0); FPOP();
/* 895d18: mov edi, dword ptr [esp + 0x5c] */
  edi = R32((uint32_t)(esp + 0x5cu));
/* 895d1c: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 895d1e: fstp dword ptr [esp + 0x60] */
  WF32((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 895d22: mov edi, dword ptr [esp + 0x60] */
  edi = R32((uint32_t)(esp + 0x60u));
/* 895d26: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 895d29: fstp dword ptr [esp + 0x64] */
  WF32((uint32_t)(esp + 0x64u), ST0); FPOP();
/* 895d2d: mov edi, dword ptr [esp + 0x64] */
  edi = R32((uint32_t)(esp + 0x64u));
/* 895d31: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* 895d34: fld dword ptr [ecx + 0x20] */
  { double v = F32((uint32_t)(ecx + 0x20u)); FPUSH(v); }
/* 895d37: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 895d39: lea esi, [edx + 0x18] */
  esi = (uint32_t)(edx + 0x18u);
/* 895d3c: fmul dword ptr [eax + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x2cu)));
/* 895d3f: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 895d43: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 895d45: fmul dword ptr [eax + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x28u)));
/* 895d48: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 895d4c: fmul dword ptr [eax + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x24u)));
/* 895d4f: fstp dword ptr [esp + 0xb8] */
  WF32((uint32_t)(esp + 0xb8u), ST0); FPOP();
/* 895d56: fld dword ptr [ecx + 0x1c] */
  { double v = F32((uint32_t)(ecx + 0x1cu)); FPUSH(v); }
/* 895d59: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 895d5b: fmul dword ptr [eax + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x20u)));
/* 895d5e: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 895d60: fmul dword ptr [eax + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x1cu)));
/* 895d63: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 895d67: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 895d69: fmul dword ptr [eax + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x18u)));
/* 895d6c: fstp dword ptr [esp + 0xdc] */
  WF32((uint32_t)(esp + 0xdcu), ST0); FPOP();
/* 895d73: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 895d76: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 895d78: fmul dword ptr [eax + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x14u)));
/* 895d7b: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 895d7f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 895d81: fmul dword ptr [eax + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x10u)));
/* 895d84: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 895d88: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 895d8b: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 895d8f: fadd dword ptr [esp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x10u)));
/* 895d93: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 895d97: fadd dword ptr [esp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1cu)));
/* 895d9b: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 895d9f: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 895da3: fadd dword ptr [esp + 0xdc] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xdcu)));
/* 895daa: fstp dword ptr [esp + 0xf4] */
  WF32((uint32_t)(esp + 0xf4u), ST0); FPOP();
/* 895db1: fadd dword ptr [esp + 0x40] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x40u)));
/* 895db5: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 895db9: fadd dword ptr [esp + 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x3cu)));
/* 895dbd: fld dword ptr [esp + 0xf4] */
  { double v = F32((uint32_t)(esp + 0xf4u)); FPUSH(v); }
/* 895dc4: fadd dword ptr [esp + 0xb8] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xb8u)));
/* 895dcb: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 895dcf: mov edi, dword ptr [esp + 0x4c] */
  edi = R32((uint32_t)(esp + 0x4cu));
/* 895dd3: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 895dd5: fstp dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 895dd9: mov edi, dword ptr [esp + 0x50] */
  edi = R32((uint32_t)(esp + 0x50u));
/* 895ddd: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 895de0: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 895de4: mov edi, dword ptr [esp + 0x54] */
  edi = R32((uint32_t)(esp + 0x54u));
/* 895de8: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* 895deb: fld dword ptr [ecx + 0x2c] */
  { double v = F32((uint32_t)(ecx + 0x2cu)); FPUSH(v); }
/* 895dee: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 895df0: fmul dword ptr [eax + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x2cu)));
/* 895df3: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 895df7: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 895df9: fmul dword ptr [eax + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x28u)));
/* 895dfc: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 895e00: fmul dword ptr [eax + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x24u)));
/* 895e03: fstp dword ptr [esp + 0x100] */
  WF32((uint32_t)(esp + 0x100u), ST0); FPOP();
/* 895e0a: fld dword ptr [ecx + 0x28] */
  { double v = F32((uint32_t)(ecx + 0x28u)); FPUSH(v); }
/* 895e0d: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 895e0f: fmul dword ptr [eax + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x20u)));
/* 895e12: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 895e14: fmul dword ptr [eax + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x1cu)));
/* 895e17: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 895e1b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 895e1d: fmul dword ptr [eax + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x18u)));
/* 895e20: add edx, 0x24 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 895e23: fstp dword ptr [esp + 0xd0] */
  WF32((uint32_t)(esp + 0xd0u), ST0); FPOP();
/* 895e2a: fld dword ptr [ecx + 0x24] */
  { double v = F32((uint32_t)(ecx + 0x24u)); FPUSH(v); }
/* 895e2d: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 895e2f: fmul dword ptr [eax + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x14u)));
/* 895e32: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 895e36: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 895e38: fmul dword ptr [eax + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x10u)));
/* 895e3b: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 895e3f: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 895e42: fstp dword ptr [esp + 0xc4] */
  WF32((uint32_t)(esp + 0xc4u), ST0); FPOP();
/* 895e49: fadd dword ptr [esp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x10u)));
/* 895e4d: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 895e51: fadd dword ptr [esp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1cu)));
/* 895e55: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 895e59: fld dword ptr [esp + 0xc4] */
  { double v = F32((uint32_t)(esp + 0xc4u)); FPUSH(v); }
/* 895e60: fadd dword ptr [esp + 0xd0] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xd0u)));
/* 895e67: fstp dword ptr [esp + 0xe8] */
  WF32((uint32_t)(esp + 0xe8u), ST0); FPOP();
/* 895e6e: fadd dword ptr [esp + 0x40] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x40u)));
/* 895e72: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 895e76: fadd dword ptr [esp + 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x3cu)));
/* 895e7a: fld dword ptr [esp + 0xe8] */
  { double v = F32((uint32_t)(esp + 0xe8u)); FPUSH(v); }
/* 895e81: fadd dword ptr [esp + 0x100] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x100u)));
/* 895e88: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 895e8c: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 895e90: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 895e92: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 895e96: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 895e9a: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 895e9d: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 895ea1: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 895ea5: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 895ea9: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 895eac: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 895eb0: mov ecx, dword ptr [esp + 0x120] */
  ecx = R32((uint32_t)(esp + 0x120u));
/* 895eb7: mov esi, dword ptr [ecx + 0xb8] */
  esi = R32((uint32_t)(ecx + 0xb8u));
/* 895ebd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 895ebe: add edx, 0x30 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 895ec1: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 895ec3: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* 895ec7: mov dword ptr [esp + 0x48], edx */
  W32((uint32_t)(esp + 0x48u), edx);
/* 895ecb: jl 0x895bf4 */
  if ((sf != of)) goto L_895bf4;
L_895ed1: /* 895ed1: mov ebx, dword ptr [ebp] */
  ebx = R32((uint32_t)(ebp));
/* 895ed4: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* 895ed6: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 895ed9: mov edx, dword ptr [esp + 0x90] */
  edx = R32((uint32_t)(esp + 0x90u));
/* 895ee0: mov ecx, dword ptr [esp + 0x84] */
  ecx = R32((uint32_t)(esp + 0x84u));
/* 895ee7: mov edi, dword ptr [esp + 0x124] */
  edi = R32((uint32_t)(esp + 0x124u));
/* 895eee: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 895ef1: mov dword ptr [esp + 0x58], edx */
  W32((uint32_t)(esp + 0x58u), edx);
/* 895ef5: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 895ef9: mov dword ptr [esp + 0x40], ecx */
  W32((uint32_t)(esp + 0x40u), ecx);
/* 895efd: mov dword ptr [esp + 0x44], esi */
  W32((uint32_t)(esp + 0x44u), esi);
/* 895f01: jae 0x896e76 */
  if (!cf) goto L_896e76;
L_895f07: /* 895f07: lea edx, [edi + 0xc] */
  edx = (uint32_t)(edi + 0xcu);
/* 895f0a: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 895f0d: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
/* 895f11: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 895f15: lea edx, [eax + 4] */
  edx = (uint32_t)(eax + 0x4u);
/* 895f18: lea ecx, [eax + 8] */
  ecx = (uint32_t)(eax + 0x8u);
/* 895f1b: jmp 0x895f20 */
  goto L_895f20;
L_895f20: /* 895f20: mov ebp, esi */
  ebp = esi;
/* 895f22: and ebp, 0xf0000000 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xf0000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  ebp = r;
  }
/* 895f28: jne 0x896022 */
  if (!zf) goto L_896022;
L_895f2e: /* 895f2e: mov ebp, dword ptr [esp + 0x58] */
  ebp = R32((uint32_t)(esp + 0x58u));
/* 895f32: and esi, 0xfff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 895f38: lea esi, [ebp + esi*8] */
  esi = (uint32_t)(ebp + esi*8);
/* 895f3c: mov ebp, dword ptr [eax + 0xc] */
  ebp = R32((uint32_t)(eax + 0xcu));
/* 895f3f: and ebp, 0x3ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 895f45: sub ebp, 0x1ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 895f4b: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 895f4f: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 895f53: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 895f56: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 895f58: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 895f5b: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 895f5d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 895f5f: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 895f61: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 895f64: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 895f66: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 895f68: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 895f6a: mov ebp, dword ptr [eax + 0xc] */
  ebp = R32((uint32_t)(eax + 0xcu));
/* 895f6d: shr ebp, 0xa */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebp = r;
  }
/* 895f70: and ebp, 0x3ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 895f76: sub ebp, 0x1ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 895f7c: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 895f80: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 895f84: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 895f87: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 895f89: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 895f8c: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 895f8e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 895f90: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 895f93: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 895f95: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 895f97: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 895f9a: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 895f9d: mov ebp, dword ptr [eax + 0xc] */
  ebp = R32((uint32_t)(eax + 0xcu));
/* 895fa0: shr ebp, 0x14 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 20;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebp = r;
  }
/* 895fa3: and ebp, 0x3ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 895fa9: sub ebp, 0x1ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 895faf: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 895fb3: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 895fb7: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 895fbb: fld dword ptr [esi + 0x2c] */
  { double v = F32((uint32_t)(esi + 0x2cu)); FPUSH(v); }
/* 895fbe: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 895fc0: fld dword ptr [esi + 0x28] */
  { double v = F32((uint32_t)(esi + 0x28u)); FPUSH(v); }
/* 895fc3: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 895fc5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 895fc7: fld dword ptr [esi + 0x24] */
  { double v = F32((uint32_t)(esi + 0x24u)); FPUSH(v); }
/* 895fca: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 895fcc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 895fce: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 895fd1: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 895fd4: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 895fd6: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 895fd9: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 895fdb: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 895fde: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 895fe0: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 895fe2: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 895fe5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 895fe7: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 895fea: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 895fec: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 895fef: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 895ff1: fmul dword ptr [esi + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x1cu)));
/* 895ff4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 895ff6: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 895ff8: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 895ffb: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 895ffd: fstp dword ptr [edi + 0x10] */
  WF32((uint32_t)(edi + 0x10u), ST0); FPOP();
/* 896000: fmul dword ptr [esi + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x2cu)));
/* 896003: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 896005: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 896008: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89600a: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 89600c: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 89600f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896011: fstp dword ptr [edi + 0x14] */
  WF32((uint32_t)(edi + 0x14u), ST0); FPOP();
/* 896014: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 896017: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89601a: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 89601d: jmp 0x8963f6 */
  goto L_8963f6;
L_896022: /* 896022: cmp esi, 0xf0000000 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xf0000000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 896028: jb 0x89607c */
  if (cf) goto L_89607c;
L_89602a: /* 89602a: mov ebx, dword ptr [esp + 0x84] */
  ebx = R32((uint32_t)(esp + 0x84u));
/* 896031: and esi, 0xfffffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 896037: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 89603b: lea esi, [ebx + esi*4] */
  esi = (uint32_t)(ebx + esi*4);
/* 89603e: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* 896040: mov ebx, edi */
  ebx = edi;
/* 896042: mov dword ptr [ebx], ebp */
  W32((uint32_t)(ebx), ebp);
/* 896044: mov ebp, dword ptr [esi + 4] */
  ebp = R32((uint32_t)(esi + 0x4u));
/* 896047: mov dword ptr [ebx + 4], ebp */
  W32((uint32_t)(ebx + 0x4u), ebp);
/* 89604a: mov esi, dword ptr [esi + 8] */
  esi = R32((uint32_t)(esi + 0x8u));
/* 89604d: mov dword ptr [ebx + 8], esi */
  W32((uint32_t)(ebx + 0x8u), esi);
/* 896050: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 896054: mov esi, dword ptr [esp + 0x84] */
  esi = R32((uint32_t)(esp + 0x84u));
/* 89605b: lea esi, [esi + ebx*4 + 0xc] */
  esi = (uint32_t)(esi + ebx*4 + 0xcu);
/* 89605f: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* 896061: mov ebx, dword ptr [esp + 0x2c] */
  ebx = R32((uint32_t)(esp + 0x2cu));
/* 896065: mov dword ptr [ebx], ebp */
  W32((uint32_t)(ebx), ebp);
/* 896067: mov ebp, dword ptr [esi + 4] */
  ebp = R32((uint32_t)(esi + 0x4u));
/* 89606a: mov dword ptr [ebx + 4], ebp */
  W32((uint32_t)(ebx + 0x4u), ebp);
/* 89606d: mov esi, dword ptr [esi + 8] */
  esi = R32((uint32_t)(esi + 0x8u));
/* 896070: mov dword ptr [ebx + 8], esi */
  W32((uint32_t)(ebx + 0x8u), esi);
/* 896073: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 896077: jmp 0x8963f2 */
  goto L_8963f2;
L_89607c: /* 89607c: test esi, 0xe0000000 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xe0000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 896082: jne 0x8962bb */
  if (!zf) goto L_8962bb;
L_896088: /* 896088: mov ebp, dword ptr [ebx + 4] */
  ebp = R32((uint32_t)(ebx + 0x4u));
/* 89608b: mov dword ptr [esp + 0x44], ebp */
  W32((uint32_t)(esp + 0x44u), ebp);
/* 89608f: mov ebp, esi */
  ebp = esi;
/* 896091: and esi, 0xfff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 896097: and ebp, 0xfffffff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xfffffffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 89609d: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 8960a1: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8960a5: mov ebp, dword ptr [esp + 0x44] */
  ebp = R32((uint32_t)(esp + 0x44u));
/* 8960a9: and ebp, 0xfffffff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xfffffffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 8960af: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 8960b3: fmul dword ptr [0xa1a798] */
  ST0 = ST0 * (F32((uint32_t)(0xa1a798u)));
/* 8960b9: mov ebp, dword ptr [esp + 0x58] */
  ebp = R32((uint32_t)(esp + 0x58u));
/* 8960bd: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8960c1: lea esi, [ebp + esi*8] */
  esi = (uint32_t)(ebp + esi*8);
/* 8960c5: mov dword ptr [esp + 0x48], esi */
  W32((uint32_t)(esp + 0x48u), esi);
/* 8960c9: mov esi, dword ptr [esp + 0x44] */
  esi = R32((uint32_t)(esp + 0x44u));
/* 8960cd: fmul dword ptr [0xa1a798] */
  ST0 = ST0 * (F32((uint32_t)(0xa1a798u)));
/* 8960d3: and esi, 0xfff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 8960d9: lea ebp, [ebp + esi*8] */
  ebp = (uint32_t)(ebp + esi*8);
/* 8960dd: mov esi, dword ptr [eax + 0xc] */
  esi = R32((uint32_t)(eax + 0xcu));
/* 8960e0: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 8960e4: and esi, 0x3ff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 8960ea: sub esi, 0x1ff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 8960f0: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 8960f4: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 8960f8: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8960fc: shr esi, 0xa */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 8960ff: and esi, 0x3ff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 896105: sub esi, 0x1ff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 89610b: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 89610f: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 896113: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 896117: shr esi, 0x14 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 20;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 89611a: and esi, 0x3ff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 896120: sub esi, 0x1ff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 896126: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 89612a: mov esi, dword ptr [esp + 0x48] */
  esi = R32((uint32_t)(esp + 0x48u));
/* 89612e: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 896132: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 896135: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896137: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 89613a: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 89613c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89613e: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 896140: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 896143: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896145: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 896147: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 896149: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 89614c: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 89614e: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 896151: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 896153: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896155: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 896158: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 89615a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89615c: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 89615f: fmul st(6) */
  ST0 = ST0 * STI(6);
/* 896161: fstp dword ptr [esp + 0xa0] */
  WF32((uint32_t)(esp + 0xa0u), ST0); FPOP();
/* 896168: fld dword ptr [esi + 0x2c] */
  { double v = F32((uint32_t)(esi + 0x2cu)); FPUSH(v); }
/* 89616b: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 89616d: fld dword ptr [esi + 0x28] */
  { double v = F32((uint32_t)(esi + 0x28u)); FPUSH(v); }
/* 896170: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 896172: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896174: fld dword ptr [esi + 0x24] */
  { double v = F32((uint32_t)(esi + 0x24u)); FPUSH(v); }
/* 896177: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 896179: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89617b: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 89617e: fmul st(6) */
  ST0 = ST0 * STI(6);
/* 896180: fstp dword ptr [esp + 0xa4] */
  WF32((uint32_t)(esp + 0xa4u), ST0); FPOP();
/* 896187: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 896189: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 89618c: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 89618e: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 896191: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896193: fld st(4) */
  { double v = STI(4); FPUSH(v); }
/* 896195: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 896198: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89619a: fmul st(6) */
  ST0 = ST0 * STI(6);
/* 89619c: fstp dword ptr [esp + 0x78] */
  WF32((uint32_t)(esp + 0x78u), ST0); FPOP();
/* 8961a0: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8961a2: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 8961a5: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 8961a7: fmul dword ptr [esi + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x1cu)));
/* 8961aa: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8961ac: fld st(4) */
  { double v = STI(4); FPUSH(v); }
/* 8961ae: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 8961b1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8961b3: fmul st(6) */
  ST0 = ST0 * STI(6);
/* 8961b5: fstp dword ptr [esp + 0x7c] */
  WF32((uint32_t)(esp + 0x7cu), ST0); FPOP();
/* 8961b9: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8961bb: fmul dword ptr [esi + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x2cu)));
/* 8961be: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 8961c0: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 8961c3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8961c5: fld st(4) */
  { double v = STI(4); FPUSH(v); }
/* 8961c7: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 8961ca: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8961cc: fmul st(6) */
  ST0 = ST0 * STI(6);
/* 8961ce: fstp dword ptr [esp + 0x80] */
  WF32((uint32_t)(esp + 0x80u), ST0); FPOP();
/* 8961d5: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 8961d8: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 8961da: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 8961dd: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8961df: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8961e1: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 8961e3: fmul dword ptr [ebp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xcu)));
/* 8961e6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8961e8: fadd dword ptr [ebp] */
  ST0 = ST0 + (F32((uint32_t)(ebp)));
/* 8961eb: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 8961ed: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 8961ef: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 8961f1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8961f3: fld dword ptr [ebp + 0x20] */
  { double v = F32((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* 8961f6: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 8961f8: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 8961fb: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8961fd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8961ff: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 896202: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 896204: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896206: fadd dword ptr [ebp + 4] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x4u)));
/* 896209: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 89620b: fadd dword ptr [esp + 0xa0] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xa0u)));
/* 896212: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 896215: fld dword ptr [ebp + 0x2c] */
  { double v = F32((uint32_t)(ebp + 0x2cu)); FPUSH(v); }
/* 896218: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 89621a: fld dword ptr [ebp + 0x28] */
  { double v = F32((uint32_t)(ebp + 0x28u)); FPUSH(v); }
/* 89621d: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 89621f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896221: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* 896224: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 896226: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896228: fadd dword ptr [ebp + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x8u)));
/* 89622b: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 89622d: fadd dword ptr [esp + 0xa4] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xa4u)));
/* 896234: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 896237: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 896239: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* 89623c: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 89623e: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* 896241: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896243: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 896245: fmul dword ptr [ebp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xcu)));
/* 896248: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89624a: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 89624e: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 896250: add esi, 0x20 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 896253: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 896256: fadd dword ptr [esp + 0x78] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x78u)));
/* 89625a: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89625d: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 896260: add edi, 0x20 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 896263: fstp dword ptr [esi - 0x20] */
  WF32((uint32_t)(esi + 0xffffffe0u), ST0); FPOP();
/* 896266: mov dword ptr [esp + 0x2c], esi */
  W32((uint32_t)(esp + 0x2cu), esi);
/* 89626a: add ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 89626d: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 89626f: fmul dword ptr [ebp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x20u)));
/* 896272: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 896274: fmul dword ptr [ebp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x1cu)));
/* 896277: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896279: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 89627b: fmul dword ptr [ebp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x18u)));
/* 89627e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896280: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 896282: fadd dword ptr [esp + 0x7c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x7cu)));
/* 896286: fstp dword ptr [edi - 0x10] */
  WF32((uint32_t)(edi + 0xfffffff0u), ST0); FPOP();
/* 896289: fmul dword ptr [ebp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x2cu)));
/* 89628c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 89628e: fmul dword ptr [ebp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x28u)));
/* 896291: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896293: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 896295: fmul dword ptr [ebp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x24u)));
/* 896298: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89629a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 89629c: fadd dword ptr [esp + 0x80] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x80u)));
/* 8962a3: fstp dword ptr [edi - 0xc] */
  WF32((uint32_t)(edi + 0xfffffff4u), ST0); FPOP();
/* 8962a6: mov ebp, dword ptr [ebx - 8] */
  ebp = R32((uint32_t)(ebx + 0xfffffff8u));
/* 8962a9: mov dword ptr [edi - 8], ebp */
  W32((uint32_t)(edi + 0xfffffff8u), ebp);
/* 8962ac: mov ebp, dword ptr [ebx - 4] */
  ebp = R32((uint32_t)(ebx + 0xfffffffcu));
/* 8962af: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8962b1: mov dword ptr [edi - 4], ebp */
  W32((uint32_t)(edi + 0xfffffffcu), ebp);
/* 8962b4: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8962b6: jmp 0x896e5f */
  goto L_896e5f;
L_8962bb: /* 8962bb: cmp ebp, 0x80000000 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8962c1: jne 0x896410 */
  if (!zf) goto L_896410;
L_8962c7: /* 8962c7: mov ebp, dword ptr [esp + 0x58] */
  ebp = R32((uint32_t)(esp + 0x58u));
/* 8962cb: and esi, 0xfff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 8962d1: lea esi, [ebp + esi*8] */
  esi = (uint32_t)(ebp + esi*8);
/* 8962d5: mov ebp, dword ptr [eax + 0xc] */
  ebp = R32((uint32_t)(eax + 0xcu));
/* 8962d8: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 8962dc: and ebp, 0x3ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 8962e2: sub ebp, 0x1ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 8962e8: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 8962ec: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 8962f0: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8962f4: shr ebp, 0xa */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebp = r;
  }
/* 8962f7: and ebp, 0x3ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 8962fd: sub ebp, 0x1ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 896303: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 896307: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 89630b: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 89630f: shr ebp, 0x14 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 20;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebp = r;
  }
/* 896312: and ebp, 0x3ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 896318: sub ebp, 0x1ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 89631e: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 896322: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 896326: mov ebp, dword ptr [esp + 0x40] */
  ebp = R32((uint32_t)(esp + 0x40u));
/* 89632a: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 89632d: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 89632f: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 896332: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 896334: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896336: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 896339: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 89633b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89633d: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 89633f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 896341: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 896344: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 896346: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 896349: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 89634b: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 89634e: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 896350: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896352: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 896354: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 896357: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896359: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 89635c: fst dword ptr [ebp + 4] */
  WF32((uint32_t)(ebp + 0x4u), ST0);
/* 89635f: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 896362: fld dword ptr [esi + 0x2c] */
  { double v = F32((uint32_t)(esi + 0x2cu)); FPUSH(v); }
/* 896365: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896367: fld dword ptr [esi + 0x28] */
  { double v = F32((uint32_t)(esi + 0x28u)); FPUSH(v); }
/* 89636a: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 89636c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89636e: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 896370: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 896373: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896375: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 896378: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 89637b: mov ebp, dword ptr [esp + 0x3c] */
  ebp = R32((uint32_t)(esp + 0x3cu));
/* 89637f: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 896382: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 896384: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 896387: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 896389: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 89638c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89638e: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 896390: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 896393: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896395: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 896397: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 89639a: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 89639e: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 8963a1: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8963a3: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 8963a6: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8963a8: fmul dword ptr [esi + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x1cu)));
/* 8963ab: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8963ad: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 8963af: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 8963b2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8963b4: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8963b6: mov ebp, dword ptr [esp + 0x40] */
  ebp = R32((uint32_t)(esp + 0x40u));
/* 8963ba: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 8963bd: add ebp, 0x18 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 8963c0: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8963c3: fstp dword ptr [edi + 0x10] */
  WF32((uint32_t)(edi + 0x10u), ST0); FPOP();
/* 8963c6: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8963c9: mov dword ptr [esp + 0x40], ebp */
  W32((uint32_t)(esp + 0x40u), ebp);
/* 8963cd: fmul dword ptr [esi + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x2cu)));
/* 8963d0: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8963d2: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 8963d5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8963d7: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8963d9: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 8963dc: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
/* 8963e0: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8963e3: mov dword ptr [esp + 0x3c], esi */
  W32((uint32_t)(esp + 0x3cu), esi);
/* 8963e7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8963e9: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8963ec: fst dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0);
/* 8963ef: fstp dword ptr [edi + 0x14] */
  WF32((uint32_t)(edi + 0x14u), ST0); FPOP();
L_8963f2: /* 8963f2: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
L_8963f6: /* 8963f6: mov esi, dword ptr [ebx + 4] */
  esi = R32((uint32_t)(ebx + 0x4u));
/* 8963f9: mov dword ptr [edi + 0x18], esi */
  W32((uint32_t)(edi + 0x18u), esi);
/* 8963fc: mov esi, dword ptr [ebx + 8] */
  esi = R32((uint32_t)(ebx + 0x8u));
/* 8963ff: mov dword ptr [edi + 0x1c], esi */
  W32((uint32_t)(edi + 0x1cu), esi);
/* 896402: add edi, 0x20 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 896405: add ebp, 0x20 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 896408: add ebx, 0xc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 89640b: jmp 0x896e5b */
  goto L_896e5b;
L_896410: /* 896410: cmp ebp, 0x90000000 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x90000000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 896416: jne 0x8966a9 */
  if (!zf) goto L_8966a9;
L_89641c: /* 89641c: mov ebx, dword ptr [ebx + 4] */
  ebx = R32((uint32_t)(ebx + 0x4u));
/* 89641f: mov ebp, dword ptr [esp + 0x58] */
  ebp = R32((uint32_t)(esp + 0x58u));
/* 896423: mov dword ptr [esp + 0x48], ebx */
  W32((uint32_t)(esp + 0x48u), ebx);
/* 896427: and esi, 0xfff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 89642d: lea esi, [ebp + esi*8] */
  esi = (uint32_t)(ebp + esi*8);
/* 896431: and ebx, 0xfff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 896437: lea ebx, [ebp + ebx*8] */
  ebx = (uint32_t)(ebp + ebx*8);
/* 89643b: mov ebp, dword ptr [esp + 0x44] */
  ebp = R32((uint32_t)(esp + 0x44u));
/* 89643f: and ebp, 0xfffffff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xfffffffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 896445: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 896449: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 89644d: mov ebp, dword ptr [esp + 0x48] */
  ebp = R32((uint32_t)(esp + 0x48u));
/* 896451: and ebp, 0xfffffff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xfffffffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 896457: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 89645b: fmul dword ptr [0xa1a798] */
  ST0 = ST0 * (F32((uint32_t)(0xa1a798u)));
/* 896461: mov ebp, dword ptr [eax + 0xc] */
  ebp = R32((uint32_t)(eax + 0xcu));
/* 896464: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 896468: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 89646c: and ebp, 0x3ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 896472: sub ebp, 0x1ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 896478: fmul dword ptr [0xa1a798] */
  ST0 = ST0 * (F32((uint32_t)(0xa1a798u)));
/* 89647e: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 896482: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 896486: shr ebp, 0xa */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebp = r;
  }
/* 896489: and ebp, 0x3ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 89648f: sub ebp, 0x1ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 896495: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 896499: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 89649d: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 8964a1: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 8964a5: shr ebp, 0x14 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 20;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebp = r;
  }
/* 8964a8: fstp dword ptr [esp + 0x5c] */
  WF32((uint32_t)(esp + 0x5cu), ST0); FPOP();
/* 8964ac: and ebp, 0x3ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 8964b2: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8964b6: sub ebp, 0x1ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 8964bc: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 8964c0: fstp dword ptr [esp + 0x60] */
  WF32((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 8964c4: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8964c8: fstp dword ptr [esp + 0x64] */
  WF32((uint32_t)(esp + 0x64u), ST0); FPOP();
/* 8964cc: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 8964cf: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 8964d1: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 8964d4: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8964d6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8964d8: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8964db: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 8964dd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8964df: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 8964e1: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8964e3: fstp dword ptr [esp + 0x6c] */
  WF32((uint32_t)(esp + 0x6cu), ST0); FPOP();
/* 8964e7: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 8964ea: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 8964ec: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 8964ef: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8964f1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8964f3: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 8964f6: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 8964f8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8964fa: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 8964fd: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8964ff: fstp dword ptr [esp + 0x70] */
  WF32((uint32_t)(esp + 0x70u), ST0); FPOP();
/* 896503: fld dword ptr [esi + 0x2c] */
  { double v = F32((uint32_t)(esi + 0x2cu)); FPUSH(v); }
/* 896506: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896508: fld dword ptr [esi + 0x28] */
  { double v = F32((uint32_t)(esi + 0x28u)); FPUSH(v); }
/* 89650b: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 89650d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89650f: fld dword ptr [esi + 0x24] */
  { double v = F32((uint32_t)(esi + 0x24u)); FPUSH(v); }
/* 896512: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 896514: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896516: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 896519: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 89651b: fstp dword ptr [esp + 0x74] */
  WF32((uint32_t)(esp + 0x74u), ST0); FPOP();
/* 89651f: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 896523: fmul dword ptr [esi + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x2cu)));
/* 896526: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 89652a: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 89652d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89652f: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 896533: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 896536: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896538: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 89653a: fstp dword ptr [esp + 0xb4] */
  WF32((uint32_t)(esp + 0xb4u), ST0); FPOP();
/* 896541: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 896545: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 896548: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 89654c: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 89654f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896551: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 896555: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 896558: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89655a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 89655c: fstp dword ptr [esp + 0xac] */
  WF32((uint32_t)(esp + 0xacu), ST0); FPOP();
/* 896563: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 896567: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 89656a: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 89656e: fmul dword ptr [esi + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x1cu)));
/* 896571: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896573: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 896577: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 89657a: mov esi, dword ptr [esp + 0x40] */
  esi = R32((uint32_t)(esp + 0x40u));
/* 89657e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896580: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 896582: fld dword ptr [ebx + 0x14] */
  { double v = F32((uint32_t)(ebx + 0x14u)); FPUSH(v); }
/* 896585: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896587: fld dword ptr [ebx + 0x10] */
  { double v = F32((uint32_t)(ebx + 0x10u)); FPUSH(v); }
/* 89658a: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 89658c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89658e: fld dword ptr [ebx + 0xc] */
  { double v = F32((uint32_t)(ebx + 0xcu)); FPUSH(v); }
/* 896591: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 896593: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896595: fadd dword ptr [ebx] */
  ST0 = ST0 + (F32((uint32_t)(ebx)));
/* 896597: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 89659b: fadd dword ptr [esp + 0x6c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x6cu)));
/* 89659f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8965a1: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 8965a3: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 8965a5: fld dword ptr [ebx + 0x20] */
  { double v = F32((uint32_t)(ebx + 0x20u)); FPUSH(v); }
/* 8965a8: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 8965aa: fld dword ptr [ebx + 0x1c] */
  { double v = F32((uint32_t)(ebx + 0x1cu)); FPUSH(v); }
/* 8965ad: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8965af: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8965b1: fld dword ptr [ebx + 0x18] */
  { double v = F32((uint32_t)(ebx + 0x18u)); FPUSH(v); }
/* 8965b4: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 8965b6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8965b8: fadd dword ptr [ebx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x4u)));
/* 8965bb: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 8965bf: fadd dword ptr [esp + 0x70] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x70u)));
/* 8965c3: fst dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0);
/* 8965c6: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 8965c9: fld dword ptr [ebx + 0x2c] */
  { double v = F32((uint32_t)(ebx + 0x2cu)); FPUSH(v); }
/* 8965cc: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 8965ce: fld dword ptr [ebx + 0x28] */
  { double v = F32((uint32_t)(ebx + 0x28u)); FPUSH(v); }
/* 8965d1: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8965d3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8965d5: fld dword ptr [ebx + 0x24] */
  { double v = F32((uint32_t)(ebx + 0x24u)); FPUSH(v); }
/* 8965d8: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 8965da: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8965dc: fadd dword ptr [ebx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x8u)));
/* 8965df: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 8965e3: fadd dword ptr [esp + 0x74] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x74u)));
/* 8965e7: fst dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0);
/* 8965ea: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 8965ed: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 8965f1: fmul dword ptr [ebx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x14u)));
/* 8965f4: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 8965f8: fmul dword ptr [ebx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x10u)));
/* 8965fb: mov ebp, dword ptr [esp + 0x3c] */
  ebp = R32((uint32_t)(esp + 0x3cu));
/* 8965ff: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 896602: mov dword ptr [esp + 0x40], esi */
  W32((uint32_t)(esp + 0x40u), esi);
/* 896606: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896608: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 89660b: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 89660f: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 896612: fmul dword ptr [ebx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0xcu)));
/* 896615: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 896618: add edi, 0x20 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 89661b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89661d: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 896621: fadd dword ptr [esp + 0xac] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xacu)));
/* 896628: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 89662a: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 89662d: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 896631: add ebp, 0x20 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 896634: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 896637: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 89663b: fmul dword ptr [ebx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x20u)));
/* 89663e: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 896642: fmul dword ptr [ebx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x1cu)));
/* 896645: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896647: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 89664b: fmul dword ptr [ebx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x18u)));
/* 89664e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896650: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 896654: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896656: fst dword ptr [esi - 8] */
  WF32((uint32_t)(esi + 0xfffffff8u), ST0);
/* 896659: fstp dword ptr [edi - 0x10] */
  WF32((uint32_t)(edi + 0xfffffff0u), ST0); FPOP();
/* 89665c: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 896660: fmul dword ptr [ebx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x2cu)));
/* 896663: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 896667: fmul dword ptr [ebx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x28u)));
/* 89666a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89666c: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 896670: fmul dword ptr [ebx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x24u)));
/* 896673: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 896677: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896679: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 89667d: fadd dword ptr [esp + 0xb4] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xb4u)));
/* 896684: fst dword ptr [esi - 4] */
  WF32((uint32_t)(esi + 0xfffffffcu), ST0);
/* 896687: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
/* 89668b: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 89668e: fstp dword ptr [edi - 0xc] */
  WF32((uint32_t)(edi + 0xfffffff4u), ST0); FPOP();
/* 896691: mov dword ptr [esp + 0x3c], esi */
  W32((uint32_t)(esp + 0x3cu), esi);
/* 896695: mov esi, dword ptr [ebx + 8] */
  esi = R32((uint32_t)(ebx + 0x8u));
/* 896698: mov dword ptr [edi - 8], esi */
  W32((uint32_t)(edi + 0xfffffff8u), esi);
/* 89669b: mov esi, dword ptr [ebx + 0xc] */
  esi = R32((uint32_t)(ebx + 0xcu));
/* 89669e: mov dword ptr [edi - 4], esi */
  W32((uint32_t)(edi + 0xfffffffcu), esi);
/* 8966a1: add ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8966a4: jmp 0x896e5b */
  goto L_896e5b;
L_8966a9: /* 8966a9: mov ebp, esi */
  ebp = esi;
/* 8966ab: and ebp, 0x70000000 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x70000000u);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 8966b1: cmp ebp, 0x10000000 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x10000000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8966b7: jbe 0x896e63 */
  if ((cf | zf)) goto L_896e63;
L_8966bd: /* 8966bd: mov ebp, esi */
  ebp = esi;
/* 8966bf: shr ebp, 0x1c */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 28;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebp = r;
  }
/* 8966c2: and ebp, 7 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 8966c5: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 8966c6: mov dword ptr [esp + 0x48], ebp */
  W32((uint32_t)(esp + 0x48u), ebp);
/* 8966ca: mov ebp, dword ptr [esp + 0x58] */
  ebp = R32((uint32_t)(esp + 0x58u));
/* 8966ce: and esi, 0xfff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 8966d4: lea esi, [ebp + esi*8] */
  esi = (uint32_t)(ebp + esi*8);
/* 8966d8: mov ebp, dword ptr [esp + 0x44] */
  ebp = R32((uint32_t)(esp + 0x44u));
/* 8966dc: and ebp, 0xfffffff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xfffffffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 8966e2: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 8966e6: mov ebp, dword ptr [eax + 0xc] */
  ebp = R32((uint32_t)(eax + 0xcu));
/* 8966e9: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8966ed: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 8966f1: and ebp, 0x3ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 8966f7: fmul dword ptr [0xa1a798] */
  ST0 = ST0 * (F32((uint32_t)(0xa1a798u)));
/* 8966fd: sub ebp, 0x1ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 896703: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 896707: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 89670b: shr ebp, 0xa */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebp = r;
  }
/* 89670e: and ebp, 0x3ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 896714: sub ebp, 0x1ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 89671a: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 89671e: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 896722: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 896726: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 89672a: shr ebp, 0x14 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 20;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebp = r;
  }
/* 89672d: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 896731: and ebp, 0x3ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 896737: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 89673b: sub ebp, 0x1ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 896741: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 896745: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 896749: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 89674d: fst dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0);
/* 896751: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 896754: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 896758: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 89675b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89675d: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 896761: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 896764: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896766: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 89676a: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 89676e: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 896771: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896773: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 896776: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 896778: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89677a: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89677d: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 89677f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896781: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 896783: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 896787: fst dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0);
/* 89678b: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 89678f: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 896792: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 896796: fmul dword ptr [esi + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x1cu)));
/* 896799: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89679b: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 89679f: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 8967a2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8967a4: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 8967a8: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 8967ac: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 8967af: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 8967b1: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 8967b4: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8967b6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8967b8: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 8967bb: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 8967bd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8967bf: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 8967c2: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 8967c6: mov ebp, dword ptr [esp + 0x48] */
  ebp = R32((uint32_t)(esp + 0x48u));
/* 8967ca: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  ebp = r;
  }
/* 8967cb: cmp ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8967ce: fstp dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 8967d2: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 8967d6: fmul dword ptr [esi + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x2cu)));
/* 8967d9: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 8967dd: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 8967e0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8967e2: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 8967e6: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 8967e9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8967eb: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 8967ef: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 8967f3: fld dword ptr [esi + 0x2c] */
  { double v = F32((uint32_t)(esi + 0x2cu)); FPUSH(v); }
/* 8967f6: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 8967f8: fld dword ptr [esi + 0x28] */
  { double v = F32((uint32_t)(esi + 0x28u)); FPUSH(v); }
/* 8967fb: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8967fd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8967ff: fld dword ptr [esi + 0x24] */
  { double v = F32((uint32_t)(esi + 0x24u)); FPUSH(v); }
/* 896802: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 896804: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896806: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 896809: mov esi, 1 */
  esi = 0x1u;
/* 89680e: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 896812: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 896816: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 89681a: jl 0x896c71 */
  if ((sf != of)) goto L_896c71;
L_896820: /* 896820: lea esi, [ebx + 0xc] */
  esi = (uint32_t)(ebx + 0xcu);
/* 896823: mov dword ptr [esp + 0x10], 4 */
  W32((uint32_t)(esp + 0x10u), 0x4u);
/* 89682b: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
L_89682f: /* 89682f: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 896833: mov esi, dword ptr [esi - 8] */
  esi = R32((uint32_t)(esi + 0xfffffff8u));
/* 896836: mov ebp, dword ptr [esp + 0x58] */
  ebp = R32((uint32_t)(esp + 0x58u));
/* 89683a: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 89683e: and esi, 0xfff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 896844: lea esi, [ebp + esi*8] */
  esi = (uint32_t)(ebp + esi*8);
/* 896848: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 89684c: and ebp, 0xfffffff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xfffffffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 896852: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 896856: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 89685a: fmul dword ptr [0xa1a798] */
  ST0 = ST0 * (F32((uint32_t)(0xa1a798u)));
/* 896860: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 896864: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 896867: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896869: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 89686c: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 89686e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896870: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 896873: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 896875: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896877: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 896879: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 89687d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89687f: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 896882: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896884: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 896887: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 896889: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89688b: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 89688d: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 896890: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896892: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 896895: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 896899: fadd dword ptr [esp + 0x50] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x50u)));
/* 89689d: fld dword ptr [esi + 0x2c] */
  { double v = F32((uint32_t)(esi + 0x2cu)); FPUSH(v); }
/* 8968a0: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 8968a2: fld dword ptr [esi + 0x28] */
  { double v = F32((uint32_t)(esi + 0x28u)); FPUSH(v); }
/* 8968a5: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8968a7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8968a9: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 8968ab: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 8968ae: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8968b0: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 8968b3: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 8968b7: fadd dword ptr [esp + 0x54] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x54u)));
/* 8968bb: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 8968bf: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 8968c3: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 8968c6: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 8968ca: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 8968cd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8968cf: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 8968d3: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 8968d6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8968d8: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 8968dc: fadd dword ptr [esp + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x30u)));
/* 8968e0: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 8968e4: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 8968e8: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 8968eb: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 8968ef: fmul dword ptr [esi + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x1cu)));
/* 8968f2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8968f4: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 8968f8: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 8968fb: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8968fd: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 896901: fadd dword ptr [esp + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x34u)));
/* 896905: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 896909: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 89690d: fmul dword ptr [esi + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x2cu)));
/* 896910: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 896914: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 896917: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896919: mov ebp, dword ptr [esp + 0x58] */
  ebp = R32((uint32_t)(esp + 0x58u));
/* 89691d: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 896921: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 896924: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 896928: mov esi, dword ptr [esi - 4] */
  esi = R32((uint32_t)(esi + 0xfffffffcu));
/* 89692b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89692d: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 896931: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 896935: and esi, 0xfff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 89693b: fadd dword ptr [esp + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x38u)));
/* 89693f: lea esi, [ebp + esi*8] */
  esi = (uint32_t)(ebp + esi*8);
/* 896943: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 896947: and ebp, 0xfffffff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xfffffffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 89694d: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 896951: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 896955: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 896959: fmul dword ptr [0xa1a798] */
  ST0 = ST0 * (F32((uint32_t)(0xa1a798u)));
/* 89695f: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 896963: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 896966: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896968: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 89696b: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 89696d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89696f: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 896972: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 896974: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896976: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 896978: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 89697c: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 89697e: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 896982: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 896985: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896987: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 89698a: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 89698c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89698e: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 896990: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 896993: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896995: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 896998: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 89699c: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 89699e: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 8969a0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8969a2: fld dword ptr [esi + 0x2c] */
  { double v = F32((uint32_t)(esi + 0x2cu)); FPUSH(v); }
/* 8969a5: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 8969a7: fld dword ptr [esi + 0x28] */
  { double v = F32((uint32_t)(esi + 0x28u)); FPUSH(v); }
/* 8969aa: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8969ac: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8969ae: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 8969b0: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 8969b3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8969b5: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 8969b8: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 8969bc: fadd dword ptr [esp + 0x54] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x54u)));
/* 8969c0: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 8969c4: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 8969c7: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 8969cb: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 8969ce: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8969d0: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 8969d4: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 8969d7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8969d9: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 8969dd: fadd dword ptr [esp + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x30u)));
/* 8969e1: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 8969e5: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 8969e9: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 8969ec: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 8969f0: fmul dword ptr [esi + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x1cu)));
/* 8969f3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8969f5: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 8969f9: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 8969fc: mov ebp, dword ptr [esp + 0x58] */
  ebp = R32((uint32_t)(esp + 0x58u));
/* 896a00: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896a02: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 896a06: fadd dword ptr [esp + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x34u)));
/* 896a0a: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 896a0e: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 896a12: fmul dword ptr [esi + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x2cu)));
/* 896a15: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 896a19: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 896a1c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896a1e: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 896a22: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 896a25: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 896a29: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 896a2b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896a2d: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 896a31: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 896a35: and esi, 0xfff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 896a3b: fadd dword ptr [esp + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x38u)));
/* 896a3f: lea esi, [ebp + esi*8] */
  esi = (uint32_t)(ebp + esi*8);
/* 896a43: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 896a47: and ebp, 0xfffffff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xfffffffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 896a4d: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 896a51: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 896a55: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 896a59: fmul dword ptr [0xa1a798] */
  ST0 = ST0 * (F32((uint32_t)(0xa1a798u)));
/* 896a5f: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 896a63: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 896a66: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896a68: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 896a6b: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 896a6d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896a6f: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 896a72: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 896a74: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896a76: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 896a78: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 896a7c: fadd dword ptr [esp + 0x4c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x4cu)));
/* 896a80: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 896a84: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 896a87: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896a89: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 896a8c: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 896a8e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896a90: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 896a92: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 896a95: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896a97: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 896a9a: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 896a9e: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 896aa0: fstp dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 896aa4: fld dword ptr [esi + 0x2c] */
  { double v = F32((uint32_t)(esi + 0x2cu)); FPUSH(v); }
/* 896aa7: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896aa9: fld dword ptr [esi + 0x28] */
  { double v = F32((uint32_t)(esi + 0x28u)); FPUSH(v); }
/* 896aac: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 896aae: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896ab0: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 896ab2: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 896ab5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896ab7: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 896aba: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 896abe: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 896ac0: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 896ac4: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 896ac6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 896ac8: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 896acc: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 896acf: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 896ad3: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 896ad6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896ad8: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 896adc: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 896adf: mov ebp, dword ptr [esp + 0x58] */
  ebp = R32((uint32_t)(esp + 0x58u));
/* 896ae3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896ae5: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 896ae9: fadd dword ptr [esp + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x30u)));
/* 896aed: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 896af1: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 896af5: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 896af8: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 896afc: fmul dword ptr [esi + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x1cu)));
/* 896aff: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896b01: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 896b05: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 896b08: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896b0a: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 896b0e: fadd dword ptr [esp + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x34u)));
/* 896b12: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 896b16: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 896b1a: fmul dword ptr [esi + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x2cu)));
/* 896b1d: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 896b21: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 896b24: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896b26: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 896b2a: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 896b2d: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 896b31: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 896b34: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896b36: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 896b3a: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 896b3e: and esi, 0xfff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 896b44: fadd dword ptr [esp + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x38u)));
/* 896b48: lea esi, [ebp + esi*8] */
  esi = (uint32_t)(ebp + esi*8);
/* 896b4c: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 896b50: and ebp, 0xfffffff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xfffffffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 896b56: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 896b5a: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 896b5e: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 896b62: fmul dword ptr [0xa1a798] */
  ST0 = ST0 * (F32((uint32_t)(0xa1a798u)));
/* 896b68: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 896b6c: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 896b6f: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896b71: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 896b74: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 896b76: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896b78: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 896b7b: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 896b7d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896b7f: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 896b81: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 896b85: fadd dword ptr [esp + 0x4c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x4cu)));
/* 896b89: fst dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0);
/* 896b8d: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 896b90: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896b92: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 896b95: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 896b97: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896b99: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 896b9b: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 896b9e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896ba0: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 896ba3: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 896ba7: fadd dword ptr [esp + 0x50] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x50u)));
/* 896bab: fstp dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 896baf: fld dword ptr [esi + 0x2c] */
  { double v = F32((uint32_t)(esi + 0x2cu)); FPUSH(v); }
/* 896bb2: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896bb4: fld dword ptr [esi + 0x28] */
  { double v = F32((uint32_t)(esi + 0x28u)); FPUSH(v); }
/* 896bb7: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 896bb9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896bbb: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 896bbd: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 896bc0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896bc2: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 896bc5: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 896bc9: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 896bcd: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 896bd0: fadd dword ptr [esp + 0x54] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x54u)));
/* 896bd4: mov dword ptr [esp + 0x1c], ebp */
  W32((uint32_t)(esp + 0x1cu), ebp);
/* 896bd8: mov ebp, dword ptr [esp + 0x48] */
  ebp = R32((uint32_t)(esp + 0x48u));
/* 896bdc: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 896be0: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 896be4: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 896be7: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 896beb: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 896bee: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896bf0: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 896bf4: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 896bf7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896bf9: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 896bfd: fadd dword ptr [esp + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x30u)));
/* 896c01: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 896c05: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 896c09: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 896c0c: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 896c10: fmul dword ptr [esi + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x1cu)));
/* 896c13: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896c15: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 896c19: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 896c1c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896c1e: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 896c22: fadd dword ptr [esp + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x34u)));
/* 896c26: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 896c2a: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 896c2e: fmul dword ptr [esi + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x2cu)));
/* 896c31: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 896c35: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 896c38: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896c3a: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 896c3e: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 896c41: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 896c45: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 896c48: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
/* 896c4c: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 896c50: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896c52: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 896c55: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 896c57: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 896c5b: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 896c5f: fadd dword ptr [esp + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x38u)));
/* 896c63: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 896c67: jl 0x89682f */
  if ((sf != of)) goto L_89682f;
L_896c6d: /* 896c6d: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
L_896c71: /* 896c71: cmp esi, dword ptr [esp + 0x48] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x48u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 896c75: jge 0x896d8c */
  if ((sf == of)) goto L_896d8c;
L_896c7b: /* 896c7b: jmp 0x896c80 */
  goto L_896c80;
L_896c80: /* 896c80: mov esi, dword ptr [ebx + esi*4] */
  esi = R32((uint32_t)(ebx + esi*4));
/* 896c83: mov ebp, dword ptr [esp + 0x58] */
  ebp = R32((uint32_t)(esp + 0x58u));
/* 896c87: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 896c8b: and esi, 0xfff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 896c91: lea esi, [ebp + esi*8] */
  esi = (uint32_t)(ebp + esi*8);
/* 896c95: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 896c99: and ebp, 0xfffffff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xfffffffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 896c9f: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 896ca3: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 896ca7: fmul dword ptr [0xa1a798] */
  ST0 = ST0 * (F32((uint32_t)(0xa1a798u)));
/* 896cad: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 896cb0: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896cb2: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 896cb5: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 896cb7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896cb9: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 896cbc: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 896cbe: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896cc0: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 896cc2: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 896cc4: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 896cc6: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 896cc9: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896ccb: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 896cce: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 896cd0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896cd2: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 896cd4: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 896cd7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896cd9: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 896cdc: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 896cde: fadd dword ptr [esp + 0x50] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x50u)));
/* 896ce2: fstp dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 896ce6: fld dword ptr [esi + 0x2c] */
  { double v = F32((uint32_t)(esi + 0x2cu)); FPUSH(v); }
/* 896ce9: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896ceb: fld dword ptr [esi + 0x28] */
  { double v = F32((uint32_t)(esi + 0x28u)); FPUSH(v); }
/* 896cee: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 896cf0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896cf2: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 896cf4: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 896cf7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896cf9: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 896cfc: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 896cfe: fadd dword ptr [esp + 0x54] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x54u)));
/* 896d02: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 896d06: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 896d0a: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 896d0d: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 896d11: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 896d14: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896d16: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 896d1a: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 896d1d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896d1f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 896d21: fadd dword ptr [esp + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x30u)));
/* 896d25: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 896d29: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 896d2d: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 896d30: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 896d34: fmul dword ptr [esi + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x1cu)));
/* 896d37: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896d39: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 896d3d: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 896d40: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896d42: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 896d44: fadd dword ptr [esp + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x34u)));
/* 896d48: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 896d4c: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 896d50: fmul dword ptr [esi + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x2cu)));
/* 896d53: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 896d57: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 896d5a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896d5c: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 896d60: mov ebp, dword ptr [esp + 0x48] */
  ebp = R32((uint32_t)(esp + 0x48u));
/* 896d64: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 896d67: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 896d6b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 896d6c: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 896d6e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896d70: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 896d74: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 896d76: fadd dword ptr [esp + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x38u)));
/* 896d7a: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 896d7e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 896d80: jl 0x896c80 */
  if ((sf != of)) goto L_896c80;
L_896d86: /* 896d86: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 896d8a: jmp 0x896d8e */
  goto L_896d8e;
L_896d8c: /* 896d8c: fstp st(0) */
  STI(0) = ST0; FPOP();
L_896d8e: /* 896d8e: mov esi, dword ptr [esp + 0x44] */
  esi = R32((uint32_t)(esp + 0x44u));
/* 896d92: mov ebp, dword ptr [esp + 0x4c] */
  ebp = R32((uint32_t)(esp + 0x4cu));
/* 896d96: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 896d99: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 896d9c: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 896d9f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  }
/* 896da1: jns 0x896e12 */
  if (!sf) goto L_896e12;
L_896da3: /* 896da3: mov esi, dword ptr [esp + 0x40] */
  esi = R32((uint32_t)(esp + 0x40u));
/* 896da7: mov dword ptr [esi], ebp */
  W32((uint32_t)(esi), ebp);
/* 896da9: mov ebp, dword ptr [esp + 0x50] */
  ebp = R32((uint32_t)(esp + 0x50u));
/* 896dad: mov dword ptr [esi + 4], ebp */
  W32((uint32_t)(esi + 0x4u), ebp);
/* 896db0: mov ebp, dword ptr [esp + 0x54] */
  ebp = R32((uint32_t)(esp + 0x54u));
/* 896db4: mov dword ptr [esi + 8], ebp */
  W32((uint32_t)(esi + 0x8u), ebp);
/* 896db7: mov ebp, dword ptr [esp + 0x4c] */
  ebp = R32((uint32_t)(esp + 0x4cu));
/* 896dbb: mov esi, edi */
  esi = edi;
/* 896dbd: mov dword ptr [esi], ebp */
  W32((uint32_t)(esi), ebp);
/* 896dbf: mov ebp, dword ptr [esp + 0x50] */
  ebp = R32((uint32_t)(esp + 0x50u));
/* 896dc3: mov dword ptr [esi + 4], ebp */
  W32((uint32_t)(esi + 0x4u), ebp);
/* 896dc6: mov ebp, dword ptr [esp + 0x54] */
  ebp = R32((uint32_t)(esp + 0x54u));
/* 896dca: mov dword ptr [esi + 8], ebp */
  W32((uint32_t)(esi + 0x8u), ebp);
/* 896dcd: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
/* 896dd1: mov ebp, dword ptr [esp + 0x30] */
  ebp = R32((uint32_t)(esp + 0x30u));
/* 896dd5: mov dword ptr [esi], ebp */
  W32((uint32_t)(esi), ebp);
/* 896dd7: mov ebp, dword ptr [esp + 0x34] */
  ebp = R32((uint32_t)(esp + 0x34u));
/* 896ddb: mov dword ptr [esi + 4], ebp */
  W32((uint32_t)(esi + 0x4u), ebp);
/* 896dde: mov ebp, dword ptr [esp + 0x38] */
  ebp = R32((uint32_t)(esp + 0x38u));
/* 896de2: mov dword ptr [esi + 8], ebp */
  W32((uint32_t)(esi + 0x8u), ebp);
/* 896de5: mov ebp, dword ptr [esp + 0x30] */
  ebp = R32((uint32_t)(esp + 0x30u));
/* 896de9: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 896ded: mov dword ptr [esi], ebp */
  W32((uint32_t)(esi), ebp);
/* 896def: mov ebp, dword ptr [esp + 0x34] */
  ebp = R32((uint32_t)(esp + 0x34u));
/* 896df3: mov dword ptr [esi + 4], ebp */
  W32((uint32_t)(esi + 0x4u), ebp);
/* 896df6: mov ebp, dword ptr [esp + 0x38] */
  ebp = R32((uint32_t)(esp + 0x38u));
/* 896dfa: mov dword ptr [esi + 8], ebp */
  W32((uint32_t)(esi + 0x8u), ebp);
/* 896dfd: mov ebp, dword ptr [esp + 0x40] */
  ebp = R32((uint32_t)(esp + 0x40u));
/* 896e01: mov esi, 0x18 */
  esi = 0x18u;
/* 896e06: add ebp, esi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 896e08: mov dword ptr [esp + 0x40], ebp */
  W32((uint32_t)(esp + 0x40u), ebp);
/* 896e0c: add dword ptr [esp + 0x3c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x3cu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x3cu), r);
  }
/* 896e10: jmp 0x896e3c */
  goto L_896e3c;
L_896e12: /* 896e12: mov esi, edi */
  esi = edi;
/* 896e14: mov dword ptr [esi], ebp */
  W32((uint32_t)(esi), ebp);
/* 896e16: mov ebp, dword ptr [esp + 0x50] */
  ebp = R32((uint32_t)(esp + 0x50u));
/* 896e1a: mov dword ptr [esi + 4], ebp */
  W32((uint32_t)(esi + 0x4u), ebp);
/* 896e1d: mov ebp, dword ptr [esp + 0x54] */
  ebp = R32((uint32_t)(esp + 0x54u));
/* 896e21: mov dword ptr [esi + 8], ebp */
  W32((uint32_t)(esi + 0x8u), ebp);
/* 896e24: mov ebp, dword ptr [esp + 0x30] */
  ebp = R32((uint32_t)(esp + 0x30u));
/* 896e28: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 896e2c: mov dword ptr [esi], ebp */
  W32((uint32_t)(esi), ebp);
/* 896e2e: mov ebp, dword ptr [esp + 0x34] */
  ebp = R32((uint32_t)(esp + 0x34u));
/* 896e32: mov dword ptr [esi + 4], ebp */
  W32((uint32_t)(esi + 0x4u), ebp);
/* 896e35: mov ebp, dword ptr [esp + 0x38] */
  ebp = R32((uint32_t)(esp + 0x38u));
/* 896e39: mov dword ptr [esi + 8], ebp */
  W32((uint32_t)(esi + 0x8u), ebp);
L_896e3c: /* 896e3c: mov esi, dword ptr [esp + 0x48] */
  esi = R32((uint32_t)(esp + 0x48u));
/* 896e40: mov ebp, dword ptr [ebx + esi*4] */
  ebp = R32((uint32_t)(ebx + esi*4));
/* 896e43: mov dword ptr [edi + 0x18], ebp */
  W32((uint32_t)(edi + 0x18u), ebp);
/* 896e46: mov ebp, dword ptr [ebx + esi*4 + 4] */
  ebp = R32((uint32_t)(ebx + esi*4 + 0x4u));
/* 896e4a: mov dword ptr [edi + 0x1c], ebp */
  W32((uint32_t)(edi + 0x1cu), ebp);
/* 896e4d: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 896e51: add edi, 0x20 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 896e54: add ebp, 0x20 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 896e57: lea ebx, [ebx + esi*4 + 8] */
  ebx = (uint32_t)(ebx + esi*4 + 0x8u);
L_896e5b: /* 896e5b: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
L_896e5f: /* 896e5f: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
L_896e63: /* 896e63: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* 896e65: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 896e68: mov ebp, dword ptr [esp + 0x68] */
  ebp = R32((uint32_t)(esp + 0x68u));
/* 896e6c: mov dword ptr [esp + 0x44], esi */
  W32((uint32_t)(esp + 0x44u), esi);
/* 896e70: jb 0x895f20 */
  if (cf) goto L_895f20;
L_896e76: /* 896e76: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 896e78: mov ecx, dword ptr [esp + 0xa8] */
  ecx = R32((uint32_t)(esp + 0xa8u));
/* 896e7f: mov edx, dword ptr [0xce83c4] */
  edx = R32((uint32_t)(0xce83c4u));
/* 896e85: lea eax, [ecx + eax - 0xc] */
  eax = (uint32_t)(ecx + eax + 0xfffffff4u);
/* 896e89: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 896e8f: add dword ptr [ecx + edx*4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + edx*4))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ecx + edx*4), r);
  }
/* 896e92: mov esi, dword ptr [esp + 0x120] */
  esi = R32((uint32_t)(esp + 0x120u));
/* 896e99: mov eax, dword ptr [esi + 0x1a0] */
  eax = R32((uint32_t)(esi + 0x1a0u));
/* 896e9f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 896ea1: je 0x897083 */
  if (zf) goto L_897083;
L_896ea7: /* 896ea7: mov eax, dword ptr [esi + 0x18c] */
  eax = R32((uint32_t)(esi + 0x18cu));
/* 896ead: cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 896eb0: je 0x897011 */
  if (zf) goto L_897011;
L_896eb6: /* 896eb6: mov edx, dword ptr [ebp + 0xa4] */
  edx = R32((uint32_t)(ebp + 0xa4u));
/* 896ebc: lea ecx, [ebp + 0xa4] */
  ecx = (uint32_t)(ebp + 0xa4u);
/* 896ec2: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x896ec4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 896ec4: mov eax, dword ptr [ebp + 0xbc] */
  eax = R32((uint32_t)(ebp + 0xbcu));
/* 896eca: lea ecx, [ebp + 0xbc] */
  ecx = (uint32_t)(ebp + 0xbcu);
/* 896ed0: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x896ed2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 896ed2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 896ed4: lea edi, [esi + 0x188] */
  edi = (uint32_t)(esi + 0x188u);
/* 896eda: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 896edc: mov ecx, edi */
  ecx = edi;
/* 896ede: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x896ee4u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 896ee4: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 896ee7: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 896ee9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 896eea: mov ecx, edi */
  ecx = edi;
/* 896eec: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x896ef2u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 896ef2: lea ecx, [esp + 0x78] */
  ecx = (uint32_t)(esp + 0x78u);
/* 896ef6: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x896efcu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 896efc: lea ecx, [esp + 0x6c] */
  ecx = (uint32_t)(esp + 0x6cu);
/* 896f00: mov byte ptr [esp + 0x114], 2 */
  W8((uint32_t)(esp + 0x114u), 0x2u);
/* 896f08: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x896f0eu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 896f0e: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 896f11: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 896f12: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 896f14: lea ecx, [esp + 0x80] */
  ecx = (uint32_t)(esp + 0x80u);
/* 896f1b: mov byte ptr [esp + 0x11c], 3 */
  W8((uint32_t)(esp + 0x11cu), 0x3u);
/* 896f23: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x896f29u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 896f29: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 896f2c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 896f2d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 896f2f: lea ecx, [esp + 0x74] */
  ecx = (uint32_t)(esp + 0x74u);
/* 896f33: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x896f39u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 896f39: mov eax, dword ptr [ebp + 0xb4] */
  eax = R32((uint32_t)(ebp + 0xb4u));
/* 896f3f: xor ecx, ecx */
  ecx = 0;
/* 896f41: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 896f43: jle 0x896f86 */
  if ((zf || sf != of)) goto L_896f86;
L_896f45: /* 896f45: jmp 0x896f50 */
  goto L_896f50;
L_896f50: /* 896f50: mov edx, dword ptr [ebp + 0xb0] */
  edx = R32((uint32_t)(ebp + 0xb0u));
/* 896f56: movzx eax, word ptr [edx + ecx*8 + 4] */
  eax = (uint32_t)(R16((uint32_t)(edx + ecx*8 + 0x4u)));
/* 896f5b: mov edx, dword ptr [esp + 0x78] */
  edx = R32((uint32_t)(esp + 0x78u));
/* 896f5f: inc dword ptr [edx + eax*4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + eax*4)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(edx + eax*4), r);
  }
/* 896f62: mov edx, dword ptr [esp + 0x6c] */
  edx = R32((uint32_t)(esp + 0x6cu));
/* 896f66: cmp dword ptr [edx + eax*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + eax*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 896f6a: jne 0x896f7b */
  if (!zf) goto L_896f7b;
L_896f6c: /* 896f6c: mov ebx, dword ptr [ebp + 0xb0] */
  ebx = R32((uint32_t)(ebp + 0xb0u));
/* 896f72: movzx ebx, word ptr [ebx + ecx*8 + 6] */
  ebx = (uint32_t)(R16((uint32_t)(ebx + ecx*8 + 0x6u)));
/* 896f77: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 896f78: mov dword ptr [edx + eax*4], ebx */
  W32((uint32_t)(edx + eax*4), ebx);
L_896f7b: /* 896f7b: mov eax, dword ptr [ebp + 0xb4] */
  eax = R32((uint32_t)(ebp + 0xb4u));
/* 896f81: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 896f82: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 896f84: jl 0x896f50 */
  if ((sf != of)) goto L_896f50;
L_896f86: /* 896f86: mov eax, dword ptr [esi + 0x18c] */
  eax = R32((uint32_t)(esi + 0x18cu));
/* 896f8c: xor ecx, ecx */
  ecx = 0;
/* 896f8e: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 896f90: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 896f94: jle 0x896fef */
  if ((zf || sf != of)) goto L_896fef;
L_896f96: /* 896f96: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
/* 896f9a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_896fa0: /* 896fa0: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 896fa4: mov eax, dword ptr [ebp + 0xc8] */
  eax = R32((uint32_t)(ebp + 0xc8u));
/* 896faa: movzx eax, word ptr [eax + edx] */
  eax = (uint32_t)(R16((uint32_t)(eax + edx)));
/* 896fae: cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 896fb1: jge 0x896fce */
  if ((sf == of)) goto L_896fce;
L_896fb3: /* 896fb3: mov ebx, dword ptr [esp + 0x78] */
  ebx = R32((uint32_t)(esp + 0x78u));
/* 896fb7: mov ebx, dword ptr [ebx + eax*4] */
  ebx = R32((uint32_t)(ebx + eax*4));
/* 896fba: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 896fbc: mov dword ptr [ecx + edx + 0xc], ebx */
  W32((uint32_t)(ecx + edx + 0xcu), ebx);
/* 896fc0: mov edx, dword ptr [esp + 0x6c] */
  edx = R32((uint32_t)(esp + 0x6cu));
/* 896fc4: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 896fc7: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 896fc9: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 896fca: mov dword ptr [ecx + edx + 0x1c], eax */
  W32((uint32_t)(ecx + edx + 0x1cu), eax);
L_896fce: /* 896fce: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 896fd2: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 896fd6: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 896fd9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 896fda: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
/* 896fde: mov edx, dword ptr [esi + 0x18c] */
  edx = R32((uint32_t)(esi + 0x18cu));
/* 896fe4: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 896fe7: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 896fe9: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 896fed: jl 0x896fa0 */
  if ((sf != of)) goto L_896fa0;
L_896fef: /* 896fef: lea ecx, [esp + 0x6c] */
  ecx = (uint32_t)(esp + 0x6cu);
/* 896ff3: mov byte ptr [esp + 0x114], 2 */
  W8((uint32_t)(esp + 0x114u), 0x2u);
/* 896ffb: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x897000u); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 897000: lea ecx, [esp + 0x78] */
  ecx = (uint32_t)(esp + 0x78u);
/* 897004: mov byte ptr [esp + 0x114], 1 */
  W8((uint32_t)(esp + 0x114u), 0x1u);
/* 89700c: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x897011u); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
L_897011: /* 897011: mov ecx, dword ptr [esp + 0x124] */
  ecx = R32((uint32_t)(esp + 0x124u));
/* 897018: xor eax, eax */
  eax = 0;
/* 89701a: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89701c: je 0x897083 */
  if (zf) goto L_897083;
L_89701e: /* 89701e: cmp dword ptr [ebp + 0x10], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 897021: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 897025: jle 0x897083 */
  if ((zf || sf != of)) goto L_897083;
L_897027: /* 897027: jmp 0x897030 */
  goto L_897030;
L_897030: /* 897030: mov edx, dword ptr [esi + 0x188] */
  edx = R32((uint32_t)(esi + 0x188u));
/* 897036: mov ecx, dword ptr [esp + 0x124] */
  ecx = R32((uint32_t)(esp + 0x124u));
/* 89703d: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89703f: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 897041: mov edi, ecx */
  edi = ecx;
/* 897043: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 897045: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 897047: mov ebx, dword ptr [edi + 4] */
  ebx = R32((uint32_t)(edi + 0x4u));
/* 89704a: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 89704d: mov edi, dword ptr [edi + 8] */
  edi = R32((uint32_t)(edi + 0x8u));
/* 897050: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* 897053: mov edx, dword ptr [esi + 0x188] */
  edx = R32((uint32_t)(esi + 0x188u));
/* 897059: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89705c: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 89705e: lea edx, [eax + edx + 0x10] */
  edx = (uint32_t)(eax + edx + 0x10u);
/* 897062: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 897064: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 897067: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 89706a: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 89706d: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 897070: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 897074: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 897077: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 897078: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 89707b: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89707d: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 897081: jl 0x897030 */
  if ((sf != of)) goto L_897030;
L_897083: /* 897083: lea ecx, [esp + 0x90] */
  ecx = (uint32_t)(esp + 0x90u);
/* 89708a: mov byte ptr [esp + 0x114], 0 */
  W8((uint32_t)(esp + 0x114u), 0x0u);
/* 897092: call 0x6c31ac */
  esp -= 4; W32(esp, 0x897097u); SPILL(); f_6c31ac(); if (g_unwind) return; RELOAD();
/* 897097: lea ecx, [esp + 0x84] */
  ecx = (uint32_t)(esp + 0x84u);
/* 89709e: mov dword ptr [esp + 0x114], 0xffffffff */
  W32((uint32_t)(esp + 0x114u), 0xffffffffu);
/* 8970a9: call 0x6c2ed2 */
  esp -= 4; W32(esp, 0x8970aeu); SPILL(); f_6c2ed2(); if (g_unwind) return; RELOAD();
/* 8970ae: mov ecx, dword ptr [esp + 0x10c] */
  ecx = R32((uint32_t)(esp + 0x10cu));
/* 8970b5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8970b6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8970b7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8970b8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8970b9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8970c0: add esp, 0x108 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x108u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8970c6: ret  */
  esp += 4; SPILL(); return;
}

void f_895bfd(void) {
  LOAD_REGS();
  goto L_895bfd;
L_895bf4: /* 895bf4: mov esi, dword ptr [esp + 0x120] */
  esi = R32((uint32_t)(esp + 0x120u));
/* 895bfb: jmp 0x895c00 */
  goto L_895c00;
L_895bfd: /* 895bfd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_895c00: /* 895c00: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 895c06: mov esi, dword ptr [esp + 0x90] */
  esi = R32((uint32_t)(esp + 0x90u));
/* 895c0d: mov eax, dword ptr [esp + 0x11c] */
  eax = R32((uint32_t)(esp + 0x11cu));
/* 895c14: mov eax, dword ptr [eax + 0x2d4] */
  eax = R32((uint32_t)(eax + 0x2d4u));
/* 895c1a: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 895c1c: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 895c1e: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 895c20: mov esi, ecx */
  esi = ecx;
/* 895c22: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 895c24: mov edi, edx */
  edi = edx;
/* 895c26: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 895c28: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* 895c2b: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 895c2e: mov esi, dword ptr [esi + 8] */
  esi = R32((uint32_t)(esi + 0x8u));
/* 895c31: mov dword ptr [edi + 8], esi */
  W32((uint32_t)(edi + 0x8u), esi);
/* 895c34: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 895c37: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 895c3a: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 895c3d: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 895c40: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 895c42: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 895c44: fmul dword ptr [ecx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xcu)));
/* 895c47: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 895c49: fadd dword ptr [edx] */
  ST0 = ST0 + (F32((uint32_t)(edx)));
/* 895c4b: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 895c4d: fld dword ptr [ecx + 0x20] */
  { double v = F32((uint32_t)(ecx + 0x20u)); FPUSH(v); }
/* 895c50: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 895c53: fld dword ptr [ecx + 0x1c] */
  { double v = F32((uint32_t)(ecx + 0x1cu)); FPUSH(v); }
/* 895c56: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 895c59: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 895c5b: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 895c5d: fmul dword ptr [ecx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x18u)));
/* 895c60: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 895c62: fadd dword ptr [edx + 4] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x4u)));
/* 895c65: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 895c68: fld dword ptr [ecx + 0x2c] */
  { double v = F32((uint32_t)(ecx + 0x2cu)); FPUSH(v); }
/* 895c6b: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 895c6e: fld dword ptr [ecx + 0x28] */
  { double v = F32((uint32_t)(ecx + 0x28u)); FPUSH(v); }
/* 895c71: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 895c74: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 895c76: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 895c78: fmul dword ptr [ecx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x24u)));
/* 895c7b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 895c7d: fadd dword ptr [edx + 8] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x8u)));
/* 895c80: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 895c83: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 895c86: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 895c88: fmul dword ptr [eax + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x2cu)));
/* 895c8b: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 895c8f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 895c91: fmul dword ptr [eax + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x28u)));
/* 895c94: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 895c98: fmul dword ptr [eax + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x24u)));
/* 895c9b: fstp dword ptr [esp + 0x78] */
  WF32((uint32_t)(esp + 0x78u), ST0); FPOP();
/* 895c9f: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 895ca2: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 895ca4: fmul dword ptr [eax + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x20u)));
/* 895ca7: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 895ca9: fmul dword ptr [eax + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x1cu)));
/* 895cac: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 895cb0: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 895cb2: fmul dword ptr [eax + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x18u)));
/* 895cb5: fstp dword ptr [esp + 0x9c] */
  WF32((uint32_t)(esp + 0x9cu), ST0); FPOP();
/* 895cbc: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 895cbf: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 895cc1: fmul dword ptr [eax + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x14u)));
/* 895cc4: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 895cc8: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 895cca: fmul dword ptr [eax + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x10u)));
/* 895ccd: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 895cd1: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 895cd4: fstp dword ptr [esp + 0xac] */
  WF32((uint32_t)(esp + 0xacu), ST0); FPOP();
/* 895cdb: fadd dword ptr [esp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x10u)));
/* 895cdf: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 895ce3: fadd dword ptr [esp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1cu)));
/* 895ce7: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 895ceb: fld dword ptr [esp + 0xac] */
  { double v = F32((uint32_t)(esp + 0xacu)); FPUSH(v); }
/* 895cf2: fadd dword ptr [esp + 0x9c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x9cu)));
/* 895cf9: fstp dword ptr [esp + 0x6c] */
  WF32((uint32_t)(esp + 0x6cu), ST0); FPOP();
/* 895cfd: lea esi, [edx + 0xc] */
  esi = (uint32_t)(edx + 0xcu);
/* 895d00: fadd dword ptr [esp + 0x40] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x40u)));
/* 895d04: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 895d08: fadd dword ptr [esp + 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x3cu)));
/* 895d0c: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 895d10: fadd dword ptr [esp + 0x78] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x78u)));
/* 895d14: fstp dword ptr [esp + 0x5c] */
  WF32((uint32_t)(esp + 0x5cu), ST0); FPOP();
/* 895d18: mov edi, dword ptr [esp + 0x5c] */
  edi = R32((uint32_t)(esp + 0x5cu));
/* 895d1c: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 895d1e: fstp dword ptr [esp + 0x60] */
  WF32((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 895d22: mov edi, dword ptr [esp + 0x60] */
  edi = R32((uint32_t)(esp + 0x60u));
/* 895d26: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 895d29: fstp dword ptr [esp + 0x64] */
  WF32((uint32_t)(esp + 0x64u), ST0); FPOP();
/* 895d2d: mov edi, dword ptr [esp + 0x64] */
  edi = R32((uint32_t)(esp + 0x64u));
/* 895d31: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* 895d34: fld dword ptr [ecx + 0x20] */
  { double v = F32((uint32_t)(ecx + 0x20u)); FPUSH(v); }
/* 895d37: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 895d39: lea esi, [edx + 0x18] */
  esi = (uint32_t)(edx + 0x18u);
/* 895d3c: fmul dword ptr [eax + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x2cu)));
/* 895d3f: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 895d43: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 895d45: fmul dword ptr [eax + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x28u)));
/* 895d48: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 895d4c: fmul dword ptr [eax + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x24u)));
/* 895d4f: fstp dword ptr [esp + 0xb8] */
  WF32((uint32_t)(esp + 0xb8u), ST0); FPOP();
/* 895d56: fld dword ptr [ecx + 0x1c] */
  { double v = F32((uint32_t)(ecx + 0x1cu)); FPUSH(v); }
/* 895d59: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 895d5b: fmul dword ptr [eax + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x20u)));
/* 895d5e: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 895d60: fmul dword ptr [eax + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x1cu)));
/* 895d63: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 895d67: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 895d69: fmul dword ptr [eax + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x18u)));
/* 895d6c: fstp dword ptr [esp + 0xdc] */
  WF32((uint32_t)(esp + 0xdcu), ST0); FPOP();
/* 895d73: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 895d76: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 895d78: fmul dword ptr [eax + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x14u)));
/* 895d7b: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 895d7f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 895d81: fmul dword ptr [eax + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x10u)));
/* 895d84: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 895d88: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 895d8b: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 895d8f: fadd dword ptr [esp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x10u)));
/* 895d93: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 895d97: fadd dword ptr [esp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1cu)));
/* 895d9b: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 895d9f: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 895da3: fadd dword ptr [esp + 0xdc] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xdcu)));
/* 895daa: fstp dword ptr [esp + 0xf4] */
  WF32((uint32_t)(esp + 0xf4u), ST0); FPOP();
/* 895db1: fadd dword ptr [esp + 0x40] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x40u)));
/* 895db5: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 895db9: fadd dword ptr [esp + 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x3cu)));
/* 895dbd: fld dword ptr [esp + 0xf4] */
  { double v = F32((uint32_t)(esp + 0xf4u)); FPUSH(v); }
/* 895dc4: fadd dword ptr [esp + 0xb8] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xb8u)));
/* 895dcb: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 895dcf: mov edi, dword ptr [esp + 0x4c] */
  edi = R32((uint32_t)(esp + 0x4cu));
/* 895dd3: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 895dd5: fstp dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 895dd9: mov edi, dword ptr [esp + 0x50] */
  edi = R32((uint32_t)(esp + 0x50u));
/* 895ddd: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 895de0: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 895de4: mov edi, dword ptr [esp + 0x54] */
  edi = R32((uint32_t)(esp + 0x54u));
/* 895de8: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* 895deb: fld dword ptr [ecx + 0x2c] */
  { double v = F32((uint32_t)(ecx + 0x2cu)); FPUSH(v); }
/* 895dee: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 895df0: fmul dword ptr [eax + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x2cu)));
/* 895df3: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 895df7: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 895df9: fmul dword ptr [eax + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x28u)));
/* 895dfc: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 895e00: fmul dword ptr [eax + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x24u)));
/* 895e03: fstp dword ptr [esp + 0x100] */
  WF32((uint32_t)(esp + 0x100u), ST0); FPOP();
/* 895e0a: fld dword ptr [ecx + 0x28] */
  { double v = F32((uint32_t)(ecx + 0x28u)); FPUSH(v); }
/* 895e0d: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 895e0f: fmul dword ptr [eax + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x20u)));
/* 895e12: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 895e14: fmul dword ptr [eax + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x1cu)));
/* 895e17: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 895e1b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 895e1d: fmul dword ptr [eax + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x18u)));
/* 895e20: add edx, 0x24 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 895e23: fstp dword ptr [esp + 0xd0] */
  WF32((uint32_t)(esp + 0xd0u), ST0); FPOP();
/* 895e2a: fld dword ptr [ecx + 0x24] */
  { double v = F32((uint32_t)(ecx + 0x24u)); FPUSH(v); }
/* 895e2d: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 895e2f: fmul dword ptr [eax + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x14u)));
/* 895e32: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 895e36: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 895e38: fmul dword ptr [eax + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x10u)));
/* 895e3b: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 895e3f: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 895e42: fstp dword ptr [esp + 0xc4] */
  WF32((uint32_t)(esp + 0xc4u), ST0); FPOP();
/* 895e49: fadd dword ptr [esp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x10u)));
/* 895e4d: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 895e51: fadd dword ptr [esp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1cu)));
/* 895e55: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 895e59: fld dword ptr [esp + 0xc4] */
  { double v = F32((uint32_t)(esp + 0xc4u)); FPUSH(v); }
/* 895e60: fadd dword ptr [esp + 0xd0] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xd0u)));
/* 895e67: fstp dword ptr [esp + 0xe8] */
  WF32((uint32_t)(esp + 0xe8u), ST0); FPOP();
/* 895e6e: fadd dword ptr [esp + 0x40] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x40u)));
/* 895e72: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 895e76: fadd dword ptr [esp + 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x3cu)));
/* 895e7a: fld dword ptr [esp + 0xe8] */
  { double v = F32((uint32_t)(esp + 0xe8u)); FPUSH(v); }
/* 895e81: fadd dword ptr [esp + 0x100] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x100u)));
/* 895e88: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 895e8c: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 895e90: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 895e92: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 895e96: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 895e9a: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 895e9d: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 895ea1: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 895ea5: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 895ea9: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 895eac: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 895eb0: mov ecx, dword ptr [esp + 0x120] */
  ecx = R32((uint32_t)(esp + 0x120u));
/* 895eb7: mov esi, dword ptr [ecx + 0xb8] */
  esi = R32((uint32_t)(ecx + 0xb8u));
/* 895ebd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 895ebe: add edx, 0x30 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 895ec1: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 895ec3: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* 895ec7: mov dword ptr [esp + 0x48], edx */
  W32((uint32_t)(esp + 0x48u), edx);
/* 895ecb: jl 0x895bf4 */
  if ((sf != of)) goto L_895bf4;
L_895ed1: /* 895ed1: mov ebx, dword ptr [ebp] */
  ebx = R32((uint32_t)(ebp));
/* 895ed4: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* 895ed6: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 895ed9: mov edx, dword ptr [esp + 0x90] */
  edx = R32((uint32_t)(esp + 0x90u));
/* 895ee0: mov ecx, dword ptr [esp + 0x84] */
  ecx = R32((uint32_t)(esp + 0x84u));
/* 895ee7: mov edi, dword ptr [esp + 0x124] */
  edi = R32((uint32_t)(esp + 0x124u));
/* 895eee: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 895ef1: mov dword ptr [esp + 0x58], edx */
  W32((uint32_t)(esp + 0x58u), edx);
/* 895ef5: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 895ef9: mov dword ptr [esp + 0x40], ecx */
  W32((uint32_t)(esp + 0x40u), ecx);
/* 895efd: mov dword ptr [esp + 0x44], esi */
  W32((uint32_t)(esp + 0x44u), esi);
/* 895f01: jae 0x896e76 */
  if (!cf) goto L_896e76;
L_895f07: /* 895f07: lea edx, [edi + 0xc] */
  edx = (uint32_t)(edi + 0xcu);
/* 895f0a: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 895f0d: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
/* 895f11: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 895f15: lea edx, [eax + 4] */
  edx = (uint32_t)(eax + 0x4u);
/* 895f18: lea ecx, [eax + 8] */
  ecx = (uint32_t)(eax + 0x8u);
/* 895f1b: jmp 0x895f20 */
  goto L_895f20;
L_895f20: /* 895f20: mov ebp, esi */
  ebp = esi;
/* 895f22: and ebp, 0xf0000000 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xf0000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  ebp = r;
  }
/* 895f28: jne 0x896022 */
  if (!zf) goto L_896022;
L_895f2e: /* 895f2e: mov ebp, dword ptr [esp + 0x58] */
  ebp = R32((uint32_t)(esp + 0x58u));
/* 895f32: and esi, 0xfff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 895f38: lea esi, [ebp + esi*8] */
  esi = (uint32_t)(ebp + esi*8);
/* 895f3c: mov ebp, dword ptr [eax + 0xc] */
  ebp = R32((uint32_t)(eax + 0xcu));
/* 895f3f: and ebp, 0x3ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 895f45: sub ebp, 0x1ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 895f4b: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 895f4f: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 895f53: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 895f56: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 895f58: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 895f5b: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 895f5d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 895f5f: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 895f61: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 895f64: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 895f66: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 895f68: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 895f6a: mov ebp, dword ptr [eax + 0xc] */
  ebp = R32((uint32_t)(eax + 0xcu));
/* 895f6d: shr ebp, 0xa */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebp = r;
  }
/* 895f70: and ebp, 0x3ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 895f76: sub ebp, 0x1ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 895f7c: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 895f80: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 895f84: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 895f87: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 895f89: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 895f8c: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 895f8e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 895f90: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 895f93: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 895f95: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 895f97: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 895f9a: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 895f9d: mov ebp, dword ptr [eax + 0xc] */
  ebp = R32((uint32_t)(eax + 0xcu));
/* 895fa0: shr ebp, 0x14 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 20;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebp = r;
  }
/* 895fa3: and ebp, 0x3ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 895fa9: sub ebp, 0x1ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 895faf: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 895fb3: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 895fb7: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 895fbb: fld dword ptr [esi + 0x2c] */
  { double v = F32((uint32_t)(esi + 0x2cu)); FPUSH(v); }
/* 895fbe: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 895fc0: fld dword ptr [esi + 0x28] */
  { double v = F32((uint32_t)(esi + 0x28u)); FPUSH(v); }
/* 895fc3: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 895fc5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 895fc7: fld dword ptr [esi + 0x24] */
  { double v = F32((uint32_t)(esi + 0x24u)); FPUSH(v); }
/* 895fca: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 895fcc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 895fce: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 895fd1: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 895fd4: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 895fd6: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 895fd9: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 895fdb: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 895fde: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 895fe0: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 895fe2: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 895fe5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 895fe7: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 895fea: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 895fec: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 895fef: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 895ff1: fmul dword ptr [esi + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x1cu)));
/* 895ff4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 895ff6: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 895ff8: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 895ffb: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 895ffd: fstp dword ptr [edi + 0x10] */
  WF32((uint32_t)(edi + 0x10u), ST0); FPOP();
/* 896000: fmul dword ptr [esi + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x2cu)));
/* 896003: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 896005: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 896008: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89600a: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 89600c: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 89600f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896011: fstp dword ptr [edi + 0x14] */
  WF32((uint32_t)(edi + 0x14u), ST0); FPOP();
/* 896014: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 896017: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89601a: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 89601d: jmp 0x8963f6 */
  goto L_8963f6;
L_896022: /* 896022: cmp esi, 0xf0000000 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xf0000000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 896028: jb 0x89607c */
  if (cf) goto L_89607c;
L_89602a: /* 89602a: mov ebx, dword ptr [esp + 0x84] */
  ebx = R32((uint32_t)(esp + 0x84u));
/* 896031: and esi, 0xfffffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 896037: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 89603b: lea esi, [ebx + esi*4] */
  esi = (uint32_t)(ebx + esi*4);
/* 89603e: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* 896040: mov ebx, edi */
  ebx = edi;
/* 896042: mov dword ptr [ebx], ebp */
  W32((uint32_t)(ebx), ebp);
/* 896044: mov ebp, dword ptr [esi + 4] */
  ebp = R32((uint32_t)(esi + 0x4u));
/* 896047: mov dword ptr [ebx + 4], ebp */
  W32((uint32_t)(ebx + 0x4u), ebp);
/* 89604a: mov esi, dword ptr [esi + 8] */
  esi = R32((uint32_t)(esi + 0x8u));
/* 89604d: mov dword ptr [ebx + 8], esi */
  W32((uint32_t)(ebx + 0x8u), esi);
/* 896050: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 896054: mov esi, dword ptr [esp + 0x84] */
  esi = R32((uint32_t)(esp + 0x84u));
/* 89605b: lea esi, [esi + ebx*4 + 0xc] */
  esi = (uint32_t)(esi + ebx*4 + 0xcu);
/* 89605f: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* 896061: mov ebx, dword ptr [esp + 0x2c] */
  ebx = R32((uint32_t)(esp + 0x2cu));
/* 896065: mov dword ptr [ebx], ebp */
  W32((uint32_t)(ebx), ebp);
/* 896067: mov ebp, dword ptr [esi + 4] */
  ebp = R32((uint32_t)(esi + 0x4u));
/* 89606a: mov dword ptr [ebx + 4], ebp */
  W32((uint32_t)(ebx + 0x4u), ebp);
/* 89606d: mov esi, dword ptr [esi + 8] */
  esi = R32((uint32_t)(esi + 0x8u));
/* 896070: mov dword ptr [ebx + 8], esi */
  W32((uint32_t)(ebx + 0x8u), esi);
/* 896073: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 896077: jmp 0x8963f2 */
  goto L_8963f2;
L_89607c: /* 89607c: test esi, 0xe0000000 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xe0000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 896082: jne 0x8962bb */
  if (!zf) goto L_8962bb;
L_896088: /* 896088: mov ebp, dword ptr [ebx + 4] */
  ebp = R32((uint32_t)(ebx + 0x4u));
/* 89608b: mov dword ptr [esp + 0x44], ebp */
  W32((uint32_t)(esp + 0x44u), ebp);
/* 89608f: mov ebp, esi */
  ebp = esi;
/* 896091: and esi, 0xfff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 896097: and ebp, 0xfffffff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xfffffffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 89609d: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 8960a1: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8960a5: mov ebp, dword ptr [esp + 0x44] */
  ebp = R32((uint32_t)(esp + 0x44u));
/* 8960a9: and ebp, 0xfffffff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xfffffffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 8960af: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 8960b3: fmul dword ptr [0xa1a798] */
  ST0 = ST0 * (F32((uint32_t)(0xa1a798u)));
/* 8960b9: mov ebp, dword ptr [esp + 0x58] */
  ebp = R32((uint32_t)(esp + 0x58u));
/* 8960bd: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8960c1: lea esi, [ebp + esi*8] */
  esi = (uint32_t)(ebp + esi*8);
/* 8960c5: mov dword ptr [esp + 0x48], esi */
  W32((uint32_t)(esp + 0x48u), esi);
/* 8960c9: mov esi, dword ptr [esp + 0x44] */
  esi = R32((uint32_t)(esp + 0x44u));
/* 8960cd: fmul dword ptr [0xa1a798] */
  ST0 = ST0 * (F32((uint32_t)(0xa1a798u)));
/* 8960d3: and esi, 0xfff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 8960d9: lea ebp, [ebp + esi*8] */
  ebp = (uint32_t)(ebp + esi*8);
/* 8960dd: mov esi, dword ptr [eax + 0xc] */
  esi = R32((uint32_t)(eax + 0xcu));
/* 8960e0: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 8960e4: and esi, 0x3ff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 8960ea: sub esi, 0x1ff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 8960f0: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 8960f4: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 8960f8: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8960fc: shr esi, 0xa */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 8960ff: and esi, 0x3ff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 896105: sub esi, 0x1ff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 89610b: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 89610f: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 896113: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 896117: shr esi, 0x14 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 20;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 89611a: and esi, 0x3ff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 896120: sub esi, 0x1ff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 896126: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 89612a: mov esi, dword ptr [esp + 0x48] */
  esi = R32((uint32_t)(esp + 0x48u));
/* 89612e: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 896132: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 896135: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896137: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 89613a: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 89613c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89613e: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 896140: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 896143: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896145: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 896147: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 896149: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 89614c: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 89614e: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 896151: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 896153: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896155: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 896158: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 89615a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89615c: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 89615f: fmul st(6) */
  ST0 = ST0 * STI(6);
/* 896161: fstp dword ptr [esp + 0xa0] */
  WF32((uint32_t)(esp + 0xa0u), ST0); FPOP();
/* 896168: fld dword ptr [esi + 0x2c] */
  { double v = F32((uint32_t)(esi + 0x2cu)); FPUSH(v); }
/* 89616b: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 89616d: fld dword ptr [esi + 0x28] */
  { double v = F32((uint32_t)(esi + 0x28u)); FPUSH(v); }
/* 896170: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 896172: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896174: fld dword ptr [esi + 0x24] */
  { double v = F32((uint32_t)(esi + 0x24u)); FPUSH(v); }
/* 896177: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 896179: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89617b: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 89617e: fmul st(6) */
  ST0 = ST0 * STI(6);
/* 896180: fstp dword ptr [esp + 0xa4] */
  WF32((uint32_t)(esp + 0xa4u), ST0); FPOP();
/* 896187: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 896189: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 89618c: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 89618e: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 896191: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896193: fld st(4) */
  { double v = STI(4); FPUSH(v); }
/* 896195: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 896198: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89619a: fmul st(6) */
  ST0 = ST0 * STI(6);
/* 89619c: fstp dword ptr [esp + 0x78] */
  WF32((uint32_t)(esp + 0x78u), ST0); FPOP();
/* 8961a0: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8961a2: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 8961a5: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 8961a7: fmul dword ptr [esi + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x1cu)));
/* 8961aa: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8961ac: fld st(4) */
  { double v = STI(4); FPUSH(v); }
/* 8961ae: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 8961b1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8961b3: fmul st(6) */
  ST0 = ST0 * STI(6);
/* 8961b5: fstp dword ptr [esp + 0x7c] */
  WF32((uint32_t)(esp + 0x7cu), ST0); FPOP();
/* 8961b9: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8961bb: fmul dword ptr [esi + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x2cu)));
/* 8961be: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 8961c0: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 8961c3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8961c5: fld st(4) */
  { double v = STI(4); FPUSH(v); }
/* 8961c7: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 8961ca: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8961cc: fmul st(6) */
  ST0 = ST0 * STI(6);
/* 8961ce: fstp dword ptr [esp + 0x80] */
  WF32((uint32_t)(esp + 0x80u), ST0); FPOP();
/* 8961d5: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 8961d8: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 8961da: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 8961dd: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8961df: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8961e1: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 8961e3: fmul dword ptr [ebp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xcu)));
/* 8961e6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8961e8: fadd dword ptr [ebp] */
  ST0 = ST0 + (F32((uint32_t)(ebp)));
/* 8961eb: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 8961ed: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 8961ef: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 8961f1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8961f3: fld dword ptr [ebp + 0x20] */
  { double v = F32((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* 8961f6: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 8961f8: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 8961fb: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8961fd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8961ff: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 896202: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 896204: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896206: fadd dword ptr [ebp + 4] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x4u)));
/* 896209: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 89620b: fadd dword ptr [esp + 0xa0] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xa0u)));
/* 896212: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 896215: fld dword ptr [ebp + 0x2c] */
  { double v = F32((uint32_t)(ebp + 0x2cu)); FPUSH(v); }
/* 896218: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 89621a: fld dword ptr [ebp + 0x28] */
  { double v = F32((uint32_t)(ebp + 0x28u)); FPUSH(v); }
/* 89621d: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 89621f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896221: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* 896224: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 896226: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896228: fadd dword ptr [ebp + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x8u)));
/* 89622b: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 89622d: fadd dword ptr [esp + 0xa4] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xa4u)));
/* 896234: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 896237: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 896239: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* 89623c: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 89623e: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* 896241: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896243: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 896245: fmul dword ptr [ebp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xcu)));
/* 896248: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89624a: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 89624e: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 896250: add esi, 0x20 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 896253: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 896256: fadd dword ptr [esp + 0x78] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x78u)));
/* 89625a: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89625d: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 896260: add edi, 0x20 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 896263: fstp dword ptr [esi - 0x20] */
  WF32((uint32_t)(esi + 0xffffffe0u), ST0); FPOP();
/* 896266: mov dword ptr [esp + 0x2c], esi */
  W32((uint32_t)(esp + 0x2cu), esi);
/* 89626a: add ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 89626d: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 89626f: fmul dword ptr [ebp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x20u)));
/* 896272: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 896274: fmul dword ptr [ebp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x1cu)));
/* 896277: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896279: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 89627b: fmul dword ptr [ebp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x18u)));
/* 89627e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896280: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 896282: fadd dword ptr [esp + 0x7c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x7cu)));
/* 896286: fstp dword ptr [edi - 0x10] */
  WF32((uint32_t)(edi + 0xfffffff0u), ST0); FPOP();
/* 896289: fmul dword ptr [ebp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x2cu)));
/* 89628c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 89628e: fmul dword ptr [ebp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x28u)));
/* 896291: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896293: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 896295: fmul dword ptr [ebp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x24u)));
/* 896298: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89629a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 89629c: fadd dword ptr [esp + 0x80] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x80u)));
/* 8962a3: fstp dword ptr [edi - 0xc] */
  WF32((uint32_t)(edi + 0xfffffff4u), ST0); FPOP();
/* 8962a6: mov ebp, dword ptr [ebx - 8] */
  ebp = R32((uint32_t)(ebx + 0xfffffff8u));
/* 8962a9: mov dword ptr [edi - 8], ebp */
  W32((uint32_t)(edi + 0xfffffff8u), ebp);
/* 8962ac: mov ebp, dword ptr [ebx - 4] */
  ebp = R32((uint32_t)(ebx + 0xfffffffcu));
/* 8962af: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8962b1: mov dword ptr [edi - 4], ebp */
  W32((uint32_t)(edi + 0xfffffffcu), ebp);
/* 8962b4: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8962b6: jmp 0x896e5f */
  goto L_896e5f;
L_8962bb: /* 8962bb: cmp ebp, 0x80000000 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8962c1: jne 0x896410 */
  if (!zf) goto L_896410;
L_8962c7: /* 8962c7: mov ebp, dword ptr [esp + 0x58] */
  ebp = R32((uint32_t)(esp + 0x58u));
/* 8962cb: and esi, 0xfff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 8962d1: lea esi, [ebp + esi*8] */
  esi = (uint32_t)(ebp + esi*8);
/* 8962d5: mov ebp, dword ptr [eax + 0xc] */
  ebp = R32((uint32_t)(eax + 0xcu));
/* 8962d8: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 8962dc: and ebp, 0x3ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 8962e2: sub ebp, 0x1ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 8962e8: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 8962ec: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 8962f0: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8962f4: shr ebp, 0xa */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebp = r;
  }
/* 8962f7: and ebp, 0x3ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 8962fd: sub ebp, 0x1ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 896303: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 896307: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 89630b: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 89630f: shr ebp, 0x14 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 20;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebp = r;
  }
/* 896312: and ebp, 0x3ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 896318: sub ebp, 0x1ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 89631e: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 896322: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 896326: mov ebp, dword ptr [esp + 0x40] */
  ebp = R32((uint32_t)(esp + 0x40u));
/* 89632a: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 89632d: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 89632f: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 896332: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 896334: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896336: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 896339: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 89633b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89633d: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 89633f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 896341: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 896344: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 896346: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 896349: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 89634b: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 89634e: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 896350: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896352: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 896354: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 896357: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896359: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 89635c: fst dword ptr [ebp + 4] */
  WF32((uint32_t)(ebp + 0x4u), ST0);
/* 89635f: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 896362: fld dword ptr [esi + 0x2c] */
  { double v = F32((uint32_t)(esi + 0x2cu)); FPUSH(v); }
/* 896365: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896367: fld dword ptr [esi + 0x28] */
  { double v = F32((uint32_t)(esi + 0x28u)); FPUSH(v); }
/* 89636a: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 89636c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89636e: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 896370: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 896373: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896375: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 896378: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 89637b: mov ebp, dword ptr [esp + 0x3c] */
  ebp = R32((uint32_t)(esp + 0x3cu));
/* 89637f: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 896382: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 896384: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 896387: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 896389: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 89638c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89638e: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 896390: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 896393: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896395: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 896397: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 89639a: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 89639e: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 8963a1: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8963a3: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 8963a6: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8963a8: fmul dword ptr [esi + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x1cu)));
/* 8963ab: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8963ad: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 8963af: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 8963b2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8963b4: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8963b6: mov ebp, dword ptr [esp + 0x40] */
  ebp = R32((uint32_t)(esp + 0x40u));
/* 8963ba: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 8963bd: add ebp, 0x18 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 8963c0: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8963c3: fstp dword ptr [edi + 0x10] */
  WF32((uint32_t)(edi + 0x10u), ST0); FPOP();
/* 8963c6: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8963c9: mov dword ptr [esp + 0x40], ebp */
  W32((uint32_t)(esp + 0x40u), ebp);
/* 8963cd: fmul dword ptr [esi + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x2cu)));
/* 8963d0: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8963d2: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 8963d5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8963d7: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8963d9: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 8963dc: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
/* 8963e0: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8963e3: mov dword ptr [esp + 0x3c], esi */
  W32((uint32_t)(esp + 0x3cu), esi);
/* 8963e7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8963e9: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8963ec: fst dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0);
/* 8963ef: fstp dword ptr [edi + 0x14] */
  WF32((uint32_t)(edi + 0x14u), ST0); FPOP();
L_8963f2: /* 8963f2: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
L_8963f6: /* 8963f6: mov esi, dword ptr [ebx + 4] */
  esi = R32((uint32_t)(ebx + 0x4u));
/* 8963f9: mov dword ptr [edi + 0x18], esi */
  W32((uint32_t)(edi + 0x18u), esi);
/* 8963fc: mov esi, dword ptr [ebx + 8] */
  esi = R32((uint32_t)(ebx + 0x8u));
/* 8963ff: mov dword ptr [edi + 0x1c], esi */
  W32((uint32_t)(edi + 0x1cu), esi);
/* 896402: add edi, 0x20 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 896405: add ebp, 0x20 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 896408: add ebx, 0xc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 89640b: jmp 0x896e5b */
  goto L_896e5b;
L_896410: /* 896410: cmp ebp, 0x90000000 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x90000000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 896416: jne 0x8966a9 */
  if (!zf) goto L_8966a9;
L_89641c: /* 89641c: mov ebx, dword ptr [ebx + 4] */
  ebx = R32((uint32_t)(ebx + 0x4u));
/* 89641f: mov ebp, dword ptr [esp + 0x58] */
  ebp = R32((uint32_t)(esp + 0x58u));
/* 896423: mov dword ptr [esp + 0x48], ebx */
  W32((uint32_t)(esp + 0x48u), ebx);
/* 896427: and esi, 0xfff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 89642d: lea esi, [ebp + esi*8] */
  esi = (uint32_t)(ebp + esi*8);
/* 896431: and ebx, 0xfff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 896437: lea ebx, [ebp + ebx*8] */
  ebx = (uint32_t)(ebp + ebx*8);
/* 89643b: mov ebp, dword ptr [esp + 0x44] */
  ebp = R32((uint32_t)(esp + 0x44u));
/* 89643f: and ebp, 0xfffffff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xfffffffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 896445: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 896449: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 89644d: mov ebp, dword ptr [esp + 0x48] */
  ebp = R32((uint32_t)(esp + 0x48u));
/* 896451: and ebp, 0xfffffff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xfffffffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 896457: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 89645b: fmul dword ptr [0xa1a798] */
  ST0 = ST0 * (F32((uint32_t)(0xa1a798u)));
/* 896461: mov ebp, dword ptr [eax + 0xc] */
  ebp = R32((uint32_t)(eax + 0xcu));
/* 896464: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 896468: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 89646c: and ebp, 0x3ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 896472: sub ebp, 0x1ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 896478: fmul dword ptr [0xa1a798] */
  ST0 = ST0 * (F32((uint32_t)(0xa1a798u)));
/* 89647e: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 896482: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 896486: shr ebp, 0xa */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebp = r;
  }
/* 896489: and ebp, 0x3ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 89648f: sub ebp, 0x1ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 896495: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 896499: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 89649d: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 8964a1: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 8964a5: shr ebp, 0x14 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 20;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebp = r;
  }
/* 8964a8: fstp dword ptr [esp + 0x5c] */
  WF32((uint32_t)(esp + 0x5cu), ST0); FPOP();
/* 8964ac: and ebp, 0x3ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 8964b2: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8964b6: sub ebp, 0x1ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 8964bc: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 8964c0: fstp dword ptr [esp + 0x60] */
  WF32((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 8964c4: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8964c8: fstp dword ptr [esp + 0x64] */
  WF32((uint32_t)(esp + 0x64u), ST0); FPOP();
/* 8964cc: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 8964cf: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 8964d1: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 8964d4: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8964d6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8964d8: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8964db: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 8964dd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8964df: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 8964e1: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8964e3: fstp dword ptr [esp + 0x6c] */
  WF32((uint32_t)(esp + 0x6cu), ST0); FPOP();
/* 8964e7: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 8964ea: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 8964ec: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 8964ef: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8964f1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8964f3: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 8964f6: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 8964f8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8964fa: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 8964fd: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8964ff: fstp dword ptr [esp + 0x70] */
  WF32((uint32_t)(esp + 0x70u), ST0); FPOP();
/* 896503: fld dword ptr [esi + 0x2c] */
  { double v = F32((uint32_t)(esi + 0x2cu)); FPUSH(v); }
/* 896506: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896508: fld dword ptr [esi + 0x28] */
  { double v = F32((uint32_t)(esi + 0x28u)); FPUSH(v); }
/* 89650b: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 89650d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89650f: fld dword ptr [esi + 0x24] */
  { double v = F32((uint32_t)(esi + 0x24u)); FPUSH(v); }
/* 896512: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 896514: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896516: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 896519: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 89651b: fstp dword ptr [esp + 0x74] */
  WF32((uint32_t)(esp + 0x74u), ST0); FPOP();
/* 89651f: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 896523: fmul dword ptr [esi + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x2cu)));
/* 896526: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 89652a: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 89652d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89652f: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 896533: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 896536: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896538: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 89653a: fstp dword ptr [esp + 0xb4] */
  WF32((uint32_t)(esp + 0xb4u), ST0); FPOP();
/* 896541: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 896545: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 896548: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 89654c: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 89654f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896551: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 896555: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 896558: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89655a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 89655c: fstp dword ptr [esp + 0xac] */
  WF32((uint32_t)(esp + 0xacu), ST0); FPOP();
/* 896563: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 896567: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 89656a: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 89656e: fmul dword ptr [esi + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x1cu)));
/* 896571: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896573: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 896577: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 89657a: mov esi, dword ptr [esp + 0x40] */
  esi = R32((uint32_t)(esp + 0x40u));
/* 89657e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896580: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 896582: fld dword ptr [ebx + 0x14] */
  { double v = F32((uint32_t)(ebx + 0x14u)); FPUSH(v); }
/* 896585: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896587: fld dword ptr [ebx + 0x10] */
  { double v = F32((uint32_t)(ebx + 0x10u)); FPUSH(v); }
/* 89658a: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 89658c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89658e: fld dword ptr [ebx + 0xc] */
  { double v = F32((uint32_t)(ebx + 0xcu)); FPUSH(v); }
/* 896591: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 896593: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896595: fadd dword ptr [ebx] */
  ST0 = ST0 + (F32((uint32_t)(ebx)));
/* 896597: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 89659b: fadd dword ptr [esp + 0x6c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x6cu)));
/* 89659f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8965a1: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 8965a3: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 8965a5: fld dword ptr [ebx + 0x20] */
  { double v = F32((uint32_t)(ebx + 0x20u)); FPUSH(v); }
/* 8965a8: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 8965aa: fld dword ptr [ebx + 0x1c] */
  { double v = F32((uint32_t)(ebx + 0x1cu)); FPUSH(v); }
/* 8965ad: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8965af: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8965b1: fld dword ptr [ebx + 0x18] */
  { double v = F32((uint32_t)(ebx + 0x18u)); FPUSH(v); }
/* 8965b4: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 8965b6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8965b8: fadd dword ptr [ebx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x4u)));
/* 8965bb: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 8965bf: fadd dword ptr [esp + 0x70] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x70u)));
/* 8965c3: fst dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0);
/* 8965c6: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 8965c9: fld dword ptr [ebx + 0x2c] */
  { double v = F32((uint32_t)(ebx + 0x2cu)); FPUSH(v); }
/* 8965cc: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 8965ce: fld dword ptr [ebx + 0x28] */
  { double v = F32((uint32_t)(ebx + 0x28u)); FPUSH(v); }
/* 8965d1: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8965d3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8965d5: fld dword ptr [ebx + 0x24] */
  { double v = F32((uint32_t)(ebx + 0x24u)); FPUSH(v); }
/* 8965d8: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 8965da: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8965dc: fadd dword ptr [ebx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x8u)));
/* 8965df: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 8965e3: fadd dword ptr [esp + 0x74] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x74u)));
/* 8965e7: fst dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0);
/* 8965ea: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 8965ed: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 8965f1: fmul dword ptr [ebx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x14u)));
/* 8965f4: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 8965f8: fmul dword ptr [ebx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x10u)));
/* 8965fb: mov ebp, dword ptr [esp + 0x3c] */
  ebp = R32((uint32_t)(esp + 0x3cu));
/* 8965ff: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 896602: mov dword ptr [esp + 0x40], esi */
  W32((uint32_t)(esp + 0x40u), esi);
/* 896606: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896608: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 89660b: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 89660f: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 896612: fmul dword ptr [ebx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0xcu)));
/* 896615: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 896618: add edi, 0x20 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 89661b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89661d: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 896621: fadd dword ptr [esp + 0xac] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xacu)));
/* 896628: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 89662a: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 89662d: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 896631: add ebp, 0x20 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 896634: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 896637: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 89663b: fmul dword ptr [ebx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x20u)));
/* 89663e: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 896642: fmul dword ptr [ebx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x1cu)));
/* 896645: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896647: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 89664b: fmul dword ptr [ebx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x18u)));
/* 89664e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896650: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 896654: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896656: fst dword ptr [esi - 8] */
  WF32((uint32_t)(esi + 0xfffffff8u), ST0);
/* 896659: fstp dword ptr [edi - 0x10] */
  WF32((uint32_t)(edi + 0xfffffff0u), ST0); FPOP();
/* 89665c: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 896660: fmul dword ptr [ebx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x2cu)));
/* 896663: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 896667: fmul dword ptr [ebx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x28u)));
/* 89666a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89666c: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 896670: fmul dword ptr [ebx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x24u)));
/* 896673: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 896677: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896679: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 89667d: fadd dword ptr [esp + 0xb4] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xb4u)));
/* 896684: fst dword ptr [esi - 4] */
  WF32((uint32_t)(esi + 0xfffffffcu), ST0);
/* 896687: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
/* 89668b: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 89668e: fstp dword ptr [edi - 0xc] */
  WF32((uint32_t)(edi + 0xfffffff4u), ST0); FPOP();
/* 896691: mov dword ptr [esp + 0x3c], esi */
  W32((uint32_t)(esp + 0x3cu), esi);
/* 896695: mov esi, dword ptr [ebx + 8] */
  esi = R32((uint32_t)(ebx + 0x8u));
/* 896698: mov dword ptr [edi - 8], esi */
  W32((uint32_t)(edi + 0xfffffff8u), esi);
/* 89669b: mov esi, dword ptr [ebx + 0xc] */
  esi = R32((uint32_t)(ebx + 0xcu));
/* 89669e: mov dword ptr [edi - 4], esi */
  W32((uint32_t)(edi + 0xfffffffcu), esi);
/* 8966a1: add ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8966a4: jmp 0x896e5b */
  goto L_896e5b;
L_8966a9: /* 8966a9: mov ebp, esi */
  ebp = esi;
/* 8966ab: and ebp, 0x70000000 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x70000000u);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 8966b1: cmp ebp, 0x10000000 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x10000000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8966b7: jbe 0x896e63 */
  if ((cf | zf)) goto L_896e63;
L_8966bd: /* 8966bd: mov ebp, esi */
  ebp = esi;
/* 8966bf: shr ebp, 0x1c */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 28;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebp = r;
  }
/* 8966c2: and ebp, 7 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 8966c5: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 8966c6: mov dword ptr [esp + 0x48], ebp */
  W32((uint32_t)(esp + 0x48u), ebp);
/* 8966ca: mov ebp, dword ptr [esp + 0x58] */
  ebp = R32((uint32_t)(esp + 0x58u));
/* 8966ce: and esi, 0xfff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 8966d4: lea esi, [ebp + esi*8] */
  esi = (uint32_t)(ebp + esi*8);
/* 8966d8: mov ebp, dword ptr [esp + 0x44] */
  ebp = R32((uint32_t)(esp + 0x44u));
/* 8966dc: and ebp, 0xfffffff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xfffffffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 8966e2: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 8966e6: mov ebp, dword ptr [eax + 0xc] */
  ebp = R32((uint32_t)(eax + 0xcu));
/* 8966e9: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8966ed: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 8966f1: and ebp, 0x3ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 8966f7: fmul dword ptr [0xa1a798] */
  ST0 = ST0 * (F32((uint32_t)(0xa1a798u)));
/* 8966fd: sub ebp, 0x1ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 896703: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 896707: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 89670b: shr ebp, 0xa */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebp = r;
  }
/* 89670e: and ebp, 0x3ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 896714: sub ebp, 0x1ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 89671a: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 89671e: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 896722: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 896726: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 89672a: shr ebp, 0x14 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 20;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebp = r;
  }
/* 89672d: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 896731: and ebp, 0x3ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 896737: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 89673b: sub ebp, 0x1ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 896741: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 896745: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 896749: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 89674d: fst dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0);
/* 896751: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 896754: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 896758: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 89675b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89675d: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 896761: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 896764: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896766: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 89676a: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 89676e: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 896771: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896773: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 896776: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 896778: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89677a: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89677d: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 89677f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896781: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 896783: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 896787: fst dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0);
/* 89678b: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 89678f: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 896792: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 896796: fmul dword ptr [esi + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x1cu)));
/* 896799: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89679b: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 89679f: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 8967a2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8967a4: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 8967a8: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 8967ac: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 8967af: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 8967b1: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 8967b4: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8967b6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8967b8: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 8967bb: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 8967bd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8967bf: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 8967c2: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 8967c6: mov ebp, dword ptr [esp + 0x48] */
  ebp = R32((uint32_t)(esp + 0x48u));
/* 8967ca: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  ebp = r;
  }
/* 8967cb: cmp ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8967ce: fstp dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 8967d2: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 8967d6: fmul dword ptr [esi + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x2cu)));
/* 8967d9: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 8967dd: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 8967e0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8967e2: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 8967e6: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 8967e9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8967eb: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 8967ef: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 8967f3: fld dword ptr [esi + 0x2c] */
  { double v = F32((uint32_t)(esi + 0x2cu)); FPUSH(v); }
/* 8967f6: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 8967f8: fld dword ptr [esi + 0x28] */
  { double v = F32((uint32_t)(esi + 0x28u)); FPUSH(v); }
/* 8967fb: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8967fd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8967ff: fld dword ptr [esi + 0x24] */
  { double v = F32((uint32_t)(esi + 0x24u)); FPUSH(v); }
/* 896802: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 896804: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896806: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 896809: mov esi, 1 */
  esi = 0x1u;
/* 89680e: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 896812: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 896816: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 89681a: jl 0x896c71 */
  if ((sf != of)) goto L_896c71;
L_896820: /* 896820: lea esi, [ebx + 0xc] */
  esi = (uint32_t)(ebx + 0xcu);
/* 896823: mov dword ptr [esp + 0x10], 4 */
  W32((uint32_t)(esp + 0x10u), 0x4u);
/* 89682b: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
L_89682f: /* 89682f: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 896833: mov esi, dword ptr [esi - 8] */
  esi = R32((uint32_t)(esi + 0xfffffff8u));
/* 896836: mov ebp, dword ptr [esp + 0x58] */
  ebp = R32((uint32_t)(esp + 0x58u));
/* 89683a: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 89683e: and esi, 0xfff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 896844: lea esi, [ebp + esi*8] */
  esi = (uint32_t)(ebp + esi*8);
/* 896848: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 89684c: and ebp, 0xfffffff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xfffffffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 896852: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 896856: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 89685a: fmul dword ptr [0xa1a798] */
  ST0 = ST0 * (F32((uint32_t)(0xa1a798u)));
/* 896860: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 896864: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 896867: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896869: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 89686c: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 89686e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896870: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 896873: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 896875: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896877: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 896879: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 89687d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89687f: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 896882: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896884: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 896887: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 896889: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89688b: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 89688d: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 896890: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896892: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 896895: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 896899: fadd dword ptr [esp + 0x50] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x50u)));
/* 89689d: fld dword ptr [esi + 0x2c] */
  { double v = F32((uint32_t)(esi + 0x2cu)); FPUSH(v); }
/* 8968a0: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 8968a2: fld dword ptr [esi + 0x28] */
  { double v = F32((uint32_t)(esi + 0x28u)); FPUSH(v); }
/* 8968a5: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8968a7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8968a9: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 8968ab: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 8968ae: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8968b0: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 8968b3: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 8968b7: fadd dword ptr [esp + 0x54] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x54u)));
/* 8968bb: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 8968bf: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 8968c3: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 8968c6: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 8968ca: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 8968cd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8968cf: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 8968d3: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 8968d6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8968d8: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 8968dc: fadd dword ptr [esp + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x30u)));
/* 8968e0: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 8968e4: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 8968e8: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 8968eb: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 8968ef: fmul dword ptr [esi + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x1cu)));
/* 8968f2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8968f4: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 8968f8: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 8968fb: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8968fd: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 896901: fadd dword ptr [esp + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x34u)));
/* 896905: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 896909: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 89690d: fmul dword ptr [esi + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x2cu)));
/* 896910: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 896914: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 896917: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896919: mov ebp, dword ptr [esp + 0x58] */
  ebp = R32((uint32_t)(esp + 0x58u));
/* 89691d: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 896921: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 896924: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 896928: mov esi, dword ptr [esi - 4] */
  esi = R32((uint32_t)(esi + 0xfffffffcu));
/* 89692b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89692d: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 896931: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 896935: and esi, 0xfff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 89693b: fadd dword ptr [esp + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x38u)));
/* 89693f: lea esi, [ebp + esi*8] */
  esi = (uint32_t)(ebp + esi*8);
/* 896943: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 896947: and ebp, 0xfffffff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xfffffffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 89694d: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 896951: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 896955: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 896959: fmul dword ptr [0xa1a798] */
  ST0 = ST0 * (F32((uint32_t)(0xa1a798u)));
/* 89695f: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 896963: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 896966: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896968: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 89696b: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 89696d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89696f: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 896972: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 896974: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896976: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 896978: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 89697c: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 89697e: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 896982: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 896985: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896987: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 89698a: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 89698c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89698e: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 896990: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 896993: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896995: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 896998: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 89699c: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 89699e: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 8969a0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8969a2: fld dword ptr [esi + 0x2c] */
  { double v = F32((uint32_t)(esi + 0x2cu)); FPUSH(v); }
/* 8969a5: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 8969a7: fld dword ptr [esi + 0x28] */
  { double v = F32((uint32_t)(esi + 0x28u)); FPUSH(v); }
/* 8969aa: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8969ac: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8969ae: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 8969b0: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 8969b3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8969b5: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 8969b8: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 8969bc: fadd dword ptr [esp + 0x54] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x54u)));
/* 8969c0: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 8969c4: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 8969c7: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 8969cb: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 8969ce: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8969d0: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 8969d4: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 8969d7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8969d9: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 8969dd: fadd dword ptr [esp + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x30u)));
/* 8969e1: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 8969e5: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 8969e9: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 8969ec: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 8969f0: fmul dword ptr [esi + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x1cu)));
/* 8969f3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8969f5: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 8969f9: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 8969fc: mov ebp, dword ptr [esp + 0x58] */
  ebp = R32((uint32_t)(esp + 0x58u));
/* 896a00: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896a02: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 896a06: fadd dword ptr [esp + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x34u)));
/* 896a0a: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 896a0e: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 896a12: fmul dword ptr [esi + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x2cu)));
/* 896a15: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 896a19: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 896a1c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896a1e: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 896a22: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 896a25: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 896a29: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 896a2b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896a2d: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 896a31: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 896a35: and esi, 0xfff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 896a3b: fadd dword ptr [esp + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x38u)));
/* 896a3f: lea esi, [ebp + esi*8] */
  esi = (uint32_t)(ebp + esi*8);
/* 896a43: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 896a47: and ebp, 0xfffffff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xfffffffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 896a4d: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 896a51: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 896a55: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 896a59: fmul dword ptr [0xa1a798] */
  ST0 = ST0 * (F32((uint32_t)(0xa1a798u)));
/* 896a5f: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 896a63: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 896a66: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896a68: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 896a6b: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 896a6d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896a6f: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 896a72: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 896a74: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896a76: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 896a78: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 896a7c: fadd dword ptr [esp + 0x4c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x4cu)));
/* 896a80: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 896a84: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 896a87: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896a89: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 896a8c: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 896a8e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896a90: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 896a92: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 896a95: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896a97: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 896a9a: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 896a9e: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 896aa0: fstp dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 896aa4: fld dword ptr [esi + 0x2c] */
  { double v = F32((uint32_t)(esi + 0x2cu)); FPUSH(v); }
/* 896aa7: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896aa9: fld dword ptr [esi + 0x28] */
  { double v = F32((uint32_t)(esi + 0x28u)); FPUSH(v); }
/* 896aac: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 896aae: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896ab0: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 896ab2: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 896ab5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896ab7: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 896aba: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 896abe: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 896ac0: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 896ac4: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 896ac6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 896ac8: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 896acc: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 896acf: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 896ad3: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 896ad6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896ad8: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 896adc: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 896adf: mov ebp, dword ptr [esp + 0x58] */
  ebp = R32((uint32_t)(esp + 0x58u));
/* 896ae3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896ae5: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 896ae9: fadd dword ptr [esp + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x30u)));
/* 896aed: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 896af1: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 896af5: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 896af8: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 896afc: fmul dword ptr [esi + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x1cu)));
/* 896aff: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896b01: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 896b05: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 896b08: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896b0a: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 896b0e: fadd dword ptr [esp + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x34u)));
/* 896b12: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 896b16: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 896b1a: fmul dword ptr [esi + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x2cu)));
/* 896b1d: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 896b21: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 896b24: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896b26: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 896b2a: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 896b2d: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 896b31: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 896b34: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896b36: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 896b3a: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 896b3e: and esi, 0xfff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 896b44: fadd dword ptr [esp + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x38u)));
/* 896b48: lea esi, [ebp + esi*8] */
  esi = (uint32_t)(ebp + esi*8);
/* 896b4c: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 896b50: and ebp, 0xfffffff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xfffffffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 896b56: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 896b5a: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 896b5e: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 896b62: fmul dword ptr [0xa1a798] */
  ST0 = ST0 * (F32((uint32_t)(0xa1a798u)));
/* 896b68: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 896b6c: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 896b6f: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896b71: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 896b74: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 896b76: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896b78: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 896b7b: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 896b7d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896b7f: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 896b81: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 896b85: fadd dword ptr [esp + 0x4c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x4cu)));
/* 896b89: fst dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0);
/* 896b8d: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 896b90: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896b92: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 896b95: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 896b97: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896b99: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 896b9b: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 896b9e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896ba0: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 896ba3: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 896ba7: fadd dword ptr [esp + 0x50] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x50u)));
/* 896bab: fstp dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 896baf: fld dword ptr [esi + 0x2c] */
  { double v = F32((uint32_t)(esi + 0x2cu)); FPUSH(v); }
/* 896bb2: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896bb4: fld dword ptr [esi + 0x28] */
  { double v = F32((uint32_t)(esi + 0x28u)); FPUSH(v); }
/* 896bb7: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 896bb9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896bbb: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 896bbd: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 896bc0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896bc2: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 896bc5: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 896bc9: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 896bcd: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 896bd0: fadd dword ptr [esp + 0x54] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x54u)));
/* 896bd4: mov dword ptr [esp + 0x1c], ebp */
  W32((uint32_t)(esp + 0x1cu), ebp);
/* 896bd8: mov ebp, dword ptr [esp + 0x48] */
  ebp = R32((uint32_t)(esp + 0x48u));
/* 896bdc: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 896be0: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 896be4: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 896be7: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 896beb: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 896bee: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896bf0: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 896bf4: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 896bf7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896bf9: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 896bfd: fadd dword ptr [esp + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x30u)));
/* 896c01: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 896c05: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 896c09: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 896c0c: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 896c10: fmul dword ptr [esi + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x1cu)));
/* 896c13: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896c15: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 896c19: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 896c1c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896c1e: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 896c22: fadd dword ptr [esp + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x34u)));
/* 896c26: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 896c2a: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 896c2e: fmul dword ptr [esi + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x2cu)));
/* 896c31: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 896c35: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 896c38: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896c3a: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 896c3e: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 896c41: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 896c45: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 896c48: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
/* 896c4c: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 896c50: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896c52: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 896c55: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 896c57: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 896c5b: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 896c5f: fadd dword ptr [esp + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x38u)));
/* 896c63: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 896c67: jl 0x89682f */
  if ((sf != of)) goto L_89682f;
L_896c6d: /* 896c6d: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
L_896c71: /* 896c71: cmp esi, dword ptr [esp + 0x48] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x48u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 896c75: jge 0x896d8c */
  if ((sf == of)) goto L_896d8c;
L_896c7b: /* 896c7b: jmp 0x896c80 */
  goto L_896c80;
L_896c80: /* 896c80: mov esi, dword ptr [ebx + esi*4] */
  esi = R32((uint32_t)(ebx + esi*4));
/* 896c83: mov ebp, dword ptr [esp + 0x58] */
  ebp = R32((uint32_t)(esp + 0x58u));
/* 896c87: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 896c8b: and esi, 0xfff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 896c91: lea esi, [ebp + esi*8] */
  esi = (uint32_t)(ebp + esi*8);
/* 896c95: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 896c99: and ebp, 0xfffffff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xfffffffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 896c9f: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 896ca3: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 896ca7: fmul dword ptr [0xa1a798] */
  ST0 = ST0 * (F32((uint32_t)(0xa1a798u)));
/* 896cad: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 896cb0: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896cb2: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 896cb5: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 896cb7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896cb9: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 896cbc: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 896cbe: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896cc0: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 896cc2: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 896cc4: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 896cc6: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 896cc9: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896ccb: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 896cce: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 896cd0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896cd2: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 896cd4: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 896cd7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896cd9: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 896cdc: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 896cde: fadd dword ptr [esp + 0x50] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x50u)));
/* 896ce2: fstp dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 896ce6: fld dword ptr [esi + 0x2c] */
  { double v = F32((uint32_t)(esi + 0x2cu)); FPUSH(v); }
/* 896ce9: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896ceb: fld dword ptr [esi + 0x28] */
  { double v = F32((uint32_t)(esi + 0x28u)); FPUSH(v); }
/* 896cee: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 896cf0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896cf2: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 896cf4: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 896cf7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896cf9: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 896cfc: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 896cfe: fadd dword ptr [esp + 0x54] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x54u)));
/* 896d02: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 896d06: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 896d0a: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 896d0d: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 896d11: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 896d14: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896d16: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 896d1a: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 896d1d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896d1f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 896d21: fadd dword ptr [esp + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x30u)));
/* 896d25: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 896d29: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 896d2d: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 896d30: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 896d34: fmul dword ptr [esi + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x1cu)));
/* 896d37: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896d39: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 896d3d: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 896d40: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896d42: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 896d44: fadd dword ptr [esp + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x34u)));
/* 896d48: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 896d4c: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 896d50: fmul dword ptr [esi + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x2cu)));
/* 896d53: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 896d57: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 896d5a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896d5c: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 896d60: mov ebp, dword ptr [esp + 0x48] */
  ebp = R32((uint32_t)(esp + 0x48u));
/* 896d64: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 896d67: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 896d6b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 896d6c: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 896d6e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896d70: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 896d74: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 896d76: fadd dword ptr [esp + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x38u)));
/* 896d7a: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 896d7e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 896d80: jl 0x896c80 */
  if ((sf != of)) goto L_896c80;
L_896d86: /* 896d86: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 896d8a: jmp 0x896d8e */
  goto L_896d8e;
L_896d8c: /* 896d8c: fstp st(0) */
  STI(0) = ST0; FPOP();
L_896d8e: /* 896d8e: mov esi, dword ptr [esp + 0x44] */
  esi = R32((uint32_t)(esp + 0x44u));
/* 896d92: mov ebp, dword ptr [esp + 0x4c] */
  ebp = R32((uint32_t)(esp + 0x4cu));
/* 896d96: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 896d99: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 896d9c: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 896d9f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  }
/* 896da1: jns 0x896e12 */
  if (!sf) goto L_896e12;
L_896da3: /* 896da3: mov esi, dword ptr [esp + 0x40] */
  esi = R32((uint32_t)(esp + 0x40u));
/* 896da7: mov dword ptr [esi], ebp */
  W32((uint32_t)(esi), ebp);
/* 896da9: mov ebp, dword ptr [esp + 0x50] */
  ebp = R32((uint32_t)(esp + 0x50u));
/* 896dad: mov dword ptr [esi + 4], ebp */
  W32((uint32_t)(esi + 0x4u), ebp);
/* 896db0: mov ebp, dword ptr [esp + 0x54] */
  ebp = R32((uint32_t)(esp + 0x54u));
/* 896db4: mov dword ptr [esi + 8], ebp */
  W32((uint32_t)(esi + 0x8u), ebp);
/* 896db7: mov ebp, dword ptr [esp + 0x4c] */
  ebp = R32((uint32_t)(esp + 0x4cu));
/* 896dbb: mov esi, edi */
  esi = edi;
/* 896dbd: mov dword ptr [esi], ebp */
  W32((uint32_t)(esi), ebp);
/* 896dbf: mov ebp, dword ptr [esp + 0x50] */
  ebp = R32((uint32_t)(esp + 0x50u));
/* 896dc3: mov dword ptr [esi + 4], ebp */
  W32((uint32_t)(esi + 0x4u), ebp);
/* 896dc6: mov ebp, dword ptr [esp + 0x54] */
  ebp = R32((uint32_t)(esp + 0x54u));
/* 896dca: mov dword ptr [esi + 8], ebp */
  W32((uint32_t)(esi + 0x8u), ebp);
/* 896dcd: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
/* 896dd1: mov ebp, dword ptr [esp + 0x30] */
  ebp = R32((uint32_t)(esp + 0x30u));
/* 896dd5: mov dword ptr [esi], ebp */
  W32((uint32_t)(esi), ebp);
/* 896dd7: mov ebp, dword ptr [esp + 0x34] */
  ebp = R32((uint32_t)(esp + 0x34u));
/* 896ddb: mov dword ptr [esi + 4], ebp */
  W32((uint32_t)(esi + 0x4u), ebp);
/* 896dde: mov ebp, dword ptr [esp + 0x38] */
  ebp = R32((uint32_t)(esp + 0x38u));
/* 896de2: mov dword ptr [esi + 8], ebp */
  W32((uint32_t)(esi + 0x8u), ebp);
/* 896de5: mov ebp, dword ptr [esp + 0x30] */
  ebp = R32((uint32_t)(esp + 0x30u));
/* 896de9: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 896ded: mov dword ptr [esi], ebp */
  W32((uint32_t)(esi), ebp);
/* 896def: mov ebp, dword ptr [esp + 0x34] */
  ebp = R32((uint32_t)(esp + 0x34u));
/* 896df3: mov dword ptr [esi + 4], ebp */
  W32((uint32_t)(esi + 0x4u), ebp);
/* 896df6: mov ebp, dword ptr [esp + 0x38] */
  ebp = R32((uint32_t)(esp + 0x38u));
/* 896dfa: mov dword ptr [esi + 8], ebp */
  W32((uint32_t)(esi + 0x8u), ebp);
/* 896dfd: mov ebp, dword ptr [esp + 0x40] */
  ebp = R32((uint32_t)(esp + 0x40u));
/* 896e01: mov esi, 0x18 */
  esi = 0x18u;
/* 896e06: add ebp, esi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 896e08: mov dword ptr [esp + 0x40], ebp */
  W32((uint32_t)(esp + 0x40u), ebp);
/* 896e0c: add dword ptr [esp + 0x3c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x3cu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x3cu), r);
  }
/* 896e10: jmp 0x896e3c */
  goto L_896e3c;
L_896e12: /* 896e12: mov esi, edi */
  esi = edi;
/* 896e14: mov dword ptr [esi], ebp */
  W32((uint32_t)(esi), ebp);
/* 896e16: mov ebp, dword ptr [esp + 0x50] */
  ebp = R32((uint32_t)(esp + 0x50u));
/* 896e1a: mov dword ptr [esi + 4], ebp */
  W32((uint32_t)(esi + 0x4u), ebp);
/* 896e1d: mov ebp, dword ptr [esp + 0x54] */
  ebp = R32((uint32_t)(esp + 0x54u));
/* 896e21: mov dword ptr [esi + 8], ebp */
  W32((uint32_t)(esi + 0x8u), ebp);
/* 896e24: mov ebp, dword ptr [esp + 0x30] */
  ebp = R32((uint32_t)(esp + 0x30u));
/* 896e28: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 896e2c: mov dword ptr [esi], ebp */
  W32((uint32_t)(esi), ebp);
/* 896e2e: mov ebp, dword ptr [esp + 0x34] */
  ebp = R32((uint32_t)(esp + 0x34u));
/* 896e32: mov dword ptr [esi + 4], ebp */
  W32((uint32_t)(esi + 0x4u), ebp);
/* 896e35: mov ebp, dword ptr [esp + 0x38] */
  ebp = R32((uint32_t)(esp + 0x38u));
/* 896e39: mov dword ptr [esi + 8], ebp */
  W32((uint32_t)(esi + 0x8u), ebp);
L_896e3c: /* 896e3c: mov esi, dword ptr [esp + 0x48] */
  esi = R32((uint32_t)(esp + 0x48u));
/* 896e40: mov ebp, dword ptr [ebx + esi*4] */
  ebp = R32((uint32_t)(ebx + esi*4));
/* 896e43: mov dword ptr [edi + 0x18], ebp */
  W32((uint32_t)(edi + 0x18u), ebp);
/* 896e46: mov ebp, dword ptr [ebx + esi*4 + 4] */
  ebp = R32((uint32_t)(ebx + esi*4 + 0x4u));
/* 896e4a: mov dword ptr [edi + 0x1c], ebp */
  W32((uint32_t)(edi + 0x1cu), ebp);
/* 896e4d: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 896e51: add edi, 0x20 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 896e54: add ebp, 0x20 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 896e57: lea ebx, [ebx + esi*4 + 8] */
  ebx = (uint32_t)(ebx + esi*4 + 0x8u);
L_896e5b: /* 896e5b: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
L_896e5f: /* 896e5f: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
L_896e63: /* 896e63: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* 896e65: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 896e68: mov ebp, dword ptr [esp + 0x68] */
  ebp = R32((uint32_t)(esp + 0x68u));
/* 896e6c: mov dword ptr [esp + 0x44], esi */
  W32((uint32_t)(esp + 0x44u), esi);
/* 896e70: jb 0x895f20 */
  if (cf) goto L_895f20;
L_896e76: /* 896e76: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 896e78: mov ecx, dword ptr [esp + 0xa8] */
  ecx = R32((uint32_t)(esp + 0xa8u));
/* 896e7f: mov edx, dword ptr [0xce83c4] */
  edx = R32((uint32_t)(0xce83c4u));
/* 896e85: lea eax, [ecx + eax - 0xc] */
  eax = (uint32_t)(ecx + eax + 0xfffffff4u);
/* 896e89: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 896e8f: add dword ptr [ecx + edx*4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + edx*4))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ecx + edx*4), r);
  }
/* 896e92: mov esi, dword ptr [esp + 0x120] */
  esi = R32((uint32_t)(esp + 0x120u));
/* 896e99: mov eax, dword ptr [esi + 0x1a0] */
  eax = R32((uint32_t)(esi + 0x1a0u));
/* 896e9f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 896ea1: je 0x897083 */
  if (zf) goto L_897083;
L_896ea7: /* 896ea7: mov eax, dword ptr [esi + 0x18c] */
  eax = R32((uint32_t)(esi + 0x18cu));
/* 896ead: cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 896eb0: je 0x897011 */
  if (zf) goto L_897011;
L_896eb6: /* 896eb6: mov edx, dword ptr [ebp + 0xa4] */
  edx = R32((uint32_t)(ebp + 0xa4u));
/* 896ebc: lea ecx, [ebp + 0xa4] */
  ecx = (uint32_t)(ebp + 0xa4u);
/* 896ec2: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x896ec4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 896ec4: mov eax, dword ptr [ebp + 0xbc] */
  eax = R32((uint32_t)(ebp + 0xbcu));
/* 896eca: lea ecx, [ebp + 0xbc] */
  ecx = (uint32_t)(ebp + 0xbcu);
/* 896ed0: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x896ed2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 896ed2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 896ed4: lea edi, [esi + 0x188] */
  edi = (uint32_t)(esi + 0x188u);
/* 896eda: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 896edc: mov ecx, edi */
  ecx = edi;
/* 896ede: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x896ee4u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 896ee4: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 896ee7: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 896ee9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 896eea: mov ecx, edi */
  ecx = edi;
/* 896eec: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x896ef2u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 896ef2: lea ecx, [esp + 0x78] */
  ecx = (uint32_t)(esp + 0x78u);
/* 896ef6: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x896efcu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 896efc: lea ecx, [esp + 0x6c] */
  ecx = (uint32_t)(esp + 0x6cu);
/* 896f00: mov byte ptr [esp + 0x114], 2 */
  W8((uint32_t)(esp + 0x114u), 0x2u);
/* 896f08: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x896f0eu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 896f0e: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 896f11: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 896f12: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 896f14: lea ecx, [esp + 0x80] */
  ecx = (uint32_t)(esp + 0x80u);
/* 896f1b: mov byte ptr [esp + 0x11c], 3 */
  W8((uint32_t)(esp + 0x11cu), 0x3u);
/* 896f23: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x896f29u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 896f29: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 896f2c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 896f2d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 896f2f: lea ecx, [esp + 0x74] */
  ecx = (uint32_t)(esp + 0x74u);
/* 896f33: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x896f39u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 896f39: mov eax, dword ptr [ebp + 0xb4] */
  eax = R32((uint32_t)(ebp + 0xb4u));
/* 896f3f: xor ecx, ecx */
  ecx = 0;
/* 896f41: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 896f43: jle 0x896f86 */
  if ((zf || sf != of)) goto L_896f86;
L_896f45: /* 896f45: jmp 0x896f50 */
  goto L_896f50;
L_896f50: /* 896f50: mov edx, dword ptr [ebp + 0xb0] */
  edx = R32((uint32_t)(ebp + 0xb0u));
/* 896f56: movzx eax, word ptr [edx + ecx*8 + 4] */
  eax = (uint32_t)(R16((uint32_t)(edx + ecx*8 + 0x4u)));
/* 896f5b: mov edx, dword ptr [esp + 0x78] */
  edx = R32((uint32_t)(esp + 0x78u));
/* 896f5f: inc dword ptr [edx + eax*4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + eax*4)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(edx + eax*4), r);
  }
/* 896f62: mov edx, dword ptr [esp + 0x6c] */
  edx = R32((uint32_t)(esp + 0x6cu));
/* 896f66: cmp dword ptr [edx + eax*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + eax*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 896f6a: jne 0x896f7b */
  if (!zf) goto L_896f7b;
L_896f6c: /* 896f6c: mov ebx, dword ptr [ebp + 0xb0] */
  ebx = R32((uint32_t)(ebp + 0xb0u));
/* 896f72: movzx ebx, word ptr [ebx + ecx*8 + 6] */
  ebx = (uint32_t)(R16((uint32_t)(ebx + ecx*8 + 0x6u)));
/* 896f77: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 896f78: mov dword ptr [edx + eax*4], ebx */
  W32((uint32_t)(edx + eax*4), ebx);
L_896f7b: /* 896f7b: mov eax, dword ptr [ebp + 0xb4] */
  eax = R32((uint32_t)(ebp + 0xb4u));
/* 896f81: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 896f82: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 896f84: jl 0x896f50 */
  if ((sf != of)) goto L_896f50;
L_896f86: /* 896f86: mov eax, dword ptr [esi + 0x18c] */
  eax = R32((uint32_t)(esi + 0x18cu));
/* 896f8c: xor ecx, ecx */
  ecx = 0;
/* 896f8e: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 896f90: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 896f94: jle 0x896fef */
  if ((zf || sf != of)) goto L_896fef;
L_896f96: /* 896f96: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
/* 896f9a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_896fa0: /* 896fa0: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 896fa4: mov eax, dword ptr [ebp + 0xc8] */
  eax = R32((uint32_t)(ebp + 0xc8u));
/* 896faa: movzx eax, word ptr [eax + edx] */
  eax = (uint32_t)(R16((uint32_t)(eax + edx)));
/* 896fae: cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 896fb1: jge 0x896fce */
  if ((sf == of)) goto L_896fce;
L_896fb3: /* 896fb3: mov ebx, dword ptr [esp + 0x78] */
  ebx = R32((uint32_t)(esp + 0x78u));
/* 896fb7: mov ebx, dword ptr [ebx + eax*4] */
  ebx = R32((uint32_t)(ebx + eax*4));
/* 896fba: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 896fbc: mov dword ptr [ecx + edx + 0xc], ebx */
  W32((uint32_t)(ecx + edx + 0xcu), ebx);
/* 896fc0: mov edx, dword ptr [esp + 0x6c] */
  edx = R32((uint32_t)(esp + 0x6cu));
/* 896fc4: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 896fc7: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 896fc9: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 896fca: mov dword ptr [ecx + edx + 0x1c], eax */
  W32((uint32_t)(ecx + edx + 0x1cu), eax);
L_896fce: /* 896fce: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 896fd2: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 896fd6: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 896fd9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 896fda: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
/* 896fde: mov edx, dword ptr [esi + 0x18c] */
  edx = R32((uint32_t)(esi + 0x18cu));
/* 896fe4: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 896fe7: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 896fe9: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 896fed: jl 0x896fa0 */
  if ((sf != of)) goto L_896fa0;
L_896fef: /* 896fef: lea ecx, [esp + 0x6c] */
  ecx = (uint32_t)(esp + 0x6cu);
/* 896ff3: mov byte ptr [esp + 0x114], 2 */
  W8((uint32_t)(esp + 0x114u), 0x2u);
/* 896ffb: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x897000u); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 897000: lea ecx, [esp + 0x78] */
  ecx = (uint32_t)(esp + 0x78u);
/* 897004: mov byte ptr [esp + 0x114], 1 */
  W8((uint32_t)(esp + 0x114u), 0x1u);
/* 89700c: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x897011u); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
L_897011: /* 897011: mov ecx, dword ptr [esp + 0x124] */
  ecx = R32((uint32_t)(esp + 0x124u));
/* 897018: xor eax, eax */
  eax = 0;
/* 89701a: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89701c: je 0x897083 */
  if (zf) goto L_897083;
L_89701e: /* 89701e: cmp dword ptr [ebp + 0x10], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 897021: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 897025: jle 0x897083 */
  if ((zf || sf != of)) goto L_897083;
L_897027: /* 897027: jmp 0x897030 */
  goto L_897030;
L_897030: /* 897030: mov edx, dword ptr [esi + 0x188] */
  edx = R32((uint32_t)(esi + 0x188u));
/* 897036: mov ecx, dword ptr [esp + 0x124] */
  ecx = R32((uint32_t)(esp + 0x124u));
/* 89703d: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89703f: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 897041: mov edi, ecx */
  edi = ecx;
/* 897043: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 897045: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 897047: mov ebx, dword ptr [edi + 4] */
  ebx = R32((uint32_t)(edi + 0x4u));
/* 89704a: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 89704d: mov edi, dword ptr [edi + 8] */
  edi = R32((uint32_t)(edi + 0x8u));
/* 897050: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* 897053: mov edx, dword ptr [esi + 0x188] */
  edx = R32((uint32_t)(esi + 0x188u));
/* 897059: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89705c: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 89705e: lea edx, [eax + edx + 0x10] */
  edx = (uint32_t)(eax + edx + 0x10u);
/* 897062: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 897064: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 897067: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 89706a: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 89706d: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 897070: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 897074: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 897077: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 897078: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 89707b: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89707d: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 897081: jl 0x897030 */
  if ((sf != of)) goto L_897030;
L_897083: /* 897083: lea ecx, [esp + 0x90] */
  ecx = (uint32_t)(esp + 0x90u);
/* 89708a: mov byte ptr [esp + 0x114], 0 */
  W8((uint32_t)(esp + 0x114u), 0x0u);
/* 897092: call 0x6c31ac */
  esp -= 4; W32(esp, 0x897097u); SPILL(); f_6c31ac(); if (g_unwind) return; RELOAD();
/* 897097: lea ecx, [esp + 0x84] */
  ecx = (uint32_t)(esp + 0x84u);
/* 89709e: mov dword ptr [esp + 0x114], 0xffffffff */
  W32((uint32_t)(esp + 0x114u), 0xffffffffu);
/* 8970a9: call 0x6c2ed2 */
  esp -= 4; W32(esp, 0x8970aeu); SPILL(); f_6c2ed2(); if (g_unwind) return; RELOAD();
/* 8970ae: mov ecx, dword ptr [esp + 0x10c] */
  ecx = R32((uint32_t)(esp + 0x10cu));
/* 8970b5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8970b6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8970b7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8970b8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8970b9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8970c0: add esp, 0x108 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x108u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8970c6: ret  */
  esp += 4; SPILL(); return;
}
