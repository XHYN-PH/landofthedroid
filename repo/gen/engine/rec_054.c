#include "recomp.h"
#include "rec_mod.h"

void f_7eda50(void) {
  LOAD_REGS();
L_7eda50: /* 7eda50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7eda51: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7eda52: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 7eda56: mov esi, ecx */
  esi = ecx;
/* 7eda58: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 7eda5a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eda5c: je 0x7eda66 */
  if (zf) goto L_7eda66;
L_7eda5e: /* 7eda5e: call dword ptr [0xcfa2b4] */
  esp -= 4; W32(esp, 0x7eda64u); SPILL(); f_4e39ae(); if (g_unwind) return; /* Core!?GetIndex@UObject@@QBEKXZ */ RELOAD();
/* 7eda64: jmp 0x7eda68 */
  goto L_7eda68;
L_7eda66: /* 7eda66: xor eax, eax */
  eax = 0;
L_7eda68: /* 7eda68: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 7eda6b: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 7eda6e: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 7eda6f: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7eda71: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 7eda74: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7eda77: je 0x7eda95 */
  if (zf) goto L_7eda95;
L_7eda79: /* 7eda79: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7eda7b: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 7eda7d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7eda80: /* 7eda80: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 7eda83: mov edi, dword ptr [esi + ecx*4 + 4] */
  edi = R32((uint32_t)(esi + ecx*4 + 0x4u));
/* 7eda87: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7eda89: lea ecx, [esi + ecx*4] */
  ecx = (uint32_t)(esi + ecx*4);
/* 7eda8c: je 0x7eda9c */
  if (zf) goto L_7eda9c;
L_7eda8e: /* 7eda8e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7eda90: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7eda93: jne 0x7eda80 */
  if (!zf) goto L_7eda80;
L_7eda95: /* 7eda95: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7eda96: xor eax, eax */
  eax = 0;
/* 7eda98: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7eda99: ret 4 */
  esp += 8; SPILL(); return;
L_7eda9c: /* 7eda9c: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 7eda9f: mov eax, dword ptr [esi + edx*4 + 8] */
  eax = R32((uint32_t)(esi + edx*4 + 0x8u));
/* 7edaa3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7edaa4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7edaa5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7edad0(void) {
  LOAD_REGS();
L_7edad0: /* 7edad0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7edad1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 7edad5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7edad7: je 0x7edaee */
  if (zf) goto L_7edaee;
L_7edad9: /* 7edad9: push 0xb81b88 */
  { uint32_t v = 0xb81b88u; esp -= 4; W32(esp, v); }
/* 7edade: mov ecx, esi */
  ecx = esi;
/* 7edae0: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7edae6u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7edae6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7edae8: je 0x7edaee */
  if (zf) goto L_7edaee;
L_7edaea: /* 7edaea: mov eax, esi */
  eax = esi;
/* 7edaec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7edaed: ret  */
  esp += 4; SPILL(); return;
L_7edaee: /* 7edaee: xor eax, eax */
  eax = 0;
/* 7edaf0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7edaf1: ret  */
  esp += 4; SPILL(); return;
}

void f_7edb10(void) {
  LOAD_REGS();
L_7edb10: /* 7edb10: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7edb14: sub esp, 0x104 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x104u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7edb1a: cmp ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7edb1d: jl 0x7edc6e */
  if ((sf != of)) goto L_7edc6e;
L_7edb23: /* 7edb23: mov eax, dword ptr [esp + 0x108] */
  eax = R32((uint32_t)(esp + 0x108u));
/* 7edb2a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7edb2b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7edb2c: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 7edb30: lea eax, [eax + ecx*4 - 4] */
  eax = (uint32_t)(eax + ecx*4 + 0xfffffffcu);
/* 7edb34: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7edb35: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7edb36: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 7edb3a: mov ecx, 0x3e */
  ecx = 0x3eu;
/* 7edb3f: xor eax, eax */
  eax = 0;
/* 7edb41: lea edi, [esp + 0x1c] */
  edi = (uint32_t)(esp + 0x1cu);
/* 7edb45: lea ebx, [esp + 0x14] */
  ebx = (uint32_t)(esp + 0x14u);
/* 7edb49: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 7edb4b: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 7edb4f: nop  */
L_7edb50: /* 7edb50: mov esi, dword ptr [ebx + 4] */
  esi = R32((uint32_t)(ebx + 0x4u));
/* 7edb53: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 7edb55: mov eax, esi */
  eax = esi;
/* 7edb57: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7edb59: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 7edb5c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7edb5d: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7edb60: jle 0x7edc14 */
  if ((zf || sf != of)) goto L_7edc14;
L_7edb66: /* 7edb66: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 7edb68: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 7edb69: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7edb6b: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 7edb6d: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 7edb70: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 7edb73: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 7edb75: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7edb77: mov edx, ecx */
  edx = ecx;
/* 7edb79: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 7edb7c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7edb80: /* 7edb80: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7edb83: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 7edb85: ja 0x7edb94 */
  if ((!cf && !zf)) goto L_7edb94;
L_7edb87: /* 7edb87: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 7edb89: mov ebp, dword ptr [edx] */
  ebp = R32((uint32_t)(edx));
/* 7edb8b: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* 7edb8d: sub edi, dword ptr [ebp] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp)));
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 7edb90: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7edb92: jle 0x7edb80 */
  if ((zf || sf != of)) goto L_7edb80;
L_7edb94: /* 7edb94: sub eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7edb97: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 7edb99: jbe 0x7edba6 */
  if ((cf | zf)) goto L_7edba6;
L_7edb9b: /* 7edb9b: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 7edb9d: mov ebp, dword ptr [eax] */
  ebp = R32((uint32_t)(eax));
/* 7edb9f: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* 7edba1: sub edi, dword ptr [ebp] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  edi = r;
  }
/* 7edba4: jns 0x7edb94 */
  if (!sf) goto L_7edb94;
L_7edba6: /* 7edba6: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 7edba8: mov ebp, dword ptr [eax] */
  ebp = R32((uint32_t)(eax));
/* 7edbaa: ja 0x7edbb4 */
  if ((!cf && !zf)) goto L_7edbb4;
L_7edbac: /* 7edbac: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 7edbae: mov dword ptr [edx], ebp */
  W32((uint32_t)(edx), ebp);
/* 7edbb0: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 7edbb2: jmp 0x7edb80 */
  goto L_7edb80;
L_7edbb4: /* 7edbb4: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 7edbb6: mov dword ptr [ecx], ebp */
  W32((uint32_t)(ecx), ebp);
/* 7edbb8: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 7edbba: mov edi, eax */
  edi = eax;
/* 7edbbc: sub edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 7edbbe: mov ebp, esi */
  ebp = esi;
/* 7edbc0: sub edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 7edbc3: sub ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 7edbc5: and edi, 0xfffffffc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 7edbc8: and ebp, 0xfffffffc */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 7edbcb: cmp edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7edbcd: jl 0x7edbe9 */
  if ((sf != of)) goto L_7edbe9;
L_7edbcf: /* 7edbcf: lea edi, [ecx + 4] */
  edi = (uint32_t)(ecx + 0x4u);
/* 7edbd2: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 7edbd4: jae 0x7edbe1 */
  if (!cf) goto L_7edbe1;
L_7edbd6: /* 7edbd6: add eax, -4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7edbd9: mov dword ptr [ebx], ecx */
  W32((uint32_t)(ebx), ecx);
/* 7edbdb: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 7edbde: add ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_7edbe1: /* 7edbe1: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 7edbe3: jbe 0x7edc53 */
  if ((cf | zf)) goto L_7edc53;
L_7edbe5: /* 7edbe5: mov ecx, edx */
  ecx = edx;
/* 7edbe7: jmp 0x7edbff */
  goto L_7edbff;
L_7edbe9: /* 7edbe9: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 7edbeb: jbe 0x7edbf5 */
  if ((cf | zf)) goto L_7edbf5;
L_7edbed: /* 7edbed: mov dword ptr [ebx], edx */
  W32((uint32_t)(ebx), edx);
/* 7edbef: mov dword ptr [ebx + 4], esi */
  W32((uint32_t)(ebx + 0x4u), esi);
/* 7edbf2: add ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_7edbf5: /* 7edbf5: lea edx, [ecx + 4] */
  edx = (uint32_t)(ecx + 0x4u);
/* 7edbf8: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 7edbfa: jae 0x7edc53 */
  if (!cf) goto L_7edc53;
L_7edbfc: /* 7edbfc: lea esi, [eax - 4] */
  esi = (uint32_t)(eax + 0xfffffffcu);
L_7edbff: /* 7edbff: mov eax, esi */
  eax = esi;
/* 7edc01: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7edc03: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 7edc06: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7edc07: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7edc0a: jg 0x7edb66 */
  if ((!zf && sf == of)) goto L_7edb66;
L_7edc10: /* 7edc10: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
L_7edc14: /* 7edc14: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 7edc16: jbe 0x7edc57 */
  if ((cf | zf)) goto L_7edc57;
L_7edc18: /* 7edc18: lea edi, [ecx + 4] */
  edi = (uint32_t)(ecx + 0x4u);
/* 7edc1b: jmp 0x7edc20 */
  goto L_7edc20;
L_7edc20: /* 7edc20: mov eax, edi */
  eax = edi;
/* 7edc22: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 7edc24: mov edx, ecx */
  edx = ecx;
/* 7edc26: ja 0x7edc42 */
  if ((!cf && !zf)) goto L_7edc42;
L_7edc28: /* 7edc28: mov ebp, dword ptr [edx] */
  ebp = R32((uint32_t)(edx));
/* 7edc2a: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 7edc2c: mov ebp, dword ptr [ebp] */
  ebp = R32((uint32_t)(ebp));
/* 7edc2f: sub ebp, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 7edc31: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7edc33: jle 0x7edc37 */
  if ((zf || sf != of)) goto L_7edc37;
L_7edc35: /* 7edc35: mov edx, eax */
  edx = eax;
L_7edc37: /* 7edc37: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7edc3a: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 7edc3c: jbe 0x7edc28 */
  if ((cf | zf)) goto L_7edc28;
L_7edc3e: /* 7edc3e: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
L_7edc42: /* 7edc42: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* 7edc44: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7edc46: mov dword ptr [edx], ebp */
  W32((uint32_t)(edx), ebp);
/* 7edc48: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 7edc4a: sub esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 7edc4d: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 7edc4f: ja 0x7edc20 */
  if ((!cf && !zf)) goto L_7edc20;
L_7edc51: /* 7edc51: jmp 0x7edc57 */
  goto L_7edc57;
L_7edc53: /* 7edc53: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
L_7edc57: /* 7edc57: sub ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 7edc5a: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 7edc5e: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 7edc60: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 7edc64: jae 0x7edb50 */
  if (!cf) goto L_7edb50;
L_7edc6a: /* 7edc6a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7edc6b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7edc6c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7edc6d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_7edc6e: /* 7edc6e: add esp, 0x104 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x104u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7edc74: ret  */
  esp += 4; SPILL(); return;
}

void f_7edc1d(void) {
  LOAD_REGS();
  goto L_7edc1d;
L_7edb50: /* 7edb50: mov esi, dword ptr [ebx + 4] */
  esi = R32((uint32_t)(ebx + 0x4u));
/* 7edb53: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 7edb55: mov eax, esi */
  eax = esi;
/* 7edb57: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7edb59: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 7edb5c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7edb5d: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7edb60: jle 0x7edc14 */
  if ((zf || sf != of)) goto L_7edc14;
L_7edb66: /* 7edb66: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 7edb68: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 7edb69: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7edb6b: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 7edb6d: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 7edb70: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 7edb73: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 7edb75: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7edb77: mov edx, ecx */
  edx = ecx;
/* 7edb79: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 7edb7c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7edb80: /* 7edb80: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7edb83: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 7edb85: ja 0x7edb94 */
  if ((!cf && !zf)) goto L_7edb94;
L_7edb87: /* 7edb87: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 7edb89: mov ebp, dword ptr [edx] */
  ebp = R32((uint32_t)(edx));
/* 7edb8b: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* 7edb8d: sub edi, dword ptr [ebp] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp)));
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 7edb90: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7edb92: jle 0x7edb80 */
  if ((zf || sf != of)) goto L_7edb80;
L_7edb94: /* 7edb94: sub eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7edb97: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 7edb99: jbe 0x7edba6 */
  if ((cf | zf)) goto L_7edba6;
L_7edb9b: /* 7edb9b: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 7edb9d: mov ebp, dword ptr [eax] */
  ebp = R32((uint32_t)(eax));
/* 7edb9f: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* 7edba1: sub edi, dword ptr [ebp] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  edi = r;
  }
/* 7edba4: jns 0x7edb94 */
  if (!sf) goto L_7edb94;
L_7edba6: /* 7edba6: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 7edba8: mov ebp, dword ptr [eax] */
  ebp = R32((uint32_t)(eax));
/* 7edbaa: ja 0x7edbb4 */
  if ((!cf && !zf)) goto L_7edbb4;
L_7edbac: /* 7edbac: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 7edbae: mov dword ptr [edx], ebp */
  W32((uint32_t)(edx), ebp);
/* 7edbb0: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 7edbb2: jmp 0x7edb80 */
  goto L_7edb80;
L_7edbb4: /* 7edbb4: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 7edbb6: mov dword ptr [ecx], ebp */
  W32((uint32_t)(ecx), ebp);
/* 7edbb8: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 7edbba: mov edi, eax */
  edi = eax;
/* 7edbbc: sub edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 7edbbe: mov ebp, esi */
  ebp = esi;
/* 7edbc0: sub edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 7edbc3: sub ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 7edbc5: and edi, 0xfffffffc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 7edbc8: and ebp, 0xfffffffc */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 7edbcb: cmp edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7edbcd: jl 0x7edbe9 */
  if ((sf != of)) goto L_7edbe9;
L_7edbcf: /* 7edbcf: lea edi, [ecx + 4] */
  edi = (uint32_t)(ecx + 0x4u);
/* 7edbd2: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 7edbd4: jae 0x7edbe1 */
  if (!cf) goto L_7edbe1;
L_7edbd6: /* 7edbd6: add eax, -4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7edbd9: mov dword ptr [ebx], ecx */
  W32((uint32_t)(ebx), ecx);
/* 7edbdb: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 7edbde: add ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_7edbe1: /* 7edbe1: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 7edbe3: jbe 0x7edc53 */
  if ((cf | zf)) goto L_7edc53;
L_7edbe5: /* 7edbe5: mov ecx, edx */
  ecx = edx;
/* 7edbe7: jmp 0x7edbff */
  goto L_7edbff;
L_7edbe9: /* 7edbe9: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 7edbeb: jbe 0x7edbf5 */
  if ((cf | zf)) goto L_7edbf5;
L_7edbed: /* 7edbed: mov dword ptr [ebx], edx */
  W32((uint32_t)(ebx), edx);
/* 7edbef: mov dword ptr [ebx + 4], esi */
  W32((uint32_t)(ebx + 0x4u), esi);
/* 7edbf2: add ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_7edbf5: /* 7edbf5: lea edx, [ecx + 4] */
  edx = (uint32_t)(ecx + 0x4u);
/* 7edbf8: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 7edbfa: jae 0x7edc53 */
  if (!cf) goto L_7edc53;
L_7edbfc: /* 7edbfc: lea esi, [eax - 4] */
  esi = (uint32_t)(eax + 0xfffffffcu);
L_7edbff: /* 7edbff: mov eax, esi */
  eax = esi;
/* 7edc01: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7edc03: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 7edc06: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7edc07: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7edc0a: jg 0x7edb66 */
  if ((!zf && sf == of)) goto L_7edb66;
L_7edc10: /* 7edc10: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
L_7edc14: /* 7edc14: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 7edc16: jbe 0x7edc57 */
  if ((cf | zf)) goto L_7edc57;
L_7edc18: /* 7edc18: lea edi, [ecx + 4] */
  edi = (uint32_t)(ecx + 0x4u);
/* 7edc1b: jmp 0x7edc20 */
  goto L_7edc20;
L_7edc1d: /* 7edc1d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7edc20: /* 7edc20: mov eax, edi */
  eax = edi;
/* 7edc22: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 7edc24: mov edx, ecx */
  edx = ecx;
/* 7edc26: ja 0x7edc42 */
  if ((!cf && !zf)) goto L_7edc42;
L_7edc28: /* 7edc28: mov ebp, dword ptr [edx] */
  ebp = R32((uint32_t)(edx));
/* 7edc2a: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 7edc2c: mov ebp, dword ptr [ebp] */
  ebp = R32((uint32_t)(ebp));
/* 7edc2f: sub ebp, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 7edc31: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7edc33: jle 0x7edc37 */
  if ((zf || sf != of)) goto L_7edc37;
L_7edc35: /* 7edc35: mov edx, eax */
  edx = eax;
L_7edc37: /* 7edc37: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7edc3a: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 7edc3c: jbe 0x7edc28 */
  if ((cf | zf)) goto L_7edc28;
L_7edc3e: /* 7edc3e: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
L_7edc42: /* 7edc42: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* 7edc44: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7edc46: mov dword ptr [edx], ebp */
  W32((uint32_t)(edx), ebp);
/* 7edc48: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 7edc4a: sub esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 7edc4d: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 7edc4f: ja 0x7edc20 */
  if ((!cf && !zf)) goto L_7edc20;
L_7edc51: /* 7edc51: jmp 0x7edc57 */
  goto L_7edc57;
L_7edc53: /* 7edc53: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
L_7edc57: /* 7edc57: sub ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 7edc5a: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 7edc5e: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 7edc60: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 7edc64: jae 0x7edb50 */
  if (!cf) goto L_7edb50;
L_7edc6a: /* 7edc6a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7edc6b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7edc6c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7edc6d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7edc6e: add esp, 0x104 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x104u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7edc74: ret  */
  esp += 4; SPILL(); return;
}

void f_7edce0(void) {
  LOAD_REGS();
L_7edce0: /* 7edce0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7edce1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7edce2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7edce3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7edce4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7edce5: mov edi, ecx */
  edi = ecx;
/* 7edce7: mov eax, dword ptr [edi + 0x334] */
  eax = R32((uint32_t)(edi + 0x334u));
/* 7edced: xor ebx, ebx */
  ebx = 0;
/* 7edcef: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7edcf1: jle 0x7edda7 */
  if ((zf || sf != of)) goto L_7edda7;
L_7edcf7: /* 7edcf7: xor ebp, ebp */
  ebp = 0;
/* 7edcf9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7edd00: /* 7edd00: mov eax, dword ptr [edi + 0x330] */
  eax = R32((uint32_t)(edi + 0x330u));
/* 7edd06: fld dword ptr [eax + ebp + 4] */
  { double v = F32((uint32_t)(eax + ebp + 0x4u)); FPUSH(v); }
/* 7edd0a: lea ecx, [eax + ebp] */
  ecx = (uint32_t)(eax + ebp);
/* 7edd0d: fcomp qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
  FPOP();
/* 7edd13: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7edd15: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7edd18: jnp 0x7edd95 */
  if (!pf) goto L_7edd95;
L_7edd1a: /* 7edd1a: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 7edd1e: fadd dword ptr [ecx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x8u)));
/* 7edd21: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 7edd24: mov ecx, dword ptr [edi + 0x330] */
  ecx = R32((uint32_t)(edi + 0x330u));
/* 7edd2a: fld dword ptr [ecx + ebp + 8] */
  { double v = F32((uint32_t)(ecx + ebp + 0x8u)); FPUSH(v); }
/* 7edd2e: lea esi, [ecx + ebp] */
  esi = (uint32_t)(ecx + ebp);
/* 7edd31: fcomp dword ptr [esi + 4] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x4u)));
  FPOP();
/* 7edd34: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7edd36: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7edd39: jne 0x7edd95 */
  if (!zf) goto L_7edd95;
L_7edd3b: /* 7edd3b: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7edd3e: fdiv dword ptr [esi + 4] */
  ST0 = ST0 / (F32((uint32_t)(esi + 0x4u)));
/* 7edd41: call 0x99c958 */
  esp -= 4; W32(esp, 0x7edd46u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7edd46: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 7edd4a: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 7edd4e: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 7edd51: fsubr dword ptr [esi + 8] */
  ST0 = (F32((uint32_t)(esi + 0x8u))) - ST0;
/* 7edd54: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 7edd57: mov edx, dword ptr [edi + 0x330] */
  edx = R32((uint32_t)(edi + 0x330u));
/* 7edd5d: mov ecx, dword ptr [edx + ebp] */
  ecx = R32((uint32_t)(edx + ebp));
/* 7edd60: lea eax, [edx + ebp] */
  eax = (uint32_t)(edx + ebp);
/* 7edd63: mov dl, byte ptr [eax + 0xc] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0xcu))) & 0xffu);
/* 7edd66: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7edd68: jne 0x7edd71 */
  if (!zf) goto L_7edd71;
L_7edd6a: /* 7edd6a: mov dword ptr [eax + 4], 0 */
  W32((uint32_t)(eax + 0x4u), 0x0u);
L_7edd71: /* 7edd71: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 7edd73: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7edd75: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 7edd79: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7edd7a: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 7edd7e: mov ecx, dword ptr [0xb7e54c] */
  ecx = R32((uint32_t)(0xb7e54cu));
/* 7edd84: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7edd86: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7edd87: mov ecx, edi */
  ecx = edi;
/* 7edd89: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7edd8fu); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7edd8f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7edd90: mov ecx, edi */
  ecx = edi;
/* 7edd92: call dword ptr [esi + 0x10] */
  { uint32_t t = R32((uint32_t)(esi + 0x10u)); esp -= 4; W32(esp, 0x7edd95u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7edd95: /* 7edd95: mov eax, dword ptr [edi + 0x334] */
  eax = R32((uint32_t)(edi + 0x334u));
/* 7edd9b: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7edd9c: add ebp, 0x10 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 7edd9f: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7edda1: jl 0x7edd00 */
  if ((sf != of)) goto L_7edd00;
L_7edda7: /* 7edda7: mov esi, dword ptr [edi + 0x334] */
  esi = R32((uint32_t)(edi + 0x334u));
/* 7eddad: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  esi = r;
  }
/* 7eddae: js 0x7edde6 */
  if (sf) goto L_7edde6;
L_7eddb0: /* 7eddb0: lea ebp, [edi + 0x330] */
  ebp = (uint32_t)(edi + 0x330u);
/* 7eddb6: mov edi, esi */
  edi = esi;
/* 7eddb8: shl edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 7eddbb: jmp 0x7eddc0 */
  goto L_7eddc0;
L_7eddc0: /* 7eddc0: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* 7eddc3: fld dword ptr [edi + edx + 4] */
  { double v = F32((uint32_t)(edi + edx + 0x4u)); FPUSH(v); }
/* 7eddc7: fcomp qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
  FPOP();
/* 7eddcd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7eddcf: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7eddd2: jp 0x7eddde */
  if (pf) goto L_7eddde;
L_7eddd4: /* 7eddd4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7eddd6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7eddd7: mov ecx, ebp */
  ecx = ebp;
/* 7eddd9: call 0x6c5dda */
  esp -= 4; W32(esp, 0x7edddeu); SPILL(); f_6c5dda(); if (g_unwind) return; RELOAD();
L_7eddde: /* 7eddde: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 7edddf: sub edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 7edde2: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7edde4: jge 0x7eddc0 */
  if ((sf == of)) goto L_7eddc0;
L_7edde6: /* 7edde6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7edde7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7edde8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7edde9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7eddea: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 7eddeb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7eddbd(void) {
  LOAD_REGS();
L_7eddbd: /* 7eddbd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7eddc0: /* 7eddc0: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* 7eddc3: fld dword ptr [edi + edx + 4] */
  { double v = F32((uint32_t)(edi + edx + 0x4u)); FPUSH(v); }
/* 7eddc7: fcomp qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
  FPOP();
/* 7eddcd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7eddcf: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7eddd2: jp 0x7eddde */
  if (pf) goto L_7eddde;
L_7eddd4: /* 7eddd4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7eddd6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7eddd7: mov ecx, ebp */
  ecx = ebp;
/* 7eddd9: call 0x6c5dda */
  esp -= 4; W32(esp, 0x7edddeu); SPILL(); f_6c5dda(); if (g_unwind) return; RELOAD();
L_7eddde: /* 7eddde: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 7edddf: sub edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 7edde2: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7edde4: jge 0x7eddc0 */
  if ((sf == of)) goto L_7eddc0;
L_7edde6: /* 7edde6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7edde7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7edde8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7edde9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7eddea: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 7eddeb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7ede40(void) {
  LOAD_REGS();
L_7ede40: /* 7ede40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7ede41: mov ebp, esp */
  ebp = esp;
/* 7ede43: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7ede45: push 0x9d1200 */
  { uint32_t v = 0x9d1200u; esp -= 4; W32(esp, v); }
/* 7ede4a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7ede50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ede51: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7ede58: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ede5b: mov eax, dword ptr [0xce8470] */
  eax = R32((uint32_t)(0xce8470u));
/* 7ede60: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ede61: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ede62: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7ede65: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 7ede6b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ede6c: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7ede6f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7ede76: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 7ede79: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7ede7b: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* 7ede7d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ede80: mov edx, dword ptr [eax + 0x3c] */
  edx = R32((uint32_t)(eax + 0x3cu));
/* 7ede83: mov ecx, dword ptr [edx + 0x38] */
  ecx = R32((uint32_t)(edx + 0x38u));
/* 7ede86: mov ecx, dword ptr [ecx + 0x6c] */
  ecx = R32((uint32_t)(ecx + 0x6cu));
/* 7ede89: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ede8c: je 0x7edeff */
  if (zf) goto L_7edeff;
L_7ede8e: /* 7ede8e: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ede91: jne 0x7edeff */
  if (!zf) goto L_7edeff;
L_7ede93: /* 7ede93: mov esi, dword ptr [eax + 0x40] */
  esi = R32((uint32_t)(eax + 0x40u));
/* 7ede96: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ede98: je 0x7edeb8 */
  if (zf) goto L_7edeb8;
L_7ede9a: /* 7ede9a: push 0xb81b88 */
  { uint32_t v = 0xb81b88u; esp -= 4; W32(esp, v); }
/* 7ede9f: mov ecx, esi */
  ecx = esi;
/* 7edea1: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7edea7u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7edea7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7edea9: je 0x7edeb5 */
  if (zf) goto L_7edeb5;
L_7edeab: /* 7edeab: mov eax, dword ptr [esi + 0x110] */
  eax = R32((uint32_t)(esi + 0x110u));
/* 7edeb1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7edeb3: jne 0x7edeff */
  if (!zf) goto L_7edeff;
L_7edeb5: /* 7edeb5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
L_7edeb8: /* 7edeb8: mov edx, dword ptr [eax + 0x40] */
  edx = R32((uint32_t)(eax + 0x40u));
/* 7edebb: mov ecx, dword ptr [edx + 0x30] */
  ecx = R32((uint32_t)(edx + 0x30u));
/* 7edebe: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 7edec1: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7edec3: jne 0x7edee0 */
  if (!zf) goto L_7edee0;
L_7edec5: /* 7edec5: push 0x287 */
  { uint32_t v = 0x287u; esp -= 4; W32(esp, v); }
/* 7edeca: push 0xade690 */
  { uint32_t v = 0xade690u; esp -= 4; W32(esp, v); }
/* 7edecf: push 0xade6a0 */
  { uint32_t v = 0xade6a0u; esp -= 4; W32(esp, v); }
/* 7eded4: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7ededau); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7ededa: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ededd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7edee0: /* 7edee0: mov eax, dword ptr [eax + 0x40] */
  eax = R32((uint32_t)(eax + 0x40u));
/* 7edee3: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 7edee6: mov ecx, dword ptr [ecx + 0x2c] */
  ecx = R32((uint32_t)(ecx + 0x2cu));
/* 7edee9: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7edeeb: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7edeed: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7edeef: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7edef1: push 0xade6c0 */
  { uint32_t v = 0xade6c0u; esp -= 4; W32(esp, v); }
/* 7edef6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7edef7: mov ecx, eax */
  ecx = eax;
/* 7edef9: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x7edeffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7edeff: /* 7edeff: mov ecx, dword ptr [0xce8470] */
  ecx = R32((uint32_t)(0xce8470u));
/* 7edf05: mov edx, dword ptr [0xce8220] */
  edx = R32((uint32_t)(0xce8220u));
/* 7edf0b: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 7edf0e: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7edf10: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7edf12: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7edf15: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7edf17: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7edf18: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7edf1a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7edf1d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7edf1e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7edf25: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7edf26: mov esp, ebp */
  esp = ebp;
/* 7edf28: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7edf29: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7edf2c(void) {
  LOAD_REGS();
L_7edf2c: /* 7edf2c: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7edf2f: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7edf34: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 7edf37: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7edf38: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 7edf3b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7edf40u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7edf40(); return;
}

void f_7edf40(void) {
  LOAD_REGS();
L_7edf40: /* 7edf40: push 0xa110ec */
  { uint32_t v = 0xa110ecu; esp -= 4; W32(esp, v); }
/* 7edf45: push 0xade6d0 */
  { uint32_t v = 0xade6d0u; esp -= 4; W32(esp, v); }
/* 7edf4a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7edf50u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7edf50: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7edf53: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7edf55: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7edf57: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7edf5cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7edf5c: guest_badaddr(0x7edf5c); return;
}

void f_7edfb0(void) {
  LOAD_REGS();
L_7edfb0: /* 7edfb0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7edfb1: mov ebp, esp */
  ebp = esp;
/* 7edfb3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7edfb5: push 0x9d1210 */
  { uint32_t v = 0x9d1210u; esp -= 4; W32(esp, v); }
/* 7edfba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7edfc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7edfc1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7edfc8: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7edfcb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7edfcc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7edfcd: mov esi, ecx */
  esi = ecx;
/* 7edfcf: test byte ptr [esi + 0x84], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x84u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7edfd6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7edfd7: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7edfda: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7edfe1: jne 0x7ee24d */
  if (!zf) goto L_7ee24d;
L_7edfe7: /* 7edfe7: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 7edfea: mov eax, esi */
  eax = esi;
/* 7edfec: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7edff0: /* 7edff0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7edff2: je 0x7ee001 */
  if (zf) goto L_7ee001;
L_7edff4: /* 7edff4: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7edff6: je 0x7ee24d */
  if (zf) goto L_7ee24d;
L_7edffc: /* 7edffc: mov eax, dword ptr [eax + 0x58] */
  eax = R32((uint32_t)(eax + 0x58u));
/* 7edfff: jmp 0x7edff0 */
  goto L_7edff0;
L_7ee001: /* 7ee001: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 7ee004: mov eax, esi */
  eax = esi;
L_7ee006: /* 7ee006: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ee008: je 0x7ee017 */
  if (zf) goto L_7ee017;
L_7ee00a: /* 7ee00a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ee00c: je 0x7ee24d */
  if (zf) goto L_7ee24d;
L_7ee012: /* 7ee012: mov eax, dword ptr [eax + 0x58] */
  eax = R32((uint32_t)(eax + 0x58u));
/* 7ee015: jmp 0x7ee006 */
  goto L_7ee006;
L_7ee017: /* 7ee017: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ee019: je 0x7ee24d */
  if (zf) goto L_7ee24d;
L_7ee01f: /* 7ee01f: cmp edi, dword ptr [esi + 0xa4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xa4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ee025: je 0x7ee24d */
  if (zf) goto L_7ee24d;
L_7ee02b: /* 7ee02b: test dword ptr [ebx + 0x4c4], 0x10000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x4c4u))); uint32_t b = (uint32_t)(0x10000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ee035: jne 0x7ee24d */
  if (!zf) goto L_7ee24d;
L_7ee03b: /* 7ee03b: mov eax, dword ptr [esi + 0xa8] */
  eax = R32((uint32_t)(esi + 0xa8u));
/* 7ee041: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ee043: je 0x7ee0a2 */
  if (zf) goto L_7ee0a2;
L_7ee045: /* 7ee045: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 7ee04b: mov eax, dword ptr [0xcfaa80] */
  eax = R32((uint32_t)(0xcfaa80u));
/* 7ee050: fsub dword ptr [edi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x178u)));
/* 7ee056: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7ee059: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 7ee05f: fsub dword ptr [edi + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x174u)));
/* 7ee065: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 7ee06b: fsub dword ptr [edi + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x170u)));
/* 7ee071: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 7ee074: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7ee077: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7ee07a: fld dword ptr [esi + 0x2c4] */
  { double v = F32((uint32_t)(esi + 0x2c4u)); FPUSH(v); }
/* 7ee080: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 7ee082: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 7ee085: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x7ee08bu); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 7ee08b: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 7ee08e: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 7ee091: fmul dword ptr [ebp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xcu)));
/* 7ee094: fcomp dword ptr [ebp + 8] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x8u)));
  FPOP();
/* 7ee097: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7ee099: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ee09c: je 0x7ee24d */
  if (zf) goto L_7ee24d;
L_7ee0a2: /* 7ee0a2: mov eax, dword ptr [esi + 0x58] */
  eax = R32((uint32_t)(esi + 0x58u));
/* 7ee0a5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ee0a7: je 0x7ee0b9 */
  if (zf) goto L_7ee0b9;
L_7ee0a9: /* 7ee0a9: cmp dword ptr [esi + 0x5c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x5cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ee0ac: jne 0x7ee0b9 */
  if (!zf) goto L_7ee0b9;
L_7ee0ae: /* 7ee0ae: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 7ee0b4: test ah, 0x20 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ee0b7: je 0x7ee0f5 */
  if (zf) goto L_7ee0f5;
L_7ee0b9: /* 7ee0b9: mov eax, dword ptr [esi + 0x5c] */
  eax = R32((uint32_t)(esi + 0x5cu));
/* 7ee0bc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ee0be: je 0x7ee12b */
  if (zf) goto L_7ee12b;
L_7ee0c0: /* 7ee0c0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ee0c2: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 7ee0c5: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7ee0cbu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7ee0cb: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 7ee0ce: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ee0cf: lea ecx, [esi + 0xac] */
  ecx = (uint32_t)(esi + 0xacu);
/* 7ee0d5: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x7ee0dbu); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 7ee0db: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ee0dd: je 0x7ee12b */
  if (zf) goto L_7ee12b;
L_7ee0df: /* 7ee0df: mov edx, dword ptr [esi + 0x5c] */
  edx = R32((uint32_t)(esi + 0x5cu));
/* 7ee0e2: mov eax, dword ptr [edx + 0xd0] */
  eax = R32((uint32_t)(edx + 0xd0u));
/* 7ee0e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ee0e9: call 0x6ca8ad */
  esp -= 4; W32(esp, 0x7ee0eeu); SPILL(); f_6ca8ad(); if (g_unwind) return; RELOAD();
/* 7ee0ee: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ee0f1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ee0f3: je 0x7ee12b */
  if (zf) goto L_7ee12b;
L_7ee0f5: /* 7ee0f5: mov ecx, dword ptr [esi + 0x5c] */
  ecx = R32((uint32_t)(esi + 0x5cu));
/* 7ee0f8: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 7ee0fb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7ee0fd: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ee100: mov eax, esp */
  eax = esp;
/* 7ee102: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7ee104: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 7ee107: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 7ee10a: mov esi, dword ptr [ebp + 0x18] */
  esi = R32((uint32_t)(ebp + 0x18u));
/* 7ee10d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ee10e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ee10f: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 7ee112: call dword ptr [edx + 0xf8] */
  { uint32_t t = R32((uint32_t)(edx + 0xf8u)); esp -= 4; W32(esp, 0x7ee118u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ee118: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ee11b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ee122: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ee123: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ee124: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ee125: mov esp, ebp */
  esp = ebp;
/* 7ee127: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ee128: ret 0x14 */
  esp += 24; SPILL(); return;
L_7ee12b: /* 7ee12b: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 7ee131: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 7ee133: js 0x7ee13a */
  if (sf) goto L_7ee13a;
L_7ee135: /* 7ee135: test ah, 0x20 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ee138: je 0x7ee162 */
  if (zf) goto L_7ee162;
L_7ee13a: /* 7ee13a: test byte ptr [esi + 0x88], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x88u))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ee141: jne 0x7ee162 */
  if (!zf) goto L_7ee162;
L_7ee143: /* 7ee143: mov eax, dword ptr [esi + 0xa8] */
  eax = R32((uint32_t)(esi + 0xa8u));
/* 7ee149: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ee14b: jne 0x7ee162 */
  if (!zf) goto L_7ee162;
L_7ee14d: /* 7ee14d: xor eax, eax */
  eax = 0;
/* 7ee14f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ee152: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ee159: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ee15a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ee15b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ee15c: mov esp, ebp */
  esp = ebp;
/* 7ee15e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ee15f: ret 0x14 */
  esp += 24; SPILL(); return;
L_7ee162: /* 7ee162: mov ecx, dword ptr [esi + 0xc0] */
  ecx = R32((uint32_t)(esi + 0xc0u));
/* 7ee168: test byte ptr [ecx + 0x358], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x358u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ee16f: je 0x7ee1bf */
  if (zf) goto L_7ee1bf;
L_7ee171: /* 7ee171: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 7ee177: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7ee17a: fsub dword ptr [ebp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x18u)));
/* 7ee17d: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 7ee183: fsub dword ptr [ebp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x14u)));
/* 7ee186: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 7ee18c: fsub dword ptr [ebp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x10u)));
/* 7ee18f: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 7ee192: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7ee195: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7ee198: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x7ee19eu); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 7ee19e: mov edx, dword ptr [esi + 0xc0] */
  edx = R32((uint32_t)(esi + 0xc0u));
/* 7ee1a4: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 7ee1a7: fld dword ptr [edx + 0x380] */
  { double v = F32((uint32_t)(edx + 0x380u)); FPUSH(v); }
/* 7ee1ad: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7ee1af: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7ee1b1: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 7ee1b4: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 7ee1b6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7ee1b8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7ee1ba: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ee1bd: je 0x7ee14d */
  if (zf) goto L_7ee14d;
L_7ee1bf: /* 7ee1bf: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 7ee1c2: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 7ee1c8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ee1cb: mov ecx, esp */
  ecx = esp;
/* 7ee1cd: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7ee1cf: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 7ee1d2: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7ee1d5: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 7ee1d8: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7ee1db: add esi, 0x170 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7ee1e1: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7ee1e3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ee1e6: mov ecx, esp */
  ecx = esp;
/* 7ee1e8: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7ee1ea: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 7ee1ed: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7ee1f0: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 7ee1f3: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7ee1f6: mov ecx, dword ptr [eax + 0x8c] */
  ecx = R32((uint32_t)(eax + 0x8cu));
/* 7ee1fc: call 0x6c5db2 */
  esp -= 4; W32(esp, 0x7ee201u); SPILL(); f_6c5db2(); if (g_unwind) return; RELOAD();
/* 7ee201: xor ecx, ecx */
  ecx = 0;
/* 7ee203: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ee205: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 7ee208: mov eax, ecx */
  eax = ecx;
/* 7ee20a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ee20d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ee214: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ee215: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ee216: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ee217: mov esp, ebp */
  esp = ebp;
/* 7ee219: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ee21a: ret 0x14 */
  esp += 24; SPILL(); return;
L_7ee24d: /* 7ee24d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ee250: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ee251: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ee252: mov eax, 1 */
  eax = 0x1u;
/* 7ee257: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ee25e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ee25f: mov esp, ebp */
  esp = ebp;
/* 7ee261: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ee262: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_7ee21d(void) {
  LOAD_REGS();
L_7ee21d: /* 7ee21d: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7ee220: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7ee225: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7ee228: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ee229: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7ee22c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ee231u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7ee231(); return;
}

void f_7ee231(void) {
  LOAD_REGS();
L_7ee231: /* 7ee231: push 0xa11120 */
  { uint32_t v = 0xa11120u; esp -= 4; W32(esp, v); }
/* 7ee236: push 0xade6d8 */
  { uint32_t v = 0xade6d8u; esp -= 4; W32(esp, v); }
/* 7ee23b: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7ee241u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7ee241: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ee244: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ee246: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ee248: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ee24du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7ee24d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ee250: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ee251: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ee252: mov eax, 1 */
  eax = 0x1u;
/* 7ee257: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ee25e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ee25f: mov esp, ebp */
  esp = ebp;
/* 7ee261: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ee262: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_7ee320(void) {
  LOAD_REGS();
L_7ee320: /* 7ee320: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7ee321: mov ebp, esp */
  ebp = esp;
/* 7ee323: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7ee325: push 0x9d1220 */
  { uint32_t v = 0x9d1220u; esp -= 4; W32(esp, v); }
/* 7ee32a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7ee330: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ee331: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7ee338: sub esp, 0x118 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x118u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ee33e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ee33f: mov eax, ecx */
  eax = ecx;
/* 7ee341: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7ee344: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 7ee347: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 7ee34a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ee34b: xor ebx, ebx */
  ebx = 0;
/* 7ee34d: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ee34f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ee350: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7ee353: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7ee356: jne 0x7ee36d */
  if (!zf) goto L_7ee36d;
L_7ee358: /* 7ee358: xor eax, eax */
  eax = 0;
/* 7ee35a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ee35d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ee364: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ee365: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ee366: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ee367: mov esp, ebp */
  esp = ebp;
/* 7ee369: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ee36a: ret 4 */
  esp += 8; SPILL(); return;
L_7ee36d: /* 7ee36d: mov edx, dword ptr [0xcfa538] */
  edx = R32((uint32_t)(0xcfa538u));
/* 7ee373: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ee374: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 7ee377: mov dword ptr [ebp - 0x48], ebx */
  W32((uint32_t)(ebp + 0xffffffb8u), ebx);
/* 7ee37a: call dword ptr [0xcfa534] */
  esp -= 4; W32(esp, 0x7ee380u); SPILL(); f_4e12d0(); if (g_unwind) return; /* Core!??0FMemMark@@QAE@AAVFMemStack@@@Z */ RELOAD();
/* 7ee380: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ee383: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 7ee386: mov ecx, dword ptr [ecx + 0x30] */
  ecx = R32((uint32_t)(ecx + 0x30u));
/* 7ee389: lea edi, [ecx - 1] */
  edi = (uint32_t)(ecx + 0xffffffffu);
/* 7ee38c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7ee390: /* 7ee390: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ee392: jl 0x7ee472 */
  if ((sf != of)) goto L_7ee472;
L_7ee398: /* 7ee398: mov edx, dword ptr [eax + 0x3c] */
  edx = R32((uint32_t)(eax + 0x3cu));
/* 7ee39b: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 7ee39e: mov esi, dword ptr [eax + edi*4] */
  esi = R32((uint32_t)(eax + edi*4));
/* 7ee3a1: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ee3a3: jne 0x7ee3bd */
  if (!zf) goto L_7ee3bd;
L_7ee3a5: /* 7ee3a5: push 0x335 */
  { uint32_t v = 0x335u; esp -= 4; W32(esp, v); }
/* 7ee3aa: push 0xade6e0 */
  { uint32_t v = 0xade6e0u; esp -= 4; W32(esp, v); }
/* 7ee3af: push 0xade6f0 */
  { uint32_t v = 0xade6f0u; esp -= 4; W32(esp, v); }
/* 7ee3b4: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7ee3bau); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7ee3ba: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7ee3bd: /* 7ee3bd: mov eax, dword ptr [esi + 0x6c] */
  eax = R32((uint32_t)(esi + 0x6cu));
/* 7ee3c0: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ee3c3: je 0x7ee3e7 */
  if (zf) goto L_7ee3e7;
L_7ee3c5: /* 7ee3c5: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ee3c8: je 0x7ee3e7 */
  if (zf) goto L_7ee3e7;
L_7ee3ca: /* 7ee3ca: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ee3cd: je 0x7ee3e7 */
  if (zf) goto L_7ee3e7;
L_7ee3cf: /* 7ee3cf: push 0x336 */
  { uint32_t v = 0x336u; esp -= 4; W32(esp, v); }
/* 7ee3d4: push 0xade6fc */
  { uint32_t v = 0xade6fcu; esp -= 4; W32(esp, v); }
/* 7ee3d9: push 0xade710 */
  { uint32_t v = 0xade710u; esp -= 4; W32(esp, v); }
/* 7ee3de: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7ee3e4u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7ee3e4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7ee3e7: /* 7ee3e7: cmp dword ptr [esi + 0x30], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x30u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ee3ea: je 0x7ee463 */
  if (zf) goto L_7ee463;
L_7ee3ec: /* 7ee3ec: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7ee3ee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ee3ef: mov ecx, esi */
  ecx = esi;
/* 7ee3f1: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0x7ee3f7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ee3f7: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ee3f9: je 0x7ee463 */
  if (zf) goto L_7ee463;
L_7ee3fb: /* 7ee3fb: cmp dword ptr [esi + 0x6c], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x6cu))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ee3ff: jne 0x7ee463 */
  if (!zf) goto L_7ee463;
L_7ee401: /* 7ee401: mov eax, dword ptr [esi + 0x68] */
  eax = R32((uint32_t)(esi + 0x68u));
/* 7ee404: fld qword ptr [eax + 0x44] */
  { double v = F64((uint32_t)(eax + 0x44u)); FPUSH(v); }
/* 7ee407: fsub qword ptr [esi + 0xf8] */
  ST0 = ST0 - (F64((uint32_t)(esi + 0xf8u)));
/* 7ee40d: fcomp qword ptr [0xa11218] */
  fpu_com(ST0, F64((uint32_t)(0xa11218u)));
  FPOP();
/* 7ee413: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7ee415: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7ee418: jp 0x7ee463 */
  if (pf) goto L_7ee463;
L_7ee41a: /* 7ee41a: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 7ee41d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7ee41f: call dword ptr [edx + 0x194] */
  { uint32_t t = R32((uint32_t)(edx + 0x194u)); esp -= 4; W32(esp, 0x7ee425u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ee425: mov dword ptr [esi + 0x3f08], eax */
  W32((uint32_t)(esi + 0x3f08u), eax);
/* 7ee42b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ee42e: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 7ee431: mov edx, dword ptr [ecx + 0x108] */
  edx = R32((uint32_t)(ecx + 0x108u));
/* 7ee437: mov ecx, dword ptr [0xcfa538] */
  ecx = R32((uint32_t)(0xcfa538u));
/* 7ee43d: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7ee43f: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7ee442: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7ee444: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7ee447: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ee448: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x7ee44eu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 7ee44e: mov dword ptr [esi + 0x3f0c], eax */
  W32((uint32_t)(esi + 0x3f0cu), eax);
/* 7ee454: mov dword ptr [esi + 0x3f10], ebx */
  W32((uint32_t)(esi + 0x3f10u), ebx);
/* 7ee45a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ee45d: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 7ee45e: jmp 0x7ee390 */
  goto L_7ee390;
L_7ee463: /* 7ee463: mov dword ptr [esi + 0x3f08], ebx */
  W32((uint32_t)(esi + 0x3f08u), ebx);
/* 7ee469: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ee46c: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 7ee46d: jmp 0x7ee390 */
  goto L_7ee390;
L_7ee472: /* 7ee472: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 7ee475: sub ecx, dword ptr [eax + 0x108] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x108u)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 7ee47b: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7ee47e: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 7ee481: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7ee483: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ee484: mov ecx, dword ptr [0xcfa538] */
  ecx = R32((uint32_t)(0xcfa538u));
/* 7ee48a: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x7ee490u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 7ee490: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ee493: mov ecx, eax */
  ecx = eax;
/* 7ee495: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 7ee498: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7ee49a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ee49c: mov dword ptr [ebp - 0x7c], ecx */
  W32((uint32_t)(ebp + 0xffffff84u), ecx);
/* 7ee49f: mov dword ptr [ebp - 0x3c], ebx */
  W32((uint32_t)(ebp + 0xffffffc4u), ebx);
/* 7ee4a2: je 0x7ee4b7 */
  if (zf) goto L_7ee4b7;
L_7ee4a4: /* 7ee4a4: mov dl, byte ptr [eax + 0x90] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x90u))) & 0xffu);
/* 7ee4aa: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ee4ac: je 0x7ee4b7 */
  if (zf) goto L_7ee4b7;
L_7ee4ae: /* 7ee4ae: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 7ee4b0: mov dword ptr [ebp - 0x3c], 1 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x1u);
L_7ee4b7: /* 7ee4b7: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ee4ba: mov ecx, dword ptr [ecx + 0x40] */
  ecx = R32((uint32_t)(ecx + 0x40u));
/* 7ee4bd: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7ee4bf: call dword ptr [edx + 0xa8] */
  { uint32_t t = R32((uint32_t)(edx + 0xa8u)); esp -= 4; W32(esp, 0x7ee4c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ee4c5: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 7ee4cb: fst dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0);
/* 7ee4ce: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7ee4d0: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7ee4d3: jp 0x7ee4dd */
  if (pf) goto L_7ee4dd;
L_7ee4d5: /* 7ee4d5: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7ee4d8: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 7ee4db: jmp 0x7ee4e8 */
  goto L_7ee4e8;
L_7ee4dd: /* 7ee4dd: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 7ee4e3: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 7ee4e5: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
L_7ee4e8: /* 7ee4e8: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ee4eb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7ee4ed: mov edi, dword ptr [ebx + 0x108] */
  edi = R32((uint32_t)(ebx + 0x108u));
L_7ee4f3: /* 7ee4f3: cmp edi, dword ptr [ebx + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ee4f6: jge 0x7ee5d6 */
  if ((sf == of)) goto L_7ee5d6;
L_7ee4fc: /* 7ee4fc: mov ecx, dword ptr [ebx + 0x2c] */
  ecx = R32((uint32_t)(ebx + 0x2cu));
/* 7ee4ff: mov esi, dword ptr [ecx + edi*4] */
  esi = R32((uint32_t)(ecx + edi*4));
/* 7ee502: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ee504: je 0x7ee5d0 */
  if (zf) goto L_7ee5d0;
L_7ee50a: /* 7ee50a: mov al, byte ptr [esi + 0x90] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x90u))) & 0xffu);
/* 7ee510: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ee512: je 0x7ee5d0 */
  if (zf) goto L_7ee5d0;
L_7ee518: /* 7ee518: fld dword ptr [esi + 0x98] */
  { double v = F32((uint32_t)(esi + 0x98u)); FPUSH(v); }
/* 7ee51e: fcomp qword ptr [ebx + 0xd0] */
  fpu_com(ST0, F64((uint32_t)(ebx + 0xd0u)));
  FPOP();
/* 7ee524: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7ee526: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7ee529: jp 0x7ee5d0 */
  if (pf) goto L_7ee5d0;
L_7ee52f: /* 7ee52f: call dword ptr [0xcfa634] */
  esp -= 4; W32(esp, 0x7ee535u); SPILL(); f_4e1fc3(); if (g_unwind) return; /* Core!?appFrand@@YAMXZ */ RELOAD();
/* 7ee535: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 7ee538: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 7ee53e: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ee541: fdiv dword ptr [esi + 0x9c] */
  ST0 = ST0 / (F32((uint32_t)(esi + 0x9cu)));
/* 7ee547: mov al, byte ptr [esi + 0x84] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x84u))) & 0xffu);
/* 7ee54d: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ee54f: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 7ee552: fmul dword ptr [ebp - 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 7ee555: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7ee557: fadd qword ptr [edx + 0xd0] */
  ST0 = ST0 + (F64((uint32_t)(edx + 0xd0u)));
/* 7ee55d: fstp dword ptr [esi + 0x98] */
  WF32((uint32_t)(esi + 0x98u), ST0); FPOP();
/* 7ee563: jne 0x7ee5c0 */
  if (!zf) goto L_7ee5c0;
L_7ee565: /* 7ee565: test dword ptr [esi + 0x80], 0x40000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x80u))); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ee56f: je 0x7ee5c0 */
  if (zf) goto L_7ee5c0;
L_7ee571: /* 7ee571: mov eax, dword ptr [esi + 0x58] */
  eax = R32((uint32_t)(esi + 0x58u));
/* 7ee574: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ee577: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 7ee57a: xor edx, edx */
  edx = 0;
/* 7ee57c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7ee580: /* 7ee580: mov eax, dword ptr [ebx + 0x3c] */
  eax = R32((uint32_t)(ebx + 0x3cu));
/* 7ee583: cmp edx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ee586: jge 0x7ee5d0 */
  if ((sf == of)) goto L_7ee5d0;
L_7ee588: /* 7ee588: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7ee58b: mov eax, dword ptr [ecx + edx*4] */
  eax = R32((uint32_t)(ecx + edx*4));
/* 7ee58e: mov ecx, dword ptr [eax + 0x3f08] */
  ecx = R32((uint32_t)(eax + 0x3f08u));
/* 7ee594: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ee596: je 0x7ee5bd */
  if (zf) goto L_7ee5bd;
L_7ee598: /* 7ee598: cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ee59b: je 0x7ee5a5 */
  if (zf) goto L_7ee5a5;
L_7ee59d: /* 7ee59d: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7ee5a0: cmp ecx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ee5a3: jne 0x7ee5bd */
  if (!zf) goto L_7ee5bd;
L_7ee5a5: /* 7ee5a5: mov ecx, dword ptr [eax + 0x3f10] */
  ecx = R32((uint32_t)(eax + 0x3f10u));
/* 7ee5ab: mov ebx, dword ptr [eax + 0x3f0c] */
  ebx = R32((uint32_t)(eax + 0x3f0cu));
/* 7ee5b1: mov dword ptr [ebx + ecx*4], esi */
  W32((uint32_t)(ebx + ecx*4), esi);
/* 7ee5b4: inc dword ptr [eax + 0x3f10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x3f10u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + 0x3f10u), r);
  }
/* 7ee5ba: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
L_7ee5bd: /* 7ee5bd: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7ee5be: jmp 0x7ee580 */
  goto L_7ee580;
L_7ee5c0: /* 7ee5c0: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7ee5c3: mov edx, dword ptr [ebp - 0x7c] */
  edx = R32((uint32_t)(ebp + 0xffffff84u));
/* 7ee5c6: mov dword ptr [edx + eax*4], esi */
  W32((uint32_t)(edx + eax*4), esi);
/* 7ee5c9: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ee5cc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7ee5cd: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
L_7ee5d0: /* 7ee5d0: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7ee5d1: jmp 0x7ee4f3 */
  goto L_7ee4f3;
L_7ee5d6: /* 7ee5d6: mov eax, dword ptr [ebx + 0x3c] */
  eax = R32((uint32_t)(ebx + 0x3cu));
/* 7ee5d9: mov eax, dword ptr [eax + 0x30] */
  eax = R32((uint32_t)(eax + 0x30u));
L_7ee5dc: /* 7ee5dc: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 7ee5dd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7ee5df: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 7ee5e2: jl 0x7eee9d */
  if ((sf != of)) goto L_7eee9d;
L_7ee5e8: /* 7ee5e8: mov ecx, dword ptr [ebx + 0x3c] */
  ecx = R32((uint32_t)(ebx + 0x3cu));
/* 7ee5eb: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7ee5ee: mov edi, dword ptr [edx + eax*4] */
  edi = R32((uint32_t)(edx + eax*4));
/* 7ee5f1: mov eax, dword ptr [edi + 0x3f08] */
  eax = R32((uint32_t)(edi + 0x3f08u));
/* 7ee5f7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ee5f9: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 7ee5fc: je 0x7eee1b */
  if (zf) goto L_7eee1b;
L_7ee602: /* 7ee602: mov esi, dword ptr [edi + 0x30] */
  esi = R32((uint32_t)(edi + 0x30u));
/* 7ee605: mov ecx, dword ptr [esi + 0xb0] */
  ecx = R32((uint32_t)(esi + 0xb0u));
/* 7ee60b: mov dword ptr [ecx + 0x550], esi */
  W32((uint32_t)(ecx + 0x550u), esi);
/* 7ee611: mov edx, dword ptr [esi + 0xb0] */
  edx = R32((uint32_t)(esi + 0xb0u));
/* 7ee617: mov ebx, eax */
  ebx = eax;
/* 7ee619: mov dword ptr [ebp - 0x40], ebx */
  W32((uint32_t)(ebp + 0xffffffc0u), ebx);
/* 7ee61c: mov dword ptr [ebp - 0x2c], esi */
  W32((uint32_t)(ebp + 0xffffffd4u), esi);
/* 7ee61f: mov dword ptr [edx + 0x554], ebx */
  W32((uint32_t)(edx + 0x554u), ebx);
/* 7ee625: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7ee627: mov eax, dword ptr [0xcfa538] */
  eax = R32((uint32_t)(0xcfa538u));
/* 7ee62c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ee62d: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 7ee630: call dword ptr [0xcfa534] */
  esp -= 4; W32(esp, 0x7ee636u); SPILL(); f_4e12d0(); if (g_unwind) return; /* Core!??0FMemMark@@QAE@AAVFMemStack@@@Z */ RELOAD();
/* 7ee636: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ee639: inc dword ptr [eax + 0x10c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x10cu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + 0x10cu), r);
  }
/* 7ee63f: inc dword ptr [edi + 0x11c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x11cu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(edi + 0x11cu), r);
  }
/* 7ee645: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7ee649: xor eax, eax */
  eax = 0;
/* 7ee64b: jmp 0x7ee650 */
  goto L_7ee650;
L_7ee650: /* 7ee650: cmp eax, dword ptr [edi + 0x3ed0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x3ed0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ee656: jge 0x7ee673 */
  if ((sf == of)) goto L_7ee673;
L_7ee658: /* 7ee658: mov ecx, dword ptr [edi + 0x3ecc] */
  ecx = R32((uint32_t)(edi + 0x3eccu));
/* 7ee65e: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 7ee661: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ee664: mov ecx, dword ptr [ecx + 0x10c] */
  ecx = R32((uint32_t)(ecx + 0x10cu));
/* 7ee66a: mov dword ptr [edx + 0x94], ecx */
  W32((uint32_t)(edx + 0x94u), ecx);
/* 7ee670: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7ee671: jmp 0x7ee650 */
  goto L_7ee650;
L_7ee673: /* 7ee673: add ebx, 0x170 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 7ee679: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7ee67b: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 7ee67e: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 7ee681: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 7ee684: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* 7ee687: lea eax, [esi + 0x17c] */
  eax = (uint32_t)(esi + 0x17cu);
/* 7ee68d: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7ee68f: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 7ee692: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7ee695: mov dword ptr [ebp - 0xfc], edx */
  W32((uint32_t)(ebp + 0xffffff04u), edx);
/* 7ee69b: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 7ee69e: mov dword ptr [ebp - 0xf8], ecx */
  W32((uint32_t)(ebp + 0xffffff08u), ecx);
/* 7ee6a4: lea eax, [ebp - 0xfc] */
  eax = (uint32_t)(ebp + 0xffffff04u);
/* 7ee6aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ee6ab: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7ee6ae: mov dword ptr [ebp - 0xf4], edx */
  W32((uint32_t)(ebp + 0xffffff0cu), edx);
/* 7ee6b4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ee6b5: lea edx, [ebp - 0x40] */
  edx = (uint32_t)(ebp + 0xffffffc0u);
/* 7ee6b8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ee6b9: mov ecx, esi */
  ecx = esi;
/* 7ee6bb: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7ee6c2: call 0x6c204a */
  esp -= 4; W32(esp, 0x7ee6c7u); SPILL(); f_6c204a(); if (g_unwind) return; RELOAD();
/* 7ee6c7: mov ebx, dword ptr [ebp - 0x40] */
  ebx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 7ee6ca: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ee6cc: jne 0x7ee6e6 */
  if (!zf) goto L_7ee6e6;
L_7ee6ce: /* 7ee6ce: push 0x38d */
  { uint32_t v = 0x38du; esp -= 4; W32(esp, v); }
/* 7ee6d3: push 0xade780 */
  { uint32_t v = 0xade780u; esp -= 4; W32(esp, v); }
/* 7ee6d8: push 0xade790 */
  { uint32_t v = 0xade790u; esp -= 4; W32(esp, v); }
/* 7ee6dd: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7ee6e3u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7ee6e3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7ee6e6: /* 7ee6e6: mov eax, dword ptr [edi + 0x11c] */
  eax = R32((uint32_t)(edi + 0x11cu));
/* 7ee6ec: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ee6ee: je 0x7ee8a4 */
  if (zf) goto L_7ee8a4;
L_7ee6f4: /* 7ee6f4: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ee6f6: je 0x7ee700 */
  if (zf) goto L_7ee700;
L_7ee6f8: /* 7ee6f8: fld dword ptr [0xa11210] */
  { double v = F32((uint32_t)(0xa11210u)); FPUSH(v); }
/* 7ee6fe: jmp 0x7ee706 */
  goto L_7ee706;
L_7ee700: /* 7ee700: fld dword ptr [0xa0c18c] */
  { double v = F32((uint32_t)(0xa0c18cu)); FPUSH(v); }
L_7ee706: /* 7ee706: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7ee708: fmul dword ptr [ebx + 0x190] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x190u)));
/* 7ee70e: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 7ee710: fmul dword ptr [ebx + 0x18c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x18cu)));
/* 7ee716: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 7ee718: fmul dword ptr [ebx + 0x188] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x188u)));
/* 7ee71e: fstp dword ptr [ebp - 0x94] */
  WF32((uint32_t)(ebp + 0xffffff6cu), ST0); FPOP();
/* 7ee724: mov eax, dword ptr [ebp - 0x94] */
  eax = R32((uint32_t)(ebp + 0xffffff6cu));
/* 7ee72a: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* 7ee72d: mov eax, dword ptr [ebx + 0x5c] */
  eax = R32((uint32_t)(ebx + 0x5cu));
/* 7ee730: fstp dword ptr [ebp - 0x90] */
  WF32((uint32_t)(ebp + 0xffffff70u), ST0); FPOP();
/* 7ee736: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ee738: mov ecx, dword ptr [ebp - 0x90] */
  ecx = R32((uint32_t)(ebp + 0xffffff70u));
/* 7ee73e: fstp dword ptr [ebp - 0x8c] */
  WF32((uint32_t)(ebp + 0xffffff74u), ST0); FPOP();
/* 7ee744: mov edx, dword ptr [ebp - 0x8c] */
  edx = R32((uint32_t)(ebp + 0xffffff74u));
/* 7ee74a: mov dword ptr [ebp - 0x5c], ecx */
  W32((uint32_t)(ebp + 0xffffffa4u), ecx);
/* 7ee74d: mov dword ptr [ebp - 0x58], edx */
  W32((uint32_t)(ebp + 0xffffffa8u), edx);
/* 7ee750: je 0x7ee788 */
  if (zf) goto L_7ee788;
L_7ee752: /* 7ee752: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7ee754: fmul dword ptr [eax + 0x190] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x190u)));
/* 7ee75a: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7ee75d: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7ee75f: fmul dword ptr [eax + 0x18c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x18cu)));
/* 7ee765: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7ee768: fmul dword ptr [eax + 0x188] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x188u)));
/* 7ee76e: fadd dword ptr [ebp - 0x94] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff6cu)));
/* 7ee774: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 7ee777: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 7ee77a: fadd dword ptr [ebp - 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 7ee77d: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 7ee780: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 7ee783: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 7ee786: jmp 0x7ee78d */
  goto L_7ee78d;
L_7ee788: /* 7ee788: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7ee78a: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
L_7ee78d: /* 7ee78d: fadd dword ptr [ebp - 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 7ee790: xor esi, esi */
  esi = 0;
/* 7ee792: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 7ee795: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ee796: fadd dword ptr [ebp - 0x5c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa4u)));
/* 7ee799: mov dword ptr [ebp - 0xf0], esi */
  W32((uint32_t)(ebp + 0xffffff10u), esi);
/* 7ee79f: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 7ee7a2: mov dword ptr [ebp - 0xec], esi */
  W32((uint32_t)(ebp + 0xffffff14u), esi);
/* 7ee7a8: fadd dword ptr [ebp - 0x60] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 7ee7ab: mov dword ptr [ebp - 0xdc], esi */
  W32((uint32_t)(ebp + 0xffffff24u), esi);
/* 7ee7b1: mov dword ptr [ebp - 0xd8], esi */
  W32((uint32_t)(ebp + 0xffffff28u), esi);
/* 7ee7b7: mov dword ptr [ebp - 0xd4], esi */
  W32((uint32_t)(ebp + 0xffffff2cu), esi);
/* 7ee7bd: mov dword ptr [ebp - 0xd0], esi */
  W32((uint32_t)(ebp + 0xffffff30u), esi);
/* 7ee7c3: fstp dword ptr [ebp - 0x88] */
  WF32((uint32_t)(ebp + 0xffffff78u), ST0); FPOP();
/* 7ee7c9: mov eax, dword ptr [ebp - 0x88] */
  eax = R32((uint32_t)(ebp + 0xffffff78u));
/* 7ee7cf: mov dword ptr [ebp - 0xc4], esi */
  W32((uint32_t)(ebp + 0xffffff3cu), esi);
/* 7ee7d5: fstp dword ptr [ebp - 0x84] */
  WF32((uint32_t)(ebp + 0xffffff7cu), ST0); FPOP();
/* 7ee7db: mov edx, dword ptr [ebp - 0x84] */
  edx = R32((uint32_t)(ebp + 0xffffff7cu));
/* 7ee7e1: mov dword ptr [ebp - 0xb0], esi */
  W32((uint32_t)(ebp + 0xffffff50u), esi);
/* 7ee7e7: fstp dword ptr [ebp - 0x80] */
  WF32((uint32_t)(ebp + 0xffffff80u), ST0); FPOP();
/* 7ee7ea: mov ecx, dword ptr [ebp - 0x80] */
  ecx = R32((uint32_t)(ebp + 0xffffff80u));
/* 7ee7ed: mov dword ptr [ebp - 0xac], esi */
  W32((uint32_t)(ebp + 0xffffff54u), esi);
/* 7ee7f3: mov dword ptr [ebp - 0xa8], esi */
  W32((uint32_t)(ebp + 0xffffff58u), esi);
/* 7ee7f9: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7ee7fb: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ee7fe: mov dword ptr [ebp - 0xe8], eax */
  W32((uint32_t)(ebp + 0xffffff18u), eax);
/* 7ee804: mov dword ptr [ebp - 0xe4], edx */
  W32((uint32_t)(ebp + 0xffffff1cu), edx);
/* 7ee80a: mov dword ptr [ebp - 0xcc], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff34u), 0x3f800000u);
/* 7ee814: mov dword ptr [ebp - 0xc8], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff38u), 0xffffffffu);
/* 7ee81e: mov dword ptr [ebp - 0xe0], ecx */
  W32((uint32_t)(ebp + 0xffffff20u), ecx);
/* 7ee824: mov ecx, dword ptr [ebx + 0xb4] */
  ecx = R32((uint32_t)(ebx + 0xb4u));
/* 7ee82a: mov ebx, dword ptr [ebp - 0xb0] */
  ebx = R32((uint32_t)(ebp + 0xffffff50u));
/* 7ee830: mov ecx, dword ptr [ecx + 0x8c] */
  ecx = R32((uint32_t)(ecx + 0x8cu));
/* 7ee836: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 7ee838: mov esi, esp */
  esi = esp;
/* 7ee83a: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
/* 7ee83c: mov ebx, dword ptr [ebp - 0xac] */
  ebx = R32((uint32_t)(ebp + 0xffffff54u));
/* 7ee842: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 7ee845: mov ebx, dword ptr [ebp - 0xa8] */
  ebx = R32((uint32_t)(ebp + 0xffffff58u));
/* 7ee84b: mov dword ptr [esi + 8], ebx */
  W32((uint32_t)(esi + 0x8u), ebx);
/* 7ee84e: mov ebx, dword ptr [ebp - 0x38] */
  ebx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7ee851: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ee854: mov esi, esp */
  esi = esp;
/* 7ee856: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
/* 7ee858: mov ebx, dword ptr [ebp - 0x34] */
  ebx = R32((uint32_t)(ebp + 0xffffffccu));
/* 7ee85b: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 7ee85e: mov ebx, dword ptr [ebp - 0x30] */
  ebx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7ee861: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ee864: mov dword ptr [esi + 8], ebx */
  W32((uint32_t)(esi + 0x8u), ebx);
/* 7ee867: mov esi, esp */
  esi = esp;
/* 7ee869: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 7ee86b: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 7ee86e: mov edx, dword ptr [ebp - 0x80] */
  edx = R32((uint32_t)(ebp + 0xffffff80u));
/* 7ee871: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ee873: lea eax, [ebp - 0xf0] */
  eax = (uint32_t)(ebp + 0xffffff10u);
/* 7ee879: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ee87a: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 7ee87d: call dword ptr [edi + 0x6c] */
  { uint32_t t = R32((uint32_t)(edi + 0x6cu)); esp -= 4; W32(esp, 0x7ee880u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ee880: mov ecx, dword ptr [ebp - 0xe8] */
  ecx = R32((uint32_t)(ebp + 0xffffff18u));
/* 7ee886: mov edx, dword ptr [ebp - 0xe4] */
  edx = R32((uint32_t)(ebp + 0xffffff1cu));
/* 7ee88c: mov eax, dword ptr [ebp - 0xe0] */
  eax = R32((uint32_t)(ebp + 0xffffff20u));
/* 7ee892: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7ee895: mov ebx, dword ptr [ebp - 0x40] */
  ebx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 7ee898: mov esi, dword ptr [ebp - 0x2c] */
  esi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7ee89b: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 7ee89e: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 7ee8a1: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
L_7ee8a4: /* 7ee8a4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ee8a7: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 7ee8aa: sub eax, dword ptr [ecx + 0x108] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x108u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7ee8b0: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7ee8b3: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 7ee8b6: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 7ee8b9: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7ee8bb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ee8bc: mov ecx, dword ptr [0xcfa538] */
  ecx = R32((uint32_t)(0xcfa538u));
/* 7ee8c2: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 7ee8c9: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x7ee8cfu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 7ee8cf: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ee8d2: mov edx, dword ptr [ecx + 0x108] */
  edx = R32((uint32_t)(ecx + 0x108u));
/* 7ee8d8: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7ee8db: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 7ee8de: mov ecx, dword ptr [0xcfa538] */
  ecx = R32((uint32_t)(0xcfa538u));
/* 7ee8e4: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7ee8e6: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7ee8e9: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7ee8eb: lea edx, [eax*4] */
  edx = (uint32_t)(eax*4);
/* 7ee8f2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ee8f3: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x7ee8f9u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 7ee8f9: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 7ee8fc: add ebx, 0x170 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 7ee902: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 7ee904: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 7ee907: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* 7ee90a: mov dword ptr [ebp - 0xc0], eax */
  W32((uint32_t)(ebp + 0xffffff40u), eax);
/* 7ee910: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* 7ee913: mov dword ptr [ebp - 0xbc], ecx */
  W32((uint32_t)(ebp + 0xffffff44u), ecx);
/* 7ee919: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ee91a: lea ecx, [esi + 0x17c] */
  ecx = (uint32_t)(esi + 0x17cu);
/* 7ee920: mov dword ptr [ebp - 0xb8], edx */
  W32((uint32_t)(ebp + 0xffffff48u), edx);
/* 7ee926: call dword ptr [0xcfa7dc] */
  esp -= 4; W32(esp, 0x7ee92cu); SPILL(); f_4e30a8(); if (g_unwind) return; /* Core!?Vector@FRotator@@QAE?AVFVector@@XZ */ RELOAD();
/* 7ee92c: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7ee930: xor ebx, ebx */
  ebx = 0;
L_7ee932: /* 7ee932: cmp ebx, dword ptr [ebp - 0x3c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ee935: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 7ee938: jge 0x7eea30 */
  if ((sf == of)) goto L_7eea30;
L_7ee93e: /* 7ee93e: mov ecx, dword ptr [ebp - 0x7c] */
  ecx = R32((uint32_t)(ebp + 0xffffff84u));
/* 7ee941: mov esi, dword ptr [ecx + ebx*4] */
  esi = R32((uint32_t)(ecx + ebx*4));
/* 7ee944: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ee947: mov edx, dword ptr [esi + 0x94] */
  edx = R32((uint32_t)(esi + 0x94u));
/* 7ee94d: cmp edx, dword ptr [eax + 0x10c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x10cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ee953: je 0x7eea2a */
  if (zf) goto L_7eea2a;
L_7ee959: /* 7ee959: mov ecx, esi */
  ecx = esi;
/* 7ee95b: call dword ptr [0xcfa2b4] */
  esp -= 4; W32(esp, 0x7ee961u); SPILL(); f_4e39ae(); if (g_unwind) return; /* Core!?GetIndex@UObject@@QBEKXZ */ RELOAD();
/* 7ee961: mov ecx, dword ptr [edi + 0x3ee8] */
  ecx = R32((uint32_t)(edi + 0x3ee8u));
/* 7ee967: mov edx, dword ptr [edi + 0x3ee4] */
  edx = R32((uint32_t)(edi + 0x3ee4u));
/* 7ee96d: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 7ee96e: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7ee970: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
L_7ee973: /* 7ee973: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ee976: je 0x7ee992 */
  if (zf) goto L_7ee992;
L_7ee978: /* 7ee978: mov ecx, dword ptr [edi + 0x3ed8] */
  ecx = R32((uint32_t)(edi + 0x3ed8u));
/* 7ee97e: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 7ee981: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 7ee984: cmp dword ptr [eax + 4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ee987: jne 0x7ee98e */
  if (!zf) goto L_7ee98e;
L_7ee989: /* 7ee989: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7ee98c: jmp 0x7ee994 */
  goto L_7ee994;
L_7ee98e: /* 7ee98e: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7ee990: jmp 0x7ee973 */
  goto L_7ee973;
L_7ee992: /* 7ee992: xor eax, eax */
  eax = 0;
L_7ee994: /* 7ee994: test byte ptr [esi + 0x84], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x84u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ee99b: je 0x7ee9d7 */
  if (zf) goto L_7ee9d7;
L_7ee99d: /* 7ee99d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ee99f: je 0x7ee9d7 */
  if (zf) goto L_7ee9d7;
L_7ee9a1: /* 7ee9a1: mov ecx, dword ptr [eax + 0x8c] */
  ecx = R32((uint32_t)(eax + 0x8cu));
/* 7ee9a7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ee9a9: jne 0x7ee9d7 */
  if (!zf) goto L_7ee9d7;
L_7ee9ab: /* 7ee9ab: mov ecx, dword ptr [eax + 0x9c] */
  ecx = R32((uint32_t)(eax + 0x9cu));
/* 7ee9b1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ee9b3: je 0x7ee9d7 */
  if (zf) goto L_7ee9d7;
L_7ee9b5: /* 7ee9b5: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 7ee9bb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ee9bd: jne 0x7ee9d7 */
  if (!zf) goto L_7ee9d7;
L_7ee9bf: /* 7ee9bf: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ee9c2: mov ecx, dword ptr [edx + 0x3c] */
  ecx = R32((uint32_t)(edx + 0x3cu));
/* 7ee9c5: mov edx, dword ptr [ecx + 0x44] */
  edx = R32((uint32_t)(ecx + 0x44u));
/* 7ee9c8: mov dword ptr [eax + 0x70], edx */
  W32((uint32_t)(eax + 0x70u), edx);
/* 7ee9cb: mov ecx, dword ptr [ecx + 0x48] */
  ecx = R32((uint32_t)(ecx + 0x48u));
/* 7ee9ce: mov dword ptr [eax + 0x74], ecx */
  W32((uint32_t)(eax + 0x74u), ecx);
/* 7ee9d1: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7ee9d2: jmp 0x7ee932 */
  goto L_7ee932;
L_7ee9d7: /* 7ee9d7: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ee9da: mov ecx, dword ptr [edx + 0x10c] */
  ecx = R32((uint32_t)(edx + 0x10cu));
/* 7ee9e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ee9e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ee9e2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ee9e3: lea edx, [ebp - 0x54] */
  edx = (uint32_t)(ebp + 0xffffffacu);
/* 7ee9e6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ee9e7: lea eax, [ebp - 0xc0] */
  eax = (uint32_t)(ebp + 0xffffff40u);
/* 7ee9ed: mov dword ptr [esi + 0x94], ecx */
  W32((uint32_t)(esi + 0x94u), ecx);
/* 7ee9f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ee9f4: lea ecx, [ebp - 0x118] */
  ecx = (uint32_t)(ebp + 0xfffffee8u);
/* 7ee9fa: call 0x6c3a30 */
  esp -= 4; W32(esp, 0x7ee9ffu); SPILL(); f_6c3a30(); if (g_unwind) return; RELOAD();
/* 7ee9ff: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7eea02: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 7eea04: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7eea07: lea ecx, [edx + edx*2] */
  ecx = (uint32_t)(edx + edx*2);
/* 7eea0a: lea ecx, [esi + ecx*4] */
  ecx = (uint32_t)(esi + ecx*4);
/* 7eea0d: mov esi, ecx */
  esi = ecx;
/* 7eea0f: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
/* 7eea11: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 7eea14: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 7eea17: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7eea1a: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7eea1d: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 7eea20: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7eea23: mov dword ptr [eax + edx*4], ecx */
  W32((uint32_t)(eax + edx*4), ecx);
/* 7eea26: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7eea27: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
L_7eea2a: /* 7eea2a: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7eea2b: jmp 0x7ee932 */
  goto L_7ee932;
L_7eea30: /* 7eea30: xor ebx, ebx */
  ebx = 0;
L_7eea32: /* 7eea32: cmp ebx, dword ptr [edi + 0x3f10] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x3f10u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7eea38: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 7eea3b: jge 0x7eeb6b */
  if ((sf == of)) goto L_7eeb6b;
L_7eea41: /* 7eea41: mov ecx, dword ptr [edi + 0x3f0c] */
  ecx = R32((uint32_t)(edi + 0x3f0cu));
/* 7eea47: mov esi, dword ptr [ecx + ebx*4] */
  esi = R32((uint32_t)(ecx + ebx*4));
/* 7eea4a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7eea4d: mov edx, dword ptr [esi + 0x94] */
  edx = R32((uint32_t)(esi + 0x94u));
/* 7eea53: cmp edx, dword ptr [eax + 0x10c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x10cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7eea59: je 0x7eead3 */
  if (zf) goto L_7eead3;
L_7eea5b: /* 7eea5b: mov ecx, esi */
  ecx = esi;
/* 7eea5d: call dword ptr [0xcfa2b4] */
  esp -= 4; W32(esp, 0x7eea63u); SPILL(); f_4e39ae(); if (g_unwind) return; /* Core!?GetIndex@UObject@@QBEKXZ */ RELOAD();
/* 7eea63: mov ecx, dword ptr [edi + 0x3ee8] */
  ecx = R32((uint32_t)(edi + 0x3ee8u));
/* 7eea69: mov edx, dword ptr [edi + 0x3ee4] */
  edx = R32((uint32_t)(edi + 0x3ee4u));
/* 7eea6f: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 7eea70: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7eea72: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
L_7eea75: /* 7eea75: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7eea78: je 0x7eea94 */
  if (zf) goto L_7eea94;
L_7eea7a: /* 7eea7a: mov ecx, dword ptr [edi + 0x3ed8] */
  ecx = R32((uint32_t)(edi + 0x3ed8u));
/* 7eea80: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 7eea83: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 7eea86: cmp dword ptr [eax + 4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7eea89: jne 0x7eea90 */
  if (!zf) goto L_7eea90;
L_7eea8b: /* 7eea8b: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7eea8e: jmp 0x7eea96 */
  goto L_7eea96;
L_7eea90: /* 7eea90: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7eea92: jmp 0x7eea75 */
  goto L_7eea75;
L_7eea94: /* 7eea94: xor eax, eax */
  eax = 0;
L_7eea96: /* 7eea96: test byte ptr [esi + 0x84], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x84u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7eea9d: je 0x7eead9 */
  if (zf) goto L_7eead9;
L_7eea9f: /* 7eea9f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eeaa1: je 0x7eead9 */
  if (zf) goto L_7eead9;
L_7eeaa3: /* 7eeaa3: mov ecx, dword ptr [eax + 0x8c] */
  ecx = R32((uint32_t)(eax + 0x8cu));
/* 7eeaa9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eeaab: jne 0x7eead9 */
  if (!zf) goto L_7eead9;
L_7eeaad: /* 7eeaad: mov ecx, dword ptr [eax + 0x9c] */
  ecx = R32((uint32_t)(eax + 0x9cu));
/* 7eeab3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eeab5: je 0x7eead9 */
  if (zf) goto L_7eead9;
L_7eeab7: /* 7eeab7: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 7eeabd: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eeabf: jne 0x7eead9 */
  if (!zf) goto L_7eead9;
L_7eeac1: /* 7eeac1: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7eeac4: mov ecx, dword ptr [edx + 0x3c] */
  ecx = R32((uint32_t)(edx + 0x3cu));
/* 7eeac7: mov edx, dword ptr [ecx + 0x44] */
  edx = R32((uint32_t)(ecx + 0x44u));
/* 7eeaca: mov dword ptr [eax + 0x70], edx */
  W32((uint32_t)(eax + 0x70u), edx);
/* 7eeacd: mov ecx, dword ptr [ecx + 0x48] */
  ecx = R32((uint32_t)(ecx + 0x48u));
/* 7eead0: mov dword ptr [eax + 0x74], ecx */
  W32((uint32_t)(eax + 0x74u), ecx);
L_7eead3: /* 7eead3: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7eead4: jmp 0x7eea32 */
  goto L_7eea32;
L_7eead9: /* 7eead9: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7eeadc: mov ecx, dword ptr [edx + 0x10c] */
  ecx = R32((uint32_t)(edx + 0x10cu));
/* 7eeae2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7eeae3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7eeae4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7eeae5: lea edx, [ebp - 0x54] */
  edx = (uint32_t)(ebp + 0xffffffacu);
/* 7eeae8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7eeae9: lea eax, [ebp - 0xc0] */
  eax = (uint32_t)(ebp + 0xffffff40u);
/* 7eeaef: mov dword ptr [esi + 0x94], ecx */
  W32((uint32_t)(esi + 0x94u), ecx);
/* 7eeaf5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7eeaf6: lea ecx, [ebp - 0x124] */
  ecx = (uint32_t)(ebp + 0xfffffedcu);
/* 7eeafc: call 0x6c3a30 */
  esp -= 4; W32(esp, 0x7eeb01u); SPILL(); f_6c3a30(); if (g_unwind) return; RELOAD();
/* 7eeb01: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7eeb04: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 7eeb06: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7eeb09: lea ecx, [edx + edx*2] */
  ecx = (uint32_t)(edx + edx*2);
/* 7eeb0c: lea ecx, [esi + ecx*4] */
  ecx = (uint32_t)(esi + ecx*4);
/* 7eeb0f: mov esi, ecx */
  esi = ecx;
/* 7eeb11: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
/* 7eeb13: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 7eeb16: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 7eeb19: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7eeb1c: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7eeb1f: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 7eeb22: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7eeb25: mov dword ptr [eax + edx*4], ecx */
  W32((uint32_t)(eax + edx*4), ecx);
/* 7eeb28: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7eeb29: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 7eeb2c: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7eeb2d: jmp 0x7eea32 */
  goto L_7eea32;
L_7eeb6b: /* 7eeb6b: mov eax, dword ptr [edi + 0x68] */
  eax = R32((uint32_t)(edi + 0x68u));
/* 7eeb6e: xor esi, esi */
  esi = 0;
/* 7eeb70: mov dword ptr [edi + 0x3f0c], esi */
  W32((uint32_t)(edi + 0x3f0cu), esi);
/* 7eeb76: mov dword ptr [edi + 0x3f10], esi */
  W32((uint32_t)(edi + 0x3f10u), esi);
/* 7eeb7c: mov ecx, dword ptr [eax + 0x44] */
  ecx = R32((uint32_t)(eax + 0x44u));
/* 7eeb7f: mov dword ptr [edi + 0x110], ecx */
  W32((uint32_t)(edi + 0x110u), ecx);
/* 7eeb85: mov edx, dword ptr [eax + 0x48] */
  edx = R32((uint32_t)(eax + 0x48u));
/* 7eeb88: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7eeb8b: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7eeb8e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7eeb8f: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7eeb92: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7eeb93: mov dword ptr [edi + 0x114], edx */
  W32((uint32_t)(edi + 0x114u), edx);
/* 7eeb99: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7eeb9d: call 0x6ccc39 */
  esp -= 4; W32(esp, 0x7eeba2u); SPILL(); f_6ccc39(); if (g_unwind) return; RELOAD();
/* 7eeba2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7eeba5: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7eeba8: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7eebaa: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 7eebae: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7eebb0: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
L_7eebb3: /* 7eebb3: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7eebb6: cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7eebb9: jge 0x7eee06 */
  if ((sf == of)) goto L_7eee06;
L_7eebbf: /* 7eebbf: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7eebc2: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7eebc5: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 7eebc8: mov esi, dword ptr [eax + 8] */
  esi = R32((uint32_t)(eax + 0x8u));
/* 7eebcb: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eebcd: je 0x7eebda */
  if (zf) goto L_7eebda;
L_7eebcf: /* 7eebcf: mov ecx, dword ptr [esi + 0x68] */
  ecx = R32((uint32_t)(esi + 0x68u));
/* 7eebd2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eebd4: je 0x7eee5c */
  if (zf) goto L_7eee5c;
L_7eebda: /* 7eebda: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 7eebdd: test byte ptr [ebx + 0x84], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x84u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7eebe4: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 7eebeb: jne 0x7eec3d */
  if (!zf) goto L_7eec3d;
L_7eebed: /* 7eebed: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eebef: je 0x7eec0a */
  if (zf) goto L_7eec0a;
L_7eebf1: /* 7eebf1: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7eebf4: mov eax, dword ptr [edx + 0x3c] */
  eax = R32((uint32_t)(edx + 0x3cu));
/* 7eebf7: fld qword ptr [eax + 0x44] */
  { double v = F64((uint32_t)(eax + 0x44u)); FPUSH(v); }
/* 7eebfa: fsub qword ptr [esi + 0x70] */
  ST0 = ST0 - (F64((uint32_t)(esi + 0x70u)));
/* 7eebfd: fcomp qword ptr [0xa0da58] */
  fpu_com(ST0, F64((uint32_t)(0xa0da58u)));
  FPOP();
/* 7eec03: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7eec05: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7eec08: jne 0x7eec3d */
  if (!zf) goto L_7eec3d;
L_7eec0a: /* 7eec0a: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7eec0d: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7eec0f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7eec12: mov eax, esp */
  eax = esp;
/* 7eec14: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7eec16: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 7eec19: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7eec1c: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7eec1f: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7eec22: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 7eec25: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7eec28: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7eec29: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7eec2a: mov ecx, ebx */
  ecx = ebx;
/* 7eec2c: call dword ptr [edx + 0xf8] */
  { uint32_t t = R32((uint32_t)(edx + 0xf8u)); esp -= 4; W32(esp, 0x7eec32u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7eec32: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eec34: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7eec37: jne 0x7eed5b */
  if (!zf) goto L_7eed5b;
L_7eec3d: /* 7eec3d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eec3f: je 0x7eee5c */
  if (zf) goto L_7eee5c;
L_7eec45: /* 7eec45: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7eec48: mov eax, dword ptr [edx + 0x3c] */
  eax = R32((uint32_t)(edx + 0x3cu));
/* 7eec4b: fld qword ptr [eax + 0x44] */
  { double v = F64((uint32_t)(eax + 0x44u)); FPUSH(v); }
/* 7eec4e: fsub qword ptr [esi + 0x70] */
  ST0 = ST0 - (F64((uint32_t)(esi + 0x70u)));
/* 7eec51: fld dword ptr [eax + 0x58] */
  { double v = F32((uint32_t)(eax + 0x58u)); FPUSH(v); }
/* 7eec54: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 7eec56: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7eec58: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7eec5b: je 0x7eed5b */
  if (zf) goto L_7eed5b;
L_7eec61: /* 7eec61: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7eec63: mov ecx, esi */
  ecx = esi;
/* 7eec65: call dword ptr [eax + 0x70] */
  { uint32_t t = R32((uint32_t)(eax + 0x70u)); esp -= 4; W32(esp, 0x7eec68u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7eec68: mov ecx, dword ptr [ebx + 0xd0] */
  ecx = R32((uint32_t)(ebx + 0xd0u));
/* 7eec6e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eec70: je 0x7eee5c */
  if (zf) goto L_7eee5c;
L_7eec76: /* 7eec76: push 0xce2798 */
  { uint32_t v = 0xce2798u; esp -= 4; W32(esp, v); }
/* 7eec7b: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7eec81u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7eec81: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eec83: je 0x7eee5c */
  if (zf) goto L_7eee5c;
L_7eec89: /* 7eec89: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
L_7eec90: /* 7eec90: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7eec93: cmp ecx, dword ptr [ebx + 0x200] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x200u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7eec99: jge 0x7eee5c */
  if ((sf == of)) goto L_7eee5c;
L_7eec9f: /* 7eec9f: mov edx, dword ptr [ebx + 0x1fc] */
  edx = R32((uint32_t)(ebx + 0x1fcu));
/* 7eeca5: mov edi, ecx */
  edi = ecx;
/* 7eeca7: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 7eecaa: mov eax, dword ptr [edi + edx] */
  eax = R32((uint32_t)(edi + edx));
/* 7eecad: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eecaf: je 0x7eed48 */
  if (zf) goto L_7eed48;
L_7eecb5: /* 7eecb5: test byte ptr [eax + 0x84], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x84u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7eecbc: jne 0x7eed48 */
  if (!zf) goto L_7eed48;
L_7eecc2: /* 7eecc2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7eecc4: lea ecx, [ebp - 0xa4] */
  ecx = (uint32_t)(ebp + 0xffffff5cu);
/* 7eecca: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7eecd0u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7eecd0: mov ecx, dword ptr [ebx + 0x1fc] */
  ecx = R32((uint32_t)(ebx + 0x1fcu));
/* 7eecd6: mov ecx, dword ptr [edi + ecx] */
  ecx = R32((uint32_t)(edi + ecx));
/* 7eecd9: lea eax, [ebp - 0xa4] */
  eax = (uint32_t)(ebp + 0xffffff5cu);
/* 7eecdf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7eece0: add ecx, 0xac */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xacu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7eece6: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x7eececu); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 7eecec: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eecee: je 0x7eed48 */
  if (zf) goto L_7eed48;
L_7eecf0: /* 7eecf0: mov esi, dword ptr [ebx + 0x1fc] */
  esi = R32((uint32_t)(ebx + 0x1fcu));
/* 7eecf6: mov ecx, dword ptr [esi + edi] */
  ecx = R32((uint32_t)(esi + edi));
/* 7eecf9: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7eecfb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eecfd: je 0x7eed07 */
  if (zf) goto L_7eed07;
L_7eecff: /* 7eecff: call dword ptr [0xcfa2b4] */
  esp -= 4; W32(esp, 0x7eed05u); SPILL(); f_4e39ae(); if (g_unwind) return; /* Core!?GetIndex@UObject@@QBEKXZ */ RELOAD();
/* 7eed05: jmp 0x7eed09 */
  goto L_7eed09;
L_7eed07: /* 7eed07: xor eax, eax */
  eax = 0;
L_7eed09: /* 7eed09: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7eed0c: mov edx, dword ptr [ecx + 0x3ee8] */
  edx = R32((uint32_t)(ecx + 0x3ee8u));
/* 7eed12: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 7eed13: and edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7eed15: mov eax, dword ptr [ecx + 0x3ee4] */
  eax = R32((uint32_t)(ecx + 0x3ee4u));
/* 7eed1b: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 7eed1e: mov edi, edi */
  edi = edi;
L_7eed20: /* 7eed20: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7eed23: je 0x7eed48 */
  if (zf) goto L_7eed48;
L_7eed25: /* 7eed25: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 7eed27: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 7eed2a: mov eax, dword ptr [ecx + 0x3ed8] */
  eax = R32((uint32_t)(ecx + 0x3ed8u));
/* 7eed30: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 7eed33: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7eed36: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7eed38: jne 0x7eed57 */
  if (!zf) goto L_7eed57;
L_7eed3a: /* 7eed3a: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7eed3d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eed3f: je 0x7eed48 */
  if (zf) goto L_7eed48;
L_7eed41: /* 7eed41: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7eed43: mov ecx, eax */
  ecx = eax;
/* 7eed45: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x7eed48u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7eed48: /* 7eed48: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7eed4b: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7eed4e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7eed4f: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7eed52: jmp 0x7eec90 */
  goto L_7eec90;
L_7eed57: /* 7eed57: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7eed59: jmp 0x7eed20 */
  goto L_7eed20;
L_7eed5b: /* 7eed5b: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 7eed60: mov ecx, dword ptr [0xce84f0] */
  ecx = R32((uint32_t)(0xce84f0u));
/* 7eed66: mov edx, dword ptr [eax + ecx*4] */
  edx = R32((uint32_t)(eax + ecx*4));
/* 7eed69: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7eed6a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eed6c: mov dword ptr [eax + ecx*4], edx */
  W32((uint32_t)(eax + ecx*4), edx);
/* 7eed6f: jne 0x7eedad */
  if (!zf) goto L_7eedad;
L_7eed71: /* 7eed71: mov ecx, ebx */
  ecx = ebx;
/* 7eed73: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7eed79u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7eed79: mov ecx, dword ptr [edi + 0xb4] */
  ecx = R32((uint32_t)(edi + 0xb4u));
/* 7eed7f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7eed81: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7eed82: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x7eed85u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7eed85: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7eed88: je 0x7eee5c */
  if (zf) goto L_7eee5c;
L_7eed8e: /* 7eed8e: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7eed90: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7eed92: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7eed94: mov ecx, edi */
  ecx = edi;
/* 7eed96: call 0x6c74cd */
  esp -= 4; W32(esp, 0x7eed9bu); SPILL(); f_6c74cd(); if (g_unwind) return; RELOAD();
/* 7eed9b: mov esi, eax */
  esi = eax;
/* 7eed9d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eed9f: je 0x7eee5c */
  if (zf) goto L_7eee5c;
L_7eeda5: /* 7eeda5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7eeda6: mov ecx, esi */
  ecx = esi;
/* 7eeda8: call 0x6c24eb */
  esp -= 4; W32(esp, 0x7eedadu); SPILL(); f_6c24eb(); if (g_unwind) return; RELOAD();
L_7eedad: /* 7eedad: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7eedaf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7eedb1: mov ecx, edi */
  ecx = edi;
/* 7eedb3: call dword ptr [eax + 0x8c] */
  { uint32_t t = R32((uint32_t)(eax + 0x8cu)); esp -= 4; W32(esp, 0x7eedb9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7eedb9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eedbb: je 0x7eee06 */
  if (zf) goto L_7eee06;
L_7eedbd: /* 7eedbd: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7eedc0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eedc2: je 0x7eeddf */
  if (zf) goto L_7eeddf;
L_7eedc4: /* 7eedc4: call dword ptr [0xcfa634] */
  esp -= 4; W32(esp, 0x7eedcau); SPILL(); f_4e1fc3(); if (g_unwind) return; /* Core!?appFrand@@YAMXZ */ RELOAD();
/* 7eedca: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 7eedcd: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 7eedd3: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7eedd6: mov edx, dword ptr [ecx + 0x3c] */
  edx = R32((uint32_t)(ecx + 0x3cu));
/* 7eedd9: fadd qword ptr [edx + 0x44] */
  ST0 = ST0 + (F64((uint32_t)(edx + 0x44u)));
/* 7eeddc: fstp qword ptr [esi + 0x70] */
  WF64((uint32_t)(esi + 0x70u), ST0); FPOP();
L_7eeddf: /* 7eeddf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7eede1: mov ecx, esi */
  ecx = esi;
/* 7eede3: call 0x6c1c62 */
  esp -= 4; W32(esp, 0x7eede8u); SPILL(); f_6c1c62(); if (g_unwind) return; RELOAD();
/* 7eede8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eedea: je 0x7eedf6 */
  if (zf) goto L_7eedf6;
L_7eedec: /* 7eedec: mov ecx, esi */
  ecx = esi;
/* 7eedee: call 0x6c8927 */
  esp -= 4; W32(esp, 0x7eedf3u); SPILL(); f_6c8927(); if (g_unwind) return; RELOAD();
/* 7eedf3: inc dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
L_7eedf6: /* 7eedf6: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7eedf8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7eedfa: mov ecx, edi */
  ecx = edi;
/* 7eedfc: call dword ptr [eax + 0x8c] */
  { uint32_t t = R32((uint32_t)(eax + 0x8cu)); esp -= 4; W32(esp, 0x7eee02u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7eee02: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eee04: jne 0x7eee5c */
  if (!zf) goto L_7eee5c;
L_7eee06: /* 7eee06: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 7eee09: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7eee10: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x7eee16u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 7eee16: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7eee18: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
L_7eee1b: /* 7eee1b: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7eee1e: jmp 0x7ee5dc */
  goto L_7ee5dc;
L_7eee5c: /* 7eee5c: inc dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 7eee5f: jmp 0x7eebb3 */
  goto L_7eebb3;
L_7eee9d: /* 7eee9d: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 7eeea0: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x7eeea6u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 7eeea6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7eeea9: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 7eeeac: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7eeead: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7eeeae: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7eeeb5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7eeeb6: mov esp, ebp */
  esp = ebp;
/* 7eeeb8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7eeeb9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7ee64d(void) {
  LOAD_REGS();
  goto L_7ee64d;
L_7ee5dc: /* 7ee5dc: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 7ee5dd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7ee5df: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 7ee5e2: jl 0x7eee9d */
  if ((sf != of)) goto L_7eee9d;
L_7ee5e8: /* 7ee5e8: mov ecx, dword ptr [ebx + 0x3c] */
  ecx = R32((uint32_t)(ebx + 0x3cu));
/* 7ee5eb: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7ee5ee: mov edi, dword ptr [edx + eax*4] */
  edi = R32((uint32_t)(edx + eax*4));
/* 7ee5f1: mov eax, dword ptr [edi + 0x3f08] */
  eax = R32((uint32_t)(edi + 0x3f08u));
/* 7ee5f7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ee5f9: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 7ee5fc: je 0x7eee1b */
  if (zf) goto L_7eee1b;
L_7ee602: /* 7ee602: mov esi, dword ptr [edi + 0x30] */
  esi = R32((uint32_t)(edi + 0x30u));
/* 7ee605: mov ecx, dword ptr [esi + 0xb0] */
  ecx = R32((uint32_t)(esi + 0xb0u));
/* 7ee60b: mov dword ptr [ecx + 0x550], esi */
  W32((uint32_t)(ecx + 0x550u), esi);
/* 7ee611: mov edx, dword ptr [esi + 0xb0] */
  edx = R32((uint32_t)(esi + 0xb0u));
/* 7ee617: mov ebx, eax */
  ebx = eax;
/* 7ee619: mov dword ptr [ebp - 0x40], ebx */
  W32((uint32_t)(ebp + 0xffffffc0u), ebx);
/* 7ee61c: mov dword ptr [ebp - 0x2c], esi */
  W32((uint32_t)(ebp + 0xffffffd4u), esi);
/* 7ee61f: mov dword ptr [edx + 0x554], ebx */
  W32((uint32_t)(edx + 0x554u), ebx);
/* 7ee625: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7ee627: mov eax, dword ptr [0xcfa538] */
  eax = R32((uint32_t)(0xcfa538u));
/* 7ee62c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ee62d: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 7ee630: call dword ptr [0xcfa534] */
  esp -= 4; W32(esp, 0x7ee636u); SPILL(); f_4e12d0(); if (g_unwind) return; /* Core!??0FMemMark@@QAE@AAVFMemStack@@@Z */ RELOAD();
/* 7ee636: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ee639: inc dword ptr [eax + 0x10c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x10cu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + 0x10cu), r);
  }
/* 7ee63f: inc dword ptr [edi + 0x11c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x11cu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(edi + 0x11cu), r);
  }
/* 7ee645: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7ee649: xor eax, eax */
  eax = 0;
/* 7ee64b: jmp 0x7ee650 */
  goto L_7ee650;
L_7ee64d: /* 7ee64d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7ee650: /* 7ee650: cmp eax, dword ptr [edi + 0x3ed0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x3ed0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ee656: jge 0x7ee673 */
  if ((sf == of)) goto L_7ee673;
L_7ee658: /* 7ee658: mov ecx, dword ptr [edi + 0x3ecc] */
  ecx = R32((uint32_t)(edi + 0x3eccu));
/* 7ee65e: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 7ee661: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ee664: mov ecx, dword ptr [ecx + 0x10c] */
  ecx = R32((uint32_t)(ecx + 0x10cu));
/* 7ee66a: mov dword ptr [edx + 0x94], ecx */
  W32((uint32_t)(edx + 0x94u), ecx);
/* 7ee670: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7ee671: jmp 0x7ee650 */
  goto L_7ee650;
L_7ee673: /* 7ee673: add ebx, 0x170 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 7ee679: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7ee67b: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 7ee67e: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 7ee681: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 7ee684: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* 7ee687: lea eax, [esi + 0x17c] */
  eax = (uint32_t)(esi + 0x17cu);
/* 7ee68d: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7ee68f: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 7ee692: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7ee695: mov dword ptr [ebp - 0xfc], edx */
  W32((uint32_t)(ebp + 0xffffff04u), edx);
/* 7ee69b: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 7ee69e: mov dword ptr [ebp - 0xf8], ecx */
  W32((uint32_t)(ebp + 0xffffff08u), ecx);
/* 7ee6a4: lea eax, [ebp - 0xfc] */
  eax = (uint32_t)(ebp + 0xffffff04u);
/* 7ee6aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ee6ab: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7ee6ae: mov dword ptr [ebp - 0xf4], edx */
  W32((uint32_t)(ebp + 0xffffff0cu), edx);
/* 7ee6b4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ee6b5: lea edx, [ebp - 0x40] */
  edx = (uint32_t)(ebp + 0xffffffc0u);
/* 7ee6b8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ee6b9: mov ecx, esi */
  ecx = esi;
/* 7ee6bb: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7ee6c2: call 0x6c204a */
  esp -= 4; W32(esp, 0x7ee6c7u); SPILL(); f_6c204a(); if (g_unwind) return; RELOAD();
/* 7ee6c7: mov ebx, dword ptr [ebp - 0x40] */
  ebx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 7ee6ca: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ee6cc: jne 0x7ee6e6 */
  if (!zf) goto L_7ee6e6;
L_7ee6ce: /* 7ee6ce: push 0x38d */
  { uint32_t v = 0x38du; esp -= 4; W32(esp, v); }
/* 7ee6d3: push 0xade780 */
  { uint32_t v = 0xade780u; esp -= 4; W32(esp, v); }
/* 7ee6d8: push 0xade790 */
  { uint32_t v = 0xade790u; esp -= 4; W32(esp, v); }
/* 7ee6dd: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7ee6e3u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7ee6e3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7ee6e6: /* 7ee6e6: mov eax, dword ptr [edi + 0x11c] */
  eax = R32((uint32_t)(edi + 0x11cu));
/* 7ee6ec: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ee6ee: je 0x7ee8a4 */
  if (zf) goto L_7ee8a4;
L_7ee6f4: /* 7ee6f4: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ee6f6: je 0x7ee700 */
  if (zf) goto L_7ee700;
L_7ee6f8: /* 7ee6f8: fld dword ptr [0xa11210] */
  { double v = F32((uint32_t)(0xa11210u)); FPUSH(v); }
/* 7ee6fe: jmp 0x7ee706 */
  goto L_7ee706;
L_7ee700: /* 7ee700: fld dword ptr [0xa0c18c] */
  { double v = F32((uint32_t)(0xa0c18cu)); FPUSH(v); }
L_7ee706: /* 7ee706: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7ee708: fmul dword ptr [ebx + 0x190] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x190u)));
/* 7ee70e: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 7ee710: fmul dword ptr [ebx + 0x18c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x18cu)));
/* 7ee716: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 7ee718: fmul dword ptr [ebx + 0x188] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x188u)));
/* 7ee71e: fstp dword ptr [ebp - 0x94] */
  WF32((uint32_t)(ebp + 0xffffff6cu), ST0); FPOP();
/* 7ee724: mov eax, dword ptr [ebp - 0x94] */
  eax = R32((uint32_t)(ebp + 0xffffff6cu));
/* 7ee72a: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* 7ee72d: mov eax, dword ptr [ebx + 0x5c] */
  eax = R32((uint32_t)(ebx + 0x5cu));
/* 7ee730: fstp dword ptr [ebp - 0x90] */
  WF32((uint32_t)(ebp + 0xffffff70u), ST0); FPOP();
/* 7ee736: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ee738: mov ecx, dword ptr [ebp - 0x90] */
  ecx = R32((uint32_t)(ebp + 0xffffff70u));
/* 7ee73e: fstp dword ptr [ebp - 0x8c] */
  WF32((uint32_t)(ebp + 0xffffff74u), ST0); FPOP();
/* 7ee744: mov edx, dword ptr [ebp - 0x8c] */
  edx = R32((uint32_t)(ebp + 0xffffff74u));
/* 7ee74a: mov dword ptr [ebp - 0x5c], ecx */
  W32((uint32_t)(ebp + 0xffffffa4u), ecx);
/* 7ee74d: mov dword ptr [ebp - 0x58], edx */
  W32((uint32_t)(ebp + 0xffffffa8u), edx);
/* 7ee750: je 0x7ee788 */
  if (zf) goto L_7ee788;
L_7ee752: /* 7ee752: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7ee754: fmul dword ptr [eax + 0x190] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x190u)));
/* 7ee75a: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7ee75d: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7ee75f: fmul dword ptr [eax + 0x18c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x18cu)));
/* 7ee765: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7ee768: fmul dword ptr [eax + 0x188] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x188u)));
/* 7ee76e: fadd dword ptr [ebp - 0x94] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff6cu)));
/* 7ee774: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 7ee777: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 7ee77a: fadd dword ptr [ebp - 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 7ee77d: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 7ee780: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 7ee783: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 7ee786: jmp 0x7ee78d */
  goto L_7ee78d;
L_7ee788: /* 7ee788: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7ee78a: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
L_7ee78d: /* 7ee78d: fadd dword ptr [ebp - 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 7ee790: xor esi, esi */
  esi = 0;
/* 7ee792: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 7ee795: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ee796: fadd dword ptr [ebp - 0x5c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa4u)));
/* 7ee799: mov dword ptr [ebp - 0xf0], esi */
  W32((uint32_t)(ebp + 0xffffff10u), esi);
/* 7ee79f: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 7ee7a2: mov dword ptr [ebp - 0xec], esi */
  W32((uint32_t)(ebp + 0xffffff14u), esi);
/* 7ee7a8: fadd dword ptr [ebp - 0x60] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 7ee7ab: mov dword ptr [ebp - 0xdc], esi */
  W32((uint32_t)(ebp + 0xffffff24u), esi);
/* 7ee7b1: mov dword ptr [ebp - 0xd8], esi */
  W32((uint32_t)(ebp + 0xffffff28u), esi);
/* 7ee7b7: mov dword ptr [ebp - 0xd4], esi */
  W32((uint32_t)(ebp + 0xffffff2cu), esi);
/* 7ee7bd: mov dword ptr [ebp - 0xd0], esi */
  W32((uint32_t)(ebp + 0xffffff30u), esi);
/* 7ee7c3: fstp dword ptr [ebp - 0x88] */
  WF32((uint32_t)(ebp + 0xffffff78u), ST0); FPOP();
/* 7ee7c9: mov eax, dword ptr [ebp - 0x88] */
  eax = R32((uint32_t)(ebp + 0xffffff78u));
/* 7ee7cf: mov dword ptr [ebp - 0xc4], esi */
  W32((uint32_t)(ebp + 0xffffff3cu), esi);
/* 7ee7d5: fstp dword ptr [ebp - 0x84] */
  WF32((uint32_t)(ebp + 0xffffff7cu), ST0); FPOP();
/* 7ee7db: mov edx, dword ptr [ebp - 0x84] */
  edx = R32((uint32_t)(ebp + 0xffffff7cu));
/* 7ee7e1: mov dword ptr [ebp - 0xb0], esi */
  W32((uint32_t)(ebp + 0xffffff50u), esi);
/* 7ee7e7: fstp dword ptr [ebp - 0x80] */
  WF32((uint32_t)(ebp + 0xffffff80u), ST0); FPOP();
/* 7ee7ea: mov ecx, dword ptr [ebp - 0x80] */
  ecx = R32((uint32_t)(ebp + 0xffffff80u));
/* 7ee7ed: mov dword ptr [ebp - 0xac], esi */
  W32((uint32_t)(ebp + 0xffffff54u), esi);
/* 7ee7f3: mov dword ptr [ebp - 0xa8], esi */
  W32((uint32_t)(ebp + 0xffffff58u), esi);
/* 7ee7f9: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7ee7fb: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ee7fe: mov dword ptr [ebp - 0xe8], eax */
  W32((uint32_t)(ebp + 0xffffff18u), eax);
/* 7ee804: mov dword ptr [ebp - 0xe4], edx */
  W32((uint32_t)(ebp + 0xffffff1cu), edx);
/* 7ee80a: mov dword ptr [ebp - 0xcc], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff34u), 0x3f800000u);
/* 7ee814: mov dword ptr [ebp - 0xc8], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff38u), 0xffffffffu);
/* 7ee81e: mov dword ptr [ebp - 0xe0], ecx */
  W32((uint32_t)(ebp + 0xffffff20u), ecx);
/* 7ee824: mov ecx, dword ptr [ebx + 0xb4] */
  ecx = R32((uint32_t)(ebx + 0xb4u));
/* 7ee82a: mov ebx, dword ptr [ebp - 0xb0] */
  ebx = R32((uint32_t)(ebp + 0xffffff50u));
/* 7ee830: mov ecx, dword ptr [ecx + 0x8c] */
  ecx = R32((uint32_t)(ecx + 0x8cu));
/* 7ee836: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 7ee838: mov esi, esp */
  esi = esp;
/* 7ee83a: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
/* 7ee83c: mov ebx, dword ptr [ebp - 0xac] */
  ebx = R32((uint32_t)(ebp + 0xffffff54u));
/* 7ee842: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 7ee845: mov ebx, dword ptr [ebp - 0xa8] */
  ebx = R32((uint32_t)(ebp + 0xffffff58u));
/* 7ee84b: mov dword ptr [esi + 8], ebx */
  W32((uint32_t)(esi + 0x8u), ebx);
/* 7ee84e: mov ebx, dword ptr [ebp - 0x38] */
  ebx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7ee851: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ee854: mov esi, esp */
  esi = esp;
/* 7ee856: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
/* 7ee858: mov ebx, dword ptr [ebp - 0x34] */
  ebx = R32((uint32_t)(ebp + 0xffffffccu));
/* 7ee85b: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 7ee85e: mov ebx, dword ptr [ebp - 0x30] */
  ebx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7ee861: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ee864: mov dword ptr [esi + 8], ebx */
  W32((uint32_t)(esi + 0x8u), ebx);
/* 7ee867: mov esi, esp */
  esi = esp;
/* 7ee869: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 7ee86b: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 7ee86e: mov edx, dword ptr [ebp - 0x80] */
  edx = R32((uint32_t)(ebp + 0xffffff80u));
/* 7ee871: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ee873: lea eax, [ebp - 0xf0] */
  eax = (uint32_t)(ebp + 0xffffff10u);
/* 7ee879: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ee87a: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 7ee87d: call dword ptr [edi + 0x6c] */
  { uint32_t t = R32((uint32_t)(edi + 0x6cu)); esp -= 4; W32(esp, 0x7ee880u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ee880: mov ecx, dword ptr [ebp - 0xe8] */
  ecx = R32((uint32_t)(ebp + 0xffffff18u));
/* 7ee886: mov edx, dword ptr [ebp - 0xe4] */
  edx = R32((uint32_t)(ebp + 0xffffff1cu));
/* 7ee88c: mov eax, dword ptr [ebp - 0xe0] */
  eax = R32((uint32_t)(ebp + 0xffffff20u));
/* 7ee892: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7ee895: mov ebx, dword ptr [ebp - 0x40] */
  ebx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 7ee898: mov esi, dword ptr [ebp - 0x2c] */
  esi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7ee89b: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 7ee89e: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 7ee8a1: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
L_7ee8a4: /* 7ee8a4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ee8a7: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 7ee8aa: sub eax, dword ptr [ecx + 0x108] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x108u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7ee8b0: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7ee8b3: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 7ee8b6: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 7ee8b9: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7ee8bb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ee8bc: mov ecx, dword ptr [0xcfa538] */
  ecx = R32((uint32_t)(0xcfa538u));
/* 7ee8c2: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 7ee8c9: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x7ee8cfu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 7ee8cf: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ee8d2: mov edx, dword ptr [ecx + 0x108] */
  edx = R32((uint32_t)(ecx + 0x108u));
/* 7ee8d8: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7ee8db: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 7ee8de: mov ecx, dword ptr [0xcfa538] */
  ecx = R32((uint32_t)(0xcfa538u));
/* 7ee8e4: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7ee8e6: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7ee8e9: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7ee8eb: lea edx, [eax*4] */
  edx = (uint32_t)(eax*4);
/* 7ee8f2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ee8f3: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x7ee8f9u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 7ee8f9: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 7ee8fc: add ebx, 0x170 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 7ee902: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 7ee904: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 7ee907: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* 7ee90a: mov dword ptr [ebp - 0xc0], eax */
  W32((uint32_t)(ebp + 0xffffff40u), eax);
/* 7ee910: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* 7ee913: mov dword ptr [ebp - 0xbc], ecx */
  W32((uint32_t)(ebp + 0xffffff44u), ecx);
/* 7ee919: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ee91a: lea ecx, [esi + 0x17c] */
  ecx = (uint32_t)(esi + 0x17cu);
/* 7ee920: mov dword ptr [ebp - 0xb8], edx */
  W32((uint32_t)(ebp + 0xffffff48u), edx);
/* 7ee926: call dword ptr [0xcfa7dc] */
  esp -= 4; W32(esp, 0x7ee92cu); SPILL(); f_4e30a8(); if (g_unwind) return; /* Core!?Vector@FRotator@@QAE?AVFVector@@XZ */ RELOAD();
/* 7ee92c: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7ee930: xor ebx, ebx */
  ebx = 0;
L_7ee932: /* 7ee932: cmp ebx, dword ptr [ebp - 0x3c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ee935: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 7ee938: jge 0x7eea30 */
  if ((sf == of)) goto L_7eea30;
L_7ee93e: /* 7ee93e: mov ecx, dword ptr [ebp - 0x7c] */
  ecx = R32((uint32_t)(ebp + 0xffffff84u));
/* 7ee941: mov esi, dword ptr [ecx + ebx*4] */
  esi = R32((uint32_t)(ecx + ebx*4));
/* 7ee944: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ee947: mov edx, dword ptr [esi + 0x94] */
  edx = R32((uint32_t)(esi + 0x94u));
/* 7ee94d: cmp edx, dword ptr [eax + 0x10c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x10cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ee953: je 0x7eea2a */
  if (zf) goto L_7eea2a;
L_7ee959: /* 7ee959: mov ecx, esi */
  ecx = esi;
/* 7ee95b: call dword ptr [0xcfa2b4] */
  esp -= 4; W32(esp, 0x7ee961u); SPILL(); f_4e39ae(); if (g_unwind) return; /* Core!?GetIndex@UObject@@QBEKXZ */ RELOAD();
/* 7ee961: mov ecx, dword ptr [edi + 0x3ee8] */
  ecx = R32((uint32_t)(edi + 0x3ee8u));
/* 7ee967: mov edx, dword ptr [edi + 0x3ee4] */
  edx = R32((uint32_t)(edi + 0x3ee4u));
/* 7ee96d: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 7ee96e: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7ee970: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
L_7ee973: /* 7ee973: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ee976: je 0x7ee992 */
  if (zf) goto L_7ee992;
L_7ee978: /* 7ee978: mov ecx, dword ptr [edi + 0x3ed8] */
  ecx = R32((uint32_t)(edi + 0x3ed8u));
/* 7ee97e: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 7ee981: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 7ee984: cmp dword ptr [eax + 4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ee987: jne 0x7ee98e */
  if (!zf) goto L_7ee98e;
L_7ee989: /* 7ee989: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7ee98c: jmp 0x7ee994 */
  goto L_7ee994;
L_7ee98e: /* 7ee98e: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7ee990: jmp 0x7ee973 */
  goto L_7ee973;
L_7ee992: /* 7ee992: xor eax, eax */
  eax = 0;
L_7ee994: /* 7ee994: test byte ptr [esi + 0x84], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x84u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ee99b: je 0x7ee9d7 */
  if (zf) goto L_7ee9d7;
L_7ee99d: /* 7ee99d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ee99f: je 0x7ee9d7 */
  if (zf) goto L_7ee9d7;
L_7ee9a1: /* 7ee9a1: mov ecx, dword ptr [eax + 0x8c] */
  ecx = R32((uint32_t)(eax + 0x8cu));
/* 7ee9a7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ee9a9: jne 0x7ee9d7 */
  if (!zf) goto L_7ee9d7;
L_7ee9ab: /* 7ee9ab: mov ecx, dword ptr [eax + 0x9c] */
  ecx = R32((uint32_t)(eax + 0x9cu));
/* 7ee9b1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ee9b3: je 0x7ee9d7 */
  if (zf) goto L_7ee9d7;
L_7ee9b5: /* 7ee9b5: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 7ee9bb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ee9bd: jne 0x7ee9d7 */
  if (!zf) goto L_7ee9d7;
L_7ee9bf: /* 7ee9bf: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ee9c2: mov ecx, dword ptr [edx + 0x3c] */
  ecx = R32((uint32_t)(edx + 0x3cu));
/* 7ee9c5: mov edx, dword ptr [ecx + 0x44] */
  edx = R32((uint32_t)(ecx + 0x44u));
/* 7ee9c8: mov dword ptr [eax + 0x70], edx */
  W32((uint32_t)(eax + 0x70u), edx);
/* 7ee9cb: mov ecx, dword ptr [ecx + 0x48] */
  ecx = R32((uint32_t)(ecx + 0x48u));
/* 7ee9ce: mov dword ptr [eax + 0x74], ecx */
  W32((uint32_t)(eax + 0x74u), ecx);
/* 7ee9d1: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7ee9d2: jmp 0x7ee932 */
  goto L_7ee932;
L_7ee9d7: /* 7ee9d7: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ee9da: mov ecx, dword ptr [edx + 0x10c] */
  ecx = R32((uint32_t)(edx + 0x10cu));
/* 7ee9e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ee9e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ee9e2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ee9e3: lea edx, [ebp - 0x54] */
  edx = (uint32_t)(ebp + 0xffffffacu);
/* 7ee9e6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ee9e7: lea eax, [ebp - 0xc0] */
  eax = (uint32_t)(ebp + 0xffffff40u);
/* 7ee9ed: mov dword ptr [esi + 0x94], ecx */
  W32((uint32_t)(esi + 0x94u), ecx);
/* 7ee9f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ee9f4: lea ecx, [ebp - 0x118] */
  ecx = (uint32_t)(ebp + 0xfffffee8u);
/* 7ee9fa: call 0x6c3a30 */
  esp -= 4; W32(esp, 0x7ee9ffu); SPILL(); f_6c3a30(); if (g_unwind) return; RELOAD();
/* 7ee9ff: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7eea02: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 7eea04: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7eea07: lea ecx, [edx + edx*2] */
  ecx = (uint32_t)(edx + edx*2);
/* 7eea0a: lea ecx, [esi + ecx*4] */
  ecx = (uint32_t)(esi + ecx*4);
/* 7eea0d: mov esi, ecx */
  esi = ecx;
/* 7eea0f: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
/* 7eea11: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 7eea14: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 7eea17: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7eea1a: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7eea1d: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 7eea20: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7eea23: mov dword ptr [eax + edx*4], ecx */
  W32((uint32_t)(eax + edx*4), ecx);
/* 7eea26: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7eea27: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
L_7eea2a: /* 7eea2a: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7eea2b: jmp 0x7ee932 */
  goto L_7ee932;
L_7eea30: /* 7eea30: xor ebx, ebx */
  ebx = 0;
L_7eea32: /* 7eea32: cmp ebx, dword ptr [edi + 0x3f10] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x3f10u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7eea38: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 7eea3b: jge 0x7eeb6b */
  if ((sf == of)) goto L_7eeb6b;
L_7eea41: /* 7eea41: mov ecx, dword ptr [edi + 0x3f0c] */
  ecx = R32((uint32_t)(edi + 0x3f0cu));
/* 7eea47: mov esi, dword ptr [ecx + ebx*4] */
  esi = R32((uint32_t)(ecx + ebx*4));
/* 7eea4a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7eea4d: mov edx, dword ptr [esi + 0x94] */
  edx = R32((uint32_t)(esi + 0x94u));
/* 7eea53: cmp edx, dword ptr [eax + 0x10c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x10cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7eea59: je 0x7eead3 */
  if (zf) goto L_7eead3;
L_7eea5b: /* 7eea5b: mov ecx, esi */
  ecx = esi;
/* 7eea5d: call dword ptr [0xcfa2b4] */
  esp -= 4; W32(esp, 0x7eea63u); SPILL(); f_4e39ae(); if (g_unwind) return; /* Core!?GetIndex@UObject@@QBEKXZ */ RELOAD();
/* 7eea63: mov ecx, dword ptr [edi + 0x3ee8] */
  ecx = R32((uint32_t)(edi + 0x3ee8u));
/* 7eea69: mov edx, dword ptr [edi + 0x3ee4] */
  edx = R32((uint32_t)(edi + 0x3ee4u));
/* 7eea6f: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 7eea70: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7eea72: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
L_7eea75: /* 7eea75: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7eea78: je 0x7eea94 */
  if (zf) goto L_7eea94;
L_7eea7a: /* 7eea7a: mov ecx, dword ptr [edi + 0x3ed8] */
  ecx = R32((uint32_t)(edi + 0x3ed8u));
/* 7eea80: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 7eea83: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 7eea86: cmp dword ptr [eax + 4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7eea89: jne 0x7eea90 */
  if (!zf) goto L_7eea90;
L_7eea8b: /* 7eea8b: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7eea8e: jmp 0x7eea96 */
  goto L_7eea96;
L_7eea90: /* 7eea90: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7eea92: jmp 0x7eea75 */
  goto L_7eea75;
L_7eea94: /* 7eea94: xor eax, eax */
  eax = 0;
L_7eea96: /* 7eea96: test byte ptr [esi + 0x84], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x84u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7eea9d: je 0x7eead9 */
  if (zf) goto L_7eead9;
L_7eea9f: /* 7eea9f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eeaa1: je 0x7eead9 */
  if (zf) goto L_7eead9;
L_7eeaa3: /* 7eeaa3: mov ecx, dword ptr [eax + 0x8c] */
  ecx = R32((uint32_t)(eax + 0x8cu));
/* 7eeaa9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eeaab: jne 0x7eead9 */
  if (!zf) goto L_7eead9;
L_7eeaad: /* 7eeaad: mov ecx, dword ptr [eax + 0x9c] */
  ecx = R32((uint32_t)(eax + 0x9cu));
/* 7eeab3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eeab5: je 0x7eead9 */
  if (zf) goto L_7eead9;
L_7eeab7: /* 7eeab7: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 7eeabd: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eeabf: jne 0x7eead9 */
  if (!zf) goto L_7eead9;
L_7eeac1: /* 7eeac1: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7eeac4: mov ecx, dword ptr [edx + 0x3c] */
  ecx = R32((uint32_t)(edx + 0x3cu));
/* 7eeac7: mov edx, dword ptr [ecx + 0x44] */
  edx = R32((uint32_t)(ecx + 0x44u));
/* 7eeaca: mov dword ptr [eax + 0x70], edx */
  W32((uint32_t)(eax + 0x70u), edx);
/* 7eeacd: mov ecx, dword ptr [ecx + 0x48] */
  ecx = R32((uint32_t)(ecx + 0x48u));
/* 7eead0: mov dword ptr [eax + 0x74], ecx */
  W32((uint32_t)(eax + 0x74u), ecx);
L_7eead3: /* 7eead3: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7eead4: jmp 0x7eea32 */
  goto L_7eea32;
L_7eead9: /* 7eead9: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7eeadc: mov ecx, dword ptr [edx + 0x10c] */
  ecx = R32((uint32_t)(edx + 0x10cu));
/* 7eeae2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7eeae3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7eeae4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7eeae5: lea edx, [ebp - 0x54] */
  edx = (uint32_t)(ebp + 0xffffffacu);
/* 7eeae8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7eeae9: lea eax, [ebp - 0xc0] */
  eax = (uint32_t)(ebp + 0xffffff40u);
/* 7eeaef: mov dword ptr [esi + 0x94], ecx */
  W32((uint32_t)(esi + 0x94u), ecx);
/* 7eeaf5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7eeaf6: lea ecx, [ebp - 0x124] */
  ecx = (uint32_t)(ebp + 0xfffffedcu);
/* 7eeafc: call 0x6c3a30 */
  esp -= 4; W32(esp, 0x7eeb01u); SPILL(); f_6c3a30(); if (g_unwind) return; RELOAD();
/* 7eeb01: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7eeb04: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 7eeb06: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7eeb09: lea ecx, [edx + edx*2] */
  ecx = (uint32_t)(edx + edx*2);
/* 7eeb0c: lea ecx, [esi + ecx*4] */
  ecx = (uint32_t)(esi + ecx*4);
/* 7eeb0f: mov esi, ecx */
  esi = ecx;
/* 7eeb11: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
/* 7eeb13: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 7eeb16: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 7eeb19: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7eeb1c: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7eeb1f: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 7eeb22: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7eeb25: mov dword ptr [eax + edx*4], ecx */
  W32((uint32_t)(eax + edx*4), ecx);
/* 7eeb28: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7eeb29: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 7eeb2c: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7eeb2d: jmp 0x7eea32 */
  goto L_7eea32;
L_7eeb6b: /* 7eeb6b: mov eax, dword ptr [edi + 0x68] */
  eax = R32((uint32_t)(edi + 0x68u));
/* 7eeb6e: xor esi, esi */
  esi = 0;
/* 7eeb70: mov dword ptr [edi + 0x3f0c], esi */
  W32((uint32_t)(edi + 0x3f0cu), esi);
/* 7eeb76: mov dword ptr [edi + 0x3f10], esi */
  W32((uint32_t)(edi + 0x3f10u), esi);
/* 7eeb7c: mov ecx, dword ptr [eax + 0x44] */
  ecx = R32((uint32_t)(eax + 0x44u));
/* 7eeb7f: mov dword ptr [edi + 0x110], ecx */
  W32((uint32_t)(edi + 0x110u), ecx);
/* 7eeb85: mov edx, dword ptr [eax + 0x48] */
  edx = R32((uint32_t)(eax + 0x48u));
/* 7eeb88: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7eeb8b: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7eeb8e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7eeb8f: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7eeb92: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7eeb93: mov dword ptr [edi + 0x114], edx */
  W32((uint32_t)(edi + 0x114u), edx);
/* 7eeb99: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7eeb9d: call 0x6ccc39 */
  esp -= 4; W32(esp, 0x7eeba2u); SPILL(); f_6ccc39(); if (g_unwind) return; RELOAD();
/* 7eeba2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7eeba5: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7eeba8: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7eebaa: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 7eebae: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7eebb0: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
L_7eebb3: /* 7eebb3: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7eebb6: cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7eebb9: jge 0x7eee06 */
  if ((sf == of)) goto L_7eee06;
L_7eebbf: /* 7eebbf: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7eebc2: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7eebc5: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 7eebc8: mov esi, dword ptr [eax + 8] */
  esi = R32((uint32_t)(eax + 0x8u));
/* 7eebcb: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eebcd: je 0x7eebda */
  if (zf) goto L_7eebda;
L_7eebcf: /* 7eebcf: mov ecx, dword ptr [esi + 0x68] */
  ecx = R32((uint32_t)(esi + 0x68u));
/* 7eebd2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eebd4: je 0x7eee5c */
  if (zf) goto L_7eee5c;
L_7eebda: /* 7eebda: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 7eebdd: test byte ptr [ebx + 0x84], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x84u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7eebe4: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 7eebeb: jne 0x7eec3d */
  if (!zf) goto L_7eec3d;
L_7eebed: /* 7eebed: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eebef: je 0x7eec0a */
  if (zf) goto L_7eec0a;
L_7eebf1: /* 7eebf1: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7eebf4: mov eax, dword ptr [edx + 0x3c] */
  eax = R32((uint32_t)(edx + 0x3cu));
/* 7eebf7: fld qword ptr [eax + 0x44] */
  { double v = F64((uint32_t)(eax + 0x44u)); FPUSH(v); }
/* 7eebfa: fsub qword ptr [esi + 0x70] */
  ST0 = ST0 - (F64((uint32_t)(esi + 0x70u)));
/* 7eebfd: fcomp qword ptr [0xa0da58] */
  fpu_com(ST0, F64((uint32_t)(0xa0da58u)));
  FPOP();
/* 7eec03: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7eec05: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7eec08: jne 0x7eec3d */
  if (!zf) goto L_7eec3d;
L_7eec0a: /* 7eec0a: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7eec0d: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7eec0f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7eec12: mov eax, esp */
  eax = esp;
/* 7eec14: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7eec16: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 7eec19: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7eec1c: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7eec1f: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7eec22: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 7eec25: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7eec28: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7eec29: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7eec2a: mov ecx, ebx */
  ecx = ebx;
/* 7eec2c: call dword ptr [edx + 0xf8] */
  { uint32_t t = R32((uint32_t)(edx + 0xf8u)); esp -= 4; W32(esp, 0x7eec32u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7eec32: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eec34: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7eec37: jne 0x7eed5b */
  if (!zf) goto L_7eed5b;
L_7eec3d: /* 7eec3d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eec3f: je 0x7eee5c */
  if (zf) goto L_7eee5c;
L_7eec45: /* 7eec45: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7eec48: mov eax, dword ptr [edx + 0x3c] */
  eax = R32((uint32_t)(edx + 0x3cu));
/* 7eec4b: fld qword ptr [eax + 0x44] */
  { double v = F64((uint32_t)(eax + 0x44u)); FPUSH(v); }
/* 7eec4e: fsub qword ptr [esi + 0x70] */
  ST0 = ST0 - (F64((uint32_t)(esi + 0x70u)));
/* 7eec51: fld dword ptr [eax + 0x58] */
  { double v = F32((uint32_t)(eax + 0x58u)); FPUSH(v); }
/* 7eec54: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 7eec56: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7eec58: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7eec5b: je 0x7eed5b */
  if (zf) goto L_7eed5b;
L_7eec61: /* 7eec61: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7eec63: mov ecx, esi */
  ecx = esi;
/* 7eec65: call dword ptr [eax + 0x70] */
  { uint32_t t = R32((uint32_t)(eax + 0x70u)); esp -= 4; W32(esp, 0x7eec68u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7eec68: mov ecx, dword ptr [ebx + 0xd0] */
  ecx = R32((uint32_t)(ebx + 0xd0u));
/* 7eec6e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eec70: je 0x7eee5c */
  if (zf) goto L_7eee5c;
L_7eec76: /* 7eec76: push 0xce2798 */
  { uint32_t v = 0xce2798u; esp -= 4; W32(esp, v); }
/* 7eec7b: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7eec81u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7eec81: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eec83: je 0x7eee5c */
  if (zf) goto L_7eee5c;
L_7eec89: /* 7eec89: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
L_7eec90: /* 7eec90: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7eec93: cmp ecx, dword ptr [ebx + 0x200] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x200u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7eec99: jge 0x7eee5c */
  if ((sf == of)) goto L_7eee5c;
L_7eec9f: /* 7eec9f: mov edx, dword ptr [ebx + 0x1fc] */
  edx = R32((uint32_t)(ebx + 0x1fcu));
/* 7eeca5: mov edi, ecx */
  edi = ecx;
/* 7eeca7: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 7eecaa: mov eax, dword ptr [edi + edx] */
  eax = R32((uint32_t)(edi + edx));
/* 7eecad: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eecaf: je 0x7eed48 */
  if (zf) goto L_7eed48;
L_7eecb5: /* 7eecb5: test byte ptr [eax + 0x84], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x84u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7eecbc: jne 0x7eed48 */
  if (!zf) goto L_7eed48;
L_7eecc2: /* 7eecc2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7eecc4: lea ecx, [ebp - 0xa4] */
  ecx = (uint32_t)(ebp + 0xffffff5cu);
/* 7eecca: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7eecd0u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7eecd0: mov ecx, dword ptr [ebx + 0x1fc] */
  ecx = R32((uint32_t)(ebx + 0x1fcu));
/* 7eecd6: mov ecx, dword ptr [edi + ecx] */
  ecx = R32((uint32_t)(edi + ecx));
/* 7eecd9: lea eax, [ebp - 0xa4] */
  eax = (uint32_t)(ebp + 0xffffff5cu);
/* 7eecdf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7eece0: add ecx, 0xac */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xacu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7eece6: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x7eececu); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 7eecec: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eecee: je 0x7eed48 */
  if (zf) goto L_7eed48;
L_7eecf0: /* 7eecf0: mov esi, dword ptr [ebx + 0x1fc] */
  esi = R32((uint32_t)(ebx + 0x1fcu));
/* 7eecf6: mov ecx, dword ptr [esi + edi] */
  ecx = R32((uint32_t)(esi + edi));
/* 7eecf9: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7eecfb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eecfd: je 0x7eed07 */
  if (zf) goto L_7eed07;
L_7eecff: /* 7eecff: call dword ptr [0xcfa2b4] */
  esp -= 4; W32(esp, 0x7eed05u); SPILL(); f_4e39ae(); if (g_unwind) return; /* Core!?GetIndex@UObject@@QBEKXZ */ RELOAD();
/* 7eed05: jmp 0x7eed09 */
  goto L_7eed09;
L_7eed07: /* 7eed07: xor eax, eax */
  eax = 0;
L_7eed09: /* 7eed09: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7eed0c: mov edx, dword ptr [ecx + 0x3ee8] */
  edx = R32((uint32_t)(ecx + 0x3ee8u));
/* 7eed12: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 7eed13: and edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7eed15: mov eax, dword ptr [ecx + 0x3ee4] */
  eax = R32((uint32_t)(ecx + 0x3ee4u));
/* 7eed1b: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 7eed1e: mov edi, edi */
  edi = edi;
L_7eed20: /* 7eed20: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7eed23: je 0x7eed48 */
  if (zf) goto L_7eed48;
L_7eed25: /* 7eed25: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 7eed27: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 7eed2a: mov eax, dword ptr [ecx + 0x3ed8] */
  eax = R32((uint32_t)(ecx + 0x3ed8u));
/* 7eed30: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 7eed33: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7eed36: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7eed38: jne 0x7eed57 */
  if (!zf) goto L_7eed57;
L_7eed3a: /* 7eed3a: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7eed3d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eed3f: je 0x7eed48 */
  if (zf) goto L_7eed48;
L_7eed41: /* 7eed41: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7eed43: mov ecx, eax */
  ecx = eax;
/* 7eed45: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x7eed48u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7eed48: /* 7eed48: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7eed4b: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7eed4e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7eed4f: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7eed52: jmp 0x7eec90 */
  goto L_7eec90;
L_7eed57: /* 7eed57: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7eed59: jmp 0x7eed20 */
  goto L_7eed20;
L_7eed5b: /* 7eed5b: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 7eed60: mov ecx, dword ptr [0xce84f0] */
  ecx = R32((uint32_t)(0xce84f0u));
/* 7eed66: mov edx, dword ptr [eax + ecx*4] */
  edx = R32((uint32_t)(eax + ecx*4));
/* 7eed69: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7eed6a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eed6c: mov dword ptr [eax + ecx*4], edx */
  W32((uint32_t)(eax + ecx*4), edx);
/* 7eed6f: jne 0x7eedad */
  if (!zf) goto L_7eedad;
L_7eed71: /* 7eed71: mov ecx, ebx */
  ecx = ebx;
/* 7eed73: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7eed79u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7eed79: mov ecx, dword ptr [edi + 0xb4] */
  ecx = R32((uint32_t)(edi + 0xb4u));
/* 7eed7f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7eed81: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7eed82: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x7eed85u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7eed85: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7eed88: je 0x7eee5c */
  if (zf) goto L_7eee5c;
L_7eed8e: /* 7eed8e: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7eed90: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7eed92: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7eed94: mov ecx, edi */
  ecx = edi;
/* 7eed96: call 0x6c74cd */
  esp -= 4; W32(esp, 0x7eed9bu); SPILL(); f_6c74cd(); if (g_unwind) return; RELOAD();
/* 7eed9b: mov esi, eax */
  esi = eax;
/* 7eed9d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eed9f: je 0x7eee5c */
  if (zf) goto L_7eee5c;
L_7eeda5: /* 7eeda5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7eeda6: mov ecx, esi */
  ecx = esi;
/* 7eeda8: call 0x6c24eb */
  esp -= 4; W32(esp, 0x7eedadu); SPILL(); f_6c24eb(); if (g_unwind) return; RELOAD();
L_7eedad: /* 7eedad: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7eedaf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7eedb1: mov ecx, edi */
  ecx = edi;
/* 7eedb3: call dword ptr [eax + 0x8c] */
  { uint32_t t = R32((uint32_t)(eax + 0x8cu)); esp -= 4; W32(esp, 0x7eedb9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7eedb9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eedbb: je 0x7eee06 */
  if (zf) goto L_7eee06;
L_7eedbd: /* 7eedbd: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7eedc0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eedc2: je 0x7eeddf */
  if (zf) goto L_7eeddf;
L_7eedc4: /* 7eedc4: call dword ptr [0xcfa634] */
  esp -= 4; W32(esp, 0x7eedcau); SPILL(); f_4e1fc3(); if (g_unwind) return; /* Core!?appFrand@@YAMXZ */ RELOAD();
/* 7eedca: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 7eedcd: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 7eedd3: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7eedd6: mov edx, dword ptr [ecx + 0x3c] */
  edx = R32((uint32_t)(ecx + 0x3cu));
/* 7eedd9: fadd qword ptr [edx + 0x44] */
  ST0 = ST0 + (F64((uint32_t)(edx + 0x44u)));
/* 7eeddc: fstp qword ptr [esi + 0x70] */
  WF64((uint32_t)(esi + 0x70u), ST0); FPOP();
L_7eeddf: /* 7eeddf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7eede1: mov ecx, esi */
  ecx = esi;
/* 7eede3: call 0x6c1c62 */
  esp -= 4; W32(esp, 0x7eede8u); SPILL(); f_6c1c62(); if (g_unwind) return; RELOAD();
/* 7eede8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eedea: je 0x7eedf6 */
  if (zf) goto L_7eedf6;
L_7eedec: /* 7eedec: mov ecx, esi */
  ecx = esi;
/* 7eedee: call 0x6c8927 */
  esp -= 4; W32(esp, 0x7eedf3u); SPILL(); f_6c8927(); if (g_unwind) return; RELOAD();
/* 7eedf3: inc dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
L_7eedf6: /* 7eedf6: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7eedf8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7eedfa: mov ecx, edi */
  ecx = edi;
/* 7eedfc: call dword ptr [eax + 0x8c] */
  { uint32_t t = R32((uint32_t)(eax + 0x8cu)); esp -= 4; W32(esp, 0x7eee02u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7eee02: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eee04: jne 0x7eee5c */
  if (!zf) goto L_7eee5c;
L_7eee06: /* 7eee06: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 7eee09: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7eee10: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x7eee16u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 7eee16: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7eee18: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
L_7eee1b: /* 7eee1b: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7eee1e: jmp 0x7ee5dc */
  goto L_7ee5dc;
L_7eee5c: /* 7eee5c: inc dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 7eee5f: jmp 0x7eebb3 */
  goto L_7eebb3;
L_7eee9d: /* 7eee9d: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 7eeea0: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x7eeea6u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 7eeea6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7eeea9: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 7eeeac: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7eeead: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7eeeae: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7eeeb5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7eeeb6: mov esp, ebp */
  esp = ebp;
/* 7eeeb8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7eeeb9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7eeb32(void) {
  LOAD_REGS();
L_7eeb32: /* 7eeb32: mov ecx, dword ptr [ebp - 0x108] */
  ecx = R32((uint32_t)(ebp + 0xfffffef8u));
/* 7eeb38: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7eeb3d: lea edx, [ebp - 0xa0] */
  edx = (uint32_t)(ebp + 0xffffff60u);
/* 7eeb43: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7eeb44: mov dword ptr [ebp - 0xa0], ecx */
  W32((uint32_t)(ebp + 0xffffff60u), ecx);
/* 7eeb4a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7eeb4fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7eeb4f(); return;
}

void f_7eeb4f(void) {
  LOAD_REGS();
  goto L_7eeb4f;
L_7ee5dc: /* 7ee5dc: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 7ee5dd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7ee5df: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 7ee5e2: jl 0x7eee9d */
  if ((sf != of)) goto L_7eee9d;
L_7ee5e8: /* 7ee5e8: mov ecx, dword ptr [ebx + 0x3c] */
  ecx = R32((uint32_t)(ebx + 0x3cu));
/* 7ee5eb: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7ee5ee: mov edi, dword ptr [edx + eax*4] */
  edi = R32((uint32_t)(edx + eax*4));
/* 7ee5f1: mov eax, dword ptr [edi + 0x3f08] */
  eax = R32((uint32_t)(edi + 0x3f08u));
/* 7ee5f7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ee5f9: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 7ee5fc: je 0x7eee1b */
  if (zf) goto L_7eee1b;
L_7ee602: /* 7ee602: mov esi, dword ptr [edi + 0x30] */
  esi = R32((uint32_t)(edi + 0x30u));
/* 7ee605: mov ecx, dword ptr [esi + 0xb0] */
  ecx = R32((uint32_t)(esi + 0xb0u));
/* 7ee60b: mov dword ptr [ecx + 0x550], esi */
  W32((uint32_t)(ecx + 0x550u), esi);
/* 7ee611: mov edx, dword ptr [esi + 0xb0] */
  edx = R32((uint32_t)(esi + 0xb0u));
/* 7ee617: mov ebx, eax */
  ebx = eax;
/* 7ee619: mov dword ptr [ebp - 0x40], ebx */
  W32((uint32_t)(ebp + 0xffffffc0u), ebx);
/* 7ee61c: mov dword ptr [ebp - 0x2c], esi */
  W32((uint32_t)(ebp + 0xffffffd4u), esi);
/* 7ee61f: mov dword ptr [edx + 0x554], ebx */
  W32((uint32_t)(edx + 0x554u), ebx);
/* 7ee625: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7ee627: mov eax, dword ptr [0xcfa538] */
  eax = R32((uint32_t)(0xcfa538u));
/* 7ee62c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ee62d: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 7ee630: call dword ptr [0xcfa534] */
  esp -= 4; W32(esp, 0x7ee636u); SPILL(); f_4e12d0(); if (g_unwind) return; /* Core!??0FMemMark@@QAE@AAVFMemStack@@@Z */ RELOAD();
/* 7ee636: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ee639: inc dword ptr [eax + 0x10c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x10cu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + 0x10cu), r);
  }
/* 7ee63f: inc dword ptr [edi + 0x11c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x11cu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(edi + 0x11cu), r);
  }
/* 7ee645: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7ee649: xor eax, eax */
  eax = 0;
/* 7ee64b: jmp 0x7ee650 */
  goto L_7ee650;
L_7ee650: /* 7ee650: cmp eax, dword ptr [edi + 0x3ed0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x3ed0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ee656: jge 0x7ee673 */
  if ((sf == of)) goto L_7ee673;
L_7ee658: /* 7ee658: mov ecx, dword ptr [edi + 0x3ecc] */
  ecx = R32((uint32_t)(edi + 0x3eccu));
/* 7ee65e: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 7ee661: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ee664: mov ecx, dword ptr [ecx + 0x10c] */
  ecx = R32((uint32_t)(ecx + 0x10cu));
/* 7ee66a: mov dword ptr [edx + 0x94], ecx */
  W32((uint32_t)(edx + 0x94u), ecx);
/* 7ee670: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7ee671: jmp 0x7ee650 */
  goto L_7ee650;
L_7ee673: /* 7ee673: add ebx, 0x170 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 7ee679: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7ee67b: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 7ee67e: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 7ee681: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 7ee684: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* 7ee687: lea eax, [esi + 0x17c] */
  eax = (uint32_t)(esi + 0x17cu);
/* 7ee68d: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7ee68f: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 7ee692: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7ee695: mov dword ptr [ebp - 0xfc], edx */
  W32((uint32_t)(ebp + 0xffffff04u), edx);
/* 7ee69b: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 7ee69e: mov dword ptr [ebp - 0xf8], ecx */
  W32((uint32_t)(ebp + 0xffffff08u), ecx);
/* 7ee6a4: lea eax, [ebp - 0xfc] */
  eax = (uint32_t)(ebp + 0xffffff04u);
/* 7ee6aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ee6ab: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7ee6ae: mov dword ptr [ebp - 0xf4], edx */
  W32((uint32_t)(ebp + 0xffffff0cu), edx);
/* 7ee6b4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ee6b5: lea edx, [ebp - 0x40] */
  edx = (uint32_t)(ebp + 0xffffffc0u);
/* 7ee6b8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ee6b9: mov ecx, esi */
  ecx = esi;
/* 7ee6bb: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7ee6c2: call 0x6c204a */
  esp -= 4; W32(esp, 0x7ee6c7u); SPILL(); f_6c204a(); if (g_unwind) return; RELOAD();
/* 7ee6c7: mov ebx, dword ptr [ebp - 0x40] */
  ebx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 7ee6ca: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ee6cc: jne 0x7ee6e6 */
  if (!zf) goto L_7ee6e6;
L_7ee6ce: /* 7ee6ce: push 0x38d */
  { uint32_t v = 0x38du; esp -= 4; W32(esp, v); }
/* 7ee6d3: push 0xade780 */
  { uint32_t v = 0xade780u; esp -= 4; W32(esp, v); }
/* 7ee6d8: push 0xade790 */
  { uint32_t v = 0xade790u; esp -= 4; W32(esp, v); }
/* 7ee6dd: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7ee6e3u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7ee6e3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7ee6e6: /* 7ee6e6: mov eax, dword ptr [edi + 0x11c] */
  eax = R32((uint32_t)(edi + 0x11cu));
/* 7ee6ec: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ee6ee: je 0x7ee8a4 */
  if (zf) goto L_7ee8a4;
L_7ee6f4: /* 7ee6f4: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ee6f6: je 0x7ee700 */
  if (zf) goto L_7ee700;
L_7ee6f8: /* 7ee6f8: fld dword ptr [0xa11210] */
  { double v = F32((uint32_t)(0xa11210u)); FPUSH(v); }
/* 7ee6fe: jmp 0x7ee706 */
  goto L_7ee706;
L_7ee700: /* 7ee700: fld dword ptr [0xa0c18c] */
  { double v = F32((uint32_t)(0xa0c18cu)); FPUSH(v); }
L_7ee706: /* 7ee706: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7ee708: fmul dword ptr [ebx + 0x190] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x190u)));
/* 7ee70e: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 7ee710: fmul dword ptr [ebx + 0x18c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x18cu)));
/* 7ee716: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 7ee718: fmul dword ptr [ebx + 0x188] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x188u)));
/* 7ee71e: fstp dword ptr [ebp - 0x94] */
  WF32((uint32_t)(ebp + 0xffffff6cu), ST0); FPOP();
/* 7ee724: mov eax, dword ptr [ebp - 0x94] */
  eax = R32((uint32_t)(ebp + 0xffffff6cu));
/* 7ee72a: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* 7ee72d: mov eax, dword ptr [ebx + 0x5c] */
  eax = R32((uint32_t)(ebx + 0x5cu));
/* 7ee730: fstp dword ptr [ebp - 0x90] */
  WF32((uint32_t)(ebp + 0xffffff70u), ST0); FPOP();
/* 7ee736: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ee738: mov ecx, dword ptr [ebp - 0x90] */
  ecx = R32((uint32_t)(ebp + 0xffffff70u));
/* 7ee73e: fstp dword ptr [ebp - 0x8c] */
  WF32((uint32_t)(ebp + 0xffffff74u), ST0); FPOP();
/* 7ee744: mov edx, dword ptr [ebp - 0x8c] */
  edx = R32((uint32_t)(ebp + 0xffffff74u));
/* 7ee74a: mov dword ptr [ebp - 0x5c], ecx */
  W32((uint32_t)(ebp + 0xffffffa4u), ecx);
/* 7ee74d: mov dword ptr [ebp - 0x58], edx */
  W32((uint32_t)(ebp + 0xffffffa8u), edx);
/* 7ee750: je 0x7ee788 */
  if (zf) goto L_7ee788;
L_7ee752: /* 7ee752: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7ee754: fmul dword ptr [eax + 0x190] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x190u)));
/* 7ee75a: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7ee75d: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7ee75f: fmul dword ptr [eax + 0x18c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x18cu)));
/* 7ee765: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7ee768: fmul dword ptr [eax + 0x188] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x188u)));
/* 7ee76e: fadd dword ptr [ebp - 0x94] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff6cu)));
/* 7ee774: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 7ee777: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 7ee77a: fadd dword ptr [ebp - 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 7ee77d: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 7ee780: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 7ee783: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 7ee786: jmp 0x7ee78d */
  goto L_7ee78d;
L_7ee788: /* 7ee788: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7ee78a: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
L_7ee78d: /* 7ee78d: fadd dword ptr [ebp - 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 7ee790: xor esi, esi */
  esi = 0;
/* 7ee792: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 7ee795: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ee796: fadd dword ptr [ebp - 0x5c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa4u)));
/* 7ee799: mov dword ptr [ebp - 0xf0], esi */
  W32((uint32_t)(ebp + 0xffffff10u), esi);
/* 7ee79f: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 7ee7a2: mov dword ptr [ebp - 0xec], esi */
  W32((uint32_t)(ebp + 0xffffff14u), esi);
/* 7ee7a8: fadd dword ptr [ebp - 0x60] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 7ee7ab: mov dword ptr [ebp - 0xdc], esi */
  W32((uint32_t)(ebp + 0xffffff24u), esi);
/* 7ee7b1: mov dword ptr [ebp - 0xd8], esi */
  W32((uint32_t)(ebp + 0xffffff28u), esi);
/* 7ee7b7: mov dword ptr [ebp - 0xd4], esi */
  W32((uint32_t)(ebp + 0xffffff2cu), esi);
/* 7ee7bd: mov dword ptr [ebp - 0xd0], esi */
  W32((uint32_t)(ebp + 0xffffff30u), esi);
/* 7ee7c3: fstp dword ptr [ebp - 0x88] */
  WF32((uint32_t)(ebp + 0xffffff78u), ST0); FPOP();
/* 7ee7c9: mov eax, dword ptr [ebp - 0x88] */
  eax = R32((uint32_t)(ebp + 0xffffff78u));
/* 7ee7cf: mov dword ptr [ebp - 0xc4], esi */
  W32((uint32_t)(ebp + 0xffffff3cu), esi);
/* 7ee7d5: fstp dword ptr [ebp - 0x84] */
  WF32((uint32_t)(ebp + 0xffffff7cu), ST0); FPOP();
/* 7ee7db: mov edx, dword ptr [ebp - 0x84] */
  edx = R32((uint32_t)(ebp + 0xffffff7cu));
/* 7ee7e1: mov dword ptr [ebp - 0xb0], esi */
  W32((uint32_t)(ebp + 0xffffff50u), esi);
/* 7ee7e7: fstp dword ptr [ebp - 0x80] */
  WF32((uint32_t)(ebp + 0xffffff80u), ST0); FPOP();
/* 7ee7ea: mov ecx, dword ptr [ebp - 0x80] */
  ecx = R32((uint32_t)(ebp + 0xffffff80u));
/* 7ee7ed: mov dword ptr [ebp - 0xac], esi */
  W32((uint32_t)(ebp + 0xffffff54u), esi);
/* 7ee7f3: mov dword ptr [ebp - 0xa8], esi */
  W32((uint32_t)(ebp + 0xffffff58u), esi);
/* 7ee7f9: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7ee7fb: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ee7fe: mov dword ptr [ebp - 0xe8], eax */
  W32((uint32_t)(ebp + 0xffffff18u), eax);
/* 7ee804: mov dword ptr [ebp - 0xe4], edx */
  W32((uint32_t)(ebp + 0xffffff1cu), edx);
/* 7ee80a: mov dword ptr [ebp - 0xcc], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff34u), 0x3f800000u);
/* 7ee814: mov dword ptr [ebp - 0xc8], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff38u), 0xffffffffu);
/* 7ee81e: mov dword ptr [ebp - 0xe0], ecx */
  W32((uint32_t)(ebp + 0xffffff20u), ecx);
/* 7ee824: mov ecx, dword ptr [ebx + 0xb4] */
  ecx = R32((uint32_t)(ebx + 0xb4u));
/* 7ee82a: mov ebx, dword ptr [ebp - 0xb0] */
  ebx = R32((uint32_t)(ebp + 0xffffff50u));
/* 7ee830: mov ecx, dword ptr [ecx + 0x8c] */
  ecx = R32((uint32_t)(ecx + 0x8cu));
/* 7ee836: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 7ee838: mov esi, esp */
  esi = esp;
/* 7ee83a: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
/* 7ee83c: mov ebx, dword ptr [ebp - 0xac] */
  ebx = R32((uint32_t)(ebp + 0xffffff54u));
/* 7ee842: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 7ee845: mov ebx, dword ptr [ebp - 0xa8] */
  ebx = R32((uint32_t)(ebp + 0xffffff58u));
/* 7ee84b: mov dword ptr [esi + 8], ebx */
  W32((uint32_t)(esi + 0x8u), ebx);
/* 7ee84e: mov ebx, dword ptr [ebp - 0x38] */
  ebx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7ee851: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ee854: mov esi, esp */
  esi = esp;
/* 7ee856: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
/* 7ee858: mov ebx, dword ptr [ebp - 0x34] */
  ebx = R32((uint32_t)(ebp + 0xffffffccu));
/* 7ee85b: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 7ee85e: mov ebx, dword ptr [ebp - 0x30] */
  ebx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7ee861: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ee864: mov dword ptr [esi + 8], ebx */
  W32((uint32_t)(esi + 0x8u), ebx);
/* 7ee867: mov esi, esp */
  esi = esp;
/* 7ee869: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 7ee86b: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 7ee86e: mov edx, dword ptr [ebp - 0x80] */
  edx = R32((uint32_t)(ebp + 0xffffff80u));
/* 7ee871: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ee873: lea eax, [ebp - 0xf0] */
  eax = (uint32_t)(ebp + 0xffffff10u);
/* 7ee879: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ee87a: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 7ee87d: call dword ptr [edi + 0x6c] */
  { uint32_t t = R32((uint32_t)(edi + 0x6cu)); esp -= 4; W32(esp, 0x7ee880u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ee880: mov ecx, dword ptr [ebp - 0xe8] */
  ecx = R32((uint32_t)(ebp + 0xffffff18u));
/* 7ee886: mov edx, dword ptr [ebp - 0xe4] */
  edx = R32((uint32_t)(ebp + 0xffffff1cu));
/* 7ee88c: mov eax, dword ptr [ebp - 0xe0] */
  eax = R32((uint32_t)(ebp + 0xffffff20u));
/* 7ee892: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7ee895: mov ebx, dword ptr [ebp - 0x40] */
  ebx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 7ee898: mov esi, dword ptr [ebp - 0x2c] */
  esi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7ee89b: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 7ee89e: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 7ee8a1: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
L_7ee8a4: /* 7ee8a4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ee8a7: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 7ee8aa: sub eax, dword ptr [ecx + 0x108] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x108u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7ee8b0: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7ee8b3: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 7ee8b6: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 7ee8b9: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7ee8bb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ee8bc: mov ecx, dword ptr [0xcfa538] */
  ecx = R32((uint32_t)(0xcfa538u));
/* 7ee8c2: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 7ee8c9: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x7ee8cfu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 7ee8cf: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ee8d2: mov edx, dword ptr [ecx + 0x108] */
  edx = R32((uint32_t)(ecx + 0x108u));
/* 7ee8d8: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7ee8db: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 7ee8de: mov ecx, dword ptr [0xcfa538] */
  ecx = R32((uint32_t)(0xcfa538u));
/* 7ee8e4: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7ee8e6: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7ee8e9: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7ee8eb: lea edx, [eax*4] */
  edx = (uint32_t)(eax*4);
/* 7ee8f2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ee8f3: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x7ee8f9u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 7ee8f9: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 7ee8fc: add ebx, 0x170 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 7ee902: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 7ee904: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 7ee907: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* 7ee90a: mov dword ptr [ebp - 0xc0], eax */
  W32((uint32_t)(ebp + 0xffffff40u), eax);
/* 7ee910: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* 7ee913: mov dword ptr [ebp - 0xbc], ecx */
  W32((uint32_t)(ebp + 0xffffff44u), ecx);
/* 7ee919: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ee91a: lea ecx, [esi + 0x17c] */
  ecx = (uint32_t)(esi + 0x17cu);
/* 7ee920: mov dword ptr [ebp - 0xb8], edx */
  W32((uint32_t)(ebp + 0xffffff48u), edx);
/* 7ee926: call dword ptr [0xcfa7dc] */
  esp -= 4; W32(esp, 0x7ee92cu); SPILL(); f_4e30a8(); if (g_unwind) return; /* Core!?Vector@FRotator@@QAE?AVFVector@@XZ */ RELOAD();
/* 7ee92c: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7ee930: xor ebx, ebx */
  ebx = 0;
L_7ee932: /* 7ee932: cmp ebx, dword ptr [ebp - 0x3c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ee935: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 7ee938: jge 0x7eea30 */
  if ((sf == of)) goto L_7eea30;
L_7ee93e: /* 7ee93e: mov ecx, dword ptr [ebp - 0x7c] */
  ecx = R32((uint32_t)(ebp + 0xffffff84u));
/* 7ee941: mov esi, dword ptr [ecx + ebx*4] */
  esi = R32((uint32_t)(ecx + ebx*4));
/* 7ee944: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ee947: mov edx, dword ptr [esi + 0x94] */
  edx = R32((uint32_t)(esi + 0x94u));
/* 7ee94d: cmp edx, dword ptr [eax + 0x10c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x10cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ee953: je 0x7eea2a */
  if (zf) goto L_7eea2a;
L_7ee959: /* 7ee959: mov ecx, esi */
  ecx = esi;
/* 7ee95b: call dword ptr [0xcfa2b4] */
  esp -= 4; W32(esp, 0x7ee961u); SPILL(); f_4e39ae(); if (g_unwind) return; /* Core!?GetIndex@UObject@@QBEKXZ */ RELOAD();
/* 7ee961: mov ecx, dword ptr [edi + 0x3ee8] */
  ecx = R32((uint32_t)(edi + 0x3ee8u));
/* 7ee967: mov edx, dword ptr [edi + 0x3ee4] */
  edx = R32((uint32_t)(edi + 0x3ee4u));
/* 7ee96d: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 7ee96e: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7ee970: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
L_7ee973: /* 7ee973: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ee976: je 0x7ee992 */
  if (zf) goto L_7ee992;
L_7ee978: /* 7ee978: mov ecx, dword ptr [edi + 0x3ed8] */
  ecx = R32((uint32_t)(edi + 0x3ed8u));
/* 7ee97e: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 7ee981: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 7ee984: cmp dword ptr [eax + 4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ee987: jne 0x7ee98e */
  if (!zf) goto L_7ee98e;
L_7ee989: /* 7ee989: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7ee98c: jmp 0x7ee994 */
  goto L_7ee994;
L_7ee98e: /* 7ee98e: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7ee990: jmp 0x7ee973 */
  goto L_7ee973;
L_7ee992: /* 7ee992: xor eax, eax */
  eax = 0;
L_7ee994: /* 7ee994: test byte ptr [esi + 0x84], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x84u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ee99b: je 0x7ee9d7 */
  if (zf) goto L_7ee9d7;
L_7ee99d: /* 7ee99d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ee99f: je 0x7ee9d7 */
  if (zf) goto L_7ee9d7;
L_7ee9a1: /* 7ee9a1: mov ecx, dword ptr [eax + 0x8c] */
  ecx = R32((uint32_t)(eax + 0x8cu));
/* 7ee9a7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ee9a9: jne 0x7ee9d7 */
  if (!zf) goto L_7ee9d7;
L_7ee9ab: /* 7ee9ab: mov ecx, dword ptr [eax + 0x9c] */
  ecx = R32((uint32_t)(eax + 0x9cu));
/* 7ee9b1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ee9b3: je 0x7ee9d7 */
  if (zf) goto L_7ee9d7;
L_7ee9b5: /* 7ee9b5: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 7ee9bb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ee9bd: jne 0x7ee9d7 */
  if (!zf) goto L_7ee9d7;
L_7ee9bf: /* 7ee9bf: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ee9c2: mov ecx, dword ptr [edx + 0x3c] */
  ecx = R32((uint32_t)(edx + 0x3cu));
/* 7ee9c5: mov edx, dword ptr [ecx + 0x44] */
  edx = R32((uint32_t)(ecx + 0x44u));
/* 7ee9c8: mov dword ptr [eax + 0x70], edx */
  W32((uint32_t)(eax + 0x70u), edx);
/* 7ee9cb: mov ecx, dword ptr [ecx + 0x48] */
  ecx = R32((uint32_t)(ecx + 0x48u));
/* 7ee9ce: mov dword ptr [eax + 0x74], ecx */
  W32((uint32_t)(eax + 0x74u), ecx);
/* 7ee9d1: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7ee9d2: jmp 0x7ee932 */
  goto L_7ee932;
L_7ee9d7: /* 7ee9d7: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ee9da: mov ecx, dword ptr [edx + 0x10c] */
  ecx = R32((uint32_t)(edx + 0x10cu));
/* 7ee9e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ee9e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ee9e2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ee9e3: lea edx, [ebp - 0x54] */
  edx = (uint32_t)(ebp + 0xffffffacu);
/* 7ee9e6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ee9e7: lea eax, [ebp - 0xc0] */
  eax = (uint32_t)(ebp + 0xffffff40u);
/* 7ee9ed: mov dword ptr [esi + 0x94], ecx */
  W32((uint32_t)(esi + 0x94u), ecx);
/* 7ee9f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ee9f4: lea ecx, [ebp - 0x118] */
  ecx = (uint32_t)(ebp + 0xfffffee8u);
/* 7ee9fa: call 0x6c3a30 */
  esp -= 4; W32(esp, 0x7ee9ffu); SPILL(); f_6c3a30(); if (g_unwind) return; RELOAD();
/* 7ee9ff: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7eea02: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 7eea04: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7eea07: lea ecx, [edx + edx*2] */
  ecx = (uint32_t)(edx + edx*2);
/* 7eea0a: lea ecx, [esi + ecx*4] */
  ecx = (uint32_t)(esi + ecx*4);
/* 7eea0d: mov esi, ecx */
  esi = ecx;
/* 7eea0f: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
/* 7eea11: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 7eea14: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 7eea17: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7eea1a: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7eea1d: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 7eea20: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7eea23: mov dword ptr [eax + edx*4], ecx */
  W32((uint32_t)(eax + edx*4), ecx);
/* 7eea26: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7eea27: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
L_7eea2a: /* 7eea2a: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7eea2b: jmp 0x7ee932 */
  goto L_7ee932;
L_7eea30: /* 7eea30: xor ebx, ebx */
  ebx = 0;
L_7eea32: /* 7eea32: cmp ebx, dword ptr [edi + 0x3f10] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x3f10u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7eea38: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 7eea3b: jge 0x7eeb6b */
  if ((sf == of)) goto L_7eeb6b;
L_7eea41: /* 7eea41: mov ecx, dword ptr [edi + 0x3f0c] */
  ecx = R32((uint32_t)(edi + 0x3f0cu));
/* 7eea47: mov esi, dword ptr [ecx + ebx*4] */
  esi = R32((uint32_t)(ecx + ebx*4));
/* 7eea4a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7eea4d: mov edx, dword ptr [esi + 0x94] */
  edx = R32((uint32_t)(esi + 0x94u));
/* 7eea53: cmp edx, dword ptr [eax + 0x10c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x10cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7eea59: je 0x7eead3 */
  if (zf) goto L_7eead3;
L_7eea5b: /* 7eea5b: mov ecx, esi */
  ecx = esi;
/* 7eea5d: call dword ptr [0xcfa2b4] */
  esp -= 4; W32(esp, 0x7eea63u); SPILL(); f_4e39ae(); if (g_unwind) return; /* Core!?GetIndex@UObject@@QBEKXZ */ RELOAD();
/* 7eea63: mov ecx, dword ptr [edi + 0x3ee8] */
  ecx = R32((uint32_t)(edi + 0x3ee8u));
/* 7eea69: mov edx, dword ptr [edi + 0x3ee4] */
  edx = R32((uint32_t)(edi + 0x3ee4u));
/* 7eea6f: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 7eea70: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7eea72: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
L_7eea75: /* 7eea75: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7eea78: je 0x7eea94 */
  if (zf) goto L_7eea94;
L_7eea7a: /* 7eea7a: mov ecx, dword ptr [edi + 0x3ed8] */
  ecx = R32((uint32_t)(edi + 0x3ed8u));
/* 7eea80: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 7eea83: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 7eea86: cmp dword ptr [eax + 4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7eea89: jne 0x7eea90 */
  if (!zf) goto L_7eea90;
L_7eea8b: /* 7eea8b: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7eea8e: jmp 0x7eea96 */
  goto L_7eea96;
L_7eea90: /* 7eea90: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7eea92: jmp 0x7eea75 */
  goto L_7eea75;
L_7eea94: /* 7eea94: xor eax, eax */
  eax = 0;
L_7eea96: /* 7eea96: test byte ptr [esi + 0x84], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x84u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7eea9d: je 0x7eead9 */
  if (zf) goto L_7eead9;
L_7eea9f: /* 7eea9f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eeaa1: je 0x7eead9 */
  if (zf) goto L_7eead9;
L_7eeaa3: /* 7eeaa3: mov ecx, dword ptr [eax + 0x8c] */
  ecx = R32((uint32_t)(eax + 0x8cu));
/* 7eeaa9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eeaab: jne 0x7eead9 */
  if (!zf) goto L_7eead9;
L_7eeaad: /* 7eeaad: mov ecx, dword ptr [eax + 0x9c] */
  ecx = R32((uint32_t)(eax + 0x9cu));
/* 7eeab3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eeab5: je 0x7eead9 */
  if (zf) goto L_7eead9;
L_7eeab7: /* 7eeab7: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 7eeabd: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eeabf: jne 0x7eead9 */
  if (!zf) goto L_7eead9;
L_7eeac1: /* 7eeac1: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7eeac4: mov ecx, dword ptr [edx + 0x3c] */
  ecx = R32((uint32_t)(edx + 0x3cu));
/* 7eeac7: mov edx, dword ptr [ecx + 0x44] */
  edx = R32((uint32_t)(ecx + 0x44u));
/* 7eeaca: mov dword ptr [eax + 0x70], edx */
  W32((uint32_t)(eax + 0x70u), edx);
/* 7eeacd: mov ecx, dword ptr [ecx + 0x48] */
  ecx = R32((uint32_t)(ecx + 0x48u));
/* 7eead0: mov dword ptr [eax + 0x74], ecx */
  W32((uint32_t)(eax + 0x74u), ecx);
L_7eead3: /* 7eead3: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7eead4: jmp 0x7eea32 */
  goto L_7eea32;
L_7eead9: /* 7eead9: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7eeadc: mov ecx, dword ptr [edx + 0x10c] */
  ecx = R32((uint32_t)(edx + 0x10cu));
/* 7eeae2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7eeae3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7eeae4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7eeae5: lea edx, [ebp - 0x54] */
  edx = (uint32_t)(ebp + 0xffffffacu);
/* 7eeae8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7eeae9: lea eax, [ebp - 0xc0] */
  eax = (uint32_t)(ebp + 0xffffff40u);
/* 7eeaef: mov dword ptr [esi + 0x94], ecx */
  W32((uint32_t)(esi + 0x94u), ecx);
/* 7eeaf5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7eeaf6: lea ecx, [ebp - 0x124] */
  ecx = (uint32_t)(ebp + 0xfffffedcu);
/* 7eeafc: call 0x6c3a30 */
  esp -= 4; W32(esp, 0x7eeb01u); SPILL(); f_6c3a30(); if (g_unwind) return; RELOAD();
/* 7eeb01: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7eeb04: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 7eeb06: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7eeb09: lea ecx, [edx + edx*2] */
  ecx = (uint32_t)(edx + edx*2);
/* 7eeb0c: lea ecx, [esi + ecx*4] */
  ecx = (uint32_t)(esi + ecx*4);
/* 7eeb0f: mov esi, ecx */
  esi = ecx;
/* 7eeb11: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
/* 7eeb13: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 7eeb16: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 7eeb19: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7eeb1c: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7eeb1f: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 7eeb22: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7eeb25: mov dword ptr [eax + edx*4], ecx */
  W32((uint32_t)(eax + edx*4), ecx);
/* 7eeb28: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7eeb29: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 7eeb2c: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7eeb2d: jmp 0x7eea32 */
  goto L_7eea32;
L_7eeb4f: /* 7eeb4f: push 0xa111e8 */
  { uint32_t v = 0xa111e8u; esp -= 4; W32(esp, v); }
/* 7eeb54: push 0xade798 */
  { uint32_t v = 0xade798u; esp -= 4; W32(esp, v); }
/* 7eeb59: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7eeb5fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7eeb5f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7eeb62: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7eeb64: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7eeb66: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7eeb6bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7eeb6b: /* 7eeb6b: mov eax, dword ptr [edi + 0x68] */
  eax = R32((uint32_t)(edi + 0x68u));
/* 7eeb6e: xor esi, esi */
  esi = 0;
/* 7eeb70: mov dword ptr [edi + 0x3f0c], esi */
  W32((uint32_t)(edi + 0x3f0cu), esi);
/* 7eeb76: mov dword ptr [edi + 0x3f10], esi */
  W32((uint32_t)(edi + 0x3f10u), esi);
/* 7eeb7c: mov ecx, dword ptr [eax + 0x44] */
  ecx = R32((uint32_t)(eax + 0x44u));
/* 7eeb7f: mov dword ptr [edi + 0x110], ecx */
  W32((uint32_t)(edi + 0x110u), ecx);
/* 7eeb85: mov edx, dword ptr [eax + 0x48] */
  edx = R32((uint32_t)(eax + 0x48u));
/* 7eeb88: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7eeb8b: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7eeb8e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7eeb8f: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7eeb92: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7eeb93: mov dword ptr [edi + 0x114], edx */
  W32((uint32_t)(edi + 0x114u), edx);
/* 7eeb99: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7eeb9d: call 0x6ccc39 */
  esp -= 4; W32(esp, 0x7eeba2u); SPILL(); f_6ccc39(); if (g_unwind) return; RELOAD();
/* 7eeba2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7eeba5: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7eeba8: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7eebaa: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 7eebae: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7eebb0: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
L_7eebb3: /* 7eebb3: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7eebb6: cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7eebb9: jge 0x7eee06 */
  if ((sf == of)) goto L_7eee06;
L_7eebbf: /* 7eebbf: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7eebc2: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7eebc5: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 7eebc8: mov esi, dword ptr [eax + 8] */
  esi = R32((uint32_t)(eax + 0x8u));
/* 7eebcb: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eebcd: je 0x7eebda */
  if (zf) goto L_7eebda;
L_7eebcf: /* 7eebcf: mov ecx, dword ptr [esi + 0x68] */
  ecx = R32((uint32_t)(esi + 0x68u));
/* 7eebd2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eebd4: je 0x7eee5c */
  if (zf) goto L_7eee5c;
L_7eebda: /* 7eebda: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 7eebdd: test byte ptr [ebx + 0x84], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x84u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7eebe4: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 7eebeb: jne 0x7eec3d */
  if (!zf) goto L_7eec3d;
L_7eebed: /* 7eebed: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eebef: je 0x7eec0a */
  if (zf) goto L_7eec0a;
L_7eebf1: /* 7eebf1: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7eebf4: mov eax, dword ptr [edx + 0x3c] */
  eax = R32((uint32_t)(edx + 0x3cu));
/* 7eebf7: fld qword ptr [eax + 0x44] */
  { double v = F64((uint32_t)(eax + 0x44u)); FPUSH(v); }
/* 7eebfa: fsub qword ptr [esi + 0x70] */
  ST0 = ST0 - (F64((uint32_t)(esi + 0x70u)));
/* 7eebfd: fcomp qword ptr [0xa0da58] */
  fpu_com(ST0, F64((uint32_t)(0xa0da58u)));
  FPOP();
/* 7eec03: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7eec05: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7eec08: jne 0x7eec3d */
  if (!zf) goto L_7eec3d;
L_7eec0a: /* 7eec0a: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7eec0d: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7eec0f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7eec12: mov eax, esp */
  eax = esp;
/* 7eec14: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7eec16: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 7eec19: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7eec1c: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7eec1f: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7eec22: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 7eec25: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7eec28: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7eec29: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7eec2a: mov ecx, ebx */
  ecx = ebx;
/* 7eec2c: call dword ptr [edx + 0xf8] */
  { uint32_t t = R32((uint32_t)(edx + 0xf8u)); esp -= 4; W32(esp, 0x7eec32u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7eec32: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eec34: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7eec37: jne 0x7eed5b */
  if (!zf) goto L_7eed5b;
L_7eec3d: /* 7eec3d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eec3f: je 0x7eee5c */
  if (zf) goto L_7eee5c;
L_7eec45: /* 7eec45: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7eec48: mov eax, dword ptr [edx + 0x3c] */
  eax = R32((uint32_t)(edx + 0x3cu));
/* 7eec4b: fld qword ptr [eax + 0x44] */
  { double v = F64((uint32_t)(eax + 0x44u)); FPUSH(v); }
/* 7eec4e: fsub qword ptr [esi + 0x70] */
  ST0 = ST0 - (F64((uint32_t)(esi + 0x70u)));
/* 7eec51: fld dword ptr [eax + 0x58] */
  { double v = F32((uint32_t)(eax + 0x58u)); FPUSH(v); }
/* 7eec54: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 7eec56: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7eec58: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7eec5b: je 0x7eed5b */
  if (zf) goto L_7eed5b;
L_7eec61: /* 7eec61: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7eec63: mov ecx, esi */
  ecx = esi;
/* 7eec65: call dword ptr [eax + 0x70] */
  { uint32_t t = R32((uint32_t)(eax + 0x70u)); esp -= 4; W32(esp, 0x7eec68u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7eec68: mov ecx, dword ptr [ebx + 0xd0] */
  ecx = R32((uint32_t)(ebx + 0xd0u));
/* 7eec6e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eec70: je 0x7eee5c */
  if (zf) goto L_7eee5c;
L_7eec76: /* 7eec76: push 0xce2798 */
  { uint32_t v = 0xce2798u; esp -= 4; W32(esp, v); }
/* 7eec7b: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7eec81u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7eec81: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eec83: je 0x7eee5c */
  if (zf) goto L_7eee5c;
L_7eec89: /* 7eec89: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
L_7eec90: /* 7eec90: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7eec93: cmp ecx, dword ptr [ebx + 0x200] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x200u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7eec99: jge 0x7eee5c */
  if ((sf == of)) goto L_7eee5c;
L_7eec9f: /* 7eec9f: mov edx, dword ptr [ebx + 0x1fc] */
  edx = R32((uint32_t)(ebx + 0x1fcu));
/* 7eeca5: mov edi, ecx */
  edi = ecx;
/* 7eeca7: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 7eecaa: mov eax, dword ptr [edi + edx] */
  eax = R32((uint32_t)(edi + edx));
/* 7eecad: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eecaf: je 0x7eed48 */
  if (zf) goto L_7eed48;
L_7eecb5: /* 7eecb5: test byte ptr [eax + 0x84], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x84u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7eecbc: jne 0x7eed48 */
  if (!zf) goto L_7eed48;
L_7eecc2: /* 7eecc2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7eecc4: lea ecx, [ebp - 0xa4] */
  ecx = (uint32_t)(ebp + 0xffffff5cu);
/* 7eecca: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7eecd0u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7eecd0: mov ecx, dword ptr [ebx + 0x1fc] */
  ecx = R32((uint32_t)(ebx + 0x1fcu));
/* 7eecd6: mov ecx, dword ptr [edi + ecx] */
  ecx = R32((uint32_t)(edi + ecx));
/* 7eecd9: lea eax, [ebp - 0xa4] */
  eax = (uint32_t)(ebp + 0xffffff5cu);
/* 7eecdf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7eece0: add ecx, 0xac */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xacu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7eece6: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x7eececu); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 7eecec: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eecee: je 0x7eed48 */
  if (zf) goto L_7eed48;
L_7eecf0: /* 7eecf0: mov esi, dword ptr [ebx + 0x1fc] */
  esi = R32((uint32_t)(ebx + 0x1fcu));
/* 7eecf6: mov ecx, dword ptr [esi + edi] */
  ecx = R32((uint32_t)(esi + edi));
/* 7eecf9: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7eecfb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eecfd: je 0x7eed07 */
  if (zf) goto L_7eed07;
L_7eecff: /* 7eecff: call dword ptr [0xcfa2b4] */
  esp -= 4; W32(esp, 0x7eed05u); SPILL(); f_4e39ae(); if (g_unwind) return; /* Core!?GetIndex@UObject@@QBEKXZ */ RELOAD();
/* 7eed05: jmp 0x7eed09 */
  goto L_7eed09;
L_7eed07: /* 7eed07: xor eax, eax */
  eax = 0;
L_7eed09: /* 7eed09: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7eed0c: mov edx, dword ptr [ecx + 0x3ee8] */
  edx = R32((uint32_t)(ecx + 0x3ee8u));
/* 7eed12: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 7eed13: and edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7eed15: mov eax, dword ptr [ecx + 0x3ee4] */
  eax = R32((uint32_t)(ecx + 0x3ee4u));
/* 7eed1b: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 7eed1e: mov edi, edi */
  edi = edi;
L_7eed20: /* 7eed20: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7eed23: je 0x7eed48 */
  if (zf) goto L_7eed48;
L_7eed25: /* 7eed25: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 7eed27: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 7eed2a: mov eax, dword ptr [ecx + 0x3ed8] */
  eax = R32((uint32_t)(ecx + 0x3ed8u));
/* 7eed30: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 7eed33: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7eed36: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7eed38: jne 0x7eed57 */
  if (!zf) goto L_7eed57;
L_7eed3a: /* 7eed3a: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7eed3d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eed3f: je 0x7eed48 */
  if (zf) goto L_7eed48;
L_7eed41: /* 7eed41: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7eed43: mov ecx, eax */
  ecx = eax;
/* 7eed45: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x7eed48u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7eed48: /* 7eed48: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7eed4b: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7eed4e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7eed4f: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7eed52: jmp 0x7eec90 */
  goto L_7eec90;
L_7eed57: /* 7eed57: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7eed59: jmp 0x7eed20 */
  goto L_7eed20;
L_7eed5b: /* 7eed5b: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 7eed60: mov ecx, dword ptr [0xce84f0] */
  ecx = R32((uint32_t)(0xce84f0u));
/* 7eed66: mov edx, dword ptr [eax + ecx*4] */
  edx = R32((uint32_t)(eax + ecx*4));
/* 7eed69: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7eed6a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eed6c: mov dword ptr [eax + ecx*4], edx */
  W32((uint32_t)(eax + ecx*4), edx);
/* 7eed6f: jne 0x7eedad */
  if (!zf) goto L_7eedad;
L_7eed71: /* 7eed71: mov ecx, ebx */
  ecx = ebx;
/* 7eed73: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7eed79u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7eed79: mov ecx, dword ptr [edi + 0xb4] */
  ecx = R32((uint32_t)(edi + 0xb4u));
/* 7eed7f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7eed81: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7eed82: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x7eed85u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7eed85: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7eed88: je 0x7eee5c */
  if (zf) goto L_7eee5c;
L_7eed8e: /* 7eed8e: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7eed90: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7eed92: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7eed94: mov ecx, edi */
  ecx = edi;
/* 7eed96: call 0x6c74cd */
  esp -= 4; W32(esp, 0x7eed9bu); SPILL(); f_6c74cd(); if (g_unwind) return; RELOAD();
/* 7eed9b: mov esi, eax */
  esi = eax;
/* 7eed9d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eed9f: je 0x7eee5c */
  if (zf) goto L_7eee5c;
L_7eeda5: /* 7eeda5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7eeda6: mov ecx, esi */
  ecx = esi;
/* 7eeda8: call 0x6c24eb */
  esp -= 4; W32(esp, 0x7eedadu); SPILL(); f_6c24eb(); if (g_unwind) return; RELOAD();
L_7eedad: /* 7eedad: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7eedaf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7eedb1: mov ecx, edi */
  ecx = edi;
/* 7eedb3: call dword ptr [eax + 0x8c] */
  { uint32_t t = R32((uint32_t)(eax + 0x8cu)); esp -= 4; W32(esp, 0x7eedb9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7eedb9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eedbb: je 0x7eee06 */
  if (zf) goto L_7eee06;
L_7eedbd: /* 7eedbd: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7eedc0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eedc2: je 0x7eeddf */
  if (zf) goto L_7eeddf;
L_7eedc4: /* 7eedc4: call dword ptr [0xcfa634] */
  esp -= 4; W32(esp, 0x7eedcau); SPILL(); f_4e1fc3(); if (g_unwind) return; /* Core!?appFrand@@YAMXZ */ RELOAD();
/* 7eedca: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 7eedcd: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 7eedd3: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7eedd6: mov edx, dword ptr [ecx + 0x3c] */
  edx = R32((uint32_t)(ecx + 0x3cu));
/* 7eedd9: fadd qword ptr [edx + 0x44] */
  ST0 = ST0 + (F64((uint32_t)(edx + 0x44u)));
/* 7eeddc: fstp qword ptr [esi + 0x70] */
  WF64((uint32_t)(esi + 0x70u), ST0); FPOP();
L_7eeddf: /* 7eeddf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7eede1: mov ecx, esi */
  ecx = esi;
/* 7eede3: call 0x6c1c62 */
  esp -= 4; W32(esp, 0x7eede8u); SPILL(); f_6c1c62(); if (g_unwind) return; RELOAD();
/* 7eede8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eedea: je 0x7eedf6 */
  if (zf) goto L_7eedf6;
L_7eedec: /* 7eedec: mov ecx, esi */
  ecx = esi;
/* 7eedee: call 0x6c8927 */
  esp -= 4; W32(esp, 0x7eedf3u); SPILL(); f_6c8927(); if (g_unwind) return; RELOAD();
/* 7eedf3: inc dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
L_7eedf6: /* 7eedf6: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7eedf8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7eedfa: mov ecx, edi */
  ecx = edi;
/* 7eedfc: call dword ptr [eax + 0x8c] */
  { uint32_t t = R32((uint32_t)(eax + 0x8cu)); esp -= 4; W32(esp, 0x7eee02u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7eee02: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eee04: jne 0x7eee5c */
  if (!zf) goto L_7eee5c;
L_7eee06: /* 7eee06: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 7eee09: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7eee10: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x7eee16u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 7eee16: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7eee18: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
L_7eee1b: /* 7eee1b: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7eee1e: jmp 0x7ee5dc */
  goto L_7ee5dc;
L_7eee5c: /* 7eee5c: inc dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 7eee5f: jmp 0x7eebb3 */
  goto L_7eebb3;
L_7eee9d: /* 7eee9d: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 7eeea0: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x7eeea6u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 7eeea6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7eeea9: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 7eeeac: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7eeead: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7eeeae: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7eeeb5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7eeeb6: mov esp, ebp */
  esp = ebp;
/* 7eeeb8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7eeeb9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7eee23(void) {
  LOAD_REGS();
L_7eee23: /* 7eee23: mov ecx, dword ptr [ebp - 0x100] */
  ecx = R32((uint32_t)(ebp + 0xffffff00u));
/* 7eee29: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7eee2e: lea edx, [ebp - 0xb4] */
  edx = (uint32_t)(ebp + 0xffffff4cu);
/* 7eee34: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7eee35: mov dword ptr [ebp - 0xb4], ecx */
  W32((uint32_t)(ebp + 0xffffff4cu), ecx);
/* 7eee3b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7eee40u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7eee40(); return;
}

void f_7eee40(void) {
  LOAD_REGS();
  goto L_7eee40;
L_7ee5dc: /* 7ee5dc: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 7ee5dd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7ee5df: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 7ee5e2: jl 0x7eee9d */
  if ((sf != of)) goto L_7eee9d;
L_7ee5e8: /* 7ee5e8: mov ecx, dword ptr [ebx + 0x3c] */
  ecx = R32((uint32_t)(ebx + 0x3cu));
/* 7ee5eb: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7ee5ee: mov edi, dword ptr [edx + eax*4] */
  edi = R32((uint32_t)(edx + eax*4));
/* 7ee5f1: mov eax, dword ptr [edi + 0x3f08] */
  eax = R32((uint32_t)(edi + 0x3f08u));
/* 7ee5f7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ee5f9: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 7ee5fc: je 0x7eee1b */
  if (zf) goto L_7eee1b;
L_7ee602: /* 7ee602: mov esi, dword ptr [edi + 0x30] */
  esi = R32((uint32_t)(edi + 0x30u));
/* 7ee605: mov ecx, dword ptr [esi + 0xb0] */
  ecx = R32((uint32_t)(esi + 0xb0u));
/* 7ee60b: mov dword ptr [ecx + 0x550], esi */
  W32((uint32_t)(ecx + 0x550u), esi);
/* 7ee611: mov edx, dword ptr [esi + 0xb0] */
  edx = R32((uint32_t)(esi + 0xb0u));
/* 7ee617: mov ebx, eax */
  ebx = eax;
/* 7ee619: mov dword ptr [ebp - 0x40], ebx */
  W32((uint32_t)(ebp + 0xffffffc0u), ebx);
/* 7ee61c: mov dword ptr [ebp - 0x2c], esi */
  W32((uint32_t)(ebp + 0xffffffd4u), esi);
/* 7ee61f: mov dword ptr [edx + 0x554], ebx */
  W32((uint32_t)(edx + 0x554u), ebx);
/* 7ee625: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7ee627: mov eax, dword ptr [0xcfa538] */
  eax = R32((uint32_t)(0xcfa538u));
/* 7ee62c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ee62d: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 7ee630: call dword ptr [0xcfa534] */
  esp -= 4; W32(esp, 0x7ee636u); SPILL(); f_4e12d0(); if (g_unwind) return; /* Core!??0FMemMark@@QAE@AAVFMemStack@@@Z */ RELOAD();
/* 7ee636: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ee639: inc dword ptr [eax + 0x10c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x10cu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + 0x10cu), r);
  }
/* 7ee63f: inc dword ptr [edi + 0x11c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x11cu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(edi + 0x11cu), r);
  }
/* 7ee645: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7ee649: xor eax, eax */
  eax = 0;
/* 7ee64b: jmp 0x7ee650 */
  goto L_7ee650;
L_7ee650: /* 7ee650: cmp eax, dword ptr [edi + 0x3ed0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x3ed0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ee656: jge 0x7ee673 */
  if ((sf == of)) goto L_7ee673;
L_7ee658: /* 7ee658: mov ecx, dword ptr [edi + 0x3ecc] */
  ecx = R32((uint32_t)(edi + 0x3eccu));
/* 7ee65e: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 7ee661: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ee664: mov ecx, dword ptr [ecx + 0x10c] */
  ecx = R32((uint32_t)(ecx + 0x10cu));
/* 7ee66a: mov dword ptr [edx + 0x94], ecx */
  W32((uint32_t)(edx + 0x94u), ecx);
/* 7ee670: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7ee671: jmp 0x7ee650 */
  goto L_7ee650;
L_7ee673: /* 7ee673: add ebx, 0x170 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 7ee679: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7ee67b: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 7ee67e: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 7ee681: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 7ee684: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* 7ee687: lea eax, [esi + 0x17c] */
  eax = (uint32_t)(esi + 0x17cu);
/* 7ee68d: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7ee68f: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 7ee692: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7ee695: mov dword ptr [ebp - 0xfc], edx */
  W32((uint32_t)(ebp + 0xffffff04u), edx);
/* 7ee69b: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 7ee69e: mov dword ptr [ebp - 0xf8], ecx */
  W32((uint32_t)(ebp + 0xffffff08u), ecx);
/* 7ee6a4: lea eax, [ebp - 0xfc] */
  eax = (uint32_t)(ebp + 0xffffff04u);
/* 7ee6aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ee6ab: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7ee6ae: mov dword ptr [ebp - 0xf4], edx */
  W32((uint32_t)(ebp + 0xffffff0cu), edx);
/* 7ee6b4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ee6b5: lea edx, [ebp - 0x40] */
  edx = (uint32_t)(ebp + 0xffffffc0u);
/* 7ee6b8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ee6b9: mov ecx, esi */
  ecx = esi;
/* 7ee6bb: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7ee6c2: call 0x6c204a */
  esp -= 4; W32(esp, 0x7ee6c7u); SPILL(); f_6c204a(); if (g_unwind) return; RELOAD();
/* 7ee6c7: mov ebx, dword ptr [ebp - 0x40] */
  ebx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 7ee6ca: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ee6cc: jne 0x7ee6e6 */
  if (!zf) goto L_7ee6e6;
L_7ee6ce: /* 7ee6ce: push 0x38d */
  { uint32_t v = 0x38du; esp -= 4; W32(esp, v); }
/* 7ee6d3: push 0xade780 */
  { uint32_t v = 0xade780u; esp -= 4; W32(esp, v); }
/* 7ee6d8: push 0xade790 */
  { uint32_t v = 0xade790u; esp -= 4; W32(esp, v); }
/* 7ee6dd: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7ee6e3u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7ee6e3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7ee6e6: /* 7ee6e6: mov eax, dword ptr [edi + 0x11c] */
  eax = R32((uint32_t)(edi + 0x11cu));
/* 7ee6ec: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ee6ee: je 0x7ee8a4 */
  if (zf) goto L_7ee8a4;
L_7ee6f4: /* 7ee6f4: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ee6f6: je 0x7ee700 */
  if (zf) goto L_7ee700;
L_7ee6f8: /* 7ee6f8: fld dword ptr [0xa11210] */
  { double v = F32((uint32_t)(0xa11210u)); FPUSH(v); }
/* 7ee6fe: jmp 0x7ee706 */
  goto L_7ee706;
L_7ee700: /* 7ee700: fld dword ptr [0xa0c18c] */
  { double v = F32((uint32_t)(0xa0c18cu)); FPUSH(v); }
L_7ee706: /* 7ee706: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7ee708: fmul dword ptr [ebx + 0x190] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x190u)));
/* 7ee70e: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 7ee710: fmul dword ptr [ebx + 0x18c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x18cu)));
/* 7ee716: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 7ee718: fmul dword ptr [ebx + 0x188] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x188u)));
/* 7ee71e: fstp dword ptr [ebp - 0x94] */
  WF32((uint32_t)(ebp + 0xffffff6cu), ST0); FPOP();
/* 7ee724: mov eax, dword ptr [ebp - 0x94] */
  eax = R32((uint32_t)(ebp + 0xffffff6cu));
/* 7ee72a: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* 7ee72d: mov eax, dword ptr [ebx + 0x5c] */
  eax = R32((uint32_t)(ebx + 0x5cu));
/* 7ee730: fstp dword ptr [ebp - 0x90] */
  WF32((uint32_t)(ebp + 0xffffff70u), ST0); FPOP();
/* 7ee736: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ee738: mov ecx, dword ptr [ebp - 0x90] */
  ecx = R32((uint32_t)(ebp + 0xffffff70u));
/* 7ee73e: fstp dword ptr [ebp - 0x8c] */
  WF32((uint32_t)(ebp + 0xffffff74u), ST0); FPOP();
/* 7ee744: mov edx, dword ptr [ebp - 0x8c] */
  edx = R32((uint32_t)(ebp + 0xffffff74u));
/* 7ee74a: mov dword ptr [ebp - 0x5c], ecx */
  W32((uint32_t)(ebp + 0xffffffa4u), ecx);
/* 7ee74d: mov dword ptr [ebp - 0x58], edx */
  W32((uint32_t)(ebp + 0xffffffa8u), edx);
/* 7ee750: je 0x7ee788 */
  if (zf) goto L_7ee788;
L_7ee752: /* 7ee752: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7ee754: fmul dword ptr [eax + 0x190] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x190u)));
/* 7ee75a: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7ee75d: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7ee75f: fmul dword ptr [eax + 0x18c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x18cu)));
/* 7ee765: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7ee768: fmul dword ptr [eax + 0x188] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x188u)));
/* 7ee76e: fadd dword ptr [ebp - 0x94] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff6cu)));
/* 7ee774: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 7ee777: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 7ee77a: fadd dword ptr [ebp - 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 7ee77d: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 7ee780: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 7ee783: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 7ee786: jmp 0x7ee78d */
  goto L_7ee78d;
L_7ee788: /* 7ee788: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7ee78a: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
L_7ee78d: /* 7ee78d: fadd dword ptr [ebp - 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 7ee790: xor esi, esi */
  esi = 0;
/* 7ee792: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 7ee795: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ee796: fadd dword ptr [ebp - 0x5c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa4u)));
/* 7ee799: mov dword ptr [ebp - 0xf0], esi */
  W32((uint32_t)(ebp + 0xffffff10u), esi);
/* 7ee79f: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 7ee7a2: mov dword ptr [ebp - 0xec], esi */
  W32((uint32_t)(ebp + 0xffffff14u), esi);
/* 7ee7a8: fadd dword ptr [ebp - 0x60] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 7ee7ab: mov dword ptr [ebp - 0xdc], esi */
  W32((uint32_t)(ebp + 0xffffff24u), esi);
/* 7ee7b1: mov dword ptr [ebp - 0xd8], esi */
  W32((uint32_t)(ebp + 0xffffff28u), esi);
/* 7ee7b7: mov dword ptr [ebp - 0xd4], esi */
  W32((uint32_t)(ebp + 0xffffff2cu), esi);
/* 7ee7bd: mov dword ptr [ebp - 0xd0], esi */
  W32((uint32_t)(ebp + 0xffffff30u), esi);
/* 7ee7c3: fstp dword ptr [ebp - 0x88] */
  WF32((uint32_t)(ebp + 0xffffff78u), ST0); FPOP();
/* 7ee7c9: mov eax, dword ptr [ebp - 0x88] */
  eax = R32((uint32_t)(ebp + 0xffffff78u));
/* 7ee7cf: mov dword ptr [ebp - 0xc4], esi */
  W32((uint32_t)(ebp + 0xffffff3cu), esi);
/* 7ee7d5: fstp dword ptr [ebp - 0x84] */
  WF32((uint32_t)(ebp + 0xffffff7cu), ST0); FPOP();
/* 7ee7db: mov edx, dword ptr [ebp - 0x84] */
  edx = R32((uint32_t)(ebp + 0xffffff7cu));
/* 7ee7e1: mov dword ptr [ebp - 0xb0], esi */
  W32((uint32_t)(ebp + 0xffffff50u), esi);
/* 7ee7e7: fstp dword ptr [ebp - 0x80] */
  WF32((uint32_t)(ebp + 0xffffff80u), ST0); FPOP();
/* 7ee7ea: mov ecx, dword ptr [ebp - 0x80] */
  ecx = R32((uint32_t)(ebp + 0xffffff80u));
/* 7ee7ed: mov dword ptr [ebp - 0xac], esi */
  W32((uint32_t)(ebp + 0xffffff54u), esi);
/* 7ee7f3: mov dword ptr [ebp - 0xa8], esi */
  W32((uint32_t)(ebp + 0xffffff58u), esi);
/* 7ee7f9: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7ee7fb: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ee7fe: mov dword ptr [ebp - 0xe8], eax */
  W32((uint32_t)(ebp + 0xffffff18u), eax);
/* 7ee804: mov dword ptr [ebp - 0xe4], edx */
  W32((uint32_t)(ebp + 0xffffff1cu), edx);
/* 7ee80a: mov dword ptr [ebp - 0xcc], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff34u), 0x3f800000u);
/* 7ee814: mov dword ptr [ebp - 0xc8], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff38u), 0xffffffffu);
/* 7ee81e: mov dword ptr [ebp - 0xe0], ecx */
  W32((uint32_t)(ebp + 0xffffff20u), ecx);
/* 7ee824: mov ecx, dword ptr [ebx + 0xb4] */
  ecx = R32((uint32_t)(ebx + 0xb4u));
/* 7ee82a: mov ebx, dword ptr [ebp - 0xb0] */
  ebx = R32((uint32_t)(ebp + 0xffffff50u));
/* 7ee830: mov ecx, dword ptr [ecx + 0x8c] */
  ecx = R32((uint32_t)(ecx + 0x8cu));
/* 7ee836: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 7ee838: mov esi, esp */
  esi = esp;
/* 7ee83a: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
/* 7ee83c: mov ebx, dword ptr [ebp - 0xac] */
  ebx = R32((uint32_t)(ebp + 0xffffff54u));
/* 7ee842: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 7ee845: mov ebx, dword ptr [ebp - 0xa8] */
  ebx = R32((uint32_t)(ebp + 0xffffff58u));
/* 7ee84b: mov dword ptr [esi + 8], ebx */
  W32((uint32_t)(esi + 0x8u), ebx);
/* 7ee84e: mov ebx, dword ptr [ebp - 0x38] */
  ebx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7ee851: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ee854: mov esi, esp */
  esi = esp;
/* 7ee856: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
/* 7ee858: mov ebx, dword ptr [ebp - 0x34] */
  ebx = R32((uint32_t)(ebp + 0xffffffccu));
/* 7ee85b: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 7ee85e: mov ebx, dword ptr [ebp - 0x30] */
  ebx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7ee861: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ee864: mov dword ptr [esi + 8], ebx */
  W32((uint32_t)(esi + 0x8u), ebx);
/* 7ee867: mov esi, esp */
  esi = esp;
/* 7ee869: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 7ee86b: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 7ee86e: mov edx, dword ptr [ebp - 0x80] */
  edx = R32((uint32_t)(ebp + 0xffffff80u));
/* 7ee871: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ee873: lea eax, [ebp - 0xf0] */
  eax = (uint32_t)(ebp + 0xffffff10u);
/* 7ee879: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ee87a: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 7ee87d: call dword ptr [edi + 0x6c] */
  { uint32_t t = R32((uint32_t)(edi + 0x6cu)); esp -= 4; W32(esp, 0x7ee880u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ee880: mov ecx, dword ptr [ebp - 0xe8] */
  ecx = R32((uint32_t)(ebp + 0xffffff18u));
/* 7ee886: mov edx, dword ptr [ebp - 0xe4] */
  edx = R32((uint32_t)(ebp + 0xffffff1cu));
/* 7ee88c: mov eax, dword ptr [ebp - 0xe0] */
  eax = R32((uint32_t)(ebp + 0xffffff20u));
/* 7ee892: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7ee895: mov ebx, dword ptr [ebp - 0x40] */
  ebx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 7ee898: mov esi, dword ptr [ebp - 0x2c] */
  esi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7ee89b: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 7ee89e: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 7ee8a1: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
L_7ee8a4: /* 7ee8a4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ee8a7: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 7ee8aa: sub eax, dword ptr [ecx + 0x108] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x108u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7ee8b0: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7ee8b3: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 7ee8b6: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 7ee8b9: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7ee8bb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ee8bc: mov ecx, dword ptr [0xcfa538] */
  ecx = R32((uint32_t)(0xcfa538u));
/* 7ee8c2: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 7ee8c9: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x7ee8cfu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 7ee8cf: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ee8d2: mov edx, dword ptr [ecx + 0x108] */
  edx = R32((uint32_t)(ecx + 0x108u));
/* 7ee8d8: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7ee8db: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 7ee8de: mov ecx, dword ptr [0xcfa538] */
  ecx = R32((uint32_t)(0xcfa538u));
/* 7ee8e4: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7ee8e6: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7ee8e9: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7ee8eb: lea edx, [eax*4] */
  edx = (uint32_t)(eax*4);
/* 7ee8f2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ee8f3: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x7ee8f9u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 7ee8f9: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 7ee8fc: add ebx, 0x170 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 7ee902: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 7ee904: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 7ee907: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* 7ee90a: mov dword ptr [ebp - 0xc0], eax */
  W32((uint32_t)(ebp + 0xffffff40u), eax);
/* 7ee910: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* 7ee913: mov dword ptr [ebp - 0xbc], ecx */
  W32((uint32_t)(ebp + 0xffffff44u), ecx);
/* 7ee919: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ee91a: lea ecx, [esi + 0x17c] */
  ecx = (uint32_t)(esi + 0x17cu);
/* 7ee920: mov dword ptr [ebp - 0xb8], edx */
  W32((uint32_t)(ebp + 0xffffff48u), edx);
/* 7ee926: call dword ptr [0xcfa7dc] */
  esp -= 4; W32(esp, 0x7ee92cu); SPILL(); f_4e30a8(); if (g_unwind) return; /* Core!?Vector@FRotator@@QAE?AVFVector@@XZ */ RELOAD();
/* 7ee92c: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7ee930: xor ebx, ebx */
  ebx = 0;
L_7ee932: /* 7ee932: cmp ebx, dword ptr [ebp - 0x3c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ee935: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 7ee938: jge 0x7eea30 */
  if ((sf == of)) goto L_7eea30;
L_7ee93e: /* 7ee93e: mov ecx, dword ptr [ebp - 0x7c] */
  ecx = R32((uint32_t)(ebp + 0xffffff84u));
/* 7ee941: mov esi, dword ptr [ecx + ebx*4] */
  esi = R32((uint32_t)(ecx + ebx*4));
/* 7ee944: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ee947: mov edx, dword ptr [esi + 0x94] */
  edx = R32((uint32_t)(esi + 0x94u));
/* 7ee94d: cmp edx, dword ptr [eax + 0x10c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x10cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ee953: je 0x7eea2a */
  if (zf) goto L_7eea2a;
L_7ee959: /* 7ee959: mov ecx, esi */
  ecx = esi;
/* 7ee95b: call dword ptr [0xcfa2b4] */
  esp -= 4; W32(esp, 0x7ee961u); SPILL(); f_4e39ae(); if (g_unwind) return; /* Core!?GetIndex@UObject@@QBEKXZ */ RELOAD();
/* 7ee961: mov ecx, dword ptr [edi + 0x3ee8] */
  ecx = R32((uint32_t)(edi + 0x3ee8u));
/* 7ee967: mov edx, dword ptr [edi + 0x3ee4] */
  edx = R32((uint32_t)(edi + 0x3ee4u));
/* 7ee96d: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 7ee96e: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7ee970: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
L_7ee973: /* 7ee973: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ee976: je 0x7ee992 */
  if (zf) goto L_7ee992;
L_7ee978: /* 7ee978: mov ecx, dword ptr [edi + 0x3ed8] */
  ecx = R32((uint32_t)(edi + 0x3ed8u));
/* 7ee97e: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 7ee981: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 7ee984: cmp dword ptr [eax + 4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ee987: jne 0x7ee98e */
  if (!zf) goto L_7ee98e;
L_7ee989: /* 7ee989: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7ee98c: jmp 0x7ee994 */
  goto L_7ee994;
L_7ee98e: /* 7ee98e: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7ee990: jmp 0x7ee973 */
  goto L_7ee973;
L_7ee992: /* 7ee992: xor eax, eax */
  eax = 0;
L_7ee994: /* 7ee994: test byte ptr [esi + 0x84], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x84u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ee99b: je 0x7ee9d7 */
  if (zf) goto L_7ee9d7;
L_7ee99d: /* 7ee99d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ee99f: je 0x7ee9d7 */
  if (zf) goto L_7ee9d7;
L_7ee9a1: /* 7ee9a1: mov ecx, dword ptr [eax + 0x8c] */
  ecx = R32((uint32_t)(eax + 0x8cu));
/* 7ee9a7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ee9a9: jne 0x7ee9d7 */
  if (!zf) goto L_7ee9d7;
L_7ee9ab: /* 7ee9ab: mov ecx, dword ptr [eax + 0x9c] */
  ecx = R32((uint32_t)(eax + 0x9cu));
/* 7ee9b1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ee9b3: je 0x7ee9d7 */
  if (zf) goto L_7ee9d7;
L_7ee9b5: /* 7ee9b5: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 7ee9bb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ee9bd: jne 0x7ee9d7 */
  if (!zf) goto L_7ee9d7;
L_7ee9bf: /* 7ee9bf: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ee9c2: mov ecx, dword ptr [edx + 0x3c] */
  ecx = R32((uint32_t)(edx + 0x3cu));
/* 7ee9c5: mov edx, dword ptr [ecx + 0x44] */
  edx = R32((uint32_t)(ecx + 0x44u));
/* 7ee9c8: mov dword ptr [eax + 0x70], edx */
  W32((uint32_t)(eax + 0x70u), edx);
/* 7ee9cb: mov ecx, dword ptr [ecx + 0x48] */
  ecx = R32((uint32_t)(ecx + 0x48u));
/* 7ee9ce: mov dword ptr [eax + 0x74], ecx */
  W32((uint32_t)(eax + 0x74u), ecx);
/* 7ee9d1: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7ee9d2: jmp 0x7ee932 */
  goto L_7ee932;
L_7ee9d7: /* 7ee9d7: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ee9da: mov ecx, dword ptr [edx + 0x10c] */
  ecx = R32((uint32_t)(edx + 0x10cu));
/* 7ee9e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ee9e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ee9e2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ee9e3: lea edx, [ebp - 0x54] */
  edx = (uint32_t)(ebp + 0xffffffacu);
/* 7ee9e6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ee9e7: lea eax, [ebp - 0xc0] */
  eax = (uint32_t)(ebp + 0xffffff40u);
/* 7ee9ed: mov dword ptr [esi + 0x94], ecx */
  W32((uint32_t)(esi + 0x94u), ecx);
/* 7ee9f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ee9f4: lea ecx, [ebp - 0x118] */
  ecx = (uint32_t)(ebp + 0xfffffee8u);
/* 7ee9fa: call 0x6c3a30 */
  esp -= 4; W32(esp, 0x7ee9ffu); SPILL(); f_6c3a30(); if (g_unwind) return; RELOAD();
/* 7ee9ff: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7eea02: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 7eea04: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7eea07: lea ecx, [edx + edx*2] */
  ecx = (uint32_t)(edx + edx*2);
/* 7eea0a: lea ecx, [esi + ecx*4] */
  ecx = (uint32_t)(esi + ecx*4);
/* 7eea0d: mov esi, ecx */
  esi = ecx;
/* 7eea0f: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
/* 7eea11: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 7eea14: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 7eea17: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7eea1a: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7eea1d: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 7eea20: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7eea23: mov dword ptr [eax + edx*4], ecx */
  W32((uint32_t)(eax + edx*4), ecx);
/* 7eea26: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7eea27: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
L_7eea2a: /* 7eea2a: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7eea2b: jmp 0x7ee932 */
  goto L_7ee932;
L_7eea30: /* 7eea30: xor ebx, ebx */
  ebx = 0;
L_7eea32: /* 7eea32: cmp ebx, dword ptr [edi + 0x3f10] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x3f10u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7eea38: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 7eea3b: jge 0x7eeb6b */
  if ((sf == of)) goto L_7eeb6b;
L_7eea41: /* 7eea41: mov ecx, dword ptr [edi + 0x3f0c] */
  ecx = R32((uint32_t)(edi + 0x3f0cu));
/* 7eea47: mov esi, dword ptr [ecx + ebx*4] */
  esi = R32((uint32_t)(ecx + ebx*4));
/* 7eea4a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7eea4d: mov edx, dword ptr [esi + 0x94] */
  edx = R32((uint32_t)(esi + 0x94u));
/* 7eea53: cmp edx, dword ptr [eax + 0x10c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x10cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7eea59: je 0x7eead3 */
  if (zf) goto L_7eead3;
L_7eea5b: /* 7eea5b: mov ecx, esi */
  ecx = esi;
/* 7eea5d: call dword ptr [0xcfa2b4] */
  esp -= 4; W32(esp, 0x7eea63u); SPILL(); f_4e39ae(); if (g_unwind) return; /* Core!?GetIndex@UObject@@QBEKXZ */ RELOAD();
/* 7eea63: mov ecx, dword ptr [edi + 0x3ee8] */
  ecx = R32((uint32_t)(edi + 0x3ee8u));
/* 7eea69: mov edx, dword ptr [edi + 0x3ee4] */
  edx = R32((uint32_t)(edi + 0x3ee4u));
/* 7eea6f: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 7eea70: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7eea72: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
L_7eea75: /* 7eea75: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7eea78: je 0x7eea94 */
  if (zf) goto L_7eea94;
L_7eea7a: /* 7eea7a: mov ecx, dword ptr [edi + 0x3ed8] */
  ecx = R32((uint32_t)(edi + 0x3ed8u));
/* 7eea80: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 7eea83: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 7eea86: cmp dword ptr [eax + 4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7eea89: jne 0x7eea90 */
  if (!zf) goto L_7eea90;
L_7eea8b: /* 7eea8b: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7eea8e: jmp 0x7eea96 */
  goto L_7eea96;
L_7eea90: /* 7eea90: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7eea92: jmp 0x7eea75 */
  goto L_7eea75;
L_7eea94: /* 7eea94: xor eax, eax */
  eax = 0;
L_7eea96: /* 7eea96: test byte ptr [esi + 0x84], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x84u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7eea9d: je 0x7eead9 */
  if (zf) goto L_7eead9;
L_7eea9f: /* 7eea9f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eeaa1: je 0x7eead9 */
  if (zf) goto L_7eead9;
L_7eeaa3: /* 7eeaa3: mov ecx, dword ptr [eax + 0x8c] */
  ecx = R32((uint32_t)(eax + 0x8cu));
/* 7eeaa9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eeaab: jne 0x7eead9 */
  if (!zf) goto L_7eead9;
L_7eeaad: /* 7eeaad: mov ecx, dword ptr [eax + 0x9c] */
  ecx = R32((uint32_t)(eax + 0x9cu));
/* 7eeab3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eeab5: je 0x7eead9 */
  if (zf) goto L_7eead9;
L_7eeab7: /* 7eeab7: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 7eeabd: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eeabf: jne 0x7eead9 */
  if (!zf) goto L_7eead9;
L_7eeac1: /* 7eeac1: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7eeac4: mov ecx, dword ptr [edx + 0x3c] */
  ecx = R32((uint32_t)(edx + 0x3cu));
/* 7eeac7: mov edx, dword ptr [ecx + 0x44] */
  edx = R32((uint32_t)(ecx + 0x44u));
/* 7eeaca: mov dword ptr [eax + 0x70], edx */
  W32((uint32_t)(eax + 0x70u), edx);
/* 7eeacd: mov ecx, dword ptr [ecx + 0x48] */
  ecx = R32((uint32_t)(ecx + 0x48u));
/* 7eead0: mov dword ptr [eax + 0x74], ecx */
  W32((uint32_t)(eax + 0x74u), ecx);
L_7eead3: /* 7eead3: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7eead4: jmp 0x7eea32 */
  goto L_7eea32;
L_7eead9: /* 7eead9: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7eeadc: mov ecx, dword ptr [edx + 0x10c] */
  ecx = R32((uint32_t)(edx + 0x10cu));
/* 7eeae2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7eeae3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7eeae4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7eeae5: lea edx, [ebp - 0x54] */
  edx = (uint32_t)(ebp + 0xffffffacu);
/* 7eeae8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7eeae9: lea eax, [ebp - 0xc0] */
  eax = (uint32_t)(ebp + 0xffffff40u);
/* 7eeaef: mov dword ptr [esi + 0x94], ecx */
  W32((uint32_t)(esi + 0x94u), ecx);
/* 7eeaf5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7eeaf6: lea ecx, [ebp - 0x124] */
  ecx = (uint32_t)(ebp + 0xfffffedcu);
/* 7eeafc: call 0x6c3a30 */
  esp -= 4; W32(esp, 0x7eeb01u); SPILL(); f_6c3a30(); if (g_unwind) return; RELOAD();
/* 7eeb01: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7eeb04: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 7eeb06: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7eeb09: lea ecx, [edx + edx*2] */
  ecx = (uint32_t)(edx + edx*2);
/* 7eeb0c: lea ecx, [esi + ecx*4] */
  ecx = (uint32_t)(esi + ecx*4);
/* 7eeb0f: mov esi, ecx */
  esi = ecx;
/* 7eeb11: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
/* 7eeb13: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 7eeb16: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 7eeb19: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7eeb1c: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7eeb1f: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 7eeb22: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7eeb25: mov dword ptr [eax + edx*4], ecx */
  W32((uint32_t)(eax + edx*4), ecx);
/* 7eeb28: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7eeb29: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 7eeb2c: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7eeb2d: jmp 0x7eea32 */
  goto L_7eea32;
L_7eeb6b: /* 7eeb6b: mov eax, dword ptr [edi + 0x68] */
  eax = R32((uint32_t)(edi + 0x68u));
/* 7eeb6e: xor esi, esi */
  esi = 0;
/* 7eeb70: mov dword ptr [edi + 0x3f0c], esi */
  W32((uint32_t)(edi + 0x3f0cu), esi);
/* 7eeb76: mov dword ptr [edi + 0x3f10], esi */
  W32((uint32_t)(edi + 0x3f10u), esi);
/* 7eeb7c: mov ecx, dword ptr [eax + 0x44] */
  ecx = R32((uint32_t)(eax + 0x44u));
/* 7eeb7f: mov dword ptr [edi + 0x110], ecx */
  W32((uint32_t)(edi + 0x110u), ecx);
/* 7eeb85: mov edx, dword ptr [eax + 0x48] */
  edx = R32((uint32_t)(eax + 0x48u));
/* 7eeb88: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7eeb8b: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7eeb8e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7eeb8f: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7eeb92: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7eeb93: mov dword ptr [edi + 0x114], edx */
  W32((uint32_t)(edi + 0x114u), edx);
/* 7eeb99: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7eeb9d: call 0x6ccc39 */
  esp -= 4; W32(esp, 0x7eeba2u); SPILL(); f_6ccc39(); if (g_unwind) return; RELOAD();
/* 7eeba2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7eeba5: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7eeba8: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7eebaa: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 7eebae: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7eebb0: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
L_7eebb3: /* 7eebb3: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7eebb6: cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7eebb9: jge 0x7eee06 */
  if ((sf == of)) goto L_7eee06;
L_7eebbf: /* 7eebbf: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7eebc2: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7eebc5: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 7eebc8: mov esi, dword ptr [eax + 8] */
  esi = R32((uint32_t)(eax + 0x8u));
/* 7eebcb: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eebcd: je 0x7eebda */
  if (zf) goto L_7eebda;
L_7eebcf: /* 7eebcf: mov ecx, dword ptr [esi + 0x68] */
  ecx = R32((uint32_t)(esi + 0x68u));
/* 7eebd2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eebd4: je 0x7eee5c */
  if (zf) goto L_7eee5c;
L_7eebda: /* 7eebda: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 7eebdd: test byte ptr [ebx + 0x84], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x84u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7eebe4: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 7eebeb: jne 0x7eec3d */
  if (!zf) goto L_7eec3d;
L_7eebed: /* 7eebed: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eebef: je 0x7eec0a */
  if (zf) goto L_7eec0a;
L_7eebf1: /* 7eebf1: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7eebf4: mov eax, dword ptr [edx + 0x3c] */
  eax = R32((uint32_t)(edx + 0x3cu));
/* 7eebf7: fld qword ptr [eax + 0x44] */
  { double v = F64((uint32_t)(eax + 0x44u)); FPUSH(v); }
/* 7eebfa: fsub qword ptr [esi + 0x70] */
  ST0 = ST0 - (F64((uint32_t)(esi + 0x70u)));
/* 7eebfd: fcomp qword ptr [0xa0da58] */
  fpu_com(ST0, F64((uint32_t)(0xa0da58u)));
  FPOP();
/* 7eec03: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7eec05: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7eec08: jne 0x7eec3d */
  if (!zf) goto L_7eec3d;
L_7eec0a: /* 7eec0a: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7eec0d: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7eec0f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7eec12: mov eax, esp */
  eax = esp;
/* 7eec14: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7eec16: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 7eec19: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7eec1c: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7eec1f: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7eec22: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 7eec25: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7eec28: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7eec29: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7eec2a: mov ecx, ebx */
  ecx = ebx;
/* 7eec2c: call dword ptr [edx + 0xf8] */
  { uint32_t t = R32((uint32_t)(edx + 0xf8u)); esp -= 4; W32(esp, 0x7eec32u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7eec32: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eec34: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7eec37: jne 0x7eed5b */
  if (!zf) goto L_7eed5b;
L_7eec3d: /* 7eec3d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eec3f: je 0x7eee5c */
  if (zf) goto L_7eee5c;
L_7eec45: /* 7eec45: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7eec48: mov eax, dword ptr [edx + 0x3c] */
  eax = R32((uint32_t)(edx + 0x3cu));
/* 7eec4b: fld qword ptr [eax + 0x44] */
  { double v = F64((uint32_t)(eax + 0x44u)); FPUSH(v); }
/* 7eec4e: fsub qword ptr [esi + 0x70] */
  ST0 = ST0 - (F64((uint32_t)(esi + 0x70u)));
/* 7eec51: fld dword ptr [eax + 0x58] */
  { double v = F32((uint32_t)(eax + 0x58u)); FPUSH(v); }
/* 7eec54: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 7eec56: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7eec58: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7eec5b: je 0x7eed5b */
  if (zf) goto L_7eed5b;
L_7eec61: /* 7eec61: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7eec63: mov ecx, esi */
  ecx = esi;
/* 7eec65: call dword ptr [eax + 0x70] */
  { uint32_t t = R32((uint32_t)(eax + 0x70u)); esp -= 4; W32(esp, 0x7eec68u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7eec68: mov ecx, dword ptr [ebx + 0xd0] */
  ecx = R32((uint32_t)(ebx + 0xd0u));
/* 7eec6e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eec70: je 0x7eee5c */
  if (zf) goto L_7eee5c;
L_7eec76: /* 7eec76: push 0xce2798 */
  { uint32_t v = 0xce2798u; esp -= 4; W32(esp, v); }
/* 7eec7b: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7eec81u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7eec81: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eec83: je 0x7eee5c */
  if (zf) goto L_7eee5c;
L_7eec89: /* 7eec89: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
L_7eec90: /* 7eec90: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7eec93: cmp ecx, dword ptr [ebx + 0x200] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x200u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7eec99: jge 0x7eee5c */
  if ((sf == of)) goto L_7eee5c;
L_7eec9f: /* 7eec9f: mov edx, dword ptr [ebx + 0x1fc] */
  edx = R32((uint32_t)(ebx + 0x1fcu));
/* 7eeca5: mov edi, ecx */
  edi = ecx;
/* 7eeca7: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 7eecaa: mov eax, dword ptr [edi + edx] */
  eax = R32((uint32_t)(edi + edx));
/* 7eecad: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eecaf: je 0x7eed48 */
  if (zf) goto L_7eed48;
L_7eecb5: /* 7eecb5: test byte ptr [eax + 0x84], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x84u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7eecbc: jne 0x7eed48 */
  if (!zf) goto L_7eed48;
L_7eecc2: /* 7eecc2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7eecc4: lea ecx, [ebp - 0xa4] */
  ecx = (uint32_t)(ebp + 0xffffff5cu);
/* 7eecca: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7eecd0u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7eecd0: mov ecx, dword ptr [ebx + 0x1fc] */
  ecx = R32((uint32_t)(ebx + 0x1fcu));
/* 7eecd6: mov ecx, dword ptr [edi + ecx] */
  ecx = R32((uint32_t)(edi + ecx));
/* 7eecd9: lea eax, [ebp - 0xa4] */
  eax = (uint32_t)(ebp + 0xffffff5cu);
/* 7eecdf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7eece0: add ecx, 0xac */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xacu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7eece6: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x7eececu); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 7eecec: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eecee: je 0x7eed48 */
  if (zf) goto L_7eed48;
L_7eecf0: /* 7eecf0: mov esi, dword ptr [ebx + 0x1fc] */
  esi = R32((uint32_t)(ebx + 0x1fcu));
/* 7eecf6: mov ecx, dword ptr [esi + edi] */
  ecx = R32((uint32_t)(esi + edi));
/* 7eecf9: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7eecfb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eecfd: je 0x7eed07 */
  if (zf) goto L_7eed07;
L_7eecff: /* 7eecff: call dword ptr [0xcfa2b4] */
  esp -= 4; W32(esp, 0x7eed05u); SPILL(); f_4e39ae(); if (g_unwind) return; /* Core!?GetIndex@UObject@@QBEKXZ */ RELOAD();
/* 7eed05: jmp 0x7eed09 */
  goto L_7eed09;
L_7eed07: /* 7eed07: xor eax, eax */
  eax = 0;
L_7eed09: /* 7eed09: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7eed0c: mov edx, dword ptr [ecx + 0x3ee8] */
  edx = R32((uint32_t)(ecx + 0x3ee8u));
/* 7eed12: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 7eed13: and edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7eed15: mov eax, dword ptr [ecx + 0x3ee4] */
  eax = R32((uint32_t)(ecx + 0x3ee4u));
/* 7eed1b: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 7eed1e: mov edi, edi */
  edi = edi;
L_7eed20: /* 7eed20: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7eed23: je 0x7eed48 */
  if (zf) goto L_7eed48;
L_7eed25: /* 7eed25: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 7eed27: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 7eed2a: mov eax, dword ptr [ecx + 0x3ed8] */
  eax = R32((uint32_t)(ecx + 0x3ed8u));
/* 7eed30: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 7eed33: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7eed36: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7eed38: jne 0x7eed57 */
  if (!zf) goto L_7eed57;
L_7eed3a: /* 7eed3a: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7eed3d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eed3f: je 0x7eed48 */
  if (zf) goto L_7eed48;
L_7eed41: /* 7eed41: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7eed43: mov ecx, eax */
  ecx = eax;
/* 7eed45: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x7eed48u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7eed48: /* 7eed48: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7eed4b: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7eed4e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7eed4f: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7eed52: jmp 0x7eec90 */
  goto L_7eec90;
L_7eed57: /* 7eed57: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7eed59: jmp 0x7eed20 */
  goto L_7eed20;
L_7eed5b: /* 7eed5b: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 7eed60: mov ecx, dword ptr [0xce84f0] */
  ecx = R32((uint32_t)(0xce84f0u));
/* 7eed66: mov edx, dword ptr [eax + ecx*4] */
  edx = R32((uint32_t)(eax + ecx*4));
/* 7eed69: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7eed6a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eed6c: mov dword ptr [eax + ecx*4], edx */
  W32((uint32_t)(eax + ecx*4), edx);
/* 7eed6f: jne 0x7eedad */
  if (!zf) goto L_7eedad;
L_7eed71: /* 7eed71: mov ecx, ebx */
  ecx = ebx;
/* 7eed73: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7eed79u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7eed79: mov ecx, dword ptr [edi + 0xb4] */
  ecx = R32((uint32_t)(edi + 0xb4u));
/* 7eed7f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7eed81: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7eed82: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x7eed85u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7eed85: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7eed88: je 0x7eee5c */
  if (zf) goto L_7eee5c;
L_7eed8e: /* 7eed8e: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7eed90: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7eed92: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7eed94: mov ecx, edi */
  ecx = edi;
/* 7eed96: call 0x6c74cd */
  esp -= 4; W32(esp, 0x7eed9bu); SPILL(); f_6c74cd(); if (g_unwind) return; RELOAD();
/* 7eed9b: mov esi, eax */
  esi = eax;
/* 7eed9d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eed9f: je 0x7eee5c */
  if (zf) goto L_7eee5c;
L_7eeda5: /* 7eeda5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7eeda6: mov ecx, esi */
  ecx = esi;
/* 7eeda8: call 0x6c24eb */
  esp -= 4; W32(esp, 0x7eedadu); SPILL(); f_6c24eb(); if (g_unwind) return; RELOAD();
L_7eedad: /* 7eedad: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7eedaf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7eedb1: mov ecx, edi */
  ecx = edi;
/* 7eedb3: call dword ptr [eax + 0x8c] */
  { uint32_t t = R32((uint32_t)(eax + 0x8cu)); esp -= 4; W32(esp, 0x7eedb9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7eedb9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eedbb: je 0x7eee06 */
  if (zf) goto L_7eee06;
L_7eedbd: /* 7eedbd: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7eedc0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eedc2: je 0x7eeddf */
  if (zf) goto L_7eeddf;
L_7eedc4: /* 7eedc4: call dword ptr [0xcfa634] */
  esp -= 4; W32(esp, 0x7eedcau); SPILL(); f_4e1fc3(); if (g_unwind) return; /* Core!?appFrand@@YAMXZ */ RELOAD();
/* 7eedca: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 7eedcd: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 7eedd3: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7eedd6: mov edx, dword ptr [ecx + 0x3c] */
  edx = R32((uint32_t)(ecx + 0x3cu));
/* 7eedd9: fadd qword ptr [edx + 0x44] */
  ST0 = ST0 + (F64((uint32_t)(edx + 0x44u)));
/* 7eeddc: fstp qword ptr [esi + 0x70] */
  WF64((uint32_t)(esi + 0x70u), ST0); FPOP();
L_7eeddf: /* 7eeddf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7eede1: mov ecx, esi */
  ecx = esi;
/* 7eede3: call 0x6c1c62 */
  esp -= 4; W32(esp, 0x7eede8u); SPILL(); f_6c1c62(); if (g_unwind) return; RELOAD();
/* 7eede8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eedea: je 0x7eedf6 */
  if (zf) goto L_7eedf6;
L_7eedec: /* 7eedec: mov ecx, esi */
  ecx = esi;
/* 7eedee: call 0x6c8927 */
  esp -= 4; W32(esp, 0x7eedf3u); SPILL(); f_6c8927(); if (g_unwind) return; RELOAD();
/* 7eedf3: inc dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
L_7eedf6: /* 7eedf6: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7eedf8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7eedfa: mov ecx, edi */
  ecx = edi;
/* 7eedfc: call dword ptr [eax + 0x8c] */
  { uint32_t t = R32((uint32_t)(eax + 0x8cu)); esp -= 4; W32(esp, 0x7eee02u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7eee02: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eee04: jne 0x7eee5c */
  if (!zf) goto L_7eee5c;
L_7eee06: /* 7eee06: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 7eee09: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7eee10: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x7eee16u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 7eee16: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7eee18: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
L_7eee1b: /* 7eee1b: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7eee1e: jmp 0x7ee5dc */
  goto L_7ee5dc;
L_7eee40: /* 7eee40: push 0xa111c4 */
  { uint32_t v = 0xa111c4u; esp -= 4; W32(esp, v); }
/* 7eee45: push 0xade7a8 */
  { uint32_t v = 0xade7a8u; esp -= 4; W32(esp, v); }
/* 7eee4a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7eee50u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7eee50: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7eee53: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7eee55: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7eee57: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7eee5cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7eee5c: /* 7eee5c: inc dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 7eee5f: jmp 0x7eebb3 */
  goto L_7eebb3;
L_7eee9d: /* 7eee9d: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 7eeea0: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x7eeea6u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 7eeea6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7eeea9: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 7eeeac: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7eeead: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7eeeae: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7eeeb5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7eeeb6: mov esp, ebp */
  esp = ebp;
/* 7eeeb8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7eeeb9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7eee64(void) {
  LOAD_REGS();
L_7eee64: /* 7eee64: mov eax, dword ptr [ebp - 0x104] */
  eax = R32((uint32_t)(ebp + 0xfffffefcu));
/* 7eee6a: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7eee6f: lea ecx, [ebp - 0x9c] */
  ecx = (uint32_t)(ebp + 0xffffff64u);
/* 7eee75: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7eee76: mov dword ptr [ebp - 0x9c], eax */
  W32((uint32_t)(ebp + 0xffffff64u), eax);
/* 7eee7c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7eee81u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7eee81(); return;
}

void f_7eee81(void) {
  LOAD_REGS();
L_7eee81: /* 7eee81: push 0xa1119c */
  { uint32_t v = 0xa1119cu; esp -= 4; W32(esp, v); }
/* 7eee86: push 0xade7a0 */
  { uint32_t v = 0xade7a0u; esp -= 4; W32(esp, v); }
/* 7eee8b: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7eee91u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7eee91: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7eee94: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7eee96: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7eee98: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7eee9du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7eee9d: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 7eeea0: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x7eeea6u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 7eeea6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7eeea9: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 7eeeac: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7eeead: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7eeeae: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7eeeb5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7eeeb6: mov esp, ebp */
  esp = ebp;
/* 7eeeb8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7eeeb9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7eeebc(void) {
  LOAD_REGS();
L_7eeebc: /* 7eeebc: mov edx, dword ptr [ebp - 0x10c] */
  edx = R32((uint32_t)(ebp + 0xfffffef4u));
/* 7eeec2: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7eeec7: lea eax, [ebp - 0x98] */
  eax = (uint32_t)(ebp + 0xffffff68u);
/* 7eeecd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7eeece: mov dword ptr [ebp - 0x98], edx */
  W32((uint32_t)(ebp + 0xffffff68u), edx);
/* 7eeed4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7eeed9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7eeed9(); return;
}

void f_7eeed9(void) {
  LOAD_REGS();
L_7eeed9: /* 7eeed9: push 0xa1115c */
  { uint32_t v = 0xa1115cu; esp -= 4; W32(esp, v); }
/* 7eeede: push 0xade7b0 */
  { uint32_t v = 0xade7b0u; esp -= 4; W32(esp, v); }
/* 7eeee3: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7eeee9u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7eeee9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7eeeec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7eeeee: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7eeef0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7eeef5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7eeef5: guest_badaddr(0x7eeef5); return;
}

void f_7ef200(void) {
  LOAD_REGS();
L_7ef200: /* 7ef200: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 7ef203: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ef205: je 0x7ef22b */
  if (zf) goto L_7ef22b;
L_7ef207: /* 7ef207: cmp dword ptr [ecx + 0x6c], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x6cu))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ef20b: jne 0x7ef22b */
  if (!zf) goto L_7ef22b;
L_7ef20d: /* 7ef20d: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 7ef211: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ef212: add ecx, 0x3ed8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3ed8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7ef218: call 0x6c3e18 */
  esp -= 4; W32(esp, 0x7ef21du); SPILL(); f_6c3e18(); if (g_unwind) return; RELOAD();
/* 7ef21d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ef21f: je 0x7ef22b */
  if (zf) goto L_7ef22b;
L_7ef221: /* 7ef221: mov dword ptr [eax + 0x8c], 1 */
  W32((uint32_t)(eax + 0x8cu), 0x1u);
L_7ef22b: /* 7ef22b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7ef240(void) {
  LOAD_REGS();
L_7ef240: /* 7ef240: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7ef241: mov ebp, esp */
  ebp = esp;
/* 7ef243: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7ef245: push 0x9d1254 */
  { uint32_t v = 0x9d1254u; esp -= 4; W32(esp, v); }
/* 7ef24a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7ef250: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ef251: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7ef258: sub esp, 0x4c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ef25b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ef25c: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7ef25f: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* 7ef262: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ef263: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ef264: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 7ef266: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ef268: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7ef26b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7ef272: je 0x7ef2d1 */
  if (zf) goto L_7ef2d1;
L_7ef274: /* 7ef274: mov eax, dword ptr [edi + 0x80] */
  eax = R32((uint32_t)(edi + 0x80u));
/* 7ef27a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  }
/* 7ef27c: jns 0x7ef2d1 */
  if (!sf) goto L_7ef2d1;
L_7ef27e: /* 7ef27e: mov edx, dword ptr [ecx + 0x3c] */
  edx = R32((uint32_t)(ecx + 0x3cu));
/* 7ef281: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 7ef284: lea esi, [eax - 1] */
  esi = (uint32_t)(eax + 0xffffffffu);
L_7ef287: /* 7ef287: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7ef289: jl 0x7ef2c7 */
  if ((sf != of)) goto L_7ef2c7;
L_7ef28b: /* 7ef28b: mov eax, dword ptr [ecx + 0x3c] */
  eax = R32((uint32_t)(ecx + 0x3cu));
/* 7ef28e: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7ef291: mov eax, dword ptr [ecx + esi*4] */
  eax = R32((uint32_t)(ecx + esi*4));
/* 7ef294: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 7ef297: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ef299: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 7ef29c: je 0x7ef2c1 */
  if (zf) goto L_7ef2c1;
L_7ef29e: /* 7ef29e: cmp dword ptr [eax + 0x6c], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x6cu))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ef2a2: jne 0x7ef2c1 */
  if (!zf) goto L_7ef2c1;
L_7ef2a4: /* 7ef2a4: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 7ef2a7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ef2a8: lea ecx, [eax + 0x3ed8] */
  ecx = (uint32_t)(eax + 0x3ed8u);
/* 7ef2ae: call 0x6c3e18 */
  esp -= 4; W32(esp, 0x7ef2b3u); SPILL(); f_6c3e18(); if (g_unwind) return; RELOAD();
/* 7ef2b3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ef2b5: je 0x7ef2c1 */
  if (zf) goto L_7ef2c1;
L_7ef2b7: /* 7ef2b7: mov dword ptr [eax + 0x8c], 1 */
  W32((uint32_t)(eax + 0x8cu), 0x1u);
L_7ef2c1: /* 7ef2c1: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ef2c4: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 7ef2c5: jmp 0x7ef287 */
  goto L_7ef287;
L_7ef2c7: /* 7ef2c7: and dword ptr [edi + 0x80], 0x7fffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x80u))); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(edi + 0x80u), r);
  }
L_7ef2d1: /* 7ef2d1: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ef2d4: mov ebx, dword ptr [ecx + 0x108] */
  ebx = R32((uint32_t)(ecx + 0x108u));
/* 7ef2da: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_7ef2e0: /* 7ef2e0: cmp ebx, dword ptr [ecx + 0x30] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ef2e3: jge 0x7ef352 */
  if ((sf == of)) goto L_7ef352;
L_7ef2e5: /* 7ef2e5: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* 7ef2e8: mov esi, dword ptr [eax + ebx*4] */
  esi = R32((uint32_t)(eax + ebx*4));
/* 7ef2eb: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ef2ed: je 0x7ef34c */
  if (zf) goto L_7ef34c;
L_7ef2ef: /* 7ef2ef: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 7ef2f5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  }
/* 7ef2f7: jns 0x7ef34c */
  if (!sf) goto L_7ef34c;
L_7ef2f9: /* 7ef2f9: mov edx, dword ptr [ecx + 0x3c] */
  edx = R32((uint32_t)(ecx + 0x3cu));
/* 7ef2fc: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 7ef2ff: lea edi, [eax - 1] */
  edi = (uint32_t)(eax + 0xffffffffu);
L_7ef302: /* 7ef302: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7ef304: jl 0x7ef342 */
  if ((sf != of)) goto L_7ef342;
L_7ef306: /* 7ef306: mov eax, dword ptr [ecx + 0x3c] */
  eax = R32((uint32_t)(ecx + 0x3cu));
/* 7ef309: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7ef30c: mov eax, dword ptr [ecx + edi*4] */
  eax = R32((uint32_t)(ecx + edi*4));
/* 7ef30f: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 7ef312: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ef314: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 7ef317: je 0x7ef33c */
  if (zf) goto L_7ef33c;
L_7ef319: /* 7ef319: cmp dword ptr [eax + 0x6c], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x6cu))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ef31d: jne 0x7ef33c */
  if (!zf) goto L_7ef33c;
L_7ef31f: /* 7ef31f: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 7ef322: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ef323: lea ecx, [eax + 0x3ed8] */
  ecx = (uint32_t)(eax + 0x3ed8u);
/* 7ef329: call 0x6c3e18 */
  esp -= 4; W32(esp, 0x7ef32eu); SPILL(); f_6c3e18(); if (g_unwind) return; RELOAD();
/* 7ef32e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ef330: je 0x7ef33c */
  if (zf) goto L_7ef33c;
L_7ef332: /* 7ef332: mov dword ptr [eax + 0x8c], 1 */
  W32((uint32_t)(eax + 0x8cu), 0x1u);
L_7ef33c: /* 7ef33c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ef33f: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 7ef340: jmp 0x7ef302 */
  goto L_7ef302;
L_7ef342: /* 7ef342: and dword ptr [esi + 0x80], 0x7fffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x80u))); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x80u), r);
  }
L_7ef34c: /* 7ef34c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ef34f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7ef350: jmp 0x7ef2e0 */
  goto L_7ef2e0;
L_7ef352: /* 7ef352: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 7ef357: mov ecx, dword ptr [0xce8470] */
  ecx = R32((uint32_t)(0xce8470u));
/* 7ef35d: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 7ef360: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7ef362: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* 7ef364: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ef367: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7ef36a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7ef36c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ef36d: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0x7ef370u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ef370: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 7ef376: mov edx, dword ptr [0xce8470] */
  edx = R32((uint32_t)(0xce8470u));
/* 7ef37c: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 7ef37f: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 7ef382: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7ef384: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7ef386: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7ef389: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7ef38b: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7ef38d: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 7ef390: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ef393: fsubr qword ptr [edi + 0xd0] */
  ST0 = (F64((uint32_t)(edi + 0xd0u))) - ST0;
/* 7ef399: call 0x99c958 */
  esp -= 4; W32(esp, 0x7ef39eu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7ef39e: fld qword ptr [edi + 0xd0] */
  { double v = F64((uint32_t)(edi + 0xd0u)); FPUSH(v); }
/* 7ef3a4: mov esi, eax */
  esi = eax;
/* 7ef3a6: call 0x99c958 */
  esp -= 4; W32(esp, 0x7ef3abu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7ef3ab: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ef3ad: je 0x7ef406 */
  if (zf) goto L_7ef406;
L_7ef3af: /* 7ef3af: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 7ef3b2: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* 7ef3b5: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 7ef3b7: mov esi, dword ptr [eax + 0x30] */
  esi = R32((uint32_t)(eax + 0x30u));
/* 7ef3ba: lea ecx, [edi + 0x60] */
  ecx = (uint32_t)(edi + 0x60u);
/* 7ef3bd: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7ef3c3u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7ef3c3: lea ecx, [ebx + 0x3d4] */
  ecx = (uint32_t)(ebx + 0x3d4u);
/* 7ef3c9: mov edi, eax */
  edi = eax;
/* 7ef3cb: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7ef3d1u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7ef3d1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ef3d3: push 0xade7b8 */
  { uint32_t v = 0xade7b8u; esp -= 4; W32(esp, v); }
/* 7ef3d8: push 0xade7c8 */
  { uint32_t v = 0xade7c8u; esp -= 4; W32(esp, v); }
/* 7ef3dd: mov ebx, eax */
  ebx = eax;
/* 7ef3df: call dword ptr [0xcfa8b0] */
  esp -= 4; W32(esp, 0x7ef3e5u); SPILL(); f_4e1b04(); if (g_unwind) return; /* Core!?LocalizeProgress@@YAPBGPBG00@Z */ RELOAD();
/* 7ef3e5: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 7ef3eb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ef3ee: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ef3ef: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ef3f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ef3f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ef3f2: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7ef3f4: push 0x314 */
  { uint32_t v = 0x314u; esp -= 4; W32(esp, v); }
/* 7ef3f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ef3fa: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x7ef400u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 7ef400: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ef403: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7ef406: /* 7ef406: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7ef409: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ef40b: je 0x7ef64f */
  if (zf) goto L_7ef64f;
L_7ef411: /* 7ef411: xor ebx, ebx */
  ebx = 0;
L_7ef413: /* 7ef413: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* 7ef416: cmp ebx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ef419: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 7ef41c: jge 0x7ef64f */
  if ((sf == of)) goto L_7ef64f;
L_7ef422: /* 7ef422: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7ef425: mov esi, dword ptr [ecx + ebx*4] */
  esi = R32((uint32_t)(ecx + ebx*4));
/* 7ef428: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 7ef42b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ef42d: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 7ef430: je 0x7ef619 */
  if (zf) goto L_7ef619;
L_7ef436: /* 7ef436: cmp dword ptr [esi + 0x6c], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x6cu))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ef43a: jne 0x7ef619 */
  if (!zf) goto L_7ef619;
L_7ef440: /* 7ef440: test byte ptr [esi + 0xd0], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xd0u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ef447: je 0x7ef579 */
  if (zf) goto L_7ef579;
L_7ef44d: /* 7ef44d: xor ebx, ebx */
  ebx = 0;
/* 7ef44f: xor eax, eax */
  eax = 0;
L_7ef451: /* 7ef451: cmp eax, dword ptr [edi + 0x30] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ef454: jge 0x7ef468 */
  if ((sf == of)) goto L_7ef468;
L_7ef456: /* 7ef456: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 7ef459: mov esi, dword ptr [edx + eax*4] */
  esi = R32((uint32_t)(edx + eax*4));
/* 7ef45c: xor ecx, ecx */
  ecx = 0;
/* 7ef45e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ef460: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 7ef463: add ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 7ef465: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7ef466: jmp 0x7ef451 */
  goto L_7ef451;
L_7ef468: /* 7ef468: mov ecx, dword ptr [edi + 0x40] */
  ecx = R32((uint32_t)(edi + 0x40u));
/* 7ef46b: mov edx, dword ptr [edi + 0x3c] */
  edx = R32((uint32_t)(edi + 0x3cu));
/* 7ef46e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7ef470: mov esi, dword ptr [edx + 0x30] */
  esi = R32((uint32_t)(edx + 0x30u));
/* 7ef473: call dword ptr [eax + 0xa8] */
  { uint32_t t = R32((uint32_t)(eax + 0xa8u)); esp -= 4; W32(esp, 0x7ef479u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ef479: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7ef47c: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7ef47f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ef480: call dword ptr [0xcfa5d8] */
  esp -= 4; W32(esp, 0x7ef486u); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* 7ef486: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 7ef48c: mov edx, dword ptr [0xce84ec] */
  edx = R32((uint32_t)(0xce84ecu));
/* 7ef492: mov edi, eax */
  edi = eax;
/* 7ef494: mov eax, dword ptr [ecx + edx*4] */
  eax = R32((uint32_t)(ecx + edx*4));
/* 7ef497: xor edx, edx */
  edx = 0;
/* 7ef499: div esi */
  { uint32_t d = esi; if (!d) d = guest_divzero(0x7ef499);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
/* 7ef49b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ef49e: xor edx, edx */
  edx = 0;
/* 7ef4a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ef4a1: mov eax, dword ptr [0xce84e8] */
  eax = R32((uint32_t)(0xce84e8u));
/* 7ef4a6: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 7ef4a9: div esi */
  { uint32_t d = esi; if (!d) d = guest_divzero(0x7ef4a9);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
/* 7ef4ab: mov edx, dword ptr [0xce84f0] */
  edx = R32((uint32_t)(0xce84f0u));
/* 7ef4b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ef4b2: mov eax, dword ptr [ecx + edx*4] */
  eax = R32((uint32_t)(ecx + edx*4));
/* 7ef4b5: xor edx, edx */
  edx = 0;
/* 7ef4b7: div esi */
  { uint32_t d = esi; if (!d) d = guest_divzero(0x7ef4b7);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
/* 7ef4b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ef4ba: mov eax, dword ptr [0xce8470] */
  eax = R32((uint32_t)(0xce8470u));
/* 7ef4bf: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 7ef4c2: fild dword ptr [ecx + eax*4] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + eax*4)); FPUSH(v); }
/* 7ef4c5: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7ef4c7: jge 0x7ef4cf */
  if ((sf == of)) goto L_7ef4cf;
L_7ef4c9: /* 7ef4c9: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_7ef4cf: /* 7ef4cf: mov eax, dword ptr [0xcfa77c] */
  eax = R32((uint32_t)(0xcfa77cu));
/* 7ef4d4: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 7ef4d6: mov edx, dword ptr [0xce8454] */
  edx = R32((uint32_t)(0xce8454u));
/* 7ef4dc: mov ecx, dword ptr [ecx + edx*4] */
  ecx = R32((uint32_t)(ecx + edx*4));
/* 7ef4df: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ef4e2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7ef4e4: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 7ef4ea: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 7ef4ed: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 7ef4f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ef4f1: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 7ef4f4: jge 0x7ef4fc */
  if ((sf == of)) goto L_7ef4fc;
L_7ef4f6: /* 7ef4f6: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_7ef4fc: /* 7ef4fc: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 7ef4fe: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ef501: lea edx, [ebp - 0x40] */
  edx = (uint32_t)(ebp + 0xffffffc0u);
/* 7ef504: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 7ef50a: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 7ef50d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ef50e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ef50f: push 0xade7e0 */
  { uint32_t v = 0xade7e0u; esp -= 4; W32(esp, v); }
/* 7ef514: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ef515: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x7ef51bu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 7ef51b: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ef51e: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 7ef521: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7ef525: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7ef52bu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7ef52b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ef52c: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7ef52f: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7ef535u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7ef535: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ef536: mov ecx, esp */
  ecx = esp;
/* 7ef538: mov dword ptr [ebp - 0x20], esp */
  W32((uint32_t)(ebp + 0xffffffe0u), esp);
/* 7ef53b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ef53d: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7ef541: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7ef547u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7ef547: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7ef54a: mov ecx, dword ptr [ecx + 0x30] */
  ecx = R32((uint32_t)(ecx + 0x30u));
/* 7ef54d: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 7ef550: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ef551: call 0x6ca91b */
  esp -= 4; W32(esp, 0x7ef556u); SPILL(); f_6ca91b(); if (g_unwind) return; RELOAD();
/* 7ef556: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7ef559: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7ef55d: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7ef563u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7ef563: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 7ef566: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7ef56a: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7ef570u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7ef570: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ef573: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7ef576: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
L_7ef579: /* 7ef579: test byte ptr [esi + 0xd0], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xd0u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ef580: je 0x7ef619 */
  if (zf) goto L_7ef619;
L_7ef586: /* 7ef586: mov eax, dword ptr [esi + 0x68] */
  eax = R32((uint32_t)(esi + 0x68u));
/* 7ef589: fild dword ptr [eax + 0x88] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x88u)); FPUSH(v); }
/* 7ef58f: mov ecx, dword ptr [0xcfa77c] */
  ecx = R32((uint32_t)(0xcfa77cu));
/* 7ef595: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ef598: lea edx, [ebp - 0x58] */
  edx = (uint32_t)(ebp + 0xffffffa8u);
/* 7ef59b: fmul qword ptr [ecx] */
  ST0 = ST0 * (F64((uint32_t)(ecx)));
/* 7ef59d: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 7ef5a3: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 7ef5a7: fild dword ptr [eax + 0x84] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x84u)); FPUSH(v); }
/* 7ef5ad: fmul qword ptr [ecx] */
  ST0 = ST0 * (F64((uint32_t)(ecx)));
/* 7ef5af: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 7ef5b5: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 7ef5b8: push 0xade864 */
  { uint32_t v = 0xade864u; esp -= 4; W32(esp, v); }
/* 7ef5bd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ef5be: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x7ef5c4u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 7ef5c4: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ef5c7: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 7ef5ca: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7ef5ce: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7ef5d4u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7ef5d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ef5d5: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7ef5d8: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7ef5deu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7ef5de: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ef5df: mov ecx, esp */
  ecx = esp;
/* 7ef5e1: mov dword ptr [ebp - 0x20], esp */
  W32((uint32_t)(ebp + 0xffffffe0u), esp);
/* 7ef5e4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ef5e6: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 7ef5ea: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7ef5f0u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7ef5f0: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 7ef5f3: lea eax, [ebp - 0x4c] */
  eax = (uint32_t)(ebp + 0xffffffb4u);
/* 7ef5f6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ef5f7: call 0x6ca91b */
  esp -= 4; W32(esp, 0x7ef5fcu); SPILL(); f_6ca91b(); if (g_unwind) return; RELOAD();
/* 7ef5fc: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7ef5ff: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7ef603: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7ef609u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7ef609: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 7ef60c: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7ef610: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7ef616u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7ef616: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
L_7ef619: /* 7ef619: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7ef61a: jmp 0x7ef413 */
  goto L_7ef413;
L_7ef64f: /* 7ef64f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ef652: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ef653: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ef654: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ef65b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ef65c: mov esp, ebp */
  esp = ebp;
/* 7ef65e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ef65f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7ef61f(void) {
  LOAD_REGS();
L_7ef61f: /* 7ef61f: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7ef622: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7ef627: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 7ef62a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ef62b: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 7ef62e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ef633u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7ef633(); return;
}

void f_7ef633(void) {
  LOAD_REGS();
L_7ef633: /* 7ef633: push 0xa11224 */
  { uint32_t v = 0xa11224u; esp -= 4; W32(esp, v); }
/* 7ef638: push 0xade894 */
  { uint32_t v = 0xade894u; esp -= 4; W32(esp, v); }
/* 7ef63d: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7ef643u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7ef643: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ef646: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ef648: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ef64a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ef64fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7ef64f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ef652: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ef653: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ef654: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ef65b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ef65c: mov esp, ebp */
  esp = ebp;
/* 7ef65e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ef65f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7ef780(void) {
  LOAD_REGS();
L_7ef780: /* 7ef780: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7ef781: mov ebp, esp */
  ebp = esp;
/* 7ef783: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7ef785: push 0x9d1270 */
  { uint32_t v = 0x9d1270u; esp -= 4; W32(esp, v); }
/* 7ef78a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7ef790: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ef791: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7ef798: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ef79b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ef79c: mov ebx, ecx */
  ebx = ecx;
/* 7ef79e: mov eax, dword ptr [ebx + 0x88] */
  eax = R32((uint32_t)(ebx + 0x88u));
/* 7ef7a4: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7ef7a7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ef7a8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ef7a9: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 7ef7ab: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7ef7b1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7ef7b4: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 7ef7b7: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7ef7be: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
L_7ef7c1: /* 7ef7c1: cmp ecx, dword ptr [ebx + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ef7c4: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 7ef7c7: jge 0x7efa27 */
  if ((sf == of)) goto L_7efa27;
L_7ef7cd: /* 7ef7cd: mov eax, dword ptr [ebx + 0x2c] */
  eax = R32((uint32_t)(ebx + 0x2cu));
/* 7ef7d0: mov esi, dword ptr [eax + ecx*4] */
  esi = R32((uint32_t)(eax + ecx*4));
/* 7ef7d3: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7ef7d5: mov cl, byte ptr [eax + 0x4c8] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x4c8u))) & 0xffu);
/* 7ef7db: xor edx, edx */
  edx = 0;
/* 7ef7dd: cmp cl, 3 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7ef7e0: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7ef7e3: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ef7e5: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 7ef7e8: mov eax, edx */
  eax = edx;
/* 7ef7ea: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7ef7ed: je 0x7ef9ee */
  if (zf) goto L_7ef9ee;
L_7ef7f3: /* 7ef7f3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ef7f5: je 0x7ef800 */
  if (zf) goto L_7ef800;
L_7ef7f7: /* 7ef7f7: test byte ptr [esi + 0x84], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x84u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ef7fe: jne 0x7ef828 */
  if (!zf) goto L_7ef828;
L_7ef800: /* 7ef800: mov cl, byte ptr [esi + 0x90] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x90u))) & 0xffu);
/* 7ef806: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ef808: jne 0x7ef828 */
  if (!zf) goto L_7ef828;
L_7ef80a: /* 7ef80a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ef80c: je 0x7ef9ee */
  if (zf) goto L_7ef9ee;
L_7ef812: /* 7ef812: mov al, byte ptr [esi + 0x91] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x91u))) & 0xffu);
/* 7ef818: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ef81a: je 0x7ef9ee */
  if (zf) goto L_7ef9ee;
L_7ef820: /* 7ef820: cmp al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7ef822: je 0x7ef9ee */
  if (zf) goto L_7ef9ee;
L_7ef828: /* 7ef828: test dword ptr [esi + 0x80], 0x20000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x80u))); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ef832: je 0x7ef855 */
  if (zf) goto L_7ef855;
L_7ef834: /* 7ef834: xor eax, eax */
  eax = 0;
L_7ef836: /* 7ef836: cmp eax, dword ptr [edi + 0x3ed0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x3ed0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ef83c: jge 0x7ef855 */
  if ((sf == of)) goto L_7ef855;
L_7ef83e: /* 7ef83e: mov ecx, dword ptr [edi + 0x3ecc] */
  ecx = R32((uint32_t)(edi + 0x3eccu));
/* 7ef844: cmp dword ptr [ecx + eax*4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ef847: je 0x7ef84c */
  if (zf) goto L_7ef84c;
L_7ef849: /* 7ef849: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7ef84a: jmp 0x7ef836 */
  goto L_7ef836;
L_7ef84c: /* 7ef84c: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ef84f: jne 0x7ef9ee */
  if (!zf) goto L_7ef9ee;
L_7ef855: /* 7ef855: test byte ptr [esi + 0x80], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x80u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ef85c: jne 0x7ef87b */
  if (!zf) goto L_7ef87b;
L_7ef85e: /* 7ef85e: mov ecx, esi */
  ecx = esi;
/* 7ef860: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7ef866u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7ef866: mov ecx, eax */
  ecx = eax;
/* 7ef868: call dword ptr [0xcfa3e8] */
  esp -= 4; W32(esp, 0x7ef86eu); SPILL(); f_4e255e(); if (g_unwind) return; /* Core!?GetDefaultActor@UClass@@QAEPAVAActor@@XZ */ RELOAD();
/* 7ef86e: test byte ptr [eax + 0x80], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x80u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ef875: jne 0x7ef9ee */
  if (!zf) goto L_7ef9ee;
L_7ef87b: /* 7ef87b: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* 7ef87e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ef87f: lea ecx, [edi + 0x3ed8] */
  ecx = (uint32_t)(edi + 0x3ed8u);
/* 7ef885: call 0x6c3e18 */
  esp -= 4; W32(esp, 0x7ef88au); SPILL(); f_6c3e18(); if (g_unwind) return; RELOAD();
/* 7ef88a: mov ebx, eax */
  ebx = eax;
/* 7ef88c: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ef88e: jne 0x7ef8e8 */
  if (!zf) goto L_7ef8e8;
L_7ef890: /* 7ef890: mov ecx, esi */
  ecx = esi;
/* 7ef892: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7ef898u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7ef898: mov ecx, dword ptr [edi + 0xb4] */
  ecx = R32((uint32_t)(edi + 0xb4u));
/* 7ef89e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7ef8a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ef8a1: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x7ef8a4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ef8a4: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ef8a7: je 0x7ef9eb */
  if (zf) goto L_7ef9eb;
L_7ef8ad: /* 7ef8ad: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7ef8af: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7ef8b1: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7ef8b3: mov ecx, edi */
  ecx = edi;
/* 7ef8b5: call 0x6c74cd */
  esp -= 4; W32(esp, 0x7ef8bau); SPILL(); f_6c74cd(); if (g_unwind) return; RELOAD();
/* 7ef8ba: mov ebx, eax */
  ebx = eax;
/* 7ef8bc: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ef8be: jne 0x7ef8d8 */
  if (!zf) goto L_7ef8d8;
L_7ef8c0: /* 7ef8c0: push 0x49d */
  { uint32_t v = 0x49du; esp -= 4; W32(esp, v); }
/* 7ef8c5: push 0xade89c */
  { uint32_t v = 0xade89cu; esp -= 4; W32(esp, v); }
/* 7ef8ca: push 0xade8ac */
  { uint32_t v = 0xade8acu; esp -= 4; W32(esp, v); }
/* 7ef8cf: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7ef8d5u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7ef8d5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7ef8d8: /* 7ef8d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ef8d9: mov ecx, ebx */
  ecx = ebx;
/* 7ef8db: call 0x6c24eb */
  esp -= 4; W32(esp, 0x7ef8e0u); SPILL(); f_6c24eb(); if (g_unwind) return; RELOAD();
/* 7ef8e0: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ef8e2: je 0x7ef9eb */
  if (zf) goto L_7ef9eb;
L_7ef8e8: /* 7ef8e8: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 7ef8eb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ef8ed: je 0x7ef907 */
  if (zf) goto L_7ef907;
L_7ef8ef: /* 7ef8ef: push 0x4a3 */
  { uint32_t v = 0x4a3u; esp -= 4; W32(esp, v); }
/* 7ef8f4: push 0xade8b4 */
  { uint32_t v = 0xade8b4u; esp -= 4; W32(esp, v); }
/* 7ef8f9: push 0xade8c4 */
  { uint32_t v = 0xade8c4u; esp -= 4; W32(esp, v); }
/* 7ef8fe: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7ef904u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7ef904: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7ef907: /* 7ef907: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ef909: mov ecx, ebx */
  ecx = ebx;
/* 7ef90b: call 0x6c1c62 */
  esp -= 4; W32(esp, 0x7ef910u); SPILL(); f_6c1c62(); if (g_unwind) return; RELOAD();
/* 7ef910: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ef912: je 0x7ef9eb */
  if (zf) goto L_7ef9eb;
L_7ef918: /* 7ef918: mov edi, dword ptr [esi + 0x88] */
  edi = R32((uint32_t)(esi + 0x88u));
/* 7ef91e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ef921: or edi, 0x200000 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x200000u);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 7ef927: mov dword ptr [esi + 0x88], edi */
  W32((uint32_t)(esi + 0x88u), edi);
/* 7ef92d: mov edx, dword ptr [esi + 0x80] */
  edx = R32((uint32_t)(esi + 0x80u));
/* 7ef933: or edx, 0x80000000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 7ef939: shl eax, 0x16 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 22;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7ef93c: mov dword ptr [esi + 0x80], edx */
  W32((uint32_t)(esi + 0x80u), edx);
/* 7ef942: mov edi, dword ptr [esi + 0x88] */
  edi = R32((uint32_t)(esi + 0x88u));
/* 7ef948: xor eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7ef94a: and eax, 0x400000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7ef94f: mov ecx, edi */
  ecx = edi;
/* 7ef951: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ef953: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ef956: xor edi, edi */
  edi = 0;
/* 7ef958: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ef95a: mov dword ptr [esi + 0x88], ecx */
  W32((uint32_t)(esi + 0x88u), ecx);
/* 7ef960: je 0x7ef9a4 */
  if (zf) goto L_7ef9a4;
L_7ef962: /* 7ef962: test byte ptr [esi + 0x84], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x84u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ef969: je 0x7ef98c */
  if (zf) goto L_7ef98c;
L_7ef96b: /* 7ef96b: cmp byte ptr [esi + 0x91], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x91u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7ef972: jne 0x7ef98c */
  if (!zf) goto L_7ef98c;
L_7ef974: /* 7ef974: mov al, byte ptr [esi + 0x90] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x90u))) & 0xffu);
/* 7ef97a: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ef97c: jne 0x7ef98c */
  if (!zf) goto L_7ef98c;
L_7ef97e: /* 7ef97e: mov edi, 1 */
  edi = 0x1u;
/* 7ef983: mov byte ptr [esi + 0x90], 2 */
  W8((uint32_t)(esi + 0x90u), 0x2u);
/* 7ef98a: jmp 0x7ef9a4 */
  goto L_7ef9a4;
L_7ef98c: /* 7ef98c: mov cl, byte ptr [esi + 0x91] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x91u))) & 0xffu);
/* 7ef992: mov al, byte ptr [esi + 0x90] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x90u))) & 0xffu);
/* 7ef998: mov byte ptr [esi + 0x90], cl */
  W8((uint32_t)(esi + 0x90u), (ecx & 0xffu));
/* 7ef99e: mov byte ptr [esi + 0x91], al */
  W8((uint32_t)(esi + 0x91u), (eax & 0xffu));
L_7ef9a4: /* 7ef9a4: mov ecx, ebx */
  ecx = ebx;
/* 7ef9a6: call 0x6c8927 */
  esp -= 4; W32(esp, 0x7ef9abu); SPILL(); f_6c8927(); if (g_unwind) return; RELOAD();
/* 7ef9ab: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ef9ae: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ef9b0: je 0x7ef9d7 */
  if (zf) goto L_7ef9d7;
L_7ef9b2: /* 7ef9b2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ef9b4: je 0x7ef9bf */
  if (zf) goto L_7ef9bf;
L_7ef9b6: /* 7ef9b6: mov byte ptr [esi + 0x90], 0 */
  W8((uint32_t)(esi + 0x90u), 0x0u);
/* 7ef9bd: jmp 0x7ef9d7 */
  goto L_7ef9d7;
L_7ef9bf: /* 7ef9bf: mov dl, byte ptr [esi + 0x91] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x91u))) & 0xffu);
/* 7ef9c5: mov al, byte ptr [esi + 0x90] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x90u))) & 0xffu);
/* 7ef9cb: mov byte ptr [esi + 0x90], dl */
  W8((uint32_t)(esi + 0x90u), (edx & 0xffu));
/* 7ef9d1: mov byte ptr [esi + 0x91], al */
  W8((uint32_t)(esi + 0x91u), (eax & 0xffu));
L_7ef9d7: /* 7ef9d7: mov eax, dword ptr [esi + 0x88] */
  eax = R32((uint32_t)(esi + 0x88u));
/* 7ef9dd: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7ef9e0: and eax, 0xff9fffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xff9fffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7ef9e5: mov dword ptr [esi + 0x88], eax */
  W32((uint32_t)(esi + 0x88u), eax);
L_7ef9eb: /* 7ef9eb: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
L_7ef9ee: /* 7ef9ee: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7ef9f1: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7ef9f2: jmp 0x7ef7c1 */
  goto L_7ef7c1;
L_7efa27: /* 7efa27: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7efa2a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7efa2b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7efa2c: mov eax, 1 */
  eax = 0x1u;
/* 7efa31: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7efa38: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7efa39: mov esp, ebp */
  esp = ebp;
/* 7efa3b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7efa3c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7ef9f7(void) {
  LOAD_REGS();
L_7ef9f7: /* 7ef9f7: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7ef9fa: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7ef9ff: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7efa02: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7efa03: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 7efa06: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7efa0bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7efa0b(); return;
}

void f_7efa0b(void) {
  LOAD_REGS();
L_7efa0b: /* 7efa0b: push 0xa11258 */
  { uint32_t v = 0xa11258u; esp -= 4; W32(esp, v); }
/* 7efa10: push 0xade8d8 */
  { uint32_t v = 0xade8d8u; esp -= 4; W32(esp, v); }
/* 7efa15: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7efa1bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7efa1b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7efa1e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7efa20: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7efa22: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7efa27u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7efa27: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7efa2a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7efa2b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7efa2c: mov eax, 1 */
  eax = 0x1u;
/* 7efa31: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7efa38: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7efa39: mov esp, ebp */
  esp = ebp;
/* 7efa3b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7efa3c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7efaf0(void) {
  LOAD_REGS();
L_7efaf0: /* 7efaf0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7efaf1: mov ebp, esp */
  ebp = esp;
/* 7efaf3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7efaf5: push 0x9d1280 */
  { uint32_t v = 0x9d1280u; esp -= 4; W32(esp, v); }
/* 7efafa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7efb00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7efb01: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7efb08: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7efb0b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7efb0c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7efb0d: mov esi, ecx */
  esi = ecx;
/* 7efb0f: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 7efb12: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7efb14: cmp byte ptr [eax + 0x4bc], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x4bcu))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7efb1b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7efb1c: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7efb1f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7efb26: jne 0x7efb55 */
  if (!zf) goto L_7efb55;
L_7efb28: /* 7efb28: mov ecx, dword ptr [esi + 0x88] */
  ecx = R32((uint32_t)(esi + 0x88u));
/* 7efb2e: mov edx, dword ptr [ecx + 0x38] */
  edx = R32((uint32_t)(ecx + 0x38u));
/* 7efb31: cmp dword ptr [edx + 0x6c], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x6cu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7efb35: je 0x7efb55 */
  if (zf) goto L_7efb55;
L_7efb37: /* 7efb37: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7efb39: mov byte ptr [eax + 0x4bc], 0 */
  W8((uint32_t)(eax + 0x4bcu), 0x0u);
/* 7efb40: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 7efb43: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7efb45: push 0xb847bc */
  { uint32_t v = 0xb847bcu; esp -= 4; W32(esp, v); }
/* 7efb4a: push 0xb847c0 */
  { uint32_t v = 0xb847c0u; esp -= 4; W32(esp, v); }
/* 7efb4f: call dword ptr [eax + 0xac] */
  { uint32_t t = R32((uint32_t)(eax + 0xacu)); esp -= 4; W32(esp, 0x7efb55u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7efb55: /* 7efb55: mov eax, dword ptr [esi + 0x88] */
  eax = R32((uint32_t)(esi + 0x88u));
/* 7efb5b: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 7efb5e: cmp dword ptr [ecx + 0x6c], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x6cu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7efb62: jne 0x7efbb0 */
  if (!zf) goto L_7efbb0;
L_7efb64: /* 7efb64: mov ecx, dword ptr [eax + 0xc0] */
  ecx = R32((uint32_t)(eax + 0xc0u));
/* 7efb6a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7efb6c: jne 0x7efbb0 */
  if (!zf) goto L_7efbb0;
L_7efb6e: /* 7efb6e: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 7efb71: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 7efb74: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 7efb77: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7efb79: jne 0x7efb93 */
  if (!zf) goto L_7efb93;
L_7efb7b: /* 7efb7b: push 0x4d2 */
  { uint32_t v = 0x4d2u; esp -= 4; W32(esp, v); }
/* 7efb80: push 0xade8e0 */
  { uint32_t v = 0xade8e0u; esp -= 4; W32(esp, v); }
/* 7efb85: push 0xade8f0 */
  { uint32_t v = 0xade8f0u; esp -= 4; W32(esp, v); }
/* 7efb8a: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7efb90u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7efb90: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7efb93: /* 7efb93: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 7efb96: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 7efb99: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7efb9c: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7efb9e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7efba0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7efba2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7efba4: push 0xade910 */
  { uint32_t v = 0xade910u; esp -= 4; W32(esp, v); }
/* 7efba9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7efbaa: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x7efbb0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7efbb0: /* 7efbb0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7efbb3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7efbb4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7efbb5: mov eax, 1 */
  eax = 0x1u;
/* 7efbba: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7efbc1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7efbc2: mov esp, ebp */
  esp = ebp;
/* 7efbc4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7efbc5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7efbc8(void) {
  LOAD_REGS();
L_7efbc8: /* 7efbc8: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7efbcb: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7efbd0: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7efbd3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7efbd4: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7efbd7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7efbdcu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7efbdc(); return;
}

void f_7efbdc(void) {
  LOAD_REGS();
L_7efbdc: /* 7efbdc: push 0xa11290 */
  { uint32_t v = 0xa11290u; esp -= 4; W32(esp, v); }
/* 7efbe1: push 0xade920 */
  { uint32_t v = 0xade920u; esp -= 4; W32(esp, v); }
/* 7efbe6: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7efbecu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7efbec: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7efbef: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7efbf1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7efbf3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7efbf8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7efbf8: guest_badaddr(0x7efbf8); return;
}

void f_7efc50(void) {
  LOAD_REGS();
L_7efc50: /* 7efc50: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* 7efc53: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7efc55: mov edx, dword ptr [eax + 0x424] */
  edx = R32((uint32_t)(eax + 0x424u));
/* 7efc5b: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7efc5d: je 0x7efc78 */
  if (zf) goto L_7efc78;
L_7efc5f: /* 7efc5f: fld dword ptr [eax + 0x3d0] */
  { double v = F32((uint32_t)(eax + 0x3d0u)); FPUSH(v); }
/* 7efc65: fcomp qword ptr [ecx + 0xd0] */
  fpu_com(ST0, F64((uint32_t)(ecx + 0xd0u)));
  FPOP();
/* 7efc6b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7efc6d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7efc70: jp 0x7efc78 */
  if (pf) goto L_7efc78;
L_7efc72: /* 7efc72: mov eax, 1 */
  eax = 0x1u;
/* 7efc77: ret  */
  esp += 4; SPILL(); return;
L_7efc78: /* 7efc78: xor eax, eax */
  eax = 0;
/* 7efc7a: ret  */
  esp += 4; SPILL(); return;
}

void f_7efc90(void) {
  LOAD_REGS();
L_7efc90: /* 7efc90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7efc91: mov ebp, esp */
  ebp = esp;
/* 7efc93: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7efc95: push 0x9d1290 */
  { uint32_t v = 0x9d1290u; esp -= 4; W32(esp, v); }
/* 7efc9a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7efca0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7efca1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7efca8: sub esp, 0x60 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7efcab: mov edx, dword ptr [0xcfa538] */
  edx = R32((uint32_t)(0xcfa538u));
/* 7efcb1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7efcb2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7efcb3: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7efcb6: mov eax, ecx */
  eax = ecx;
/* 7efcb8: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7efcbb: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 7efcbd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7efcbe: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7efcc1: xor ebx, ebx */
  ebx = 0;
/* 7efcc3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7efcc4: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 7efcc7: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7efcca: call dword ptr [0xcfa534] */
  esp -= 4; W32(esp, 0x7efcd0u); SPILL(); f_4e12d0(); if (g_unwind) return; /* Core!??0FMemMark@@QAE@AAVFMemStack@@@Z */ RELOAD();
/* 7efcd0: push 0xb08f8c */
  { uint32_t v = 0xb08f8cu; esp -= 4; W32(esp, v); }
/* 7efcd5: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 7efcd8: call dword ptr [0xcfa534] */
  esp -= 4; W32(esp, 0x7efcdeu); SPILL(); f_4e12d0(); if (g_unwind) return; /* Core!??0FMemMark@@QAE@AAVFMemStack@@@Z */ RELOAD();
/* 7efcde: call dword ptr [0xcfa928] */
  esp -= 4; W32(esp, 0x7efce4u); SPILL(); f_4e22c0(); if (g_unwind) return; /* Core!?GInitRunaway@@YAXXZ */ RELOAD();
/* 7efce4: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7efce7: mov edi, 1 */
  edi = 0x1u;
/* 7efcec: mov dword ptr [eax + 0xf8], edi */
  W32((uint32_t)(eax + 0xf8u), edi);
/* 7efcf2: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7efcf5: mov ecx, dword ptr [ecx + 0x88] */
  ecx = R32((uint32_t)(ecx + 0x88u));
/* 7efcfb: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7efcfd: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 7efd00: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7efd04: je 0x7efd41 */
  if (zf) goto L_7efd41;
L_7efd06: /* 7efd06: lea edx, [ebp + 0xc] */
  edx = (uint32_t)(ebp + 0xcu);
/* 7efd09: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7efd0a: call 0x6c1bea */
  esp -= 4; W32(esp, 0x7efd0fu); SPILL(); f_6c1bea(); if (g_unwind) return; RELOAD();
/* 7efd0f: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 7efd12: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7efd15: mov ecx, dword ptr [eax + 0x88] */
  ecx = R32((uint32_t)(eax + 0x88u));
/* 7efd1b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7efd1e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7efd20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7efd21: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0x7efd27u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7efd27: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7efd2a: mov edx, dword ptr [ecx + 0x88] */
  edx = R32((uint32_t)(ecx + 0x88u));
/* 7efd30: cmp dword ptr [edx + 0x38], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x38u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7efd33: je 0x7efd41 */
  if (zf) goto L_7efd41;
L_7efd35: /* 7efd35: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7efd38: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7efd3a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7efd3b: call dword ptr [eax + 0xe4] */
  { uint32_t t = R32((uint32_t)(eax + 0xe4u)); esp -= 4; W32(esp, 0x7efd41u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7efd41: /* 7efd41: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7efd44: mov ecx, dword ptr [edx + 0x3c] */
  ecx = R32((uint32_t)(edx + 0x3cu));
/* 7efd47: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7efd49: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7efd4c: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7efd50: je 0x7efd72 */
  if (zf) goto L_7efd72;
L_7efd52: /* 7efd52: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7efd55: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7efd57: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7efd58: call dword ptr [eax + 0x84] */
  { uint32_t t = R32((uint32_t)(eax + 0x84u)); esp -= 4; W32(esp, 0x7efd5eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7efd5e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7efd61: mov eax, dword ptr [ecx + 0x3c] */
  eax = R32((uint32_t)(ecx + 0x3cu));
/* 7efd64: cmp dword ptr [eax + 0x38], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x38u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7efd67: je 0x7efd72 */
  if (zf) goto L_7efd72;
L_7efd69: /* 7efd69: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7efd6c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7efd6e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7efd6f: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x7efd72u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7efd72: /* 7efd72: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7efd75: mov ecx, dword ptr [eax + 0xec] */
  ecx = R32((uint32_t)(eax + 0xecu));
/* 7efd7b: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7efd7d: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7efd80: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7efd84: je 0x7efd8b */
  if (zf) goto L_7efd8b;
L_7efd86: /* 7efd86: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7efd88: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x7efd8bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7efd8b: /* 7efd8b: mov edx, dword ptr [0xcfa790] */
  edx = R32((uint32_t)(0xcfa790u));
/* 7efd91: cmp dword ptr [edx], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7efd93: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7efd96: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 7efd9a: jne 0x7efda8 */
  if (!zf) goto L_7efda8;
L_7efd9c: /* 7efd9c: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 7efd9f: fmul dword ptr [esi + 0x3a8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x3a8u)));
/* 7efda5: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
L_7efda8: /* 7efda8: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7efdab: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7efdad: call dword ptr [eax + 0xec] */
  { uint32_t t = R32((uint32_t)(eax + 0xecu)); esp -= 4; W32(esp, 0x7efdb3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7efdb3: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7efdb5: jne 0x7efdc9 */
  if (!zf) goto L_7efdc9;
L_7efdb7: /* 7efdb7: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7efdba: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 7efdbd: fadd qword ptr [eax + 0xd0] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xd0u)));
/* 7efdc3: fstp qword ptr [eax + 0xd0] */
  WF64((uint32_t)(eax + 0xd0u), ST0); FPOP();
L_7efdc9: /* 7efdc9: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7efdcc: fld qword ptr [ecx + 0xd0] */
  { double v = F64((uint32_t)(ecx + 0xd0u)); FPUSH(v); }
/* 7efdd2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7efdd3: fstp dword ptr [esi + 0x3ac] */
  WF32((uint32_t)(esi + 0x3acu), ST0); FPOP();
/* 7efdd9: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7efddc: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7efdde: call dword ptr [edx + 0xe8] */
  { uint32_t t = R32((uint32_t)(edx + 0xe8u)); esp -= 4; W32(esp, 0x7efde4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7efde4: test byte ptr [esi + 0x444], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x444u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7efdeb: je 0x7efdf0 */
  if (zf) goto L_7efdf0;
L_7efded: /* 7efded: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
L_7efdf0: /* 7efdf0: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 7efdf3: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7efdf6: fcomp dword ptr [0xa11408] */
  fpu_com(ST0, F32((uint32_t)(0xa11408u)));
  FPOP();
/* 7efdfc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7efdfe: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7efe01: jp 0x7efea3 */
  if (pf) goto L_7efea3;
L_7efe07: /* 7efe07: mov dword ptr [ebp + 0xc], 0x3a03126f */
  W32((uint32_t)(ebp + 0xcu), 0x3a03126fu);
/* 7efe0e: jmp 0x7efeba */
  goto L_7efeba;
L_7efea3: /* 7efea3: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 7efea6: fcomp dword ptr [0xa11210] */
  fpu_com(ST0, F32((uint32_t)(0xa11210u)));
  FPOP();
/* 7efeac: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7efeae: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7efeb1: jnp 0x7efeba */
  if (!pf) goto L_7efeba;
L_7efeb3: /* 7efeb3: mov dword ptr [ebp + 0xc], 0x3ecccccd */
  W32((uint32_t)(ebp + 0xcu), 0x3ecccccdu);
L_7efeba: /* 7efeba: mov eax, dword ptr [0xce8454] */
  eax = R32((uint32_t)(0xce8454u));
/* 7efebf: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 7efec5: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 7efec8: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7efeca: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* 7efecc: cmp dword ptr [ebp + 8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7efecf: je 0x7f0101 */
  if (zf) goto L_7f0101;
L_7efed5: /* 7efed5: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7efed8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7efeda: call dword ptr [edx + 0xec] */
  { uint32_t t = R32((uint32_t)(edx + 0xecu)); esp -= 4; W32(esp, 0x7efee0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7efee0: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7efee2: jne 0x7f0101 */
  if (!zf) goto L_7f0101;
L_7efee8: /* 7efee8: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7efeeb: mov eax, dword ptr [ecx + 0x3c] */
  eax = R32((uint32_t)(ecx + 0x3cu));
/* 7efeee: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7efef0: je 0x7eff09 */
  if (zf) goto L_7eff09;
L_7efef2: /* 7efef2: mov eax, dword ptr [eax + 0x38] */
  eax = R32((uint32_t)(eax + 0x38u));
/* 7efef5: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7efef7: je 0x7eff09 */
  if (zf) goto L_7eff09;
L_7efef9: /* 7efef9: mov eax, dword ptr [eax + 0x6c] */
  eax = R32((uint32_t)(eax + 0x6cu));
/* 7efefc: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7efeff: je 0x7eff09 */
  if (zf) goto L_7eff09;
L_7eff01: /* 7eff01: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7eff03: jne 0x7f0104 */
  if (!zf) goto L_7f0104;
L_7eff09: /* 7eff09: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7eff0c: mov dword ptr [eax + 0xf4], ebx */
  W32((uint32_t)(eax + 0xf4u), ebx);
/* 7eff12: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7eff15: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7eff18: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7eff19: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7eff1a: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 7eff1e: call 0x6c23ec */
  esp -= 4; W32(esp, 0x7eff23u); SPILL(); f_6c23ec(); if (g_unwind) return; RELOAD();
/* 7eff23: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7eff26: mov esi, dword ptr [edx + 0x104] */
  esi = R32((uint32_t)(edx + 0x104u));
/* 7eff2c: mov ebx, 0x200 */
  ebx = 0x200u;
L_7eff31: /* 7eff31: cmp esi, dword ptr [edx + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7eff34: jge 0x7eff60 */
  if ((sf == of)) goto L_7eff60;
L_7eff36: /* 7eff36: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 7eff39: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 7eff3c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eff3e: je 0x7eff5d */
  if (zf) goto L_7eff5d;
L_7eff40: /* 7eff40: test dword ptr [ecx + 0x80], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x80u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eff46: jne 0x7eff5d */
  if (!zf) goto L_7eff5d;
L_7eff48: /* 7eff48: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7eff4b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7eff4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7eff4e: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7eff51: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7eff52: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0x7eff58u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7eff58: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7eff5b: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_7eff5d: /* 7eff5d: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7eff5e: jmp 0x7eff31 */
  goto L_7eff31;
L_7eff60: /* 7eff60: mov esi, dword ptr [edx + 0xf4] */
  esi = R32((uint32_t)(edx + 0xf4u));
/* 7eff66: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eff68: je 0x7effbb */
  if (zf) goto L_7effbb;
L_7eff6a: /* 7eff6a: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eff6c: je 0x7effbb */
  if (zf) goto L_7effbb;
L_7eff6e: /* 7eff6e: mov dword ptr [edx + 0xf4], 0 */
  W32((uint32_t)(edx + 0xf4u), 0x0u);
/* 7eff78: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7eff7b: xor edi, edi */
  edi = 0;
/* 7eff7d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7eff80: /* 7eff80: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eff82: je 0x7eff60 */
  if (zf) goto L_7eff60;
L_7eff84: /* 7eff84: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7eff86: mov eax, dword ptr [ecx + 0x80] */
  eax = R32((uint32_t)(ecx + 0x80u));
/* 7eff8c: mov ebx, eax */
  ebx = eax;
/* 7eff8e: shr ebx, 0xa */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 7eff91: and ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 7eff94: cmp ebx, dword ptr [edx + 0xfc] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0xfcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7eff9a: je 0x7effb6 */
  if (zf) goto L_7effb6;
L_7eff9c: /* 7eff9c: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7eff9f: jne 0x7effb6 */
  if (!zf) goto L_7effb6;
L_7effa1: /* 7effa1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7effa4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7effa6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7effa7: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7effaa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7effab: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0x7effb1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7effb1: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7effb4: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_7effb6: /* 7effb6: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 7effb9: jmp 0x7eff80 */
  goto L_7eff80;
L_7effbb: /* 7effbb: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 7effc0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7effc2: je 0x7effce */
  if (zf) goto L_7effce;
L_7effc4: /* 7effc4: mov dword ptr [eax + 0x15224], 0 */
  W32((uint32_t)(eax + 0x15224u), 0x0u);
L_7effce: /* 7effce: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 7effd3: mov ecx, dword ptr [0xce8454] */
  ecx = R32((uint32_t)(0xce8454u));
/* 7effd9: xor esi, esi */
  esi = 0;
/* 7effdb: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7effde: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 7effe1: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7effe3: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 7effe5: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7effe8: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7effea: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7effec: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7effef: mov eax, dword ptr [ecx + 0x3c] */
  eax = R32((uint32_t)(ecx + 0x3cu));
/* 7efff2: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7efff4: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 7efff8: je 0x7f0016 */
  if (zf) goto L_7f0016;
L_7efffa: /* 7efffa: cmp dword ptr [eax + 0x38], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x38u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7efffd: jne 0x7f000b */
  if (!zf) goto L_7f000b;
L_7effff: /* 7effff: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7f0002: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f0004: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f0005: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7f0008u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f0008: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_7f000b: /* 7f000b: mov ecx, dword ptr [ecx + 0x3c] */
  ecx = R32((uint32_t)(ecx + 0x3cu));
/* 7f000e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f0010: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0x7f0016u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7f0016: /* 7f0016: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f0019: mov eax, dword ptr [ecx + 0x88] */
  eax = R32((uint32_t)(ecx + 0x88u));
/* 7f001f: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f0021: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7f0024: mov byte ptr [ebp - 4], 0xf */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xfu);
/* 7f0028: je 0x7f0054 */
  if (zf) goto L_7f0054;
L_7f002a: /* 7f002a: cmp dword ptr [eax + 0x38], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x38u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f002d: jne 0x7f0043 */
  if (!zf) goto L_7f0043;
L_7f002f: /* 7f002f: cmp dword ptr [ebp - 0x1c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f0032: je 0x7f0043 */
  if (zf) goto L_7f0043;
L_7f0034: /* 7f0034: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7f0037: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f0039: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f003a: call dword ptr [edx + 0xe0] */
  { uint32_t t = R32((uint32_t)(edx + 0xe0u)); esp -= 4; W32(esp, 0x7f0040u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f0040: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_7f0043: /* 7f0043: mov ecx, dword ptr [ecx + 0x88] */
  ecx = R32((uint32_t)(ecx + 0x88u));
/* 7f0049: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f004b: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0x7f0051u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f0051: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_7f0054: /* 7f0054: mov eax, dword ptr [ecx + 0xfc] */
  eax = R32((uint32_t)(ecx + 0xfcu));
/* 7f005a: xor edx, edx */
  edx = 0;
/* 7f005c: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f005e: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7f0061: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7f0064: mov dword ptr [ecx + 0xfc], edx */
  W32((uint32_t)(ecx + 0xfcu), edx);
/* 7f006a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f006d: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 7f0070: mov dword ptr [eax + 0xf8], esi */
  W32((uint32_t)(eax + 0xf8u), esi);
/* 7f0076: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x7f007cu); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 7f007c: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 7f007f: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x7f0085u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 7f0085: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 7f008b: mov edx, dword ptr [0xce8468] */
  edx = R32((uint32_t)(0xce8468u));
/* 7f0091: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 7f0094: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7f0096: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* 7f0098: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f009b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7f009d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f009e: call dword ptr [eax + 0xa8] */
  { uint32_t t = R32((uint32_t)(eax + 0xa8u)); esp -= 4; W32(esp, 0x7f00a4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f00a4: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 7f00aa: mov edx, dword ptr [0xce8468] */
  edx = R32((uint32_t)(0xce8468u));
/* 7f00b0: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 7f00b3: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7f00b5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f00b7: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7f00ba: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7f00bc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f00bd: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7f00bf: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f00c2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f00c3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f00ca: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f00cb: mov esp, ebp */
  esp = ebp;
/* 7f00cd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f00ce: ret 8 */
  esp += 12; SPILL(); return;
L_7f0101: /* 7f0101: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_7f0104: /* 7f0104: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7f0106: call dword ptr [eax + 0xec] */
  { uint32_t t = R32((uint32_t)(eax + 0xecu)); esp -= 4; W32(esp, 0x7f010cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f010c: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f010e: je 0x7effce */
  if (zf) goto L_7effce;
L_7f0114: /* 7f0114: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f0117: mov dword ptr [ecx + 0xf4], 0 */
  W32((uint32_t)(ecx + 0xf4u), 0x0u);
/* 7f0121: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f0124: mov ebx, dword ptr [eax + 0x104] */
  ebx = R32((uint32_t)(eax + 0x104u));
/* 7f012a: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 7f012e: mov dword ptr [ebp - 0x18], 1 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x1u);
L_7f0135: /* 7f0135: cmp ebx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f0138: jge 0x7f0292 */
  if ((sf == of)) goto L_7f0292;
L_7f013e: /* 7f013e: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 7f0141: mov esi, dword ptr [edx + ebx*4] */
  esi = R32((uint32_t)(edx + ebx*4));
/* 7f0144: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f0146: je 0x7f0231 */
  if (zf) goto L_7f0231;
L_7f014c: /* 7f014c: push 0xb6a8d8 */
  { uint32_t v = 0xb6a8d8u; esp -= 4; W32(esp, v); }
/* 7f0151: mov ecx, esi */
  ecx = esi;
/* 7f0153: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7f0159u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7f0159: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f015b: je 0x7f022e */
  if (zf) goto L_7f022e;
L_7f0161: /* 7f0161: mov ecx, dword ptr [esi + 0x4c0] */
  ecx = R32((uint32_t)(esi + 0x4c0u));
/* 7f0167: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f0169: je 0x7f022e */
  if (zf) goto L_7f022e;
L_7f016f: /* 7f016f: push 0xb79f88 */
  { uint32_t v = 0xb79f88u; esp -= 4; W32(esp, v); }
/* 7f0174: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7f017au); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7f017a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f017c: je 0x7f022e */
  if (zf) goto L_7f022e;
L_7f0182: /* 7f0182: mov ecx, dword ptr [esi + 0x4c0] */
  ecx = R32((uint32_t)(esi + 0x4c0u));
/* 7f0188: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7f018b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7f018d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f018e: call dword ptr [eax + 0x68] */
  { uint32_t t = R32((uint32_t)(eax + 0x68u)); esp -= 4; W32(esp, 0x7f0191u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f0191: mov ecx, dword ptr [0xb7e288] */
  ecx = R32((uint32_t)(0xb7e288u));
/* 7f0197: mov edi, dword ptr [esi + 0x78c] */
  edi = R32((uint32_t)(esi + 0x78cu));
/* 7f019d: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7f01a0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f01a2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f01a3: mov ecx, edi */
  ecx = edi;
/* 7f01a5: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 7f01a8: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7f01aeu); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7f01ae: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7f01b0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f01b2: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7f01b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f01b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f01b7: mov ecx, edi */
  ecx = edi;
/* 7f01b9: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7f01bcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f01bc: mov ecx, esi */
  ecx = esi;
/* 7f01be: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7f01c4u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7f01c4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f01c6: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
/* 7f01c9: je 0x7f01d3 */
  if (zf) goto L_7f01d3;
L_7f01cb: /* 7f01cb: mov edx, dword ptr [eax + 0x3c] */
  edx = R32((uint32_t)(eax + 0x3cu));
/* 7f01ce: mov dword ptr [ebp - 0x50], edx */
  W32((uint32_t)(ebp + 0xffffffb0u), edx);
/* 7f01d1: jmp 0x7f01da */
  goto L_7f01da;
L_7f01d3: /* 7f01d3: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
L_7f01da: /* 7f01da: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 7f01dd: call 0x6c1ef6 */
  esp -= 4; W32(esp, 0x7f01e2u); SPILL(); f_6c1ef6(); if (g_unwind) return; RELOAD();
/* 7f01e2: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 7f01e5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f01e7: je 0x7f0201 */
  if (zf) goto L_7f0201;
L_7f01e9: /* 7f01e9: test byte ptr [eax + 0x3c], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x3cu))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7f01ed: je 0x7f01f9 */
  if (zf) goto L_7f01f9;
L_7f01ef: /* 7f01ef: mov ecx, dword ptr [eax + 0x48] */
  ecx = R32((uint32_t)(eax + 0x48u));
/* 7f01f2: mov dword ptr [esi + ecx], 0 */
  W32((uint32_t)(esi + ecx), 0x0u);
L_7f01f9: /* 7f01f9: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 7f01fc: mov dword ptr [ebp - 0x50], edx */
  W32((uint32_t)(ebp + 0xffffffb0u), edx);
/* 7f01ff: jmp 0x7f01da */
  goto L_7f01da;
L_7f0201: /* 7f0201: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f0204: mov ecx, dword ptr [eax + 0xfc] */
  ecx = R32((uint32_t)(eax + 0xfcu));
/* 7f020a: mov edi, dword ptr [esi + 0x80] */
  edi = R32((uint32_t)(esi + 0x80u));
/* 7f0210: shl ecx, 0xa */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 7f0213: xor ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7f0215: and ecx, 0x400 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7f021b: mov eax, edi */
  eax = edi;
/* 7f021d: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7f021f: mov dword ptr [esi + 0x80], eax */
  W32((uint32_t)(esi + 0x80u), eax);
/* 7f0225: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f0228: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7f0229: jmp 0x7f0135 */
  goto L_7f0135;
L_7f022e: /* 7f022e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
L_7f0231: /* 7f0231: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 7f0234: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 7f0237: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f0239: je 0x7f028c */
  if (zf) goto L_7f028c;
L_7f023b: /* 7f023b: mov edx, dword ptr [ecx + 0x84] */
  edx = R32((uint32_t)(ecx + 0x84u));
/* 7f0241: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  }
/* 7f0243: jns 0x7f0269 */
  if (!sf) goto L_7f0269;
L_7f0245: /* 7f0245: mov edx, dword ptr [ecx + 0x80] */
  edx = R32((uint32_t)(ecx + 0x80u));
/* 7f024b: test dh, 2 */
  { uint8_t a = (uint8_t)(((edx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7f024e: jne 0x7f0269 */
  if (!zf) goto L_7f0269;
L_7f0250: /* 7f0250: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7f0253: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7f0255: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f0256: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7f0259: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f025a: call dword ptr [eax + 0x84] */
  { uint32_t t = R32((uint32_t)(eax + 0x84u)); esp -= 4; W32(esp, 0x7f0260u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f0260: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f0263: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7f0264: jmp 0x7f0135 */
  goto L_7f0135;
L_7f0269: /* 7f0269: mov eax, dword ptr [eax + 0xfc] */
  eax = R32((uint32_t)(eax + 0xfcu));
/* 7f026f: mov edi, dword ptr [ecx + 0x80] */
  edi = R32((uint32_t)(ecx + 0x80u));
/* 7f0275: shl eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7f0278: xor eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7f027a: and eax, 0x400 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7f027f: mov edx, edi */
  edx = edi;
/* 7f0281: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7f0283: mov dword ptr [ecx + 0x80], edx */
  W32((uint32_t)(ecx + 0x80u), edx);
/* 7f0289: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
L_7f028c: /* 7f028c: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7f028d: jmp 0x7f0135 */
  goto L_7f0135;
L_7f0292: /* 7f0292: mov esi, dword ptr [eax + 0xf4] */
  esi = R32((uint32_t)(eax + 0xf4u));
/* 7f0298: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f029a: je 0x7effce */
  if (zf) goto L_7effce;
L_7f02a0: /* 7f02a0: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7f02a3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f02a5: je 0x7effce */
  if (zf) goto L_7effce;
L_7f02ab: /* 7f02ab: xor ecx, ecx */
  ecx = 0;
/* 7f02ad: mov dword ptr [eax + 0xf4], ecx */
  W32((uint32_t)(eax + 0xf4u), ecx);
/* 7f02b3: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7f02b6: mov edi, 0x80000000 */
  edi = 0x80000000u;
L_7f02bb: /* 7f02bb: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f02bd: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f02c0: je 0x7f0292 */
  if (zf) goto L_7f0292;
L_7f02c2: /* 7f02c2: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7f02c4: mov edx, dword ptr [ecx + 0x80] */
  edx = R32((uint32_t)(ecx + 0x80u));
/* 7f02ca: mov eax, dword ptr [eax + 0xfc] */
  eax = R32((uint32_t)(eax + 0xfcu));
/* 7f02d0: mov ebx, edx */
  ebx = edx;
/* 7f02d2: shr ebx, 0xa */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 7f02d5: and ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 7f02d8: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f02da: je 0x7f0348 */
  if (zf) goto L_7f0348;
L_7f02dc: /* 7f02dc: test dh, 2 */
  { uint8_t a = (uint8_t)(((edx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7f02df: jne 0x7f0348 */
  if (!zf) goto L_7f0348;
L_7f02e1: /* 7f02e1: test dword ptr [ecx + 0x84], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x84u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f02e7: je 0x7f0336 */
  if (zf) goto L_7f0336;
L_7f02e9: /* 7f02e9: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7f02ec: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f02ee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f02ef: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7f02f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f02f3: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0x7f02f9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f02f9: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7f02fc: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 7f02ff: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7f0301: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7f0304: jmp 0x7f02bb */
  goto L_7f02bb;
L_7f0336: /* 7f0336: shl eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7f0339: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7f033b: and eax, 0x400 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7f0340: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7f0342: mov dword ptr [ecx + 0x80], eax */
  W32((uint32_t)(ecx + 0x80u), eax);
L_7f0348: /* 7f0348: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 7f034b: jmp 0x7f02bb */
  goto L_7f02bb;
}

void f_7efe13(void) {
  LOAD_REGS();
L_7efe13: /* 7efe13: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7efe16: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7efe1b: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7efe1e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7efe1f: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 7efe22: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7efe27u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7efe27(); return;
}

void f_7efe27(void) {
  LOAD_REGS();
L_7efe27: /* 7efe27: push 0xa113ec */
  { uint32_t v = 0xa113ecu; esp -= 4; W32(esp, v); }
/* 7efe2c: push 0xade928 */
  { uint32_t v = 0xade928u; esp -= 4; W32(esp, v); }
/* 7efe31: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7efe37u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7efe37: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7efe3a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7efe3c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7efe3e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7efe43u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7efe43(); return;
}

void f_7efe43(void) {
  LOAD_REGS();
L_7efe43: /* 7efe43: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7efe46: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7efe4b: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 7efe4e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7efe4f: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 7efe52: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7efe57u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7efe57(); return;
}

void f_7efe57(void) {
  LOAD_REGS();
L_7efe57: /* 7efe57: push 0xa113cc */
  { uint32_t v = 0xa113ccu; esp -= 4; W32(esp, v); }
/* 7efe5c: push 0xade930 */
  { uint32_t v = 0xade930u; esp -= 4; W32(esp, v); }
/* 7efe61: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7efe67u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7efe67: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7efe6a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7efe6c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7efe6e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7efe73u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7efe73(); return;
}

void f_7efe73(void) {
  LOAD_REGS();
L_7efe73: /* 7efe73: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7efe76: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7efe7b: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7efe7e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7efe7f: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 7efe82: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7efe87u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7efe87(); return;
}

void f_7efe87(void) {
  LOAD_REGS();
L_7efe87: /* 7efe87: push 0xa113a4 */
  { uint32_t v = 0xa113a4u; esp -= 4; W32(esp, v); }
/* 7efe8c: push 0xade938 */
  { uint32_t v = 0xade938u; esp -= 4; W32(esp, v); }
/* 7efe91: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7efe97u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7efe97: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7efe9a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7efe9c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7efe9e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7efea3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7efea3: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 7efea6: fcomp dword ptr [0xa11210] */
  fpu_com(ST0, F32((uint32_t)(0xa11210u)));
  FPOP();
/* 7efeac: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7efeae: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7efeb1: jnp 0x7efeba */
  if (!pf) goto L_7efeba;
L_7efeb3: /* 7efeb3: mov dword ptr [ebp + 0xc], 0x3ecccccd */
  W32((uint32_t)(ebp + 0xcu), 0x3ecccccdu);
L_7efeba: /* 7efeba: mov eax, dword ptr [0xce8454] */
  eax = R32((uint32_t)(0xce8454u));
/* 7efebf: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 7efec5: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 7efec8: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7efeca: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* 7efecc: cmp dword ptr [ebp + 8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7efecf: je 0x7f0101 */
  if (zf) goto L_7f0101;
L_7efed5: /* 7efed5: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7efed8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7efeda: call dword ptr [edx + 0xec] */
  { uint32_t t = R32((uint32_t)(edx + 0xecu)); esp -= 4; W32(esp, 0x7efee0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7efee0: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7efee2: jne 0x7f0101 */
  if (!zf) goto L_7f0101;
L_7efee8: /* 7efee8: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7efeeb: mov eax, dword ptr [ecx + 0x3c] */
  eax = R32((uint32_t)(ecx + 0x3cu));
/* 7efeee: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7efef0: je 0x7eff09 */
  if (zf) goto L_7eff09;
L_7efef2: /* 7efef2: mov eax, dword ptr [eax + 0x38] */
  eax = R32((uint32_t)(eax + 0x38u));
/* 7efef5: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7efef7: je 0x7eff09 */
  if (zf) goto L_7eff09;
L_7efef9: /* 7efef9: mov eax, dword ptr [eax + 0x6c] */
  eax = R32((uint32_t)(eax + 0x6cu));
/* 7efefc: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7efeff: je 0x7eff09 */
  if (zf) goto L_7eff09;
L_7eff01: /* 7eff01: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7eff03: jne 0x7f0104 */
  if (!zf) goto L_7f0104;
L_7eff09: /* 7eff09: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7eff0c: mov dword ptr [eax + 0xf4], ebx */
  W32((uint32_t)(eax + 0xf4u), ebx);
/* 7eff12: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7eff15: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7eff18: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7eff19: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7eff1a: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 7eff1e: call 0x6c23ec */
  esp -= 4; W32(esp, 0x7eff23u); SPILL(); f_6c23ec(); if (g_unwind) return; RELOAD();
/* 7eff23: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7eff26: mov esi, dword ptr [edx + 0x104] */
  esi = R32((uint32_t)(edx + 0x104u));
/* 7eff2c: mov ebx, 0x200 */
  ebx = 0x200u;
L_7eff31: /* 7eff31: cmp esi, dword ptr [edx + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7eff34: jge 0x7eff60 */
  if ((sf == of)) goto L_7eff60;
L_7eff36: /* 7eff36: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 7eff39: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 7eff3c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eff3e: je 0x7eff5d */
  if (zf) goto L_7eff5d;
L_7eff40: /* 7eff40: test dword ptr [ecx + 0x80], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x80u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eff46: jne 0x7eff5d */
  if (!zf) goto L_7eff5d;
L_7eff48: /* 7eff48: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7eff4b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7eff4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7eff4e: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7eff51: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7eff52: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0x7eff58u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7eff58: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7eff5b: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_7eff5d: /* 7eff5d: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7eff5e: jmp 0x7eff31 */
  goto L_7eff31;
L_7eff60: /* 7eff60: mov esi, dword ptr [edx + 0xf4] */
  esi = R32((uint32_t)(edx + 0xf4u));
/* 7eff66: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eff68: je 0x7effbb */
  if (zf) goto L_7effbb;
L_7eff6a: /* 7eff6a: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eff6c: je 0x7effbb */
  if (zf) goto L_7effbb;
L_7eff6e: /* 7eff6e: mov dword ptr [edx + 0xf4], 0 */
  W32((uint32_t)(edx + 0xf4u), 0x0u);
/* 7eff78: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7eff7b: xor edi, edi */
  edi = 0;
/* 7eff7d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7eff80: /* 7eff80: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eff82: je 0x7eff60 */
  if (zf) goto L_7eff60;
L_7eff84: /* 7eff84: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7eff86: mov eax, dword ptr [ecx + 0x80] */
  eax = R32((uint32_t)(ecx + 0x80u));
/* 7eff8c: mov ebx, eax */
  ebx = eax;
/* 7eff8e: shr ebx, 0xa */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 7eff91: and ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 7eff94: cmp ebx, dword ptr [edx + 0xfc] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0xfcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7eff9a: je 0x7effb6 */
  if (zf) goto L_7effb6;
L_7eff9c: /* 7eff9c: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7eff9f: jne 0x7effb6 */
  if (!zf) goto L_7effb6;
L_7effa1: /* 7effa1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7effa4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7effa6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7effa7: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7effaa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7effab: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0x7effb1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7effb1: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7effb4: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_7effb6: /* 7effb6: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 7effb9: jmp 0x7eff80 */
  goto L_7eff80;
L_7effbb: /* 7effbb: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 7effc0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7effc2: je 0x7effce */
  if (zf) goto L_7effce;
L_7effc4: /* 7effc4: mov dword ptr [eax + 0x15224], 0 */
  W32((uint32_t)(eax + 0x15224u), 0x0u);
L_7effce: /* 7effce: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 7effd3: mov ecx, dword ptr [0xce8454] */
  ecx = R32((uint32_t)(0xce8454u));
/* 7effd9: xor esi, esi */
  esi = 0;
/* 7effdb: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7effde: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 7effe1: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7effe3: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 7effe5: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7effe8: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7effea: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7effec: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7effef: mov eax, dword ptr [ecx + 0x3c] */
  eax = R32((uint32_t)(ecx + 0x3cu));
/* 7efff2: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7efff4: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 7efff8: je 0x7f0016 */
  if (zf) goto L_7f0016;
L_7efffa: /* 7efffa: cmp dword ptr [eax + 0x38], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x38u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7efffd: jne 0x7f000b */
  if (!zf) goto L_7f000b;
L_7effff: /* 7effff: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7f0002: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f0004: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f0005: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7f0008u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f0008: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_7f000b: /* 7f000b: mov ecx, dword ptr [ecx + 0x3c] */
  ecx = R32((uint32_t)(ecx + 0x3cu));
/* 7f000e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f0010: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0x7f0016u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7f0016: /* 7f0016: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f0019: mov eax, dword ptr [ecx + 0x88] */
  eax = R32((uint32_t)(ecx + 0x88u));
/* 7f001f: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f0021: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7f0024: mov byte ptr [ebp - 4], 0xf */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xfu);
/* 7f0028: je 0x7f0054 */
  if (zf) goto L_7f0054;
L_7f002a: /* 7f002a: cmp dword ptr [eax + 0x38], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x38u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f002d: jne 0x7f0043 */
  if (!zf) goto L_7f0043;
L_7f002f: /* 7f002f: cmp dword ptr [ebp - 0x1c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f0032: je 0x7f0043 */
  if (zf) goto L_7f0043;
L_7f0034: /* 7f0034: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7f0037: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f0039: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f003a: call dword ptr [edx + 0xe0] */
  { uint32_t t = R32((uint32_t)(edx + 0xe0u)); esp -= 4; W32(esp, 0x7f0040u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f0040: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_7f0043: /* 7f0043: mov ecx, dword ptr [ecx + 0x88] */
  ecx = R32((uint32_t)(ecx + 0x88u));
/* 7f0049: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f004b: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0x7f0051u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f0051: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_7f0054: /* 7f0054: mov eax, dword ptr [ecx + 0xfc] */
  eax = R32((uint32_t)(ecx + 0xfcu));
/* 7f005a: xor edx, edx */
  edx = 0;
/* 7f005c: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f005e: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7f0061: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7f0064: mov dword ptr [ecx + 0xfc], edx */
  W32((uint32_t)(ecx + 0xfcu), edx);
/* 7f006a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f006d: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 7f0070: mov dword ptr [eax + 0xf8], esi */
  W32((uint32_t)(eax + 0xf8u), esi);
/* 7f0076: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x7f007cu); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 7f007c: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 7f007f: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x7f0085u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 7f0085: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 7f008b: mov edx, dword ptr [0xce8468] */
  edx = R32((uint32_t)(0xce8468u));
/* 7f0091: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 7f0094: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7f0096: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* 7f0098: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f009b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7f009d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f009e: call dword ptr [eax + 0xa8] */
  { uint32_t t = R32((uint32_t)(eax + 0xa8u)); esp -= 4; W32(esp, 0x7f00a4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f00a4: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 7f00aa: mov edx, dword ptr [0xce8468] */
  edx = R32((uint32_t)(0xce8468u));
/* 7f00b0: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 7f00b3: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7f00b5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f00b7: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7f00ba: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7f00bc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f00bd: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7f00bf: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f00c2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f00c3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f00ca: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f00cb: mov esp, ebp */
  esp = ebp;
/* 7f00cd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f00ce: ret 8 */
  esp += 12; SPILL(); return;
L_7f0101: /* 7f0101: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_7f0104: /* 7f0104: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7f0106: call dword ptr [eax + 0xec] */
  { uint32_t t = R32((uint32_t)(eax + 0xecu)); esp -= 4; W32(esp, 0x7f010cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f010c: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f010e: je 0x7effce */
  if (zf) goto L_7effce;
L_7f0114: /* 7f0114: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f0117: mov dword ptr [ecx + 0xf4], 0 */
  W32((uint32_t)(ecx + 0xf4u), 0x0u);
/* 7f0121: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f0124: mov ebx, dword ptr [eax + 0x104] */
  ebx = R32((uint32_t)(eax + 0x104u));
/* 7f012a: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 7f012e: mov dword ptr [ebp - 0x18], 1 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x1u);
L_7f0135: /* 7f0135: cmp ebx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f0138: jge 0x7f0292 */
  if ((sf == of)) goto L_7f0292;
L_7f013e: /* 7f013e: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 7f0141: mov esi, dword ptr [edx + ebx*4] */
  esi = R32((uint32_t)(edx + ebx*4));
/* 7f0144: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f0146: je 0x7f0231 */
  if (zf) goto L_7f0231;
L_7f014c: /* 7f014c: push 0xb6a8d8 */
  { uint32_t v = 0xb6a8d8u; esp -= 4; W32(esp, v); }
/* 7f0151: mov ecx, esi */
  ecx = esi;
/* 7f0153: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7f0159u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7f0159: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f015b: je 0x7f022e */
  if (zf) goto L_7f022e;
L_7f0161: /* 7f0161: mov ecx, dword ptr [esi + 0x4c0] */
  ecx = R32((uint32_t)(esi + 0x4c0u));
/* 7f0167: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f0169: je 0x7f022e */
  if (zf) goto L_7f022e;
L_7f016f: /* 7f016f: push 0xb79f88 */
  { uint32_t v = 0xb79f88u; esp -= 4; W32(esp, v); }
/* 7f0174: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7f017au); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7f017a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f017c: je 0x7f022e */
  if (zf) goto L_7f022e;
L_7f0182: /* 7f0182: mov ecx, dword ptr [esi + 0x4c0] */
  ecx = R32((uint32_t)(esi + 0x4c0u));
/* 7f0188: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7f018b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7f018d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f018e: call dword ptr [eax + 0x68] */
  { uint32_t t = R32((uint32_t)(eax + 0x68u)); esp -= 4; W32(esp, 0x7f0191u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f0191: mov ecx, dword ptr [0xb7e288] */
  ecx = R32((uint32_t)(0xb7e288u));
/* 7f0197: mov edi, dword ptr [esi + 0x78c] */
  edi = R32((uint32_t)(esi + 0x78cu));
/* 7f019d: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7f01a0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f01a2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f01a3: mov ecx, edi */
  ecx = edi;
/* 7f01a5: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 7f01a8: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7f01aeu); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7f01ae: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7f01b0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f01b2: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7f01b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f01b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f01b7: mov ecx, edi */
  ecx = edi;
/* 7f01b9: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7f01bcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f01bc: mov ecx, esi */
  ecx = esi;
/* 7f01be: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7f01c4u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7f01c4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f01c6: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
/* 7f01c9: je 0x7f01d3 */
  if (zf) goto L_7f01d3;
L_7f01cb: /* 7f01cb: mov edx, dword ptr [eax + 0x3c] */
  edx = R32((uint32_t)(eax + 0x3cu));
/* 7f01ce: mov dword ptr [ebp - 0x50], edx */
  W32((uint32_t)(ebp + 0xffffffb0u), edx);
/* 7f01d1: jmp 0x7f01da */
  goto L_7f01da;
L_7f01d3: /* 7f01d3: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
L_7f01da: /* 7f01da: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 7f01dd: call 0x6c1ef6 */
  esp -= 4; W32(esp, 0x7f01e2u); SPILL(); f_6c1ef6(); if (g_unwind) return; RELOAD();
/* 7f01e2: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 7f01e5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f01e7: je 0x7f0201 */
  if (zf) goto L_7f0201;
L_7f01e9: /* 7f01e9: test byte ptr [eax + 0x3c], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x3cu))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7f01ed: je 0x7f01f9 */
  if (zf) goto L_7f01f9;
L_7f01ef: /* 7f01ef: mov ecx, dword ptr [eax + 0x48] */
  ecx = R32((uint32_t)(eax + 0x48u));
/* 7f01f2: mov dword ptr [esi + ecx], 0 */
  W32((uint32_t)(esi + ecx), 0x0u);
L_7f01f9: /* 7f01f9: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 7f01fc: mov dword ptr [ebp - 0x50], edx */
  W32((uint32_t)(ebp + 0xffffffb0u), edx);
/* 7f01ff: jmp 0x7f01da */
  goto L_7f01da;
L_7f0201: /* 7f0201: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f0204: mov ecx, dword ptr [eax + 0xfc] */
  ecx = R32((uint32_t)(eax + 0xfcu));
/* 7f020a: mov edi, dword ptr [esi + 0x80] */
  edi = R32((uint32_t)(esi + 0x80u));
/* 7f0210: shl ecx, 0xa */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 7f0213: xor ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7f0215: and ecx, 0x400 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7f021b: mov eax, edi */
  eax = edi;
/* 7f021d: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7f021f: mov dword ptr [esi + 0x80], eax */
  W32((uint32_t)(esi + 0x80u), eax);
/* 7f0225: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f0228: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7f0229: jmp 0x7f0135 */
  goto L_7f0135;
L_7f022e: /* 7f022e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
L_7f0231: /* 7f0231: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 7f0234: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 7f0237: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f0239: je 0x7f028c */
  if (zf) goto L_7f028c;
L_7f023b: /* 7f023b: mov edx, dword ptr [ecx + 0x84] */
  edx = R32((uint32_t)(ecx + 0x84u));
/* 7f0241: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  }
/* 7f0243: jns 0x7f0269 */
  if (!sf) goto L_7f0269;
L_7f0245: /* 7f0245: mov edx, dword ptr [ecx + 0x80] */
  edx = R32((uint32_t)(ecx + 0x80u));
/* 7f024b: test dh, 2 */
  { uint8_t a = (uint8_t)(((edx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7f024e: jne 0x7f0269 */
  if (!zf) goto L_7f0269;
L_7f0250: /* 7f0250: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7f0253: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7f0255: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f0256: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7f0259: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f025a: call dword ptr [eax + 0x84] */
  { uint32_t t = R32((uint32_t)(eax + 0x84u)); esp -= 4; W32(esp, 0x7f0260u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f0260: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f0263: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7f0264: jmp 0x7f0135 */
  goto L_7f0135;
L_7f0269: /* 7f0269: mov eax, dword ptr [eax + 0xfc] */
  eax = R32((uint32_t)(eax + 0xfcu));
/* 7f026f: mov edi, dword ptr [ecx + 0x80] */
  edi = R32((uint32_t)(ecx + 0x80u));
/* 7f0275: shl eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7f0278: xor eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7f027a: and eax, 0x400 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7f027f: mov edx, edi */
  edx = edi;
/* 7f0281: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7f0283: mov dword ptr [ecx + 0x80], edx */
  W32((uint32_t)(ecx + 0x80u), edx);
/* 7f0289: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
L_7f028c: /* 7f028c: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7f028d: jmp 0x7f0135 */
  goto L_7f0135;
L_7f0292: /* 7f0292: mov esi, dword ptr [eax + 0xf4] */
  esi = R32((uint32_t)(eax + 0xf4u));
/* 7f0298: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f029a: je 0x7effce */
  if (zf) goto L_7effce;
L_7f02a0: /* 7f02a0: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7f02a3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f02a5: je 0x7effce */
  if (zf) goto L_7effce;
L_7f02ab: /* 7f02ab: xor ecx, ecx */
  ecx = 0;
/* 7f02ad: mov dword ptr [eax + 0xf4], ecx */
  W32((uint32_t)(eax + 0xf4u), ecx);
/* 7f02b3: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7f02b6: mov edi, 0x80000000 */
  edi = 0x80000000u;
L_7f02bb: /* 7f02bb: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f02bd: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f02c0: je 0x7f0292 */
  if (zf) goto L_7f0292;
L_7f02c2: /* 7f02c2: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7f02c4: mov edx, dword ptr [ecx + 0x80] */
  edx = R32((uint32_t)(ecx + 0x80u));
/* 7f02ca: mov eax, dword ptr [eax + 0xfc] */
  eax = R32((uint32_t)(eax + 0xfcu));
/* 7f02d0: mov ebx, edx */
  ebx = edx;
/* 7f02d2: shr ebx, 0xa */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 7f02d5: and ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 7f02d8: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f02da: je 0x7f0348 */
  if (zf) goto L_7f0348;
L_7f02dc: /* 7f02dc: test dh, 2 */
  { uint8_t a = (uint8_t)(((edx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7f02df: jne 0x7f0348 */
  if (!zf) goto L_7f0348;
L_7f02e1: /* 7f02e1: test dword ptr [ecx + 0x84], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x84u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f02e7: je 0x7f0336 */
  if (zf) goto L_7f0336;
L_7f02e9: /* 7f02e9: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7f02ec: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f02ee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f02ef: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7f02f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f02f3: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0x7f02f9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f02f9: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7f02fc: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 7f02ff: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7f0301: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7f0304: jmp 0x7f02bb */
  goto L_7f02bb;
L_7f0336: /* 7f0336: shl eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7f0339: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7f033b: and eax, 0x400 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7f0340: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7f0342: mov dword ptr [ecx + 0x80], eax */
  W32((uint32_t)(ecx + 0x80u), eax);
L_7f0348: /* 7f0348: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 7f034b: jmp 0x7f02bb */
  goto L_7f02bb;
}

void f_7f00d1(void) {
  LOAD_REGS();
L_7f00d1: /* 7f00d1: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7f00d4: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7f00d9: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
/* 7f00dc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f00dd: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 7f00e0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f00e5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f00e5(); return;
}

void f_7f00e5(void) {
  LOAD_REGS();
  goto L_7f00e5;
L_7effce: /* 7effce: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 7effd3: mov ecx, dword ptr [0xce8454] */
  ecx = R32((uint32_t)(0xce8454u));
/* 7effd9: xor esi, esi */
  esi = 0;
/* 7effdb: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7effde: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 7effe1: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7effe3: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 7effe5: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7effe8: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7effea: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7effec: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7effef: mov eax, dword ptr [ecx + 0x3c] */
  eax = R32((uint32_t)(ecx + 0x3cu));
/* 7efff2: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7efff4: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 7efff8: je 0x7f0016 */
  if (zf) goto L_7f0016;
L_7efffa: /* 7efffa: cmp dword ptr [eax + 0x38], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x38u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7efffd: jne 0x7f000b */
  if (!zf) goto L_7f000b;
L_7effff: /* 7effff: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7f0002: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f0004: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f0005: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7f0008u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f0008: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_7f000b: /* 7f000b: mov ecx, dword ptr [ecx + 0x3c] */
  ecx = R32((uint32_t)(ecx + 0x3cu));
/* 7f000e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f0010: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0x7f0016u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7f0016: /* 7f0016: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f0019: mov eax, dword ptr [ecx + 0x88] */
  eax = R32((uint32_t)(ecx + 0x88u));
/* 7f001f: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f0021: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7f0024: mov byte ptr [ebp - 4], 0xf */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xfu);
/* 7f0028: je 0x7f0054 */
  if (zf) goto L_7f0054;
L_7f002a: /* 7f002a: cmp dword ptr [eax + 0x38], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x38u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f002d: jne 0x7f0043 */
  if (!zf) goto L_7f0043;
L_7f002f: /* 7f002f: cmp dword ptr [ebp - 0x1c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f0032: je 0x7f0043 */
  if (zf) goto L_7f0043;
L_7f0034: /* 7f0034: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7f0037: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f0039: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f003a: call dword ptr [edx + 0xe0] */
  { uint32_t t = R32((uint32_t)(edx + 0xe0u)); esp -= 4; W32(esp, 0x7f0040u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f0040: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_7f0043: /* 7f0043: mov ecx, dword ptr [ecx + 0x88] */
  ecx = R32((uint32_t)(ecx + 0x88u));
/* 7f0049: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f004b: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0x7f0051u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f0051: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_7f0054: /* 7f0054: mov eax, dword ptr [ecx + 0xfc] */
  eax = R32((uint32_t)(ecx + 0xfcu));
/* 7f005a: xor edx, edx */
  edx = 0;
/* 7f005c: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f005e: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7f0061: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7f0064: mov dword ptr [ecx + 0xfc], edx */
  W32((uint32_t)(ecx + 0xfcu), edx);
/* 7f006a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f006d: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 7f0070: mov dword ptr [eax + 0xf8], esi */
  W32((uint32_t)(eax + 0xf8u), esi);
/* 7f0076: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x7f007cu); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 7f007c: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 7f007f: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x7f0085u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 7f0085: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 7f008b: mov edx, dword ptr [0xce8468] */
  edx = R32((uint32_t)(0xce8468u));
/* 7f0091: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 7f0094: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7f0096: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* 7f0098: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f009b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7f009d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f009e: call dword ptr [eax + 0xa8] */
  { uint32_t t = R32((uint32_t)(eax + 0xa8u)); esp -= 4; W32(esp, 0x7f00a4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f00a4: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 7f00aa: mov edx, dword ptr [0xce8468] */
  edx = R32((uint32_t)(0xce8468u));
/* 7f00b0: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 7f00b3: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7f00b5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f00b7: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7f00ba: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7f00bc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f00bd: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7f00bf: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f00c2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f00c3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f00ca: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f00cb: mov esp, ebp */
  esp = ebp;
/* 7f00cd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f00ce: ret 8 */
  esp += 12; SPILL(); return;
L_7f00e5: /* 7f00e5: push 0xa11380 */
  { uint32_t v = 0xa11380u; esp -= 4; W32(esp, v); }
/* 7f00ea: push 0xade948 */
  { uint32_t v = 0xade948u; esp -= 4; W32(esp, v); }
/* 7f00ef: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7f00f5u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7f00f5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f00f8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f00fa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f00fc: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f0101u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7f0101: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f0104: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7f0106: call dword ptr [eax + 0xec] */
  { uint32_t t = R32((uint32_t)(eax + 0xecu)); esp -= 4; W32(esp, 0x7f010cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f010c: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f010e: je 0x7effce */
  if (zf) goto L_7effce;
L_7f0114: /* 7f0114: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f0117: mov dword ptr [ecx + 0xf4], 0 */
  W32((uint32_t)(ecx + 0xf4u), 0x0u);
/* 7f0121: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f0124: mov ebx, dword ptr [eax + 0x104] */
  ebx = R32((uint32_t)(eax + 0x104u));
/* 7f012a: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 7f012e: mov dword ptr [ebp - 0x18], 1 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x1u);
L_7f0135: /* 7f0135: cmp ebx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f0138: jge 0x7f0292 */
  if ((sf == of)) goto L_7f0292;
L_7f013e: /* 7f013e: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 7f0141: mov esi, dword ptr [edx + ebx*4] */
  esi = R32((uint32_t)(edx + ebx*4));
/* 7f0144: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f0146: je 0x7f0231 */
  if (zf) goto L_7f0231;
L_7f014c: /* 7f014c: push 0xb6a8d8 */
  { uint32_t v = 0xb6a8d8u; esp -= 4; W32(esp, v); }
/* 7f0151: mov ecx, esi */
  ecx = esi;
/* 7f0153: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7f0159u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7f0159: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f015b: je 0x7f022e */
  if (zf) goto L_7f022e;
L_7f0161: /* 7f0161: mov ecx, dword ptr [esi + 0x4c0] */
  ecx = R32((uint32_t)(esi + 0x4c0u));
/* 7f0167: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f0169: je 0x7f022e */
  if (zf) goto L_7f022e;
L_7f016f: /* 7f016f: push 0xb79f88 */
  { uint32_t v = 0xb79f88u; esp -= 4; W32(esp, v); }
/* 7f0174: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7f017au); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7f017a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f017c: je 0x7f022e */
  if (zf) goto L_7f022e;
L_7f0182: /* 7f0182: mov ecx, dword ptr [esi + 0x4c0] */
  ecx = R32((uint32_t)(esi + 0x4c0u));
/* 7f0188: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7f018b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7f018d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f018e: call dword ptr [eax + 0x68] */
  { uint32_t t = R32((uint32_t)(eax + 0x68u)); esp -= 4; W32(esp, 0x7f0191u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f0191: mov ecx, dword ptr [0xb7e288] */
  ecx = R32((uint32_t)(0xb7e288u));
/* 7f0197: mov edi, dword ptr [esi + 0x78c] */
  edi = R32((uint32_t)(esi + 0x78cu));
/* 7f019d: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7f01a0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f01a2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f01a3: mov ecx, edi */
  ecx = edi;
/* 7f01a5: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 7f01a8: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7f01aeu); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7f01ae: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7f01b0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f01b2: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7f01b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f01b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f01b7: mov ecx, edi */
  ecx = edi;
/* 7f01b9: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7f01bcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f01bc: mov ecx, esi */
  ecx = esi;
/* 7f01be: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7f01c4u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7f01c4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f01c6: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
/* 7f01c9: je 0x7f01d3 */
  if (zf) goto L_7f01d3;
L_7f01cb: /* 7f01cb: mov edx, dword ptr [eax + 0x3c] */
  edx = R32((uint32_t)(eax + 0x3cu));
/* 7f01ce: mov dword ptr [ebp - 0x50], edx */
  W32((uint32_t)(ebp + 0xffffffb0u), edx);
/* 7f01d1: jmp 0x7f01da */
  goto L_7f01da;
L_7f01d3: /* 7f01d3: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
L_7f01da: /* 7f01da: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 7f01dd: call 0x6c1ef6 */
  esp -= 4; W32(esp, 0x7f01e2u); SPILL(); f_6c1ef6(); if (g_unwind) return; RELOAD();
/* 7f01e2: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 7f01e5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f01e7: je 0x7f0201 */
  if (zf) goto L_7f0201;
L_7f01e9: /* 7f01e9: test byte ptr [eax + 0x3c], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x3cu))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7f01ed: je 0x7f01f9 */
  if (zf) goto L_7f01f9;
L_7f01ef: /* 7f01ef: mov ecx, dword ptr [eax + 0x48] */
  ecx = R32((uint32_t)(eax + 0x48u));
/* 7f01f2: mov dword ptr [esi + ecx], 0 */
  W32((uint32_t)(esi + ecx), 0x0u);
L_7f01f9: /* 7f01f9: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 7f01fc: mov dword ptr [ebp - 0x50], edx */
  W32((uint32_t)(ebp + 0xffffffb0u), edx);
/* 7f01ff: jmp 0x7f01da */
  goto L_7f01da;
L_7f0201: /* 7f0201: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f0204: mov ecx, dword ptr [eax + 0xfc] */
  ecx = R32((uint32_t)(eax + 0xfcu));
/* 7f020a: mov edi, dword ptr [esi + 0x80] */
  edi = R32((uint32_t)(esi + 0x80u));
/* 7f0210: shl ecx, 0xa */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 7f0213: xor ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7f0215: and ecx, 0x400 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7f021b: mov eax, edi */
  eax = edi;
/* 7f021d: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7f021f: mov dword ptr [esi + 0x80], eax */
  W32((uint32_t)(esi + 0x80u), eax);
/* 7f0225: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f0228: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7f0229: jmp 0x7f0135 */
  goto L_7f0135;
L_7f022e: /* 7f022e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
L_7f0231: /* 7f0231: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 7f0234: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 7f0237: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f0239: je 0x7f028c */
  if (zf) goto L_7f028c;
L_7f023b: /* 7f023b: mov edx, dword ptr [ecx + 0x84] */
  edx = R32((uint32_t)(ecx + 0x84u));
/* 7f0241: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  }
/* 7f0243: jns 0x7f0269 */
  if (!sf) goto L_7f0269;
L_7f0245: /* 7f0245: mov edx, dword ptr [ecx + 0x80] */
  edx = R32((uint32_t)(ecx + 0x80u));
/* 7f024b: test dh, 2 */
  { uint8_t a = (uint8_t)(((edx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7f024e: jne 0x7f0269 */
  if (!zf) goto L_7f0269;
L_7f0250: /* 7f0250: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7f0253: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7f0255: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f0256: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7f0259: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f025a: call dword ptr [eax + 0x84] */
  { uint32_t t = R32((uint32_t)(eax + 0x84u)); esp -= 4; W32(esp, 0x7f0260u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f0260: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f0263: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7f0264: jmp 0x7f0135 */
  goto L_7f0135;
L_7f0269: /* 7f0269: mov eax, dword ptr [eax + 0xfc] */
  eax = R32((uint32_t)(eax + 0xfcu));
/* 7f026f: mov edi, dword ptr [ecx + 0x80] */
  edi = R32((uint32_t)(ecx + 0x80u));
/* 7f0275: shl eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7f0278: xor eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7f027a: and eax, 0x400 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7f027f: mov edx, edi */
  edx = edi;
/* 7f0281: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7f0283: mov dword ptr [ecx + 0x80], edx */
  W32((uint32_t)(ecx + 0x80u), edx);
/* 7f0289: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
L_7f028c: /* 7f028c: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7f028d: jmp 0x7f0135 */
  goto L_7f0135;
L_7f0292: /* 7f0292: mov esi, dword ptr [eax + 0xf4] */
  esi = R32((uint32_t)(eax + 0xf4u));
/* 7f0298: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f029a: je 0x7effce */
  if (zf) goto L_7effce;
L_7f02a0: /* 7f02a0: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7f02a3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f02a5: je 0x7effce */
  if (zf) goto L_7effce;
L_7f02ab: /* 7f02ab: xor ecx, ecx */
  ecx = 0;
/* 7f02ad: mov dword ptr [eax + 0xf4], ecx */
  W32((uint32_t)(eax + 0xf4u), ecx);
/* 7f02b3: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7f02b6: mov edi, 0x80000000 */
  edi = 0x80000000u;
L_7f02bb: /* 7f02bb: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f02bd: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f02c0: je 0x7f0292 */
  if (zf) goto L_7f0292;
L_7f02c2: /* 7f02c2: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7f02c4: mov edx, dword ptr [ecx + 0x80] */
  edx = R32((uint32_t)(ecx + 0x80u));
/* 7f02ca: mov eax, dword ptr [eax + 0xfc] */
  eax = R32((uint32_t)(eax + 0xfcu));
/* 7f02d0: mov ebx, edx */
  ebx = edx;
/* 7f02d2: shr ebx, 0xa */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 7f02d5: and ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 7f02d8: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f02da: je 0x7f0348 */
  if (zf) goto L_7f0348;
L_7f02dc: /* 7f02dc: test dh, 2 */
  { uint8_t a = (uint8_t)(((edx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7f02df: jne 0x7f0348 */
  if (!zf) goto L_7f0348;
L_7f02e1: /* 7f02e1: test dword ptr [ecx + 0x84], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x84u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f02e7: je 0x7f0336 */
  if (zf) goto L_7f0336;
L_7f02e9: /* 7f02e9: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7f02ec: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f02ee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f02ef: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7f02f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f02f3: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0x7f02f9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f02f9: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7f02fc: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 7f02ff: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7f0301: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7f0304: jmp 0x7f02bb */
  goto L_7f02bb;
L_7f0336: /* 7f0336: shl eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7f0339: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7f033b: and eax, 0x400 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7f0340: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7f0342: mov dword ptr [ecx + 0x80], eax */
  W32((uint32_t)(ecx + 0x80u), eax);
L_7f0348: /* 7f0348: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 7f034b: jmp 0x7f02bb */
  goto L_7f02bb;
}

void f_7f0306(void) {
  LOAD_REGS();
L_7f0306: /* 7f0306: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 7f0309: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7f030e: lea edx, [ebp - 0x34] */
  edx = (uint32_t)(ebp + 0xffffffccu);
/* 7f0311: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f0312: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 7f0315: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f031au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f031a(); return;
}

void f_7f031a(void) {
  LOAD_REGS();
  goto L_7f031a;
L_7effce: /* 7effce: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 7effd3: mov ecx, dword ptr [0xce8454] */
  ecx = R32((uint32_t)(0xce8454u));
/* 7effd9: xor esi, esi */
  esi = 0;
/* 7effdb: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7effde: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 7effe1: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7effe3: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 7effe5: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7effe8: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7effea: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7effec: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7effef: mov eax, dword ptr [ecx + 0x3c] */
  eax = R32((uint32_t)(ecx + 0x3cu));
/* 7efff2: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7efff4: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 7efff8: je 0x7f0016 */
  if (zf) goto L_7f0016;
L_7efffa: /* 7efffa: cmp dword ptr [eax + 0x38], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x38u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7efffd: jne 0x7f000b */
  if (!zf) goto L_7f000b;
L_7effff: /* 7effff: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7f0002: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f0004: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f0005: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7f0008u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f0008: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_7f000b: /* 7f000b: mov ecx, dword ptr [ecx + 0x3c] */
  ecx = R32((uint32_t)(ecx + 0x3cu));
/* 7f000e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f0010: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0x7f0016u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7f0016: /* 7f0016: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f0019: mov eax, dword ptr [ecx + 0x88] */
  eax = R32((uint32_t)(ecx + 0x88u));
/* 7f001f: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f0021: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7f0024: mov byte ptr [ebp - 4], 0xf */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xfu);
/* 7f0028: je 0x7f0054 */
  if (zf) goto L_7f0054;
L_7f002a: /* 7f002a: cmp dword ptr [eax + 0x38], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x38u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f002d: jne 0x7f0043 */
  if (!zf) goto L_7f0043;
L_7f002f: /* 7f002f: cmp dword ptr [ebp - 0x1c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f0032: je 0x7f0043 */
  if (zf) goto L_7f0043;
L_7f0034: /* 7f0034: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7f0037: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f0039: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f003a: call dword ptr [edx + 0xe0] */
  { uint32_t t = R32((uint32_t)(edx + 0xe0u)); esp -= 4; W32(esp, 0x7f0040u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f0040: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_7f0043: /* 7f0043: mov ecx, dword ptr [ecx + 0x88] */
  ecx = R32((uint32_t)(ecx + 0x88u));
/* 7f0049: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f004b: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0x7f0051u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f0051: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_7f0054: /* 7f0054: mov eax, dword ptr [ecx + 0xfc] */
  eax = R32((uint32_t)(ecx + 0xfcu));
/* 7f005a: xor edx, edx */
  edx = 0;
/* 7f005c: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f005e: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7f0061: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7f0064: mov dword ptr [ecx + 0xfc], edx */
  W32((uint32_t)(ecx + 0xfcu), edx);
/* 7f006a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f006d: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 7f0070: mov dword ptr [eax + 0xf8], esi */
  W32((uint32_t)(eax + 0xf8u), esi);
/* 7f0076: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x7f007cu); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 7f007c: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 7f007f: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x7f0085u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 7f0085: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 7f008b: mov edx, dword ptr [0xce8468] */
  edx = R32((uint32_t)(0xce8468u));
/* 7f0091: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 7f0094: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7f0096: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* 7f0098: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f009b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7f009d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f009e: call dword ptr [eax + 0xa8] */
  { uint32_t t = R32((uint32_t)(eax + 0xa8u)); esp -= 4; W32(esp, 0x7f00a4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f00a4: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 7f00aa: mov edx, dword ptr [0xce8468] */
  edx = R32((uint32_t)(0xce8468u));
/* 7f00b0: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 7f00b3: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7f00b5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f00b7: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7f00ba: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7f00bc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f00bd: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7f00bf: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f00c2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f00c3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f00ca: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f00cb: mov esp, ebp */
  esp = ebp;
/* 7f00cd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f00ce: ret 8 */
  esp += 12; SPILL(); return;
L_7f0292: /* 7f0292: mov esi, dword ptr [eax + 0xf4] */
  esi = R32((uint32_t)(eax + 0xf4u));
/* 7f0298: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f029a: je 0x7effce */
  if (zf) goto L_7effce;
L_7f02a0: /* 7f02a0: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7f02a3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f02a5: je 0x7effce */
  if (zf) goto L_7effce;
L_7f02ab: /* 7f02ab: xor ecx, ecx */
  ecx = 0;
/* 7f02ad: mov dword ptr [eax + 0xf4], ecx */
  W32((uint32_t)(eax + 0xf4u), ecx);
/* 7f02b3: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7f02b6: mov edi, 0x80000000 */
  edi = 0x80000000u;
L_7f02bb: /* 7f02bb: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f02bd: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f02c0: je 0x7f0292 */
  if (zf) goto L_7f0292;
L_7f02c2: /* 7f02c2: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7f02c4: mov edx, dword ptr [ecx + 0x80] */
  edx = R32((uint32_t)(ecx + 0x80u));
/* 7f02ca: mov eax, dword ptr [eax + 0xfc] */
  eax = R32((uint32_t)(eax + 0xfcu));
/* 7f02d0: mov ebx, edx */
  ebx = edx;
/* 7f02d2: shr ebx, 0xa */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 7f02d5: and ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 7f02d8: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f02da: je 0x7f0348 */
  if (zf) goto L_7f0348;
L_7f02dc: /* 7f02dc: test dh, 2 */
  { uint8_t a = (uint8_t)(((edx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7f02df: jne 0x7f0348 */
  if (!zf) goto L_7f0348;
L_7f02e1: /* 7f02e1: test dword ptr [ecx + 0x84], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x84u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f02e7: je 0x7f0336 */
  if (zf) goto L_7f0336;
L_7f02e9: /* 7f02e9: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7f02ec: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f02ee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f02ef: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7f02f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f02f3: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0x7f02f9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f02f9: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7f02fc: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 7f02ff: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7f0301: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7f0304: jmp 0x7f02bb */
  goto L_7f02bb;
L_7f031a: /* 7f031a: push 0xa1135c */
  { uint32_t v = 0xa1135cu; esp -= 4; W32(esp, v); }
/* 7f031f: push 0xade950 */
  { uint32_t v = 0xade950u; esp -= 4; W32(esp, v); }
/* 7f0324: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7f032au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7f032a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f032d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f032f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f0331: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f0336u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7f0336: /* 7f0336: shl eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7f0339: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7f033b: and eax, 0x400 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7f0340: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7f0342: mov dword ptr [ecx + 0x80], eax */
  W32((uint32_t)(ecx + 0x80u), eax);
L_7f0348: /* 7f0348: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 7f034b: jmp 0x7f02bb */
  goto L_7f02bb;
}

void f_7f0350(void) {
  LOAD_REGS();
L_7f0350: /* 7f0350: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 7f0353: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7f0358: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7f035b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f035c: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 7f035f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f0364u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f0364(); return;
}

void f_7f0364(void) {
  LOAD_REGS();
L_7f0364: /* 7f0364: push 0xa11334 */
  { uint32_t v = 0xa11334u; esp -= 4; W32(esp, v); }
/* 7f0369: push 0xade958 */
  { uint32_t v = 0xade958u; esp -= 4; W32(esp, v); }
/* 7f036e: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7f0374u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7f0374: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f0377: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f0379: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f037b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f0380u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f0380(); return;
}

void f_7f0380(void) {
  LOAD_REGS();
L_7f0380: /* 7f0380: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 7f0383: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7f0388: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 7f038b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f038c: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 7f038f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f0394u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f0394(); return;
}

void f_7f0394(void) {
  LOAD_REGS();
L_7f0394: /* 7f0394: push 0xa11308 */
  { uint32_t v = 0xa11308u; esp -= 4; W32(esp, v); }
/* 7f0399: push 0xade960 */
  { uint32_t v = 0xade960u; esp -= 4; W32(esp, v); }
/* 7f039e: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7f03a4u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7f03a4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f03a7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f03a9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f03ab: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f03b0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f03b0(); return;
}

void f_7f03b0(void) {
  LOAD_REGS();
L_7f03b0: /* 7f03b0: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 7f03b3: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7f03b8: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 7f03bb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f03bc: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 7f03bf: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f03c4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f03c4(); return;
}

void f_7f03c4(void) {
  LOAD_REGS();
L_7f03c4: /* 7f03c4: push 0xa112ec */
  { uint32_t v = 0xa112ecu; esp -= 4; W32(esp, v); }
/* 7f03c9: push 0xade940 */
  { uint32_t v = 0xade940u; esp -= 4; W32(esp, v); }
/* 7f03ce: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7f03d4u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7f03d4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f03d7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f03d9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f03db: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f03e0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f03e0(); return;
}

void f_7f03e0(void) {
  LOAD_REGS();
L_7f03e0: /* 7f03e0: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 7f03e3: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7f03e8: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 7f03eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f03ec: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 7f03ef: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f03f4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f03f4(); return;
}

void f_7f03f4(void) {
  LOAD_REGS();
L_7f03f4: /* 7f03f4: mov esi, dword ptr [0xcfa1ec] */
  esi = R32((uint32_t)(0xcfa1ecu));
/* 7f03fa: push 0xa112cc */
  { uint32_t v = 0xa112ccu; esp -= 4; W32(esp, v); }
/* 7f03ff: push 0xade968 */
  { uint32_t v = 0xade968u; esp -= 4; W32(esp, v); }
/* 7f0404: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7f0406u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f0406: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f0409: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7f040c: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7f040e: movzx ecx, byte ptr [eax + 0x4c8] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x4c8u)));
/* 7f0415: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f0416: push 0xade970 */
  { uint32_t v = 0xade970u; esp -= 4; W32(esp, v); }
/* 7f041b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7f041du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f041d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f0420: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f0422: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f0424: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f0429u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7f0429: guest_badaddr(0x7f0429); return;
}

void f_7f0620(void) {
  LOAD_REGS();
L_7f0620: /* 7f0620: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f0623: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f0624: mov esi, ecx */
  esi = ecx;
/* 7f0626: fld dword ptr [esi + 0xcc] */
  { double v = F32((uint32_t)(esi + 0xccu)); FPUSH(v); }
/* 7f062c: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7f0632: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7f0634: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7f0637: jne 0x7f06c0 */
  if (!zf) goto L_7f06c0;
L_7f063d: /* 7f063d: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 7f0641: fadd dword ptr [esi + 0xe8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0xe8u)));
/* 7f0647: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 7f064b: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 7f064f: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7f0653: fcomp dword ptr [esi + 0xcc] */
  fpu_com(ST0, F32((uint32_t)(esi + 0xccu)));
  FPOP();
/* 7f0659: mov dword ptr [esi + 0xe8], eax */
  W32((uint32_t)(esi + 0xe8u), eax);
/* 7f065f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7f0661: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7f0664: jne 0x7f06c0 */
  if (!zf) goto L_7f06c0;
L_7f0666: /* 7f0666: fld dword ptr [esi + 0xcc] */
  { double v = F32((uint32_t)(esi + 0xccu)); FPUSH(v); }
/* 7f066c: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7f0672: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7f0674: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7f0677: jne 0x7f06b9 */
  if (!zf) goto L_7f06b9;
L_7f0679: /* 7f0679: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 7f067d: fdiv dword ptr [esi + 0xcc] */
  ST0 = ST0 / (F32((uint32_t)(esi + 0xccu)));
/* 7f0683: call 0x99c958 */
  esp -= 4; W32(esp, 0x7f0688u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7f0688: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f068a: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 7f068e: fild dword ptr [esp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 7f0692: fmul dword ptr [esi + 0xcc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xccu)));
/* 7f0698: fsubr dword ptr [esp + 4] */
  ST0 = (F32((uint32_t)(esp + 0x4u))) - ST0;
/* 7f069c: fstp dword ptr [esi + 0xe8] */
  WF32((uint32_t)(esi + 0xe8u), ST0); FPOP();
/* 7f06a2: je 0x7f06b9 */
  if (zf) goto L_7f06b9;
L_7f06a4: /* 7f06a4: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 7f06aa: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7f06ad: jne 0x7f06b9 */
  if (!zf) goto L_7f06b9;
L_7f06af: /* 7f06af: mov dword ptr [esi + 0xcc], 0 */
  W32((uint32_t)(esi + 0xccu), 0x0u);
L_7f06b9: /* 7f06b9: mov ecx, esi */
  ecx = esi;
/* 7f06bb: call 0x6c8634 */
  esp -= 4; W32(esp, 0x7f06c0u); SPILL(); f_6c8634(); if (g_unwind) return; RELOAD();
L_7f06c0: /* 7f06c0: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7f06c4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f06c5: mov ecx, esi */
  ecx = esi;
/* 7f06c7: call 0x6c274d */
  esp -= 4; W32(esp, 0x7f06ccu); SPILL(); f_6c274d(); if (g_unwind) return; RELOAD();
/* 7f06cc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f06cd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f06d0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7f0710(void) {
  LOAD_REGS();
L_7f0710: /* 7f0710: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f0711: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f0712: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f0713: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f0714: mov esi, ecx */
  esi = ecx;
/* 7f0716: mov ecx, esp */
  ecx = esp;
/* 7f0718: push 0x150 */
  { uint32_t v = 0x150u; esp -= 4; W32(esp, v); }
/* 7f071d: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7f0723u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7f0723: mov ecx, esi */
  ecx = esi;
/* 7f0725: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x7f072bu); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 7f072b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f072d: je 0x7f0757 */
  if (zf) goto L_7f0757;
L_7f072f: /* 7f072f: mov edx, dword ptr [0xb7e2fc] */
  edx = R32((uint32_t)(0xb7e2fcu));
/* 7f0735: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 7f0739: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 7f073b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f073d: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 7f0741: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f0742: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f0744: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f0745: mov ecx, esi */
  ecx = esi;
/* 7f0747: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 7f074b: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7f0751u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7f0751: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f0752: mov ecx, esi */
  ecx = esi;
/* 7f0754: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x7f0757u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7f0757: /* 7f0757: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 7f075b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7f075d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f075e: mov ecx, esi */
  ecx = esi;
/* 7f0760: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x7f0763u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f0763: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f0764: mov ecx, esi */
  ecx = esi;
/* 7f0766: call 0x6c8350 */
  esp -= 4; W32(esp, 0x7f076bu); SPILL(); f_6c8350(); if (g_unwind) return; RELOAD();
/* 7f076b: fld dword ptr [esi + 0xb8] */
  { double v = F32((uint32_t)(esi + 0xb8u)); FPUSH(v); }
/* 7f0771: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7f0777: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7f0779: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7f077c: jnp 0x7f07b2 */
  if (!pf) goto L_7f07b2;
L_7f077e: /* 7f077e: fld dword ptr [esi + 0xb8] */
  { double v = F32((uint32_t)(esi + 0xb8u)); FPUSH(v); }
/* 7f0784: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 7f0788: fst dword ptr [esi + 0xb8] */
  WF32((uint32_t)(esi + 0xb8u), ST0);
/* 7f078e: fcomp dword ptr [0xa087d0] */
  fpu_com(ST0, F32((uint32_t)(0xa087d0u)));
  FPOP();
/* 7f0794: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7f0796: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7f0799: jp 0x7f07b2 */
  if (pf) goto L_7f07b2;
L_7f079b: /* 7f079b: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 7f07a1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f07a3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f07a5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f07a6: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0x7f07acu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f07ac: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f07ad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f07ae: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 7f07af: ret 4 */
  esp += 8; SPILL(); return;
L_7f07b2: /* 7f07b2: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 7f07b8: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7f07bb: jne 0x7f07d8 */
  if (!zf) goto L_7f07d8;
L_7f07bd: /* 7f07bd: mov al, byte ptr [esi + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x50u))) & 0xffu);
/* 7f07c0: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7f07c2: je 0x7f07d8 */
  if (zf) goto L_7f07d8;
L_7f07c4: /* 7f07c4: cmp byte ptr [esi + 0x91], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x91u))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7f07cb: je 0x7f07d8 */
  if (zf) goto L_7f07d8;
L_7f07cd: /* 7f07cd: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7f07cf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f07d0: mov ecx, esi */
  ecx = esi;
/* 7f07d2: call dword ptr [eax + 0x118] */
  { uint32_t t = R32((uint32_t)(eax + 0x118u)); esp -= 4; W32(esp, 0x7f07d8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7f07d8: /* 7f07d8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f07d9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f07da: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 7f07db: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7f0820(void) {
  LOAD_REGS();
L_7f0820: /* 7f0820: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7f0821: mov ebp, esp */
  ebp = esp;
/* 7f0823: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7f0825: push 0x9d12a0 */
  { uint32_t v = 0x9d12a0u; esp -= 4; W32(esp, v); }
/* 7f082a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7f0830: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f0831: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7f0838: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f083b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f083c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f083d: mov esi, ecx */
  esi = ecx;
/* 7f083f: mov ecx, dword ptr [esi + 0x80] */
  ecx = R32((uint32_t)(esi + 0x80u));
/* 7f0845: test ecx, 0x20000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f084b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f084c: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7f084f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7f0856: je 0x7f08c3 */
  if (zf) goto L_7f08c3;
L_7f0858: /* 7f0858: mov al, byte ptr [esi + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x50u))) & 0xffu);
/* 7f085b: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7f085d: je 0x7f0863 */
  if (zf) goto L_7f0863;
L_7f085f: /* 7f085f: cmp al, 5 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7f0861: jne 0x7f08c3 */
  if (!zf) goto L_7f08c3;
L_7f0863: /* 7f0863: mov edx, dword ptr [esi + 0xb4] */
  edx = R32((uint32_t)(esi + 0xb4u));
/* 7f0869: fld dword ptr [esi + 0xd4] */
  { double v = F32((uint32_t)(esi + 0xd4u)); FPUSH(v); }
/* 7f086f: fsubr qword ptr [edx + 0xd0] */
  ST0 = (F64((uint32_t)(edx + 0xd0u))) - ST0;
/* 7f0875: fcomp qword ptr [0xa110e0] */
  fpu_com(ST0, F64((uint32_t)(0xa110e0u)));
  FPOP();
/* 7f087b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7f087d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7f0880: jne 0x7f08c3 */
  if (!zf) goto L_7f08c3;
L_7f0882: /* 7f0882: mov eax, dword ptr [esi + 0xb0] */
  eax = R32((uint32_t)(esi + 0xb0u));
/* 7f0888: mov bl, byte ptr [eax + 0x4c8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x4c8u))) & 0xffu);
/* 7f088e: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7f0890: jne 0x7f08c3 */
  if (!zf) goto L_7f08c3;
L_7f0892: /* 7f0892: mov edx, dword ptr [edx + 0xfc] */
  edx = R32((uint32_t)(edx + 0xfcu));
/* 7f0898: shl edx, 0xa */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 7f089b: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7f089d: and edx, 0x400 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7f08a3: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7f08a5: mov dword ptr [esi + 0x80], edx */
  W32((uint32_t)(esi + 0x80u), edx);
L_7f08ab: /* 7f08ab: mov eax, 1 */
  eax = 0x1u;
/* 7f08b0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f08b3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f08ba: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f08bb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f08bc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f08bd: mov esp, ebp */
  esp = ebp;
/* 7f08bf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f08c0: ret 8 */
  esp += 12; SPILL(); return;
L_7f08c3: /* 7f08c3: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7f08c5: mov ecx, esi */
  ecx = esi;
/* 7f08c7: call dword ptr [eax + 0xe4] */
  { uint32_t t = R32((uint32_t)(eax + 0xe4u)); esp -= 4; W32(esp, 0x7f08cdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f08cd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f08cf: jne 0x7f08e4 */
  if (!zf) goto L_7f08e4;
L_7f08d1: /* 7f08d1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f08d4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f08d5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f08d6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f08dd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f08de: mov esp, ebp */
  esp = ebp;
/* 7f08e0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f08e1: ret 8 */
  esp += 12; SPILL(); return;
L_7f08e4: /* 7f08e4: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 7f08ea: mov ecx, dword ptr [eax + 0xfc] */
  ecx = R32((uint32_t)(eax + 0xfcu));
/* 7f08f0: mov ebx, dword ptr [esi + 0x80] */
  ebx = R32((uint32_t)(esi + 0x80u));
/* 7f08f6: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7f08f9: shl ecx, 0xa */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 7f08fc: xor ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7f08fe: and ecx, 0x400 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7f0904: mov edx, ebx */
  edx = ebx;
/* 7f0906: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7f0908: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f090b: mov dword ptr [esi + 0x80], edx */
  W32((uint32_t)(esi + 0x80u), edx);
/* 7f0911: jne 0x7f0921 */
  if (!zf) goto L_7f0921;
L_7f0913: /* 7f0913: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7f0915: mov ecx, esi */
  ecx = esi;
/* 7f0917: call dword ptr [edx + 0xf4] */
  { uint32_t t = R32((uint32_t)(edx + 0xf4u)); esp -= 4; W32(esp, 0x7f091du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f091d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f091f: je 0x7f08ab */
  if (zf) goto L_7f08ab;
L_7f0921: /* 7f0921: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 7f0924: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7f0926: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f0927: mov ecx, esi */
  ecx = esi;
/* 7f0929: call dword ptr [eax + 0xd8] */
  { uint32_t t = R32((uint32_t)(eax + 0xd8u)); esp -= 4; W32(esp, 0x7f092fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f092f: cmp byte ptr [esi + 0x90], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x90u))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7f0936: jne 0x7f0a30 */
  if (!zf) goto L_7f0a30;
L_7f093c: /* 7f093c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7f093e: mov ecx, esi */
  ecx = esi;
/* 7f0940: call dword ptr [edx + 0x18c] */
  { uint32_t t = R32((uint32_t)(edx + 0x18cu)); esp -= 4; W32(esp, 0x7f0946u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f0946: mov edi, eax */
  edi = eax;
/* 7f0948: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f094a: je 0x7f095a */
  if (zf) goto L_7f095a;
L_7f094c: /* 7f094c: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7f094e: mov ecx, edi */
  ecx = edi;
/* 7f0950: call dword ptr [eax + 0x1a4] */
  { uint32_t t = R32((uint32_t)(eax + 0x1a4u)); esp -= 4; W32(esp, 0x7f0956u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f0956: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f0958: jne 0x7f0960 */
  if (!zf) goto L_7f0960;
L_7f095a: /* 7f095a: cmp byte ptr [esi + 0x50], 0xd */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x50u))); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7f095e: jne 0x7f0970 */
  if (!zf) goto L_7f0970;
L_7f0960: /* 7f0960: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7f0962: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f0963: mov ecx, esi */
  ecx = esi;
/* 7f0965: call dword ptr [edx + 0xe8] */
  { uint32_t t = R32((uint32_t)(edx + 0xe8u)); esp -= 4; W32(esp, 0x7f096bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f096b: jmp 0x7f0a7b */
  goto L_7f0a7b;
L_7f0970: /* 7f0970: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f0971: mov ecx, esi */
  ecx = esi;
/* 7f0973: call 0x6c8422 */
  esp -= 4; W32(esp, 0x7f0978u); SPILL(); f_6c8422(); if (g_unwind) return; RELOAD();
/* 7f0978: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7f097a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f097b: mov ecx, esi */
  ecx = esi;
/* 7f097d: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x7f0980u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f0980: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f0981: mov ecx, esi */
  ecx = esi;
/* 7f0983: call 0x6c8350 */
  esp -= 4; W32(esp, 0x7f0988u); SPILL(); f_6c8350(); if (g_unwind) return; RELOAD();
/* 7f0988: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 7f098e: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7f0991: jne 0x7f08ab */
  if (!zf) goto L_7f08ab;
L_7f0997: /* 7f0997: mov al, byte ptr [esi + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x50u))) & 0xffu);
/* 7f099a: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7f099c: je 0x7f0a7b */
  if (zf) goto L_7f0a7b;
L_7f09a2: /* 7f09a2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f09a4: je 0x7f0a7b */
  if (zf) goto L_7f0a7b;
L_7f09aa: /* 7f09aa: mov ecx, dword ptr [esi + 0xb0] */
  ecx = R32((uint32_t)(esi + 0xb0u));
/* 7f09b0: fld dword ptr [ecx + 0x3ac] */
  { double v = F32((uint32_t)(ecx + 0x3acu)); FPUSH(v); }
/* 7f09b6: fsub dword ptr [edi + 0x678] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x678u)));
/* 7f09bc: fld dword ptr [edi + 0x4f8] */
  { double v = F32((uint32_t)(edi + 0x4f8u)); FPUSH(v); }
/* 7f09c2: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 7f09c8: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 7f09ca: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7f09cc: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7f09cf: jp 0x7f0a7b */
  if (pf) goto L_7f0a7b;
L_7f09d5: /* 7f09d5: fld dword ptr [edi + 0x678] */
  { double v = F32((uint32_t)(edi + 0x678u)); FPUSH(v); }
/* 7f09db: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7f09e1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7f09e3: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7f09e6: jnp 0x7f0a7b */
  if (!pf) goto L_7f0a7b;
L_7f09ec: /* 7f09ec: lea ecx, [esi + 0x188] */
  ecx = (uint32_t)(esi + 0x188u);
/* 7f09f2: call dword ptr [0xcfa5e8] */
  esp -= 4; W32(esp, 0x7f09f8u); SPILL(); f_4e3edb(); if (g_unwind) return; /* Core!?IsZero@FVector@@QBEHXZ */ RELOAD();
/* 7f09f8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f09fa: jne 0x7f0a1c */
  if (!zf) goto L_7f0a1c;
L_7f09fc: /* 7f09fc: mov eax, dword ptr [esi + 0xb0] */
  eax = R32((uint32_t)(esi + 0xb0u));
/* 7f0a02: fld dword ptr [eax + 0x3ac] */
  { double v = F32((uint32_t)(eax + 0x3acu)); FPUSH(v); }
/* 7f0a08: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7f0a0a: fsub dword ptr [edi + 0x678] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x678u)));
/* 7f0a10: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f0a11: mov ecx, esi */
  ecx = esi;
/* 7f0a13: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7f0a16: call dword ptr [edx + 0x118] */
  { uint32_t t = R32((uint32_t)(edx + 0x118u)); esp -= 4; W32(esp, 0x7f0a1cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7f0a1c: /* 7f0a1c: mov ecx, dword ptr [esi + 0xb0] */
  ecx = R32((uint32_t)(esi + 0xb0u));
/* 7f0a22: mov edx, dword ptr [ecx + 0x3ac] */
  edx = R32((uint32_t)(ecx + 0x3acu));
/* 7f0a28: mov dword ptr [edi + 0x678], edx */
  W32((uint32_t)(edi + 0x678u), edx);
/* 7f0a2e: jmp 0x7f0a7b */
  goto L_7f0a7b;
L_7f0a30: /* 7f0a30: mov al, byte ptr [esi + 0x91] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x91u))) & 0xffu);
/* 7f0a36: cmp al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 7f0a38: jbe 0x7f0a47 */
  if ((cf | zf)) goto L_7f0a47;
L_7f0a3a: /* 7f0a3a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7f0a3c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f0a3d: mov ecx, esi */
  ecx = esi;
/* 7f0a3f: call dword ptr [eax + 0xe8] */
  { uint32_t t = R32((uint32_t)(eax + 0xe8u)); esp -= 4; W32(esp, 0x7f0a45u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f0a45: jmp 0x7f0a7b */
  goto L_7f0a7b;
L_7f0a47: /* 7f0a47: jne 0x7f0a56 */
  if (!zf) goto L_7f0a56;
L_7f0a49: /* 7f0a49: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7f0a4b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f0a4c: mov ecx, esi */
  ecx = esi;
/* 7f0a4e: call dword ptr [edx + 0xec] */
  { uint32_t t = R32((uint32_t)(edx + 0xecu)); esp -= 4; W32(esp, 0x7f0a54u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f0a54: jmp 0x7f0a7b */
  goto L_7f0a7b;
L_7f0a56: /* 7f0a56: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 7f0a5c: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7f0a5f: jne 0x7f08ab */
  if (!zf) goto L_7f08ab;
L_7f0a65: /* 7f0a65: mov al, byte ptr [esi + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x50u))) & 0xffu);
/* 7f0a68: cmp al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7f0a6a: je 0x7f0a70 */
  if (zf) goto L_7f0a70;
L_7f0a6c: /* 7f0a6c: cmp al, 5 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7f0a6e: jne 0x7f0a7b */
  if (!zf) goto L_7f0a7b;
L_7f0a70: /* 7f0a70: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7f0a72: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f0a73: mov ecx, esi */
  ecx = esi;
/* 7f0a75: call dword ptr [eax + 0x118] */
  { uint32_t t = R32((uint32_t)(eax + 0x118u)); esp -= 4; W32(esp, 0x7f0a7bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7f0a7b: /* 7f0a7b: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 7f0a81: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7f0a84: jne 0x7f08ab */
  if (!zf) goto L_7f08ab;
L_7f0a8a: /* 7f0a8a: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7f0a8c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f0a8d: mov ecx, esi */
  ecx = esi;
/* 7f0a8f: call dword ptr [edx + 0xf0] */
  { uint32_t t = R32((uint32_t)(edx + 0xf0u)); esp -= 4; W32(esp, 0x7f0a95u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f0a95: jmp 0x7f08ab */
  goto L_7f08ab;
}

void f_7f0a9a(void) {
  LOAD_REGS();
L_7f0a9a: /* 7f0a9a: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7f0a9d: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7f0aa2: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7f0aa5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f0aa6: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7f0aa9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f0aaeu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f0aae(); return;
}

void f_7f0aae(void) {
  LOAD_REGS();
L_7f0aae: /* 7f0aae: push 0xa1140c */
  { uint32_t v = 0xa1140cu; esp -= 4; W32(esp, v); }
/* 7f0ab3: push 0xade678 */
  { uint32_t v = 0xade678u; esp -= 4; W32(esp, v); }
/* 7f0ab8: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7f0abeu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7f0abe: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f0ac1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f0ac3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f0ac5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f0acau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7f0aca: guest_badaddr(0x7f0aca); return;
}

void f_7f0b80(void) {
  LOAD_REGS();
L_7f0b80: /* 7f0b80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7f0b81: mov ebp, esp */
  ebp = esp;
/* 7f0b83: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7f0b85: push 0x9d12b0 */
  { uint32_t v = 0x9d12b0u; esp -= 4; W32(esp, v); }
/* 7f0b8a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7f0b90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f0b91: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7f0b98: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f0b9b: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 7f0b9e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f0b9f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f0ba0: mov esi, ecx */
  esi = ecx;
/* 7f0ba2: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 7f0ba8: fadd dword ptr [esi + 0x618] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x618u)));
/* 7f0bae: mov eax, dword ptr [eax + 0xfc] */
  eax = R32((uint32_t)(eax + 0xfcu));
/* 7f0bb4: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7f0bb6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f0bb7: fstp dword ptr [esi + 0x618] */
  WF32((uint32_t)(esi + 0x618u), ST0); FPOP();
/* 7f0bbd: mov edi, dword ptr [esi + 0x80] */
  edi = R32((uint32_t)(esi + 0x80u));
/* 7f0bc3: shl eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7f0bc6: xor eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7f0bc8: and eax, 0x400 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7f0bcd: mov ecx, edi */
  ecx = edi;
/* 7f0bcf: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7f0bd1: mov dword ptr [esi + 0x80], ecx */
  W32((uint32_t)(esi + 0x80u), ecx);
/* 7f0bd7: mov ecx, esi */
  ecx = esi;
/* 7f0bd9: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7f0bdc: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7f0be3: call dword ptr [edx + 0x194] */
  { uint32_t t = R32((uint32_t)(edx + 0x194u)); esp -= 4; W32(esp, 0x7f0be9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f0be9: mov al, byte ptr [esi + 0x90] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x90u))) & 0xffu);
/* 7f0bef: mov bl, 3 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x3u) & 0xffu);
/* 7f0bf1: cmp al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7f0bf3: jne 0x7f0cf1 */
  if (!zf) goto L_7f0cf1;
L_7f0bf9: /* 7f0bf9: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7f0bfb: mov ecx, esi */
  ecx = esi;
/* 7f0bfd: call dword ptr [eax + 0x1a4] */
  { uint32_t t = R32((uint32_t)(eax + 0x1a4u)); esp -= 4; W32(esp, 0x7f0c03u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f0c03: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f0c05: jne 0x7f0cf1 */
  if (!zf) goto L_7f0cf1;
L_7f0c0b: /* 7f0c0b: mov ecx, dword ptr [esi + 0x548] */
  ecx = R32((uint32_t)(esi + 0x548u));
/* 7f0c11: cmp ecx, dword ptr [esi + 0x33c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x33cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f0c17: je 0x7f0cd9 */
  if (zf) goto L_7f0cd9;
L_7f0c1d: /* 7f0c1d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f0c1f: je 0x7f0cd9 */
  if (zf) goto L_7f0cd9;
L_7f0c25: /* 7f0c25: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f0c27: call dword ptr [edx + 0x184] */
  { uint32_t t = R32((uint32_t)(edx + 0x184u)); esp -= 4; W32(esp, 0x7f0c2du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f0c2d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f0c2f: je 0x7f0cd9 */
  if (zf) goto L_7f0cd9;
L_7f0c35: /* 7f0c35: mov eax, dword ptr [esi + 0x548] */
  eax = R32((uint32_t)(esi + 0x548u));
/* 7f0c3b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f0c3c: call 0x6cacdb */
  esp -= 4; W32(esp, 0x7f0c41u); SPILL(); f_6cacdb(); if (g_unwind) return; RELOAD();
/* 7f0c41: mov edi, eax */
  edi = eax;
/* 7f0c43: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f0c46: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f0c48: je 0x7f0cd9 */
  if (zf) goto L_7f0cd9;
L_7f0c4e: /* 7f0c4e: mov ecx, dword ptr [edi + 0x33c] */
  ecx = R32((uint32_t)(edi + 0x33cu));
/* 7f0c54: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f0c56: je 0x7f0c8b */
  if (zf) goto L_7f0c8b;
L_7f0c58: /* 7f0c58: push 0xb6a8d8 */
  { uint32_t v = 0xb6a8d8u; esp -= 4; W32(esp, v); }
/* 7f0c5d: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7f0c63u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7f0c63: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f0c65: je 0x7f0c8b */
  if (zf) goto L_7f0c8b;
L_7f0c67: /* 7f0c67: mov ecx, dword ptr [edi + 0x33c] */
  ecx = R32((uint32_t)(edi + 0x33cu));
/* 7f0c6d: add ecx, 0x17c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7f0c73: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7f0c75: lea edx, [esi + 0x620] */
  edx = (uint32_t)(esi + 0x620u);
/* 7f0c7b: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7f0c7d: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7f0c80: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 7f0c83: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7f0c86: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7f0c89: jmp 0x7f0ca7 */
  goto L_7f0ca7;
L_7f0c8b: /* 7f0c8b: lea edx, [edi + 0x17c] */
  edx = (uint32_t)(edi + 0x17cu);
/* 7f0c91: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7f0c93: lea eax, [esi + 0x620] */
  eax = (uint32_t)(esi + 0x620u);
/* 7f0c99: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7f0c9b: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 7f0c9e: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7f0ca1: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7f0ca4: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
L_7f0ca7: /* 7f0ca7: mov eax, dword ptr [edi + 0x444] */
  eax = R32((uint32_t)(edi + 0x444u));
/* 7f0cad: mov dword ptr [esi + 0x638], eax */
  W32((uint32_t)(esi + 0x638u), eax);
/* 7f0cb3: mov edi, dword ptr [edi + 0x438] */
  edi = R32((uint32_t)(edi + 0x438u));
/* 7f0cb9: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f0cbb: je 0x7f0cd9 */
  if (zf) goto L_7f0cd9;
L_7f0cbd: /* 7f0cbd: add edi, 0x34c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x34cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7f0cc3: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7f0cc5: lea ecx, [esi + 0x63c] */
  ecx = (uint32_t)(esi + 0x63cu);
/* 7f0ccb: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7f0ccd: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7f0cd0: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7f0cd3: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 7f0cd6: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
L_7f0cd9: /* 7f0cd9: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 7f0cdc: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7f0cde: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f0cdf: mov ecx, esi */
  ecx = esi;
/* 7f0ce1: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x7f0ce4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f0ce4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f0ce5: mov ecx, esi */
  ecx = esi;
/* 7f0ce7: call 0x6c8350 */
  esp -= 4; W32(esp, 0x7f0cecu); SPILL(); f_6c8350(); if (g_unwind) return; RELOAD();
/* 7f0cec: jmp 0x7f0da8 */
  goto L_7f0da8;
L_7f0cf1: /* 7f0cf1: cmp byte ptr [esi + 0x91], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x91u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* 7f0cf8: jb 0x7f0da8 */
  if (cf) goto L_7f0da8;
L_7f0cfe: /* 7f0cfe: push 0xb5e8e8 */
  { uint32_t v = 0xb5e8e8u; esp -= 4; W32(esp, v); }
/* 7f0d03: mov ecx, esi */
  ecx = esi;
/* 7f0d05: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7f0d0bu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7f0d0b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f0d0d: je 0x7f0d1e */
  if (zf) goto L_7f0d1e;
L_7f0d0f: /* 7f0d0f: mov eax, dword ptr [esi + 0x534] */
  eax = R32((uint32_t)(esi + 0x534u));
/* 7f0d15: test ah, 8 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7f0d18: je 0x7f0e93 */
  if (zf) goto L_7f0e93;
L_7f0d1e: /* 7f0d1e: mov eax, dword ptr [esi + 0x4c0] */
  eax = R32((uint32_t)(esi + 0x4c0u));
/* 7f0d24: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f0d26: je 0x7f0d6c */
  if (zf) goto L_7f0d6c;
L_7f0d28: /* 7f0d28: mov eax, dword ptr [esi + 0x78c] */
  eax = R32((uint32_t)(esi + 0x78cu));
/* 7f0d2e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f0d30: jne 0x7f0d43 */
  if (!zf) goto L_7f0d43;
L_7f0d32: /* 7f0d32: mov ecx, esi */
  ecx = esi;
/* 7f0d34: call 0x6c1a8c */
  esp -= 4; W32(esp, 0x7f0d39u); SPILL(); f_6c1a8c(); if (g_unwind) return; RELOAD();
/* 7f0d39: mov eax, dword ptr [esi + 0x78c] */
  eax = R32((uint32_t)(esi + 0x78cu));
/* 7f0d3f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f0d41: je 0x7f0d6c */
  if (zf) goto L_7f0d6c;
L_7f0d43: /* 7f0d43: mov ecx, dword ptr [esi + 0x4c0] */
  ecx = R32((uint32_t)(esi + 0x4c0u));
/* 7f0d49: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 7f0d4c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f0d4e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f0d4f: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0x7f0d52u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f0d52: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f0d53: mov ecx, esi */
  ecx = esi;
/* 7f0d55: call 0x6c4acf */
  esp -= 4; W32(esp, 0x7f0d5au); SPILL(); f_6c4acf(); if (g_unwind) return; RELOAD();
/* 7f0d5a: mov ecx, dword ptr [esi + 0x4c0] */
  ecx = R32((uint32_t)(esi + 0x4c0u));
/* 7f0d60: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7f0d62: push 0xbf800000 */
  { uint32_t v = 0xbf800000u; esp -= 4; W32(esp, v); }
/* 7f0d67: call dword ptr [eax + 0x68] */
  { uint32_t t = R32((uint32_t)(eax + 0x68u)); esp -= 4; W32(esp, 0x7f0d6au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f0d6a: jmp 0x7f0d6f */
  goto L_7f0d6f;
L_7f0d6c: /* 7f0d6c: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
L_7f0d6f: /* 7f0d6f: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7f0d71: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f0d72: mov ecx, esi */
  ecx = esi;
/* 7f0d74: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x7f0d77u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f0d77: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f0d78: mov ecx, esi */
  ecx = esi;
/* 7f0d7a: call 0x6c8350 */
  esp -= 4; W32(esp, 0x7f0d7fu); SPILL(); f_6c8350(); if (g_unwind) return; RELOAD();
/* 7f0d7f: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 7f0d85: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7f0d88: jne 0x7f0e93 */
  if (!zf) goto L_7f0e93;
L_7f0d8e: /* 7f0d8e: mov al, byte ptr [esi + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x50u))) & 0xffu);
/* 7f0d91: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7f0d93: je 0x7f0da8 */
  if (zf) goto L_7f0da8;
L_7f0d95: /* 7f0d95: cmp byte ptr [esi + 0x91], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x91u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7f0d9b: je 0x7f0da8 */
  if (zf) goto L_7f0da8;
L_7f0d9d: /* 7f0d9d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7f0d9f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f0da0: mov ecx, esi */
  ecx = esi;
/* 7f0da2: call dword ptr [eax + 0x118] */
  { uint32_t t = R32((uint32_t)(eax + 0x118u)); esp -= 4; W32(esp, 0x7f0da8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7f0da8: /* 7f0da8: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 7f0dae: mov ecx, dword ptr [eax + 0x88] */
  ecx = R32((uint32_t)(eax + 0x88u));
/* 7f0db4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f0db6: je 0x7f0e35 */
  if (zf) goto L_7f0e35;
L_7f0db8: /* 7f0db8: mov eax, dword ptr [ecx + 0x38] */
  eax = R32((uint32_t)(ecx + 0x38u));
/* 7f0dbb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f0dbd: je 0x7f0e35 */
  if (zf) goto L_7f0e35;
L_7f0dbf: /* 7f0dbf: cmp byte ptr [esi + 0x91], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x91u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7f0dc6: jne 0x7f0e93 */
  if (!zf) goto L_7f0e93;
L_7f0dcc: /* 7f0dcc: test byte ptr [esi + 0x4c4], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x4c4u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7f0dd3: jne 0x7f0e35 */
  if (!zf) goto L_7f0e35;
L_7f0dd5: /* 7f0dd5: mov edx, dword ptr [esi + 0x548] */
  edx = R32((uint32_t)(esi + 0x548u));
/* 7f0ddb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f0ddc: call 0x6cacdb */
  esp -= 4; W32(esp, 0x7f0de1u); SPILL(); f_6cacdb(); if (g_unwind) return; RELOAD();
/* 7f0de1: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f0de4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f0de6: je 0x7f0e35 */
  if (zf) goto L_7f0e35;
L_7f0de8: /* 7f0de8: lea ecx, [esi + 0x17c] */
  ecx = (uint32_t)(esi + 0x17cu);
/* 7f0dee: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 7f0df0: lea edx, [esi + 0x620] */
  edx = (uint32_t)(esi + 0x620u);
/* 7f0df6: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 7f0df8: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 7f0dfb: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7f0dfe: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 7f0e01: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7f0e04: mov edx, dword ptr [eax + 0x448] */
  edx = R32((uint32_t)(eax + 0x448u));
/* 7f0e0a: mov dword ptr [esi + 0x638], edx */
  W32((uint32_t)(esi + 0x638u), edx);
/* 7f0e10: mov eax, dword ptr [eax + 0x438] */
  eax = R32((uint32_t)(eax + 0x438u));
/* 7f0e16: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f0e18: je 0x7f0e35 */
  if (zf) goto L_7f0e35;
L_7f0e1a: /* 7f0e1a: add eax, 0x34c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x34cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7f0e1f: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7f0e21: lea ecx, [esi + 0x63c] */
  ecx = (uint32_t)(esi + 0x63cu);
/* 7f0e27: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7f0e29: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7f0e2c: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7f0e2f: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7f0e32: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
L_7f0e35: /* 7f0e35: cmp byte ptr [esi + 0x91], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x91u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7f0e3c: jne 0x7f0e93 */
  if (!zf) goto L_7f0e93;
L_7f0e3e: /* 7f0e3e: cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f0e42: jne 0x7f0e93 */
  if (!zf) goto L_7f0e93;
L_7f0e44: /* 7f0e44: fld dword ptr [esi + 0x344] */
  { double v = F32((uint32_t)(esi + 0x344u)); FPUSH(v); }
/* 7f0e4a: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7f0e50: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7f0e52: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7f0e55: jp 0x7f0e69 */
  if (pf) goto L_7f0e69;
L_7f0e57: /* 7f0e57: fld dword ptr [esi + 0x344] */
  { double v = F32((uint32_t)(esi + 0x344u)); FPUSH(v); }
/* 7f0e5d: fadd dword ptr [0xa08920] */
  ST0 = ST0 + (F32((uint32_t)(0xa08920u)));
/* 7f0e63: fstp dword ptr [esi + 0x344] */
  WF32((uint32_t)(esi + 0x344u), ST0); FPOP();
L_7f0e69: /* 7f0e69: fld dword ptr [esi + 0x344] */
  { double v = F32((uint32_t)(esi + 0x344u)); FPUSH(v); }
/* 7f0e6f: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 7f0e75: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f0e77: fsub dword ptr [ebp + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x8u)));
/* 7f0e7a: fstp dword ptr [esi + 0x344] */
  WF32((uint32_t)(esi + 0x344u), ST0); FPOP();
/* 7f0e80: je 0x7f0e93 */
  if (zf) goto L_7f0e93;
L_7f0e82: /* 7f0e82: mov cl, byte ptr [eax + 0x80] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x80u))) & 0xffu);
/* 7f0e88: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 7f0e8a: js 0x7f0e93 */
  if (sf) goto L_7f0e93;
L_7f0e8c: /* 7f0e8c: mov ecx, esi */
  ecx = esi;
/* 7f0e8e: call 0x6cc171 */
  esp -= 4; W32(esp, 0x7f0e93u); SPILL(); f_6cc171(); if (g_unwind) return; RELOAD();
L_7f0e93: /* 7f0e93: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f0e96: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f0e97: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f0e98: mov eax, 1 */
  eax = 0x1u;
/* 7f0e9d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f0ea4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f0ea5: mov esp, ebp */
  esp = ebp;
/* 7f0ea7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f0ea8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7f0eab(void) {
  LOAD_REGS();
L_7f0eab: /* 7f0eab: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7f0eae: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7f0eb3: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7f0eb6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f0eb7: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7f0eba: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f0ebfu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f0ebf(); return;
}

void f_7f0ebf(void) {
  LOAD_REGS();
L_7f0ebf: /* 7f0ebf: push 0xa1142c */
  { uint32_t v = 0xa1142cu; esp -= 4; W32(esp, v); }
/* 7f0ec4: push 0xade688 */
  { uint32_t v = 0xade688u; esp -= 4; W32(esp, v); }
/* 7f0ec9: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7f0ecfu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7f0ecf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f0ed2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f0ed4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f0ed6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f0edbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7f0edb: guest_badaddr(0x7f0edb); return;
}

void f_7f0fc0(void) {
  LOAD_REGS();
L_7f0fc0: /* 7f0fc0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7f0fc4: sub esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f0fc7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f0fc8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f0fc9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f0fca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f0fcb: mov edi, ecx */
  edi = ecx;
/* 7f0fcd: call 0x6c93db */
  esp -= 4; W32(esp, 0x7f0fd2u); SPILL(); f_6c93db(); if (g_unwind) return; RELOAD();
/* 7f0fd2: mov eax, dword ptr [edi + 0x344] */
  eax = R32((uint32_t)(edi + 0x344u));
/* 7f0fd8: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7f0fda: je 0x7f11bb */
  if (zf) goto L_7f11bb;
L_7f0fe0: /* 7f0fe0: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7f0fe2: jne 0x7f11bb */
  if (!zf) goto L_7f11bb;
L_7f0fe8: /* 7f0fe8: mov eax, dword ptr [edi + 0x34c] */
  eax = R32((uint32_t)(edi + 0x34cu));
/* 7f0fee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f0ff0: je 0x7f11bb */
  if (zf) goto L_7f11bb;
L_7f0ff6: /* 7f0ff6: fld dword ptr [eax + 0xd4] */
  { double v = F32((uint32_t)(eax + 0xd4u)); FPUSH(v); }
/* 7f0ffc: fcomp dword ptr [edi + 0x340] */
  fpu_com(ST0, F32((uint32_t)(edi + 0x340u)));
  FPOP();
/* 7f1002: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7f1004: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7f1007: jne 0x7f11bb */
  if (!zf) goto L_7f11bb;
L_7f100d: /* 7f100d: mov ecx, dword ptr [edi + 0xb0] */
  ecx = R32((uint32_t)(edi + 0xb0u));
/* 7f1013: mov ebx, dword ptr [ecx + 0x514] */
  ebx = R32((uint32_t)(ecx + 0x514u));
/* 7f1019: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f101b: je 0x7f11bb */
  if (zf) goto L_7f11bb;
L_7f1021: /* 7f1021: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7f1023: mov ecx, ebx */
  ecx = ebx;
/* 7f1025: call dword ptr [edx + 0x1a4] */
  { uint32_t t = R32((uint32_t)(edx + 0x1a4u)); esp -= 4; W32(esp, 0x7f102bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f102b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f102d: je 0x7f10a4 */
  if (zf) goto L_7f10a4;
L_7f102f: /* 7f102f: push 0xb6a8d8 */
  { uint32_t v = 0xb6a8d8u; esp -= 4; W32(esp, v); }
/* 7f1034: mov ecx, ebx */
  ecx = ebx;
/* 7f1036: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7f103cu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7f103c: mov esi, eax */
  esi = eax;
/* 7f103e: neg esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  esi = r;
  }
/* 7f1040: sbb esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  esi = r;
  }
/* 7f1042: and esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 7f1044: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7f1046: mov ecx, esi */
  ecx = esi;
/* 7f1048: call dword ptr [eax + 0x194] */
  { uint32_t t = R32((uint32_t)(eax + 0x194u)); esp -= 4; W32(esp, 0x7f104eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f104e: fld dword ptr [eax + 0x178] */
  { double v = F32((uint32_t)(eax + 0x178u)); FPUSH(v); }
/* 7f1054: fsub dword ptr [edi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x178u)));
/* 7f105a: mov ecx, dword ptr [edi + 0x33c] */
  ecx = R32((uint32_t)(edi + 0x33cu));
/* 7f1060: fld dword ptr [eax + 0x174] */
  { double v = F32((uint32_t)(eax + 0x174u)); FPUSH(v); }
/* 7f1066: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7f106b: fsub dword ptr [edi + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x174u)));
/* 7f1071: mov dword ptr [esp + 0x58], ecx */
  W32((uint32_t)(esp + 0x58u), ecx);
/* 7f1075: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 7f1077: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 7f107b: fsub dword ptr [edi + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x170u)));
/* 7f1081: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 7f1085: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 7f1089: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 7f108d: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x7f1093u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 7f1093: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 7f1097: fmul dword ptr [esp + 0x58] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x58u)));
/* 7f109b: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 7f109d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7f109f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7f10a2: je 0x7f10b7 */
  if (zf) goto L_7f10b7;
L_7f10a4: /* 7f10a4: mov ebx, dword ptr [ebx + 0x364] */
  ebx = R32((uint32_t)(ebx + 0x364u));
/* 7f10aa: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f10ac: jne 0x7f1021 */
  if (!zf) goto L_7f1021;
L_7f10b2: /* 7f10b2: jmp 0x7f11bb */
  goto L_7f11bb;
L_7f10b7: /* 7f10b7: mov ecx, dword ptr [edi + 0x34c] */
  ecx = R32((uint32_t)(edi + 0x34cu));
/* 7f10bd: fld dword ptr [ecx + 0x178] */
  { double v = F32((uint32_t)(ecx + 0x178u)); FPUSH(v); }
/* 7f10c3: mov eax, dword ptr [esi + 0x548] */
  eax = R32((uint32_t)(esi + 0x548u));
/* 7f10c9: fsub dword ptr [eax + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x178u)));
/* 7f10cf: add ecx, 0x170 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7f10d5: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 7f10d8: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7f10dd: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 7f10e0: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 7f10e4: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 7f10e6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f10e7: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 7f10e9: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 7f10ed: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 7f10f1: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 7f10f5: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 7f10f9: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x7f10ffu); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 7f10ff: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 7f1103: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f1104: lea ecx, [esi + 0x17c] */
  ecx = (uint32_t)(esi + 0x17cu);
/* 7f110a: call dword ptr [0xcfa7dc] */
  esp -= 4; W32(esp, 0x7f1110u); SPILL(); f_4e30a8(); if (g_unwind) return; /* Core!?Vector@FRotator@@QAE?AVFVector@@XZ */ RELOAD();
/* 7f1110: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 7f1114: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 7f1117: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 7f111b: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 7f111e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7f1120: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 7f1124: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 7f1126: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7f1128: fcomp dword ptr [edi + 0x354] */
  fpu_com(ST0, F32((uint32_t)(edi + 0x354u)));
  FPOP();
/* 7f112e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7f1130: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7f1133: jne 0x7f11bb */
  if (!zf) goto L_7f11bb;
L_7f1139: /* 7f1139: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f113b: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 7f1140: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 7f1144: call 0x6c6a46 */
  esp -= 4; W32(esp, 0x7f1149u); SPILL(); f_6c6a46(); if (g_unwind) return; RELOAD();
/* 7f1149: mov ecx, dword ptr [edi + 0xb4] */
  ecx = R32((uint32_t)(edi + 0xb4u));
/* 7f114f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f1151: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f1154: mov eax, esp */
  eax = esp;
/* 7f1156: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 7f115e: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 7f1162: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 7f1164: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 7f116c: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 7f1170: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 7f1173: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 7f117b: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 7f117f: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 7f1182: mov eax, dword ptr [esi + 0x548] */
  eax = R32((uint32_t)(esi + 0x548u));
/* 7f1188: push 0x286 */
  { uint32_t v = 0x286u; esp -= 4; W32(esp, v); }
/* 7f118d: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7f1192: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f1193: mov eax, dword ptr [edi + 0x34c] */
  eax = R32((uint32_t)(edi + 0x34cu));
/* 7f1199: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7f119e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f119f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f11a0: lea eax, [esp + 0x40] */
  eax = (uint32_t)(esp + 0x40u);
/* 7f11a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f11a5: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x7f11abu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f11ab: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 7f11af: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f11b1: jne 0x7f11bb */
  if (!zf) goto L_7f11bb;
L_7f11b3: /* 7f11b3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f11b4: mov ecx, edi */
  ecx = edi;
/* 7f11b6: call 0x6ca49d */
  esp -= 4; W32(esp, 0x7f11bbu); SPILL(); f_6ca49d(); if (g_unwind) return; RELOAD();
L_7f11bb: /* 7f11bb: mov ecx, dword ptr [edi + 0xb0] */
  ecx = R32((uint32_t)(edi + 0xb0u));
/* 7f11c1: mov edx, dword ptr [ecx + 0x3ac] */
  edx = R32((uint32_t)(ecx + 0x3acu));
/* 7f11c7: mov dword ptr [edi + 0x340], edx */
  W32((uint32_t)(edi + 0x340u), edx);
/* 7f11cd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f11ce: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f11cf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f11d0: add esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f11d3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7f1270(void) {
  LOAD_REGS();
L_7f1270: /* 7f1270: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7f1274: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 7f1278: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7f127a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f127b: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x7f127eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f127e: ret  */
  esp += 4; SPILL(); return;
}

void f_7f1290(void) {
  LOAD_REGS();
L_7f1290: /* 7f1290: mov eax, 0xcef618 */
  eax = 0xcef618u;
/* 7f1295: ret  */
  esp += 4; SPILL(); return;
}

void f_7f12b0(void) {
  LOAD_REGS();
L_7f12b0: /* 7f12b0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 7f12b5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7f12b7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 7f12bb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 7f12bf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f12c1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f12c3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f12c4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 7f12c8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f12ca: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f12cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f12cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f12cd: push 0xcef618 */
  { uint32_t v = 0xcef618u; esp -= 4; W32(esp, v); }
/* 7f12d2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x7f12d8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 7f12d8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f12db: ret  */
  esp += 4; SPILL(); return;
}

void f_7f12f0(void) {
  LOAD_REGS();
L_7f12f0: /* 7f12f0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7f12f4: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 7f12f8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7f12fa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f12fb: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x7f12feu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f12fe: ret  */
  esp += 4; SPILL(); return;
}
