#include "recomp.h"
#include "rec_mod.h"

void f_918150(void) {
  LOAD_REGS();
L_918150: /* 918150: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 918151: mov ebp, esp */
  ebp = esp;
/* 918153: sub esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 918156: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 918157: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 918158: mov esi, ecx */
  esi = ecx;
/* 91815a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91815b: mov eax, 0x50 */
  eax = 0x50u;
/* 918160: mov dword ptr [ebp - 0x2c], esi */
  W32((uint32_t)(ebp + 0xffffffd4u), esi);
/* 918163: call 0x99cc00 */
  esp -= 4; W32(esp, 0x918168u); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 918168: mov eax, esp */
  eax = esp;
/* 91816a: lea edi, [eax + 0xf] */
  edi = (uint32_t)(eax + 0xfu);
/* 91816d: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 918170: xor ebx, ebx */
  ebx = 0;
/* 918172: and edi, 0xfffffff0 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 918175: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 918177: mov dword ptr [ebp - 8], edi */
  W32((uint32_t)(ebp + 0xfffffff8u), edi);
/* 91817a: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 91817d: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 918180: mov dword ptr [ebp - 0xc], ebx */
  W32((uint32_t)(ebp + 0xfffffff4u), ebx);
/* 918183: jle 0x91839d */
  if ((zf || sf != of)) goto L_91839d;
L_918189: /* 918189: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 91818c: jmp 0x918197 */
  goto L_918197;
L_91818e: /* 91818e: mov esi, dword ptr [ebp - 0x2c] */
  esi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 918191: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 918194: mov edi, dword ptr [ebp - 8] */
  edi = R32((uint32_t)(ebp + 0xfffffff8u));
L_918197: /* 918197: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 91819a: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 91819d: mov edx, dword ptr [ecx + ebx*4] */
  edx = R32((uint32_t)(ecx + ebx*4));
/* 9181a0: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 9181a3: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 9181a6: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 9181a9: xor eax, eax */
  eax = 0;
/* 9181ab: mov ecx, 0x10 */
  ecx = 0x10u;
/* 9181b0: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 9181b2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 9181b5: mov eax, ebx */
  eax = ebx;
/* 9181b7: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9181b9: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9181bb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9181bd: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* 9181c0: jle 0x91822e */
  if ((zf || sf != of)) goto L_91822e;
L_9181c2: /* 9181c2: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
L_9181c5: /* 9181c5: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 9181c8: mov edx, dword ptr [edx + ecx*4] */
  edx = R32((uint32_t)(edx + ecx*4));
/* 9181cb: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9181cd: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 9181d0: je 0x918221 */
  if (zf) goto L_918221;
L_9181d2: /* 9181d2: xor ecx, ecx */
  ecx = 0;
/* 9181d4: mov dword ptr [ebp - 0x10], ecx */
  W32((uint32_t)(ebp + 0xfffffff0u), ecx);
L_9181d7: /* 9181d7: mov ebx, dword ptr [ebp - 8] */
  ebx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 9181da: xor edi, edi */
  edi = 0;
/* 9181dc: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9181df: jge 0x91820a */
  if ((sf == of)) goto L_91820a;
L_9181e1: /* 9181e1: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9181e3: lea esi, [edx + ecx*4] */
  esi = (uint32_t)(edx + ecx*4);
/* 9181e6: mov ecx, 4 */
  ecx = 0x4u;
/* 9181eb: mov eax, ebx */
  eax = ebx;
/* 9181ed: mov edx, esi */
  edx = esi;
/* 9181ef: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
L_9181f1: /* 9181f1: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 9181f3: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9181f6: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 9181f8: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9181fb: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 9181fc: fadd dword ptr [eax - 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffffcu)));
/* 9181ff: fstp dword ptr [eax - 4] */
  WF32((uint32_t)(eax + 0xfffffffcu), ST0); FPOP();
/* 918202: jne 0x9181f1 */
  if (!zf) goto L_9181f1;
L_918204: /* 918204: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 918207: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
L_91820a: /* 91820a: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 91820b: add ebx, 0x14 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 91820e: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 918211: jl 0x9181e1 */
  if ((sf != of)) goto L_9181e1;
L_918213: /* 918213: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 918216: cmp ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 918219: mov dword ptr [ebp - 0x10], ecx */
  W32((uint32_t)(ebp + 0xfffffff0u), ecx);
/* 91821c: jl 0x9181d7 */
  if ((sf != of)) goto L_9181d7;
L_91821e: /* 91821e: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
L_918221: /* 918221: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 918224: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 918225: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 918226: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* 918229: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 91822c: jne 0x9181c5 */
  if (!zf) goto L_9181c5;
L_91822e: /* 91822e: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 918231: mov ebx, dword ptr [eax + ecx*4] */
  ebx = R32((uint32_t)(eax + ecx*4));
/* 918234: mov edi, dword ptr [ebp - 0x34] */
  edi = R32((uint32_t)(ebp + 0xffffffccu));
/* 918237: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 91823a: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91823c: mov edi, dword ptr [ebp - 8] */
  edi = R32((uint32_t)(ebp + 0xfffffff8u));
/* 91823f: xor esi, esi */
  esi = 0;
/* 918241: mov edx, 1 */
  edx = 0x1u;
/* 918246: mov eax, ebx */
  eax = ebx;
/* 918248: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 91824a: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
/* 91824d: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 918250: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 918253: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* 918256: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 918259: jmp 0x918261 */
  goto L_918261;
L_91825b: /* 91825b: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 91825e: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
L_918261: /* 918261: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 918264: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 918266: fsub dword ptr [edi + eax] */
  ST0 = ST0 - (F32((uint32_t)(edi + eax)));
/* 918269: lea ecx, [edi + eax] */
  ecx = (uint32_t)(edi + eax);
/* 91826c: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 91826f: fsqrt  */
  ST0 = sqrt(ST0);
/* 918271: fst dword ptr [eax] */
  WF32((uint32_t)(eax), ST0);
/* 918273: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 918279: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 91827c: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 91827e: jge 0x9182a6 */
  if ((sf == of)) goto L_9182a6;
L_918280: /* 918280: lea ecx, [edx + esi] */
  ecx = (uint32_t)(edx + esi);
/* 918283: lea eax, [ebx + ecx*4] */
  eax = (uint32_t)(ebx + ecx*4);
/* 918286: mov ecx, 4 */
  ecx = 0x4u;
/* 91828b: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 91828d: jmp 0x918292 */
  goto L_918292;
L_91828f: /* 91828f: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
L_918292: /* 918292: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 918294: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 918297: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 918298: fsub dword ptr [edi + eax - 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + eax + 0xfffffffcu)));
/* 91829c: mov edi, dword ptr [ebp - 4] */
  edi = R32((uint32_t)(ebp + 0xfffffffcu));
/* 91829f: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 9182a1: fstp dword ptr [eax - 4] */
  WF32((uint32_t)(eax + 0xfffffffcu), ST0); FPOP();
/* 9182a4: jne 0x91828f */
  if (!zf) goto L_91828f;
L_9182a6: /* 9182a6: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9182a9: mov edi, edx */
  edi = edx;
/* 9182ab: jge 0x9182f8 */
  if ((sf == of)) goto L_9182f8;
L_9182ad: /* 9182ad: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 9182b0: add eax, 0x14 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9182b3: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9182b6: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 9182b9: jge 0x9182e9 */
  if ((sf == of)) goto L_9182e9;
L_9182bb: /* 9182bb: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9182bd: lea esi, [ebx + esi*4] */
  esi = (uint32_t)(ebx + esi*4);
/* 9182c0: mov ecx, 4 */
  ecx = 0x4u;
/* 9182c5: mov edx, esi */
  edx = esi;
/* 9182c7: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 9182c9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9182d0: /* 9182d0: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 9182d2: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9182d5: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 9182d7: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9182da: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 9182db: fadd dword ptr [eax - 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffffcu)));
/* 9182de: fstp dword ptr [eax - 4] */
  WF32((uint32_t)(eax + 0xfffffffcu), ST0); FPOP();
/* 9182e1: jne 0x9182d0 */
  if (!zf) goto L_9182d0;
L_9182e3: /* 9182e3: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 9182e6: mov esi, dword ptr [ebp - 0x28] */
  esi = R32((uint32_t)(ebp + 0xffffffd8u));
L_9182e9: /* 9182e9: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 9182ec: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 9182ed: add eax, 0x14 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9182f0: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9182f3: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 9182f6: jl 0x9182bb */
  if ((sf != of)) goto L_9182bb;
L_9182f8: /* 9182f8: add dword ptr [ebp - 0x10], 0x14 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u))); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xfffffff0u), r);
  }
/* 9182fc: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 9182ff: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 918302: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 918303: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* 918306: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 918309: lea ecx, [edx - 1] */
  ecx = (uint32_t)(edx + 0xffffffffu);
/* 91830c: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91830f: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 918312: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
/* 918315: jl 0x91825b */
  if ((sf != of)) goto L_91825b;
L_91831b: /* 91831b: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 91831e: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 918321: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* 918324: mov esi, dword ptr [ebp - 0x2c] */
  esi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 918327: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 918329: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 91832c: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 91832f: cmp ecx, dword ptr [edx + edi*4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + edi*4)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 918332: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 918335: mov ebx, ecx */
  ebx = ecx;
/* 918337: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 91833a: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 91833d: jg 0x918383 */
  if ((!zf && sf == of)) goto L_918383;
L_91833f: /* 91833f: nop  */
L_918340: /* 918340: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 918343: mov eax, dword ptr [eax + ebx*4] */
  eax = R32((uint32_t)(eax + ebx*4));
/* 918346: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 918348: jg 0x91836f */
  if ((!zf && sf == of)) goto L_91836f;
L_91834a: /* 91834a: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 91834d: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 918350: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 918351: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 918354: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 918355: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* 918358: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 918359: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 91835c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91835d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91835e: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 918361: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 918362: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 918363: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 918364: call 0x9183b0 */
  esp -= 4; W32(esp, 0x918369u); SPILL(); f_9183b0(); if (g_unwind) return; RELOAD();
/* 918369: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 91836c: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_91836f: /* 91836f: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 918372: add dword ptr [ebp - 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xfffffff0u), r);
  }
/* 918375: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 918378: mov edx, dword ptr [eax + edi*4] */
  edx = R32((uint32_t)(eax + edi*4));
/* 91837b: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 91837c: cmp ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91837e: jle 0x918340 */
  if ((zf || sf != of)) goto L_918340;
L_918380: /* 918380: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
L_918383: /* 918383: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 918386: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* 918389: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91838c: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 91838f: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 918391: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 918394: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 918397: jl 0x91818e */
  if ((sf != of)) goto L_91818e;
L_91839d: /* 91839d: lea esp, [ebp - 0x40] */
  esp = (uint32_t)(ebp + 0xffffffc0u);
/* 9183a0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9183a1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9183a2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9183a3: mov esp, ebp */
  esp = ebp;
/* 9183a5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9183a6: ret  */
  esp += 4; SPILL(); return;
}

void f_9183b0(void) {
  LOAD_REGS();
L_9183b0: /* 9183b0: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 9183b4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9183b5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9183b6: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 9183ba: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9183bb: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 9183bf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9183c0: xor eax, eax */
  eax = 0;
/* 9183c2: mov ecx, 0x10 */
  ecx = 0x10u;
/* 9183c7: mov edi, edx */
  edi = edx;
/* 9183c9: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 9183cb: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 9183cf: lea edi, [esi + ecx] */
  edi = (uint32_t)(esi + ecx);
/* 9183d2: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 9183d6: mov eax, ebp */
  eax = ebp;
/* 9183d8: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9183da: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9183dc: lea ebx, [esi + ecx] */
  ebx = (uint32_t)(esi + ecx);
/* 9183df: mov dword ptr [esp + 0x24], edi */
  W32((uint32_t)(esp + 0x24u), edi);
/* 9183e3: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
/* 9183e7: jle 0x91847f */
  if ((zf || sf != of)) goto L_91847f;
L_9183ed: /* 9183ed: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
L_9183f1: /* 9183f1: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 9183f5: mov ecx, dword ptr [esi + edi*4] */
  ecx = R32((uint32_t)(esi + edi*4));
/* 9183f8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9183fa: mov eax, dword ptr [esi + ebx*4] */
  eax = R32((uint32_t)(esi + ebx*4));
/* 9183fd: je 0x918464 */
  if (zf) goto L_918464;
L_9183ff: /* 9183ff: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 918401: je 0x918464 */
  if (zf) goto L_918464;
L_918403: /* 918403: lea edi, [edx + 8] */
  edi = (uint32_t)(edx + 0x8u);
/* 918406: lea edx, [eax + 8] */
  edx = (uint32_t)(eax + 0x8u);
/* 918409: mov ebx, 4 */
  ebx = 0x4u;
/* 91840e: mov edi, edi */
  edi = edi;
L_918410: /* 918410: mov eax, edi */
  eax = edi;
/* 918412: mov esi, 4 */
  esi = 0x4u;
L_918417: /* 918417: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 918419: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91841c: fmul dword ptr [edx - 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffff8u)));
/* 91841f: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 918422: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 918423: fadd dword ptr [eax - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xffffffe8u)));
/* 918426: fstp dword ptr [eax - 0x18] */
  WF32((uint32_t)(eax + 0xffffffe8u), ST0); FPOP();
/* 918429: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 91842c: fmul dword ptr [edx - 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffffcu)));
/* 91842f: fadd dword ptr [eax - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xffffffecu)));
/* 918432: fstp dword ptr [eax - 0x14] */
  WF32((uint32_t)(eax + 0xffffffecu), ST0); FPOP();
/* 918435: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 918438: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 91843a: fadd dword ptr [eax - 0x10] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffff0u)));
/* 91843d: fstp dword ptr [eax - 0x10] */
  WF32((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* 918440: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 918443: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 918446: fadd dword ptr [eax - 0xc] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffff4u)));
/* 918449: fstp dword ptr [eax - 0xc] */
  WF32((uint32_t)(eax + 0xfffffff4u), ST0); FPOP();
/* 91844c: jne 0x918417 */
  if (!zf) goto L_918417;
L_91844e: /* 91844e: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 918451: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* 918452: jne 0x918410 */
  if (!zf) goto L_918410;
L_918454: /* 918454: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 918458: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 91845c: mov ebx, dword ptr [esp + 0x28] */
  ebx = R32((uint32_t)(esp + 0x28u));
/* 918460: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
L_918464: /* 918464: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 918468: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 918469: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 91846a: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 91846b: mov dword ptr [esp + 0x24], edi */
  W32((uint32_t)(esp + 0x24u), edi);
/* 91846f: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
/* 918473: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 918477: jne 0x9183f1 */
  if (!zf) goto L_9183f1;
L_91847d: /* 91847d: jmp 0x918483 */
  goto L_918483;
L_91847f: /* 91847f: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
L_918483: /* 918483: mov eax, dword ptr [esi + edi*4] */
  eax = R32((uint32_t)(esi + edi*4));
/* 918486: mov edi, dword ptr [esi + ebx*4] */
  edi = R32((uint32_t)(esi + ebx*4));
/* 918489: shl ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebp = r;
  }
/* 91848c: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 91848e: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 918492: mov ebx, 1 */
  ebx = 0x1u;
/* 918497: je 0x91856b */
  if (zf) goto L_91856b;
L_91849d: /* 91849d: add ebp, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 9184a1: mov eax, ebp */
  eax = ebp;
/* 9184a3: mov ebp, edi */
  ebp = edi;
/* 9184a5: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* 9184ad: lea ecx, [edi + 0xc] */
  ecx = (uint32_t)(edi + 0xcu);
/* 9184b0: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 9184b4: lea esi, [edx + 4] */
  esi = (uint32_t)(edx + 0x4u);
/* 9184b7: sub ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 9184b9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9184c0: /* 9184c0: cmp ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9184c3: fld dword ptr [ecx - 0xc] */
  { double v = F32((uint32_t)(ecx + 0xfffffff4u)); FPUSH(v); }
/* 9184c6: fsub dword ptr [esi - 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xfffffffcu)));
/* 9184c9: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 9184cb: fstp dword ptr [ecx - 0xc] */
  WF32((uint32_t)(ecx + 0xfffffff4u), ST0); FPOP();
/* 9184ce: fld dword ptr [esi + ebp] */
  { double v = F32((uint32_t)(esi + ebp)); FPUSH(v); }
/* 9184d1: fsub dword ptr [esi] */
  ST0 = ST0 - (F32((uint32_t)(esi)));
/* 9184d3: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 9184d5: fstp dword ptr [esi + ebp] */
  WF32((uint32_t)(esi + ebp), ST0); FPOP();
/* 9184d8: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 9184db: fsub dword ptr [esi + 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x4u)));
/* 9184de: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 9184e0: fstp dword ptr [ecx - 4] */
  WF32((uint32_t)(ecx + 0xfffffffcu), ST0); FPOP();
/* 9184e3: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 9184e5: fsub dword ptr [esi + 8] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x8u)));
/* 9184e8: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 9184ea: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 9184ec: jge 0x918541 */
  if ((sf == of)) goto L_918541;
L_9184ee: /* 9184ee: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 9184f2: lea eax, [ebx + edx] */
  eax = (uint32_t)(ebx + edx);
/* 9184f5: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 9184f9: mov edi, 4 */
  edi = 0x4u;
/* 9184fe: lea edx, [edx + eax*4] */
  edx = (uint32_t)(edx + eax*4);
/* 918501: lea eax, [esi + 0x14] */
  eax = (uint32_t)(esi + 0x14u);
/* 918504: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
L_918506: /* 918506: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 918508: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 91850b: fmul dword ptr [ecx - 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffff4u)));
/* 91850e: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 918511: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 918512: fadd dword ptr [eax - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xffffffe8u)));
/* 918515: fstp dword ptr [eax - 0x18] */
  WF32((uint32_t)(eax + 0xffffffe8u), ST0); FPOP();
/* 918518: fld dword ptr [edx - 4] */
  { double v = F32((uint32_t)(edx + 0xfffffffcu)); FPUSH(v); }
/* 91851b: fmul dword ptr [esi + ebp] */
  ST0 = ST0 * (F32((uint32_t)(esi + ebp)));
/* 91851e: fadd dword ptr [eax - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xffffffecu)));
/* 918521: fstp dword ptr [eax - 0x14] */
  WF32((uint32_t)(eax + 0xffffffecu), ST0); FPOP();
/* 918524: fld dword ptr [edx - 4] */
  { double v = F32((uint32_t)(edx + 0xfffffffcu)); FPUSH(v); }
/* 918527: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 91852a: fadd dword ptr [eax - 0x10] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffff0u)));
/* 91852d: fstp dword ptr [eax - 0x10] */
  WF32((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* 918530: fld dword ptr [edx - 4] */
  { double v = F32((uint32_t)(edx + 0xfffffffcu)); FPUSH(v); }
/* 918533: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 918535: fadd dword ptr [eax - 0xc] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffff4u)));
/* 918538: fstp dword ptr [eax - 0xc] */
  WF32((uint32_t)(eax + 0xfffffff4u), ST0); FPOP();
/* 91853b: jne 0x918506 */
  if (!zf) goto L_918506;
L_91853d: /* 91853d: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
L_918541: /* 918541: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* 918545: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 918546: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 918549: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91854c: lea edx, [ebx - 1] */
  edx = (uint32_t)(ebx + 0xffffffffu);
/* 91854f: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 918552: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 918555: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 918558: mov dword ptr [esp + 0x2c], edi */
  W32((uint32_t)(esp + 0x2cu), edi);
/* 91855c: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 918560: jl 0x9184c0 */
  if ((sf != of)) goto L_9184c0;
L_918566: /* 918566: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 918567: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 918568: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 918569: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 91856a: ret  */
  esp += 4; SPILL(); return;
L_91856b: /* 91856b: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 91856f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 918571: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 918575: lea edx, [ecx + 0x40] */
  edx = (uint32_t)(ecx + 0x40u);
/* 918578: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 91857a: add ebp, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 91857e: mov eax, ebp */
  eax = ebp;
/* 918580: mov ebp, ecx */
  ebp = ecx;
/* 918582: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 918586: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 91858e: lea edx, [ecx + 0xc] */
  edx = (uint32_t)(ecx + 0xcu);
/* 918591: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 918595: lea esi, [edi + 4] */
  esi = (uint32_t)(edi + 0x4u);
/* 918598: sub ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 91859a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_9185a0: /* 9185a0: cmp ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9185a3: fld dword ptr [esi - 4] */
  { double v = F32((uint32_t)(esi + 0xfffffffcu)); FPUSH(v); }
/* 9185a6: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 9185a8: fchs  */
  ST0 = -ST0;
/* 9185aa: fstp dword ptr [edx - 0xc] */
  WF32((uint32_t)(edx + 0xfffffff4u), ST0); FPOP();
/* 9185ad: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 9185af: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 9185b1: fchs  */
  ST0 = -ST0;
/* 9185b3: fstp dword ptr [esi + ebp] */
  WF32((uint32_t)(esi + ebp), ST0); FPOP();
/* 9185b6: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 9185b9: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 9185bb: fchs  */
  ST0 = -ST0;
/* 9185bd: fstp dword ptr [edx - 4] */
  WF32((uint32_t)(edx + 0xfffffffcu), ST0); FPOP();
/* 9185c0: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 9185c3: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 9185c5: fchs  */
  ST0 = -ST0;
/* 9185c7: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 9185c9: jge 0x918622 */
  if ((sf == of)) goto L_918622;
L_9185cb: /* 9185cb: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 9185cf: lea ecx, [ebx + eax] */
  ecx = (uint32_t)(ebx + eax);
/* 9185d2: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 9185d6: mov edi, 4 */
  edi = 0x4u;
/* 9185db: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 9185de: lea eax, [esi + 0x14] */
  eax = (uint32_t)(esi + 0x14u);
/* 9185e1: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
L_9185e3: /* 9185e3: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 9185e5: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9185e8: fmul dword ptr [edx - 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffff4u)));
/* 9185eb: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9185ee: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 9185ef: fadd dword ptr [eax - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xffffffe8u)));
/* 9185f2: fstp dword ptr [eax - 0x18] */
  WF32((uint32_t)(eax + 0xffffffe8u), ST0); FPOP();
/* 9185f5: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 9185f8: fmul dword ptr [esi + ebp] */
  ST0 = ST0 * (F32((uint32_t)(esi + ebp)));
/* 9185fb: fadd dword ptr [eax - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xffffffecu)));
/* 9185fe: fstp dword ptr [eax - 0x14] */
  WF32((uint32_t)(eax + 0xffffffecu), ST0); FPOP();
/* 918601: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 918604: fmul dword ptr [edx - 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffffcu)));
/* 918607: fadd dword ptr [eax - 0x10] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffff0u)));
/* 91860a: fstp dword ptr [eax - 0x10] */
  WF32((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* 91860d: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 918610: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 918612: fadd dword ptr [eax - 0xc] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffff4u)));
/* 918615: fstp dword ptr [eax - 0xc] */
  WF32((uint32_t)(eax + 0xfffffff4u), ST0); FPOP();
/* 918618: jne 0x9185e3 */
  if (!zf) goto L_9185e3;
L_91861a: /* 91861a: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 91861e: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
L_918622: /* 918622: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 918626: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 918629: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 91862a: mov dword ptr [esp + 0x24], edi */
  W32((uint32_t)(esp + 0x24u), edi);
/* 91862e: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 918631: lea edi, [ebx - 1] */
  edi = (uint32_t)(ebx + 0xffffffffu);
/* 918634: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 918637: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 91863a: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91863d: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 918641: jl 0x9185a0 */
  if ((sf != of)) goto L_9185a0;
L_918647: /* 918647: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 91864b: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 91864f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 918650: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 918651: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 918652: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
/* 918655: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 918656: ret  */
  esp += 4; SPILL(); return;
}

void f_918660(void) {
  LOAD_REGS();
L_918660: /* 918660: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 918663: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 918664: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 918665: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 918666: mov esi, dword ptr [esp + 0x38] */
  esi = R32((uint32_t)(esp + 0x38u));
/* 91866a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91866b: mov edi, dword ptr [esp + 0x38] */
  edi = R32((uint32_t)(esp + 0x38u));
/* 91866f: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 918671: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 918675: je 0x918694 */
  if (zf) goto L_918694;
L_918677: /* 918677: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 91867a: xor edx, edx */
  edx = 0;
/* 91867c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 91867e: je 0x918694 */
  if (zf) goto L_918694;
L_918680: /* 918680: mov eax, edi */
  eax = edi;
/* 918682: sub esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
L_918684: /* 918684: mov ebx, dword ptr [esi + eax] */
  ebx = R32((uint32_t)(esi + eax));
/* 918687: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 918689: mov ebx, dword ptr [ecx + 8] */
  ebx = R32((uint32_t)(ecx + 0x8u));
/* 91868c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 91868d: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 918690: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 918692: jne 0x918684 */
  if (!zf) goto L_918684;
L_918694: /* 918694: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* 918697: xor edx, edx */
  edx = 0;
/* 918699: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 91869b: mov dword ptr [esp + 0x3c], edx */
  W32((uint32_t)(esp + 0x3cu), edx);
/* 91869f: jle 0x9187f4 */
  if ((zf || sf != of)) goto L_9187f4;
L_9186a5: /* 9186a5: xor esi, esi */
  esi = 0;
/* 9186a7: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 9186ab: jmp 0x9186b5 */
  goto L_9186b5;
L_9186ad: /* 9186ad: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 9186b1: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
L_9186b5: /* 9186b5: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 9186bb: imul eax, edx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edx);
  eax = (uint32_t)r;
  }
/* 9186be: fst dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0);
/* 9186c2: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 9186c8: fst dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0);
/* 9186cc: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 9186d2: fst dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0);
/* 9186d6: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 9186dc: fst dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0);
/* 9186e0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9186e2: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 9186ea: mov ebp, eax */
  ebp = eax;
/* 9186ec: jle 0x918760 */
  if ((zf || sf != of)) goto L_918760;
L_9186ee: /* 9186ee: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 9186f1: mov ebx, edi */
  ebx = edi;
/* 9186f3: lea edi, [eax + ebp*4] */
  edi = (uint32_t)(eax + ebp*4);
/* 9186f6: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 9186fa: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 9186fe: add ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
L_918700: /* 918700: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 918702: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 918704: je 0x918739 */
  if (zf) goto L_918739;
L_918706: /* 918706: mov eax, ebx */
  eax = ebx;
/* 918708: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 91870b: mov esi, 4 */
  esi = 0x4u;
L_918710: /* 918710: fld dword ptr [edx - 8] */
  { double v = F32((uint32_t)(edx + 0xfffffff8u)); FPUSH(v); }
/* 918713: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 918716: fmul dword ptr [eax - 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffffcu)));
/* 918719: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 91871c: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 91871d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91871f: fld dword ptr [edx - 0x14] */
  { double v = F32((uint32_t)(edx + 0xffffffecu)); FPUSH(v); }
/* 918722: fmul dword ptr [eax - 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffffcu)));
/* 918725: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 918727: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* 91872a: fmul dword ptr [edx - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffff0u)));
/* 91872d: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* 91872f: fld dword ptr [edx - 0xc] */
  { double v = F32((uint32_t)(edx + 0xfffffff4u)); FPUSH(v); }
/* 918732: fmul dword ptr [eax - 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffffcu)));
/* 918735: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 918737: jne 0x918710 */
  if (!zf) goto L_918710;
L_918739: /* 918739: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 91873d: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 918740: add ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 918743: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 918744: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 918748: jne 0x918700 */
  if (!zf) goto L_918700;
L_91874a: /* 91874a: mov edi, dword ptr [esp + 0x38] */
  edi = R32((uint32_t)(esp + 0x38u));
/* 91874e: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 918752: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 918756: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 91875a: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 91875e: jmp 0x918768 */
  goto L_918768;
L_918760: /* 918760: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 918762: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 918764: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 918766: fstp st(0) */
  STI(0) = ST0; FPOP();
L_918768: /* 918768: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* 91876b: mov eax, dword ptr [edx + ebp*4] */
  eax = R32((uint32_t)(edx + ebp*4));
/* 91876e: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 918772: lea ebp, [edx*4] */
  ebp = (uint32_t)(edx*4);
/* 918779: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 91877d: xor ebx, ebx */
  ebx = 0;
/* 91877f: mov esi, 1 */
  esi = 0x1u;
/* 918784: lea edx, [edi + ebp] */
  edx = (uint32_t)(edi + ebp);
L_918787: /* 918787: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91878a: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 91878c: fsub dword ptr [esp + ebx + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(esp + ebx + 0x24u)));
/* 918790: mov eax, dword ptr [ecx + 0x18] */
  eax = R32((uint32_t)(ecx + 0x18u));
/* 918793: fmul dword ptr [eax + ebp] */
  ST0 = ST0 * (F32((uint32_t)(eax + ebp)));
/* 918796: mov eax, esi */
  eax = esi;
/* 918798: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 91879a: jge 0x9187c3 */
  if ((sf == of)) goto L_9187c3;
L_91879c: /* 91879c: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 9187a0: lea ecx, [esi + ebx] */
  ecx = (uint32_t)(esi + ebx);
/* 9187a3: lea edi, [edi + ecx*4] */
  edi = (uint32_t)(edi + ecx*4);
L_9187a6: /* 9187a6: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 9187a8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9187a9: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 9187ab: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 9187ae: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9187b1: fadd dword ptr [esp + eax*4 + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(esp + eax*4 + 0x20u)));
/* 9187b5: fstp dword ptr [esp + eax*4 + 0x20] */
  WF32((uint32_t)(esp + eax*4 + 0x20u), ST0); FPOP();
/* 9187b9: jl 0x9187a6 */
  if ((sf != of)) goto L_9187a6;
L_9187bb: /* 9187bb: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 9187bf: mov edi, dword ptr [esp + 0x38] */
  edi = R32((uint32_t)(esp + 0x38u));
L_9187c3: /* 9187c3: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 9187c4: lea eax, [esi - 1] */
  eax = (uint32_t)(esi + 0xffffffffu);
/* 9187c7: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 9187ca: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 9187cd: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9187d0: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9187d3: jl 0x918787 */
  if ((sf != of)) goto L_918787;
L_9187d5: /* 9187d5: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 9187d9: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 9187dd: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* 9187e0: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 9187e1: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 9187e4: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9187e6: mov dword ptr [esp + 0x3c], edx */
  W32((uint32_t)(esp + 0x3cu), edx);
/* 9187ea: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 9187ee: jl 0x9186ad */
  if ((sf != of)) goto L_9186ad;
L_9187f4: /* 9187f4: mov edx, dword ptr [ecx + 0x14] */
  edx = R32((uint32_t)(ecx + 0x14u));
/* 9187f7: lea esi, [edx - 1] */
  esi = (uint32_t)(edx + 0xffffffffu);
/* 9187fa: mov eax, esi */
  eax = esi;
/* 9187fc: imul eax, edx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edx);
  eax = (uint32_t)r;
  }
/* 9187ff: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 918801: mov dword ptr [esp + 0x3c], esi */
  W32((uint32_t)(esp + 0x3cu), esi);
/* 918805: jl 0x918969 */
  if ((sf != of)) goto L_918969;
L_91880b: /* 91880b: lea edx, [eax + esi] */
  edx = (uint32_t)(eax + esi);
/* 91880e: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 918812: jmp 0x918820 */
  goto L_918820;
L_918814: /* 918814: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
/* 918818: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 91881c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_918820: /* 918820: mov edi, dword ptr [ecx + 0x14] */
  edi = R32((uint32_t)(ecx + 0x14u));
/* 918823: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 918827: lea eax, [edi - 1] */
  eax = (uint32_t)(edi + 0xffffffffu);
/* 91882a: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91882c: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 918834: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* 91883c: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* 918844: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 91884c: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 918850: jle 0x9188d0 */
  if ((zf || sf != of)) goto L_9188d0;
L_918852: /* 918852: mov ebp, dword ptr [ecx + 0x20] */
  ebp = R32((uint32_t)(ecx + 0x20u));
/* 918855: lea edx, [ebp + edx*4] */
  edx = (uint32_t)(ebp + edx*4);
/* 918859: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 91885b: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 91885f: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 918863: mov ebp, eax */
  ebp = eax;
/* 918865: lea eax, [ebp*4] */
  eax = (uint32_t)(ebp*4);
/* 91886c: lea edx, [edx + ebx*4 + 8] */
  edx = (uint32_t)(edx + ebx*4 + 0x8u);
/* 918870: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
L_918872: /* 918872: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 918876: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 918878: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 91887a: je 0x9188af */
  if (zf) goto L_9188af;
L_91887c: /* 91887c: xor esi, esi */
  esi = 0;
/* 91887e: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_918881: /* 918881: fld dword ptr [eax - 8] */
  { double v = F32((uint32_t)(eax + 0xfffffff8u)); FPUSH(v); }
/* 918884: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 918885: fmul dword ptr [edx - 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffff8u)));
/* 918888: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91888b: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91888e: fld dword ptr [eax - 0x14] */
  { double v = F32((uint32_t)(eax + 0xffffffecu)); FPUSH(v); }
/* 918891: fmul dword ptr [edx - 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffffcu)));
/* 918894: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 918896: fld dword ptr [eax - 0xc] */
  { double v = F32((uint32_t)(eax + 0xfffffff4u)); FPUSH(v); }
/* 918899: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 91889c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91889e: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 9188a0: fmul dword ptr [eax - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffff0u)));
/* 9188a3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9188a5: fadd dword ptr [esp + esi*4 + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(esp + esi*4 + 0x20u)));
/* 9188a9: fstp dword ptr [esp + esi*4 + 0x20] */
  WF32((uint32_t)(esp + esi*4 + 0x20u), ST0); FPOP();
/* 9188ad: jl 0x918881 */
  if ((sf != of)) goto L_918881;
L_9188af: /* 9188af: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 9188b3: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 9188b7: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9188b9: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 9188bd: lea eax, [edi*4] */
  eax = (uint32_t)(edi*4);
/* 9188c4: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 9188c6: sub edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 9188c9: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 9188ca: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 9188ce: jne 0x918872 */
  if (!zf) goto L_918872;
L_9188d0: /* 9188d0: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 9188d4: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* 9188d7: mov edx, dword ptr [edx + eax*4] */
  edx = R32((uint32_t)(edx + eax*4));
/* 9188da: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 9188de: mov edi, 0xc */
  edi = 0xcu;
/* 9188e3: mov edx, 4 */
  edx = 0x4u;
/* 9188e8: lea esi, [ebx*4 + 0xc] */
  esi = (uint32_t)(ebx*4 + 0xcu);
/* 9188ef: nop  */
L_9188f0: /* 9188f0: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9188f3: jge 0x918927 */
  if ((sf == of)) goto L_918927;
L_9188f5: /* 9188f5: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 9188f9: fld dword ptr [esp + edi + 0x24] */
  { double v = F32((uint32_t)(esp + edi + 0x24u)); FPUSH(v); }
/* 9188fd: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 918901: lea ebp, [esi + eax + 4] */
  ebp = (uint32_t)(esi + eax + 0x4u);
/* 918905: lea eax, [edx + edi] */
  eax = (uint32_t)(edx + edi);
/* 918908: lea ebx, [ebx + eax*4] */
  ebx = (uint32_t)(ebx + eax*4);
/* 91890b: mov eax, 4 */
  eax = 0x4u;
/* 918910: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
L_918912: /* 918912: fld dword ptr [ebp] */
  { double v = F32((uint32_t)(ebp)); FPUSH(v); }
/* 918915: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 918918: fmul dword ptr [ebx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0xfffffffcu)));
/* 91891b: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 91891e: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 91891f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 918921: jne 0x918912 */
  if (!zf) goto L_918912;
L_918923: /* 918923: fstp dword ptr [esp + edi + 0x24] */
  WF32((uint32_t)(esp + edi + 0x24u), ST0); FPOP();
L_918927: /* 918927: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 91892b: fld dword ptr [esi + eax] */
  { double v = F32((uint32_t)(esi + eax)); FPUSH(v); }
/* 91892e: mov ebx, dword ptr [ecx + 0x18] */
  ebx = R32((uint32_t)(ecx + 0x18u));
/* 918931: fsub dword ptr [esp + edi + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(esp + edi + 0x24u)));
/* 918935: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 918936: sub edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 918939: sub esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 91893c: fmul dword ptr [esi + ebx + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + ebx + 0x4u)));
/* 918940: fstp dword ptr [esi + eax + 4] */
  WF32((uint32_t)(esi + eax + 0x4u), ST0); FPOP();
/* 918944: lea eax, [edx - 1] */
  eax = (uint32_t)(edx + 0xffffffffu);
/* 918947: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 918949: jge 0x9188f0 */
  if ((sf == of)) goto L_9188f0;
L_91894b: /* 91894b: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 91894f: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 918953: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 918954: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 918955: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 918957: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 91895b: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 91895f: jge 0x918814 */
  if ((sf == of)) goto L_918814;
L_918965: /* 918965: mov edi, dword ptr [esp + 0x38] */
  edi = R32((uint32_t)(esp + 0x38u));
L_918969: /* 918969: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 91896c: cmp eax, dword ptr [ecx + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91896f: je 0x918980 */
  if (zf) goto L_918980;
L_918971: /* 918971: mov dword ptr [edi + eax*4], 0 */
  W32((uint32_t)(edi + eax*4), 0x0u);
/* 918978: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 91897b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 91897c: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91897e: jne 0x918971 */
  if (!zf) goto L_918971;
L_918980: /* 918980: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 918981: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 918982: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 918983: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 918984: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 918987: ret 8 */
  esp += 12; SPILL(); return;
}

void f_918990(void) {
  LOAD_REGS();
L_918990: /* 918990: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 918991: mov ebp, esp */
  ebp = esp;
/* 918993: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 918996: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 918997: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 918998: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 918999: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 91899c: lea eax, [edi*4] */
  eax = (uint32_t)(edi*4);
/* 9189a3: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9189a6: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 9189a9: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* 9189ac: call 0x99cc00 */
  esp -= 4; W32(esp, 0x9189b1u); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 9189b1: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 9189b4: xor eax, eax */
  eax = 0;
/* 9189b6: xor esi, esi */
  esi = 0;
/* 9189b8: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9189ba: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 9189bd: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 9189c0: jle 0x918a0d */
  if ((zf || sf != of)) goto L_918a0d;
L_9189c2: /* 9189c2: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 9189c5: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 9189c8: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 9189cb: cmp dword ptr [ecx + edx*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + edx*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9189cf: jne 0x918a05 */
  if (!zf) goto L_918a05;
L_9189d1: /* 9189d1: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 9189d4: mov edi, edx */
  edi = edx;
/* 9189d6: imul edi, ecx */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(ecx);
  edi = (uint32_t)r;
  }
/* 9189d9: xor eax, eax */
  eax = 0;
/* 9189db: lea edi, [ebx + edi*4] */
  edi = (uint32_t)(ebx + edi*4);
/* 9189de: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 9189e0: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 9189e3: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 9189e6: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 9189e9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9189ea: imul eax, edx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edx);
  eax = (uint32_t)r;
  }
/* 9189ed: mov dword ptr [ebx + eax*4], 0x3f800000 */
  W32((uint32_t)(ebx + eax*4), 0x3f800000u);
/* 9189f4: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9189f7: mov dword ptr [ecx + edx*4], 1 */
  W32((uint32_t)(ecx + edx*4), 0x1u);
/* 9189fe: mov dword ptr [eax + esi*4], edx */
  W32((uint32_t)(eax + esi*4), edx);
/* 918a01: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 918a04: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_918a05: /* 918a05: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 918a06: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 918a08: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 918a0b: jl 0x9189c2 */
  if ((sf != of)) goto L_9189c2;
L_918a0d: /* 918a0d: mov dword ptr [ebp + 0x14], esi */
  W32((uint32_t)(ebp + 0x14u), esi);
/* 918a10: mov esi, dword ptr [ebp - 4] */
  esi = R32((uint32_t)(ebp + 0xfffffffcu));
/* 918a13: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 918a16: xor ecx, ecx */
  ecx = 0;
/* 918a18: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 918a1a: mov dword ptr [ebp + 0x10], ecx */
  W32((uint32_t)(ebp + 0x10u), ecx);
/* 918a1d: jle 0x918bdc */
  if ((zf || sf != of)) goto L_918bdc;
L_918a23: /* 918a23: xor edx, edx */
  edx = 0;
/* 918a25: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
L_918a28: /* 918a28: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* 918a2b: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 918a2d: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 918a34: mov dword ptr [ebp - 0xc], 0 */
  W32((uint32_t)(ebp + 0xfffffff4u), 0x0u);
/* 918a3b: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 918a3e: jle 0x918b01 */
  if ((zf || sf != of)) goto L_918b01;
L_918a44: /* 918a44: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 918a47: mov esi, dword ptr [ebp - 8] */
  esi = R32((uint32_t)(ebp + 0xfffffff8u));
/* 918a4a: mov edi, dword ptr [eax + esi*4] */
  edi = R32((uint32_t)(eax + esi*4));
/* 918a4d: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 918a4f: je 0x918adf */
  if (zf) goto L_918adf;
L_918a55: /* 918a55: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 918a58: xor eax, eax */
  eax = 0;
/* 918a5a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 918a5c: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 918a5f: jle 0x918adf */
  if ((zf || sf != of)) goto L_918adf;
L_918a65: /* 918a65: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 918a68: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 918a6b: mov esi, ecx */
  esi = ecx;
/* 918a6d: sar esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 918a70: cmp esi, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 918a73: jg 0x918ad1 */
  if ((!zf && sf == of)) goto L_918ad1;
L_918a75: /* 918a75: imul ecx, dword ptr [ebp + 0x18] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0x18u)));
  ecx = (uint32_t)r;
  }
/* 918a79: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 918a7b: lea eax, [ebx + edx*4] */
  eax = (uint32_t)(ebx + edx*4);
/* 918a7e: mov edx, dword ptr [ebp - 0xc] */
  edx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 918a81: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 918a83: lea esi, [ebx + ecx*4] */
  esi = (uint32_t)(ebx + ecx*4);
/* 918a86: xor ecx, ecx */
  ecx = 0;
/* 918a88: lea edx, [edi + 8] */
  edx = (uint32_t)(edi + 0x8u);
/* 918a8b: nop  */
/* 918a8c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_918a90: /* 918a90: fld dword ptr [edx - 8] */
  { double v = F32((uint32_t)(edx + 0xfffffff8u)); FPUSH(v); }
/* 918a93: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 918a94: fmul dword ptr [esi + ecx*4 - 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)));
/* 918a98: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 918a9b: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 918a9e: fsubr dword ptr [eax] */
  ST0 = (F32((uint32_t)(eax))) - ST0;
/* 918aa0: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 918aa2: fld dword ptr [edx - 0x14] */
  { double v = F32((uint32_t)(edx + 0xffffffecu)); FPUSH(v); }
/* 918aa5: fmul dword ptr [esi + ecx*4 - 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)));
/* 918aa9: fsubr dword ptr [eax + 4] */
  ST0 = (F32((uint32_t)(eax + 0x4u))) - ST0;
/* 918aac: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 918aaf: fld dword ptr [esi + ecx*4 - 4] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 918ab3: fmul dword ptr [edx - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffff0u)));
/* 918ab6: fsubr dword ptr [eax + 8] */
  ST0 = (F32((uint32_t)(eax + 0x8u))) - ST0;
/* 918ab9: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 918abc: fld dword ptr [edx - 0xc] */
  { double v = F32((uint32_t)(edx + 0xfffffff4u)); FPUSH(v); }
/* 918abf: fmul dword ptr [esi + ecx*4 - 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)));
/* 918ac3: fsubr dword ptr [eax + 0xc] */
  ST0 = (F32((uint32_t)(eax + 0xcu))) - ST0;
/* 918ac6: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* 918ac9: jl 0x918a90 */
  if ((sf != of)) goto L_918a90;
L_918acb: /* 918acb: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 918ace: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
L_918ad1: /* 918ad1: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 918ad4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 918ad5: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 918ad7: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 918ada: jl 0x918a65 */
  if ((sf != of)) goto L_918a65;
L_918adc: /* 918adc: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
L_918adf: /* 918adf: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 918ae2: mov esi, dword ptr [ebp - 8] */
  esi = R32((uint32_t)(ebp + 0xfffffff8u));
/* 918ae5: mov edi, dword ptr [ebp - 0xc] */
  edi = R32((uint32_t)(ebp + 0xfffffff4u));
/* 918ae8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 918ae9: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 918aea: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 918aed: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 918aef: mov dword ptr [ebp - 8], esi */
  W32((uint32_t)(ebp + 0xfffffff8u), esi);
/* 918af2: mov esi, dword ptr [ebp - 4] */
  esi = R32((uint32_t)(ebp + 0xfffffffcu));
/* 918af5: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 918af8: mov dword ptr [ebp - 0xc], edi */
  W32((uint32_t)(ebp + 0xfffffff4u), edi);
/* 918afb: jl 0x918a44 */
  if ((sf != of)) goto L_918a44;
L_918b01: /* 918b01: mov edi, dword ptr [ebp - 8] */
  edi = R32((uint32_t)(ebp + 0xfffffff8u));
/* 918b04: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 918b07: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* 918b0a: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 918b0d: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 918b10: xor eax, eax */
  eax = 0;
/* 918b12: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 918b14: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 918b17: jle 0x918bc7 */
  if ((zf || sf != of)) goto L_918bc7;
L_918b1d: /* 918b1d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_918b20: /* 918b20: mov edi, dword ptr [ebp - 0x10] */
  edi = R32((uint32_t)(ebp + 0xfffffff0u));
/* 918b23: mov eax, dword ptr [edi + eax*4] */
  eax = R32((uint32_t)(edi + eax*4));
/* 918b26: mov edi, eax */
  edi = eax;
/* 918b28: sar edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edi = r;
  }
/* 918b2b: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 918b2d: jg 0x918bb2 */
  if ((!zf && sf == of)) goto L_918bb2;
L_918b33: /* 918b33: imul eax, dword ptr [ebp + 0x18] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0x18u)));
  eax = (uint32_t)r;
  }
/* 918b37: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 918b39: lea esi, [ebx + eax*4] */
  esi = (uint32_t)(ebx + eax*4);
/* 918b3c: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* 918b3f: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 918b42: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 918b49: mov edx, 1 */
  edx = 0x1u;
/* 918b4e: mov ecx, esi */
  ecx = esi;
/* 918b50: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
L_918b53: /* 918b53: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 918b56: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 918b59: mov eax, dword ptr [eax + 0x18] */
  eax = R32((uint32_t)(eax + 0x18u));
/* 918b5c: mov edi, dword ptr [ebp - 8] */
  edi = R32((uint32_t)(ebp + 0xfffffff8u));
/* 918b5f: fld dword ptr [edi + eax] */
  { double v = F32((uint32_t)(edi + eax)); FPUSH(v); }
/* 918b62: mov eax, edx */
  eax = edx;
/* 918b64: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 918b66: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 918b68: jge 0x918b8d */
  if ((sf == of)) goto L_918b8d;
L_918b6a: /* 918b6a: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 918b6d: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 918b70: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 918b72: lea edi, [ebx + edi*4] */
  edi = (uint32_t)(ebx + edi*4);
L_918b75: /* 918b75: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 918b77: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 918b78: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 918b7a: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 918b7d: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 918b80: fsubr dword ptr [esi + eax*4 - 4] */
  ST0 = (F32((uint32_t)(esi + eax*4 + 0xfffffffcu))) - ST0;
/* 918b84: fstp dword ptr [esi + eax*4 - 4] */
  WF32((uint32_t)(esi + eax*4 + 0xfffffffcu), ST0); FPOP();
/* 918b88: jl 0x918b75 */
  if ((sf != of)) goto L_918b75;
L_918b8a: /* 918b8a: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
L_918b8d: /* 918b8d: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 918b90: mov eax, 4 */
  eax = 0x4u;
/* 918b95: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 918b97: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 918b9a: mov edi, dword ptr [ebp - 8] */
  edi = R32((uint32_t)(ebp + 0xfffffff8u));
/* 918b9d: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 918b9f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 918ba0: mov dword ptr [ebp - 8], edi */
  W32((uint32_t)(ebp + 0xfffffff8u), edi);
/* 918ba3: lea edi, [edx - 1] */
  edi = (uint32_t)(edx + 0xffffffffu);
/* 918ba6: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 918ba8: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 918baa: jl 0x918b53 */
  if ((sf != of)) goto L_918b53;
L_918bac: /* 918bac: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 918baf: mov esi, dword ptr [ebp - 4] */
  esi = R32((uint32_t)(ebp + 0xfffffffcu));
L_918bb2: /* 918bb2: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 918bb5: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 918bb8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 918bb9: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 918bbb: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 918bbe: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 918bc1: jl 0x918b20 */
  if ((sf != of)) goto L_918b20;
L_918bc7: /* 918bc7: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 918bca: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 918bcb: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 918bce: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 918bd0: mov dword ptr [ebp + 0x10], ecx */
  W32((uint32_t)(ebp + 0x10u), ecx);
/* 918bd3: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 918bd6: jl 0x918a28 */
  if ((sf != of)) goto L_918a28;
L_918bdc: /* 918bdc: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 918bdf: lea ecx, [eax - 1] */
  ecx = (uint32_t)(eax + 0xffffffffu);
/* 918be2: mov edi, ecx */
  edi = ecx;
/* 918be4: imul edi, eax */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(eax);
  edi = (uint32_t)r;
  }
/* 918be7: mov edx, ecx */
  edx = ecx;
/* 918be9: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 918beb: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 918bee: mov dword ptr [ebp + 0x10], edx */
  W32((uint32_t)(ebp + 0x10u), edx);
/* 918bf1: jl 0x918d8e */
  if ((sf != of)) goto L_918d8e;
L_918bf7: /* 918bf7: lea ecx, [edx*4] */
  ecx = (uint32_t)(edx*4);
/* 918bfe: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 918c01: jmp 0x918c06 */
  goto L_918c06;
L_918c03: /* 918c03: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
L_918c06: /* 918c06: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 918c09: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 918c0c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 918c0d: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 918c0f: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 918c12: lea ecx, [edi + edx] */
  ecx = (uint32_t)(edi + edx);
/* 918c15: mov dword ptr [ebp - 8], ecx */
  W32((uint32_t)(ebp + 0xfffffff8u), ecx);
/* 918c18: jle 0x918cbd */
  if ((zf || sf != of)) goto L_918cbd;
L_918c1e: /* 918c1e: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 918c20: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
L_918c23: /* 918c23: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 918c26: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 918c29: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 918c2b: je 0x918c9c */
  if (zf) goto L_918c9c;
L_918c2d: /* 918c2d: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 918c30: xor edi, edi */
  edi = 0;
/* 918c32: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 918c34: jle 0x918c99 */
  if ((zf || sf != of)) goto L_918c99;
L_918c36: /* 918c36: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 918c39: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 918c3c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_918c40: /* 918c40: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 918c43: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* 918c46: imul eax, dword ptr [ebp + 0x18] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0x18u)));
  eax = (uint32_t)r;
  }
/* 918c4a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 918c4d: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 918c50: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 918c52: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 918c54: lea esi, [ebx + ecx*4] */
  esi = (uint32_t)(ebx + ecx*4);
/* 918c57: lea edx, [ebx + eax*4] */
  edx = (uint32_t)(ebx + eax*4);
/* 918c5a: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 918c5d: xor ecx, ecx */
  ecx = 0;
/* 918c5f: nop  */
L_918c60: /* 918c60: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* 918c63: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 918c64: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 918c67: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 918c6a: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 918c6d: fld dword ptr [eax - 0x18] */
  { double v = F32((uint32_t)(eax + 0xffffffe8u)); FPUSH(v); }
/* 918c70: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 918c72: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 918c74: fld dword ptr [eax - 0xc] */
  { double v = F32((uint32_t)(eax + 0xfffffff4u)); FPUSH(v); }
/* 918c77: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 918c7a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 918c7c: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 918c7f: fmul dword ptr [eax - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffff0u)));
/* 918c82: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 918c84: fsubr dword ptr [esi + ecx*4 - 4] */
  ST0 = (F32((uint32_t)(esi + ecx*4 + 0xfffffffcu))) - ST0;
/* 918c88: fstp dword ptr [esi + ecx*4 - 4] */
  WF32((uint32_t)(esi + ecx*4 + 0xfffffffcu), ST0); FPOP();
/* 918c8c: jl 0x918c60 */
  if ((sf != of)) goto L_918c60;
L_918c8e: /* 918c8e: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 918c91: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 918c92: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 918c94: jl 0x918c40 */
  if ((sf != of)) goto L_918c40;
L_918c96: /* 918c96: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
L_918c99: /* 918c99: mov esi, dword ptr [ebp - 4] */
  esi = R32((uint32_t)(ebp + 0xfffffffcu));
L_918c9c: /* 918c9c: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 918c9f: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 918ca2: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 918ca5: sub edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 918ca8: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 918caa: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 918cab: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 918cae: mov dword ptr [ebp - 8], ecx */
  W32((uint32_t)(ebp + 0xfffffff8u), ecx);
/* 918cb1: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 918cb4: jne 0x918c23 */
  if (!zf) goto L_918c23;
L_918cba: /* 918cba: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
L_918cbd: /* 918cbd: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 918cc0: mov ecx, dword ptr [eax + ecx*4] */
  ecx = R32((uint32_t)(eax + ecx*4));
/* 918cc3: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 918cc6: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 918cc9: xor eax, eax */
  eax = 0;
/* 918ccb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 918ccd: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 918cd0: jle 0x918d79 */
  if ((zf || sf != of)) goto L_918d79;
L_918cd6: /* 918cd6: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 918cd9: lea ecx, [edx*4 + 0xc] */
  ecx = (uint32_t)(edx*4 + 0xcu);
/* 918ce0: mov dword ptr [ebp - 8], ecx */
  W32((uint32_t)(ebp + 0xfffffff8u), ecx);
L_918ce3: /* 918ce3: mov edx, dword ptr [ebp - 0x10] */
  edx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 918ce6: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 918ce9: imul eax, dword ptr [ebp + 0x18] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0x18u)));
  eax = (uint32_t)r;
  }
/* 918ced: add eax, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 918cf0: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 918cf3: lea eax, [ebx + eax*4] */
  eax = (uint32_t)(ebx + eax*4);
/* 918cf6: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 918cf9: mov dword ptr [ebp + 8], 0xc */
  W32((uint32_t)(ebp + 0x8u), 0xcu);
/* 918d00: mov esi, 4 */
  esi = 0x4u;
/* 918d05: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 918d08: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 918d0b: nop  */
/* 918d0c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_918d10: /* 918d10: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 918d13: mov ecx, esi */
  ecx = esi;
/* 918d15: jge 0x918d37 */
  if ((sf == of)) goto L_918d37;
L_918d17: /* 918d17: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 918d1a: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 918d1d: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 918d1f: lea edx, [edi + edx*4] */
  edx = (uint32_t)(edi + edx*4);
/* 918d22: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
L_918d25: /* 918d25: fld dword ptr [edi + ecx*4] */
  { double v = F32((uint32_t)(edi + ecx*4)); FPUSH(v); }
/* 918d28: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 918d29: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 918d2b: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 918d2e: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 918d31: fsubr dword ptr [eax] */
  ST0 = (F32((uint32_t)(eax))) - ST0;
/* 918d33: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 918d35: jl 0x918d25 */
  if ((sf != of)) goto L_918d25;
L_918d37: /* 918d37: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 918d3a: mov edx, dword ptr [ecx + 0x18] */
  edx = R32((uint32_t)(ecx + 0x18u));
/* 918d3d: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 918d40: fld dword ptr [ecx + edx] */
  { double v = F32((uint32_t)(ecx + edx)); FPUSH(v); }
/* 918d43: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 918d46: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 918d48: sub ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 918d4b: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 918d4c: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 918d4f: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 918d51: sub edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 918d54: lea ecx, [esi - 1] */
  ecx = (uint32_t)(esi + 0xffffffffu);
/* 918d57: sub eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 918d5a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 918d5c: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 918d5f: jge 0x918d10 */
  if ((sf == of)) goto L_918d10;
L_918d61: /* 918d61: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 918d64: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 918d67: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 918d68: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 918d6a: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 918d6d: jl 0x918ce3 */
  if ((sf != of)) goto L_918ce3;
L_918d73: /* 918d73: mov esi, dword ptr [ebp - 4] */
  esi = R32((uint32_t)(ebp + 0xfffffffcu));
/* 918d76: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
L_918d79: /* 918d79: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 918d7c: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 918d7d: sub ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 918d80: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 918d82: mov dword ptr [ebp + 0x10], edx */
  W32((uint32_t)(ebp + 0x10u), edx);
/* 918d85: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 918d88: jge 0x918c03 */
  if ((sf == of)) goto L_918c03;
L_918d8e: /* 918d8e: lea esp, [ebp - 0x30] */
  esp = (uint32_t)(ebp + 0xffffffd0u);
/* 918d91: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 918d92: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 918d93: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 918d94: mov esp, ebp */
  esp = ebp;
/* 918d96: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 918d97: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_918da0(void) {
  LOAD_REGS();
L_918da0: /* 918da0: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 918da3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 918da4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 918da5: mov eax, ecx */
  eax = ecx;
/* 918da7: mov ebx, dword ptr [eax + 0x14] */
  ebx = R32((uint32_t)(eax + 0x14u));
/* 918daa: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 918dad: mov ebp, dword ptr [eax + 0x10] */
  ebp = R32((uint32_t)(eax + 0x10u));
/* 918db0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 918db1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 918db2: xor edi, edi */
  edi = 0;
/* 918db4: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 918db6: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 918dba: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 918dbe: jle 0x918e25 */
  if ((zf || sf != of)) goto L_918e25;
L_918dc0: /* 918dc0: xor esi, esi */
  esi = 0;
/* 918dc2: mov ecx, ebx */
  ecx = ebx;
/* 918dc4: shl ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 918dc7: mov edx, ebp */
  edx = ebp;
/* 918dc9: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 918dcd: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 918dd1: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
L_918dd5: /* 918dd5: mov ebp, ebx */
  ebp = ebx;
L_918dd7: /* 918dd7: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* 918dda: mov dword ptr [esi + ecx], edx */
  W32((uint32_t)(esi + ecx), edx);
/* 918ddd: add edx, 0x40 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 918de0: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 918de3: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 918de4: jne 0x918dd7 */
  if (!zf) goto L_918dd7;
L_918de6: /* 918de6: mov edx, dword ptr [eax + 0x30] */
  edx = R32((uint32_t)(eax + 0x30u));
/* 918de9: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 918ded: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 918df1: mov dword ptr [edx + edi*4], 0 */
  W32((uint32_t)(edx + edi*4), 0x0u);
/* 918df8: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 918dfb: lea ecx, [ebx - 1] */
  ecx = (uint32_t)(ebx + 0xffffffffu);
/* 918dfe: mov dword ptr [edx + edi*4], ecx */
  W32((uint32_t)(edx + edi*4), ecx);
/* 918e01: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 918e05: lea ecx, [ebx*4] */
  ecx = (uint32_t)(ebx*4);
/* 918e0c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 918e0d: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 918e0f: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 918e11: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 918e13: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 918e17: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 918e1b: jl 0x918dd5 */
  if ((sf != of)) goto L_918dd5;
L_918e1d: /* 918e1d: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 918e21: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
L_918e25: /* 918e25: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 918e29: xor eax, eax */
  eax = 0;
/* 918e2b: xor ebx, ebx */
  ebx = 0;
/* 918e2d: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 918e2f: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 918e33: jle 0x918f6c */
  if ((zf || sf != of)) goto L_918f6c;
L_918e39: /* 918e39: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_918e40: /* 918e40: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 918e44: mov edi, dword ptr [ecx + eax*4] */
  edi = R32((uint32_t)(ecx + eax*4));
/* 918e47: mov ecx, edi */
  ecx = edi;
/* 918e49: lea edx, [ebp + ebx*4] */
  edx = (uint32_t)(ebp + ebx*4);
/* 918e4d: xor esi, esi */
  esi = 0;
/* 918e4f: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 918e52: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
L_918e56: /* 918e56: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 918e5a: mov edx, dword ptr [eax + esi*4] */
  edx = R32((uint32_t)(eax + esi*4));
/* 918e5d: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 918e5f: jg 0x918e71 */
  if ((!zf && sf == of)) goto L_918e71;
L_918e61: /* 918e61: mov eax, ecx */
  eax = ecx;
/* 918e63: imul eax, dword ptr [esp + 0x48] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x48u)));
  eax = (uint32_t)r;
  }
/* 918e68: mov ebp, edx */
  ebp = edx;
/* 918e6a: sar ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebp = r;
  }
/* 918e6d: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 918e6f: jmp 0x918e7d */
  goto L_918e7d;
L_918e71: /* 918e71: mov eax, edx */
  eax = edx;
/* 918e73: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 918e76: imul eax, dword ptr [esp + 0x48] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x48u)));
  eax = (uint32_t)r;
  }
/* 918e7b: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_918e7d: /* 918e7d: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 918e81: mov ebp, dword ptr [ebp + 0x1c] */
  ebp = R32((uint32_t)(ebp + 0x1cu));
/* 918e84: mov eax, dword ptr [ebp + eax*4] */
  eax = R32((uint32_t)(ebp + eax*4));
/* 918e88: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 918e8a: je 0x918ebb */
  if (zf) goto L_918ebb;
L_918e8c: /* 918e8c: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 918e8e: mov ebp, edi */
  ebp = edi;
/* 918e90: jg 0x918ea7 */
  if ((!zf && sf == of)) goto L_918ea7;
L_918e92: /* 918e92: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 918e95: and ebp, 3 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 918e98: lea edx, [ebp + edx*4] */
  edx = (uint32_t)(ebp + edx*4);
/* 918e9c: mov edx, dword ptr [eax + edx*4] */
  edx = R32((uint32_t)(eax + edx*4));
/* 918e9f: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 918ea3: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 918ea5: jmp 0x918ec5 */
  goto L_918ec5;
L_918ea7: /* 918ea7: and ebp, 3 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 918eaa: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 918ead: lea edx, [edx + ebp*4] */
  edx = (uint32_t)(edx + ebp*4);
/* 918eb0: mov edx, dword ptr [eax + edx*4] */
  edx = R32((uint32_t)(eax + edx*4));
/* 918eb3: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 918eb7: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 918eb9: jmp 0x918ec5 */
  goto L_918ec5;
L_918ebb: /* 918ebb: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 918ebf: mov dword ptr [edx], 0 */
  W32((uint32_t)(edx), 0x0u);
L_918ec5: /* 918ec5: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 918ec9: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 918ecd: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 918ece: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 918ed1: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 918ed3: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 918ed7: jl 0x918e56 */
  if ((sf != of)) goto L_918e56;
L_918edd: /* 918edd: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 918ee1: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 918ee3: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 918ee7: jge 0x918f02 */
  if ((sf == of)) goto L_918f02;
L_918ee9: /* 918ee9: lea eax, [ebx + esi*4] */
  eax = (uint32_t)(ebx + esi*4);
/* 918eec: lea edx, [ebp + eax*4] */
  edx = (uint32_t)(ebp + eax*4);
/* 918ef0: mov eax, ecx */
  eax = ecx;
/* 918ef2: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 918ef4: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_918ef6: /* 918ef6: mov dword ptr [edx], 0 */
  W32((uint32_t)(edx), 0x0u);
/* 918efc: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 918eff: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 918f00: jne 0x918ef6 */
  if (!zf) goto L_918ef6;
L_918f02: /* 918f02: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 918f06: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 918f07: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 918f0a: lea edx, [ebx - 1] */
  edx = (uint32_t)(ebx + 0xffffffffu);
/* 918f0d: and edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 918f0f: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 918f12: add ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 918f14: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 918f18: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 918f19: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 918f1b: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 918f1f: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 918f23: jl 0x918e40 */
  if ((sf != of)) goto L_918e40;
L_918f29: /* 918f29: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 918f2b: je 0x918f70 */
  if (zf) goto L_918f70;
L_918f2d: /* 918f2d: cmp ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 918f30: je 0x918f70 */
  if (zf) goto L_918f70;
L_918f32: /* 918f32: mov eax, 4 */
  eax = 0x4u;
/* 918f37: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 918f39: lea edi, [ebp + ebx*4] */
  edi = (uint32_t)(ebp + ebx*4);
/* 918f3d: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 918f41: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_918f43: /* 918f43: xor esi, esi */
  esi = 0;
/* 918f45: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 918f47: jle 0x918f60 */
  if ((zf || sf != of)) goto L_918f60;
L_918f49: /* 918f49: mov eax, edi */
  eax = edi;
/* 918f4b: mov edx, ecx */
  edx = ecx;
/* 918f4d: mov esi, ecx */
  esi = ecx;
/* 918f4f: nop  */
L_918f50: /* 918f50: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 918f56: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 918f59: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 918f5a: jne 0x918f50 */
  if (!zf) goto L_918f50;
L_918f5c: /* 918f5c: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
L_918f60: /* 918f60: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 918f63: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 918f64: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 918f68: jne 0x918f43 */
  if (!zf) goto L_918f43;
L_918f6a: /* 918f6a: jmp 0x918f70 */
  goto L_918f70;
L_918f6c: /* 918f6c: mov esi, dword ptr [esp + 0x40] */
  esi = R32((uint32_t)(esp + 0x40u));
L_918f70: /* 918f70: mov edi, dword ptr [esp + 0x40] */
  edi = R32((uint32_t)(esp + 0x40u));
/* 918f74: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 918f75: lea eax, [edi - 1] */
  eax = (uint32_t)(edi + 0xffffffffu);
/* 918f78: and eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 918f7b: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 918f7c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 918f7d: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 918f80: jge 0x918fa2 */
  if ((sf == of)) goto L_918fa2;
L_918f82: /* 918f82: mov edx, 4 */
  edx = 0x4u;
/* 918f87: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 918f8a: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 918f8c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_918f90: /* 918f90: lea eax, [esi + ebx] */
  eax = (uint32_t)(esi + ebx);
/* 918f93: sub esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 918f96: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 918f97: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 918f98: mov dword ptr [ebp + eax*4], 0x3f800000 */
  W32((uint32_t)(ebp + eax*4), 0x3f800000u);
/* 918fa0: jne 0x918f90 */
  if (!zf) goto L_918f90;
L_918fa2: /* 918fa2: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 918fa6: xor ebx, ebx */
  ebx = 0;
/* 918fa8: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 918faa: jle 0x918fd2 */
  if ((zf || sf != of)) goto L_918fd2;
L_918fac: /* 918fac: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 918fb0: mov eax, esi */
  eax = esi;
/* 918fb2: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 918fb4: mov esi, edi */
  esi = edi;
/* 918fb6: mov ebx, edi */
  ebx = edi;
/* 918fb8: mov edi, dword ptr [esp + 0x30] */
  edi = R32((uint32_t)(esp + 0x30u));
/* 918fbc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_918fc0: /* 918fc0: mov ebp, dword ptr [edx + eax] */
  ebp = R32((uint32_t)(edx + eax));
/* 918fc3: mov ebp, dword ptr [edi + ebp*4] */
  ebp = R32((uint32_t)(edi + ebp*4));
/* 918fc6: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
/* 918fc8: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 918fcb: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 918fcc: jne 0x918fc0 */
  if (!zf) goto L_918fc0;
L_918fce: /* 918fce: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
L_918fd2: /* 918fd2: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 918fd4: jge 0x918fe0 */
  if ((sf == of)) goto L_918fe0;
L_918fd6: /* 918fd6: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 918fd8: lea edi, [esi + ebx*4] */
  edi = (uint32_t)(esi + ebx*4);
/* 918fdb: xor eax, eax */
  eax = 0;
/* 918fdd: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 918fdf: nop  */
L_918fe0: /* 918fe0: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 918fe4: xor ecx, ecx */
  ecx = 0;
/* 918fe6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 918fe8: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 918fec: jle 0x9190b2 */
  if ((zf || sf != of)) goto L_9190b2;
L_918ff2: /* 918ff2: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 918ff6: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 918ffa: mov edx, dword ptr [edx + ecx*4] */
  edx = R32((uint32_t)(edx + ecx*4));
/* 918ffd: fld dword ptr [eax + edx*4] */
  { double v = F32((uint32_t)(eax + edx*4)); FPUSH(v); }
/* 919000: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 919006: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 919008: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 91900b: jnp 0x9190a1 */
  if (!pf) goto L_9190a1;
L_919011: /* 919011: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 919015: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 919017: jle 0x9190a1 */
  if ((zf || sf != of)) goto L_9190a1;
L_91901d: /* 91901d: mov edi, dword ptr [esp + 0x38] */
  edi = R32((uint32_t)(esp + 0x38u));
/* 919021: mov ebx, edx */
  ebx = edx;
/* 919023: mov ecx, eax */
  ecx = eax;
/* 919025: sar ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebx = r;
  }
/* 919028: sub edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 91902a: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* 91902e: mov edi, edi */
  edi = edi;
L_919030: /* 919030: mov ecx, dword ptr [edi + esi] */
  ecx = R32((uint32_t)(edi + esi));
/* 919033: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 919035: jg 0x919047 */
  if ((!zf && sf == of)) goto L_919047;
L_919037: /* 919037: mov eax, ebx */
  eax = ebx;
/* 919039: imul eax, dword ptr [esp + 0x48] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x48u)));
  eax = (uint32_t)r;
  }
/* 91903e: mov ebp, ecx */
  ebp = ecx;
/* 919040: sar ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebp = r;
  }
/* 919043: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 919045: jmp 0x919053 */
  goto L_919053;
L_919047: /* 919047: mov eax, ecx */
  eax = ecx;
/* 919049: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91904c: imul eax, dword ptr [esp + 0x48] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x48u)));
  eax = (uint32_t)r;
  }
/* 919051: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_919053: /* 919053: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 919057: mov ebp, dword ptr [ebp + 0x1c] */
  ebp = R32((uint32_t)(ebp + 0x1cu));
/* 91905a: mov eax, dword ptr [ebp + eax*4] */
  eax = R32((uint32_t)(ebp + eax*4));
/* 91905e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 919060: je 0x91908b */
  if (zf) goto L_91908b;
L_919062: /* 919062: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 919064: mov ebp, edx */
  ebp = edx;
/* 919066: jg 0x919074 */
  if ((!zf && sf == of)) goto L_919074;
L_919068: /* 919068: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 91906b: and ebp, 3 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 91906e: lea ecx, [ebp + ecx*4] */
  ecx = (uint32_t)(ebp + ecx*4);
/* 919072: jmp 0x91907d */
  goto L_91907d;
L_919074: /* 919074: and ebp, 3 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 919077: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 91907a: lea ecx, [ecx + ebp*4] */
  ecx = (uint32_t)(ecx + ebp*4);
L_91907d: /* 91907d: fld dword ptr [eax + ecx*4] */
  { double v = F32((uint32_t)(eax + ecx*4)); FPUSH(v); }
/* 919080: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 919084: fmul dword ptr [eax + edx*4] */
  ST0 = ST0 * (F32((uint32_t)(eax + edx*4)));
/* 919087: fsubr dword ptr [esi] */
  ST0 = (F32((uint32_t)(esi))) - ST0;
/* 919089: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
L_91908b: /* 91908b: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 91908f: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 919092: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 919093: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 919097: jne 0x919030 */
  if (!zf) goto L_919030;
L_919099: /* 919099: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 91909d: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
L_9190a1: /* 9190a1: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 9190a5: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9190a6: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9190a8: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 9190ac: jl 0x918ff2 */
  if ((sf != of)) goto L_918ff2;
L_9190b2: /* 9190b2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9190b3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9190b4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9190b5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9190b6: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9190b9: ret 0x24 */
  esp += 40; SPILL(); return;
}

void f_9190c0(void) {
  LOAD_REGS();
L_9190c0: /* 9190c0: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9190c3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9190c4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9190c5: mov eax, ecx */
  eax = ecx;
/* 9190c7: mov ebx, dword ptr [eax + 0x14] */
  ebx = R32((uint32_t)(eax + 0x14u));
/* 9190ca: mov ebp, dword ptr [eax + 8] */
  ebp = R32((uint32_t)(eax + 0x8u));
/* 9190cd: mov edx, dword ptr [eax + 0x10] */
  edx = R32((uint32_t)(eax + 0x10u));
/* 9190d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9190d1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9190d2: xor edi, edi */
  edi = 0;
/* 9190d4: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9190d6: mov dword ptr [esp + 0x1c], ebp */
  W32((uint32_t)(esp + 0x1cu), ebp);
/* 9190da: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 9190de: jle 0x91913f */
  if ((zf || sf != of)) goto L_91913f;
L_9190e0: /* 9190e0: xor esi, esi */
  esi = 0;
/* 9190e2: mov ecx, ebx */
  ecx = ebx;
/* 9190e4: shl ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 9190e7: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 9190eb: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 9190ef: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
L_9190f3: /* 9190f3: mov ecx, ebx */
  ecx = ebx;
L_9190f5: /* 9190f5: mov ebp, dword ptr [eax + 0x20] */
  ebp = R32((uint32_t)(eax + 0x20u));
/* 9190f8: mov dword ptr [esi + ebp], edx */
  W32((uint32_t)(esi + ebp), edx);
/* 9190fb: add edx, 0x40 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9190fe: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 919101: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 919102: jne 0x9190f5 */
  if (!zf) goto L_9190f5;
L_919104: /* 919104: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 919107: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 91910b: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 91910f: mov dword ptr [ecx + edi*4], 0 */
  W32((uint32_t)(ecx + edi*4), 0x0u);
/* 919116: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 919119: lea ecx, [ebx - 1] */
  ecx = (uint32_t)(ebx + 0xffffffffu);
/* 91911c: mov dword ptr [edx + edi*4], ecx */
  W32((uint32_t)(edx + edi*4), ecx);
/* 91911f: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 919123: lea ecx, [ebx*4] */
  ecx = (uint32_t)(ebx*4);
/* 91912a: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 91912b: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 91912d: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 91912f: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 919131: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 919135: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 919139: jl 0x9190f3 */
  if ((sf != of)) goto L_9190f3;
L_91913b: /* 91913b: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
L_91913f: /* 91913f: mov ebx, dword ptr [esp + 0x44] */
  ebx = R32((uint32_t)(esp + 0x44u));
/* 919143: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 919147: xor eax, eax */
  eax = 0;
/* 919149: xor esi, esi */
  esi = 0;
/* 91914b: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 91914d: jle 0x919297 */
  if ((zf || sf != of)) goto L_919297;
L_919153: /* 919153: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 919157: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 919159: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 91915d: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 919161: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 919165: jmp 0x919170 */
  goto L_919170;
L_919167: /* 919167: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 91916b: nop  */
/* 91916c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_919170: /* 919170: mov edi, dword ptr [eax + ecx] */
  edi = R32((uint32_t)(eax + ecx));
/* 919173: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 919177: mov eax, edi */
  eax = edi;
/* 919179: imul eax, dword ptr [esp + 0x48] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x48u)));
  eax = (uint32_t)r;
  }
/* 91917e: lea ebx, [edx + eax*4] */
  ebx = (uint32_t)(edx + eax*4);
/* 919181: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 919185: xor edx, edx */
  edx = 0;
/* 919187: lea eax, [eax + esi*4] */
  eax = (uint32_t)(eax + esi*4);
/* 91918a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_919190: /* 919190: mov ebp, dword ptr [esp + 0x3c] */
  ebp = R32((uint32_t)(esp + 0x3cu));
/* 919194: mov ebp, dword ptr [ebp + edx*4] */
  ebp = R32((uint32_t)(ebp + edx*4));
/* 919198: mov ebp, dword ptr [ebx + ebp*4] */
  ebp = R32((uint32_t)(ebx + ebp*4));
/* 91919b: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
/* 91919d: mov ebp, dword ptr [esp + 0x44] */
  ebp = R32((uint32_t)(esp + 0x44u));
/* 9191a1: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 9191a2: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9191a5: cmp edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9191a7: jl 0x919190 */
  if ((sf != of)) goto L_919190;
L_9191a9: /* 9191a9: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 9191ad: fld dword ptr [eax + edi*4] */
  { double v = F32((uint32_t)(eax + edi*4)); FPUSH(v); }
/* 9191b0: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 9191b4: fsub dword ptr [eax + edi*4] */
  ST0 = ST0 - (F32((uint32_t)(eax + edi*4)));
/* 9191b7: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 9191bb: cmp edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9191bd: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 9191bf: jge 0x9191dd */
  if ((sf == of)) goto L_9191dd;
L_9191c1: /* 9191c1: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 9191c5: lea eax, [esi + edx*4] */
  eax = (uint32_t)(esi + edx*4);
/* 9191c8: lea edi, [edi + eax*4] */
  edi = (uint32_t)(edi + eax*4);
/* 9191cb: mov eax, ebp */
  eax = ebp;
/* 9191cd: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9191cf: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
L_9191d1: /* 9191d1: mov dword ptr [edi], 0 */
  W32((uint32_t)(edi), 0x0u);
/* 9191d7: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 9191da: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 9191db: jne 0x9191d1 */
  if (!zf) goto L_9191d1;
L_9191dd: /* 9191dd: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 9191e1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 9191e2: and esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 9191e5: lea eax, [esi - 1] */
  eax = (uint32_t)(esi + 0xffffffffu);
/* 9191e8: and eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 9191ea: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 9191ed: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 9191ef: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 9191f3: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9191f6: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 9191f7: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 9191fb: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 9191ff: jne 0x919167 */
  if (!zf) goto L_919167;
L_919205: /* 919205: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 919207: je 0x919242 */
  if (zf) goto L_919242;
L_919209: /* 919209: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91920c: je 0x919242 */
  if (zf) goto L_919242;
L_91920e: /* 91920e: mov ecx, ebx */
  ecx = ebx;
/* 919210: mov ebx, 4 */
  ebx = 0x4u;
/* 919215: sub ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 919217: lea edi, [ecx + esi*4] */
  edi = (uint32_t)(ecx + esi*4);
/* 91921a: add esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 91921c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_919220: /* 919220: xor edx, edx */
  edx = 0;
/* 919222: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 919224: jle 0x91923c */
  if ((zf || sf != of)) goto L_91923c;
L_919226: /* 919226: mov eax, edi */
  eax = edi;
/* 919228: mov ecx, ebp */
  ecx = ebp;
/* 91922a: mov edx, ebp */
  edx = ebp;
/* 91922c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_919230: /* 919230: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 919236: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 919239: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 91923a: jne 0x919230 */
  if (!zf) goto L_919230;
L_91923c: /* 91923c: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 91923f: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* 919240: jne 0x919220 */
  if (!zf) goto L_919220;
L_919242: /* 919242: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 919246: mov ebx, dword ptr [esp + 0x44] */
  ebx = R32((uint32_t)(esp + 0x44u));
L_91924a: /* 91924a: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91924c: jge 0x919260 */
  if ((sf == of)) goto L_919260;
L_91924e: /* 91924e: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 919252: lea edi, [ecx + eax*4] */
  edi = (uint32_t)(ecx + eax*4);
/* 919255: mov ecx, ebp */
  ecx = ebp;
/* 919257: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 919259: xor eax, eax */
  eax = 0;
/* 91925b: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 91925d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_919260: /* 919260: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 919261: lea eax, [ebx - 1] */
  eax = (uint32_t)(ebx + 0xffffffffu);
/* 919264: and eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 919267: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 919268: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 919269: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91926c: jge 0x91928d */
  if ((sf == of)) goto L_91928d;
L_91926e: /* 91926e: mov ecx, 4 */
  ecx = 0x4u;
/* 919273: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 919276: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
L_919278: /* 919278: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 91927c: lea eax, [edx + esi] */
  eax = (uint32_t)(edx + esi);
/* 91927f: sub edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 919282: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 919283: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 919284: mov dword ptr [edi + eax*4], 0x3f800000 */
  W32((uint32_t)(edi + eax*4), 0x3f800000u);
/* 91928b: jne 0x919278 */
  if (!zf) goto L_919278;
L_91928d: /* 91928d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 91928e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91928f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 919290: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 919291: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 919294: ret 0x24 */
  esp += 40; SPILL(); return;
L_919297: /* 919297: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 91929b: jmp 0x91924a */
  goto L_91924a;
}

void f_9192a0(void) {
  LOAD_REGS();
L_9192a0: /* 9192a0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 9192a4: sub esp, 0x100 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9192aa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9192ab: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9192ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9192ad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9192ae: mov edi, dword ptr [0xcfb078] */
  edi = R32((uint32_t)(0xcfb078u));
/* 9192b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9192b5: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9192b9: push 0xaf2ab8 */
  { uint32_t v = 0xaf2ab8u; esp -= 4; W32(esp, v); }
/* 9192be: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9192bf: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x9192c1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9192c1: mov ebx, dword ptr [esp + 0x120] */
  ebx = R32((uint32_t)(esp + 0x120u));
/* 9192c8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9192cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9192cc: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 9192d0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9192d1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9192d2: call 0x975cb0 */
  esp -= 4; W32(esp, 0x9192d7u); SPILL(); f_975cb0(); if (g_unwind) return; RELOAD();
/* 9192d7: mov ebp, dword ptr [esp + 0x11c] */
  ebp = R32((uint32_t)(esp + 0x11cu));
/* 9192de: xor esi, esi */
  esi = 0;
/* 9192e0: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9192e2: je 0x91930f */
  if (zf) goto L_91930f;
L_9192e4: /* 9192e4: mov eax, dword ptr [esp + 0x120] */
  eax = R32((uint32_t)(esp + 0x120u));
/* 9192eb: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 9192ee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9192ef: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 9192f3: push 0xaf2ab4 */
  { uint32_t v = 0xaf2ab4u; esp -= 4; W32(esp, v); }
/* 9192f8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9192f9: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x9192fbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9192fb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9192fe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9192ff: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 919303: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 919304: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 919305: call 0x975cb0 */
  esp -= 4; W32(esp, 0x91930au); SPILL(); f_975cb0(); if (g_unwind) return; RELOAD();
/* 91930a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 91930b: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91930d: jne 0x9192e4 */
  if (!zf) goto L_9192e4;
L_91930f: /* 91930f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 919310: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 919311: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 919312: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 919313: add esp, 0x100 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 919319: ret  */
  esp += 4; SPILL(); return;
}

void f_919320(void) {
  LOAD_REGS();
L_919320: /* 919320: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 919324: lea edx, [ecx + ecx] */
  edx = (uint32_t)(ecx + ecx);
/* 919327: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 91932b: jmp 0x9192a0 */
  SPILL(); f_9192a0(); return;
}

void f_919330(void) {
  LOAD_REGS();
L_919330: /* 919330: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 919334: sub esp, 0x100 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 91933a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 91933b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 91933c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91933d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91933e: mov edi, dword ptr [0xcfb078] */
  edi = R32((uint32_t)(0xcfb078u));
/* 919344: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 919345: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 919349: push 0xaf2ab8 */
  { uint32_t v = 0xaf2ab8u; esp -= 4; W32(esp, v); }
/* 91934e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91934f: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x919351u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 919351: mov ebx, dword ptr [esp + 0x120] */
  ebx = R32((uint32_t)(esp + 0x120u));
/* 919358: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 91935b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91935c: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 919360: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 919361: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 919362: call 0x975cb0 */
  esp -= 4; W32(esp, 0x919367u); SPILL(); f_975cb0(); if (g_unwind) return; RELOAD();
/* 919367: mov ebp, dword ptr [esp + 0x11c] */
  ebp = R32((uint32_t)(esp + 0x11cu));
/* 91936e: xor esi, esi */
  esi = 0;
/* 919370: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 919372: je 0x91939f */
  if (zf) goto L_91939f;
L_919374: /* 919374: mov eax, dword ptr [esp + 0x120] */
  eax = R32((uint32_t)(esp + 0x120u));
/* 91937b: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 91937e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91937f: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 919383: push 0xaf2abc */
  { uint32_t v = 0xaf2abcu; esp -= 4; W32(esp, v); }
/* 919388: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 919389: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x91938bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 91938b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 91938e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91938f: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 919393: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 919394: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 919395: call 0x975cb0 */
  esp -= 4; W32(esp, 0x91939au); SPILL(); f_975cb0(); if (g_unwind) return; RELOAD();
/* 91939a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 91939b: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91939d: jne 0x919374 */
  if (!zf) goto L_919374;
L_91939f: /* 91939f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9193a0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9193a1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9193a2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9193a3: add esp, 0x100 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9193a9: ret  */
  esp += 4; SPILL(); return;
}

void f_9193b0(void) {
  LOAD_REGS();
L_9193b0: /* 9193b0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 9193b4: sub esp, 0x100 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9193ba: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9193bb: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9193bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9193bd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9193be: mov edi, dword ptr [0xcfb078] */
  edi = R32((uint32_t)(0xcfb078u));
/* 9193c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9193c5: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9193c9: push 0xaf2ab8 */
  { uint32_t v = 0xaf2ab8u; esp -= 4; W32(esp, v); }
/* 9193ce: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9193cf: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x9193d1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9193d1: mov ebx, dword ptr [esp + 0x120] */
  ebx = R32((uint32_t)(esp + 0x120u));
/* 9193d8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9193db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9193dc: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 9193e0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9193e1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9193e2: call 0x975cb0 */
  esp -= 4; W32(esp, 0x9193e7u); SPILL(); f_975cb0(); if (g_unwind) return; RELOAD();
/* 9193e7: mov ebp, dword ptr [esp + 0x11c] */
  ebp = R32((uint32_t)(esp + 0x11cu));
/* 9193ee: xor esi, esi */
  esi = 0;
L_9193f0: /* 9193f0: mov eax, dword ptr [ebp + esi*4] */
  eax = R32((uint32_t)(ebp + esi*4));
/* 9193f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9193f5: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9193f9: push 0xaf2abc */
  { uint32_t v = 0xaf2abcu; esp -= 4; W32(esp, v); }
/* 9193fe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9193ff: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x919401u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 919401: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 919404: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 919405: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 919409: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91940a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 91940b: call 0x975cb0 */
  esp -= 4; W32(esp, 0x919410u); SPILL(); f_975cb0(); if (g_unwind) return; RELOAD();
/* 919410: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 919411: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 919414: jne 0x9193f0 */
  if (!zf) goto L_9193f0;
L_919416: /* 919416: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 919417: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 919418: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 919419: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 91941a: add esp, 0x100 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 919420: ret  */
  esp += 4; SPILL(); return;
}

void f_919430(void) {
  LOAD_REGS();
L_919430: /* 919430: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 919434: sub esp, 0x100 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 91943a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91943b: mov esi, dword ptr [0xcfb078] */
  esi = R32((uint32_t)(0xcfb078u));
/* 919441: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 919442: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 919443: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 919447: push 0xaf2ab8 */
  { uint32_t v = 0xaf2ab8u; esp -= 4; W32(esp, v); }
/* 91944c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91944d: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x91944fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 91944f: mov edi, dword ptr [esp + 0x118] */
  edi = R32((uint32_t)(esp + 0x118u));
/* 919456: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 919459: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91945a: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 91945e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91945f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 919460: call 0x975cb0 */
  esp -= 4; W32(esp, 0x919465u); SPILL(); f_975cb0(); if (g_unwind) return; RELOAD();
/* 919465: mov eax, dword ptr [esp + 0x114] */
  eax = R32((uint32_t)(esp + 0x114u));
/* 91946c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91946d: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 919471: push 0xaf2abc */
  { uint32_t v = 0xaf2abcu; esp -= 4; W32(esp, v); }
/* 919476: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 919477: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x919479u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 919479: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 91947c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91947d: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 919481: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 919482: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 919483: call 0x975cb0 */
  esp -= 4; W32(esp, 0x919488u); SPILL(); f_975cb0(); if (g_unwind) return; RELOAD();
/* 919488: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 919489: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91948a: add esp, 0x100 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 919490: ret  */
  esp += 4; SPILL(); return;
}

void f_9194a0(void) {
  LOAD_REGS();
L_9194a0: /* 9194a0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 9194a4: sub esp, 0x100 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9194aa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9194ab: mov esi, dword ptr [0xcfb078] */
  esi = R32((uint32_t)(0xcfb078u));
/* 9194b1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9194b2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9194b3: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 9194b7: push 0xaf2ab8 */
  { uint32_t v = 0xaf2ab8u; esp -= 4; W32(esp, v); }
/* 9194bc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9194bd: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x9194bfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9194bf: mov edi, dword ptr [esp + 0x118] */
  edi = R32((uint32_t)(esp + 0x118u));
/* 9194c6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9194c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9194ca: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 9194ce: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9194cf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9194d0: call 0x975cb0 */
  esp -= 4; W32(esp, 0x9194d5u); SPILL(); f_975cb0(); if (g_unwind) return; RELOAD();
/* 9194d5: mov eax, dword ptr [esp + 0x114] */
  eax = R32((uint32_t)(esp + 0x114u));
/* 9194dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9194dd: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 9194e1: push 0xaf2ab4 */
  { uint32_t v = 0xaf2ab4u; esp -= 4; W32(esp, v); }
/* 9194e6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9194e7: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x9194e9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9194e9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9194ec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9194ed: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 9194f1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9194f2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9194f3: call 0x975cb0 */
  esp -= 4; W32(esp, 0x9194f8u); SPILL(); f_975cb0(); if (g_unwind) return; RELOAD();
/* 9194f8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9194f9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9194fa: add esp, 0x100 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 919500: ret  */
  esp += 4; SPILL(); return;
}

void f_919510(void) {
  LOAD_REGS();
L_919510: /* 919510: sub esp, 0x100 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 919516: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 919517: mov ebp, dword ptr [esp + 0x108] */
  ebp = R32((uint32_t)(esp + 0x108u));
/* 91951e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91951f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 919520: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 919525: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 919529: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91952a: call 0x9755b0 */
  esp -= 4; W32(esp, 0x91952fu); SPILL(); f_9755b0(); if (g_unwind) return; RELOAD();
/* 91952f: mov edi, dword ptr [esp + 0x114] */
  edi = R32((uint32_t)(esp + 0x114u));
/* 919536: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 919538: je 0x919578 */
  if (zf) goto L_919578;
L_91953a: /* 91953a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 91953b: mov ebx, dword ptr [0xcfb07c] */
  ebx = R32((uint32_t)(0xcfb07cu));
/* 919541: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919542: mov esi, dword ptr [esp + 0x120] */
  esi = R32((uint32_t)(esp + 0x120u));
/* 919549: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_919550: /* 919550: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 919551: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 919556: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 91955a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91955b: call 0x9755b0 */
  esp -= 4; W32(esp, 0x919560u); SPILL(); f_9755b0(); if (g_unwind) return; RELOAD();
/* 919560: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919561: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 919565: push 0xaf2ab4 */
  { uint32_t v = 0xaf2ab4u; esp -= 4; W32(esp, v); }
/* 91956a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91956b: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x91956du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 91956d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 919570: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 919573: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 919574: jne 0x919550 */
  if (!zf) goto L_919550;
L_919576: /* 919576: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 919577: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_919578: /* 919578: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 919579: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 91957a: add esp, 0x100 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 919580: ret  */
  esp += 4; SPILL(); return;
}

void f_919590(void) {
  LOAD_REGS();
L_919590: /* 919590: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 919594: lea edx, [ecx + ecx] */
  edx = (uint32_t)(ecx + ecx);
/* 919597: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 91959b: jmp 0x919510 */
  SPILL(); f_919510(); return;
}

void f_9195a0(void) {
  LOAD_REGS();
L_9195a0: /* 9195a0: sub esp, 0x100 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9195a6: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9195a7: mov ebp, dword ptr [esp + 0x108] */
  ebp = R32((uint32_t)(esp + 0x108u));
/* 9195ae: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9195af: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9195b0: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 9195b5: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 9195b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9195ba: call 0x9755b0 */
  esp -= 4; W32(esp, 0x9195bfu); SPILL(); f_9755b0(); if (g_unwind) return; RELOAD();
/* 9195bf: mov edi, dword ptr [esp + 0x114] */
  edi = R32((uint32_t)(esp + 0x114u));
/* 9195c6: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9195c8: je 0x919608 */
  if (zf) goto L_919608;
L_9195ca: /* 9195ca: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9195cb: mov ebx, dword ptr [0xcfb07c] */
  ebx = R32((uint32_t)(0xcfb07cu));
/* 9195d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9195d2: mov esi, dword ptr [esp + 0x120] */
  esi = R32((uint32_t)(esp + 0x120u));
/* 9195d9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9195e0: /* 9195e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9195e1: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 9195e6: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 9195ea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9195eb: call 0x9755b0 */
  esp -= 4; W32(esp, 0x9195f0u); SPILL(); f_9755b0(); if (g_unwind) return; RELOAD();
/* 9195f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9195f1: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 9195f5: push 0xaf2abc */
  { uint32_t v = 0xaf2abcu; esp -= 4; W32(esp, v); }
/* 9195fa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9195fb: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x9195fdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9195fd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 919600: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 919603: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 919604: jne 0x9195e0 */
  if (!zf) goto L_9195e0;
L_919606: /* 919606: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 919607: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_919608: /* 919608: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 919609: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 91960a: add esp, 0x100 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 919610: ret  */
  esp += 4; SPILL(); return;
}

void f_919620(void) {
  LOAD_REGS();
L_919620: /* 919620: sub esp, 0x100 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 919626: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 919627: mov ebx, dword ptr [esp + 0x108] */
  ebx = R32((uint32_t)(esp + 0x108u));
/* 91962e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 91962f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919630: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 919631: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 919632: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 919637: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 91963b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91963c: call 0x9755b0 */
  esp -= 4; W32(esp, 0x919641u); SPILL(); f_9755b0(); if (g_unwind) return; RELOAD();
/* 919641: mov esi, dword ptr [esp + 0x11c] */
  esi = R32((uint32_t)(esp + 0x11cu));
/* 919648: mov ebp, dword ptr [0xcfb07c] */
  ebp = R32((uint32_t)(0xcfb07cu));
/* 91964e: mov edi, 4 */
  edi = 0x4u;
L_919653: /* 919653: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 919654: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 919659: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 91965d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91965e: call 0x9755b0 */
  esp -= 4; W32(esp, 0x919663u); SPILL(); f_9755b0(); if (g_unwind) return; RELOAD();
/* 919663: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919664: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 919668: push 0xaf2abc */
  { uint32_t v = 0xaf2abcu; esp -= 4; W32(esp, v); }
/* 91966d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91966e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x919670u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 919670: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 919673: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 919676: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 919677: jne 0x919653 */
  if (!zf) goto L_919653;
L_919679: /* 919679: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 91967a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91967b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 91967c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 91967d: add esp, 0x100 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 919683: ret  */
  esp += 4; SPILL(); return;
}

void f_919690(void) {
  LOAD_REGS();
L_919690: /* 919690: sub esp, 0x100 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 919696: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919697: mov esi, dword ptr [esp + 0x108] */
  esi = R32((uint32_t)(esp + 0x108u));
/* 91969e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91969f: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 9196a4: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 9196a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9196a9: call 0x9755b0 */
  esp -= 4; W32(esp, 0x9196aeu); SPILL(); f_9755b0(); if (g_unwind) return; RELOAD();
/* 9196ae: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9196af: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 9196b4: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 9196b8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9196b9: call 0x9755b0 */
  esp -= 4; W32(esp, 0x9196beu); SPILL(); f_9755b0(); if (g_unwind) return; RELOAD();
/* 9196be: mov edx, dword ptr [esp + 0x110] */
  edx = R32((uint32_t)(esp + 0x110u));
/* 9196c5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9196c6: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 9196ca: push 0xaf2abc */
  { uint32_t v = 0xaf2abcu; esp -= 4; W32(esp, v); }
/* 9196cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9196d0: call dword ptr [0xcfb07c] */
  esp -= 4; W32(esp, 0x9196d6u); SPILL(); f_42d29b(); if (g_unwind) return; /* MSVCR70!sscanf */ RELOAD();
/* 9196d6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9196d9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9196da: add esp, 0x100 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9196e0: ret  */
  esp += 4; SPILL(); return;
}

void f_9196f0(void) {
  LOAD_REGS();
L_9196f0: /* 9196f0: sub esp, 0x100 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9196f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9196f7: mov esi, dword ptr [esp + 0x108] */
  esi = R32((uint32_t)(esp + 0x108u));
/* 9196fe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9196ff: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 919704: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 919708: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 919709: call 0x9755b0 */
  esp -= 4; W32(esp, 0x91970eu); SPILL(); f_9755b0(); if (g_unwind) return; RELOAD();
/* 91970e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91970f: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 919714: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 919718: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 919719: call 0x9755b0 */
  esp -= 4; W32(esp, 0x91971eu); SPILL(); f_9755b0(); if (g_unwind) return; RELOAD();
/* 91971e: mov edx, dword ptr [esp + 0x110] */
  edx = R32((uint32_t)(esp + 0x110u));
/* 919725: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 919726: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 91972a: push 0xaf2ab4 */
  { uint32_t v = 0xaf2ab4u; esp -= 4; W32(esp, v); }
/* 91972f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 919730: call dword ptr [0xcfb07c] */
  esp -= 4; W32(esp, 0x919736u); SPILL(); f_42d29b(); if (g_unwind) return; /* MSVCR70!sscanf */ RELOAD();
/* 919736: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 919739: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91973a: add esp, 0x100 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 919740: ret  */
  esp += 4; SPILL(); return;
}

void f_919750(void) {
  LOAD_REGS();
L_919750: /* 919750: mov eax, dword ptr [0xcf2ea4] */
  eax = R32((uint32_t)(0xcf2ea4u));
/* 919755: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 919758: sub esp, 0x110 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x110u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 91975e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 91975f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 919760: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919761: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 919762: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 919764: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 919765: call 0x975e70 */
  esp -= 4; W32(esp, 0x91976au); SPILL(); f_975e70(); if (g_unwind) return; RELOAD();
/* 91976a: mov edx, dword ptr [0xcf2ea4] */
  edx = R32((uint32_t)(0xcf2ea4u));
/* 919770: mov esi, eax */
  esi = eax;
/* 919772: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 919775: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 919776: push 0xaf2cac */
  { uint32_t v = 0xaf2cacu; esp -= 4; W32(esp, v); }
/* 91977b: call dword ptr [0xcfb070] */
  esp -= 4; W32(esp, 0x919781u); SPILL(); f_42d092(); if (g_unwind) return; /* MSVCR70!printf */ RELOAD();
/* 919781: mov ecx, dword ptr [esp + 0x190] */
  ecx = R32((uint32_t)(esp + 0x190u));
/* 919788: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 919789: push 0xaf2ca4 */
  { uint32_t v = 0xaf2ca4u; esp -= 4; W32(esp, v); }
/* 91978e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91978f: call 0x919430 */
  esp -= 4; W32(esp, 0x919794u); SPILL(); f_919430(); if (g_unwind) return; RELOAD();
/* 919794: mov edx, dword ptr [esp + 0x198] */
  edx = R32((uint32_t)(esp + 0x198u));
/* 91979b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91979c: push 0xaf2c9c */
  { uint32_t v = 0xaf2c9cu; esp -= 4; W32(esp, v); }
/* 9197a1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9197a2: call 0x919430 */
  esp -= 4; W32(esp, 0x9197a7u); SPILL(); f_919430(); if (g_unwind) return; RELOAD();
/* 9197a7: mov eax, dword ptr [esp + 0x1a0] */
  eax = R32((uint32_t)(esp + 0x1a0u));
/* 9197ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9197af: push 0xaf2c90 */
  { uint32_t v = 0xaf2c90u; esp -= 4; W32(esp, v); }
/* 9197b4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9197b5: call 0x919430 */
  esp -= 4; W32(esp, 0x9197bau); SPILL(); f_919430(); if (g_unwind) return; RELOAD();
/* 9197ba: mov ecx, dword ptr [esp + 0x1b8] */
  ecx = R32((uint32_t)(esp + 0x1b8u));
/* 9197c1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9197c2: push 0xaf2c80 */
  { uint32_t v = 0xaf2c80u; esp -= 4; W32(esp, v); }
/* 9197c7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9197c8: call 0x9194a0 */
  esp -= 4; W32(esp, 0x9197cdu); SPILL(); f_9194a0(); if (g_unwind) return; RELOAD();
/* 9197cd: mov edi, dword ptr [esp + 0x15c] */
  edi = R32((uint32_t)(esp + 0x15cu));
/* 9197d4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9197d5: push 0xaf2c70 */
  { uint32_t v = 0xaf2c70u; esp -= 4; W32(esp, v); }
/* 9197da: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9197db: call 0x9194a0 */
  esp -= 4; W32(esp, 0x9197e0u); SPILL(); f_9194a0(); if (g_unwind) return; RELOAD();
/* 9197e0: mov edx, dword ptr [esp + 0x16c] */
  edx = R32((uint32_t)(esp + 0x16cu));
/* 9197e7: add esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9197ea: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9197eb: push 0xaf2c60 */
  { uint32_t v = 0xaf2c60u; esp -= 4; W32(esp, v); }
/* 9197f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9197f1: call 0x9194a0 */
  esp -= 4; W32(esp, 0x9197f6u); SPILL(); f_9194a0(); if (g_unwind) return; RELOAD();
/* 9197f6: mov eax, dword ptr [esp + 0x138] */
  eax = R32((uint32_t)(esp + 0x138u));
/* 9197fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9197fe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9197ff: push 0xaf2c40 */
  { uint32_t v = 0xaf2c40u; esp -= 4; W32(esp, v); }
/* 919804: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919805: call 0x9192a0 */
  esp -= 4; W32(esp, 0x91980au); SPILL(); f_9192a0(); if (g_unwind) return; RELOAD();
/* 91980a: mov ecx, dword ptr [esp + 0x14c] */
  ecx = R32((uint32_t)(esp + 0x14cu));
/* 919811: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 919812: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 919813: push 0xaf2c20 */
  { uint32_t v = 0xaf2c20u; esp -= 4; W32(esp, v); }
/* 919818: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919819: call 0x9192a0 */
  esp -= 4; W32(esp, 0x91981eu); SPILL(); f_9192a0(); if (g_unwind) return; RELOAD();
/* 91981e: mov edx, dword ptr [esp + 0x160] */
  edx = R32((uint32_t)(esp + 0x160u));
/* 919825: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 919826: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 919827: push 0xaf2c04 */
  { uint32_t v = 0xaf2c04u; esp -= 4; W32(esp, v); }
/* 91982c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91982d: call 0x9192a0 */
  esp -= 4; W32(esp, 0x919832u); SPILL(); f_9192a0(); if (g_unwind) return; RELOAD();
/* 919832: mov eax, dword ptr [esp + 0x174] */
  eax = R32((uint32_t)(esp + 0x174u));
/* 919839: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91983a: push 0xaf2bec */
  { uint32_t v = 0xaf2becu; esp -= 4; W32(esp, v); }
/* 91983f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919840: call 0x9194a0 */
  esp -= 4; W32(esp, 0x919845u); SPILL(); f_9194a0(); if (g_unwind) return; RELOAD();
/* 919845: mov edi, dword ptr [esp + 0x184] */
  edi = R32((uint32_t)(esp + 0x184u));
/* 91984c: add esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 91984f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 919850: push 0xaf2bd4 */
  { uint32_t v = 0xaf2bd4u; esp -= 4; W32(esp, v); }
/* 919855: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919856: call 0x9194a0 */
  esp -= 4; W32(esp, 0x91985bu); SPILL(); f_9194a0(); if (g_unwind) return; RELOAD();
/* 91985b: mov ecx, dword ptr [esp + 0x14c] */
  ecx = R32((uint32_t)(esp + 0x14cu));
/* 919862: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 919863: push 0xaf2bbc */
  { uint32_t v = 0xaf2bbcu; esp -= 4; W32(esp, v); }
/* 919868: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919869: call 0x9194a0 */
  esp -= 4; W32(esp, 0x91986eu); SPILL(); f_9194a0(); if (g_unwind) return; RELOAD();
/* 91986e: mov ebx, dword ptr [esp + 0x160] */
  ebx = R32((uint32_t)(esp + 0x160u));
/* 919875: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 919876: push 0xaf2bac */
  { uint32_t v = 0xaf2bacu; esp -= 4; W32(esp, v); }
/* 91987b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91987c: call 0x9194a0 */
  esp -= 4; W32(esp, 0x919881u); SPILL(); f_9194a0(); if (g_unwind) return; RELOAD();
/* 919881: mov edx, dword ptr [esp + 0x170] */
  edx = R32((uint32_t)(esp + 0x170u));
/* 919888: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 919889: push 0xaf2b9c */
  { uint32_t v = 0xaf2b9cu; esp -= 4; W32(esp, v); }
/* 91988e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91988f: call 0x9194a0 */
  esp -= 4; W32(esp, 0x919894u); SPILL(); f_9194a0(); if (g_unwind) return; RELOAD();
/* 919894: mov ebp, dword ptr [0xcfb078] */
  ebp = R32((uint32_t)(0xcfb078u));
/* 91989a: lea eax, [esp + 0x50] */
  eax = (uint32_t)(esp + 0x50u);
/* 91989e: push 0xaf2b94 */
  { uint32_t v = 0xaf2b94u; esp -= 4; W32(esp, v); }
/* 9198a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9198a4: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x9198a6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9198a6: add esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9198a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9198aa: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 9198ae: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9198af: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9198b0: call 0x975cb0 */
  esp -= 4; W32(esp, 0x9198b5u); SPILL(); f_975cb0(); if (g_unwind) return; RELOAD();
/* 9198b5: mov eax, dword ptr [esp + 0x138] */
  eax = R32((uint32_t)(esp + 0x138u));
/* 9198bc: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 9198bd: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 9198c0: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9198c2: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 9198c5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9198c7: je 0x9199cf */
  if (zf) goto L_9199cf;
L_9198cd: /* 9198cd: mov edx, dword ptr [esp + 0x150] */
  edx = R32((uint32_t)(esp + 0x150u));
/* 9198d4: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 9198d8: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 9198dc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9198e0: /* 9198e0: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 9198e4: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 9198e8: mov dword ptr [esp + 0x18], 4 */
  W32((uint32_t)(esp + 0x18u), 0x4u);
L_9198f0: /* 9198f0: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 9198f4: mov ebx, 6 */
  ebx = 0x6u;
/* 9198f9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_919900: /* 919900: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 919902: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 919903: lea edx, [esp + 0x24] */
  edx = (uint32_t)(esp + 0x24u);
/* 919907: push 0xaf2b8c */
  { uint32_t v = 0xaf2b8cu; esp -= 4; W32(esp, v); }
/* 91990c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91990d: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x91990fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 91990f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 919912: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 919913: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 919917: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 919918: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919919: call 0x975cb0 */
  esp -= 4; W32(esp, 0x91991eu); SPILL(); f_975cb0(); if (g_unwind) return; RELOAD();
/* 91991e: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 919921: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* 919922: jne 0x919900 */
  if (!zf) goto L_919900;
L_919924: /* 919924: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 919928: lea edi, [ecx + 0x60] */
  edi = (uint32_t)(ecx + 0x60u);
/* 91992b: mov ebx, 6 */
  ebx = 0x6u;
L_919930: /* 919930: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 919932: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 919933: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 919937: push 0xaf2b8c */
  { uint32_t v = 0xaf2b8cu; esp -= 4; W32(esp, v); }
/* 91993c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91993d: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x91993fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 91993f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 919942: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 919943: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 919947: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 919948: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919949: call 0x975cb0 */
  esp -= 4; W32(esp, 0x91994eu); SPILL(); f_975cb0(); if (g_unwind) return; RELOAD();
/* 91994e: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 919951: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* 919952: jne 0x919930 */
  if (!zf) goto L_919930;
L_919954: /* 919954: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* 919958: push 0xaf2b88 */
  { uint32_t v = 0xaf2b88u; esp -= 4; W32(esp, v); }
/* 91995d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91995e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x919960u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 919960: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 919963: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 919964: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 919968: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 919969: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91996a: call 0x975cb0 */
  esp -= 4; W32(esp, 0x91996fu); SPILL(); f_975cb0(); if (g_unwind) return; RELOAD();
/* 91996f: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 919973: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 919977: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91997a: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 91997b: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 91997f: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 919983: jne 0x9198f0 */
  if (!zf) goto L_9198f0;
L_919989: /* 919989: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 91998d: push 0xaf2b88 */
  { uint32_t v = 0xaf2b88u; esp -= 4; W32(esp, v); }
/* 919992: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 919993: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x919995u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 919995: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 919998: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 919999: lea edx, [esp + 0x24] */
  edx = (uint32_t)(esp + 0x24u);
/* 91999d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91999e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91999f: call 0x975cb0 */
  esp -= 4; W32(esp, 0x9199a4u); SPILL(); f_975cb0(); if (g_unwind) return; RELOAD();
/* 9199a4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 9199a8: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 9199ac: add ecx, 0xc0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xc0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9199b2: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 9199b3: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 9199b7: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 9199bb: jne 0x9198e0 */
  if (!zf) goto L_9198e0;
L_9199c1: /* 9199c1: mov ebx, dword ptr [esp + 0x148] */
  ebx = R32((uint32_t)(esp + 0x148u));
/* 9199c8: mov edi, dword ptr [esp + 0x13c] */
  edi = R32((uint32_t)(esp + 0x13cu));
L_9199cf: /* 9199cf: mov eax, dword ptr [esp + 0x154] */
  eax = R32((uint32_t)(esp + 0x154u));
/* 9199d6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9199d7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9199d8: push 0xaf2b84 */
  { uint32_t v = 0xaf2b84u; esp -= 4; W32(esp, v); }
/* 9199dd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9199de: call 0x919330 */
  esp -= 4; W32(esp, 0x9199e3u); SPILL(); f_919330(); if (g_unwind) return; RELOAD();
/* 9199e3: mov ecx, dword ptr [esp + 0x168] */
  ecx = R32((uint32_t)(esp + 0x168u));
/* 9199ea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9199eb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9199ec: push 0xaf2b80 */
  { uint32_t v = 0xaf2b80u; esp -= 4; W32(esp, v); }
/* 9199f1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9199f2: call 0x919330 */
  esp -= 4; W32(esp, 0x9199f7u); SPILL(); f_919330(); if (g_unwind) return; RELOAD();
/* 9199f7: mov edx, dword ptr [esp + 0x17c] */
  edx = R32((uint32_t)(esp + 0x17cu));
/* 9199fe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9199ff: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 919a00: push 0xaf2b7c */
  { uint32_t v = 0xaf2b7cu; esp -= 4; W32(esp, v); }
/* 919a05: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919a06: call 0x919330 */
  esp -= 4; W32(esp, 0x919a0bu); SPILL(); f_919330(); if (g_unwind) return; RELOAD();
/* 919a0b: mov eax, dword ptr [esp + 0x190] */
  eax = R32((uint32_t)(esp + 0x190u));
/* 919a12: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 919a13: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 919a14: push 0xaf2b78 */
  { uint32_t v = 0xaf2b78u; esp -= 4; W32(esp, v); }
/* 919a19: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919a1a: call 0x919330 */
  esp -= 4; W32(esp, 0x919a1fu); SPILL(); f_919330(); if (g_unwind) return; RELOAD();
/* 919a1f: mov ecx, dword ptr [esp + 0x1ac] */
  ecx = R32((uint32_t)(esp + 0x1acu));
/* 919a26: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 919a29: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 919a2a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 919a2b: push 0xaf2b6c */
  { uint32_t v = 0xaf2b6cu; esp -= 4; W32(esp, v); }
/* 919a30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919a31: call 0x919330 */
  esp -= 4; W32(esp, 0x919a36u); SPILL(); f_919330(); if (g_unwind) return; RELOAD();
/* 919a36: mov edx, dword ptr [esp + 0x180] */
  edx = R32((uint32_t)(esp + 0x180u));
/* 919a3d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 919a3e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 919a3f: push 0xaf2b64 */
  { uint32_t v = 0xaf2b64u; esp -= 4; W32(esp, v); }
/* 919a44: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919a45: call 0x919330 */
  esp -= 4; W32(esp, 0x919a4au); SPILL(); f_919330(); if (g_unwind) return; RELOAD();
/* 919a4a: mov eax, dword ptr [esp + 0x194] */
  eax = R32((uint32_t)(esp + 0x194u));
/* 919a51: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 919a52: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 919a53: push 0xaf2b5c */
  { uint32_t v = 0xaf2b5cu; esp -= 4; W32(esp, v); }
/* 919a58: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919a59: call 0x9192a0 */
  esp -= 4; W32(esp, 0x919a5eu); SPILL(); f_9192a0(); if (g_unwind) return; RELOAD();
/* 919a5e: mov ecx, dword ptr [esp + 0x1a8] */
  ecx = R32((uint32_t)(esp + 0x1a8u));
/* 919a65: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 919a66: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 919a67: push 0xaf2b54 */
  { uint32_t v = 0xaf2b54u; esp -= 4; W32(esp, v); }
/* 919a6c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919a6d: call 0x9192a0 */
  esp -= 4; W32(esp, 0x919a72u); SPILL(); f_9192a0(); if (g_unwind) return; RELOAD();
/* 919a72: mov edx, dword ptr [esp + 0x1bc] */
  edx = R32((uint32_t)(esp + 0x1bcu));
/* 919a79: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 919a7c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 919a7d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 919a7e: push 0xaf2b4c */
  { uint32_t v = 0xaf2b4cu; esp -= 4; W32(esp, v); }
/* 919a83: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919a84: call 0x919320 */
  esp -= 4; W32(esp, 0x919a89u); SPILL(); f_919320(); if (g_unwind) return; RELOAD();
/* 919a89: mov ebx, dword ptr [esp + 0x1e0] */
  ebx = R32((uint32_t)(esp + 0x1e0u));
/* 919a90: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 919a91: push 0xaf2b40 */
  { uint32_t v = 0xaf2b40u; esp -= 4; W32(esp, v); }
/* 919a96: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919a97: call 0x9194a0 */
  esp -= 4; W32(esp, 0x919a9cu); SPILL(); f_9194a0(); if (g_unwind) return; RELOAD();
/* 919a9c: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 919a9f: xor edi, edi */
  edi = 0;
/* 919aa1: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 919aa3: je 0x919c03 */
  if (zf) goto L_919c03;
L_919aa9: /* 919aa9: mov ebx, dword ptr [esp + 0x1cc] */
  ebx = R32((uint32_t)(esp + 0x1ccu));
L_919ab0: /* 919ab0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 919ab1: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 919ab5: push 0xaf2b34 */
  { uint32_t v = 0xaf2b34u; esp -= 4; W32(esp, v); }
/* 919aba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 919abb: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x919abdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 919abd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 919ac0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 919ac1: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 919ac5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 919ac6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919ac7: call 0x975cb0 */
  esp -= 4; W32(esp, 0x919accu); SPILL(); f_975cb0(); if (g_unwind) return; RELOAD();
/* 919acc: mov edx, dword ptr [ebx + edi*4] */
  edx = R32((uint32_t)(ebx + edi*4));
/* 919acf: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* 919ad2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 919ad3: push 0xaf2b2c */
  { uint32_t v = 0xaf2b2cu; esp -= 4; W32(esp, v); }
/* 919ad8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919ad9: call 0x919430 */
  esp -= 4; W32(esp, 0x919adeu); SPILL(); f_919430(); if (g_unwind) return; RELOAD();
/* 919ade: mov ecx, dword ptr [ebx + edi*4] */
  ecx = R32((uint32_t)(ebx + edi*4));
/* 919ae1: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 919ae4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 919ae5: push 0xaf2b24 */
  { uint32_t v = 0xaf2b24u; esp -= 4; W32(esp, v); }
/* 919aea: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919aeb: call 0x9194a0 */
  esp -= 4; W32(esp, 0x919af0u); SPILL(); f_9194a0(); if (g_unwind) return; RELOAD();
/* 919af0: mov eax, dword ptr [ebx + edi*4] */
  eax = R32((uint32_t)(ebx + edi*4));
/* 919af3: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 919af6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 919af7: push 0xaf2b1c */
  { uint32_t v = 0xaf2b1cu; esp -= 4; W32(esp, v); }
/* 919afc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919afd: call 0x9193b0 */
  esp -= 4; W32(esp, 0x919b02u); SPILL(); f_9193b0(); if (g_unwind) return; RELOAD();
/* 919b02: mov ecx, dword ptr [ebx + edi*4] */
  ecx = R32((uint32_t)(ebx + edi*4));
/* 919b05: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 919b08: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 919b09: push 0xaf2b14 */
  { uint32_t v = 0xaf2b14u; esp -= 4; W32(esp, v); }
/* 919b0e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919b0f: call 0x9193b0 */
  esp -= 4; W32(esp, 0x919b14u); SPILL(); f_9193b0(); if (g_unwind) return; RELOAD();
/* 919b14: mov edx, dword ptr [ebx + edi*4] */
  edx = R32((uint32_t)(ebx + edi*4));
/* 919b17: add edx, 0x30 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 919b1a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 919b1b: push 0xaf2b0c */
  { uint32_t v = 0xaf2b0cu; esp -= 4; W32(esp, v); }
/* 919b20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919b21: call 0x9193b0 */
  esp -= 4; W32(esp, 0x919b26u); SPILL(); f_9193b0(); if (g_unwind) return; RELOAD();
/* 919b26: mov eax, dword ptr [ebx + edi*4] */
  eax = R32((uint32_t)(ebx + edi*4));
/* 919b29: add eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 919b2c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 919b2d: push 0xaf2b04 */
  { uint32_t v = 0xaf2b04u; esp -= 4; W32(esp, v); }
/* 919b32: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919b33: call 0x9193b0 */
  esp -= 4; W32(esp, 0x919b38u); SPILL(); f_9193b0(); if (g_unwind) return; RELOAD();
/* 919b38: mov ecx, dword ptr [ebx + edi*4] */
  ecx = R32((uint32_t)(ebx + edi*4));
/* 919b3b: add esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 919b3e: add ecx, 0x50 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 919b41: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 919b42: push 0xaf2afc */
  { uint32_t v = 0xaf2afcu; esp -= 4; W32(esp, v); }
/* 919b47: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919b48: call 0x9193b0 */
  esp -= 4; W32(esp, 0x919b4du); SPILL(); f_9193b0(); if (g_unwind) return; RELOAD();
/* 919b4d: mov edx, dword ptr [ebx + edi*4] */
  edx = R32((uint32_t)(ebx + edi*4));
/* 919b50: add edx, 0x60 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 919b53: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 919b54: push 0xaf2af8 */
  { uint32_t v = 0xaf2af8u; esp -= 4; W32(esp, v); }
/* 919b59: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919b5a: call 0x9193b0 */
  esp -= 4; W32(esp, 0x919b5fu); SPILL(); f_9193b0(); if (g_unwind) return; RELOAD();
/* 919b5f: mov eax, dword ptr [ebx + edi*4] */
  eax = R32((uint32_t)(ebx + edi*4));
/* 919b62: add eax, 0x70 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 919b65: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 919b66: push 0xaf2af4 */
  { uint32_t v = 0xaf2af4u; esp -= 4; W32(esp, v); }
/* 919b6b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919b6c: call 0x9193b0 */
  esp -= 4; W32(esp, 0x919b71u); SPILL(); f_9193b0(); if (g_unwind) return; RELOAD();
/* 919b71: mov ecx, dword ptr [ebx + edi*4] */
  ecx = R32((uint32_t)(ebx + edi*4));
/* 919b74: add ecx, 0x80 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 919b7a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 919b7b: push 0xaf2af0 */
  { uint32_t v = 0xaf2af0u; esp -= 4; W32(esp, v); }
/* 919b80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919b81: call 0x9193b0 */
  esp -= 4; W32(esp, 0x919b86u); SPILL(); f_9193b0(); if (g_unwind) return; RELOAD();
/* 919b86: mov edx, dword ptr [ebx + edi*4] */
  edx = R32((uint32_t)(ebx + edi*4));
/* 919b89: add edx, 0x90 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x90u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 919b8f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 919b90: push 0xaf2aec */
  { uint32_t v = 0xaf2aecu; esp -= 4; W32(esp, v); }
/* 919b95: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919b96: call 0x9193b0 */
  esp -= 4; W32(esp, 0x919b9bu); SPILL(); f_9193b0(); if (g_unwind) return; RELOAD();
/* 919b9b: mov eax, dword ptr [ebx + edi*4] */
  eax = R32((uint32_t)(ebx + edi*4));
/* 919b9e: add eax, 0xa0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xa0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 919ba3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 919ba4: push 0xaf2ae4 */
  { uint32_t v = 0xaf2ae4u; esp -= 4; W32(esp, v); }
/* 919ba9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919baa: call 0x9193b0 */
  esp -= 4; W32(esp, 0x919bafu); SPILL(); f_9193b0(); if (g_unwind) return; RELOAD();
/* 919baf: mov ecx, dword ptr [ebx + edi*4] */
  ecx = R32((uint32_t)(ebx + edi*4));
/* 919bb2: add esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 919bb5: add ecx, 0xb0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xb0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 919bbb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 919bbc: push 0xaf2adc */
  { uint32_t v = 0xaf2adcu; esp -= 4; W32(esp, v); }
/* 919bc1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919bc2: call 0x9193b0 */
  esp -= 4; W32(esp, 0x919bc7u); SPILL(); f_9193b0(); if (g_unwind) return; RELOAD();
/* 919bc7: mov edx, dword ptr [ebx + edi*4] */
  edx = R32((uint32_t)(ebx + edi*4));
/* 919bca: add edx, 0xc0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xc0u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 919bd0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 919bd1: push 0xaf2ad4 */
  { uint32_t v = 0xaf2ad4u; esp -= 4; W32(esp, v); }
/* 919bd6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919bd7: call 0x9193b0 */
  esp -= 4; W32(esp, 0x919bdcu); SPILL(); f_9193b0(); if (g_unwind) return; RELOAD();
/* 919bdc: mov eax, dword ptr [ebx + edi*4] */
  eax = R32((uint32_t)(ebx + edi*4));
/* 919bdf: add eax, 0xe0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 919be4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 919be5: push 0xaf2ac4 */
  { uint32_t v = 0xaf2ac4u; esp -= 4; W32(esp, v); }
/* 919bea: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919beb: call 0x9193b0 */
  esp -= 4; W32(esp, 0x919bf0u); SPILL(); f_9193b0(); if (g_unwind) return; RELOAD();
/* 919bf0: mov eax, dword ptr [esp + 0x1f4] */
  eax = R32((uint32_t)(esp + 0x1f4u));
/* 919bf7: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 919bfa: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 919bfb: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 919bfd: jne 0x919ab0 */
  if (!zf) goto L_919ab0;
L_919c03: /* 919c03: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919c04: call 0x975cd0 */
  esp -= 4; W32(esp, 0x919c09u); SPILL(); f_975cd0(); if (g_unwind) return; RELOAD();
/* 919c09: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 919c0a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 919c0b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 919c0c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 919c0d: add esp, 0x110 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x110u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 919c13: ret  */
  esp += 4; SPILL(); return;
}

void f_919c20(void) {
  LOAD_REGS();
L_919c20: /* 919c20: mov eax, dword ptr [0xcf2ea4] */
  eax = R32((uint32_t)(0xcf2ea4u));
/* 919c25: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 919c28: sub esp, 0x108 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x108u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 919c2e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919c2f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 919c31: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 919c32: call 0x975180 */
  esp -= 4; W32(esp, 0x919c37u); SPILL(); f_975180(); if (g_unwind) return; RELOAD();
/* 919c37: mov esi, eax */
  esi = eax;
/* 919c39: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 919c3b: je 0x91a089 */
  if (zf) goto L_91a089;
L_919c41: /* 919c41: mov edx, dword ptr [0xcf2ea4] */
  edx = R32((uint32_t)(0xcf2ea4u));
/* 919c47: mov eax, dword ptr [edx + 0xc] */
  eax = R32((uint32_t)(edx + 0xcu));
/* 919c4a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 919c4b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 919c4c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 919c4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 919c4e: push 0xaf2d3c */
  { uint32_t v = 0xaf2d3cu; esp -= 4; W32(esp, v); }
/* 919c53: call dword ptr [0xcfb070] */
  esp -= 4; W32(esp, 0x919c59u); SPILL(); f_42d092(); if (g_unwind) return; /* MSVCR70!printf */ RELOAD();
/* 919c59: mov edi, dword ptr [esp + 0x128] */
  edi = R32((uint32_t)(esp + 0x128u));
/* 919c60: lea ecx, [edi + 8] */
  ecx = (uint32_t)(edi + 0x8u);
/* 919c63: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 919c64: push 0xaf2ca4 */
  { uint32_t v = 0xaf2ca4u; esp -= 4; W32(esp, v); }
/* 919c69: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919c6a: call 0x919690 */
  esp -= 4; W32(esp, 0x919c6fu); SPILL(); f_919690(); if (g_unwind) return; RELOAD();
/* 919c6f: lea edx, [edi + 4] */
  edx = (uint32_t)(edi + 0x4u);
/* 919c72: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 919c73: push 0xaf2c9c */
  { uint32_t v = 0xaf2c9cu; esp -= 4; W32(esp, v); }
/* 919c78: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919c79: call 0x919690 */
  esp -= 4; W32(esp, 0x919c7eu); SPILL(); f_919690(); if (g_unwind) return; RELOAD();
/* 919c7e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 919c7f: push 0xaf2c90 */
  { uint32_t v = 0xaf2c90u; esp -= 4; W32(esp, v); }
/* 919c84: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919c85: call 0x919690 */
  esp -= 4; W32(esp, 0x919c8au); SPILL(); f_919690(); if (g_unwind) return; RELOAD();
/* 919c8a: add edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 919c8d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 919c8e: push 0xaf2c80 */
  { uint32_t v = 0xaf2c80u; esp -= 4; W32(esp, v); }
/* 919c93: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919c94: call 0x9196f0 */
  esp -= 4; W32(esp, 0x919c99u); SPILL(); f_9196f0(); if (g_unwind) return; RELOAD();
/* 919c99: mov ebx, dword ptr [esp + 0x154] */
  ebx = R32((uint32_t)(esp + 0x154u));
/* 919ca0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 919ca1: push 0xaf2c70 */
  { uint32_t v = 0xaf2c70u; esp -= 4; W32(esp, v); }
/* 919ca6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919ca7: call 0x9196f0 */
  esp -= 4; W32(esp, 0x919cacu); SPILL(); f_9196f0(); if (g_unwind) return; RELOAD();
/* 919cac: add esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 919caf: lea eax, [ebx + 4] */
  eax = (uint32_t)(ebx + 0x4u);
/* 919cb2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 919cb3: push 0xaf2c60 */
  { uint32_t v = 0xaf2c60u; esp -= 4; W32(esp, v); }
/* 919cb8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919cb9: call 0x9196f0 */
  esp -= 4; W32(esp, 0x919cbeu); SPILL(); f_9196f0(); if (g_unwind) return; RELOAD();
/* 919cbe: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 919cc1: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 919cc3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 919cc4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 919cc5: push 0xaf2c40 */
  { uint32_t v = 0xaf2c40u; esp -= 4; W32(esp, v); }
/* 919cca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919ccb: call 0x919510 */
  esp -= 4; W32(esp, 0x919cd0u); SPILL(); f_919510(); if (g_unwind) return; RELOAD();
/* 919cd0: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 919cd3: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 919cd5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 919cd6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 919cd7: push 0xaf2c20 */
  { uint32_t v = 0xaf2c20u; esp -= 4; W32(esp, v); }
/* 919cdc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919cdd: call 0x919510 */
  esp -= 4; W32(esp, 0x919ce2u); SPILL(); f_919510(); if (g_unwind) return; RELOAD();
/* 919ce2: mov edx, dword ptr [ebx + 0x10] */
  edx = R32((uint32_t)(ebx + 0x10u));
/* 919ce5: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 919ce7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 919ce8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 919ce9: push 0xaf2c04 */
  { uint32_t v = 0xaf2c04u; esp -= 4; W32(esp, v); }
/* 919cee: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919cef: call 0x919510 */
  esp -= 4; W32(esp, 0x919cf4u); SPILL(); f_919510(); if (g_unwind) return; RELOAD();
/* 919cf4: lea edi, [ebx + 0x14] */
  edi = (uint32_t)(ebx + 0x14u);
/* 919cf7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 919cf8: push 0xaf2bec */
  { uint32_t v = 0xaf2becu; esp -= 4; W32(esp, v); }
/* 919cfd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919cfe: call 0x9196f0 */
  esp -= 4; W32(esp, 0x919d03u); SPILL(); f_9196f0(); if (g_unwind) return; RELOAD();
/* 919d03: add esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 919d06: lea eax, [ebx + 0x18] */
  eax = (uint32_t)(ebx + 0x18u);
/* 919d09: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 919d0a: push 0xaf2bd4 */
  { uint32_t v = 0xaf2bd4u; esp -= 4; W32(esp, v); }
/* 919d0f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919d10: call 0x9196f0 */
  esp -= 4; W32(esp, 0x919d15u); SPILL(); f_9196f0(); if (g_unwind) return; RELOAD();
/* 919d15: lea ecx, [ebx + 0x1c] */
  ecx = (uint32_t)(ebx + 0x1cu);
/* 919d18: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 919d19: push 0xaf2bbc */
  { uint32_t v = 0xaf2bbcu; esp -= 4; W32(esp, v); }
/* 919d1e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919d1f: call 0x9196f0 */
  esp -= 4; W32(esp, 0x919d24u); SPILL(); f_9196f0(); if (g_unwind) return; RELOAD();
/* 919d24: lea eax, [ebx + 0x24] */
  eax = (uint32_t)(ebx + 0x24u);
/* 919d27: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 919d28: push 0xaf2bac */
  { uint32_t v = 0xaf2bacu; esp -= 4; W32(esp, v); }
/* 919d2d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919d2e: call 0x9196f0 */
  esp -= 4; W32(esp, 0x919d33u); SPILL(); f_9196f0(); if (g_unwind) return; RELOAD();
/* 919d33: lea edx, [ebx + 0x28] */
  edx = (uint32_t)(ebx + 0x28u);
/* 919d36: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 919d37: push 0xaf2b9c */
  { uint32_t v = 0xaf2b9cu; esp -= 4; W32(esp, v); }
/* 919d3c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919d3d: call 0x9196f0 */
  esp -= 4; W32(esp, 0x919d42u); SPILL(); f_9196f0(); if (g_unwind) return; RELOAD();
/* 919d42: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 919d45: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919d46: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 919d4b: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* 919d4f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 919d50: call 0x9755b0 */
  esp -= 4; W32(esp, 0x919d55u); SPILL(); f_9755b0(); if (g_unwind) return; RELOAD();
/* 919d55: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 919d57: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 919d58: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 919d5b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 919d5d: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 919d60: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 919d62: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 919d6a: je 0x919e4b */
  if (zf) goto L_919e4b;
L_919d70: /* 919d70: mov dword ptr [esp + 0x10], 0x1e00 */
  W32((uint32_t)(esp + 0x10u), 0x1e00u);
L_919d78: /* 919d78: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 919d7c: mov ebp, 4 */
  ebp = 0x4u;
L_919d81: /* 919d81: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919d82: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 919d87: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 919d8b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 919d8c: call 0x9755b0 */
  esp -= 4; W32(esp, 0x919d91u); SPILL(); f_9755b0(); if (g_unwind) return; RELOAD();
/* 919d91: mov eax, dword ptr [ebx + 0x2c] */
  eax = R32((uint32_t)(ebx + 0x2cu));
/* 919d94: lea edx, [edi + eax + 0x300] */
  edx = (uint32_t)(edi + eax + 0x300u);
/* 919d9b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 919d9c: lea ecx, [edi + eax] */
  ecx = (uint32_t)(edi + eax);
/* 919d9f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 919da0: lea edx, [edi + eax - 0x300] */
  edx = (uint32_t)(edi + eax + 0xfffffd00u);
/* 919da7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 919da8: lea ecx, [edi + eax - 0x600] */
  ecx = (uint32_t)(edi + eax + 0xfffffa00u);
/* 919daf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 919db0: lea edx, [edi + eax - 0x900] */
  edx = (uint32_t)(edi + eax + 0xfffff700u);
/* 919db7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 919db8: lea ecx, [edi + eax - 0xc00] */
  ecx = (uint32_t)(edi + eax + 0xfffff400u);
/* 919dbf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 919dc0: lea edx, [edi + eax - 0xf00] */
  edx = (uint32_t)(edi + eax + 0xfffff100u);
/* 919dc7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 919dc8: lea ecx, [edi + eax - 0x1200] */
  ecx = (uint32_t)(edi + eax + 0xffffee00u);
/* 919dcf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 919dd0: lea edx, [edi + eax - 0x1500] */
  edx = (uint32_t)(edi + eax + 0xffffeb00u);
/* 919dd7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 919dd8: lea ecx, [edi + eax - 0x1800] */
  ecx = (uint32_t)(edi + eax + 0xffffe800u);
/* 919ddf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 919de0: lea edx, [edi + eax - 0x1b00] */
  edx = (uint32_t)(edi + eax + 0xffffe500u);
/* 919de7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 919de8: lea eax, [edi + eax - 0x1e00] */
  eax = (uint32_t)(edi + eax + 0xffffe200u);
/* 919def: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 919df0: lea ecx, [esp + 0x48] */
  ecx = (uint32_t)(esp + 0x48u);
/* 919df4: push 0xaf2cf0 */
  { uint32_t v = 0xaf2cf0u; esp -= 4; W32(esp, v); }
/* 919df9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 919dfa: call dword ptr [0xcfb07c] */
  esp -= 4; W32(esp, 0x919e00u); SPILL(); f_42d29b(); if (g_unwind) return; /* MSVCR70!sscanf */ RELOAD();
/* 919e00: add esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 919e03: add edi, 0xc0 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xc0u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 919e09: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 919e0a: jne 0x919d81 */
  if (!zf) goto L_919d81;
L_919e10: /* 919e10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919e11: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 919e16: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* 919e1a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 919e1b: call 0x9755b0 */
  esp -= 4; W32(esp, 0x919e20u); SPILL(); f_9755b0(); if (g_unwind) return; RELOAD();
/* 919e20: mov eax, dword ptr [ebx + 0x14] */
  eax = R32((uint32_t)(ebx + 0x14u));
/* 919e23: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 919e27: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 919e2b: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 919e2c: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 919e2f: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 919e31: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 919e32: add ebp, 0x2400 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x2400u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 919e38: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 919e3b: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 919e3d: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 919e41: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 919e45: jne 0x919d78 */
  if (!zf) goto L_919d78;
L_919e4b: /* 919e4b: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 919e4e: mov ecx, dword ptr [ebx + 0x18] */
  ecx = R32((uint32_t)(ebx + 0x18u));
/* 919e51: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 919e52: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 919e53: push 0xaf2b84 */
  { uint32_t v = 0xaf2b84u; esp -= 4; W32(esp, v); }
/* 919e58: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919e59: call 0x9195a0 */
  esp -= 4; W32(esp, 0x919e5eu); SPILL(); f_9195a0(); if (g_unwind) return; RELOAD();
/* 919e5e: mov edx, dword ptr [ebx + 0x34] */
  edx = R32((uint32_t)(ebx + 0x34u));
/* 919e61: mov eax, dword ptr [ebx + 0x18] */
  eax = R32((uint32_t)(ebx + 0x18u));
/* 919e64: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 919e65: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 919e66: push 0xaf2b80 */
  { uint32_t v = 0xaf2b80u; esp -= 4; W32(esp, v); }
/* 919e6b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919e6c: call 0x9195a0 */
  esp -= 4; W32(esp, 0x919e71u); SPILL(); f_9195a0(); if (g_unwind) return; RELOAD();
/* 919e71: mov ecx, dword ptr [ebx + 0x38] */
  ecx = R32((uint32_t)(ebx + 0x38u));
/* 919e74: mov edx, dword ptr [ebx + 0x18] */
  edx = R32((uint32_t)(ebx + 0x18u));
/* 919e77: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 919e78: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 919e79: push 0xaf2b7c */
  { uint32_t v = 0xaf2b7cu; esp -= 4; W32(esp, v); }
/* 919e7e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919e7f: call 0x9195a0 */
  esp -= 4; W32(esp, 0x919e84u); SPILL(); f_9195a0(); if (g_unwind) return; RELOAD();
/* 919e84: mov eax, dword ptr [ebx + 0x3c] */
  eax = R32((uint32_t)(ebx + 0x3cu));
/* 919e87: mov ecx, dword ptr [ebx + 0x18] */
  ecx = R32((uint32_t)(ebx + 0x18u));
/* 919e8a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 919e8b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 919e8c: push 0xaf2b78 */
  { uint32_t v = 0xaf2b78u; esp -= 4; W32(esp, v); }
/* 919e91: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919e92: call 0x9195a0 */
  esp -= 4; W32(esp, 0x919e97u); SPILL(); f_9195a0(); if (g_unwind) return; RELOAD();
/* 919e97: mov edx, dword ptr [ebx + 0x48] */
  edx = R32((uint32_t)(ebx + 0x48u));
/* 919e9a: mov eax, dword ptr [ebx + 0x18] */
  eax = R32((uint32_t)(ebx + 0x18u));
/* 919e9d: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 919ea0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 919ea1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 919ea2: push 0xaf2b6c */
  { uint32_t v = 0xaf2b6cu; esp -= 4; W32(esp, v); }
/* 919ea7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919ea8: call 0x9195a0 */
  esp -= 4; W32(esp, 0x919eadu); SPILL(); f_9195a0(); if (g_unwind) return; RELOAD();
/* 919ead: mov ecx, dword ptr [ebx + 0x4c] */
  ecx = R32((uint32_t)(ebx + 0x4cu));
/* 919eb0: mov edx, dword ptr [ebx + 0x18] */
  edx = R32((uint32_t)(ebx + 0x18u));
/* 919eb3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 919eb4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 919eb5: push 0xaf2b64 */
  { uint32_t v = 0xaf2b64u; esp -= 4; W32(esp, v); }
/* 919eba: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919ebb: call 0x9195a0 */
  esp -= 4; W32(esp, 0x919ec0u); SPILL(); f_9195a0(); if (g_unwind) return; RELOAD();
/* 919ec0: mov eax, dword ptr [ebx + 0x50] */
  eax = R32((uint32_t)(ebx + 0x50u));
/* 919ec3: mov ecx, dword ptr [ebx + 0x24] */
  ecx = R32((uint32_t)(ebx + 0x24u));
/* 919ec6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 919ec7: lea edi, [ebx + 0x24] */
  edi = (uint32_t)(ebx + 0x24u);
/* 919eca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 919ecb: push 0xaf2b5c */
  { uint32_t v = 0xaf2b5cu; esp -= 4; W32(esp, v); }
/* 919ed0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919ed1: call 0x919510 */
  esp -= 4; W32(esp, 0x919ed6u); SPILL(); f_919510(); if (g_unwind) return; RELOAD();
/* 919ed6: mov edx, dword ptr [ebx + 0x54] */
  edx = R32((uint32_t)(ebx + 0x54u));
/* 919ed9: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 919edb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 919edc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 919edd: push 0xaf2b54 */
  { uint32_t v = 0xaf2b54u; esp -= 4; W32(esp, v); }
/* 919ee2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919ee3: call 0x919510 */
  esp -= 4; W32(esp, 0x919ee8u); SPILL(); f_919510(); if (g_unwind) return; RELOAD();
/* 919ee8: mov ecx, dword ptr [ebx + 0x58] */
  ecx = R32((uint32_t)(ebx + 0x58u));
/* 919eeb: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 919eed: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 919ef0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 919ef1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 919ef2: push 0xaf2b4c */
  { uint32_t v = 0xaf2b4cu; esp -= 4; W32(esp, v); }
/* 919ef7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919ef8: call 0x919590 */
  esp -= 4; W32(esp, 0x919efdu); SPILL(); f_919590(); if (g_unwind) return; RELOAD();
/* 919efd: mov ebp, dword ptr [esp + 0x138] */
  ebp = R32((uint32_t)(esp + 0x138u));
/* 919f04: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 919f05: push 0xaf2b40 */
  { uint32_t v = 0xaf2b40u; esp -= 4; W32(esp, v); }
/* 919f0a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919f0b: call 0x9196f0 */
  esp -= 4; W32(esp, 0x919f10u); SPILL(); f_9196f0(); if (g_unwind) return; RELOAD();
/* 919f10: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 919f13: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 919f16: xor edi, edi */
  edi = 0;
/* 919f18: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 919f1a: je 0x91a078 */
  if (zf) goto L_91a078;
L_919f20: /* 919f20: mov ebx, dword ptr [esp + 0x124] */
  ebx = R32((uint32_t)(esp + 0x124u));
L_919f27: /* 919f27: push 0xf0 */
  { uint32_t v = 0xf0u; esp -= 4; W32(esp, v); }
/* 919f2c: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x919f32u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 919f32: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919f33: mov dword ptr [ebx + edi*4], eax */
  W32((uint32_t)(ebx + edi*4), eax);
/* 919f36: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 919f3b: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* 919f3f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 919f40: call 0x9755b0 */
  esp -= 4; W32(esp, 0x919f45u); SPILL(); f_9755b0(); if (g_unwind) return; RELOAD();
/* 919f45: mov ecx, dword ptr [ebx + edi*4] */
  ecx = R32((uint32_t)(ebx + edi*4));
/* 919f48: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 919f4b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 919f4c: push 0xaf2b2c */
  { uint32_t v = 0xaf2b2cu; esp -= 4; W32(esp, v); }
/* 919f51: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919f52: call 0x919690 */
  esp -= 4; W32(esp, 0x919f57u); SPILL(); f_919690(); if (g_unwind) return; RELOAD();
/* 919f57: mov edx, dword ptr [ebx + edi*4] */
  edx = R32((uint32_t)(ebx + edi*4));
/* 919f5a: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 919f5d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 919f5e: push 0xaf2b24 */
  { uint32_t v = 0xaf2b24u; esp -= 4; W32(esp, v); }
/* 919f63: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919f64: call 0x9196f0 */
  esp -= 4; W32(esp, 0x919f69u); SPILL(); f_9196f0(); if (g_unwind) return; RELOAD();
/* 919f69: mov eax, dword ptr [ebx + edi*4] */
  eax = R32((uint32_t)(ebx + edi*4));
/* 919f6c: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 919f6f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 919f70: push 0xaf2b1c */
  { uint32_t v = 0xaf2b1cu; esp -= 4; W32(esp, v); }
/* 919f75: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919f76: call 0x919620 */
  esp -= 4; W32(esp, 0x919f7bu); SPILL(); f_919620(); if (g_unwind) return; RELOAD();
/* 919f7b: mov ecx, dword ptr [ebx + edi*4] */
  ecx = R32((uint32_t)(ebx + edi*4));
/* 919f7e: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 919f81: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 919f82: push 0xaf2b14 */
  { uint32_t v = 0xaf2b14u; esp -= 4; W32(esp, v); }
/* 919f87: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919f88: call 0x919620 */
  esp -= 4; W32(esp, 0x919f8du); SPILL(); f_919620(); if (g_unwind) return; RELOAD();
/* 919f8d: mov edx, dword ptr [ebx + edi*4] */
  edx = R32((uint32_t)(ebx + edi*4));
/* 919f90: add edx, 0x30 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 919f93: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 919f94: push 0xaf2b0c */
  { uint32_t v = 0xaf2b0cu; esp -= 4; W32(esp, v); }
/* 919f99: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919f9a: call 0x919620 */
  esp -= 4; W32(esp, 0x919f9fu); SPILL(); f_919620(); if (g_unwind) return; RELOAD();
/* 919f9f: mov eax, dword ptr [ebx + edi*4] */
  eax = R32((uint32_t)(ebx + edi*4));
/* 919fa2: add eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 919fa5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 919fa6: push 0xaf2b04 */
  { uint32_t v = 0xaf2b04u; esp -= 4; W32(esp, v); }
/* 919fab: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919fac: call 0x919620 */
  esp -= 4; W32(esp, 0x919fb1u); SPILL(); f_919620(); if (g_unwind) return; RELOAD();
/* 919fb1: mov ecx, dword ptr [ebx + edi*4] */
  ecx = R32((uint32_t)(ebx + edi*4));
/* 919fb4: add esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 919fb7: add ecx, 0x50 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 919fba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 919fbb: push 0xaf2afc */
  { uint32_t v = 0xaf2afcu; esp -= 4; W32(esp, v); }
/* 919fc0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919fc1: call 0x919620 */
  esp -= 4; W32(esp, 0x919fc6u); SPILL(); f_919620(); if (g_unwind) return; RELOAD();
/* 919fc6: mov edx, dword ptr [ebx + edi*4] */
  edx = R32((uint32_t)(ebx + edi*4));
/* 919fc9: add edx, 0x60 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 919fcc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 919fcd: push 0xaf2af8 */
  { uint32_t v = 0xaf2af8u; esp -= 4; W32(esp, v); }
/* 919fd2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919fd3: call 0x919620 */
  esp -= 4; W32(esp, 0x919fd8u); SPILL(); f_919620(); if (g_unwind) return; RELOAD();
/* 919fd8: mov eax, dword ptr [ebx + edi*4] */
  eax = R32((uint32_t)(ebx + edi*4));
/* 919fdb: add eax, 0x70 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 919fde: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 919fdf: push 0xaf2af4 */
  { uint32_t v = 0xaf2af4u; esp -= 4; W32(esp, v); }
/* 919fe4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919fe5: call 0x919620 */
  esp -= 4; W32(esp, 0x919feau); SPILL(); f_919620(); if (g_unwind) return; RELOAD();
/* 919fea: mov ecx, dword ptr [ebx + edi*4] */
  ecx = R32((uint32_t)(ebx + edi*4));
/* 919fed: add ecx, 0x80 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 919ff3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 919ff4: push 0xaf2af0 */
  { uint32_t v = 0xaf2af0u; esp -= 4; W32(esp, v); }
/* 919ff9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 919ffa: call 0x919620 */
  esp -= 4; W32(esp, 0x919fffu); SPILL(); f_919620(); if (g_unwind) return; RELOAD();
/* 919fff: mov edx, dword ptr [ebx + edi*4] */
  edx = R32((uint32_t)(ebx + edi*4));
/* 91a002: add edx, 0x90 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x90u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 91a008: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91a009: push 0xaf2aec */
  { uint32_t v = 0xaf2aecu; esp -= 4; W32(esp, v); }
/* 91a00e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91a00f: call 0x919620 */
  esp -= 4; W32(esp, 0x91a014u); SPILL(); f_919620(); if (g_unwind) return; RELOAD();
/* 91a014: mov eax, dword ptr [ebx + edi*4] */
  eax = R32((uint32_t)(ebx + edi*4));
/* 91a017: add eax, 0xa0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xa0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91a01c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91a01d: push 0xaf2ae4 */
  { uint32_t v = 0xaf2ae4u; esp -= 4; W32(esp, v); }
/* 91a022: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91a023: call 0x919620 */
  esp -= 4; W32(esp, 0x91a028u); SPILL(); f_919620(); if (g_unwind) return; RELOAD();
/* 91a028: mov ecx, dword ptr [ebx + edi*4] */
  ecx = R32((uint32_t)(ebx + edi*4));
/* 91a02b: add esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 91a02e: add ecx, 0xb0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xb0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91a034: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91a035: push 0xaf2adc */
  { uint32_t v = 0xaf2adcu; esp -= 4; W32(esp, v); }
/* 91a03a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91a03b: call 0x919620 */
  esp -= 4; W32(esp, 0x91a040u); SPILL(); f_919620(); if (g_unwind) return; RELOAD();
/* 91a040: mov edx, dword ptr [ebx + edi*4] */
  edx = R32((uint32_t)(ebx + edi*4));
/* 91a043: add edx, 0xc0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xc0u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 91a049: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91a04a: push 0xaf2ad4 */
  { uint32_t v = 0xaf2ad4u; esp -= 4; W32(esp, v); }
/* 91a04f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91a050: call 0x919620 */
  esp -= 4; W32(esp, 0x91a055u); SPILL(); f_919620(); if (g_unwind) return; RELOAD();
/* 91a055: mov eax, dword ptr [ebx + edi*4] */
  eax = R32((uint32_t)(ebx + edi*4));
/* 91a058: add eax, 0xe0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91a05d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91a05e: push 0xaf2ac4 */
  { uint32_t v = 0xaf2ac4u; esp -= 4; W32(esp, v); }
/* 91a063: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91a064: call 0x919620 */
  esp -= 4; W32(esp, 0x91a069u); SPILL(); f_919620(); if (g_unwind) return; RELOAD();
/* 91a069: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 91a06c: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 91a06f: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 91a070: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91a072: jne 0x919f27 */
  if (!zf) goto L_919f27;
L_91a078: /* 91a078: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91a079: call 0x975490 */
  esp -= 4; W32(esp, 0x91a07eu); SPILL(); f_975490(); if (g_unwind) return; RELOAD();
/* 91a07e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 91a07f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 91a080: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 91a081: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91a082: add esp, 0x108 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x108u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 91a088: ret  */
  esp += 4; SPILL(); return;
L_91a089: /* 91a089: mov ecx, dword ptr [0xcf2ea4] */
  ecx = R32((uint32_t)(0xcf2ea4u));
/* 91a08f: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 91a092: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91a093: push 0xaf2cd0 */
  { uint32_t v = 0xaf2cd0u; esp -= 4; W32(esp, v); }
/* 91a098: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 91a09a: call 0x971e40 */
  esp -= 4; W32(esp, 0x91a09fu); SPILL(); f_971e40(); if (g_unwind) return; RELOAD();
/* 91a09f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 91a0a2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91a0a3: add esp, 0x108 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x108u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 91a0a9: ret  */
  esp += 4; SPILL(); return;
}

void f_91a0b0(void) {
  LOAD_REGS();
L_91a0b0: /* 91a0b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 91a0b4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91a0b5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 91a0b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91a0b8: call 0x975e70 */
  esp -= 4; W32(esp, 0x91a0bdu); SPILL(); f_975e70(); if (g_unwind) return; RELOAD();
/* 91a0bd: mov ecx, dword ptr [0xcf2ea4] */
  ecx = R32((uint32_t)(0xcf2ea4u));
/* 91a0c3: mov edx, dword ptr [ecx + 0x1c] */
  edx = R32((uint32_t)(ecx + 0x1cu));
/* 91a0c6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91a0c7: push 0xaf2d68 */
  { uint32_t v = 0xaf2d68u; esp -= 4; W32(esp, v); }
/* 91a0cc: mov esi, eax */
  esi = eax;
/* 91a0ce: call dword ptr [0xcfb070] */
  esp -= 4; W32(esp, 0x91a0d4u); SPILL(); f_42d092(); if (g_unwind) return; /* MSVCR70!printf */ RELOAD();
/* 91a0d4: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 91a0d8: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 91a0dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91a0dd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91a0de: push 0xaf2d60 */
  { uint32_t v = 0xaf2d60u; esp -= 4; W32(esp, v); }
/* 91a0e3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91a0e4: call 0x919330 */
  esp -= 4; W32(esp, 0x91a0e9u); SPILL(); f_919330(); if (g_unwind) return; RELOAD();
/* 91a0e9: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 91a0ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91a0ed: call 0x975cd0 */
  esp -= 4; W32(esp, 0x91a0f2u); SPILL(); f_975cd0(); if (g_unwind) return; RELOAD();
/* 91a0f2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91a0f3: ret  */
  esp += 4; SPILL(); return;
}

void f_91a100(void) {
  LOAD_REGS();
L_91a100: /* 91a100: ret 4 */
  esp += 8; SPILL(); return;
}

void f_91a110(void) {
  LOAD_REGS();
L_91a110: /* 91a110: mov eax, dword ptr [0xcf2ea4] */
  eax = R32((uint32_t)(0xcf2ea4u));
/* 91a115: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91a118: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91a119: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91a11a: je 0x91a165 */
  if (zf) goto L_91a165;
L_91a11c: /* 91a11c: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* 91a11f: cmp ecx, dword ptr [eax + 0x24] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91a122: jne 0x91a165 */
  if (!zf) goto L_91a165;
L_91a124: /* 91a124: mov edx, dword ptr [esp + 0xb8] */
  edx = R32((uint32_t)(esp + 0xb8u));
/* 91a12b: mov eax, dword ptr [esp + 0xb4] */
  eax = R32((uint32_t)(esp + 0xb4u));
/* 91a132: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91a133: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91a134: sub esp, 0x4c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 91a137: mov edi, esp */
  edi = esp;
/* 91a139: mov ecx, 0x13 */
  ecx = 0x13u;
/* 91a13e: lea esi, [esp + 0xbc] */
  esi = (uint32_t)(esp + 0xbcu);
/* 91a145: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 91a147: sub esp, 0x5c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x5cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 91a14a: mov ecx, 0x17 */
  ecx = 0x17u;
/* 91a14f: lea esi, [esp + 0xbc] */
  esi = (uint32_t)(esp + 0xbcu);
/* 91a156: mov edi, esp */
  edi = esp;
/* 91a158: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 91a15a: call 0x919750 */
  esp -= 4; W32(esp, 0x91a15fu); SPILL(); f_919750(); if (g_unwind) return; RELOAD();
/* 91a15f: add esp, 0xb0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xb0u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_91a165: /* 91a165: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 91a166: xor eax, eax */
  eax = 0;
/* 91a168: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91a169: ret 0xb0 */
  esp += 180; SPILL(); return;
}

void f_91a170(void) {
  LOAD_REGS();
L_91a170: /* 91a170: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 91a171: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 91a172: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91a173: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 91a177: mov ecx, 0x1e */
  ecx = 0x1eu;
/* 91a17c: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* 91a17e: mov eax, 0x7fffffff */
  eax = 0x7fffffffu;
/* 91a183: sar eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
  }
/* 91a185: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 91a189: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 91a18b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91a18c: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 91a194: jle 0x91a1fa */
  if ((zf || sf != of)) goto L_91a1fa;
L_91a196: /* 91a196: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 91a19a: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 91a19e: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 91a1a2: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 91a1a6: sub esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 91a1a8: sub edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 91a1aa: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 91a1ac: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 91a1b0: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
L_91a1b4: /* 91a1b4: cmp dword ptr [esi + edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91a1b8: jne 0x91a1c0 */
  if (!zf) goto L_91a1c0;
L_91a1ba: /* 91a1ba: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 91a1bc: not ebx */
  ebx = ~ebx;
/* 91a1be: jmp 0x91a1e0 */
  goto L_91a1e0;
L_91a1c0: /* 91a1c0: and eax, dword ptr [edx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx)));
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 91a1c2: je 0x91a1fa */
  if (zf) goto L_91a1fa;
L_91a1c4: /* 91a1c4: mov esi, dword ptr [edi + edx] */
  esi = R32((uint32_t)(edi + edx));
/* 91a1c7: mov ecx, dword ptr [ecx + edx] */
  ecx = R32((uint32_t)(ecx + edx));
/* 91a1ca: mov ebx, ecx */
  ebx = ecx;
/* 91a1cc: mov ebp, esi */
  ebp = esi;
/* 91a1ce: not ebx */
  ebx = ~ebx;
/* 91a1d0: not ebp */
  ebp = ~ebp;
/* 91a1d2: and ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 91a1d4: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 91a1d8: and ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 91a1da: or ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 91a1dc: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
L_91a1e0: /* 91a1e0: and eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 91a1e2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 91a1e4: je 0x91a1fa */
  if (zf) goto L_91a1fa;
L_91a1e6: /* 91a1e6: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* 91a1ea: mov ebp, dword ptr [esp + 0x28] */
  ebp = R32((uint32_t)(esp + 0x28u));
/* 91a1ee: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 91a1ef: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 91a1f2: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91a1f4: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 91a1f8: jl 0x91a1b4 */
  if ((sf != of)) goto L_91a1b4;
L_91a1fa: /* 91a1fa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 91a1fb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91a1fc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 91a1fd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 91a1fe: ret  */
  esp += 4; SPILL(); return;
}

void f_91a200(void) {
  LOAD_REGS();
L_91a200: /* 91a200: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 91a201: mov ebp, esp */
  ebp = esp;
/* 91a203: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 91a206: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 91a207: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91a208: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91a209: mov esi, ecx */
  esi = ecx;
/* 91a20b: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 91a20e: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 91a211: mov eax, edi */
  eax = edi;
/* 91a213: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91a216: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 91a219: call 0x99cc00 */
  esp -= 4; W32(esp, 0x91a21eu); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 91a21e: mov eax, edi */
  eax = edi;
/* 91a220: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91a223: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 91a226: mov ebx, esp */
  ebx = esp;
/* 91a228: call 0x99cc00 */
  esp -= 4; W32(esp, 0x91a22du); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 91a22d: mov eax, edi */
  eax = edi;
/* 91a22f: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91a232: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 91a235: mov dword ptr [ebp - 4], esp */
  W32((uint32_t)(ebp + 0xfffffffcu), esp);
/* 91a238: call 0x99cc00 */
  esp -= 4; W32(esp, 0x91a23du); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 91a23d: mov eax, edi */
  eax = edi;
/* 91a23f: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91a242: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 91a245: mov dword ptr [ebp - 0x14], esp */
  W32((uint32_t)(ebp + 0xffffffecu), esp);
/* 91a248: call 0x99cc00 */
  esp -= 4; W32(esp, 0x91a24du); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 91a24d: mov eax, edi */
  eax = edi;
/* 91a24f: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91a252: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 91a255: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 91a258: call 0x99cc00 */
  esp -= 4; W32(esp, 0x91a25du); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 91a25d: mov eax, edi */
  eax = edi;
/* 91a25f: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91a262: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 91a265: mov dword ptr [ebp - 0xc], esp */
  W32((uint32_t)(ebp + 0xfffffff4u), esp);
/* 91a268: call 0x99cc00 */
  esp -= 4; W32(esp, 0x91a26du); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 91a26d: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 91a270: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 91a273: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 91a276: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 91a279: mov dword ptr [ebp - 8], esp */
  W32((uint32_t)(ebp + 0xfffffff8u), esp);
/* 91a27c: mov dword ptr [esi + 0x18], ecx */
  W32((uint32_t)(esi + 0x18u), ecx);
/* 91a27f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 91a282: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91a283: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 91a286: mov dword ptr [esi + 0x24], ecx */
  W32((uint32_t)(esi + 0x24u), ecx);
/* 91a289: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 91a28b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91a28c: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x91a28fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 91a28f: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 91a292: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91a293: mov ecx, esi */
  ecx = esi;
/* 91a295: call 0x91ab60 */
  esp -= 4; W32(esp, 0x91a29au); SPILL(); f_91ab60(); if (g_unwind) return; RELOAD();
/* 91a29a: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 91a29d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91a29e: mov ecx, esi */
  ecx = esi;
/* 91a2a0: call 0x91ab70 */
  esp -= 4; W32(esp, 0x91a2a5u); SPILL(); f_91ab70(); if (g_unwind) return; RELOAD();
/* 91a2a5: mov ecx, esi */
  ecx = esi;
/* 91a2a7: call 0x91ab80 */
  esp -= 4; W32(esp, 0x91a2acu); SPILL(); f_91ab80(); if (g_unwind) return; RELOAD();
/* 91a2ac: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91a2af: je 0x91a448 */
  if (zf) goto L_91a448;
L_91a2b5: /* 91a2b5: mov ecx, esi */
  ecx = esi;
/* 91a2b7: call 0x91abc0 */
  esp -= 4; W32(esp, 0x91a2bcu); SPILL(); f_91abc0(); if (g_unwind) return; RELOAD();
/* 91a2bc: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 91a2bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91a2c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 91a2c1: mov ecx, esi */
  ecx = esi;
/* 91a2c3: call 0x91ac00 */
  esp -= 4; W32(esp, 0x91a2c8u); SPILL(); f_91ac00(); if (g_unwind) return; RELOAD();
/* 91a2c8: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 91a2cb: mov edi, dword ptr [esi + 0x20] */
  edi = R32((uint32_t)(esi + 0x20u));
/* 91a2ce: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 91a2d1: mov edx, ecx */
  edx = ecx;
/* 91a2d3: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 91a2d6: xor eax, eax */
  eax = 0;
/* 91a2d8: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 91a2da: mov ecx, edx */
  ecx = edx;
/* 91a2dc: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 91a2df: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 91a2e1: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 91a2e4: mov edi, dword ptr [esi + 0x40] */
  edi = R32((uint32_t)(esi + 0x40u));
/* 91a2e7: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 91a2ea: mov edx, ecx */
  edx = ecx;
/* 91a2ec: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 91a2ef: xor eax, eax */
  eax = 0;
/* 91a2f1: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 91a2f3: mov ecx, edx */
  ecx = edx;
/* 91a2f5: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 91a2f8: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 91a2fb: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 91a2fd: xor edi, edi */
  edi = 0;
/* 91a2ff: xor eax, eax */
  eax = 0;
/* 91a301: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91a303: mov dword ptr [ebp + 0x20], eax */
  W32((uint32_t)(ebp + 0x20u), eax);
/* 91a306: mov dword ptr [ebp + 0x14], edi */
  W32((uint32_t)(ebp + 0x14u), edi);
/* 91a309: mov ecx, 1 */
  ecx = 0x1u;
/* 91a30e: je 0x91a44b */
  if (zf) goto L_91a44b;
L_91a314: /* 91a314: jmp 0x91a320 */
  goto L_91a320;
L_91a316: /* 91a316: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 91a319: xor edi, edi */
  edi = 0;
/* 91a31b: nop  */
/* 91a31c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_91a320: /* 91a320: cmp dword ptr [ebp + 0x14], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91a323: jne 0x91a44b */
  if (!zf) goto L_91a44b;
L_91a329: /* 91a329: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91a32b: je 0x91a44b */
  if (zf) goto L_91a44b;
L_91a331: /* 91a331: call 0x9149a0 */
  esp -= 4; W32(esp, 0x91a336u); SPILL(); f_9149a0(); if (g_unwind) return; RELOAD();
/* 91a336: cmp dword ptr [esi + 4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91a339: mov dword ptr [ebp + 0x10], edi */
  W32((uint32_t)(ebp + 0x10u), edi);
/* 91a33c: jle 0x91a392 */
  if ((zf || sf != of)) goto L_91a392;
L_91a33e: /* 91a33e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 91a341: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 91a344: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 91a346: mov edx, ebx */
  edx = ebx;
/* 91a348: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 91a34b: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 91a34e: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 91a350: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 91a353: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 91a355: jmp 0x91a360 */
  goto L_91a360;
L_91a357: /* 91a357: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 91a35a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_91a360: /* 91a360: mov edx, dword ptr [edx + eax] */
  edx = R32((uint32_t)(edx + eax));
/* 91a363: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 91a365: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91a368: lea edx, [edx + edi*2] */
  edx = (uint32_t)(edx + edi*2);
/* 91a36b: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 91a36d: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 91a370: mov edx, dword ptr [edx + eax] */
  edx = R32((uint32_t)(edx + eax));
/* 91a373: mov edi, dword ptr [ecx + eax] */
  edi = R32((uint32_t)(ecx + eax));
/* 91a376: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91a379: lea edx, [edx + edi*2] */
  edx = (uint32_t)(edx + edi*2);
/* 91a37c: mov dword ptr [ecx + eax], edx */
  W32((uint32_t)(ecx + eax), edx);
/* 91a37f: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 91a382: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 91a385: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 91a386: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91a389: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91a38b: mov dword ptr [ebp + 0x10], edx */
  W32((uint32_t)(ebp + 0x10u), edx);
/* 91a38e: jl 0x91a357 */
  if ((sf != of)) goto L_91a357;
L_91a390: /* 91a390: xor edi, edi */
  edi = 0;
L_91a392: /* 91a392: mov edx, dword ptr [ebp - 8] */
  edx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 91a395: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 91a398: mov dword ptr [ebp + 0x1c], edi */
  W32((uint32_t)(ebp + 0x1cu), edi);
/* 91a39b: mov edi, dword ptr [ebp - 4] */
  edi = R32((uint32_t)(ebp + 0xfffffffcu));
/* 91a39e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91a39f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 91a3a0: lea eax, [ebp + 0x1c] */
  eax = (uint32_t)(ebp + 0x1cu);
/* 91a3a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91a3a4: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* 91a3a7: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 91a3aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91a3ab: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91a3ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91a3ad: mov ecx, esi */
  ecx = esi;
/* 91a3af: call 0x91ac80 */
  esp -= 4; W32(esp, 0x91a3b4u); SPILL(); f_91ac80(); if (g_unwind) return; RELOAD();
/* 91a3b4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 91a3b7: mov edx, dword ptr [ebp - 0xc] */
  edx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 91a3ba: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 91a3bd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91a3be: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 91a3c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91a3c2: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 91a3c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91a3c6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91a3c7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91a3c8: mov ecx, esi */
  ecx = esi;
/* 91a3ca: call 0x91a6f0 */
  esp -= 4; W32(esp, 0x91a3cfu); SPILL(); f_91a6f0(); if (g_unwind) return; RELOAD();
/* 91a3cf: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 91a3d2: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 91a3d5: mov edx, dword ptr [ebp - 8] */
  edx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 91a3d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91a3d9: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* 91a3dc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91a3dd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91a3de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91a3df: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91a3e0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 91a3e1: mov ecx, esi */
  ecx = esi;
/* 91a3e3: call 0x91ae20 */
  esp -= 4; W32(esp, 0x91a3e8u); SPILL(); f_91ae20(); if (g_unwind) return; RELOAD();
/* 91a3e8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 91a3ea: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 91a3ed: je 0x91a425 */
  if (zf) goto L_91a425;
L_91a3ef: /* 91a3ef: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 91a3f2: mov edx, dword ptr [ebp + 0x20] */
  edx = R32((uint32_t)(ebp + 0x20u));
/* 91a3f5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 91a3f8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91a3f9: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 91a3fc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91a3fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91a3fe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91a3ff: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91a400: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 91a401: call 0x91a170 */
  esp -= 4; W32(esp, 0x91a406u); SPILL(); f_91a170(); if (g_unwind) return; RELOAD();
/* 91a406: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 91a409: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 91a40b: mov dword ptr [ebp + 0x14], eax */
  W32((uint32_t)(ebp + 0x14u), eax);
/* 91a40e: je 0x91a425 */
  if (zf) goto L_91a425;
L_91a410: /* 91a410: mov edx, dword ptr [ebp - 0x10] */
  edx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 91a413: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 91a416: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91a417: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91a418: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91a419: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 91a41a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91a41b: mov ecx, esi */
  ecx = esi;
/* 91a41d: call 0x91ad00 */
  esp -= 4; W32(esp, 0x91a422u); SPILL(); f_91ad00(); if (g_unwind) return; RELOAD();
/* 91a422: mov dword ptr [ebp + 0x14], eax */
  W32((uint32_t)(ebp + 0x14u), eax);
L_91a425: /* 91a425: call 0x9149c0 */
  esp -= 4; W32(esp, 0x91a42au); SPILL(); f_9149c0(); if (g_unwind) return; RELOAD();
/* 91a42a: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 91a42d: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 91a430: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 91a431: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91a433: mov dword ptr [ebp + 0x20], eax */
  W32((uint32_t)(ebp + 0x20u), eax);
/* 91a436: jne 0x91a316 */
  if (!zf) goto L_91a316;
L_91a43c: /* 91a43c: lea esp, [ebp - 0x28] */
  esp = (uint32_t)(ebp + 0xffffffd8u);
/* 91a43f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 91a440: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91a441: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 91a442: mov esp, ebp */
  esp = ebp;
/* 91a444: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 91a445: ret 0x1c */
  esp += 32; SPILL(); return;
L_91a448: /* 91a448: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
L_91a44b: /* 91a44b: lea esp, [ebp - 0x28] */
  esp = (uint32_t)(ebp + 0xffffffd8u);
/* 91a44e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 91a44f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91a450: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 91a451: mov esp, ebp */
  esp = ebp;
/* 91a453: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 91a454: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_91a460(void) {
  LOAD_REGS();
L_91a460: /* 91a460: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91a461: mov esi, ecx */
  esi = ecx;
/* 91a463: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 91a467: lea eax, [ecx + 3] */
  eax = (uint32_t)(ecx + 0x3u);
/* 91a46a: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91a46d: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 91a470: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 91a473: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 91a476: mov eax, ecx */
  eax = ecx;
/* 91a478: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91a479: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91a47a: mov edi, 0xc */
  edi = 0xcu;
/* 91a47f: idiv edi */
  { int32_t d = (int32_t)edi; if (!d) d = (int32_t)guest_divzero(0x91a47f);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 91a481: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 91a484: mov eax, ecx */
  eax = ecx;
/* 91a486: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 91a488: je 0x91a48e */
  if (zf) goto L_91a48e;
L_91a48a: /* 91a48a: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 91a48c: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_91a48e: /* 91a48e: and eax, 0x8000000f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000000fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 91a493: jns 0x91a49a */
  if (!sf) goto L_91a49a;
L_91a495: /* 91a495: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 91a496: or eax, 0xfffffff0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 91a499: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  zf = (r) == 0;
  eax = r;
  }
L_91a49a: /* 91a49a: jne 0x91a4a7 */
  if (!zf) goto L_91a4a7;
L_91a49c: /* 91a49c: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 91a49e: je 0x91a4cf */
  if (zf) goto L_91a4cf;
L_91a4a0: /* 91a4a0: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 91a4a2: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91a4a5: jmp 0x91a4cf */
  goto L_91a4cf;
L_91a4a7: /* 91a4a7: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 91a4a9: mov eax, ecx */
  eax = ecx;
/* 91a4ab: je 0x91a4bb */
  if (zf) goto L_91a4bb;
L_91a4ad: /* 91a4ad: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 91a4af: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91a4b2: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 91a4b4: je 0x91a4bb */
  if (zf) goto L_91a4bb;
L_91a4b6: /* 91a4b6: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 91a4b8: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_91a4bb: /* 91a4bb: and ecx, 0x8000000f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8000000fu);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91a4c1: jns 0x91a4c8 */
  if (!sf) goto L_91a4c8;
L_91a4c3: /* 91a4c3: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91a4c4: or ecx, 0xfffffff0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91a4c7: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91a4c8: /* 91a4c8: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 91a4ca: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91a4cd: mov ecx, eax */
  ecx = eax;
L_91a4cf: /* 91a4cf: lea eax, [ecx*4] */
  eax = (uint32_t)(ecx*4);
/* 91a4d6: mov edx, eax */
  edx = eax;
/* 91a4d8: and edx, 0x3f */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  edx = r;
  }
/* 91a4db: mov dword ptr [esi + 0x14], ecx */
  W32((uint32_t)(esi + 0x14u), ecx);
/* 91a4de: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 91a4e0: je 0x91a4eb */
  if (zf) goto L_91a4eb;
L_91a4e2: /* 91a4e2: lea eax, [ecx*4 + 0x40] */
  eax = (uint32_t)(ecx*4 + 0x40u);
/* 91a4e9: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
L_91a4eb: /* 91a4eb: add eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91a4ee: push 0xaf2de0 */
  { uint32_t v = 0xaf2de0u; esp -= 4; W32(esp, v); }
/* 91a4f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91a4f4: call 0x914a10 */
  esp -= 4; W32(esp, 0x91a4f9u); SPILL(); f_914a10(); if (g_unwind) return; RELOAD();
/* 91a4f9: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 91a4fc: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 91a4ff: lea eax, [ecx*4] */
  eax = (uint32_t)(ecx*4);
/* 91a506: mov edx, eax */
  edx = eax;
/* 91a508: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 91a50b: and edx, 0x3f */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  edx = r;
  }
/* 91a50e: je 0x91a519 */
  if (zf) goto L_91a519;
L_91a510: /* 91a510: lea eax, [ecx*4 + 0x40] */
  eax = (uint32_t)(ecx*4 + 0x40u);
/* 91a517: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
L_91a519: /* 91a519: add eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91a51c: push 0xaf2ddc */
  { uint32_t v = 0xaf2ddcu; esp -= 4; W32(esp, v); }
/* 91a521: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91a522: call 0x914a10 */
  esp -= 4; W32(esp, 0x91a527u); SPILL(); f_914a10(); if (g_unwind) return; RELOAD();
/* 91a527: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 91a52a: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* 91a52d: lea eax, [ecx*4] */
  eax = (uint32_t)(ecx*4);
/* 91a534: mov edx, eax */
  edx = eax;
/* 91a536: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 91a539: and edx, 0x3f */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  edx = r;
  }
/* 91a53c: je 0x91a547 */
  if (zf) goto L_91a547;
L_91a53e: /* 91a53e: lea eax, [ecx*4 + 0x40] */
  eax = (uint32_t)(ecx*4 + 0x40u);
/* 91a545: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
L_91a547: /* 91a547: add eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91a54a: push 0xaf2dd8 */
  { uint32_t v = 0xaf2dd8u; esp -= 4; W32(esp, v); }
/* 91a54f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91a550: call 0x914a10 */
  esp -= 4; W32(esp, 0x91a555u); SPILL(); f_914a10(); if (g_unwind) return; RELOAD();
/* 91a555: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 91a558: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 91a55b: lea eax, [ecx*4] */
  eax = (uint32_t)(ecx*4);
/* 91a562: mov edx, eax */
  edx = eax;
/* 91a564: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 91a567: and edx, 0x3f */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  edx = r;
  }
/* 91a56a: je 0x91a575 */
  if (zf) goto L_91a575;
L_91a56c: /* 91a56c: lea eax, [ecx*4 + 0x40] */
  eax = (uint32_t)(ecx*4 + 0x40u);
/* 91a573: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
L_91a575: /* 91a575: add eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91a578: push 0xaf2dd0 */
  { uint32_t v = 0xaf2dd0u; esp -= 4; W32(esp, v); }
/* 91a57d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91a57e: call 0x914a10 */
  esp -= 4; W32(esp, 0x91a583u); SPILL(); f_914a10(); if (g_unwind) return; RELOAD();
/* 91a583: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 91a586: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 91a589: lea eax, [ecx*4] */
  eax = (uint32_t)(ecx*4);
/* 91a590: mov edx, eax */
  edx = eax;
/* 91a592: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 91a595: and edx, 0x3f */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  edx = r;
  }
/* 91a598: je 0x91a5a3 */
  if (zf) goto L_91a5a3;
L_91a59a: /* 91a59a: lea eax, [ecx*4 + 0x40] */
  eax = (uint32_t)(ecx*4 + 0x40u);
/* 91a5a1: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
L_91a5a3: /* 91a5a3: add eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91a5a6: push 0xaf2dc8 */
  { uint32_t v = 0xaf2dc8u; esp -= 4; W32(esp, v); }
/* 91a5ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91a5ac: call 0x914a10 */
  esp -= 4; W32(esp, 0x91a5b1u); SPILL(); f_914a10(); if (g_unwind) return; RELOAD();
/* 91a5b1: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 91a5b4: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* 91a5b7: lea eax, [ecx*4] */
  eax = (uint32_t)(ecx*4);
/* 91a5be: mov edx, eax */
  edx = eax;
/* 91a5c0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 91a5c3: and edx, 0x3f */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  edx = r;
  }
/* 91a5c6: je 0x91a5d1 */
  if (zf) goto L_91a5d1;
L_91a5c8: /* 91a5c8: lea eax, [ecx*4 + 0x40] */
  eax = (uint32_t)(ecx*4 + 0x40u);
/* 91a5cf: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
L_91a5d1: /* 91a5d1: add eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91a5d4: push 0xaf2db8 */
  { uint32_t v = 0xaf2db8u; esp -= 4; W32(esp, v); }
/* 91a5d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91a5da: call 0x914a10 */
  esp -= 4; W32(esp, 0x91a5dfu); SPILL(); f_914a10(); if (g_unwind) return; RELOAD();
/* 91a5df: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 91a5e2: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* 91a5e5: lea eax, [ecx*4] */
  eax = (uint32_t)(ecx*4);
/* 91a5ec: mov edx, eax */
  edx = eax;
/* 91a5ee: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 91a5f1: and edx, 0x3f */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  edx = r;
  }
/* 91a5f4: je 0x91a5ff */
  if (zf) goto L_91a5ff;
L_91a5f6: /* 91a5f6: lea eax, [ecx*4 + 0x40] */
  eax = (uint32_t)(ecx*4 + 0x40u);
/* 91a5fd: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
L_91a5ff: /* 91a5ff: add eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91a602: push 0xaf2da8 */
  { uint32_t v = 0xaf2da8u; esp -= 4; W32(esp, v); }
/* 91a607: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91a608: call 0x914a10 */
  esp -= 4; W32(esp, 0x91a60du); SPILL(); f_914a10(); if (g_unwind) return; RELOAD();
/* 91a60d: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 91a610: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91a613: imul eax, eax */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(eax);
  eax = (uint32_t)r;
  }
/* 91a616: lea edx, [eax*4] */
  edx = (uint32_t)(eax*4);
/* 91a61d: mov ecx, edx */
  ecx = edx;
/* 91a61f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 91a622: and ecx, 0x3f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  ecx = r;
  }
/* 91a625: jne 0x91a62b */
  if (!zf) goto L_91a62b;
L_91a627: /* 91a627: mov eax, edx */
  eax = edx;
/* 91a629: jmp 0x91a634 */
  goto L_91a634;
L_91a62b: /* 91a62b: lea eax, [eax*4 + 0x40] */
  eax = (uint32_t)(eax*4 + 0x40u);
/* 91a632: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
L_91a634: /* 91a634: add eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91a637: push 0xaf2da0 */
  { uint32_t v = 0xaf2da0u; esp -= 4; W32(esp, v); }
/* 91a63c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91a63d: call 0x914a10 */
  esp -= 4; W32(esp, 0x91a642u); SPILL(); f_914a10(); if (g_unwind) return; RELOAD();
/* 91a642: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 91a645: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* 91a648: lea eax, [ecx*4] */
  eax = (uint32_t)(ecx*4);
/* 91a64f: mov edx, eax */
  edx = eax;
/* 91a651: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 91a654: and edx, 0x3f */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  edx = r;
  }
/* 91a657: je 0x91a662 */
  if (zf) goto L_91a662;
L_91a659: /* 91a659: lea eax, [ecx*4 + 0x40] */
  eax = (uint32_t)(ecx*4 + 0x40u);
/* 91a660: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
L_91a662: /* 91a662: add eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91a665: push 0xaf2d98 */
  { uint32_t v = 0xaf2d98u; esp -= 4; W32(esp, v); }
/* 91a66a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91a66b: call 0x914a10 */
  esp -= 4; W32(esp, 0x91a670u); SPILL(); f_914a10(); if (g_unwind) return; RELOAD();
/* 91a670: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 91a673: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 91a676: add ecx, 0x3f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91a679: add edx, 0x3f */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 91a67c: and ecx, 0xffffffc0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffc0u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 91a67f: and edx, 0xffffffc0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffc0u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91a682: mov dword ptr [esi + 0x20], ecx */
  W32((uint32_t)(esi + 0x20u), ecx);
/* 91a685: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 91a688: mov dword ptr [esi + 0x2c], edx */
  W32((uint32_t)(esi + 0x2cu), edx);
/* 91a68b: mov edx, dword ptr [esi + 0x34] */
  edx = R32((uint32_t)(esi + 0x34u));
/* 91a68e: add ecx, 0x3f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91a691: add edx, 0x3f */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 91a694: and ecx, 0xffffffc0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffc0u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 91a697: and edx, 0xffffffc0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffc0u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91a69a: mov dword ptr [esi + 0x30], ecx */
  W32((uint32_t)(esi + 0x30u), ecx);
/* 91a69d: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 91a6a0: mov dword ptr [esi + 0x34], edx */
  W32((uint32_t)(esi + 0x34u), edx);
/* 91a6a3: mov edx, dword ptr [esi + 0x3c] */
  edx = R32((uint32_t)(esi + 0x3cu));
/* 91a6a6: add ecx, 0x3f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91a6a9: add edx, 0x3f */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 91a6ac: and ecx, 0xffffffc0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffc0u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 91a6af: and edx, 0xffffffc0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffc0u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91a6b2: mov dword ptr [esi + 0x38], ecx */
  W32((uint32_t)(esi + 0x38u), ecx);
/* 91a6b5: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 91a6b8: mov dword ptr [esi + 0x3c], edx */
  W32((uint32_t)(esi + 0x3cu), edx);
/* 91a6bb: mov edx, dword ptr [esi + 0x44] */
  edx = R32((uint32_t)(esi + 0x44u));
/* 91a6be: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 91a6c1: add ecx, 0x3f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91a6c4: add edx, 0x3f */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 91a6c7: add eax, 0x3f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91a6ca: and ecx, 0xffffffc0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffc0u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 91a6cd: and edx, 0xffffffc0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffc0u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91a6d0: and eax, 0xffffffc0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffc0u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 91a6d3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 91a6d4: mov dword ptr [esi + 0x40], ecx */
  W32((uint32_t)(esi + 0x40u), ecx);
/* 91a6d7: mov dword ptr [esi + 0x44], edx */
  W32((uint32_t)(esi + 0x44u), edx);
/* 91a6da: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 91a6dd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91a6de: ret 4 */
  esp += 8; SPILL(); return;
}

void f_91a6f0(void) {
  LOAD_REGS();
L_91a6f0: /* 91a6f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 91a6f1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 91a6f2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91a6f3: mov esi, ecx */
  esi = ecx;
/* 91a6f5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 91a6f8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91a6f9: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 91a6fd: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91a6ff: jne 0x91a765 */
  if (!zf) goto L_91a765;
L_91a701: /* 91a701: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 91a704: mov ecx, dword ptr [esi + 0x24] */
  ecx = R32((uint32_t)(esi + 0x24u));
/* 91a707: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 91a709: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91a70a: mov edx, dword ptr [esi + 0x30] */
  edx = R32((uint32_t)(esi + 0x30u));
/* 91a70d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91a70e: call dword ptr [eax + 0x14] */
  { uint32_t t = R32((uint32_t)(eax + 0x14u)); esp -= 4; W32(esp, 0x91a711u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 91a711: xor ecx, ecx */
  ecx = 0;
/* 91a713: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 91a715: jle 0x91a737 */
  if ((zf || sf != of)) goto L_91a737;
L_91a717: /* 91a717: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 91a71b: nop  */
/* 91a71c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_91a720: /* 91a720: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 91a723: mov ebx, dword ptr [esi + 0x40] */
  ebx = R32((uint32_t)(esi + 0x40u));
/* 91a726: mov ebp, dword ptr [esi + 0x2c] */
  ebp = R32((uint32_t)(esi + 0x2cu));
/* 91a729: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 91a72c: mov ebx, dword ptr [eax + ebx] */
  ebx = R32((uint32_t)(eax + ebx));
/* 91a72f: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 91a730: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91a732: mov dword ptr [eax + ebp], ebx */
  W32((uint32_t)(eax + ebp), ebx);
/* 91a735: jl 0x91a720 */
  if ((sf != of)) goto L_91a720;
L_91a737: /* 91a737: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 91a73a: xor eax, eax */
  eax = 0;
/* 91a73c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 91a73e: jle 0x91a7f9 */
  if ((zf || sf != of)) goto L_91a7f9;
L_91a744: /* 91a744: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
L_91a748: /* 91a748: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 91a74b: fld dword ptr [ecx + eax*4] */
  { double v = F32((uint32_t)(ecx + eax*4)); FPUSH(v); }
/* 91a74e: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 91a751: fsub dword ptr [edx + eax*4] */
  ST0 = ST0 - (F32((uint32_t)(edx + eax*4)));
/* 91a754: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 91a755: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 91a757: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 91a75a: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91a75c: jl 0x91a748 */
  if ((sf != of)) goto L_91a748;
L_91a75e: /* 91a75e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 91a75f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91a760: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 91a761: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 91a762: ret 0x14 */
  esp += 24; SPILL(); return;
L_91a765: /* 91a765: xor eax, eax */
  eax = 0;
/* 91a767: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 91a769: jne 0x91a7a9 */
  if (!zf) goto L_91a7a9;
L_91a76b: /* 91a76b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 91a76d: jle 0x91a784 */
  if ((zf || sf != of)) goto L_91a784;
L_91a76f: /* 91a76f: nop  */
L_91a770: /* 91a770: mov edx, dword ptr [esi + 0x3c] */
  edx = R32((uint32_t)(esi + 0x3cu));
/* 91a773: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 91a776: mov edx, dword ptr [edx + eax*4] */
  edx = R32((uint32_t)(edx + eax*4));
/* 91a779: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 91a77c: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 91a77f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 91a780: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91a782: jl 0x91a770 */
  if ((sf != of)) goto L_91a770;
L_91a784: /* 91a784: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 91a787: xor eax, eax */
  eax = 0;
/* 91a789: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 91a78b: jle 0x91a7f9 */
  if ((zf || sf != of)) goto L_91a7f9;
L_91a78d: /* 91a78d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_91a790: /* 91a790: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 91a793: mov dword ptr [ecx + eax*4], 0 */
  W32((uint32_t)(ecx + eax*4), 0x0u);
/* 91a79a: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 91a79d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 91a79e: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91a7a0: jl 0x91a790 */
  if ((sf != of)) goto L_91a790;
L_91a7a2: /* 91a7a2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 91a7a3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91a7a4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 91a7a5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 91a7a6: ret 0x14 */
  esp += 24; SPILL(); return;
L_91a7a9: /* 91a7a9: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 91a7ad: xor ebx, ebx */
  ebx = 0;
/* 91a7af: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 91a7b1: jle 0x91a7c5 */
  if ((zf || sf != of)) goto L_91a7c5;
L_91a7b3: /* 91a7b3: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
L_91a7b6: /* 91a7b6: mov ebp, dword ptr [ecx + eax*4] */
  ebp = R32((uint32_t)(ecx + eax*4));
/* 91a7b9: cmp dword ptr [edx + ebp*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + ebp*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91a7bd: jne 0x91a7c0 */
  if (!zf) goto L_91a7c0;
L_91a7bf: /* 91a7bf: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_91a7c0: /* 91a7c0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 91a7c1: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91a7c3: jl 0x91a7b6 */
  if ((sf != of)) goto L_91a7b6;
L_91a7c5: /* 91a7c5: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 91a7c9: add ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 91a7cb: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91a7cd: jle 0x91a7ea */
  if ((zf || sf != of)) goto L_91a7ea;
L_91a7cf: /* 91a7cf: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 91a7d3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91a7d4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91a7d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91a7d6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91a7d7: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 91a7db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91a7dc: mov ecx, esi */
  ecx = esi;
/* 91a7de: call 0x91a800 */
  esp -= 4; W32(esp, 0x91a7e3u); SPILL(); f_91a800(); if (g_unwind) return; RELOAD();
/* 91a7e3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 91a7e4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91a7e5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 91a7e6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 91a7e7: ret 0x14 */
  esp += 24; SPILL(); return;
L_91a7ea: /* 91a7ea: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91a7eb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91a7ec: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 91a7f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91a7f1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91a7f2: mov ecx, esi */
  ecx = esi;
/* 91a7f4: call 0x91aa70 */
  esp -= 4; W32(esp, 0x91a7f9u); SPILL(); f_91aa70(); if (g_unwind) return; RELOAD();
L_91a7f9: /* 91a7f9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 91a7fa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91a7fb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 91a7fc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 91a7fd: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_91a800(void) {
  LOAD_REGS();
L_91a800: /* 91a800: sub esp, 0x68 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 91a803: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91a804: mov esi, ecx */
  esi = ecx;
/* 91a806: cmp dword ptr [esi + 0x18], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91a80a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91a80b: mov dword ptr [esp + 8], 0xa20e74 */
  W32((uint32_t)(esp + 0x8u), 0xa20e74u);
/* 91a813: mov dword ptr [esp + 0x3c], 0xa20e50 */
  W32((uint32_t)(esp + 0x3cu), 0xa20e50u);
/* 91a81b: lea edi, [esp + 8] */
  edi = (uint32_t)(esp + 0x8u);
/* 91a81f: je 0x91a825 */
  if (zf) goto L_91a825;
L_91a821: /* 91a821: lea edi, [esp + 0x3c] */
  edi = (uint32_t)(esp + 0x3cu);
L_91a825: /* 91a825: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 91a827: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 91a828: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 91a829: mov ebp, dword ptr [esp + 0x80] */
  ebp = R32((uint32_t)(esp + 0x80u));
/* 91a830: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 91a831: mov ecx, edi */
  ecx = edi;
/* 91a833: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x91a835u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 91a835: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 91a838: mov ebx, dword ptr [esp + 0x88] */
  ebx = R32((uint32_t)(esp + 0x88u));
/* 91a83f: mov edx, dword ptr [esp + 0x84] */
  edx = R32((uint32_t)(esp + 0x84u));
/* 91a846: mov eax, dword ptr [esp + 0x7c] */
  eax = R32((uint32_t)(esp + 0x7cu));
/* 91a84a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91a84b: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 91a84e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 91a84f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 91a850: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91a851: mov edx, dword ptr [esp + 0x9c] */
  edx = R32((uint32_t)(esp + 0x9cu));
/* 91a858: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91a859: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 91a85c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91a85d: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* 91a860: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91a861: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91a862: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91a863: mov ecx, edi */
  ecx = edi;
/* 91a865: call 0x918da0 */
  esp -= 4; W32(esp, 0x91a86au); SPILL(); f_918da0(); if (g_unwind) return; RELOAD();
/* 91a86a: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 91a86c: mov ecx, edi */
  ecx = edi;
/* 91a86e: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x91a871u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 91a871: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* 91a874: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 91a876: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91a877: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91a878: mov ecx, edi */
  ecx = edi;
/* 91a87a: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x91a87du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 91a87d: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 91a880: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 91a883: mov edi, dword ptr [esi + 0x2c] */
  edi = R32((uint32_t)(esi + 0x2cu));
/* 91a886: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 91a888: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 91a88b: lea edi, [edi + edx*4] */
  edi = (uint32_t)(edi + edx*4);
/* 91a88e: mov edx, ecx */
  edx = ecx;
/* 91a890: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 91a893: xor eax, eax */
  eax = 0;
/* 91a895: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 91a897: mov ecx, edx */
  ecx = edx;
/* 91a899: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 91a89c: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 91a89e: xor ecx, ecx */
  ecx = 0;
/* 91a8a0: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 91a8a2: jle 0x91a8c2 */
  if ((zf || sf != of)) goto L_91a8c2;
L_91a8a4: /* 91a8a4: mov eax, dword ptr [esp + 0x84] */
  eax = R32((uint32_t)(esp + 0x84u));
/* 91a8ab: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 91a8ae: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 91a8b1: mov edi, dword ptr [esi + 0x2c] */
  edi = R32((uint32_t)(esi + 0x2cu));
/* 91a8b4: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 91a8b7: mov edx, dword ptr [eax + edx] */
  edx = R32((uint32_t)(eax + edx));
/* 91a8ba: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 91a8bb: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91a8bd: mov dword ptr [eax + edi], edx */
  W32((uint32_t)(eax + edi), edx);
/* 91a8c0: jl 0x91a8a4 */
  if ((sf != of)) goto L_91a8a4;
L_91a8c2: /* 91a8c2: xor eax, eax */
  eax = 0;
/* 91a8c4: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 91a8c6: jle 0x91a8e0 */
  if ((zf || sf != of)) goto L_91a8e0;
L_91a8c8: /* 91a8c8: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* 91a8cb: mov edx, dword ptr [esp + 0x7c] */
  edx = R32((uint32_t)(esp + 0x7cu));
/* 91a8cf: mov edx, dword ptr [edx + eax*4] */
  edx = R32((uint32_t)(edx + eax*4));
/* 91a8d2: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 91a8d5: mov edi, dword ptr [esi + 0x2c] */
  edi = R32((uint32_t)(esi + 0x2cu));
/* 91a8d8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 91a8d9: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91a8db: mov dword ptr [edi + edx*4], ecx */
  W32((uint32_t)(edi + edx*4), ecx);
/* 91a8de: jl 0x91a8c8 */
  if ((sf != of)) goto L_91a8c8;
L_91a8e0: /* 91a8e0: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 91a8e3: mov ecx, dword ptr [esi + 0x24] */
  ecx = R32((uint32_t)(esi + 0x24u));
/* 91a8e6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 91a8e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91a8e9: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 91a8ec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91a8ed: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x91a8f0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 91a8f0: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 91a8f3: xor eax, eax */
  eax = 0;
/* 91a8f5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 91a8f7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 91a8f8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 91a8f9: jle 0x91a91d */
  if ((zf || sf != of)) goto L_91a91d;
L_91a8fb: /* 91a8fb: nop  */
/* 91a8fc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_91a900: /* 91a900: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 91a903: fld dword ptr [ecx + eax*4] */
  { double v = F32((uint32_t)(ecx + eax*4)); FPUSH(v); }
/* 91a906: mov edx, dword ptr [esp + 0x84] */
  edx = R32((uint32_t)(esp + 0x84u));
/* 91a90d: fsub dword ptr [edx + eax*4] */
  ST0 = ST0 - (F32((uint32_t)(edx + eax*4)));
/* 91a910: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 91a913: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 91a914: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 91a916: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 91a919: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91a91b: jl 0x91a900 */
  if ((sf != of)) goto L_91a900;
L_91a91d: /* 91a91d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 91a91e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91a91f: add esp, 0x68 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 91a922: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_91a930(void) {
  LOAD_REGS();
L_91a930: /* 91a930: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 91a934: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91a935: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 91a939: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 91a93b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91a93c: jle 0x91a95f */
  if ((zf || sf != of)) goto L_91a95f;
L_91a93e: /* 91a93e: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 91a942: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 91a946: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 91a948: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 91a949: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_91a950: /* 91a950: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 91a952: mov ebx, dword ptr [ecx + eax] */
  ebx = R32((uint32_t)(ecx + eax));
/* 91a955: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91a958: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 91a959: mov dword ptr [edx + edi*4], ebx */
  W32((uint32_t)(edx + edi*4), ebx);
/* 91a95c: jne 0x91a950 */
  if (!zf) goto L_91a950;
L_91a95e: /* 91a95e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_91a95f: /* 91a95f: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 91a963: xor eax, eax */
  eax = 0;
/* 91a965: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 91a967: jle 0x91a97f */
  if ((zf || sf != of)) goto L_91a97f;
L_91a969: /* 91a969: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 91a96d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_91a970: /* 91a970: mov edi, dword ptr [esi + eax*4] */
  edi = R32((uint32_t)(esi + eax*4));
/* 91a973: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 91a974: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91a976: mov dword ptr [edx + edi*4], 0 */
  W32((uint32_t)(edx + edi*4), 0x0u);
/* 91a97d: jl 0x91a970 */
  if ((sf != of)) goto L_91a970;
L_91a97f: /* 91a97f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 91a980: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91a981: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_91a990(void) {
  LOAD_REGS();
L_91a990: /* 91a990: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91a991: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 91a995: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 91a996: mov dword ptr [esp + 4], ecx */
  W32((uint32_t)(esp + 0x4u), ecx);
/* 91a99a: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 91a99e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 91a99f: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
/* 91a9a3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91a9a4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91a9a5: mov edi, dword ptr [esp + 0x38] */
  edi = R32((uint32_t)(esp + 0x38u));
/* 91a9a9: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 91a9ab: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 91a9ae: mov esi, ecx */
  esi = ecx;
/* 91a9b0: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 91a9b3: xor eax, eax */
  eax = 0;
/* 91a9b5: lea edi, [edx + edi*4] */
  edi = (uint32_t)(edx + edi*4);
/* 91a9b8: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 91a9ba: mov ecx, esi */
  ecx = esi;
/* 91a9bc: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 91a9bf: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 91a9c1: mov edi, dword ptr [esp + 0x34] */
  edi = R32((uint32_t)(esp + 0x34u));
/* 91a9c5: xor eax, eax */
  eax = 0;
/* 91a9c7: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 91a9c9: jle 0x91a9df */
  if ((zf || sf != of)) goto L_91a9df;
L_91a9cb: /* 91a9cb: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 91a9cf: nop  */
L_91a9d0: /* 91a9d0: mov ecx, dword ptr [ebp + eax*4] */
  ecx = R32((uint32_t)(ebp + eax*4));
/* 91a9d4: mov esi, dword ptr [ebx + ecx*4] */
  esi = R32((uint32_t)(ebx + ecx*4));
/* 91a9d7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 91a9d8: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91a9da: mov dword ptr [edx + ecx*4], esi */
  W32((uint32_t)(edx + ecx*4), esi);
/* 91a9dd: jl 0x91a9d0 */
  if ((sf != of)) goto L_91a9d0;
L_91a9df: /* 91a9df: mov ebx, dword ptr [esp + 0x30] */
  ebx = R32((uint32_t)(esp + 0x30u));
/* 91a9e3: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 91a9e5: jle 0x91aa3f */
  if ((zf || sf != of)) goto L_91aa3f;
L_91a9e7: /* 91a9e7: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 91a9eb: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 91a9ef: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 91a9f1: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 91a9f5: mov dword ptr [esp + 0x3c], ebx */
  W32((uint32_t)(esp + 0x3cu), ebx);
/* 91a9f9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_91aa00: /* 91aa00: mov ecx, dword ptr [eax + esi] */
  ecx = R32((uint32_t)(eax + esi));
/* 91aa03: imul ecx, dword ptr [esp + 0x40] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x40u)));
  ecx = (uint32_t)r;
  }
/* 91aa08: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 91aa0c: lea ebx, [ebx + ecx*4] */
  ebx = (uint32_t)(ebx + ecx*4);
/* 91aa0f: xor ecx, ecx */
  ecx = 0;
/* 91aa11: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 91aa13: jle 0x91aa2d */
  if ((zf || sf != of)) goto L_91aa2d;
L_91aa15: /* 91aa15: mov eax, dword ptr [ebp + ecx*4] */
  eax = R32((uint32_t)(ebp + ecx*4));
/* 91aa19: fld dword ptr [ebx + eax*4] */
  { double v = F32((uint32_t)(ebx + eax*4)); FPUSH(v); }
/* 91aa1c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 91aa1d: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91aa1f: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 91aa21: fadd dword ptr [edx + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(edx + eax*4)));
/* 91aa24: fstp dword ptr [edx + eax*4] */
  WF32((uint32_t)(edx + eax*4), ST0); FPOP();
/* 91aa27: jl 0x91aa15 */
  if ((sf != of)) goto L_91aa15;
L_91aa29: /* 91aa29: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
L_91aa2d: /* 91aa2d: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 91aa31: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 91aa34: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 91aa35: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 91aa39: jne 0x91aa00 */
  if (!zf) goto L_91aa00;
L_91aa3b: /* 91aa3b: mov ebx, dword ptr [esp + 0x30] */
  ebx = R32((uint32_t)(esp + 0x30u));
L_91aa3f: /* 91aa3f: xor eax, eax */
  eax = 0;
/* 91aa41: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 91aa43: jle 0x91aa65 */
  if ((zf || sf != of)) goto L_91aa65;
L_91aa45: /* 91aa45: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 91aa49: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_91aa50: /* 91aa50: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 91aa54: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 91aa57: mov edi, dword ptr [esi + 0x40] */
  edi = R32((uint32_t)(esi + 0x40u));
/* 91aa5a: mov edi, dword ptr [edi + ecx*4] */
  edi = R32((uint32_t)(edi + ecx*4));
/* 91aa5d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 91aa5e: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91aa60: mov dword ptr [edx + ecx*4], edi */
  W32((uint32_t)(edx + ecx*4), edi);
/* 91aa63: jl 0x91aa50 */
  if ((sf != of)) goto L_91aa50;
L_91aa65: /* 91aa65: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 91aa66: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91aa67: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 91aa68: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 91aa69: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 91aa6a: ret 0x2c */
  esp += 48; SPILL(); return;
}

void f_91aa70(void) {
  LOAD_REGS();
L_91aa70: /* 91aa70: sub esp, 0x68 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 91aa73: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 91aa74: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 91aa75: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91aa76: mov esi, ecx */
  esi = ecx;
/* 91aa78: cmp dword ptr [esi + 0x18], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91aa7c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91aa7d: mov dword ptr [esp + 0x10], 0xa20e74 */
  W32((uint32_t)(esp + 0x10u), 0xa20e74u);
/* 91aa85: mov dword ptr [esp + 0x44], 0xa20e50 */
  W32((uint32_t)(esp + 0x44u), 0xa20e50u);
/* 91aa8d: lea edi, [esp + 0x10] */
  edi = (uint32_t)(esp + 0x10u);
/* 91aa91: je 0x91aa97 */
  if (zf) goto L_91aa97;
L_91aa93: /* 91aa93: lea edi, [esp + 0x44] */
  edi = (uint32_t)(esp + 0x44u);
L_91aa97: /* 91aa97: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 91aa99: mov ebx, dword ptr [esp + 0x88] */
  ebx = R32((uint32_t)(esp + 0x88u));
/* 91aaa0: mov ebp, dword ptr [esp + 0x84] */
  ebp = R32((uint32_t)(esp + 0x84u));
/* 91aaa7: mov ecx, dword ptr [esi + 0x24] */
  ecx = R32((uint32_t)(esi + 0x24u));
/* 91aaaa: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 91aaac: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91aaad: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 91aab0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 91aab1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 91aab2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91aab3: mov edx, dword ptr [esi + 0x44] */
  edx = R32((uint32_t)(esi + 0x44u));
/* 91aab6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91aab7: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x91aabau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 91aaba: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 91aabc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 91aabd: mov ecx, edi */
  ecx = edi;
/* 91aabf: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x91aac1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 91aac1: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 91aac3: mov ecx, dword ptr [esp + 0x80] */
  ecx = R32((uint32_t)(esp + 0x80u));
/* 91aaca: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 91aacc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91aacd: mov eax, dword ptr [esp + 0x80] */
  eax = R32((uint32_t)(esp + 0x80u));
/* 91aad4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 91aad5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91aad6: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 91aad9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 91aada: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91aadb: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 91aade: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91aadf: mov ecx, dword ptr [esi + 0x44] */
  ecx = R32((uint32_t)(esi + 0x44u));
/* 91aae2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91aae3: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* 91aae6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91aae7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91aae8: mov ecx, edi */
  ecx = edi;
/* 91aaea: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x91aaedu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 91aaed: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 91aaef: mov ecx, edi */
  ecx = edi;
/* 91aaf1: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x91aaf4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 91aaf4: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* 91aaf7: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 91aaf9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91aafa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91aafb: mov ecx, edi */
  ecx = edi;
/* 91aafd: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x91ab00u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 91ab00: mov ecx, dword ptr [esi + 0x24] */
  ecx = R32((uint32_t)(esi + 0x24u));
/* 91ab03: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 91ab05: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0x91ab08u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 91ab08: mov edi, dword ptr [esp + 0x80] */
  edi = R32((uint32_t)(esp + 0x80u));
/* 91ab0f: mov ecx, dword ptr [esp + 0x7c] */
  ecx = R32((uint32_t)(esp + 0x7cu));
/* 91ab13: mov edx, dword ptr [esi + 0x48] */
  edx = R32((uint32_t)(esi + 0x48u));
/* 91ab16: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 91ab19: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91ab1a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 91ab1b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91ab1c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 91ab1d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91ab1e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91ab1f: mov ecx, esi */
  ecx = esi;
/* 91ab21: call 0x91a930 */
  esp -= 4; W32(esp, 0x91ab26u); SPILL(); f_91a930(); if (g_unwind) return; RELOAD();
/* 91ab26: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 91ab28: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 91ab2b: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 91ab2e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91ab2f: mov ecx, dword ptr [esp + 0x80] */
  ecx = R32((uint32_t)(esp + 0x80u));
/* 91ab36: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91ab37: mov edx, dword ptr [esi + 0x48] */
  edx = R32((uint32_t)(esi + 0x48u));
/* 91ab3a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91ab3b: mov eax, dword ptr [esi + 0x44] */
  eax = R32((uint32_t)(esi + 0x44u));
/* 91ab3e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91ab3f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 91ab40: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91ab41: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 91ab44: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 91ab45: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91ab46: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 91ab49: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91ab4a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91ab4b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91ab4c: mov ecx, esi */
  ecx = esi;
/* 91ab4e: call 0x91a990 */
  esp -= 4; W32(esp, 0x91ab53u); SPILL(); f_91a990(); if (g_unwind) return; RELOAD();
/* 91ab53: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 91ab54: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91ab55: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 91ab56: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 91ab57: add esp, 0x68 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 91ab5a: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_91ab60(void) {
  LOAD_REGS();
L_91ab60: /* 91ab60: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 91ab64: mov dword ptr [ecx + 0x34], eax */
  W32((uint32_t)(ecx + 0x34u), eax);
/* 91ab67: ret 4 */
  esp += 8; SPILL(); return;
}

void f_91ab70(void) {
  LOAD_REGS();
L_91ab70: /* 91ab70: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 91ab74: mov dword ptr [ecx + 0x38], eax */
  W32((uint32_t)(ecx + 0x38u), eax);
/* 91ab77: ret 4 */
  esp += 8; SPILL(); return;
}

void f_91ab80(void) {
  LOAD_REGS();
L_91ab80: /* 91ab80: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 91ab81: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91ab82: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91ab83: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 91ab86: xor esi, esi */
  esi = 0;
/* 91ab88: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 91ab8a: jle 0x91abb7 */
  if ((zf || sf != of)) goto L_91abb7;
L_91ab8c: /* 91ab8c: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 91ab8f: mov ebx, dword ptr [ecx + 0x34] */
  ebx = R32((uint32_t)(ecx + 0x34u));
/* 91ab92: sub ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
L_91ab94: /* 91ab94: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 91ab96: fcomp dword ptr [ebx + edx] */
  fpu_com(ST0, F32((uint32_t)(ebx + edx)));
  FPOP();
/* 91ab99: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 91ab9b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 91ab9e: je 0x91abb7 */
  if (zf) goto L_91abb7;
L_91aba0: /* 91aba0: mov eax, dword ptr [ecx + 0x38] */
  eax = R32((uint32_t)(ecx + 0x38u));
/* 91aba3: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 91aba5: fcomp dword ptr [eax + esi*4] */
  fpu_com(ST0, F32((uint32_t)(eax + esi*4)));
  FPOP();
/* 91aba8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 91abaa: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 91abad: jnp 0x91abb7 */
  if (!pf) goto L_91abb7;
L_91abaf: /* 91abaf: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 91abb0: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 91abb3: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91abb5: jl 0x91ab94 */
  if ((sf != of)) goto L_91ab94;
L_91abb7: /* 91abb7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 91abb8: mov eax, esi */
  eax = esi;
/* 91abba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91abbb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 91abbc: ret  */
  esp += 4; SPILL(); return;
}

void f_91abc0(void) {
  LOAD_REGS();
L_91abc0: /* 91abc0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91abc1: xor esi, esi */
  esi = 0;
L_91abc3: /* 91abc3: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 91abc6: mov edx, eax */
  edx = eax;
/* 91abc8: and edx, 0x80000003 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  edx = r;
  }
/* 91abce: jns 0x91abd5 */
  if (!sf) goto L_91abd5;
L_91abd0: /* 91abd0: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 91abd1: or edx, 0xfffffffc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 91abd4: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  zf = (r) == 0;
  edx = r;
  }
L_91abd5: /* 91abd5: je 0x91abdc */
  if (zf) goto L_91abdc;
L_91abd7: /* 91abd7: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 91abd9: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_91abdc: /* 91abdc: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91abde: jge 0x91abef */
  if ((sf == of)) goto L_91abef;
L_91abe0: /* 91abe0: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* 91abe3: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 91abe6: mov edx, dword ptr [ecx + 0x3c] */
  edx = R32((uint32_t)(ecx + 0x3cu));
/* 91abe9: mov dword ptr [edx + esi*4], eax */
  W32((uint32_t)(edx + esi*4), eax);
/* 91abec: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 91abed: jmp 0x91abc3 */
  goto L_91abc3;
L_91abef: /* 91abef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91abf0: ret  */
  esp += 4; SPILL(); return;
}

void f_91ac00(void) {
  LOAD_REGS();
L_91ac00: /* 91ac00: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 91ac03: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91ac04: xor esi, esi */
  esi = 0;
/* 91ac06: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 91ac08: jle 0x91ac6d */
  if ((zf || sf != of)) goto L_91ac6d;
L_91ac0a: /* 91ac0a: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 91ac0e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 91ac0f: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* 91ac13: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91ac14: sub ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
L_91ac16: /* 91ac16: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* 91ac19: fld dword ptr [eax + esi*4] */
  { double v = F32((uint32_t)(eax + esi*4)); FPUSH(v); }
/* 91ac1c: lea edi, [eax + esi*4] */
  edi = (uint32_t)(eax + esi*4);
/* 91ac1f: mov eax, dword ptr [ecx + 0x38] */
  eax = R32((uint32_t)(ecx + 0x38u));
/* 91ac22: fcomp dword ptr [eax + esi*4] */
  fpu_com(ST0, F32((uint32_t)(eax + esi*4)));
  FPOP();
/* 91ac25: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 91ac27: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 91ac2a: jp 0x91ac35 */
  if (pf) goto L_91ac35;
L_91ac2c: /* 91ac2c: mov dword ptr [ebx + edx], 0xffffffff */
  W32((uint32_t)(ebx + edx), 0xffffffffu);
/* 91ac33: jmp 0x91ac5a */
  goto L_91ac5a;
L_91ac35: /* 91ac35: mov eax, dword ptr [ecx + 0x34] */
  eax = R32((uint32_t)(ecx + 0x34u));
/* 91ac38: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 91ac3a: fcomp dword ptr [eax + esi*4] */
  fpu_com(ST0, F32((uint32_t)(eax + esi*4)));
  FPOP();
/* 91ac3d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 91ac3f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 91ac42: jne 0x91ac53 */
  if (!zf) goto L_91ac53;
L_91ac44: /* 91ac44: mov dword ptr [ebx + edx], 0xffffffff */
  W32((uint32_t)(ebx + edx), 0xffffffffu);
/* 91ac4b: mov dword ptr [edx], 0xffffffff */
  W32((uint32_t)(edx), 0xffffffffu);
/* 91ac51: jmp 0x91ac60 */
  goto L_91ac60;
L_91ac53: /* 91ac53: mov dword ptr [ebx + edx], 0 */
  W32((uint32_t)(ebx + edx), 0x0u);
L_91ac5a: /* 91ac5a: mov dword ptr [edx], 0 */
  W32((uint32_t)(edx), 0x0u);
L_91ac60: /* 91ac60: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 91ac63: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 91ac64: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 91ac67: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91ac69: jl 0x91ac16 */
  if ((sf != of)) goto L_91ac16;
L_91ac6b: /* 91ac6b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 91ac6c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_91ac6d: /* 91ac6d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91ac6e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_91ac80(void) {
  LOAD_REGS();
L_91ac80: /* 91ac80: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 91ac83: xor eax, eax */
  eax = 0;
/* 91ac85: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 91ac87: jle 0x91acf0 */
  if ((zf || sf != of)) goto L_91acf0;
L_91ac89: /* 91ac89: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 91ac8d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 91ac8e: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 91ac92: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 91ac93: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91ac94: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 91ac98: sub ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 91ac9a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91ac9b: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 91ac9f: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
L_91aca3: /* 91aca3: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 91aca7: lea edx, [edx + eax*4] */
  edx = (uint32_t)(edx + eax*4);
/* 91acaa: cmp dword ptr [ebx + edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91acae: jne 0x91acbe */
  if (!zf) goto L_91acbe;
L_91acb0: /* 91acb0: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 91acb2: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 91acb6: mov dword ptr [ebp + edx*4], eax */
  W32((uint32_t)(ebp + edx*4), eax);
/* 91acba: inc dword ptr [edi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(edi), r);
  }
/* 91acbc: jmp 0x91ace4 */
  goto L_91ace4;
L_91acbe: /* 91acbe: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 91acc0: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 91acc4: mov dword ptr [ebp + ebx*4], eax */
  W32((uint32_t)(ebp + ebx*4), eax);
/* 91acc8: inc dword ptr [esi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi), r);
  }
/* 91acca: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91accd: jne 0x91acd4 */
  if (!zf) goto L_91acd4;
L_91accf: /* 91accf: mov edx, dword ptr [ecx + 0x38] */
  edx = R32((uint32_t)(ecx + 0x38u));
/* 91acd2: jmp 0x91acd7 */
  goto L_91acd7;
L_91acd4: /* 91acd4: mov edx, dword ptr [ecx + 0x34] */
  edx = R32((uint32_t)(ecx + 0x34u));
L_91acd7: /* 91acd7: fld dword ptr [edx + eax*4] */
  { double v = F32((uint32_t)(edx + eax*4)); FPUSH(v); }
/* 91acda: mov edx, dword ptr [ecx + 0x40] */
  edx = R32((uint32_t)(ecx + 0x40u));
/* 91acdd: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* 91ace1: fstp dword ptr [edx + eax*4] */
  WF32((uint32_t)(edx + eax*4), ST0); FPOP();
L_91ace4: /* 91ace4: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 91ace7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 91ace8: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91acea: jl 0x91aca3 */
  if ((sf != of)) goto L_91aca3;
L_91acec: /* 91acec: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 91aced: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91acee: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 91acef: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_91acf0: /* 91acf0: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_91ad00(void) {
  LOAD_REGS();
L_91ad00: /* 91ad00: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 91ad03: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 91ad06: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 91ad07: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 91ad0a: xor ebp, ebp */
  ebp = 0;
/* 91ad0c: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 91ad0e: mov dword ptr [esp + 8], ecx */
  W32((uint32_t)(esp + 0x8u), ecx);
/* 91ad12: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 91ad16: jle 0x91ae0b */
  if ((zf || sf != of)) goto L_91ae0b;
L_91ad1c: /* 91ad1c: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 91ad20: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 91ad24: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 91ad25: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91ad26: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 91ad2a: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 91ad2c: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 91ad30: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 91ad34: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 91ad36: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 91ad38: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91ad39: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 91ad3d: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
L_91ad41: /* 91ad41: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 91ad45: mov edx, dword ptr [ecx + esi] */
  edx = R32((uint32_t)(ecx + esi));
/* 91ad48: xor ebx, ebx */
  ebx = 0;
/* 91ad4a: xor eax, eax */
  eax = 0;
/* 91ad4c: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 91ad4e: je 0x91ad60 */
  if (zf) goto L_91ad60;
L_91ad50: /* 91ad50: mov ecx, edx */
  ecx = edx;
/* 91ad52: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 91ad55: add ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 91ad57: sar edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edi = r;
  }
/* 91ad59: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 91ad5a: sar edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 91ad5c: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 91ad5e: jne 0x91ad50 */
  if (!zf) goto L_91ad50;
L_91ad60: /* 91ad60: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91ad61: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 91ad63: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 91ad67: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91ad69: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91ad6b: jle 0x91adae */
  if ((zf || sf != of)) goto L_91adae;
L_91ad6d: /* 91ad6d: mov dword ptr [esi], 0xffffffff */
  W32((uint32_t)(esi), 0xffffffffu);
/* 91ad73: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 91ad76: mov ecx, dword ptr [edx + 0x38] */
  ecx = R32((uint32_t)(edx + 0x38u));
/* 91ad79: fld dword ptr [eax + ebp*4] */
  { double v = F32((uint32_t)(eax + ebp*4)); FPUSH(v); }
/* 91ad7c: fsub dword ptr [ecx + ebp*4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + ebp*4)));
/* 91ad7f: mov ecx, dword ptr [edx + 0x34] */
  ecx = R32((uint32_t)(edx + 0x34u));
/* 91ad82: lea eax, [eax + ebp*4] */
  eax = (uint32_t)(eax + ebp*4);
/* 91ad85: fabs  */
  ST0 = fabs(ST0);
/* 91ad87: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 91ad89: fsub dword ptr [ecx + ebp*4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + ebp*4)));
/* 91ad8c: fabs  */
  ST0 = fabs(ST0);
/* 91ad8e: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 91ad90: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 91ad92: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 91ad95: jne 0x91ada2 */
  if (!zf) goto L_91ada2;
L_91ad97: /* 91ad97: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 91ad9b: xor eax, eax */
  eax = 0;
/* 91ad9d: mov dword ptr [ecx + esi], eax */
  W32((uint32_t)(ecx + esi), eax);
/* 91ada0: jmp 0x91adb4 */
  goto L_91adb4;
L_91ada2: /* 91ada2: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 91ada6: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 91ada9: mov dword ptr [ecx + esi], eax */
  W32((uint32_t)(ecx + esi), eax);
/* 91adac: jmp 0x91adb4 */
  goto L_91adb4;
L_91adae: /* 91adae: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
L_91adb4: /* 91adb4: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 91adb6: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 91adba: mov edi, dword ptr [ecx + esi] */
  edi = R32((uint32_t)(ecx + esi));
/* 91adbd: mov ebx, eax */
  ebx = eax;
/* 91adbf: not ebx */
  ebx = ~ebx;
/* 91adc1: xor ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  ebx = r;
  }
/* 91adc3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 91adc7: and edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 91adc9: test edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 91adcb: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 91adcf: je 0x91adf5 */
  if (zf) goto L_91adf5;
L_91add1: /* 91add1: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 91add5: mov edx, dword ptr [edx + esi] */
  edx = R32((uint32_t)(edx + esi));
/* 91add8: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 91addc: mov eax, dword ptr [eax + esi] */
  eax = R32((uint32_t)(eax + esi));
/* 91addf: mov edi, eax */
  edi = eax;
/* 91ade1: mov ebx, edx */
  ebx = edx;
/* 91ade3: not edi */
  edi = ~edi;
/* 91ade5: and eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 91ade7: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 91adeb: not ebx */
  ebx = ~ebx;
/* 91aded: and edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 91adef: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 91adf1: and dword ptr [esp + 0x10], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esp + 0x10u), r);
  }
L_91adf5: /* 91adf5: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 91adf8: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 91adf9: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 91adfc: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91adfe: jl 0x91ad41 */
  if ((sf != of)) goto L_91ad41;
L_91ae04: /* 91ae04: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 91ae08: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 91ae09: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91ae0a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_91ae0b: /* 91ae0b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 91ae0c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 91ae0f: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_91ae20(void) {
  LOAD_REGS();
L_91ae20: /* 91ae20: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91ae21: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 91ae25: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 91ae26: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 91ae2a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 91ae2b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91ae2c: xor eax, eax */
  eax = 0;
/* 91ae2e: xor esi, esi */
  esi = 0;
/* 91ae30: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 91ae32: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91ae33: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 91ae37: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 91ae3b: jle 0x91aea6 */
  if ((zf || sf != of)) goto L_91aea6;
L_91ae3d: /* 91ae3d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_91ae40: /* 91ae40: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 91ae44: mov edx, dword ptr [edx + eax*4] */
  edx = R32((uint32_t)(edx + eax*4));
/* 91ae47: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* 91ae4a: fld dword ptr [eax + edx*4] */
  { double v = F32((uint32_t)(eax + edx*4)); FPUSH(v); }
/* 91ae4d: mov ebp, dword ptr [ecx + 0x38] */
  ebp = R32((uint32_t)(ecx + 0x38u));
/* 91ae50: fcomp dword ptr [ebp + edx*4] */
  fpu_com(ST0, F32((uint32_t)(ebp + edx*4)));
  FPOP();
/* 91ae54: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 91ae56: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 91ae59: jp 0x91ae6e */
  if (pf) goto L_91ae6e;
L_91ae5b: /* 91ae5b: mov dword ptr [edi + edx*4], 0xffffffff */
  W32((uint32_t)(edi + edx*4), 0xffffffffu);
/* 91ae62: mov dword ptr [ebx + edx*4], 0 */
  W32((uint32_t)(ebx + edx*4), 0x0u);
/* 91ae69: mov esi, 1 */
  esi = 0x1u;
L_91ae6e: /* 91ae6e: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* 91ae71: fld dword ptr [eax + edx*4] */
  { double v = F32((uint32_t)(eax + edx*4)); FPUSH(v); }
/* 91ae74: mov ebp, dword ptr [ecx + 0x34] */
  ebp = R32((uint32_t)(ecx + 0x34u));
/* 91ae77: fcomp dword ptr [ebp + edx*4] */
  fpu_com(ST0, F32((uint32_t)(ebp + edx*4)));
  FPOP();
/* 91ae7b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 91ae7d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 91ae80: jne 0x91ae95 */
  if (!zf) goto L_91ae95;
L_91ae82: /* 91ae82: mov dword ptr [edi + edx*4], 0xffffffff */
  W32((uint32_t)(edi + edx*4), 0xffffffffu);
/* 91ae89: mov dword ptr [ebx + edx*4], 0xffffffff */
  W32((uint32_t)(ebx + edx*4), 0xffffffffu);
/* 91ae90: mov esi, 1 */
  esi = 0x1u;
L_91ae95: /* 91ae95: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 91ae99: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 91ae9d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 91ae9e: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91aea0: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 91aea4: jl 0x91ae40 */
  if ((sf != of)) goto L_91ae40;
L_91aea6: /* 91aea6: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 91aeaa: xor ebp, ebp */
  ebp = 0;
/* 91aeac: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 91aeae: jle 0x91af06 */
  if ((zf || sf != of)) goto L_91af06;
L_91aeb0: /* 91aeb0: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 91aeb4: mov edx, dword ptr [edx + ebp*4] */
  edx = R32((uint32_t)(edx + ebp*4));
/* 91aeb7: cmp dword ptr [ebx + edx*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + edx*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91aebb: jne 0x91aedb */
  if (!zf) goto L_91aedb;
L_91aebd: /* 91aebd: fld dword ptr [ecx + 0x1c] */
  { double v = F32((uint32_t)(ecx + 0x1cu)); FPUSH(v); }
/* 91aec0: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 91aec3: fchs  */
  ST0 = -ST0;
/* 91aec5: fcomp dword ptr [eax + edx*4] */
  fpu_com(ST0, F32((uint32_t)(eax + edx*4)));
  FPOP();
/* 91aec8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 91aeca: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 91aecd: jne 0x91aedb */
  if (!zf) goto L_91aedb;
L_91aecf: /* 91aecf: mov dword ptr [edi + edx*4], 0 */
  W32((uint32_t)(edi + edx*4), 0x0u);
/* 91aed6: mov esi, 1 */
  esi = 0x1u;
L_91aedb: /* 91aedb: cmp dword ptr [ebx + edx*4], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + edx*4))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91aedf: jne 0x91aefd */
  if (!zf) goto L_91aefd;
L_91aee1: /* 91aee1: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 91aee4: fld dword ptr [eax + edx*4] */
  { double v = F32((uint32_t)(eax + edx*4)); FPUSH(v); }
/* 91aee7: fcomp dword ptr [ecx + 0x1c] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x1cu)));
  FPOP();
/* 91aeea: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 91aeec: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 91aeef: jne 0x91aefd */
  if (!zf) goto L_91aefd;
L_91aef1: /* 91aef1: mov dword ptr [edi + edx*4], 0 */
  W32((uint32_t)(edi + edx*4), 0x0u);
/* 91aef8: mov esi, 1 */
  esi = 0x1u;
L_91aefd: /* 91aefd: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 91af01: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 91af02: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91af04: jl 0x91aeb0 */
  if ((sf != of)) goto L_91aeb0;
L_91af06: /* 91af06: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 91af07: mov eax, esi */
  eax = esi;
/* 91af09: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91af0a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 91af0b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 91af0c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 91af0d: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_91af10(void) {
  LOAD_REGS();
L_91af10: /* 91af10: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 91af13: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 91af14: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 91af15: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91af16: xor eax, eax */
  eax = 0;
/* 91af18: xor ebx, ebx */
  ebx = 0;
/* 91af1a: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 91af1c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91af1d: jle 0x91afe8 */
  if ((zf || sf != of)) goto L_91afe8;
L_91af23: /* 91af23: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 91af27: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 91af2b: nop  */
/* 91af2c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_91af30: /* 91af30: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 91af34: mov edx, dword ptr [eax + ebx*4] */
  edx = R32((uint32_t)(eax + ebx*4));
/* 91af37: cmp dword ptr [edi + edx*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + edx*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91af3b: jne 0x91af7d */
  if (!zf) goto L_91af7d;
L_91af3d: /* 91af3d: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* 91af40: fld dword ptr [eax + edx*4] */
  { double v = F32((uint32_t)(eax + edx*4)); FPUSH(v); }
/* 91af43: lea esi, [eax + edx*4] */
  esi = (uint32_t)(eax + edx*4);
/* 91af46: mov eax, dword ptr [ecx + 0x38] */
  eax = R32((uint32_t)(ecx + 0x38u));
/* 91af49: fcomp dword ptr [eax + edx*4] */
  fpu_com(ST0, F32((uint32_t)(eax + edx*4)));
  FPOP();
/* 91af4c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 91af4e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 91af51: jnp 0x91afc1 */
  if (!pf) goto L_91afc1;
L_91af53: /* 91af53: mov eax, dword ptr [ecx + 0x34] */
  eax = R32((uint32_t)(ecx + 0x34u));
/* 91af56: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 91af58: fcomp dword ptr [eax + edx*4] */
  fpu_com(ST0, F32((uint32_t)(eax + edx*4)));
  FPOP();
/* 91af5b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 91af5d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 91af60: jne 0x91afac */
  if (!zf) goto L_91afac;
L_91af62: /* 91af62: mov dword ptr [edi + edx*4], 0xffffffff */
  W32((uint32_t)(edi + edx*4), 0xffffffffu);
/* 91af69: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 91af6a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91af6b: mov dword ptr [ebp + edx*4], 0xffffffff */
  W32((uint32_t)(ebp + edx*4), 0xffffffffu);
/* 91af73: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 91af74: mov eax, 1 */
  eax = 0x1u;
/* 91af79: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 91af7a: ret 0x1c */
  esp += 32; SPILL(); return;
L_91af7d: /* 91af7d: mov esi, dword ptr [ebp + edx*4] */
  esi = R32((uint32_t)(ebp + edx*4));
/* 91af81: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 91af83: jne 0x91af97 */
  if (!zf) goto L_91af97;
L_91af85: /* 91af85: fld dword ptr [ecx + 0x1c] */
  { double v = F32((uint32_t)(ecx + 0x1cu)); FPUSH(v); }
/* 91af88: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 91af8b: fchs  */
  ST0 = -ST0;
/* 91af8d: fcomp dword ptr [eax + edx*4] */
  fpu_com(ST0, F32((uint32_t)(eax + edx*4)));
  FPOP();
/* 91af90: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 91af92: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 91af95: je 0x91afdc */
  if (zf) goto L_91afdc;
L_91af97: /* 91af97: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91af9a: jne 0x91afac */
  if (!zf) goto L_91afac;
L_91af9c: /* 91af9c: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 91af9f: fld dword ptr [eax + edx*4] */
  { double v = F32((uint32_t)(eax + edx*4)); FPUSH(v); }
/* 91afa2: fcomp dword ptr [ecx + 0x1c] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x1cu)));
  FPOP();
/* 91afa5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 91afa7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 91afaa: je 0x91afdc */
  if (zf) goto L_91afdc;
L_91afac: /* 91afac: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 91afaf: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 91afb0: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91afb2: jl 0x91af30 */
  if ((sf != of)) goto L_91af30;
L_91afb8: /* 91afb8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 91afb9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91afba: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 91afbb: xor eax, eax */
  eax = 0;
/* 91afbd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 91afbe: ret 0x1c */
  esp += 32; SPILL(); return;
L_91afc1: /* 91afc1: mov dword ptr [edi + edx*4], 0xffffffff */
  W32((uint32_t)(edi + edx*4), 0xffffffffu);
/* 91afc8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 91afc9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91afca: mov dword ptr [ebp + edx*4], 0 */
  W32((uint32_t)(ebp + edx*4), 0x0u);
/* 91afd2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 91afd3: mov eax, 1 */
  eax = 0x1u;
/* 91afd8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 91afd9: ret 0x1c */
  esp += 32; SPILL(); return;
L_91afdc: /* 91afdc: mov dword ptr [edi + edx*4], 0 */
  W32((uint32_t)(edi + edx*4), 0x0u);
/* 91afe3: mov eax, 1 */
  eax = 0x1u;
L_91afe8: /* 91afe8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 91afe9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91afea: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 91afeb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 91afec: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_91aff0(void) {
  LOAD_REGS();
L_91aff0: /* 91aff0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 91aff3: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 91aff7: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 91affb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 91affc: mov ebx, dword ptr [esp + 0x28] */
  ebx = R32((uint32_t)(esp + 0x28u));
/* 91b000: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91b001: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 91b005: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91b006: xor edi, edi */
  edi = 0;
/* 91b008: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 91b00a: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 91b00c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 91b00e: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 91b011: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 91b013: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 91b016: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 91b01a: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 91b01e: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 91b022: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 91b026: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 91b02a: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 91b02e: je 0x91b0f7 */
  if (zf) goto L_91b0f7;
L_91b034: /* 91b034: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 91b035: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 91b039: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_91b040: /* 91b040: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 91b042: mov ebp, dword ptr [esp + 0x30] */
  ebp = R32((uint32_t)(esp + 0x30u));
/* 91b046: add ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 91b049: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 91b04b: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 91b04f: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 91b051: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 91b055: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 91b058: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 91b05a: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91b05d: shl ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 91b05f: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 91b061: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 91b063: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91b066: lea ebx, [ebx + ebx + 1] */
  ebx = (uint32_t)(ebx + ebx + 0x1u);
/* 91b06a: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 91b06c: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 91b06e: mov ebp, dword ptr [ebp + ebx*4] */
  ebp = R32((uint32_t)(ebp + ebx*4));
/* 91b072: add ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 91b074: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91b077: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91b07a: cmp ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91b07d: jle 0x91b0a3 */
  if ((zf || sf != of)) goto L_91b0a3;
L_91b07f: /* 91b07f: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 91b083: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 91b087: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 91b08a: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91b08d: sub edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 91b090: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91b093: mov dword ptr [edx], 0 */
  W32((uint32_t)(edx), 0x0u);
/* 91b099: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 91b09d: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 91b0a1: jmp 0x91b0ec */
  goto L_91b0ec;
L_91b0a3: /* 91b0a3: jne 0x91b0c6 */
  if (!zf) goto L_91b0c6;
L_91b0a5: /* 91b0a5: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 91b0a9: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 91b0ad: xor edi, edi */
  edi = 0;
/* 91b0af: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 91b0b2: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91b0b5: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91b0b8: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 91b0ba: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 91b0bc: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 91b0c0: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 91b0c4: jmp 0x91b0c8 */
  goto L_91b0c8;
L_91b0c6: /* 91b0c6: mov edi, ebp */
  edi = ebp;
L_91b0c8: /* 91b0c8: mov ebp, dword ptr [esp + 0x3c] */
  ebp = R32((uint32_t)(esp + 0x3cu));
/* 91b0cc: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  ebp = r;
  }
/* 91b0cd: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91b0cf: jge 0x91b0ec */
  if ((sf == of)) goto L_91b0ec;
L_91b0d1: /* 91b0d1: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 91b0d5: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 91b0d6: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
/* 91b0d8: mov ebp, dword ptr [ebp + ebx*8] */
  ebp = R32((uint32_t)(ebp + ebx*8));
/* 91b0dc: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 91b0e0: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 91b0e4: mov ebx, dword ptr [ebp + ebx*8 + 4] */
  ebx = R32((uint32_t)(ebp + ebx*8 + 0x4u));
/* 91b0e8: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
L_91b0ec: /* 91b0ec: dec dword ptr [esp + 0x24] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x24u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x24u), r);
  }
/* 91b0f0: jne 0x91b040 */
  if (!zf) goto L_91b040;
L_91b0f6: /* 91b0f6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_91b0f7: /* 91b0f7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 91b0f8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91b0f9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 91b0fa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 91b0fd: ret  */
  esp += 4; SPILL(); return;
}

void f_91b100(void) {
  LOAD_REGS();
L_91b100: /* 91b100: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 91b103: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 91b107: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 91b109: mov dword ptr [esp], 0 */
  W32((uint32_t)(esp), 0x0u);
/* 91b111: je 0x91b2dd */
  if (zf) goto L_91b2dd;
L_91b117: /* 91b117: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 91b11b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 91b11c: mov ebx, dword ptr [esp + 0x30] */
  ebx = R32((uint32_t)(esp + 0x30u));
/* 91b120: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 91b121: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91b122: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91b123: mov edi, dword ptr [esp + 0x40] */
  edi = R32((uint32_t)(esp + 0x40u));
/* 91b127: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 91b129: sub ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 91b12b: mov dword ptr [esp + 0x40], edi */
  W32((uint32_t)(esp + 0x40u), edi);
/* 91b12f: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 91b133: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 91b137: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
/* 91b13b: nop  */
/* 91b13c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_91b140: /* 91b140: cmp dword ptr [eax + edi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + edi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91b144: jle 0x91b2c3 */
  if ((zf || sf != of)) goto L_91b2c3;
L_91b14a: /* 91b14a: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 91b14c: mov edx, ecx */
  edx = ecx;
/* 91b14e: and edx, 0x80000003 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  edx = r;
  }
/* 91b154: jns 0x91b15b */
  if (!sf) goto L_91b15b;
L_91b156: /* 91b156: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 91b157: or edx, 0xfffffffc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 91b15a: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  zf = (r) == 0;
  edx = r;
  }
L_91b15b: /* 91b15b: mov eax, ecx */
  eax = ecx;
/* 91b15d: je 0x91b164 */
  if (zf) goto L_91b164;
L_91b15f: /* 91b15f: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 91b161: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_91b164: /* 91b164: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91b165: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91b168: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91b16a: mov esi, eax */
  esi = eax;
/* 91b16c: mov eax, dword ptr [ebx + edi] */
  eax = R32((uint32_t)(ebx + edi));
/* 91b16f: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91b170: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91b173: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91b175: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91b178: mov dword ptr [esp + 0x4c], eax */
  W32((uint32_t)(esp + 0x4cu), eax);
/* 91b17c: mov eax, ecx */
  eax = ecx;
/* 91b17e: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91b17f: mov edi, 0xc */
  edi = 0xcu;
/* 91b184: idiv edi */
  { int32_t d = (int32_t)edi; if (!d) d = (int32_t)guest_divzero(0x91b184);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 91b186: sar esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 91b189: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 91b18b: je 0x91b191 */
  if (zf) goto L_91b191;
L_91b18d: /* 91b18d: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 91b18f: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_91b191: /* 91b191: mov eax, ecx */
  eax = ecx;
/* 91b193: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91b194: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91b197: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91b199: mov ebp, eax */
  ebp = eax;
/* 91b19b: sar ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebp = r;
  }
/* 91b19e: xor edx, edx */
  edx = 0;
/* 91b1a0: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 91b1a2: mov dword ptr [esp + 0x3c], ebp */
  W32((uint32_t)(esp + 0x3cu), ebp);
/* 91b1a6: je 0x91b1d1 */
  if (zf) goto L_91b1d1;
L_91b1a8: /* 91b1a8: mov ebx, dword ptr [esp + 0x28] */
  ebx = R32((uint32_t)(esp + 0x28u));
/* 91b1ac: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_91b1b0: /* 91b1b0: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 91b1b4: mov dword ptr [eax + edx*4], 0 */
  W32((uint32_t)(eax + edx*4), 0x0u);
/* 91b1bb: mov edi, ebx */
  edi = ebx;
/* 91b1bd: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 91b1be: mov ecx, 8 */
  ecx = 0x8u;
/* 91b1c3: mov eax, 0xfffffffd */
  eax = 0xfffffffdu;
/* 91b1c8: add ebx, 0x20 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 91b1cb: cmp edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91b1cd: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 91b1cf: jne 0x91b1b0 */
  if (!zf) goto L_91b1b0;
L_91b1d1: /* 91b1d1: xor edi, edi */
  edi = 0;
/* 91b1d3: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 91b1d5: je 0x91b20b */
  if (zf) goto L_91b20b;
L_91b1d7: /* 91b1d7: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 91b1db: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 91b1df: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
L_91b1e1: /* 91b1e1: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* 91b1e5: mov dword ptr [ebx + edi*4], 0 */
  W32((uint32_t)(ebx + edi*4), 0x0u);
/* 91b1ec: mov ecx, 8 */
  ecx = 0x8u;
L_91b1f1: /* 91b1f1: mov dword ptr [edx + eax], 0xfffffffd */
  W32((uint32_t)(edx + eax), 0xfffffffdu);
/* 91b1f8: mov dword ptr [eax], 0xffffffff */
  W32((uint32_t)(eax), 0xffffffffu);
/* 91b1fe: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91b201: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 91b202: jne 0x91b1f1 */
  if (!zf) goto L_91b1f1;
L_91b204: /* 91b204: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 91b205: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91b207: jne 0x91b1e1 */
  if (!zf) goto L_91b1e1;
L_91b209: /* 91b209: jmp 0x91b20f */
  goto L_91b20f;
L_91b20b: /* 91b20b: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
L_91b20f: /* 91b20f: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 91b213: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 91b217: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 91b21b: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* 91b21f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91b220: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 91b224: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91b225: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91b226: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 91b22a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91b22b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91b22c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91b22d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91b22e: lea eax, [esp + 0x2c] */
  eax = (uint32_t)(esp + 0x2cu);
/* 91b232: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 91b233: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91b234: call 0x91aff0 */
  esp -= 4; W32(esp, 0x91b239u); SPILL(); f_91aff0(); if (g_unwind) return; RELOAD();
/* 91b239: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 91b23c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 91b23e: je 0x91b281 */
  if (zf) goto L_91b281;
L_91b240: /* 91b240: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 91b244: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 91b248: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 91b24a: sub ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 91b24c: mov dword ptr [esp + 0x4c], esi */
  W32((uint32_t)(esp + 0x4cu), esi);
L_91b250: /* 91b250: mov edx, dword ptr [ebx + ecx] */
  edx = R32((uint32_t)(ebx + ecx));
/* 91b253: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 91b255: mov edx, 8 */
  edx = 0x8u;
/* 91b25a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_91b260: /* 91b260: mov ebp, dword ptr [edi + eax] */
  ebp = R32((uint32_t)(edi + eax));
/* 91b263: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
/* 91b265: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91b268: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 91b269: jne 0x91b260 */
  if (!zf) goto L_91b260;
L_91b26b: /* 91b26b: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 91b26f: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91b272: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 91b273: mov dword ptr [esp + 0x4c], edx */
  W32((uint32_t)(esp + 0x4cu), edx);
/* 91b277: jne 0x91b250 */
  if (!zf) goto L_91b250;
L_91b279: /* 91b279: mov ebp, dword ptr [esp + 0x3c] */
  ebp = R32((uint32_t)(esp + 0x3cu));
/* 91b27d: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
L_91b281: /* 91b281: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 91b285: mov edi, dword ptr [esp + 0x30] */
  edi = R32((uint32_t)(esp + 0x30u));
/* 91b289: lea ecx, [eax + ebp*4] */
  ecx = (uint32_t)(eax + ebp*4);
/* 91b28c: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 91b290: lea edx, [ebx + esi*4] */
  edx = (uint32_t)(ebx + esi*4);
/* 91b293: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 91b297: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 91b29b: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 91b29f: shl esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 91b2a2: shl ebp, 5 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebp = r;
  }
/* 91b2a5: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 91b2a7: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91b2a9: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91b2ab: mov dword ptr [esp + 0x30], edi */
  W32((uint32_t)(esp + 0x30u), edi);
/* 91b2af: mov edi, dword ptr [esp + 0x40] */
  edi = R32((uint32_t)(esp + 0x40u));
/* 91b2b3: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 91b2b7: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 91b2bb: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 91b2bf: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
L_91b2c3: /* 91b2c3: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 91b2c7: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 91b2ca: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 91b2cb: mov dword ptr [esp + 0x40], edi */
  W32((uint32_t)(esp + 0x40u), edi);
/* 91b2cf: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
/* 91b2d3: jne 0x91b140 */
  if (!zf) goto L_91b140;
L_91b2d9: /* 91b2d9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 91b2da: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91b2db: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 91b2dc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_91b2dd: /* 91b2dd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 91b2e0: ret 0x30 */
  esp += 52; SPILL(); return;
}

void f_91b2f0(void) {
  LOAD_REGS();
L_91b2f0: /* 91b2f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 91b2f1: mov ebp, esp */
  ebp = esp;
/* 91b2f3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 91b2f6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 91b2f7: lea eax, [ebp - 0xc] */
  eax = (uint32_t)(ebp + 0xfffffff4u);
/* 91b2fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91b2fb: mov bl, 1 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 91b2fd: call 0x91b370 */
  esp -= 4; W32(esp, 0x91b302u); SPILL(); f_91b370(); if (g_unwind) return; RELOAD();
/* 91b302: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 91b305: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 91b307: je 0x91b34f */
  if (zf) goto L_91b34f;
L_91b309: /* 91b309: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91b30a: mov esi, dword ptr [0xcfb080] */
  esi = R32((uint32_t)(0xcfb080u));
/* 91b310: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 91b312: lea ecx, [ebp - 0xc] */
  ecx = (uint32_t)(ebp + 0xfffffff4u);
/* 91b315: push 0xaf2df8 */
  { uint32_t v = 0xaf2df8u; esp -= 4; W32(esp, v); }
/* 91b31a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91b31b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x91b31du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 91b31d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 91b320: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 91b322: je 0x91b33a */
  if (zf) goto L_91b33a;
L_91b324: /* 91b324: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 91b326: lea edx, [ebp - 0xc] */
  edx = (uint32_t)(ebp + 0xfffffff4u);
/* 91b329: push 0xaf2de8 */
  { uint32_t v = 0xaf2de8u; esp -= 4; W32(esp, v); }
/* 91b32e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91b32f: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x91b331u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 91b331: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 91b334: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 91b336: je 0x91b33a */
  if (zf) goto L_91b33a;
L_91b338: /* 91b338: xor bl, bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
L_91b33a: /* 91b33a: call 0x91b3f0 */
  esp -= 4; W32(esp, 0x91b33fu); SPILL(); f_91b3f0(); if (g_unwind) return; RELOAD();
/* 91b33f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 91b341: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91b342: jne 0x91b346 */
  if (!zf) goto L_91b346;
L_91b344: /* 91b344: xor bl, bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
L_91b346: /* 91b346: call 0x91b420 */
  esp -= 4; W32(esp, 0x91b34bu); SPILL(); hle_ret0(); RELOAD();
/* 91b34b: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 91b34d: jne 0x91b35b */
  if (!zf) goto L_91b35b;
L_91b34f: /* 91b34f: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 91b351: mov byte ptr [0xcf2eac], al */
  W8((uint32_t)(0xcf2eacu), (eax & 0xffu));
/* 91b356: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 91b357: mov esp, ebp */
  esp = ebp;
/* 91b359: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 91b35a: ret  */
  esp += 4; SPILL(); return;
L_91b35b: /* 91b35b: mov byte ptr [0xcf2eac], bl */
  W8((uint32_t)(0xcf2eacu), (ebx & 0xffu));
/* 91b361: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 91b362: mov esp, ebp */
  esp = ebp;
/* 91b364: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 91b365: ret  */
  esp += 4; SPILL(); return;
}

void f_91b370(void) {
  LOAD_REGS();
L_91b370: /* 91b370: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 91b371: mov ebp, esp */
  ebp = esp;
/* 91b373: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 91b375: push 0xa20f30 */
  { uint32_t v = 0xa20f30u; esp -= 4; W32(esp, v); }
/* 91b37a: push 0x99cec4 */
  { uint32_t v = 0x99cec4u; esp -= 4; W32(esp, v); }
/* 91b37f: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 91b385: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91b386: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 91b38d: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 91b390: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 91b391: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91b392: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91b393: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 91b396: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 91b39d: mov eax, 0 */
  eax = 0x0u;
/* 91b3a2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 91b3a3: cpuid  */
  { uint32_t q[4]; host_cpuid(eax, ecx, q); eax = q[0]; ebx = q[1]; ecx = q[2]; edx = q[3]; }
/* 91b3a5: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 91b3a8: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 91b3aa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 91b3ab: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 91b3ae: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 91b3b1: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 91b3b8: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 91b3ba: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 91b3bd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 91b3c4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 91b3c5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91b3c6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 91b3c7: mov esp, ebp */
  esp = ebp;
/* 91b3c9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 91b3ca: ret  */
  esp += 4; SPILL(); return;
}

void f_91b3cb(void) {
  LOAD_REGS();
L_91b3cb: /* 91b3cb: mov eax, 1 */
  eax = 0x1u;
/* 91b3d0: ret  */
  esp += 4; SPILL(); return;
}

void f_91b3d1(void) {
  LOAD_REGS();
L_91b3d1: /* 91b3d1: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
/* 91b3d4: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 91b3db: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 91b3dd: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 91b3e0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 91b3e7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 91b3e8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91b3e9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 91b3ea: mov esp, ebp */
  esp = ebp;
/* 91b3ec: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 91b3ed: ret  */
  esp += 4; SPILL(); return;
}

void f_91b3f0(void) {
  LOAD_REGS();
L_91b3f0: /* 91b3f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 91b3f1: mov ebp, esp */
  ebp = esp;
/* 91b3f3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91b3f4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 91b3f5: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 91b3fc: mov eax, 1 */
  eax = 0x1u;
/* 91b401: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 91b402: cpuid  */
  { uint32_t q[4]; host_cpuid(eax, ecx, q); eax = q[0]; ebx = q[1]; ecx = q[2]; edx = q[3]; }
/* 91b404: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 91b405: and edx, 0x2000000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91b40b: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
/* 91b40e: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 91b411: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 91b412: mov esp, ebp */
  esp = ebp;
/* 91b414: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 91b415: ret  */
  esp += 4; SPILL(); return;
}

void f_91b420(void) { hle_ret0(); }

void f_91b46a(void) {
  LOAD_REGS();
L_91b46a: /* 91b46a: mov eax, 1 */
  eax = 0x1u;
/* 91b46f: ret  */
  esp += 4; SPILL(); return;
}

void f_91b470(void) {
  LOAD_REGS();
L_91b470: /* 91b470: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
/* 91b473: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 91b47a: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 91b47c: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 91b47f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 91b486: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 91b487: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91b488: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 91b489: mov esp, ebp */
  esp = ebp;
/* 91b48b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 91b48c: ret  */
  esp += 4; SPILL(); return;
}

void f_91b490(void) {
  LOAD_REGS();
L_91b490: /* 91b490: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 91b494: xor ecx, ecx */
  ecx = 0;
/* 91b496: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 91b499: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 91b49c: mov dword ptr [eax + 0x24], ecx */
  W32((uint32_t)(eax + 0x24u), ecx);
/* 91b49f: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 91b4a1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_91b4b0(void) {
  LOAD_REGS();
L_91b4b0: /* 91b4b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 91b4b4: test byte ptr [eax + 0x18], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x18u))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 91b4b8: je 0x91b502 */
  if (zf) goto L_91b502;
L_91b4ba: /* 91b4ba: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_91b4c0: /* 91b4c0: mov ecx, dword ptr [eax + 0x18] */
  ecx = R32((uint32_t)(eax + 0x18u));
/* 91b4c3: mov edx, dword ptr [eax + 0x30] */
  edx = R32((uint32_t)(eax + 0x30u));
/* 91b4c6: mov dword ptr [edx + ecx*4], 0 */
  W32((uint32_t)(edx + ecx*4), 0x0u);
/* 91b4cd: mov ecx, dword ptr [eax + 0x18] */
  ecx = R32((uint32_t)(eax + 0x18u));
/* 91b4d0: mov edx, dword ptr [eax + 0x48] */
  edx = R32((uint32_t)(eax + 0x48u));
/* 91b4d3: mov dword ptr [edx + ecx*4], 0 */
  W32((uint32_t)(edx + ecx*4), 0x0u);
/* 91b4da: mov ecx, dword ptr [eax + 0x18] */
  ecx = R32((uint32_t)(eax + 0x18u));
/* 91b4dd: mov edx, dword ptr [eax + 0x34] */
  edx = R32((uint32_t)(eax + 0x34u));
/* 91b4e0: mov dword ptr [edx + ecx*4], 0 */
  W32((uint32_t)(edx + ecx*4), 0x0u);
/* 91b4e7: mov ecx, dword ptr [eax + 0x18] */
  ecx = R32((uint32_t)(eax + 0x18u));
/* 91b4ea: mov edx, dword ptr [eax + 0x4c] */
  edx = R32((uint32_t)(eax + 0x4cu));
/* 91b4ed: mov dword ptr [edx + ecx*4], 0 */
  W32((uint32_t)(edx + ecx*4), 0x0u);
/* 91b4f4: mov edx, dword ptr [eax + 0x18] */
  edx = R32((uint32_t)(eax + 0x18u));
/* 91b4f7: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 91b4f8: mov cl, dl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 91b4fa: test cl, 3 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 91b4fd: mov dword ptr [eax + 0x18], edx */
  W32((uint32_t)(eax + 0x18u), edx);
/* 91b500: jne 0x91b4c0 */
  if (!zf) goto L_91b4c0;
L_91b502: /* 91b502: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 91b504: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 91b507: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91b508: lea edi, [edx + ecx*4] */
  edi = (uint32_t)(edx + ecx*4);
/* 91b50b: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 91b50d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 91b50f: je 0x91b56a */
  if (zf) goto L_91b56a;
L_91b511: /* 91b511: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91b517: jns 0x91b51e */
  if (!sf) goto L_91b51e;
L_91b519: /* 91b519: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91b51a: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91b51d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  zf = (r) == 0;
  ecx = r;
  }
L_91b51e: /* 91b51e: je 0x91b56a */
  if (zf) goto L_91b56a;
L_91b520: /* 91b520: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 91b523: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91b524: lea esi, [ecx - 4] */
  esi = (uint32_t)(ecx + 0xfffffffcu);
/* 91b527: mov edx, esi */
  edx = esi;
/* 91b529: and edx, 0x80000003 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  edx = r;
  }
/* 91b52f: jns 0x91b536 */
  if (!sf) goto L_91b536;
L_91b531: /* 91b531: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 91b532: or edx, 0xfffffffc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 91b535: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  zf = (r) == 0;
  edx = r;
  }
L_91b536: /* 91b536: jne 0x91b53c */
  if (!zf) goto L_91b53c;
L_91b538: /* 91b538: mov ecx, esi */
  ecx = esi;
/* 91b53a: jmp 0x91b53e */
  goto L_91b53e;
L_91b53c: /* 91b53c: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
L_91b53e: /* 91b53e: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 91b541: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 91b543: lea esi, [ecx - 4] */
  esi = (uint32_t)(ecx + 0xfffffffcu);
/* 91b546: mov edx, esi */
  edx = esi;
/* 91b548: and edx, 0x80000003 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  edx = r;
  }
/* 91b54e: jns 0x91b555 */
  if (!sf) goto L_91b555;
L_91b550: /* 91b550: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 91b551: or edx, 0xfffffffc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 91b554: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  zf = (r) == 0;
  edx = r;
  }
L_91b555: /* 91b555: jne 0x91b565 */
  if (!zf) goto L_91b565;
L_91b557: /* 91b557: mov ecx, esi */
  ecx = esi;
/* 91b559: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 91b55b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 91b55d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91b55e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 91b55f: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 91b561: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 91b562: ret 4 */
  esp += 8; SPILL(); return;
L_91b565: /* 91b565: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 91b567: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 91b569: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_91b56a: /* 91b56a: inc dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax), r);
  }
/* 91b56c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 91b56d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_91b570(void) {
  LOAD_REGS();
L_91b570: /* 91b570: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 91b574: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 91b576: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 91b579: mov dword ptr [edx + ecx*4], 0 */
  W32((uint32_t)(edx + ecx*4), 0x0u);
/* 91b580: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 91b582: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 91b585: mov dword ptr [edx + ecx*4], 0 */
  W32((uint32_t)(edx + ecx*4), 0x0u);
/* 91b58c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 91b58e: mov edx, dword ptr [eax + 0x10] */
  edx = R32((uint32_t)(eax + 0x10u));
/* 91b591: mov dword ptr [edx + ecx*4], 0 */
  W32((uint32_t)(edx + ecx*4), 0x0u);
/* 91b598: ret 4 */
  esp += 8; SPILL(); return;
}

void f_91b5a0(void) {
  LOAD_REGS();
L_91b5a0: /* 91b5a0: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 91b5a4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91b5a5: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 91b5a9: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91b5ac: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91b5ae: mov eax, ecx */
  eax = ecx;
/* 91b5b0: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91b5b1: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91b5b4: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91b5b6: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 91b5ba: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91b5bd: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91b5c3: lea eax, [edx + eax*2] */
  eax = (uint32_t)(edx + eax*2);
/* 91b5c6: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 91b5c9: jns 0x91b5d0 */
  if (!sf) goto L_91b5d0;
L_91b5cb: /* 91b5cb: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91b5cc: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91b5cf: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91b5d0: /* 91b5d0: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 91b5d4: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 91b5d7: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 91b5da: fld dword ptr [ecx + eax*4 + 0x10] */
  { double v = F32((uint32_t)(ecx + eax*4 + 0x10u)); FPUSH(v); }
/* 91b5de: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91b5df: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 91b5e2: fld dword ptr [ecx + eax*4] */
  { double v = F32((uint32_t)(ecx + eax*4)); FPUSH(v); }
/* 91b5e5: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 91b5e7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91b5e9: fld dword ptr [ecx + eax*4 + 0x20] */
  { double v = F32((uint32_t)(ecx + eax*4 + 0x20u)); FPUSH(v); }
/* 91b5ed: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 91b5f0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91b5f2: fld dword ptr [ecx + eax*4 + 0x30] */
  { double v = F32((uint32_t)(ecx + eax*4 + 0x30u)); FPUSH(v); }
/* 91b5f6: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 91b5f9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91b5fb: fld dword ptr [ecx + eax*4 + 0x40] */
  { double v = F32((uint32_t)(ecx + eax*4 + 0x40u)); FPUSH(v); }
/* 91b5ff: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 91b602: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91b604: fld dword ptr [ecx + eax*4 + 0x50] */
  { double v = F32((uint32_t)(ecx + eax*4 + 0x50u)); FPUSH(v); }
/* 91b608: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 91b60b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91b60d: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_91b610(void) {
  LOAD_REGS();
L_91b610: /* 91b610: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 91b614: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 91b615: xor ebx, ebx */
  ebx = 0;
/* 91b617: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 91b619: jbe 0x91b808 */
  if ((cf | zf)) goto L_91b808;
L_91b61f: /* 91b61f: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 91b623: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91b624: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91b625: xor edi, edi */
  edi = 0;
L_91b627: /* 91b627: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 91b62a: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 91b62c: mov esi, edx */
  esi = edx;
/* 91b62e: shr esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 91b631: lea esi, [esi + esi*2] */
  esi = (uint32_t)(esi + esi*2);
/* 91b634: lea esi, [edi + esi*4] */
  esi = (uint32_t)(edi + esi*4);
/* 91b637: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91b63a: lea edx, [edx + esi*4] */
  edx = (uint32_t)(edx + esi*4);
/* 91b63d: mov esi, dword ptr [eax + 0x2c] */
  esi = R32((uint32_t)(eax + 0x2cu));
/* 91b640: mov dword ptr [esi + edx*4], ebx */
  W32((uint32_t)(esi + edx*4), ebx);
/* 91b643: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 91b646: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 91b648: mov esi, edx */
  esi = edx;
/* 91b64a: shr esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 91b64d: lea esi, [esi + esi*2] */
  esi = (uint32_t)(esi + esi*2);
/* 91b650: lea esi, [edi + esi*4] */
  esi = (uint32_t)(edi + esi*4);
/* 91b653: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91b656: lea edx, [edx + esi*4 + 0x18] */
  edx = (uint32_t)(edx + esi*4 + 0x18u);
/* 91b65a: mov esi, dword ptr [eax + 0x2c] */
  esi = R32((uint32_t)(eax + 0x2cu));
/* 91b65d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 91b65e: cmp edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91b661: mov dword ptr [esi + edx*4], ebx */
  W32((uint32_t)(esi + edx*4), ebx);
/* 91b664: jne 0x91b627 */
  if (!zf) goto L_91b627;
L_91b666: /* 91b666: xor edi, edi */
  edi = 0;
L_91b668: /* 91b668: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 91b66b: lea edx, [edx + ecx + 1] */
  edx = (uint32_t)(edx + ecx + 0x1u);
/* 91b66f: mov esi, edx */
  esi = edx;
/* 91b671: shr esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 91b674: lea esi, [esi + esi*2] */
  esi = (uint32_t)(esi + esi*2);
/* 91b677: lea esi, [edi + esi*4] */
  esi = (uint32_t)(edi + esi*4);
/* 91b67a: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91b67d: lea edx, [edx + esi*4] */
  edx = (uint32_t)(edx + esi*4);
/* 91b680: mov esi, dword ptr [eax + 0x2c] */
  esi = R32((uint32_t)(eax + 0x2cu));
/* 91b683: mov dword ptr [esi + edx*4], ebx */
  W32((uint32_t)(esi + edx*4), ebx);
/* 91b686: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 91b689: lea edx, [edx + ecx + 1] */
  edx = (uint32_t)(edx + ecx + 0x1u);
/* 91b68d: mov esi, edx */
  esi = edx;
/* 91b68f: shr esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 91b692: lea esi, [esi + esi*2] */
  esi = (uint32_t)(esi + esi*2);
/* 91b695: lea esi, [edi + esi*4] */
  esi = (uint32_t)(edi + esi*4);
/* 91b698: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91b69b: lea edx, [edx + esi*4 + 0x18] */
  edx = (uint32_t)(edx + esi*4 + 0x18u);
/* 91b69f: mov esi, dword ptr [eax + 0x2c] */
  esi = R32((uint32_t)(eax + 0x2cu));
/* 91b6a2: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 91b6a3: cmp edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91b6a6: mov dword ptr [esi + edx*4], ebx */
  W32((uint32_t)(esi + edx*4), ebx);
/* 91b6a9: jne 0x91b668 */
  if (!zf) goto L_91b668;
L_91b6ab: /* 91b6ab: xor esi, esi */
  esi = 0;
/* 91b6ad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_91b6b0: /* 91b6b0: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 91b6b3: lea edi, [edx + ecx] */
  edi = (uint32_t)(edx + ecx);
/* 91b6b6: lea edx, [edi + 2] */
  edx = (uint32_t)(edi + 0x2u);
/* 91b6b9: shr edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 91b6bc: lea edx, [edx + edx*2] */
  edx = (uint32_t)(edx + edx*2);
/* 91b6bf: add edi, -2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 91b6c2: lea edx, [esi + edx*4] */
  edx = (uint32_t)(esi + edx*4);
/* 91b6c5: and edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 91b6c8: lea edx, [edi + edx*4] */
  edx = (uint32_t)(edi + edx*4);
/* 91b6cb: mov edi, dword ptr [eax + 0x2c] */
  edi = R32((uint32_t)(eax + 0x2cu));
/* 91b6ce: mov dword ptr [edi + edx*4], ebx */
  W32((uint32_t)(edi + edx*4), ebx);
/* 91b6d1: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 91b6d4: lea edi, [edx + ecx] */
  edi = (uint32_t)(edx + ecx);
/* 91b6d7: lea edx, [edi + 2] */
  edx = (uint32_t)(edi + 0x2u);
/* 91b6da: shr edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 91b6dd: add edi, -2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 91b6e0: lea edx, [edx + edx*2] */
  edx = (uint32_t)(edx + edx*2);
/* 91b6e3: and edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 91b6e6: lea edx, [esi + edx*4] */
  edx = (uint32_t)(esi + edx*4);
/* 91b6e9: lea edx, [edi + edx*4 + 0x18] */
  edx = (uint32_t)(edi + edx*4 + 0x18u);
/* 91b6ed: mov edi, dword ptr [eax + 0x2c] */
  edi = R32((uint32_t)(eax + 0x2cu));
/* 91b6f0: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 91b6f1: cmp esi, 6 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91b6f4: mov dword ptr [edi + edx*4], ebx */
  W32((uint32_t)(edi + edx*4), ebx);
/* 91b6f7: jne 0x91b6b0 */
  if (!zf) goto L_91b6b0;
L_91b6f9: /* 91b6f9: xor esi, esi */
  esi = 0;
/* 91b6fb: nop  */
/* 91b6fc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_91b700: /* 91b700: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 91b703: lea edi, [edx + ecx] */
  edi = (uint32_t)(edx + ecx);
/* 91b706: lea edx, [edi + 3] */
  edx = (uint32_t)(edi + 0x3u);
/* 91b709: shr edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 91b70c: lea edx, [edx + edx*2] */
  edx = (uint32_t)(edx + edx*2);
/* 91b70f: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 91b710: lea edx, [esi + edx*4] */
  edx = (uint32_t)(esi + edx*4);
/* 91b713: and edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 91b716: lea edx, [edi + edx*4] */
  edx = (uint32_t)(edi + edx*4);
/* 91b719: mov edi, dword ptr [eax + 0x2c] */
  edi = R32((uint32_t)(eax + 0x2cu));
/* 91b71c: mov dword ptr [edi + edx*4], ebx */
  W32((uint32_t)(edi + edx*4), ebx);
/* 91b71f: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 91b722: lea edi, [edx + ecx] */
  edi = (uint32_t)(edx + ecx);
/* 91b725: lea edx, [edi + 3] */
  edx = (uint32_t)(edi + 0x3u);
/* 91b728: shr edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 91b72b: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 91b72c: lea edx, [edx + edx*2] */
  edx = (uint32_t)(edx + edx*2);
/* 91b72f: and edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 91b732: lea edx, [esi + edx*4] */
  edx = (uint32_t)(esi + edx*4);
/* 91b735: lea edx, [edi + edx*4 + 0x18] */
  edx = (uint32_t)(edi + edx*4 + 0x18u);
/* 91b739: mov edi, dword ptr [eax + 0x2c] */
  edi = R32((uint32_t)(eax + 0x2cu));
/* 91b73c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 91b73d: cmp esi, 6 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91b740: mov dword ptr [edi + edx*4], ebx */
  W32((uint32_t)(edi + edx*4), ebx);
/* 91b743: jne 0x91b700 */
  if (!zf) goto L_91b700;
L_91b745: /* 91b745: xor edx, edx */
  edx = 0;
L_91b747: /* 91b747: mov esi, dword ptr [eax + 0x24] */
  esi = R32((uint32_t)(eax + 0x24u));
/* 91b74a: mov edi, dword ptr [eax + 0x44] */
  edi = R32((uint32_t)(eax + 0x44u));
/* 91b74d: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 91b750: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 91b752: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 91b753: cmp edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91b756: mov dword ptr [edi + esi*4], ebx */
  W32((uint32_t)(edi + esi*4), ebx);
/* 91b759: jne 0x91b747 */
  if (!zf) goto L_91b747;
L_91b75b: /* 91b75b: xor edx, edx */
  edx = 0;
/* 91b75d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_91b760: /* 91b760: mov esi, dword ptr [eax + 0x24] */
  esi = R32((uint32_t)(eax + 0x24u));
/* 91b763: mov edi, dword ptr [eax + 0x44] */
  edi = R32((uint32_t)(eax + 0x44u));
/* 91b766: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 91b769: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 91b76b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 91b76c: cmp edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91b76f: mov dword ptr [edi + esi*4 + 0x10], ebx */
  W32((uint32_t)(edi + esi*4 + 0x10u), ebx);
/* 91b773: jne 0x91b760 */
  if (!zf) goto L_91b760;
L_91b775: /* 91b775: xor edx, edx */
  edx = 0;
L_91b777: /* 91b777: mov esi, dword ptr [eax + 0x24] */
  esi = R32((uint32_t)(eax + 0x24u));
/* 91b77a: mov edi, dword ptr [eax + 0x44] */
  edi = R32((uint32_t)(eax + 0x44u));
/* 91b77d: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 91b780: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 91b782: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 91b783: cmp edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91b786: mov dword ptr [edi + esi*4 + 0x20], ebx */
  W32((uint32_t)(edi + esi*4 + 0x20u), ebx);
/* 91b78a: jne 0x91b777 */
  if (!zf) goto L_91b777;
L_91b78c: /* 91b78c: xor edx, edx */
  edx = 0;
/* 91b78e: mov edi, edi */
  edi = edi;
L_91b790: /* 91b790: mov esi, dword ptr [eax + 0x24] */
  esi = R32((uint32_t)(eax + 0x24u));
/* 91b793: mov edi, dword ptr [eax + 0x44] */
  edi = R32((uint32_t)(eax + 0x44u));
/* 91b796: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 91b799: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 91b79b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 91b79c: cmp edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91b79f: mov dword ptr [edi + esi*4 + 0x30], ebx */
  W32((uint32_t)(edi + esi*4 + 0x30u), ebx);
/* 91b7a3: jne 0x91b790 */
  if (!zf) goto L_91b790;
L_91b7a5: /* 91b7a5: mov edi, dword ptr [eax + 0x14] */
  edi = R32((uint32_t)(eax + 0x14u));
/* 91b7a8: lea edx, [edi + ecx] */
  edx = (uint32_t)(edi + ecx);
/* 91b7ab: test dl, 3 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 91b7ae: mov esi, ecx */
  esi = ecx;
/* 91b7b0: je 0x91b7b5 */
  if (zf) goto L_91b7b5;
L_91b7b2: /* 91b7b2: lea esi, [ecx + 4] */
  esi = (uint32_t)(ecx + 0x4u);
L_91b7b5: /* 91b7b5: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 91b7b7: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 91b7b9: mov dword ptr [eax + 0x14], edi */
  W32((uint32_t)(eax + 0x14u), edi);
/* 91b7bc: mov edi, dword ptr [eax + 0xc] */
  edi = R32((uint32_t)(eax + 0xcu));
/* 91b7bf: mov ebx, dword ptr [edi + edx*4] */
  ebx = R32((uint32_t)(edi + edx*4));
/* 91b7c2: lea edx, [edi + edx*4] */
  edx = (uint32_t)(edi + edx*4);
/* 91b7c5: add ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 91b7c7: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 91b7c9: mov edi, dword ptr [eax + 0x18] */
  edi = R32((uint32_t)(eax + 0x18u));
/* 91b7cc: mov edx, dword ptr [eax + 0x24] */
  edx = R32((uint32_t)(eax + 0x24u));
/* 91b7cf: mov esi, dword ptr [eax + 0x50] */
  esi = R32((uint32_t)(eax + 0x50u));
/* 91b7d2: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 91b7d4: mov dword ptr [eax + 0x18], edi */
  W32((uint32_t)(eax + 0x18u), edi);
/* 91b7d7: mov dword ptr [esi + edx*4], ecx */
  W32((uint32_t)(esi + edx*4), ecx);
/* 91b7da: mov esi, dword ptr [eax + 8] */
  esi = R32((uint32_t)(eax + 0x8u));
/* 91b7dd: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 91b7df: mov edx, dword ptr [esi + edx*4] */
  edx = R32((uint32_t)(esi + edx*4));
/* 91b7e2: mov edi, dword ptr [eax + 0x24] */
  edi = R32((uint32_t)(eax + 0x24u));
/* 91b7e5: mov ebx, dword ptr [eax + 0x54] */
  ebx = R32((uint32_t)(eax + 0x54u));
/* 91b7e8: mov dword ptr [ebx + edi*4], edx */
  W32((uint32_t)(ebx + edi*4), edx);
/* 91b7eb: mov esi, dword ptr [eax + 8] */
  esi = R32((uint32_t)(eax + 0x8u));
/* 91b7ee: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 91b7f0: lea edx, [esi + edx*4] */
  edx = (uint32_t)(esi + edx*4);
/* 91b7f3: add dword ptr [edx], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(edx), r);
  }
/* 91b7f5: mov edx, dword ptr [eax + 0x10] */
  edx = R32((uint32_t)(eax + 0x10u));
/* 91b7f8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 91b7fa: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 91b7fd: inc dword ptr [ecx] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ecx), r);
  }
/* 91b7ff: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* 91b802: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 91b803: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 91b804: mov dword ptr [eax + 0x24], ecx */
  W32((uint32_t)(eax + 0x24u), ecx);
/* 91b807: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_91b808: /* 91b808: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 91b809: ret 8 */
  esp += 12; SPILL(); return;
}

void f_91b810(void) {
  LOAD_REGS();
L_91b810: /* 91b810: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 91b813: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 91b817: mov eax, dword ptr [ecx + 0x18] */
  eax = R32((uint32_t)(ecx + 0x18u));
/* 91b81a: mov edx, dword ptr [ecx + 0x34] */
  edx = R32((uint32_t)(ecx + 0x34u));
/* 91b81d: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 91b820: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 91b822: mov dword ptr [esp], edx */
  W32((uint32_t)(esp), edx);
/* 91b826: mov edx, dword ptr [ecx + 0x38] */
  edx = R32((uint32_t)(ecx + 0x38u));
/* 91b829: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 91b82b: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 91b82f: mov edx, dword ptr [ecx + 0x3c] */
  edx = R32((uint32_t)(ecx + 0x3cu));
/* 91b832: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 91b834: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 91b838: mov edx, dword ptr [ecx + 0x48] */
  edx = R32((uint32_t)(ecx + 0x48u));
/* 91b83b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 91b83c: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 91b83e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 91b83f: mov ebp, dword ptr [ecx + 0x30] */
  ebp = R32((uint32_t)(ecx + 0x30u));
/* 91b842: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 91b846: mov edx, dword ptr [ecx + 0x4c] */
  edx = R32((uint32_t)(ecx + 0x4cu));
/* 91b849: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91b84a: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 91b84c: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 91b84e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91b84f: xor ebx, ebx */
  ebx = 0;
/* 91b851: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 91b855: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 91b859: xor edi, edi */
  edi = 0;
/* 91b85b: nop  */
/* 91b85c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_91b860: /* 91b860: mov esi, dword ptr [ecx + 0x14] */
  esi = R32((uint32_t)(ecx + 0x14u));
/* 91b863: mov eax, esi */
  eax = esi;
/* 91b865: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91b866: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91b869: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91b86b: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91b86e: and esi, 0x80000003 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  esi = r;
  }
/* 91b874: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 91b877: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 91b87a: jns 0x91b881 */
  if (!sf) goto L_91b881;
L_91b87c: /* 91b87c: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 91b87d: or esi, 0xfffffffc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 91b880: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_91b881: /* 91b881: lea eax, [esi + edx*4] */
  eax = (uint32_t)(esi + edx*4);
/* 91b884: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 91b887: mov dword ptr [edx + eax*4], ebx */
  W32((uint32_t)(edx + eax*4), ebx);
/* 91b88a: mov esi, dword ptr [ecx + 0x14] */
  esi = R32((uint32_t)(ecx + 0x14u));
/* 91b88d: mov eax, esi */
  eax = esi;
/* 91b88f: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91b890: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91b893: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91b895: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91b898: and esi, 0x80000003 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  esi = r;
  }
/* 91b89e: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 91b8a1: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 91b8a4: jns 0x91b8ab */
  if (!sf) goto L_91b8ab;
L_91b8a6: /* 91b8a6: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 91b8a7: or esi, 0xfffffffc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 91b8aa: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_91b8ab: /* 91b8ab: lea eax, [esi + edx*4 + 0x18] */
  eax = (uint32_t)(esi + edx*4 + 0x18u);
/* 91b8af: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 91b8b2: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 91b8b3: cmp edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91b8b6: mov dword ptr [edx + eax*4], ebx */
  W32((uint32_t)(edx + eax*4), ebx);
/* 91b8b9: jne 0x91b860 */
  if (!zf) goto L_91b860;
L_91b8bb: /* 91b8bb: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 91b8bf: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 91b8c3: mov dword ptr [ebp], ebx */
  W32((uint32_t)(ebp), ebx);
/* 91b8c6: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 91b8c8: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 91b8cc: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 91b8ce: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 91b8d0: xor edi, edi */
  edi = 0;
L_91b8d2: /* 91b8d2: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* 91b8d5: lea esi, [eax + 1] */
  esi = (uint32_t)(eax + 0x1u);
/* 91b8d8: mov eax, esi */
  eax = esi;
/* 91b8da: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91b8db: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91b8de: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91b8e0: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91b8e3: and esi, 0x80000003 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  esi = r;
  }
/* 91b8e9: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 91b8ec: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 91b8ef: jns 0x91b8f6 */
  if (!sf) goto L_91b8f6;
L_91b8f1: /* 91b8f1: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 91b8f2: or esi, 0xfffffffc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 91b8f5: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_91b8f6: /* 91b8f6: lea edx, [esi + eax*4] */
  edx = (uint32_t)(esi + eax*4);
/* 91b8f9: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* 91b8fc: mov dword ptr [eax + edx*4], ebx */
  W32((uint32_t)(eax + edx*4), ebx);
/* 91b8ff: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* 91b902: lea esi, [eax + 1] */
  esi = (uint32_t)(eax + 0x1u);
/* 91b905: mov eax, esi */
  eax = esi;
/* 91b907: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91b908: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91b90b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91b90d: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91b910: and esi, 0x80000003 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  esi = r;
  }
/* 91b916: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 91b919: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 91b91c: jns 0x91b923 */
  if (!sf) goto L_91b923;
L_91b91e: /* 91b91e: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 91b91f: or esi, 0xfffffffc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 91b922: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_91b923: /* 91b923: lea edx, [esi + eax*4 + 0x18] */
  edx = (uint32_t)(esi + eax*4 + 0x18u);
/* 91b927: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* 91b92a: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 91b92b: cmp edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91b92e: mov dword ptr [eax + edx*4], ebx */
  W32((uint32_t)(eax + edx*4), ebx);
/* 91b931: jne 0x91b8d2 */
  if (!zf) goto L_91b8d2;
L_91b933: /* 91b933: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 91b937: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 91b93b: mov dword ptr [ebp + 4], ebx */
  W32((uint32_t)(ebp + 0x4u), ebx);
/* 91b93e: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 91b941: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 91b945: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 91b948: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 91b94b: xor edi, edi */
  edi = 0;
/* 91b94d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_91b950: /* 91b950: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* 91b953: lea esi, [eax + 2] */
  esi = (uint32_t)(eax + 0x2u);
/* 91b956: mov eax, esi */
  eax = esi;
/* 91b958: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91b959: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91b95c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91b95e: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91b961: and esi, 0x80000003 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  esi = r;
  }
/* 91b967: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 91b96a: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 91b96d: jns 0x91b974 */
  if (!sf) goto L_91b974;
L_91b96f: /* 91b96f: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 91b970: or esi, 0xfffffffc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 91b973: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_91b974: /* 91b974: lea eax, [esi + edx*4] */
  eax = (uint32_t)(esi + edx*4);
/* 91b977: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 91b97a: mov dword ptr [edx + eax*4], ebx */
  W32((uint32_t)(edx + eax*4), ebx);
/* 91b97d: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* 91b980: lea esi, [eax + 2] */
  esi = (uint32_t)(eax + 0x2u);
/* 91b983: mov eax, esi */
  eax = esi;
/* 91b985: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91b986: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91b989: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91b98b: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91b98e: and esi, 0x80000003 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  esi = r;
  }
/* 91b994: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 91b997: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 91b99a: jns 0x91b9a1 */
  if (!sf) goto L_91b9a1;
L_91b99c: /* 91b99c: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 91b99d: or esi, 0xfffffffc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 91b9a0: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_91b9a1: /* 91b9a1: lea eax, [esi + edx*4 + 0x18] */
  eax = (uint32_t)(esi + edx*4 + 0x18u);
/* 91b9a5: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 91b9a8: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 91b9a9: cmp edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91b9ac: mov dword ptr [edx + eax*4], ebx */
  W32((uint32_t)(edx + eax*4), ebx);
/* 91b9af: jne 0x91b950 */
  if (!zf) goto L_91b950;
L_91b9b1: /* 91b9b1: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 91b9b5: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 91b9b9: mov dword ptr [ebp + 8], ebx */
  W32((uint32_t)(ebp + 0x8u), ebx);
/* 91b9bc: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 91b9bf: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 91b9c3: mov dword ptr [edx + 8], ebx */
  W32((uint32_t)(edx + 0x8u), ebx);
/* 91b9c6: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 91b9c9: mov esi, dword ptr [ecx + 0x14] */
  esi = R32((uint32_t)(ecx + 0x14u));
/* 91b9cc: mov eax, esi */
  eax = esi;
/* 91b9ce: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91b9cf: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91b9d2: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91b9d4: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91b9d7: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 91b9da: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 91b9dd: and esi, 0x80000003 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  esi = r;
  }
/* 91b9e3: jns 0x91b9ea */
  if (!sf) goto L_91b9ea;
L_91b9e5: /* 91b9e5: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 91b9e6: or esi, 0xfffffffc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 91b9e9: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_91b9ea: /* 91b9ea: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* 91b9ed: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 91b9ef: mov edi, 0x3f800000 */
  edi = 0x3f800000u;
/* 91b9f4: mov dword ptr [eax + edx*4], edi */
  W32((uint32_t)(eax + edx*4), edi);
/* 91b9f7: mov esi, dword ptr [ecx + 0x14] */
  esi = R32((uint32_t)(ecx + 0x14u));
/* 91b9fa: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 91b9fb: mov eax, esi */
  eax = esi;
/* 91b9fd: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91b9fe: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91ba01: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91ba03: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91ba06: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 91ba09: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 91ba0c: and esi, 0x80000003 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  esi = r;
  }
/* 91ba12: jns 0x91ba19 */
  if (!sf) goto L_91ba19;
L_91ba14: /* 91ba14: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 91ba15: or esi, 0xfffffffc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 91ba18: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_91ba19: /* 91ba19: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* 91ba1c: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 91ba1e: mov dword ptr [eax + edx*4 + 0x10], edi */
  W32((uint32_t)(eax + edx*4 + 0x10u), edi);
/* 91ba22: mov esi, dword ptr [ecx + 0x14] */
  esi = R32((uint32_t)(ecx + 0x14u));
/* 91ba25: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 91ba28: mov eax, esi */
  eax = esi;
/* 91ba2a: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91ba2b: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91ba2e: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91ba30: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91ba33: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 91ba36: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 91ba39: and esi, 0x80000003 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  esi = r;
  }
/* 91ba3f: jns 0x91ba46 */
  if (!sf) goto L_91ba46;
L_91ba41: /* 91ba41: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 91ba42: or esi, 0xfffffffc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 91ba45: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_91ba46: /* 91ba46: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* 91ba49: mov ebx, dword ptr [esp + 0x34] */
  ebx = R32((uint32_t)(esp + 0x34u));
/* 91ba4d: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 91ba4f: mov dword ptr [eax + edx*4 + 0x20], edi */
  W32((uint32_t)(eax + edx*4 + 0x20u), edi);
/* 91ba53: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 91ba55: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 91ba59: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 91ba5b: mov esi, dword ptr [ecx + 0x14] */
  esi = R32((uint32_t)(ecx + 0x14u));
/* 91ba5e: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 91ba61: mov ebp, dword ptr [ecx + 0x2c] */
  ebp = R32((uint32_t)(ecx + 0x2cu));
/* 91ba64: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 91ba67: lea edi, [esi + 2] */
  edi = (uint32_t)(esi + 0x2u);
/* 91ba6a: fld dword ptr [ebx + 8] */
  { double v = F32((uint32_t)(ebx + 0x8u)); FPUSH(v); }
/* 91ba6d: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 91ba70: mov eax, edi */
  eax = edi;
/* 91ba72: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91ba73: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91ba76: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91ba78: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91ba7b: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 91ba7e: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 91ba81: and edi, 0x80000003 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  edi = r;
  }
/* 91ba87: jns 0x91ba8e */
  if (!sf) goto L_91ba8e;
L_91ba89: /* 91ba89: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 91ba8a: or edi, 0xfffffffc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 91ba8d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_91ba8e: /* 91ba8e: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 91ba90: lea eax, [ebp + edx*4 + 0x30] */
  eax = (uint32_t)(ebp + edx*4 + 0x30u);
/* 91ba94: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 91ba98: lea edi, [esi + 1] */
  edi = (uint32_t)(esi + 0x1u);
/* 91ba9b: mov eax, edi */
  eax = edi;
/* 91ba9d: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91ba9e: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91baa1: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91baa3: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91baa6: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 91baa9: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 91baac: and edi, 0x80000003 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  edi = r;
  }
/* 91bab2: jns 0x91bab9 */
  if (!sf) goto L_91bab9;
L_91bab4: /* 91bab4: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 91bab5: or edi, 0xfffffffc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 91bab8: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_91bab9: /* 91bab9: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 91babb: mov eax, esi */
  eax = esi;
/* 91babd: lea edi, [ebp + edx*4 + 0x30] */
  edi = (uint32_t)(ebp + edx*4 + 0x30u);
/* 91bac1: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91bac2: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91bac5: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91bac7: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91baca: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 91bacd: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 91bad0: and esi, 0x80000003 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  esi = r;
  }
/* 91bad6: jns 0x91badd */
  if (!sf) goto L_91badd;
L_91bad8: /* 91bad8: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 91bad9: or esi, 0xfffffffc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 91badc: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_91badd: /* 91badd: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91badf: fst dword ptr [ebp + eax*4 + 0x40] */
  WF32((uint32_t)(ebp + eax*4 + 0x40u), ST0);
/* 91bae3: mov esi, dword ptr [esp + 0x38] */
  esi = R32((uint32_t)(esp + 0x38u));
/* 91bae7: lea eax, [ebp + eax*4 + 0x30] */
  eax = (uint32_t)(ebp + eax*4 + 0x30u);
/* 91baeb: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 91baed: fchs  */
  ST0 = -ST0;
/* 91baef: xor ebp, ebp */
  ebp = 0;
/* 91baf1: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
/* 91baf4: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
/* 91baf6: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 91bafa: fchs  */
  ST0 = -ST0;
/* 91bafc: mov dword ptr [edi + 0x10], ebp */
  W32((uint32_t)(edi + 0x10u), ebp);
/* 91baff: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 91bb01: sub ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 91bb03: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 91bb05: mov edx, esi */
  edx = esi;
/* 91bb07: fstp dword ptr [edi + 0x20] */
  WF32((uint32_t)(edi + 0x20u), ST0); FPOP();
/* 91bb0a: mov dword ptr [eax + 0x20], ebp */
  W32((uint32_t)(eax + 0x20u), ebp);
/* 91bb0d: mov edi, 3 */
  edi = 0x3u;
/* 91bb12: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 91bb14: fchs  */
  ST0 = -ST0;
/* 91bb16: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* 91bb19: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 91bb1d: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 91bb1f: nop  */
L_91bb20: /* 91bb20: fld dword ptr [ebx + edx] */
  { double v = F32((uint32_t)(ebx + edx)); FPUSH(v); }
/* 91bb23: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 91bb26: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 91bb27: fsub dword ptr [edx - 4] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0xfffffffcu)));
/* 91bb2a: fstp dword ptr [eax + edx - 4] */
  WF32((uint32_t)(eax + edx + 0xfffffffcu), ST0); FPOP();
/* 91bb2e: jne 0x91bb20 */
  if (!zf) goto L_91bb20;
L_91bb30: /* 91bb30: cmp dword ptr [esp + 0x3c], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x3cu))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91bb34: je 0x91bc89 */
  if (zf) goto L_91bc89;
L_91bb3a: /* 91bb3a: mov edi, dword ptr [ecx + 0x14] */
  edi = R32((uint32_t)(ecx + 0x14u));
/* 91bb3d: mov eax, edi */
  eax = edi;
/* 91bb3f: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91bb40: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91bb43: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91bb45: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91bb48: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 91bb4b: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 91bb4e: and edi, 0x80000003 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  edi = r;
  }
/* 91bb54: jns 0x91bb5b */
  if (!sf) goto L_91bb5b;
L_91bb56: /* 91bb56: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 91bb57: or edi, 0xfffffffc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 91bb5a: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_91bb5b: /* 91bb5b: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* 91bb5e: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 91bb60: mov ebx, 0xbf800000 */
  ebx = 0xbf800000u;
/* 91bb65: mov dword ptr [eax + edx*4 + 0x60], ebx */
  W32((uint32_t)(eax + edx*4 + 0x60u), ebx);
/* 91bb69: mov edi, dword ptr [ecx + 0x14] */
  edi = R32((uint32_t)(ecx + 0x14u));
/* 91bb6c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 91bb6d: mov eax, edi */
  eax = edi;
/* 91bb6f: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91bb70: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91bb73: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91bb75: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91bb78: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 91bb7b: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 91bb7e: and edi, 0x80000003 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  edi = r;
  }
/* 91bb84: jns 0x91bb8b */
  if (!sf) goto L_91bb8b;
L_91bb86: /* 91bb86: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 91bb87: or edi, 0xfffffffc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 91bb8a: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_91bb8b: /* 91bb8b: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* 91bb8e: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 91bb90: mov dword ptr [eax + edx*4 + 0x70], ebx */
  W32((uint32_t)(eax + edx*4 + 0x70u), ebx);
/* 91bb94: mov edi, dword ptr [ecx + 0x14] */
  edi = R32((uint32_t)(ecx + 0x14u));
/* 91bb97: add edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 91bb9a: mov eax, edi */
  eax = edi;
/* 91bb9c: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91bb9d: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91bba0: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91bba2: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91bba5: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 91bba8: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 91bbab: and edi, 0x80000003 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  edi = r;
  }
/* 91bbb1: jns 0x91bbb8 */
  if (!sf) goto L_91bbb8;
L_91bbb3: /* 91bbb3: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 91bbb4: or edi, 0xfffffffc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 91bbb7: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_91bbb8: /* 91bbb8: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* 91bbbb: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 91bbbd: mov dword ptr [eax + edx*4 + 0x80], ebx */
  W32((uint32_t)(eax + edx*4 + 0x80u), ebx);
/* 91bbc4: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 91bbc6: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 91bbca: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 91bbcc: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 91bbcf: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 91bbd2: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 91bbd5: mov esi, dword ptr [ecx + 0x14] */
  esi = R32((uint32_t)(ecx + 0x14u));
/* 91bbd8: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 91bbdb: mov ecx, dword ptr [ecx + 0x2c] */
  ecx = R32((uint32_t)(ecx + 0x2cu));
/* 91bbde: lea edi, [esi + 2] */
  edi = (uint32_t)(esi + 0x2u);
/* 91bbe1: mov eax, edi */
  eax = edi;
/* 91bbe3: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91bbe4: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91bbe7: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91bbe9: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91bbec: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 91bbef: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 91bbf2: and edi, 0x80000003 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  edi = r;
  }
/* 91bbf8: jns 0x91bbff */
  if (!sf) goto L_91bbff;
L_91bbfa: /* 91bbfa: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 91bbfb: or edi, 0xfffffffc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 91bbfe: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_91bbff: /* 91bbff: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 91bc01: lea edi, [esi + 1] */
  edi = (uint32_t)(esi + 0x1u);
/* 91bc04: mov eax, edi */
  eax = edi;
/* 91bc06: lea ebx, [ecx + edx*4 + 0x90] */
  ebx = (uint32_t)(ecx + edx*4 + 0x90u);
/* 91bc0d: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91bc0e: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91bc11: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91bc13: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91bc16: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 91bc19: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 91bc1c: and edi, 0x80000003 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  edi = r;
  }
/* 91bc22: jns 0x91bc29 */
  if (!sf) goto L_91bc29;
L_91bc24: /* 91bc24: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 91bc25: or edi, 0xfffffffc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 91bc28: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_91bc29: /* 91bc29: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91bc2b: lea edi, [ecx + eax*4 + 0x90] */
  edi = (uint32_t)(ecx + eax*4 + 0x90u);
/* 91bc32: mov eax, esi */
  eax = esi;
/* 91bc34: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91bc35: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91bc38: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91bc3a: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91bc3d: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 91bc40: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 91bc43: and esi, 0x80000003 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  esi = r;
  }
/* 91bc49: jns 0x91bc50 */
  if (!sf) goto L_91bc50;
L_91bc4b: /* 91bc4b: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 91bc4c: or esi, 0xfffffffc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 91bc4f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_91bc50: /* 91bc50: fld dword ptr [0xa08220] */
  { double v = F32((uint32_t)(0xa08220u)); FPUSH(v); }
/* 91bc56: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 91bc58: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 91bc5a: lea eax, [ecx + edx*4 + 0x90] */
  eax = (uint32_t)(ecx + edx*4 + 0x90u);
/* 91bc61: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
/* 91bc63: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* 91bc66: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 91bc68: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
/* 91bc6b: mov dword ptr [edi + 0x10], ebp */
  W32((uint32_t)(edi + 0x10u), ebp);
/* 91bc6e: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 91bc70: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 91bc72: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 91bc78: fstp dword ptr [edi + 0x20] */
  WF32((uint32_t)(edi + 0x20u), ST0); FPOP();
/* 91bc7b: mov dword ptr [ebx + 0x20], ebp */
  W32((uint32_t)(ebx + 0x20u), ebp);
/* 91bc7e: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 91bc84: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 91bc86: fstp dword ptr [ebx + 0x10] */
  WF32((uint32_t)(ebx + 0x10u), ST0); FPOP();
L_91bc89: /* 91bc89: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 91bc8d: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 91bc91: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 91bc92: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91bc93: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 91bc94: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 91bc96: mov edx, 3 */
  edx = 0x3u;
/* 91bc9b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 91bc9c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_91bca0: /* 91bca0: mov dword ptr [ecx + eax], 0xff7fffff */
  W32((uint32_t)(ecx + eax), 0xff7fffffu);
/* 91bca7: mov dword ptr [eax], 0x7f7fffff */
  W32((uint32_t)(eax), 0x7f7fffffu);
/* 91bcad: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91bcb0: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 91bcb1: jne 0x91bca0 */
  if (!zf) goto L_91bca0;
L_91bcb3: /* 91bcb3: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 91bcb6: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_91bcc0(void) {
  LOAD_REGS();
L_91bcc0: /* 91bcc0: sub esp, 0x8c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 91bcc6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 91bcc7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 91bcc8: mov ebp, dword ptr [esp + 0x98] */
  ebp = R32((uint32_t)(esp + 0x98u));
/* 91bccf: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 91bcd2: mov ecx, dword ptr [ebp + 0x58] */
  ecx = R32((uint32_t)(ebp + 0x58u));
/* 91bcd5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91bcd6: mov esi, dword ptr [esp + 0xa0] */
  esi = R32((uint32_t)(esp + 0xa0u));
/* 91bcdd: mov edx, dword ptr [esi + 0xb4] */
  edx = R32((uint32_t)(esi + 0xb4u));
/* 91bce3: mov dword ptr [ecx + eax*8], edx */
  W32((uint32_t)(ecx + eax*8), edx);
/* 91bce6: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 91bce9: mov ecx, dword ptr [ebp + 0x58] */
  ecx = R32((uint32_t)(ebp + 0x58u));
/* 91bcec: mov edx, dword ptr [esi + 0xb8] */
  edx = R32((uint32_t)(esi + 0xb8u));
/* 91bcf2: mov dword ptr [ecx + eax*8 + 4], edx */
  W32((uint32_t)(ecx + eax*8 + 0x4u), edx);
/* 91bcf6: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 91bcfc: mov ecx, dword ptr [esp + 0xa4] */
  ecx = R32((uint32_t)(esp + 0xa4u));
/* 91bd03: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 91bd06: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91bd08: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91bd09: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 91bd0d: lea edx, [esp + 0x5c] */
  edx = (uint32_t)(esp + 0x5cu);
/* 91bd11: lea ebx, [eax + 0x20] */
  ebx = (uint32_t)(eax + 0x20u);
/* 91bd14: lea ecx, [esi + 0xc4] */
  ecx = (uint32_t)(esi + 0xc4u);
/* 91bd1a: mov dword ptr [esp + 0x10], 4 */
  W32((uint32_t)(esp + 0x10u), 0x4u);
L_91bd22: /* 91bd22: mov eax, ebx */
  eax = ebx;
/* 91bd24: mov edi, 4 */
  edi = 0x4u;
/* 91bd29: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_91bd30: /* 91bd30: fld dword ptr [eax - 0x20] */
  { double v = F32((uint32_t)(eax + 0xffffffe0u)); FPUSH(v); }
/* 91bd33: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 91bd36: fmul dword ptr [ecx - 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 91bd39: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91bd3c: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 91bd3d: fld dword ptr [eax - 0x14] */
  { double v = F32((uint32_t)(eax + 0xffffffecu)); FPUSH(v); }
/* 91bd40: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 91bd43: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91bd45: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 91bd48: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 91bd4b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91bd4d: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* 91bd50: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 91bd52: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91bd54: fstp dword ptr [edx - 4] */
  WF32((uint32_t)(edx + 0xfffffffcu), ST0); FPOP();
/* 91bd57: jne 0x91bd30 */
  if (!zf) goto L_91bd30;
L_91bd59: /* 91bd59: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 91bd5d: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91bd60: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 91bd61: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 91bd65: jne 0x91bd22 */
  if (!zf) goto L_91bd22;
L_91bd67: /* 91bd67: mov ebx, dword ptr [esi + 0xb8] */
  ebx = R32((uint32_t)(esi + 0xb8u));
/* 91bd6d: cmp ebx, -1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91bd70: je 0x91bdec */
  if (zf) goto L_91bdec;
L_91bd72: /* 91bd72: mov ecx, dword ptr [esp + 0xa8] */
  ecx = R32((uint32_t)(esp + 0xa8u));
/* 91bd79: mov eax, ebx */
  eax = ebx;
/* 91bd7b: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 91bd7e: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91bd80: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91bd83: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 91bd87: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 91bd8b: lea ecx, [esi + 0x104] */
  ecx = (uint32_t)(esi + 0x104u);
/* 91bd91: mov dword ptr [esp + 0x10], 4 */
  W32((uint32_t)(esp + 0x10u), 0x4u);
/* 91bd99: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_91bda0: /* 91bda0: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 91bda4: mov edi, 4 */
  edi = 0x4u;
/* 91bda9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_91bdb0: /* 91bdb0: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 91bdb3: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 91bdb6: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 91bdb9: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91bdbc: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 91bdbd: fld dword ptr [eax - 0x24] */
  { double v = F32((uint32_t)(eax + 0xffffffdcu)); FPUSH(v); }
/* 91bdc0: fmul dword ptr [ecx - 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 91bdc3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91bdc5: fld dword ptr [eax - 0x14] */
  { double v = F32((uint32_t)(eax + 0xffffffecu)); FPUSH(v); }
/* 91bdc8: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 91bdcb: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91bdcd: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* 91bdd0: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 91bdd2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91bdd4: fstp dword ptr [edx - 4] */
  WF32((uint32_t)(edx + 0xfffffffcu), ST0); FPOP();
/* 91bdd7: jne 0x91bdb0 */
  if (!zf) goto L_91bdb0;
L_91bdd9: /* 91bdd9: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 91bddd: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91bde0: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 91bde1: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 91bde5: jne 0x91bda0 */
  if (!zf) goto L_91bda0;
L_91bde7: /* 91bde7: jmp 0x91be8c */
  goto L_91be8c;
L_91bdec: /* 91bdec: mov edx, dword ptr [esi + 0xfc] */
  edx = R32((uint32_t)(esi + 0xfcu));
/* 91bdf2: mov eax, dword ptr [esi + 0x100] */
  eax = R32((uint32_t)(esi + 0x100u));
/* 91bdf8: mov ecx, dword ptr [esi + 0x104] */
  ecx = R32((uint32_t)(esi + 0x104u));
/* 91bdfe: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 91be02: mov edx, dword ptr [esi + 0x108] */
  edx = R32((uint32_t)(esi + 0x108u));
/* 91be08: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 91be0c: mov eax, dword ptr [esi + 0x10c] */
  eax = R32((uint32_t)(esi + 0x10cu));
/* 91be12: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 91be16: mov ecx, dword ptr [esi + 0x110] */
  ecx = R32((uint32_t)(esi + 0x110u));
/* 91be1c: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 91be20: mov edx, dword ptr [esi + 0x114] */
  edx = R32((uint32_t)(esi + 0x114u));
/* 91be26: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 91be2a: mov eax, dword ptr [esi + 0x118] */
  eax = R32((uint32_t)(esi + 0x118u));
/* 91be30: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* 91be34: mov ecx, dword ptr [esi + 0x11c] */
  ecx = R32((uint32_t)(esi + 0x11cu));
/* 91be3a: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* 91be3e: mov edx, dword ptr [esi + 0x120] */
  edx = R32((uint32_t)(esi + 0x120u));
/* 91be44: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 91be48: mov eax, dword ptr [esi + 0x124] */
  eax = R32((uint32_t)(esi + 0x124u));
/* 91be4e: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 91be52: mov ecx, dword ptr [esi + 0x128] */
  ecx = R32((uint32_t)(esi + 0x128u));
/* 91be58: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 91be5c: mov edx, dword ptr [esi + 0x12c] */
  edx = R32((uint32_t)(esi + 0x12cu));
/* 91be62: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* 91be66: mov eax, dword ptr [esi + 0x130] */
  eax = R32((uint32_t)(esi + 0x130u));
/* 91be6c: mov dword ptr [esp + 0x48], ecx */
  W32((uint32_t)(esp + 0x48u), ecx);
/* 91be70: mov ecx, dword ptr [esi + 0x134] */
  ecx = R32((uint32_t)(esi + 0x134u));
/* 91be76: mov dword ptr [esp + 0x4c], edx */
  W32((uint32_t)(esp + 0x4cu), edx);
/* 91be7a: mov edx, dword ptr [esi + 0x138] */
  edx = R32((uint32_t)(esi + 0x138u));
/* 91be80: mov dword ptr [esp + 0x50], eax */
  W32((uint32_t)(esp + 0x50u), eax);
/* 91be84: mov dword ptr [esp + 0x54], ecx */
  W32((uint32_t)(esp + 0x54u), ecx);
/* 91be88: mov dword ptr [esp + 0x58], edx */
  W32((uint32_t)(esp + 0x58u), edx);
L_91be8c: /* 91be8c: xor ecx, ecx */
  ecx = 0;
/* 91be8e: lea eax, [esi + 0x148] */
  eax = (uint32_t)(esi + 0x148u);
/* 91be94: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91be95: add esi, 0x13c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x13cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 91be9b: cmp ebx, -1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91be9e: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 91bea1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91bea2: lea edx, [esp + 0x54] */
  edx = (uint32_t)(esp + 0x54u);
/* 91bea6: lea eax, [esp + 0x94] */
  eax = (uint32_t)(esp + 0x94u);
/* 91bead: shl ebx, 6 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 91beb0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91beb1: mov ecx, dword ptr [esp + 0xb4] */
  ecx = R32((uint32_t)(esp + 0xb4u));
/* 91beb8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91beb9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91beba: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 91bebe: lea edx, [ebx + ecx + 0x30] */
  edx = (uint32_t)(ebx + ecx + 0x30u);
/* 91bec2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91bec3: add eax, 0x30 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91bec6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91bec7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 91bec8: call 0x91b810 */
  esp -= 4; W32(esp, 0x91becdu); SPILL(); f_91b810(); if (g_unwind) return; RELOAD();
/* 91becd: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 91becf: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 91bed0: call 0x91b610 */
  esp -= 4; W32(esp, 0x91bed5u); SPILL(); f_91b610(); if (g_unwind) return; RELOAD();
/* 91bed5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 91bed6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91bed7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 91bed8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 91bed9: add esp, 0x8c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 91bedf: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_91bef0(void) {
  LOAD_REGS();
L_91bef0: /* 91bef0: sub esp, 0x90 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x90u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 91bef6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 91bef7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 91bef8: mov ebx, dword ptr [esp + 0xa0] */
  ebx = R32((uint32_t)(esp + 0xa0u));
/* 91beff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91bf00: mov esi, dword ptr [esp + 0xa0] */
  esi = R32((uint32_t)(esp + 0xa0u));
/* 91bf07: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 91bf0a: mov ecx, dword ptr [esi + 0x34] */
  ecx = R32((uint32_t)(esi + 0x34u));
/* 91bf0d: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 91bf10: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91bf12: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 91bf16: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 91bf19: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91bf1b: mov dword ptr [esp + 0x50], ecx */
  W32((uint32_t)(esp + 0x50u), ecx);
/* 91bf1f: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 91bf22: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91bf24: mov dword ptr [esp + 0x5c], ecx */
  W32((uint32_t)(esp + 0x5cu), ecx);
/* 91bf28: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 91bf2b: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91bf2d: mov dword ptr [esp + 0x60], ecx */
  W32((uint32_t)(esp + 0x60u), ecx);
/* 91bf31: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* 91bf34: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91bf36: mov dword ptr [esp + 0x38], ecx */
  W32((uint32_t)(esp + 0x38u), ecx);
/* 91bf3a: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* 91bf3d: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 91bf3f: mov eax, dword ptr [ebx + 0x194] */
  eax = R32((uint32_t)(ebx + 0x194u));
/* 91bf45: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91bf46: mov edi, dword ptr [ebx + 0x1a0] */
  edi = R32((uint32_t)(ebx + 0x1a0u));
/* 91bf4c: mov ebp, 1 */
  ebp = 0x1u;
/* 91bf51: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91bf53: mov dword ptr [esp + 0x68], ecx */
  W32((uint32_t)(esp + 0x68u), ecx);
/* 91bf57: mov dword ptr [esp + 0x58], edi */
  W32((uint32_t)(esp + 0x58u), edi);
/* 91bf5b: jne 0x91bf63 */
  if (!zf) goto L_91bf63;
L_91bf5d: /* 91bf5d: mov dword ptr [esp + 0x4c], ebp */
  W32((uint32_t)(esp + 0x4cu), ebp);
/* 91bf61: jmp 0x91bf73 */
  goto L_91bf73;
L_91bf63: /* 91bf63: xor ecx, ecx */
  ecx = 0;
/* 91bf65: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91bf68: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 91bf6b: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91bf6c: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 91bf6f: mov dword ptr [esp + 0x4c], ecx */
  W32((uint32_t)(esp + 0x4cu), ecx);
L_91bf73: /* 91bf73: cmp dword ptr [ebx + 0xb8], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0xb8u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91bf7a: jne 0x91bf88 */
  if (!zf) goto L_91bf88;
L_91bf7c: /* 91bf7c: test edi, 0x100 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 91bf82: mov dword ptr [esp + 0x6c], ebp */
  W32((uint32_t)(esp + 0x6cu), ebp);
/* 91bf86: jne 0x91bf90 */
  if (!zf) goto L_91bf90;
L_91bf88: /* 91bf88: mov dword ptr [esp + 0x6c], 0 */
  W32((uint32_t)(esp + 0x6cu), 0x0u);
L_91bf90: /* 91bf90: mov ebp, dword ptr [ebx + 0x54] */
  ebp = R32((uint32_t)(ebx + 0x54u));
/* 91bf93: mov edx, dword ptr [ebx + 0x58] */
  edx = R32((uint32_t)(ebx + 0x58u));
/* 91bf96: lea eax, [esp + 0x30] */
  eax = (uint32_t)(esp + 0x30u);
/* 91bf9a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91bf9b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 91bf9c: mov dword ptr [esp + 0x58], edx */
  W32((uint32_t)(esp + 0x58u), edx);
/* 91bfa0: mov dword ptr [esp + 0x64], 0x3f800000 */
  W32((uint32_t)(esp + 0x64u), 0x3f800000u);
/* 91bfa8: call 0x90e6a0 */
  esp -= 4; W32(esp, 0x91bfadu); SPILL(); f_90e6a0(); if (g_unwind) return; RELOAD();
/* 91bfad: fld dword ptr [ebx + 0x160] */
  { double v = F32((uint32_t)(ebx + 0x160u)); FPUSH(v); }
/* 91bfb3: fsub dword ptr [esp + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x30u)));
/* 91bfb7: lea edi, [ebx + 0x160] */
  edi = (uint32_t)(ebx + 0x160u);
/* 91bfbd: lea ecx, [esp + 0x88] */
  ecx = (uint32_t)(esp + 0x88u);
/* 91bfc4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 91bfc5: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 91bfc9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91bfca: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 91bfcd: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 91bfce: fsub dword ptr [esp + 0x40] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x40u)));
/* 91bfd2: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 91bfd6: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 91bfd9: fsub dword ptr [esp + 0x44] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x44u)));
/* 91bfdd: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 91bfe1: call 0x90e330 */
  esp -= 4; W32(esp, 0x91bfe6u); SPILL(); f_90e330(); if (g_unwind) return; RELOAD();
/* 91bfe6: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 91bfea: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 91bfec: je 0x91c029 */
  if (zf) goto L_91c029;
L_91bfee: /* 91bfee: lea edx, [esp + 0x40] */
  edx = (uint32_t)(esp + 0x40u);
/* 91bff2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91bff3: mov ebp, eax */
  ebp = eax;
/* 91bff5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 91bff6: call 0x90e6a0 */
  esp -= 4; W32(esp, 0x91bffbu); SPILL(); f_90e6a0(); if (g_unwind) return; RELOAD();
/* 91bffb: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 91bffd: fsub dword ptr [esp + 0x40] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x40u)));
/* 91c001: lea eax, [esp + 0x70] */
  eax = (uint32_t)(esp + 0x70u);
/* 91c005: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91c006: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91c007: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 91c00b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 91c00c: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 91c00f: fsub dword ptr [esp + 0x50] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x50u)));
/* 91c013: fstp dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 91c017: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 91c01a: fsub dword ptr [esp + 0x54] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x54u)));
/* 91c01e: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 91c022: call 0x90e330 */
  esp -= 4; W32(esp, 0x91c027u); SPILL(); f_90e330(); if (g_unwind) return; RELOAD();
/* 91c027: jmp 0x91c06a */
  goto L_91c06a;
L_91c029: /* 91c029: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* 91c02d: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 91c030: je 0x91c052 */
  if (zf) goto L_91c052;
L_91c032: /* 91c032: mov ecx, dword ptr [ebx + 0x188] */
  ecx = R32((uint32_t)(ebx + 0x188u));
/* 91c038: mov edx, dword ptr [ebx + 0x18c] */
  edx = R32((uint32_t)(ebx + 0x18cu));
/* 91c03e: mov eax, dword ptr [ebx + 0x190] */
  eax = R32((uint32_t)(ebx + 0x190u));
/* 91c044: mov dword ptr [esp + 0x70], ecx */
  W32((uint32_t)(esp + 0x70u), ecx);
/* 91c048: mov dword ptr [esp + 0x74], edx */
  W32((uint32_t)(esp + 0x74u), edx);
/* 91c04c: mov dword ptr [esp + 0x78], eax */
  W32((uint32_t)(esp + 0x78u), eax);
/* 91c050: jmp 0x91c06a */
  goto L_91c06a;
L_91c052: /* 91c052: mov dword ptr [esp + 0x78], 0 */
  W32((uint32_t)(esp + 0x78u), 0x0u);
/* 91c05a: mov dword ptr [esp + 0x74], 0 */
  W32((uint32_t)(esp + 0x74u), 0x0u);
/* 91c062: mov dword ptr [esp + 0x70], 0 */
  W32((uint32_t)(esp + 0x70u), 0x0u);
L_91c06a: /* 91c06a: fld dword ptr [esp + 0x88] */
  { double v = F32((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 91c071: mov ecx, dword ptr [esi + 0x24] */
  ecx = R32((uint32_t)(esi + 0x24u));
/* 91c074: fsub dword ptr [esp + 0x70] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x70u)));
/* 91c078: mov edx, dword ptr [esi + 0x58] */
  edx = R32((uint32_t)(esi + 0x58u));
/* 91c07b: mov eax, dword ptr [ebx + 0xb4] */
  eax = R32((uint32_t)(ebx + 0xb4u));
/* 91c081: lea edi, [ebx + 0x16c] */
  edi = (uint32_t)(ebx + 0x16cu);
/* 91c087: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 91c08b: xor ebp, ebp */
  ebp = 0;
/* 91c08d: fld dword ptr [esp + 0x8c] */
  { double v = F32((uint32_t)(esp + 0x8cu)); FPUSH(v); }
/* 91c094: fsub dword ptr [esp + 0x74] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x74u)));
/* 91c098: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 91c09c: fld dword ptr [esp + 0x90] */
  { double v = F32((uint32_t)(esp + 0x90u)); FPUSH(v); }
/* 91c0a3: fsub dword ptr [esp + 0x78] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x78u)));
/* 91c0a7: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 91c0ab: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 91c0af: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 91c0b2: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 91c0b6: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 91c0b9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91c0bb: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 91c0bf: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 91c0c1: mov dword ptr [edx + ecx*8], eax */
  W32((uint32_t)(edx + ecx*8), eax);
/* 91c0c4: mov ecx, dword ptr [esi + 0x24] */
  ecx = R32((uint32_t)(esi + 0x24u));
/* 91c0c7: mov edx, dword ptr [esi + 0x58] */
  edx = R32((uint32_t)(esi + 0x58u));
/* 91c0ca: mov eax, dword ptr [ebx + 0xb8] */
  eax = R32((uint32_t)(ebx + 0xb8u));
/* 91c0d0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91c0d2: mov dword ptr [edx + ecx*8 + 4], eax */
  W32((uint32_t)(edx + ecx*8 + 0x4u), eax);
/* 91c0d6: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 91c0da: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_91c0e0: /* 91c0e0: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 91c0e3: mov eax, ecx */
  eax = ecx;
/* 91c0e5: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91c0e6: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91c0e9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91c0eb: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91c0ee: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91c0f4: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 91c0f7: lea eax, [ebp + edx*4] */
  eax = (uint32_t)(ebp + edx*4);
/* 91c0fb: jns 0x91c102 */
  if (!sf) goto L_91c102;
L_91c0fd: /* 91c0fd: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91c0fe: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91c101: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91c102: /* 91c102: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 91c105: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 91c108: mov dword ptr [edx + ecx*4], 0 */
  W32((uint32_t)(edx + ecx*4), 0x0u);
/* 91c10f: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 91c112: mov eax, ecx */
  eax = ecx;
/* 91c114: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91c115: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91c118: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91c11a: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91c11d: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91c123: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 91c126: lea edx, [ebp + eax*4] */
  edx = (uint32_t)(ebp + eax*4);
/* 91c12a: jns 0x91c131 */
  if (!sf) goto L_91c131;
L_91c12c: /* 91c12c: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91c12d: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91c130: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91c131: /* 91c131: lea eax, [ecx + edx*4 + 0x18] */
  eax = (uint32_t)(ecx + edx*4 + 0x18u);
/* 91c135: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 91c138: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 91c139: cmp ebp, 6 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91c13c: mov dword ptr [ecx + eax*4], 0 */
  W32((uint32_t)(ecx + eax*4), 0x0u);
/* 91c143: jne 0x91c0e0 */
  if (!zf) goto L_91c0e0;
L_91c145: /* 91c145: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 91c149: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 91c14d: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 91c151: mov dword ptr [edx], 0 */
  W32((uint32_t)(edx), 0x0u);
/* 91c157: mov edx, dword ptr [esp + 0x68] */
  edx = R32((uint32_t)(esp + 0x68u));
/* 91c15b: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 91c161: mov dword ptr [ecx], 0 */
  W32((uint32_t)(ecx), 0x0u);
/* 91c167: mov dword ptr [edx], 0 */
  W32((uint32_t)(edx), 0x0u);
/* 91c16d: xor ebp, ebp */
  ebp = 0;
/* 91c16f: nop  */
L_91c170: /* 91c170: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 91c173: mov eax, ecx */
  eax = ecx;
/* 91c175: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91c176: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91c179: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91c17b: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91c17e: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91c184: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 91c187: lea edx, [ebp + eax*4] */
  edx = (uint32_t)(ebp + eax*4);
/* 91c18b: jns 0x91c192 */
  if (!sf) goto L_91c192;
L_91c18d: /* 91c18d: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91c18e: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91c191: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91c192: /* 91c192: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 91c195: mov edx, dword ptr [edi + ebp*4] */
  edx = R32((uint32_t)(edi + ebp*4));
/* 91c198: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 91c19b: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 91c19c: cmp ebp, 3 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91c19f: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 91c1a2: jl 0x91c170 */
  if ((sf != of)) goto L_91c170;
L_91c1a4: /* 91c1a4: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 91c1a7: mov eax, ecx */
  eax = ecx;
/* 91c1a9: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91c1aa: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91c1ad: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91c1af: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91c1b2: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 91c1b5: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 91c1b8: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91c1be: jns 0x91c1c5 */
  if (!sf) goto L_91c1c5;
L_91c1c0: /* 91c1c0: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91c1c1: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91c1c4: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91c1c5: /* 91c1c5: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 91c1c9: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91c1cb: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 91c1ce: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 91c1d1: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 91c1d5: lea eax, [ecx + eax*4 + 0x30] */
  eax = (uint32_t)(ecx + eax*4 + 0x30u);
/* 91c1d9: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 91c1dc: xor ebp, ebp */
  ebp = 0;
/* 91c1de: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91c1e0: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 91c1e2: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 91c1e6: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 91c1e8: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 91c1ec: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 91c1ef: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91c1f1: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* 91c1f4: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 91c1f8: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 91c1fb: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 91c1ff: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 91c201: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91c203: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
/* 91c206: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 91c20a: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91c20c: je 0x91c285 */
  if (zf) goto L_91c285;
L_91c20e: /* 91c20e: mov edi, edi */
  edi = edi;
L_91c210: /* 91c210: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 91c213: fld dword ptr [edi + ebp*4] */
  { double v = F32((uint32_t)(edi + ebp*4)); FPUSH(v); }
/* 91c216: mov eax, ecx */
  eax = ecx;
/* 91c218: fchs  */
  ST0 = -ST0;
/* 91c21a: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91c21b: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91c21e: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91c220: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91c223: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91c229: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 91c22c: lea eax, [ebp + edx*4] */
  eax = (uint32_t)(ebp + edx*4);
/* 91c230: jns 0x91c237 */
  if (!sf) goto L_91c237;
L_91c232: /* 91c232: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91c233: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91c236: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91c237: /* 91c237: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 91c23a: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 91c23b: cmp ebp, 3 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91c23e: lea ecx, [ecx + eax*4 + 0x18] */
  ecx = (uint32_t)(ecx + eax*4 + 0x18u);
/* 91c242: fstp dword ptr [edx + ecx*4] */
  WF32((uint32_t)(edx + ecx*4), ST0); FPOP();
/* 91c245: jl 0x91c210 */
  if ((sf != of)) goto L_91c210;
L_91c247: /* 91c247: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 91c24a: mov eax, ecx */
  eax = ecx;
/* 91c24c: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91c24d: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91c250: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91c252: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91c255: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 91c258: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 91c25b: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91c261: jns 0x91c268 */
  if (!sf) goto L_91c268;
L_91c263: /* 91c263: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91c264: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91c267: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91c268: /* 91c268: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91c26a: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 91c26d: lea edx, [ecx + eax*4 + 0x90] */
  edx = (uint32_t)(ecx + eax*4 + 0x90u);
/* 91c274: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91c275: lea eax, [esp + 0x44] */
  eax = (uint32_t)(esp + 0x44u);
/* 91c279: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 91c27a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 91c27b: call 0x91cb40 */
  esp -= 4; W32(esp, 0x91c280u); SPILL(); f_91cb40(); if (g_unwind) return; RELOAD();
/* 91c280: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 91c283: xor ebp, ebp */
  ebp = 0;
L_91c285: /* 91c285: fld dword ptr [ebx + 0x178] */
  { double v = F32((uint32_t)(ebx + 0x178u)); FPUSH(v); }
/* 91c28b: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 91c28f: fchs  */
  ST0 = -ST0;
/* 91c291: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 91c293: mov ecx, dword ptr [esp + 0x58] */
  ecx = R32((uint32_t)(esp + 0x58u));
/* 91c297: test cl, 8 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 91c29a: je 0x91c2a6 */
  if (zf) goto L_91c2a6;
L_91c29c: /* 91c29c: fld dword ptr [ebx + 0x1b0] */
  { double v = F32((uint32_t)(ebx + 0x1b0u)); FPUSH(v); }
/* 91c2a2: fchs  */
  ST0 = -ST0;
/* 91c2a4: jmp 0x91c2ac */
  goto L_91c2ac;
L_91c2a6: /* 91c2a6: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_91c2ac: /* 91c2ac: test cl, 4 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 91c2af: mov edx, dword ptr [esp + 0x60] */
  edx = R32((uint32_t)(esp + 0x60u));
/* 91c2b3: mov eax, dword ptr [esp + 0x64] */
  eax = R32((uint32_t)(esp + 0x64u));
/* 91c2b7: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 91c2b9: mov dword ptr [eax], 0x7f7fffff */
  W32((uint32_t)(eax), 0x7f7fffffu);
/* 91c2bf: je 0x91c2de */
  if (zf) goto L_91c2de;
L_91c2c1: /* 91c2c1: fld dword ptr [ebx + 0x1ac] */
  { double v = F32((uint32_t)(ebx + 0x1acu)); FPUSH(v); }
/* 91c2c7: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 91c2cb: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 91c2cd: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 91c2cf: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 91c2d5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 91c2d7: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 91c2da: jp 0x91c2de */
  if (pf) goto L_91c2de;
L_91c2dc: /* 91c2dc: mov dword ptr [edx], ebp */
  W32((uint32_t)(edx), ebp);
L_91c2de: /* 91c2de: test cl, 2 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 91c2e1: je 0x91c30a */
  if (zf) goto L_91c30a;
L_91c2e3: /* 91c2e3: fld dword ptr [ebx + 0x1a8] */
  { double v = F32((uint32_t)(ebx + 0x1a8u)); FPUSH(v); }
/* 91c2e9: fchs  */
  ST0 = -ST0;
/* 91c2eb: fcomp dword ptr [esp + 0x28] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x28u)));
  FPOP();
/* 91c2ef: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 91c2f1: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 91c2f4: jne 0x91c30a */
  if (!zf) goto L_91c30a;
L_91c2f6: /* 91c2f6: fld dword ptr [ebx + 0x1a4] */
  { double v = F32((uint32_t)(ebx + 0x1a4u)); FPUSH(v); }
/* 91c2fc: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 91c300: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 91c304: fchs  */
  ST0 = -ST0;
/* 91c306: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 91c308: jmp 0x91c30e */
  goto L_91c30e;
L_91c30a: /* 91c30a: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
L_91c30e: /* 91c30e: test ch, 1 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 91c311: je 0x91c335 */
  if (zf) goto L_91c335;
L_91c313: /* 91c313: fld dword ptr [ebx + 0x190] */
  { double v = F32((uint32_t)(ebx + 0x190u)); FPUSH(v); }
/* 91c319: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 91c31c: fld dword ptr [ebx + 0x18c] */
  { double v = F32((uint32_t)(ebx + 0x18cu)); FPUSH(v); }
/* 91c322: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 91c325: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91c327: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 91c329: fmul dword ptr [ebx + 0x188] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x188u)));
/* 91c32f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91c331: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 91c333: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
L_91c335: /* 91c335: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 91c339: cmp edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91c33b: je 0x91c89d */
  if (zf) goto L_91c89d;
L_91c341: /* 91c341: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  ecx = r;
  }
/* 91c344: je 0x91c39a */
  if (zf) goto L_91c39a;
L_91c346: /* 91c346: fld dword ptr [ebx + 0x17c] */
  { double v = F32((uint32_t)(ebx + 0x17cu)); FPUSH(v); }
/* 91c34c: mov eax, dword ptr [ebx + 0x184] */
  eax = R32((uint32_t)(ebx + 0x184u));
/* 91c352: fld dword ptr [ebx + 0x180] */
  { double v = F32((uint32_t)(ebx + 0x180u)); FPUSH(v); }
/* 91c358: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 91c35c: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 91c360: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 91c363: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 91c365: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 91c368: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91c36a: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 91c36c: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 91c36e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91c370: fst dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0);
/* 91c374: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 91c376: fsubr st(2) */
  ST0 = STI(2) - ST0;
/* 91c378: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 91c37c: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 91c380: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 91c383: fsubr st(1) */
  ST0 = STI(1) - ST0;
/* 91c385: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 91c389: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 91c38b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 91c38d: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 91c391: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 91c394: fsubr dword ptr [esp + 0x18] */
  ST0 = (F32((uint32_t)(esp + 0x18u))) - ST0;
/* 91c398: jmp 0x91c3c2 */
  goto L_91c3c2;
L_91c39a: /* 91c39a: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 91c39e: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 91c3a0: fsubr dword ptr [esp + 0x1c] */
  ST0 = (F32((uint32_t)(esp + 0x1cu))) - ST0;
/* 91c3a4: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 91c3a8: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 91c3ac: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 91c3af: fsubr dword ptr [esp + 0x20] */
  ST0 = (F32((uint32_t)(esp + 0x20u))) - ST0;
/* 91c3b3: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 91c3b7: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 91c3bb: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 91c3be: fsubr dword ptr [esp + 0x24] */
  ST0 = (F32((uint32_t)(esp + 0x24u))) - ST0;
L_91c3c2: /* 91c3c2: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 91c3c6: xor eax, eax */
  eax = 0;
/* 91c3c8: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 91c3ce: mov edi, edi */
  edi = edi;
L_91c3d0: /* 91c3d0: fld dword ptr [esp + eax*4 + 0x10] */
  { double v = F32((uint32_t)(esp + eax*4 + 0x10u)); FPUSH(v); }
/* 91c3d4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 91c3d5: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91c3d8: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 91c3da: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 91c3dc: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 91c3de: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 91c3e0: jl 0x91c3d0 */
  if ((sf != of)) goto L_91c3d0;
L_91c3e2: /* 91c3e2: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 91c3e8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 91c3ea: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 91c3ed: jne 0x91c41b */
  if (!zf) goto L_91c41b;
L_91c3ef: /* 91c3ef: fsqrt  */
  ST0 = sqrt(ST0);
/* 91c3f1: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 91c3f7: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 91c3f9: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 91c3fd: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 91c3ff: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 91c403: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 91c407: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 91c409: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 91c40d: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 91c411: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 91c413: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 91c417: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 91c419: jmp 0x91c43b */
  goto L_91c43b;
L_91c41b: /* 91c41b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 91c41d: mov dword ptr [esp + 0x10], 0x3f800000 */
  W32((uint32_t)(esp + 0x10u), 0x3f800000u);
/* 91c425: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 91c42b: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 91c433: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
L_91c43b: /* 91c43b: cmp edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91c43e: fcomp dword ptr [0xa0892c] */
  fpu_com(ST0, F32((uint32_t)(0xa0892cu)));
  FPOP();
/* 91c444: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 91c446: jne 0x91c45a */
  if (!zf) goto L_91c45a;
L_91c448: /* 91c448: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 91c44b: jp 0x91c618 */
  if (pf) goto L_91c618;
L_91c451: /* 91c451: mov dword ptr [esp + 0x4c], ebp */
  W32((uint32_t)(esp + 0x4cu), ebp);
/* 91c455: jmp 0x91cb1f */
  goto L_91cb1f;
L_91c45a: /* 91c45a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 91c45d: jp 0x91c52f */
  if (pf) goto L_91c52f;
L_91c463: /* 91c463: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 91c465: fabs  */
  ST0 = fabs(ST0);
/* 91c467: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 91c46a: fabs  */
  ST0 = fabs(ST0);
/* 91c46c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 91c46e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 91c470: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 91c472: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 91c475: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 91c477: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 91c47a: jp 0x91c4d5 */
  if (pf) goto L_91c4d5;
L_91c47c: /* 91c47c: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 91c47e: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 91c486: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 91c488: fmulp st(2) */
  STI(2) = STI(2) * ST0;
  FPOP();
/* 91c48a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 91c48c: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 91c48e: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 91c490: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 91c492: fsqrt  */
  ST0 = sqrt(ST0);
/* 91c494: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 91c496: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 91c49c: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 91c49e: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 91c4a1: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 91c4a5: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 91c4a7: fchs  */
  ST0 = -ST0;
/* 91c4a9: fst dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0);
/* 91c4ad: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 91c4b0: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 91c4b4: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 91c4b8: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 91c4bb: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 91c4bf: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 91c4c1: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91c4c3: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 91c4c7: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 91c4cb: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 91c4ce: fchs  */
  ST0 = -ST0;
/* 91c4d0: jmp 0x91c614 */
  goto L_91c614;
L_91c4d5: /* 91c4d5: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 91c4d8: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 91c4e0: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 91c4e2: fmulp st(2) */
  STI(2) = STI(2) * ST0;
  FPOP();
/* 91c4e4: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 91c4e6: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 91c4e8: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 91c4ea: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 91c4ec: fsqrt  */
  ST0 = sqrt(ST0);
/* 91c4ee: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 91c4f0: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 91c4f6: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 91c4f8: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 91c4fb: fchs  */
  ST0 = -ST0;
/* 91c4fd: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 91c501: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 91c504: fst dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0);
/* 91c508: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 91c50b: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 91c50f: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 91c512: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91c514: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 91c518: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 91c51c: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 91c51e: fchs  */
  ST0 = -ST0;
/* 91c520: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 91c524: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 91c528: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 91c52a: jmp 0x91c614 */
  goto L_91c614;
L_91c52f: /* 91c52f: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91c531: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 91c535: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 91c538: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 91c53c: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 91c53f: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91c541: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 91c545: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 91c549: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 91c54b: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 91c54f: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 91c552: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91c554: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 91c558: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 91c55c: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 91c55f: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 91c563: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 91c565: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91c567: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 91c56b: jne 0x91c618 */
  if (!zf) goto L_91c618;
L_91c571: /* 91c571: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 91c575: mov dword ptr [esp + 0x5c], 0x3f3504f3 */
  W32((uint32_t)(esp + 0x5cu), 0x3f3504f3u);
/* 91c57d: fmul dword ptr [0xa07fec] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fecu)));
/* 91c583: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 91c587: fmul dword ptr [0xa07fec] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fecu)));
/* 91c58d: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 91c591: fmul dword ptr [0xa07fec] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fecu)));
/* 91c597: fstp dword ptr [esp + 0x9c] */
  WF32((uint32_t)(esp + 0x9cu), ST0); FPOP();
/* 91c59e: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 91c5a2: fmul dword ptr [0xa07fec] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fecu)));
/* 91c5a8: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 91c5ac: fmul dword ptr [0xa07fec] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fecu)));
/* 91c5b2: fstp dword ptr [esp + 0x80] */
  WF32((uint32_t)(esp + 0x80u), ST0); FPOP();
/* 91c5b9: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 91c5bd: fmul dword ptr [0xa07fec] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fecu)));
/* 91c5c3: fstp dword ptr [esp + 0x84] */
  WF32((uint32_t)(esp + 0x84u), ST0); FPOP();
/* 91c5ca: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 91c5cc: fadd st(3) */
  ST0 = ST0 + STI(3);
/* 91c5ce: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 91c5d2: fld dword ptr [esp + 0x80] */
  { double v = F32((uint32_t)(esp + 0x80u)); FPUSH(v); }
/* 91c5d9: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 91c5db: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 91c5df: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 91c5e6: fadd dword ptr [esp + 0x9c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x9cu)));
/* 91c5ed: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 91c5f1: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 91c5f3: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 91c5f5: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 91c5f9: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 91c5fb: fsub dword ptr [esp + 0x80] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x80u)));
/* 91c602: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 91c606: fld dword ptr [esp + 0x9c] */
  { double v = F32((uint32_t)(esp + 0x9cu)); FPUSH(v); }
/* 91c60d: fsub dword ptr [esp + 0x84] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x84u)));
L_91c614: /* 91c614: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
L_91c618: /* 91c618: xor edi, edi */
  edi = 0;
/* 91c61a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_91c620: /* 91c620: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91c623: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* 91c626: mov eax, ecx */
  eax = ecx;
/* 91c628: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91c629: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91c62c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91c62e: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91c631: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91c637: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 91c63a: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 91c63d: jns 0x91c644 */
  if (!sf) goto L_91c644;
L_91c63f: /* 91c63f: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91c640: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91c643: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91c644: /* 91c644: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 91c647: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 91c64a: mov dword ptr [edx + ecx*4], ebp */
  W32((uint32_t)(edx + ecx*4), ebp);
/* 91c64d: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91c650: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* 91c653: mov eax, ecx */
  eax = ecx;
/* 91c655: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91c656: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91c659: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91c65b: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91c65e: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91c664: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 91c667: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 91c66a: jns 0x91c671 */
  if (!sf) goto L_91c671;
L_91c66c: /* 91c66c: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91c66d: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91c670: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91c671: /* 91c671: lea eax, [ecx + edx*4 + 0x18] */
  eax = (uint32_t)(ecx + edx*4 + 0x18u);
/* 91c675: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 91c678: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 91c679: cmp edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91c67c: mov dword ptr [ecx + eax*4], ebp */
  W32((uint32_t)(ecx + eax*4), ebp);
/* 91c67f: jne 0x91c620 */
  if (!zf) goto L_91c620;
L_91c681: /* 91c681: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 91c685: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 91c689: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 91c68d: mov dword ptr [edx + 4], ebp */
  W32((uint32_t)(edx + 0x4u), ebp);
/* 91c690: mov edx, dword ptr [esp + 0x68] */
  edx = R32((uint32_t)(esp + 0x68u));
/* 91c694: mov dword ptr [eax + 4], ebp */
  W32((uint32_t)(eax + 0x4u), ebp);
/* 91c697: mov dword ptr [ecx + 4], ebp */
  W32((uint32_t)(ecx + 0x4u), ebp);
/* 91c69a: mov dword ptr [edx + 4], ebp */
  W32((uint32_t)(edx + 0x4u), ebp);
/* 91c69d: xor edi, edi */
  edi = 0;
/* 91c69f: nop  */
L_91c6a0: /* 91c6a0: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91c6a3: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* 91c6a6: mov eax, ecx */
  eax = ecx;
/* 91c6a8: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91c6a9: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91c6ac: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91c6ae: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91c6b1: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91c6b7: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 91c6ba: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 91c6bd: jns 0x91c6c4 */
  if (!sf) goto L_91c6c4;
L_91c6bf: /* 91c6bf: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91c6c0: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91c6c3: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91c6c4: /* 91c6c4: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 91c6c7: mov edx, dword ptr [esp + edi*4 + 0x10] */
  edx = R32((uint32_t)(esp + edi*4 + 0x10u));
/* 91c6cb: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 91c6ce: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 91c6cf: cmp edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91c6d2: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 91c6d5: jl 0x91c6a0 */
  if ((sf != of)) goto L_91c6a0;
L_91c6d7: /* 91c6d7: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91c6da: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* 91c6dd: mov eax, ecx */
  eax = ecx;
/* 91c6df: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91c6e0: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91c6e3: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91c6e5: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91c6e8: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 91c6eb: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 91c6ee: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91c6f4: jns 0x91c6fb */
  if (!sf) goto L_91c6fb;
L_91c6f6: /* 91c6f6: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91c6f7: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91c6fa: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91c6fb: /* 91c6fb: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 91c6ff: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91c701: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 91c705: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 91c708: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 91c70c: lea eax, [ecx + eax*4 + 0x30] */
  eax = (uint32_t)(ecx + eax*4 + 0x30u);
/* 91c710: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 91c714: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91c716: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 91c718: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 91c71c: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 91c720: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 91c724: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 91c728: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91c72a: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* 91c72d: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 91c731: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 91c735: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 91c739: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 91c73d: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91c73f: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
/* 91c742: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 91c746: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91c748: je 0x91c7f8 */
  if (zf) goto L_91c7f8;
L_91c74e: /* 91c74e: xor edi, edi */
  edi = 0;
L_91c750: /* 91c750: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91c753: fld dword ptr [esp + edi*4 + 0x10] */
  { double v = F32((uint32_t)(esp + edi*4 + 0x10u)); FPUSH(v); }
/* 91c757: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* 91c75a: fchs  */
  ST0 = -ST0;
/* 91c75c: mov eax, ecx */
  eax = ecx;
/* 91c75e: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91c75f: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91c762: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91c764: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91c767: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91c76d: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 91c770: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 91c773: jns 0x91c77a */
  if (!sf) goto L_91c77a;
L_91c775: /* 91c775: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91c776: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91c779: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91c77a: /* 91c77a: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 91c77d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 91c77e: cmp edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91c781: lea ecx, [ecx + eax*4 + 0x18] */
  ecx = (uint32_t)(ecx + eax*4 + 0x18u);
/* 91c785: fstp dword ptr [edx + ecx*4] */
  WF32((uint32_t)(edx + ecx*4), ST0); FPOP();
/* 91c788: jl 0x91c750 */
  if ((sf != of)) goto L_91c750;
L_91c78a: /* 91c78a: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91c78d: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* 91c790: mov eax, ecx */
  eax = ecx;
/* 91c792: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91c793: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91c796: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91c798: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91c79b: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 91c79e: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 91c7a1: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91c7a7: jns 0x91c7ae */
  if (!sf) goto L_91c7ae;
L_91c7a9: /* 91c7a9: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91c7aa: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91c7ad: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91c7ae: /* 91c7ae: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 91c7b2: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91c7b4: fmul dword ptr [esp + 0x48] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x48u)));
/* 91c7b8: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 91c7bb: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 91c7bf: lea eax, [ecx + eax*4 + 0x90] */
  eax = (uint32_t)(ecx + eax*4 + 0x90u);
/* 91c7c6: fmul dword ptr [esp + 0x44] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x44u)));
/* 91c7ca: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91c7cc: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 91c7ce: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 91c7d2: fmul dword ptr [esp + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x40u)));
/* 91c7d6: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 91c7da: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 91c7de: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91c7e0: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* 91c7e3: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 91c7e7: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 91c7eb: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 91c7ef: fmul dword ptr [esp + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x40u)));
/* 91c7f3: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91c7f5: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
L_91c7f8: /* 91c7f8: mov cl, byte ptr [esp + 0x58] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x58u))) & 0xffu);
/* 91c7fc: test cl, 0x10 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 91c7ff: je 0x91c820 */
  if (zf) goto L_91c820;
L_91c801: /* 91c801: fld dword ptr [ebx + 0x1bc] */
  { double v = F32((uint32_t)(ebx + 0x1bcu)); FPUSH(v); }
/* 91c807: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 91c80b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 91c80d: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 91c810: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 91c816: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 91c818: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 91c81b: jp 0x91c820 */
  if (pf) goto L_91c820;
L_91c81d: /* 91c81d: mov dword ptr [edx + 4], ebp */
  W32((uint32_t)(edx + 0x4u), ebp);
L_91c820: /* 91c820: test cl, 0x40 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 91c823: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 91c827: je 0x91c832 */
  if (zf) goto L_91c832;
L_91c829: /* 91c829: mov edx, dword ptr [ebx + 0x1cc] */
  edx = R32((uint32_t)(ebx + 0x1ccu));
/* 91c82f: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
L_91c832: /* 91c832: cmp dword ptr [esp + 0x6c], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x6cu))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91c836: je 0x91c866 */
  if (zf) goto L_91c866;
L_91c838: /* 91c838: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 91c83c: fmul dword ptr [ebx + 0x190] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x190u)));
/* 91c842: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 91c846: fmul dword ptr [ebx + 0x18c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x18cu)));
/* 91c84c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91c84e: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 91c852: fmul dword ptr [ebx + 0x188] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x188u)));
/* 91c858: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91c85a: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 91c85d: fst dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0);
/* 91c860: fstp dword ptr [ebx + 0x1cc] */
  WF32((uint32_t)(ebx + 0x1ccu), ST0); FPOP();
L_91c866: /* 91c866: mov eax, dword ptr [ebx + 0x198] */
  eax = R32((uint32_t)(ebx + 0x198u));
/* 91c86c: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91c86e: je 0x91c87d */
  if (zf) goto L_91c87d;
L_91c870: /* 91c870: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91c873: je 0x91c87d */
  if (zf) goto L_91c87d;
L_91c875: /* 91c875: fld dword ptr [0xa13bbc] */
  { double v = F32((uint32_t)(0xa13bbcu)); FPUSH(v); }
/* 91c87b: jmp 0x91c887 */
  goto L_91c887;
L_91c87d: /* 91c87d: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 91c881: fmul dword ptr [ebx + 0x1b4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x1b4u)));
L_91c887: /* 91c887: mov eax, dword ptr [esp + 0x64] */
  eax = R32((uint32_t)(esp + 0x64u));
/* 91c88b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 91c88d: mov ecx, dword ptr [esp + 0x60] */
  ecx = R32((uint32_t)(esp + 0x60u));
/* 91c891: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 91c894: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 91c898: fchs  */
  ST0 = -ST0;
/* 91c89a: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
L_91c89d: /* 91c89d: cmp edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91c8a0: jne 0x91cb1f */
  if (!zf) goto L_91cb1f;
L_91c8a6: /* 91c8a6: xor edi, edi */
  edi = 0;
L_91c8a8: /* 91c8a8: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91c8ab: lea ecx, [eax + 2] */
  ecx = (uint32_t)(eax + 0x2u);
/* 91c8ae: mov eax, ecx */
  eax = ecx;
/* 91c8b0: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91c8b1: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91c8b4: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91c8b6: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91c8b9: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91c8bf: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 91c8c2: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 91c8c5: jns 0x91c8cc */
  if (!sf) goto L_91c8cc;
L_91c8c7: /* 91c8c7: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91c8c8: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91c8cb: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91c8cc: /* 91c8cc: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 91c8cf: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 91c8d2: mov dword ptr [edx + ecx*4], ebp */
  W32((uint32_t)(edx + ecx*4), ebp);
/* 91c8d5: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91c8d8: lea ecx, [eax + 2] */
  ecx = (uint32_t)(eax + 0x2u);
/* 91c8db: mov eax, ecx */
  eax = ecx;
/* 91c8dd: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91c8de: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91c8e1: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91c8e3: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91c8e6: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91c8ec: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 91c8ef: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 91c8f2: jns 0x91c8f9 */
  if (!sf) goto L_91c8f9;
L_91c8f4: /* 91c8f4: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91c8f5: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91c8f8: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91c8f9: /* 91c8f9: lea eax, [ecx + edx*4 + 0x18] */
  eax = (uint32_t)(ecx + edx*4 + 0x18u);
/* 91c8fd: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 91c900: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 91c901: cmp edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91c904: mov dword ptr [ecx + eax*4], ebp */
  W32((uint32_t)(ecx + eax*4), ebp);
/* 91c907: jne 0x91c8a8 */
  if (!zf) goto L_91c8a8;
L_91c909: /* 91c909: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 91c90d: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 91c911: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 91c915: mov dword ptr [edx + 8], ebp */
  W32((uint32_t)(edx + 0x8u), ebp);
/* 91c918: mov edx, dword ptr [esp + 0x68] */
  edx = R32((uint32_t)(esp + 0x68u));
/* 91c91c: mov dword ptr [eax + 8], ebp */
  W32((uint32_t)(eax + 0x8u), ebp);
/* 91c91f: mov dword ptr [ecx + 8], ebp */
  W32((uint32_t)(ecx + 0x8u), ebp);
/* 91c922: mov dword ptr [edx + 8], ebp */
  W32((uint32_t)(edx + 0x8u), ebp);
/* 91c925: xor edi, edi */
  edi = 0;
L_91c927: /* 91c927: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91c92a: lea ecx, [eax + 2] */
  ecx = (uint32_t)(eax + 0x2u);
/* 91c92d: mov eax, ecx */
  eax = ecx;
/* 91c92f: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91c930: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91c933: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91c935: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91c938: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91c93e: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 91c941: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 91c944: jns 0x91c94b */
  if (!sf) goto L_91c94b;
L_91c946: /* 91c946: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91c947: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91c94a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91c94b: /* 91c94b: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 91c94e: mov edx, dword ptr [esp + edi*4 + 0x1c] */
  edx = R32((uint32_t)(esp + edi*4 + 0x1cu));
/* 91c952: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 91c955: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 91c956: cmp edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91c959: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 91c95c: jl 0x91c927 */
  if ((sf != of)) goto L_91c927;
L_91c95e: /* 91c95e: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91c961: lea ecx, [eax + 2] */
  ecx = (uint32_t)(eax + 0x2u);
/* 91c964: mov eax, ecx */
  eax = ecx;
/* 91c966: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91c967: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91c96a: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91c96c: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91c96f: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 91c972: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 91c975: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91c97b: jns 0x91c982 */
  if (!sf) goto L_91c982;
L_91c97d: /* 91c97d: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91c97e: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91c981: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91c982: /* 91c982: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 91c986: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91c988: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 91c98c: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 91c98f: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 91c993: lea eax, [ecx + eax*4 + 0x30] */
  eax = (uint32_t)(ecx + eax*4 + 0x30u);
/* 91c997: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 91c99b: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91c99d: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 91c99f: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 91c9a3: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 91c9a7: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 91c9ab: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 91c9af: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91c9b1: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* 91c9b4: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 91c9b8: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 91c9bc: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 91c9c0: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 91c9c4: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91c9c6: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
/* 91c9c9: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 91c9cd: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91c9cf: je 0x91ca7f */
  if (zf) goto L_91ca7f;
L_91c9d5: /* 91c9d5: xor edi, edi */
  edi = 0;
L_91c9d7: /* 91c9d7: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91c9da: fld dword ptr [esp + edi*4 + 0x1c] */
  { double v = F32((uint32_t)(esp + edi*4 + 0x1cu)); FPUSH(v); }
/* 91c9de: lea ecx, [eax + 2] */
  ecx = (uint32_t)(eax + 0x2u);
/* 91c9e1: fchs  */
  ST0 = -ST0;
/* 91c9e3: mov eax, ecx */
  eax = ecx;
/* 91c9e5: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91c9e6: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91c9e9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91c9eb: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91c9ee: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91c9f4: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 91c9f7: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 91c9fa: jns 0x91ca01 */
  if (!sf) goto L_91ca01;
L_91c9fc: /* 91c9fc: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91c9fd: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91ca00: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91ca01: /* 91ca01: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 91ca04: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 91ca05: cmp edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 91ca08: lea ecx, [ecx + eax*4 + 0x18] */
  ecx = (uint32_t)(ecx + eax*4 + 0x18u);
/* 91ca0c: fstp dword ptr [edx + ecx*4] */
  WF32((uint32_t)(edx + ecx*4), ST0); FPOP();
/* 91ca0f: jl 0x91c9d7 */
  if ((sf != of)) goto L_91c9d7;
L_91ca11: /* 91ca11: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 91ca14: lea ecx, [eax + 2] */
  ecx = (uint32_t)(eax + 0x2u);
/* 91ca17: mov eax, ecx */
  eax = ecx;
/* 91ca19: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 91ca1a: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 91ca1d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91ca1f: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 91ca22: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 91ca25: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 91ca28: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 91ca2e: jns 0x91ca35 */
  if (!sf) goto L_91ca35;
L_91ca30: /* 91ca30: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 91ca31: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 91ca34: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_91ca35: /* 91ca35: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 91ca39: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 91ca3b: fmul dword ptr [esp + 0x48] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x48u)));
/* 91ca3f: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 91ca42: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 91ca46: lea eax, [ecx + eax*4 + 0x90] */
  eax = (uint32_t)(ecx + eax*4 + 0x90u);
/* 91ca4d: fmul dword ptr [esp + 0x44] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x44u)));
/* 91ca51: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91ca53: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 91ca55: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 91ca59: fmul dword ptr [esp + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x40u)));
/* 91ca5d: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 91ca61: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 91ca65: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91ca67: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* 91ca6a: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 91ca6e: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 91ca72: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 91ca76: fmul dword ptr [esp + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x40u)));
/* 91ca7a: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 91ca7c: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
L_91ca7f: /* 91ca7f: mov cl, byte ptr [esp + 0x58] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x58u))) & 0xffu);
/* 91ca83: test cl, 0x20 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 91ca86: je 0x91caa7 */
  if (zf) goto L_91caa7;
L_91ca88: /* 91ca88: fld dword ptr [ebx + 0x1c8] */
  { double v = F32((uint32_t)(ebx + 0x1c8u)); FPUSH(v); }
/* 91ca8e: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 91ca92: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 91ca94: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 91ca97: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 91ca9d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 91ca9f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 91caa2: jp 0x91caa7 */
  if (pf) goto L_91caa7;
L_91caa4: /* 91caa4: mov dword ptr [edx + 8], ebp */
  W32((uint32_t)(edx + 0x8u), ebp);
L_91caa7: /* 91caa7: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 91caa9: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 91caad: jns 0x91cab8 */
  if (!sf) goto L_91cab8;
L_91caaf: /* 91caaf: mov edx, dword ptr [ebx + 0x1d0] */
  edx = R32((uint32_t)(ebx + 0x1d0u));
/* 91cab5: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
L_91cab8: /* 91cab8: cmp dword ptr [esp + 0x6c], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x6cu))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91cabc: je 0x91caec */
  if (zf) goto L_91caec;
L_91cabe: /* 91cabe: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 91cac2: fmul dword ptr [ebx + 0x190] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x190u)));
/* 91cac8: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 91cacc: fmul dword ptr [ebx + 0x18c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x18cu)));
/* 91cad2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91cad4: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 91cad8: fmul dword ptr [ebx + 0x188] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x188u)));
/* 91cade: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 91cae0: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 91cae3: fst dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0);
/* 91cae6: fstp dword ptr [ebx + 0x1d0] */
  WF32((uint32_t)(ebx + 0x1d0u), ST0); FPOP();
L_91caec: /* 91caec: mov eax, dword ptr [ebx + 0x19c] */
  eax = R32((uint32_t)(ebx + 0x19cu));
/* 91caf2: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91caf4: je 0x91cb03 */
  if (zf) goto L_91cb03;
L_91caf6: /* 91caf6: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 91caf9: je 0x91cb03 */
  if (zf) goto L_91cb03;
L_91cafb: /* 91cafb: fld dword ptr [0xa13bbc] */
  { double v = F32((uint32_t)(0xa13bbcu)); FPUSH(v); }
/* 91cb01: jmp 0x91cb0d */
  goto L_91cb0d;
L_91cb03: /* 91cb03: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 91cb07: fmul dword ptr [ebx + 0x1c0] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x1c0u)));
L_91cb0d: /* 91cb0d: mov eax, dword ptr [esp + 0x64] */
  eax = R32((uint32_t)(esp + 0x64u));
/* 91cb11: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 91cb13: mov ecx, dword ptr [esp + 0x60] */
  ecx = R32((uint32_t)(esp + 0x60u));
/* 91cb17: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 91cb1a: fchs  */
  ST0 = -ST0;
/* 91cb1c: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
L_91cb1f: /* 91cb1f: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 91cb23: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 91cb24: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 91cb25: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 91cb26: call 0x91b610 */
  esp -= 4; W32(esp, 0x91cb2bu); SPILL(); f_91b610(); if (g_unwind) return; RELOAD();
/* 91cb2b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 91cb2c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 91cb2d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 91cb2e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 91cb2f: add esp, 0x90 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x90u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 91cb35: ret 0x14 */
  esp += 24; SPILL(); return;
}
